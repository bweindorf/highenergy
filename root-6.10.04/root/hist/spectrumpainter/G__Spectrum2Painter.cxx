// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Spectrum2Painter

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
#include "TSpectrum2Painter.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TSpectrum2Painter(void *p);
   static void deleteArray_TSpectrum2Painter(void *p);
   static void destruct_TSpectrum2Painter(void *p);
   static void streamer_TSpectrum2Painter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpectrum2Painter*)
   {
      ::TSpectrum2Painter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpectrum2Painter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSpectrum2Painter", ::TSpectrum2Painter::Class_Version(), "TSpectrum2Painter.h", 30,
                  typeid(::TSpectrum2Painter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpectrum2Painter::Dictionary, isa_proxy, 16,
                  sizeof(::TSpectrum2Painter) );
      instance.SetDelete(&delete_TSpectrum2Painter);
      instance.SetDeleteArray(&deleteArray_TSpectrum2Painter);
      instance.SetDestructor(&destruct_TSpectrum2Painter);
      instance.SetStreamerFunc(&streamer_TSpectrum2Painter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpectrum2Painter*)
   {
      return GenerateInitInstanceLocal((::TSpectrum2Painter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSpectrum2Painter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TSpectrum2Painter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpectrum2Painter::Class_Name()
{
   return "TSpectrum2Painter";
}

//______________________________________________________________________________
const char *TSpectrum2Painter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Painter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpectrum2Painter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Painter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpectrum2Painter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Painter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpectrum2Painter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Painter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TSpectrum2Painter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpectrum2Painter.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSpectrum2Painter(void *p) {
      delete ((::TSpectrum2Painter*)p);
   }
   static void deleteArray_TSpectrum2Painter(void *p) {
      delete [] ((::TSpectrum2Painter*)p);
   }
   static void destruct_TSpectrum2Painter(void *p) {
      typedef ::TSpectrum2Painter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSpectrum2Painter(TBuffer &buf, void *obj) {
      ((::TSpectrum2Painter*)obj)->::TSpectrum2Painter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSpectrum2Painter

namespace {
  void TriggerDictionaryInitialization_libSpectrumPainter_Impl() {
    static const char* headers[] = {
"TSpectrum2Painter.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSpectrumPainter dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TSpectrum2Painter.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSpectrumPainter",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSpectrumPainter_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSpectrumPainter_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSpectrumPainter() {
  TriggerDictionaryInitialization_libSpectrumPainter_Impl();
}
