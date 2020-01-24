// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RootAuth

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
#include "AuthConst.h"
#include "TAuthenticate.h"
#include "THostAuth.h"
#include "TRootAuth.h"
#include "TRootSecContext.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TAuthenticate(void *p);
   static void deleteArray_TAuthenticate(void *p);
   static void destruct_TAuthenticate(void *p);
   static void streamer_TAuthenticate(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAuthenticate*)
   {
      ::TAuthenticate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAuthenticate >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAuthenticate", ::TAuthenticate::Class_Version(), "TAuthenticate.h", 57,
                  typeid(::TAuthenticate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAuthenticate::Dictionary, isa_proxy, 16,
                  sizeof(::TAuthenticate) );
      instance.SetDelete(&delete_TAuthenticate);
      instance.SetDeleteArray(&deleteArray_TAuthenticate);
      instance.SetDestructor(&destruct_TAuthenticate);
      instance.SetStreamerFunc(&streamer_TAuthenticate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAuthenticate*)
   {
      return GenerateInitInstanceLocal((::TAuthenticate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAuthenticate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TRootSecContext(void *p);
   static void deleteArray_TRootSecContext(void *p);
   static void destruct_TRootSecContext(void *p);
   static void streamer_TRootSecContext(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootSecContext*)
   {
      ::TRootSecContext *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootSecContext >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootSecContext", ::TRootSecContext::Class_Version(), "TRootSecContext.h", 27,
                  typeid(::TRootSecContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootSecContext::Dictionary, isa_proxy, 16,
                  sizeof(::TRootSecContext) );
      instance.SetDelete(&delete_TRootSecContext);
      instance.SetDeleteArray(&deleteArray_TRootSecContext);
      instance.SetDestructor(&destruct_TRootSecContext);
      instance.SetStreamerFunc(&streamer_TRootSecContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootSecContext*)
   {
      return GenerateInitInstanceLocal((::TRootSecContext*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRootSecContext*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THostAuth(void *p = 0);
   static void *newArray_THostAuth(Long_t size, void *p);
   static void delete_THostAuth(void *p);
   static void deleteArray_THostAuth(void *p);
   static void destruct_THostAuth(void *p);
   static void streamer_THostAuth(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THostAuth*)
   {
      ::THostAuth *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THostAuth >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THostAuth", ::THostAuth::Class_Version(), "THostAuth.h", 34,
                  typeid(::THostAuth), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THostAuth::Dictionary, isa_proxy, 16,
                  sizeof(::THostAuth) );
      instance.SetNew(&new_THostAuth);
      instance.SetNewArray(&newArray_THostAuth);
      instance.SetDelete(&delete_THostAuth);
      instance.SetDeleteArray(&deleteArray_THostAuth);
      instance.SetDestructor(&destruct_THostAuth);
      instance.SetStreamerFunc(&streamer_THostAuth);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THostAuth*)
   {
      return GenerateInitInstanceLocal((::THostAuth*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THostAuth*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootAuth(void *p = 0);
   static void *newArray_TRootAuth(Long_t size, void *p);
   static void delete_TRootAuth(void *p);
   static void deleteArray_TRootAuth(void *p);
   static void destruct_TRootAuth(void *p);
   static void streamer_TRootAuth(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootAuth*)
   {
      ::TRootAuth *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootAuth >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootAuth", ::TRootAuth::Class_Version(), "TRootAuth.h", 31,
                  typeid(::TRootAuth), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootAuth::Dictionary, isa_proxy, 16,
                  sizeof(::TRootAuth) );
      instance.SetNew(&new_TRootAuth);
      instance.SetNewArray(&newArray_TRootAuth);
      instance.SetDelete(&delete_TRootAuth);
      instance.SetDeleteArray(&deleteArray_TRootAuth);
      instance.SetDestructor(&destruct_TRootAuth);
      instance.SetStreamerFunc(&streamer_TRootAuth);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootAuth*)
   {
      return GenerateInitInstanceLocal((::TRootAuth*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRootAuth*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAuthenticate::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAuthenticate::Class_Name()
{
   return "TAuthenticate";
}

//______________________________________________________________________________
const char *TAuthenticate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAuthenticate*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAuthenticate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAuthenticate*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAuthenticate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAuthenticate*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAuthenticate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAuthenticate*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootSecContext::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootSecContext::Class_Name()
{
   return "TRootSecContext";
}

//______________________________________________________________________________
const char *TRootSecContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSecContext*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootSecContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSecContext*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootSecContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSecContext*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootSecContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSecContext*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THostAuth::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THostAuth::Class_Name()
{
   return "THostAuth";
}

//______________________________________________________________________________
const char *THostAuth::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THostAuth*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THostAuth::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THostAuth*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THostAuth::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THostAuth*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THostAuth::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THostAuth*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootAuth::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootAuth::Class_Name()
{
   return "TRootAuth";
}

//______________________________________________________________________________
const char *TRootAuth::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootAuth*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootAuth::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootAuth*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootAuth::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootAuth*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootAuth::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootAuth*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAuthenticate::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAuthenticate.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAuthenticate(void *p) {
      delete ((::TAuthenticate*)p);
   }
   static void deleteArray_TAuthenticate(void *p) {
      delete [] ((::TAuthenticate*)p);
   }
   static void destruct_TAuthenticate(void *p) {
      typedef ::TAuthenticate current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAuthenticate(TBuffer &buf, void *obj) {
      ((::TAuthenticate*)obj)->::TAuthenticate::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAuthenticate

//______________________________________________________________________________
void TRootSecContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootSecContext.

   TSecContext::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRootSecContext(void *p) {
      delete ((::TRootSecContext*)p);
   }
   static void deleteArray_TRootSecContext(void *p) {
      delete [] ((::TRootSecContext*)p);
   }
   static void destruct_TRootSecContext(void *p) {
      typedef ::TRootSecContext current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootSecContext(TBuffer &buf, void *obj) {
      ((::TRootSecContext*)obj)->::TRootSecContext::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootSecContext

//______________________________________________________________________________
void THostAuth::Streamer(TBuffer &R__b)
{
   // Stream an object of class THostAuth.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fHost.Streamer(R__b);
      R__b >> fServer;
      fUser.Streamer(R__b);
      R__b >> fNumMethods;
      R__b.ReadStaticArray((int*)fMethods);
      int R__i;
      for (R__i = 0; R__i < 6; R__i++)
         fDetails[R__i].Streamer(R__b);
      R__b.ReadStaticArray((int*)fSuccess);
      R__b.ReadStaticArray((int*)fFailure);
      R__b >> fActive;
      R__b >> fSecContexts;
      R__b.CheckByteCount(R__s, R__c, THostAuth::IsA());
   } else {
      R__c = R__b.WriteVersion(THostAuth::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fHost.Streamer(R__b);
      R__b << fServer;
      fUser.Streamer(R__b);
      R__b << fNumMethods;
      R__b.WriteArray(fMethods, 6);
      int R__i;
      for (R__i = 0; R__i < 6; R__i++)
         fDetails[R__i].Streamer(R__b);
      R__b.WriteArray(fSuccess, 6);
      R__b.WriteArray(fFailure, 6);
      R__b << fActive;
      R__b << fSecContexts;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THostAuth(void *p) {
      return  p ? new(p) ::THostAuth : new ::THostAuth;
   }
   static void *newArray_THostAuth(Long_t nElements, void *p) {
      return p ? new(p) ::THostAuth[nElements] : new ::THostAuth[nElements];
   }
   // Wrapper around operator delete
   static void delete_THostAuth(void *p) {
      delete ((::THostAuth*)p);
   }
   static void deleteArray_THostAuth(void *p) {
      delete [] ((::THostAuth*)p);
   }
   static void destruct_THostAuth(void *p) {
      typedef ::THostAuth current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THostAuth(TBuffer &buf, void *obj) {
      ((::THostAuth*)obj)->::THostAuth::Streamer(buf);
   }
} // end of namespace ROOT for class ::THostAuth

//______________________________________________________________________________
void TRootAuth::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootAuth.

   TVirtualAuth::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootAuth(void *p) {
      return  p ? new(p) ::TRootAuth : new ::TRootAuth;
   }
   static void *newArray_TRootAuth(Long_t nElements, void *p) {
      return p ? new(p) ::TRootAuth[nElements] : new ::TRootAuth[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootAuth(void *p) {
      delete ((::TRootAuth*)p);
   }
   static void deleteArray_TRootAuth(void *p) {
      delete [] ((::TRootAuth*)p);
   }
   static void destruct_TRootAuth(void *p) {
      typedef ::TRootAuth current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootAuth(TBuffer &buf, void *obj) {
      ((::TRootAuth*)obj)->::TRootAuth::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootAuth

namespace {
  void TriggerDictionaryInitialization_libRootAuth_Impl() {
    static const char* headers[] = {
"AuthConst.h",
"TAuthenticate.h",
"THostAuth.h",
"TRootAuth.h",
"TRootSecContext.h",
0
    };
    static const char* includePaths[] = {
"/usr/include",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libRootAuth dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class providing remote authentication service)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAuthenticate.h")))  TAuthenticate;
class __attribute__((annotate(R"ATTRDUMP(Class providing host specific authentication information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TRootSecContext.h")))  __attribute__((annotate("$clingAutoload$THostAuth.h")))  TRootSecContext;
class __attribute__((annotate(R"ATTRDUMP(Class providing host specific authentication information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THostAuth.h")))  THostAuth;
class __attribute__((annotate(R"ATTRDUMP(client auth interface)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TRootAuth.h")))  TRootAuth;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRootAuth dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "AuthConst.h"
#include "TAuthenticate.h"
#include "THostAuth.h"
#include "TRootAuth.h"
#include "TRootSecContext.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TAuthenticate", payloadCode, "@",
"THostAuth", payloadCode, "@",
"TRootAuth", payloadCode, "@",
"TRootSecContext", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRootAuth",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRootAuth_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRootAuth_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRootAuth() {
  TriggerDictionaryInitialization_libRootAuth_Impl();
}
