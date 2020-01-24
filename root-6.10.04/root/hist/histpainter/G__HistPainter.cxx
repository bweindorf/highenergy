// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__HistPainter

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
#include "Hoption.h"
#include "Hparam.h"
#include "TGraph2DPainter.h"
#include "TGraphPainter.h"
#include "THistPainter.h"
#include "TLego.h"
#include "TPainter3dAlgorithms.h"
#include "TPaletteAxis.h"

// Header files passed via #pragma extra_include
#include "TGraph2D.h"
#include "TGraphDelaunay.h"
#include "TGraphDelaunay2D.h"

namespace ROOT {
   static void *new_TGraph2DPainter(void *p = 0);
   static void *newArray_TGraph2DPainter(Long_t size, void *p);
   static void delete_TGraph2DPainter(void *p);
   static void deleteArray_TGraph2DPainter(void *p);
   static void destruct_TGraph2DPainter(void *p);
   static void streamer_TGraph2DPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraph2DPainter*)
   {
      ::TGraph2DPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraph2DPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGraph2DPainter", ::TGraph2DPainter::Class_Version(), "TGraph2DPainter.h", 31,
                  typeid(::TGraph2DPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraph2DPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGraph2DPainter) );
      instance.SetNew(&new_TGraph2DPainter);
      instance.SetNewArray(&newArray_TGraph2DPainter);
      instance.SetDelete(&delete_TGraph2DPainter);
      instance.SetDeleteArray(&deleteArray_TGraph2DPainter);
      instance.SetDestructor(&destruct_TGraph2DPainter);
      instance.SetStreamerFunc(&streamer_TGraph2DPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraph2DPainter*)
   {
      return GenerateInitInstanceLocal((::TGraph2DPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGraph2DPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphPainter(void *p = 0);
   static void *newArray_TGraphPainter(Long_t size, void *p);
   static void delete_TGraphPainter(void *p);
   static void deleteArray_TGraphPainter(void *p);
   static void destruct_TGraphPainter(void *p);
   static void streamer_TGraphPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphPainter*)
   {
      ::TGraphPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphPainter", ::TGraphPainter::Class_Version(), "TGraphPainter.h", 29,
                  typeid(::TGraphPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGraphPainter) );
      instance.SetNew(&new_TGraphPainter);
      instance.SetNewArray(&newArray_TGraphPainter);
      instance.SetDelete(&delete_TGraphPainter);
      instance.SetDeleteArray(&deleteArray_TGraphPainter);
      instance.SetDestructor(&destruct_TGraphPainter);
      instance.SetStreamerFunc(&streamer_TGraphPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphPainter*)
   {
      return GenerateInitInstanceLocal((::TGraphPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGraphPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THistPainter(void *p = 0);
   static void *newArray_THistPainter(Long_t size, void *p);
   static void delete_THistPainter(void *p);
   static void deleteArray_THistPainter(void *p);
   static void destruct_THistPainter(void *p);
   static void streamer_THistPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THistPainter*)
   {
      ::THistPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THistPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THistPainter", ::THistPainter::Class_Version(), "THistPainter.h", 47,
                  typeid(::THistPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THistPainter::Dictionary, isa_proxy, 16,
                  sizeof(::THistPainter) );
      instance.SetNew(&new_THistPainter);
      instance.SetNewArray(&newArray_THistPainter);
      instance.SetDelete(&delete_THistPainter);
      instance.SetDeleteArray(&deleteArray_THistPainter);
      instance.SetDestructor(&destruct_THistPainter);
      instance.SetStreamerFunc(&streamer_THistPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THistPainter*)
   {
      return GenerateInitInstanceLocal((::THistPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THistPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPainter3dAlgorithms(void *p = 0);
   static void *newArray_TPainter3dAlgorithms(Long_t size, void *p);
   static void delete_TPainter3dAlgorithms(void *p);
   static void deleteArray_TPainter3dAlgorithms(void *p);
   static void destruct_TPainter3dAlgorithms(void *p);
   static void streamer_TPainter3dAlgorithms(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPainter3dAlgorithms*)
   {
      ::TPainter3dAlgorithms *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPainter3dAlgorithms >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPainter3dAlgorithms", ::TPainter3dAlgorithms::Class_Version(), "TPainter3dAlgorithms.h", 29,
                  typeid(::TPainter3dAlgorithms), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPainter3dAlgorithms::Dictionary, isa_proxy, 16,
                  sizeof(::TPainter3dAlgorithms) );
      instance.SetNew(&new_TPainter3dAlgorithms);
      instance.SetNewArray(&newArray_TPainter3dAlgorithms);
      instance.SetDelete(&delete_TPainter3dAlgorithms);
      instance.SetDeleteArray(&deleteArray_TPainter3dAlgorithms);
      instance.SetDestructor(&destruct_TPainter3dAlgorithms);
      instance.SetStreamerFunc(&streamer_TPainter3dAlgorithms);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPainter3dAlgorithms*)
   {
      return GenerateInitInstanceLocal((::TPainter3dAlgorithms*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPainter3dAlgorithms*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPaletteAxis(void *p = 0);
   static void *newArray_TPaletteAxis(Long_t size, void *p);
   static void delete_TPaletteAxis(void *p);
   static void deleteArray_TPaletteAxis(void *p);
   static void destruct_TPaletteAxis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPaletteAxis*)
   {
      ::TPaletteAxis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPaletteAxis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPaletteAxis", ::TPaletteAxis::Class_Version(), "TPaletteAxis.h", 29,
                  typeid(::TPaletteAxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPaletteAxis::Dictionary, isa_proxy, 4,
                  sizeof(::TPaletteAxis) );
      instance.SetNew(&new_TPaletteAxis);
      instance.SetNewArray(&newArray_TPaletteAxis);
      instance.SetDelete(&delete_TPaletteAxis);
      instance.SetDeleteArray(&deleteArray_TPaletteAxis);
      instance.SetDestructor(&destruct_TPaletteAxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPaletteAxis*)
   {
      return GenerateInitInstanceLocal((::TPaletteAxis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPaletteAxis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGraph2DPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraph2DPainter::Class_Name()
{
   return "TGraph2DPainter";
}

//______________________________________________________________________________
const char *TGraph2DPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGraph2DPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraph2DPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraph2DPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphPainter::Class_Name()
{
   return "TGraphPainter";
}

//______________________________________________________________________________
const char *TGraphPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THistPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THistPainter::Class_Name()
{
   return "THistPainter";
}

//______________________________________________________________________________
const char *THistPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THistPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THistPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THistPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THistPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THistPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THistPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THistPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPainter3dAlgorithms::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPainter3dAlgorithms::Class_Name()
{
   return "TPainter3dAlgorithms";
}

//______________________________________________________________________________
const char *TPainter3dAlgorithms::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPainter3dAlgorithms*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPainter3dAlgorithms::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPainter3dAlgorithms*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPainter3dAlgorithms::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPainter3dAlgorithms*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPainter3dAlgorithms::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPainter3dAlgorithms*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPaletteAxis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPaletteAxis::Class_Name()
{
   return "TPaletteAxis";
}

//______________________________________________________________________________
const char *TPaletteAxis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaletteAxis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPaletteAxis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaletteAxis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPaletteAxis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaletteAxis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPaletteAxis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaletteAxis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGraph2DPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraph2DPainter.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fDelaunay;
      R__b >> fDelaunay2D;
      R__b >> fGraph2D;
      R__b.CheckByteCount(R__s, R__c, TGraph2DPainter::IsA());
   } else {
      R__c = R__b.WriteVersion(TGraph2DPainter::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fDelaunay;
      R__b << fDelaunay2D;
      R__b << fGraph2D;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraph2DPainter(void *p) {
      return  p ? new(p) ::TGraph2DPainter : new ::TGraph2DPainter;
   }
   static void *newArray_TGraph2DPainter(Long_t nElements, void *p) {
      return p ? new(p) ::TGraph2DPainter[nElements] : new ::TGraph2DPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraph2DPainter(void *p) {
      delete ((::TGraph2DPainter*)p);
   }
   static void deleteArray_TGraph2DPainter(void *p) {
      delete [] ((::TGraph2DPainter*)p);
   }
   static void destruct_TGraph2DPainter(void *p) {
      typedef ::TGraph2DPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraph2DPainter(TBuffer &buf, void *obj) {
      ((::TGraph2DPainter*)obj)->::TGraph2DPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraph2DPainter

//______________________________________________________________________________
void TGraphPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphPainter.

   TVirtualGraphPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphPainter(void *p) {
      return  p ? new(p) ::TGraphPainter : new ::TGraphPainter;
   }
   static void *newArray_TGraphPainter(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphPainter[nElements] : new ::TGraphPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphPainter(void *p) {
      delete ((::TGraphPainter*)p);
   }
   static void deleteArray_TGraphPainter(void *p) {
      delete [] ((::TGraphPainter*)p);
   }
   static void destruct_TGraphPainter(void *p) {
      typedef ::TGraphPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraphPainter(TBuffer &buf, void *obj) {
      ((::TGraphPainter*)obj)->::TGraphPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraphPainter

//______________________________________________________________________________
void THistPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class THistPainter.

   TVirtualHistPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THistPainter(void *p) {
      return  p ? new(p) ::THistPainter : new ::THistPainter;
   }
   static void *newArray_THistPainter(Long_t nElements, void *p) {
      return p ? new(p) ::THistPainter[nElements] : new ::THistPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_THistPainter(void *p) {
      delete ((::THistPainter*)p);
   }
   static void deleteArray_THistPainter(void *p) {
      delete [] ((::THistPainter*)p);
   }
   static void destruct_THistPainter(void *p) {
      typedef ::THistPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THistPainter(TBuffer &buf, void *obj) {
      ((::THistPainter*)obj)->::THistPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::THistPainter

//______________________________________________________________________________
void TPainter3dAlgorithms::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPainter3dAlgorithms.

   TObject::Streamer(R__b);
   TAttLine::Streamer(R__b);
   TAttFill::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPainter3dAlgorithms(void *p) {
      return  p ? new(p) ::TPainter3dAlgorithms : new ::TPainter3dAlgorithms;
   }
   static void *newArray_TPainter3dAlgorithms(Long_t nElements, void *p) {
      return p ? new(p) ::TPainter3dAlgorithms[nElements] : new ::TPainter3dAlgorithms[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPainter3dAlgorithms(void *p) {
      delete ((::TPainter3dAlgorithms*)p);
   }
   static void deleteArray_TPainter3dAlgorithms(void *p) {
      delete [] ((::TPainter3dAlgorithms*)p);
   }
   static void destruct_TPainter3dAlgorithms(void *p) {
      typedef ::TPainter3dAlgorithms current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPainter3dAlgorithms(TBuffer &buf, void *obj) {
      ((::TPainter3dAlgorithms*)obj)->::TPainter3dAlgorithms::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPainter3dAlgorithms

//______________________________________________________________________________
void TPaletteAxis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaletteAxis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPaletteAxis::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPaletteAxis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPaletteAxis(void *p) {
      return  p ? new(p) ::TPaletteAxis : new ::TPaletteAxis;
   }
   static void *newArray_TPaletteAxis(Long_t nElements, void *p) {
      return p ? new(p) ::TPaletteAxis[nElements] : new ::TPaletteAxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPaletteAxis(void *p) {
      delete ((::TPaletteAxis*)p);
   }
   static void deleteArray_TPaletteAxis(void *p) {
      delete [] ((::TPaletteAxis*)p);
   }
   static void destruct_TPaletteAxis(void *p) {
      typedef ::TPaletteAxis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPaletteAxis

namespace {
  void TriggerDictionaryInitialization_libHistPainter_Impl() {
    static const char* headers[] = {
"Hoption.h",
"Hparam.h",
"TGraph2DPainter.h",
"TGraphPainter.h",
"THistPainter.h",
"TLego.h",
"TPainter3dAlgorithms.h",
"TPaletteAxis.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libHistPainter dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Hoption.h"
#include "Hparam.h"
#include "TGraph2DPainter.h"
#include "TGraphPainter.h"
#include "THistPainter.h"
#include "TLego.h"
#include "TPainter3dAlgorithms.h"
#include "TPaletteAxis.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libHistPainter",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHistPainter_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHistPainter_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHistPainter() {
  TriggerDictionaryInitialization_libHistPainter_Impl();
}
