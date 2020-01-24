// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GeomPainter

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
#include "TGeoChecker.h"
#include "TGeoOverlap.h"
#include "TGeoPainter.h"
#include "TGeoTrack.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TGeoChecker(void *p = 0);
   static void *newArray_TGeoChecker(Long_t size, void *p);
   static void delete_TGeoChecker(void *p);
   static void deleteArray_TGeoChecker(void *p);
   static void destruct_TGeoChecker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoChecker*)
   {
      ::TGeoChecker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoChecker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoChecker", ::TGeoChecker::Class_Version(), "TGeoChecker.h", 37,
                  typeid(::TGeoChecker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoChecker::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoChecker) );
      instance.SetNew(&new_TGeoChecker);
      instance.SetNewArray(&newArray_TGeoChecker);
      instance.SetDelete(&delete_TGeoChecker);
      instance.SetDeleteArray(&deleteArray_TGeoChecker);
      instance.SetDestructor(&destruct_TGeoChecker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoChecker*)
   {
      return GenerateInitInstanceLocal((::TGeoChecker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoChecker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoOverlap(void *p = 0);
   static void *newArray_TGeoOverlap(Long_t size, void *p);
   static void delete_TGeoOverlap(void *p);
   static void deleteArray_TGeoOverlap(void *p);
   static void destruct_TGeoOverlap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoOverlap*)
   {
      ::TGeoOverlap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoOverlap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoOverlap", ::TGeoOverlap::Class_Version(), "TGeoOverlap.h", 37,
                  typeid(::TGeoOverlap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoOverlap::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoOverlap) );
      instance.SetNew(&new_TGeoOverlap);
      instance.SetNewArray(&newArray_TGeoOverlap);
      instance.SetDelete(&delete_TGeoOverlap);
      instance.SetDeleteArray(&deleteArray_TGeoOverlap);
      instance.SetDestructor(&destruct_TGeoOverlap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoOverlap*)
   {
      return GenerateInitInstanceLocal((::TGeoOverlap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoOverlap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoPainter(void *p);
   static void deleteArray_TGeoPainter(void *p);
   static void destruct_TGeoPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPainter*)
   {
      ::TGeoPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPainter", ::TGeoPainter::Class_Version(), "TGeoPainter.h", 40,
                  typeid(::TGeoPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPainter::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPainter) );
      instance.SetDelete(&delete_TGeoPainter);
      instance.SetDeleteArray(&deleteArray_TGeoPainter);
      instance.SetDestructor(&destruct_TGeoPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPainter*)
   {
      return GenerateInitInstanceLocal((::TGeoPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrack(void *p = 0);
   static void *newArray_TGeoTrack(Long_t size, void *p);
   static void delete_TGeoTrack(void *p);
   static void deleteArray_TGeoTrack(void *p);
   static void destruct_TGeoTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrack*)
   {
      ::TGeoTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrack", ::TGeoTrack::Class_Version(), "TGeoTrack.h", 30,
                  typeid(::TGeoTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTrack) );
      instance.SetNew(&new_TGeoTrack);
      instance.SetNewArray(&newArray_TGeoTrack);
      instance.SetDelete(&delete_TGeoTrack);
      instance.SetDeleteArray(&deleteArray_TGeoTrack);
      instance.SetDestructor(&destruct_TGeoTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrack*)
   {
      return GenerateInitInstanceLocal((::TGeoTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGeoChecker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoChecker::Class_Name()
{
   return "TGeoChecker";
}

//______________________________________________________________________________
const char *TGeoChecker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoChecker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoChecker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoChecker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoChecker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoChecker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoChecker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoChecker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoOverlap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoOverlap::Class_Name()
{
   return "TGeoOverlap";
}

//______________________________________________________________________________
const char *TGeoOverlap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoOverlap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoOverlap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoOverlap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoOverlap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoOverlap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoOverlap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoOverlap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPainter::Class_Name()
{
   return "TGeoPainter";
}

//______________________________________________________________________________
const char *TGeoPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrack::Class_Name()
{
   return "TGeoTrack";
}

//______________________________________________________________________________
const char *TGeoTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGeoChecker::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoChecker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoChecker::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoChecker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoChecker(void *p) {
      return  p ? new(p) ::TGeoChecker : new ::TGeoChecker;
   }
   static void *newArray_TGeoChecker(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoChecker[nElements] : new ::TGeoChecker[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoChecker(void *p) {
      delete ((::TGeoChecker*)p);
   }
   static void deleteArray_TGeoChecker(void *p) {
      delete [] ((::TGeoChecker*)p);
   }
   static void destruct_TGeoChecker(void *p) {
      typedef ::TGeoChecker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoChecker

//______________________________________________________________________________
void TGeoOverlap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoOverlap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoOverlap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoOverlap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoOverlap(void *p) {
      return  p ? new(p) ::TGeoOverlap : new ::TGeoOverlap;
   }
   static void *newArray_TGeoOverlap(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoOverlap[nElements] : new ::TGeoOverlap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoOverlap(void *p) {
      delete ((::TGeoOverlap*)p);
   }
   static void deleteArray_TGeoOverlap(void *p) {
      delete [] ((::TGeoOverlap*)p);
   }
   static void destruct_TGeoOverlap(void *p) {
      typedef ::TGeoOverlap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoOverlap

//______________________________________________________________________________
void TGeoPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPainter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoPainter(void *p) {
      delete ((::TGeoPainter*)p);
   }
   static void deleteArray_TGeoPainter(void *p) {
      delete [] ((::TGeoPainter*)p);
   }
   static void destruct_TGeoPainter(void *p) {
      typedef ::TGeoPainter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPainter

//______________________________________________________________________________
void TGeoTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrack(void *p) {
      return  p ? new(p) ::TGeoTrack : new ::TGeoTrack;
   }
   static void *newArray_TGeoTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrack[nElements] : new ::TGeoTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrack(void *p) {
      delete ((::TGeoTrack*)p);
   }
   static void deleteArray_TGeoTrack(void *p) {
      delete [] ((::TGeoTrack*)p);
   }
   static void destruct_TGeoTrack(void *p) {
      typedef ::TGeoTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTrack

namespace {
  void TriggerDictionaryInitialization_libGeomPainter_Impl() {
    static const char* headers[] = {
"TGeoChecker.h",
"TGeoOverlap.h",
"TGeoPainter.h",
"TGeoTrack.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGeomPainter dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(a simple geometry checker)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoChecker.h")))  TGeoChecker;
class __attribute__((annotate(R"ATTRDUMP(base class for geometical overlaps)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoOverlap.h")))  TGeoOverlap;
class __attribute__((annotate(R"ATTRDUMP(geometry painter)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPainter.h")))  TGeoPainter;
class __attribute__((annotate(R"ATTRDUMP(geometry tracks class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTrack.h")))  TGeoTrack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGeomPainter dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGeoChecker.h"
#include "TGeoOverlap.h"
#include "TGeoPainter.h"
#include "TGeoTrack.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TGeoChecker", payloadCode, "@",
"TGeoOverlap", payloadCode, "@",
"TGeoPainter", payloadCode, "@",
"TGeoTrack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGeomPainter",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGeomPainter_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGeomPainter_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGeomPainter() {
  TriggerDictionaryInitialization_libGeomPainter_Impl();
}
