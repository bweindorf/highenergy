// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__BONJ

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "TBonjourBrowser.h"
#include "TBonjourRecord.h"
#include "TBonjourRegistrar.h"
#include "TBonjourResolver.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TBonjourBrowser(void *p = 0);
   static void *newArray_TBonjourBrowser(Long_t size, void *p);
   static void delete_TBonjourBrowser(void *p);
   static void deleteArray_TBonjourBrowser(void *p);
   static void destruct_TBonjourBrowser(void *p);
   static void streamer_TBonjourBrowser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBonjourBrowser*)
   {
      ::TBonjourBrowser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBonjourBrowser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBonjourBrowser", ::TBonjourBrowser::Class_Version(), "TBonjourBrowser.h", 53,
                  typeid(::TBonjourBrowser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBonjourBrowser::Dictionary, isa_proxy, 16,
                  sizeof(::TBonjourBrowser) );
      instance.SetNew(&new_TBonjourBrowser);
      instance.SetNewArray(&newArray_TBonjourBrowser);
      instance.SetDelete(&delete_TBonjourBrowser);
      instance.SetDeleteArray(&deleteArray_TBonjourBrowser);
      instance.SetDestructor(&destruct_TBonjourBrowser);
      instance.SetStreamerFunc(&streamer_TBonjourBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBonjourBrowser*)
   {
      return GenerateInitInstanceLocal((::TBonjourBrowser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBonjourBrowser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBonjourRecord(void *p = 0);
   static void *newArray_TBonjourRecord(Long_t size, void *p);
   static void delete_TBonjourRecord(void *p);
   static void deleteArray_TBonjourRecord(void *p);
   static void destruct_TBonjourRecord(void *p);
   static void streamer_TBonjourRecord(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBonjourRecord*)
   {
      ::TBonjourRecord *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBonjourRecord >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBonjourRecord", ::TBonjourRecord::Class_Version(), "TBonjourRecord.h", 30,
                  typeid(::TBonjourRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBonjourRecord::Dictionary, isa_proxy, 16,
                  sizeof(::TBonjourRecord) );
      instance.SetNew(&new_TBonjourRecord);
      instance.SetNewArray(&newArray_TBonjourRecord);
      instance.SetDelete(&delete_TBonjourRecord);
      instance.SetDeleteArray(&deleteArray_TBonjourRecord);
      instance.SetDestructor(&destruct_TBonjourRecord);
      instance.SetStreamerFunc(&streamer_TBonjourRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBonjourRecord*)
   {
      return GenerateInitInstanceLocal((::TBonjourRecord*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBonjourRecord*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBonjourRegistrar(void *p = 0);
   static void *newArray_TBonjourRegistrar(Long_t size, void *p);
   static void delete_TBonjourRegistrar(void *p);
   static void deleteArray_TBonjourRegistrar(void *p);
   static void destruct_TBonjourRegistrar(void *p);
   static void streamer_TBonjourRegistrar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBonjourRegistrar*)
   {
      ::TBonjourRegistrar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBonjourRegistrar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBonjourRegistrar", ::TBonjourRegistrar::Class_Version(), "TBonjourRegistrar.h", 52,
                  typeid(::TBonjourRegistrar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBonjourRegistrar::Dictionary, isa_proxy, 16,
                  sizeof(::TBonjourRegistrar) );
      instance.SetNew(&new_TBonjourRegistrar);
      instance.SetNewArray(&newArray_TBonjourRegistrar);
      instance.SetDelete(&delete_TBonjourRegistrar);
      instance.SetDeleteArray(&deleteArray_TBonjourRegistrar);
      instance.SetDestructor(&destruct_TBonjourRegistrar);
      instance.SetStreamerFunc(&streamer_TBonjourRegistrar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBonjourRegistrar*)
   {
      return GenerateInitInstanceLocal((::TBonjourRegistrar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBonjourRegistrar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBonjourResolver(void *p = 0);
   static void *newArray_TBonjourResolver(Long_t size, void *p);
   static void delete_TBonjourResolver(void *p);
   static void deleteArray_TBonjourResolver(void *p);
   static void destruct_TBonjourResolver(void *p);
   static void streamer_TBonjourResolver(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBonjourResolver*)
   {
      ::TBonjourResolver *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBonjourResolver >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBonjourResolver", ::TBonjourResolver::Class_Version(), "TBonjourResolver.h", 45,
                  typeid(::TBonjourResolver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBonjourResolver::Dictionary, isa_proxy, 16,
                  sizeof(::TBonjourResolver) );
      instance.SetNew(&new_TBonjourResolver);
      instance.SetNewArray(&newArray_TBonjourResolver);
      instance.SetDelete(&delete_TBonjourResolver);
      instance.SetDeleteArray(&deleteArray_TBonjourResolver);
      instance.SetDestructor(&destruct_TBonjourResolver);
      instance.SetStreamerFunc(&streamer_TBonjourResolver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBonjourResolver*)
   {
      return GenerateInitInstanceLocal((::TBonjourResolver*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBonjourResolver*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TBonjourBrowser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBonjourBrowser::Class_Name()
{
   return "TBonjourBrowser";
}

//______________________________________________________________________________
const char *TBonjourBrowser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBonjourBrowser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBonjourBrowser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBonjourBrowser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBonjourBrowser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBonjourBrowser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBonjourBrowser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBonjourBrowser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBonjourRecord::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBonjourRecord::Class_Name()
{
   return "TBonjourRecord";
}

//______________________________________________________________________________
const char *TBonjourRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBonjourRecord*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBonjourRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBonjourRecord*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBonjourRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBonjourRecord*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBonjourRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBonjourRecord*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBonjourRegistrar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBonjourRegistrar::Class_Name()
{
   return "TBonjourRegistrar";
}

//______________________________________________________________________________
const char *TBonjourRegistrar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBonjourRegistrar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBonjourRegistrar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBonjourRegistrar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBonjourRegistrar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBonjourRegistrar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBonjourRegistrar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBonjourRegistrar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBonjourResolver::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBonjourResolver::Class_Name()
{
   return "TBonjourResolver";
}

//______________________________________________________________________________
const char *TBonjourResolver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBonjourResolver*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBonjourResolver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBonjourResolver*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBonjourResolver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBonjourResolver*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBonjourResolver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBonjourResolver*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TBonjourBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBonjourBrowser.

   TObject::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBonjourBrowser(void *p) {
      return  p ? new(p) ::TBonjourBrowser : new ::TBonjourBrowser;
   }
   static void *newArray_TBonjourBrowser(Long_t nElements, void *p) {
      return p ? new(p) ::TBonjourBrowser[nElements] : new ::TBonjourBrowser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBonjourBrowser(void *p) {
      delete ((::TBonjourBrowser*)p);
   }
   static void deleteArray_TBonjourBrowser(void *p) {
      delete [] ((::TBonjourBrowser*)p);
   }
   static void destruct_TBonjourBrowser(void *p) {
      typedef ::TBonjourBrowser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBonjourBrowser(TBuffer &buf, void *obj) {
      ((::TBonjourBrowser*)obj)->::TBonjourBrowser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBonjourBrowser

//______________________________________________________________________________
void TBonjourRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBonjourRecord.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBonjourRecord(void *p) {
      return  p ? new(p) ::TBonjourRecord : new ::TBonjourRecord;
   }
   static void *newArray_TBonjourRecord(Long_t nElements, void *p) {
      return p ? new(p) ::TBonjourRecord[nElements] : new ::TBonjourRecord[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBonjourRecord(void *p) {
      delete ((::TBonjourRecord*)p);
   }
   static void deleteArray_TBonjourRecord(void *p) {
      delete [] ((::TBonjourRecord*)p);
   }
   static void destruct_TBonjourRecord(void *p) {
      typedef ::TBonjourRecord current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBonjourRecord(TBuffer &buf, void *obj) {
      ((::TBonjourRecord*)obj)->::TBonjourRecord::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBonjourRecord

//______________________________________________________________________________
void TBonjourRegistrar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBonjourRegistrar.

   TObject::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBonjourRegistrar(void *p) {
      return  p ? new(p) ::TBonjourRegistrar : new ::TBonjourRegistrar;
   }
   static void *newArray_TBonjourRegistrar(Long_t nElements, void *p) {
      return p ? new(p) ::TBonjourRegistrar[nElements] : new ::TBonjourRegistrar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBonjourRegistrar(void *p) {
      delete ((::TBonjourRegistrar*)p);
   }
   static void deleteArray_TBonjourRegistrar(void *p) {
      delete [] ((::TBonjourRegistrar*)p);
   }
   static void destruct_TBonjourRegistrar(void *p) {
      typedef ::TBonjourRegistrar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBonjourRegistrar(TBuffer &buf, void *obj) {
      ((::TBonjourRegistrar*)obj)->::TBonjourRegistrar::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBonjourRegistrar

//______________________________________________________________________________
void TBonjourResolver::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBonjourResolver.

   TObject::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBonjourResolver(void *p) {
      return  p ? new(p) ::TBonjourResolver : new ::TBonjourResolver;
   }
   static void *newArray_TBonjourResolver(Long_t nElements, void *p) {
      return p ? new(p) ::TBonjourResolver[nElements] : new ::TBonjourResolver[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBonjourResolver(void *p) {
      delete ((::TBonjourResolver*)p);
   }
   static void deleteArray_TBonjourResolver(void *p) {
      delete [] ((::TBonjourResolver*)p);
   }
   static void destruct_TBonjourResolver(void *p) {
      typedef ::TBonjourResolver current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBonjourResolver(TBuffer &buf, void *obj) {
      ((::TBonjourResolver*)obj)->::TBonjourResolver::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBonjourResolver

namespace {
  void TriggerDictionaryInitialization_libBonjour_Impl() {
    static const char* headers[] = {
"TBonjourBrowser.h",
"TBonjourRecord.h",
"TBonjourRegistrar.h",
"TBonjourResolver.h",
0
    };
    static const char* includePaths[] = {
"/usr/include",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libBonjour dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Browse hosts for specific bonjour service type)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TBonjourBrowser.h")))  TBonjourBrowser;
class __attribute__((annotate(R"ATTRDUMP(Bonjour information record)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TBonjourRecord.h")))  TBonjourRecord;
class __attribute__((annotate(R"ATTRDUMP(Register Bonjour service)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TBonjourRegistrar.h")))  TBonjourRegistrar;
class __attribute__((annotate(R"ATTRDUMP(Resolve Bonjour to actual IP address and port)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TBonjourResolver.h")))  TBonjourResolver;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libBonjour dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TBonjourBrowser.h"
#include "TBonjourRecord.h"
#include "TBonjourRegistrar.h"
#include "TBonjourResolver.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TBonjourBrowser", payloadCode, "@",
"TBonjourRecord", payloadCode, "@",
"TBonjourRegistrar", payloadCode, "@",
"TBonjourResolver", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libBonjour",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libBonjour_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libBonjour_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libBonjour() {
  TriggerDictionaryInitialization_libBonjour_Impl();
}
