/// \file ROOT/TDirectory.h
/// \ingroup Base ROOT7
/// \author Axel Naumann <axel@cern.ch>
/// \date 2015-07-31
/// \warning This is part of the ROOT 7 prototype! It will change without notice. It might trigger earthquakes. Feedback is welcome!

/*************************************************************************
 * Copyright (C) 1995-2015, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT7_TDirectory
#define ROOT7_TDirectory

#include "ROOT/TLogger.hxx"
#include "ROOT/TDirectoryEntry.hxx"

#include <iterator>
#include <memory>
#include <type_traits>
#include <unordered_map>
#include <string>

namespace ROOT {
namespace Experimental {

/**
  Objects of this class are thrown to signal that no key with that name exists.
 */
class TDirectoryUnknownKey: public std::exception {
  std::string fKeyName;
public:
  TDirectoryUnknownKey(const std::string& keyName): fKeyName(keyName) {}
  const char* what() const noexcept final { return fKeyName.c_str(); }
};


/**
  Objects of this class are thrown to signal that the value known under the
  given name .
 */
class TDirectoryTypeMismatch: public std::exception {
  std::string fKeyName;
  // FIXME: add expected and actual type names.
public:
  TDirectoryTypeMismatch(const std::string& keyName): fKeyName(keyName) {}
  const char* what() const noexcept final { return fKeyName.c_str(); }
};

/**
 Key/value store of objects.

 Given a name, a `TDirectory` can store and retrieve an object. It will manage
 shared ownership through a `shared_ptr`.

 Example:
  TDirectory dirMC;
  TDirectory dirHiggs;

  dirMC.Add("higgs", histHiggsMC);
  dirHiggs.Add("mc", histHiggsMC);

 */

class TDirectory {
  /// The directory content is a hashed map of name =>
  /// `Internal::TDirectoryEntry`.
  using ContentMap_t = std::unordered_map<std::string, Internal::TDirectoryEntry>;

  /// The `TDirectory`'s content.
  ContentMap_t fContent;

  template <class T>
  struct ToContentType {
    using decaytype = typename std::decay<T>::type;
    using type = typename std::enable_if<
       !std::is_pointer<decaytype>::value
    && !std::is_member_pointer<decaytype>::value
    && !std::is_void<decaytype>::value,
    decaytype>::type;
  };
  template <class T>
  using ToContentType_t = typename ToContentType<T>::type;

public:
  /// Create an object of type `T` (passing some arguments to its constructor).
  /// The `TDirectory` will have shared ownership of the object.
  ///
  /// \param name  - Key of the object.
  /// \param args  - arguments to be passed to the constructor of `T`
  template <class T, class... ARGS>
  std::shared_ptr<ToContentType_t<T>> Create(const std::string& name, ARGS&&... args) {
    auto ptr = std::make_shared<ToContentType_t<T>>(std::forward<ARGS>(args)...);
    Add(name, ptr);
    return ptr;
  }

  /// Find the TDirectoryEntry associated to the name. Returns empty TDirectoryEntry if
  /// nothing is found.
  Internal::TDirectoryEntry Find(const std::string& name) const {
    auto idx = fContent.find(name);
    if (idx == fContent.end())
      return nullptr;
    return idx->second;
  }

  /**
  Status of the call to Find<T>(name).
  */
  enum class EFindStatus {
    kValidValue,      ///< Value known for this key name and type
    kValidValueBase,  ///< Value known for this key name and base type
    kKeyNameNotFound, ///< No key is known for this name
    kTypeMismatch     ///< The provided type does not match the value's type.
  };

  /// Find the TDirectoryEntry associated with the name.
  /// \returns empty TDirectoryEntry in `first` if nothing is found, or if the type does not
  ///    match the expected type. `second` contains the reason.
  /// \note if `second` is kValidValue, then static_pointer_cast<`T`>(`first`.GetPointer())
  ///    is shared_ptr<`T`> to initially stored object
  /// \note if `second` is kValidValueBase, then `first`.CastPointer<`T`>()
  ///    is a valid cast to base class `T` of the stored object
  template <class T>
  std::pair<Internal::TDirectoryEntry, EFindStatus>
  Find(const std::string& name) const {
    auto idx = fContent.find(name);
    if (idx == fContent.end())
      return {nullptr, EFindStatus::kKeyNameNotFound};
    if (idx->second.GetTypeInfo() == typeid(ToContentType_t<T>))
      return {idx->second, EFindStatus::kValidValue};
    if (idx->second.CastPointer<ToContentType_t<T>>())
      return {idx->second, EFindStatus::kValidValueBase};
    return {nullptr, EFindStatus::kTypeMismatch};
  }


  /// Get the object for a key. `T` can be the object's type or a base class.
  /// The `TDirectory` will return the same object for subsequent calls to
  /// `Get().`
  /// \returns a `shared_ptr` to the object or its base.
  /// \throws TDirectoryUnknownKey if no object is stored under this name.
  /// \throws TDirectoryTypeMismatch if the object stored under this name is of
  ///   a type that is not a derived type of `T`.
  template <class T>
  std::shared_ptr<ToContentType_t<T>> Get(const std::string& name) {
    const auto& pair = Find<T>(name);
    const Internal::TDirectoryEntry& entry = pair.first;
    EFindStatus status = pair.second;
    switch (status) {
    case EFindStatus::kValidValue:
      return std::static_pointer_cast<ToContentType_t<T>>(entry.GetPointer());
    case EFindStatus::kValidValueBase:
      return entry.CastPointer<ToContentType_t<T>>();
    case EFindStatus::kTypeMismatch:
      // FIXME: add expected versus actual type name as c'tor args
      throw TDirectoryTypeMismatch(name);
    case EFindStatus::kKeyNameNotFound:
      throw TDirectoryUnknownKey(name);
    }
    return nullptr; // never happens
  }

  /// Add an existing object (rather a `shared_ptr` to it) to the TDirectory.
  /// The TDirectory will have shared ownership.
  template <class T>
  void Add(const std::string& name, const std::shared_ptr<T>& ptr) {
    Internal::TDirectoryEntry entry(ptr);
    // FIXME: CXX17: insert_or_assign
    auto idx = fContent.find(name);
    if (idx != fContent.end()) {
      R__LOG_HERE(ELogLevel::kWarning, "CORE")
        << "Replacing object with name \"" << name << "\"" << std::endl;
      idx->second.swap(entry);
    } else {
      fContent[name].swap(entry);
    }
  }

  /// Dedicated, process-wide TDirectory.
  ///
  /// \note This is *not* thread-safe. You will need to syncronize yourself. In
  /// general it's a bad idea to use a global collection in a multi-threaded
  /// environment; ROOT itself does not make use of it. It is merely offered for
  /// historical, process-wide object registration by name. Instead, pass a
  /// pointer to the object where you need to access it - this is also much
  /// faster than a lookup by name.
  static TDirectory& Heap();
};

} // namespace Experimental
} // namespace ROOT

#endif
