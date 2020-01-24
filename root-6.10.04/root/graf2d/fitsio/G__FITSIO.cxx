// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__FITSIO

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
#include "TFITS.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TFITSHDU(void *p);
   static void deleteArray_TFITSHDU(void *p);
   static void destruct_TFITSHDU(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFITSHDU*)
   {
      ::TFITSHDU *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFITSHDU >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFITSHDU", ::TFITSHDU::Class_Version(), "TFITS.h", 34,
                  typeid(::TFITSHDU), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFITSHDU::Dictionary, isa_proxy, 4,
                  sizeof(::TFITSHDU) );
      instance.SetDelete(&delete_TFITSHDU);
      instance.SetDeleteArray(&deleteArray_TFITSHDU);
      instance.SetDestructor(&destruct_TFITSHDU);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFITSHDU*)
   {
      return GenerateInitInstanceLocal((::TFITSHDU*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFITSHDU*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TFITSHDU::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFITSHDU::Class_Name()
{
   return "TFITSHDU";
}

//______________________________________________________________________________
const char *TFITSHDU::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFITSHDU*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFITSHDU::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFITSHDU*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFITSHDU::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFITSHDU*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFITSHDU::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFITSHDU*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TFITSHDU::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFITSHDU.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFITSHDU::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFITSHDU::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFITSHDU(void *p) {
      delete ((::TFITSHDU*)p);
   }
   static void deleteArray_TFITSHDU(void *p) {
      delete [] ((::TFITSHDU*)p);
   }
   static void destruct_TFITSHDU(void *p) {
      typedef ::TFITSHDU current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFITSHDU

namespace {
  void TriggerDictionaryInitialization_libFITSIO_Impl() {
    static const char* headers[] = {
"TFITS.h",
0
    };
    static const char* includePaths[] = {
"/usr/include",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libFITSIO dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TFITS.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libFITSIO",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFITSIO_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFITSIO_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFITSIO() {
  TriggerDictionaryInitialization_libFITSIO_Impl();
}
