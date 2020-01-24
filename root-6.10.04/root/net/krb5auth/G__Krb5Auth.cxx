// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Krb5Auth

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
#include "TKSocket.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TKSocket(void *p);
   static void deleteArray_TKSocket(void *p);
   static void destruct_TKSocket(void *p);
   static void streamer_TKSocket(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKSocket*)
   {
      ::TKSocket *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKSocket >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TKSocket", ::TKSocket::Class_Version(), "TKSocket.h", 27,
                  typeid(::TKSocket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKSocket::Dictionary, isa_proxy, 16,
                  sizeof(::TKSocket) );
      instance.SetDelete(&delete_TKSocket);
      instance.SetDeleteArray(&deleteArray_TKSocket);
      instance.SetDestructor(&destruct_TKSocket);
      instance.SetStreamerFunc(&streamer_TKSocket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKSocket*)
   {
      return GenerateInitInstanceLocal((::TKSocket*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TKSocket*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TKSocket::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TKSocket::Class_Name()
{
   return "TKSocket";
}

//______________________________________________________________________________
const char *TKSocket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKSocket*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TKSocket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKSocket*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKSocket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKSocket*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKSocket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKSocket*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TKSocket::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKSocket.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TKSocket(void *p) {
      delete ((::TKSocket*)p);
   }
   static void deleteArray_TKSocket(void *p) {
      delete [] ((::TKSocket*)p);
   }
   static void destruct_TKSocket(void *p) {
      typedef ::TKSocket current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TKSocket(TBuffer &buf, void *obj) {
      ((::TKSocket*)obj)->::TKSocket::Streamer(buf);
   }
} // end of namespace ROOT for class ::TKSocket

namespace {
  void TriggerDictionaryInitialization_libKrb5Auth_Impl() {
    static const char* headers[] = {
"TKSocket.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/krb5",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libKrb5Auth dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(General kerberized socket)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TKSocket.h")))  TKSocket;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libKrb5Auth dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TKSocket.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TKSocket", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKrb5Auth",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKrb5Auth_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKrb5Auth_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKrb5Auth() {
  TriggerDictionaryInitialization_libKrb5Auth_Impl();
}
