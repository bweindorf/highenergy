// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GX11TTF

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
#include "TGX11TTF.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TGX11TTF(void *p);
   static void deleteArray_TGX11TTF(void *p);
   static void destruct_TGX11TTF(void *p);
   static void streamer_TGX11TTF(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGX11TTF*)
   {
      ::TGX11TTF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGX11TTF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGX11TTF", ::TGX11TTF::Class_Version(), "TGX11TTF.h", 27,
                  typeid(::TGX11TTF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGX11TTF::Dictionary, isa_proxy, 16,
                  sizeof(::TGX11TTF) );
      instance.SetDelete(&delete_TGX11TTF);
      instance.SetDeleteArray(&deleteArray_TGX11TTF);
      instance.SetDestructor(&destruct_TGX11TTF);
      instance.SetStreamerFunc(&streamer_TGX11TTF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGX11TTF*)
   {
      return GenerateInitInstanceLocal((::TGX11TTF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGX11TTF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGX11TTF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGX11TTF::Class_Name()
{
   return "TGX11TTF";
}

//______________________________________________________________________________
const char *TGX11TTF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGX11TTF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGX11TTF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGX11TTF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGX11TTF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGX11TTF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGX11TTF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGX11TTF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGX11TTF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGX11TTF.

   TGX11::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGX11TTF(void *p) {
      delete ((::TGX11TTF*)p);
   }
   static void deleteArray_TGX11TTF(void *p) {
      delete [] ((::TGX11TTF*)p);
   }
   static void destruct_TGX11TTF(void *p) {
      typedef ::TGX11TTF current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGX11TTF(TBuffer &buf, void *obj) {
      ((::TGX11TTF*)obj)->::TGX11TTF::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGX11TTF

namespace {
  void TriggerDictionaryInitialization_libGX11TTF_Impl() {
    static const char* headers[] = {
"TGX11TTF.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/freetype2",
"/usr/include",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGX11TTF dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGX11TTF.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGX11TTF",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGX11TTF_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGX11TTF_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGX11TTF() {
  TriggerDictionaryInitialization_libGX11TTF_Impl();
}
