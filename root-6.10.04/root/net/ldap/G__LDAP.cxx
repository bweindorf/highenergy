// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__LDAP

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
#include "CintLDAP.h"
#include "TLDAPAttribute.h"
#include "TLDAPEntry.h"
#include "TLDAPResult.h"
#include "TLDAPServer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TLDAPAttribute(void *p);
   static void deleteArray_TLDAPAttribute(void *p);
   static void destruct_TLDAPAttribute(void *p);
   static void streamer_TLDAPAttribute(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLDAPAttribute*)
   {
      ::TLDAPAttribute *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLDAPAttribute >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLDAPAttribute", ::TLDAPAttribute::Class_Version(), "TLDAPAttribute.h", 19,
                  typeid(::TLDAPAttribute), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLDAPAttribute::Dictionary, isa_proxy, 16,
                  sizeof(::TLDAPAttribute) );
      instance.SetDelete(&delete_TLDAPAttribute);
      instance.SetDeleteArray(&deleteArray_TLDAPAttribute);
      instance.SetDestructor(&destruct_TLDAPAttribute);
      instance.SetStreamerFunc(&streamer_TLDAPAttribute);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLDAPAttribute*)
   {
      return GenerateInitInstanceLocal((::TLDAPAttribute*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLDAPAttribute*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TLDAPEntry(void *p);
   static void deleteArray_TLDAPEntry(void *p);
   static void destruct_TLDAPEntry(void *p);
   static void streamer_TLDAPEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLDAPEntry*)
   {
      ::TLDAPEntry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLDAPEntry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLDAPEntry", ::TLDAPEntry::Class_Version(), "TLDAPEntry.h", 22,
                  typeid(::TLDAPEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLDAPEntry::Dictionary, isa_proxy, 16,
                  sizeof(::TLDAPEntry) );
      instance.SetDelete(&delete_TLDAPEntry);
      instance.SetDeleteArray(&deleteArray_TLDAPEntry);
      instance.SetDestructor(&destruct_TLDAPEntry);
      instance.SetStreamerFunc(&streamer_TLDAPEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLDAPEntry*)
   {
      return GenerateInitInstanceLocal((::TLDAPEntry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLDAPEntry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TLDAPResult(void *p);
   static void deleteArray_TLDAPResult(void *p);
   static void destruct_TLDAPResult(void *p);
   static void streamer_TLDAPResult(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLDAPResult*)
   {
      ::TLDAPResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLDAPResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLDAPResult", ::TLDAPResult::Class_Version(), "TLDAPResult.h", 20,
                  typeid(::TLDAPResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLDAPResult::Dictionary, isa_proxy, 16,
                  sizeof(::TLDAPResult) );
      instance.SetDelete(&delete_TLDAPResult);
      instance.SetDeleteArray(&deleteArray_TLDAPResult);
      instance.SetDestructor(&destruct_TLDAPResult);
      instance.SetStreamerFunc(&streamer_TLDAPResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLDAPResult*)
   {
      return GenerateInitInstanceLocal((::TLDAPResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLDAPResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TLDAPServer(void *p);
   static void deleteArray_TLDAPServer(void *p);
   static void destruct_TLDAPServer(void *p);
   static void streamer_TLDAPServer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLDAPServer*)
   {
      ::TLDAPServer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLDAPServer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLDAPServer", ::TLDAPServer::Class_Version(), "TLDAPServer.h", 21,
                  typeid(::TLDAPServer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLDAPServer::Dictionary, isa_proxy, 16,
                  sizeof(::TLDAPServer) );
      instance.SetDelete(&delete_TLDAPServer);
      instance.SetDeleteArray(&deleteArray_TLDAPServer);
      instance.SetDestructor(&destruct_TLDAPServer);
      instance.SetStreamerFunc(&streamer_TLDAPServer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLDAPServer*)
   {
      return GenerateInitInstanceLocal((::TLDAPServer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLDAPServer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TLDAPAttribute::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLDAPAttribute::Class_Name()
{
   return "TLDAPAttribute";
}

//______________________________________________________________________________
const char *TLDAPAttribute::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLDAPAttribute*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLDAPAttribute::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLDAPAttribute*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLDAPAttribute::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLDAPAttribute*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLDAPAttribute::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLDAPAttribute*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLDAPEntry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLDAPEntry::Class_Name()
{
   return "TLDAPEntry";
}

//______________________________________________________________________________
const char *TLDAPEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLDAPEntry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLDAPEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLDAPEntry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLDAPEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLDAPEntry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLDAPEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLDAPEntry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLDAPResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLDAPResult::Class_Name()
{
   return "TLDAPResult";
}

//______________________________________________________________________________
const char *TLDAPResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLDAPResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLDAPResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLDAPResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLDAPResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLDAPResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLDAPResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLDAPResult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLDAPServer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLDAPServer::Class_Name()
{
   return "TLDAPServer";
}

//______________________________________________________________________________
const char *TLDAPServer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLDAPServer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLDAPServer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLDAPServer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLDAPServer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLDAPServer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLDAPServer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLDAPServer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TLDAPAttribute::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLDAPAttribute.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TLDAPAttribute(void *p) {
      delete ((::TLDAPAttribute*)p);
   }
   static void deleteArray_TLDAPAttribute(void *p) {
      delete [] ((::TLDAPAttribute*)p);
   }
   static void destruct_TLDAPAttribute(void *p) {
      typedef ::TLDAPAttribute current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLDAPAttribute(TBuffer &buf, void *obj) {
      ((::TLDAPAttribute*)obj)->::TLDAPAttribute::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLDAPAttribute

//______________________________________________________________________________
void TLDAPEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLDAPEntry.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TLDAPEntry(void *p) {
      delete ((::TLDAPEntry*)p);
   }
   static void deleteArray_TLDAPEntry(void *p) {
      delete [] ((::TLDAPEntry*)p);
   }
   static void destruct_TLDAPEntry(void *p) {
      typedef ::TLDAPEntry current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLDAPEntry(TBuffer &buf, void *obj) {
      ((::TLDAPEntry*)obj)->::TLDAPEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLDAPEntry

//______________________________________________________________________________
void TLDAPResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLDAPResult.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TLDAPResult(void *p) {
      delete ((::TLDAPResult*)p);
   }
   static void deleteArray_TLDAPResult(void *p) {
      delete [] ((::TLDAPResult*)p);
   }
   static void destruct_TLDAPResult(void *p) {
      typedef ::TLDAPResult current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLDAPResult(TBuffer &buf, void *obj) {
      ((::TLDAPResult*)obj)->::TLDAPResult::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLDAPResult

//______________________________________________________________________________
void TLDAPServer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLDAPServer.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TLDAPServer(void *p) {
      delete ((::TLDAPServer*)p);
   }
   static void deleteArray_TLDAPServer(void *p) {
      delete [] ((::TLDAPServer*)p);
   }
   static void destruct_TLDAPServer(void *p) {
      typedef ::TLDAPServer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLDAPServer(TBuffer &buf, void *obj) {
      ((::TLDAPServer*)obj)->::TLDAPServer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLDAPServer

namespace {
  void TriggerDictionaryInitialization_libRLDAP_Impl() {
    static const char* headers[] = {
"CintLDAP.h",
"TLDAPAttribute.h",
"TLDAPEntry.h",
"TLDAPResult.h",
"TLDAPServer.h",
0
    };
    static const char* includePaths[] = {
"/usr/include",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libRLDAP dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(interface to LDAP)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TLDAPAttribute.h")))  TLDAPAttribute;
class __attribute__((annotate(R"ATTRDUMP(describe one entry in LDAP)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TLDAPEntry.h")))  TLDAPEntry;
class __attribute__((annotate(R"ATTRDUMP(LDAP search result set)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TLDAPResult.h")))  TLDAPResult;
class __attribute__((annotate(R"ATTRDUMP(Connection to LDAP server)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TLDAPServer.h")))  TLDAPServer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRLDAP dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef LDAP_DEPRECATED
  #define LDAP_DEPRECATED 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "CintLDAP.h"
#include "TLDAPAttribute.h"
#include "TLDAPEntry.h"
#include "TLDAPResult.h"
#include "TLDAPServer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TLDAPAttribute", payloadCode, "@",
"TLDAPEntry", payloadCode, "@",
"TLDAPResult", payloadCode, "@",
"TLDAPServer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRLDAP",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRLDAP_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRLDAP_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRLDAP() {
  TriggerDictionaryInitialization_libRLDAP_Impl();
}
