// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Unfold

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
#include "TUnfold.h"
#include "TUnfoldBinning.h"
#include "TUnfoldBinningXML.h"
#include "TUnfoldDensity.h"
#include "TUnfoldSys.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TUnfold(void *p = 0);
   static void *newArray_TUnfold(Long_t size, void *p);
   static void delete_TUnfold(void *p);
   static void deleteArray_TUnfold(void *p);
   static void destruct_TUnfold(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnfold*)
   {
      ::TUnfold *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnfold >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnfold", ::TUnfold::Class_Version(), "TUnfold.h", 104,
                  typeid(::TUnfold), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnfold::Dictionary, isa_proxy, 4,
                  sizeof(::TUnfold) );
      instance.SetNew(&new_TUnfold);
      instance.SetNewArray(&newArray_TUnfold);
      instance.SetDelete(&delete_TUnfold);
      instance.SetDeleteArray(&deleteArray_TUnfold);
      instance.SetDestructor(&destruct_TUnfold);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnfold*)
   {
      return GenerateInitInstanceLocal((::TUnfold*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnfold*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TUnfoldBinning(void *p = 0);
   static void *newArray_TUnfoldBinning(Long_t size, void *p);
   static void delete_TUnfoldBinning(void *p);
   static void deleteArray_TUnfoldBinning(void *p);
   static void destruct_TUnfoldBinning(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnfoldBinning*)
   {
      ::TUnfoldBinning *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnfoldBinning >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnfoldBinning", ::TUnfoldBinning::Class_Version(), "TUnfoldBinning.h", 53,
                  typeid(::TUnfoldBinning), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnfoldBinning::Dictionary, isa_proxy, 4,
                  sizeof(::TUnfoldBinning) );
      instance.SetNew(&new_TUnfoldBinning);
      instance.SetNewArray(&newArray_TUnfoldBinning);
      instance.SetDelete(&delete_TUnfoldBinning);
      instance.SetDeleteArray(&deleteArray_TUnfoldBinning);
      instance.SetDestructor(&destruct_TUnfoldBinning);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnfoldBinning*)
   {
      return GenerateInitInstanceLocal((::TUnfoldBinning*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnfoldBinning*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TUnfoldBinningXML(void *p = 0);
   static void *newArray_TUnfoldBinningXML(Long_t size, void *p);
   static void delete_TUnfoldBinningXML(void *p);
   static void deleteArray_TUnfoldBinningXML(void *p);
   static void destruct_TUnfoldBinningXML(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnfoldBinningXML*)
   {
      ::TUnfoldBinningXML *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnfoldBinningXML >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnfoldBinningXML", ::TUnfoldBinningXML::Class_Version(), "TUnfoldBinningXML.h", 55,
                  typeid(::TUnfoldBinningXML), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnfoldBinningXML::Dictionary, isa_proxy, 4,
                  sizeof(::TUnfoldBinningXML) );
      instance.SetNew(&new_TUnfoldBinningXML);
      instance.SetNewArray(&newArray_TUnfoldBinningXML);
      instance.SetDelete(&delete_TUnfoldBinningXML);
      instance.SetDeleteArray(&deleteArray_TUnfoldBinningXML);
      instance.SetDestructor(&destruct_TUnfoldBinningXML);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnfoldBinningXML*)
   {
      return GenerateInitInstanceLocal((::TUnfoldBinningXML*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnfoldBinningXML*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TUnfoldSys(void *p = 0);
   static void *newArray_TUnfoldSys(Long_t size, void *p);
   static void delete_TUnfoldSys(void *p);
   static void deleteArray_TUnfoldSys(void *p);
   static void destruct_TUnfoldSys(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnfoldSys*)
   {
      ::TUnfoldSys *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnfoldSys >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnfoldSys", ::TUnfoldSys::Class_Version(), "TUnfoldSys.h", 55,
                  typeid(::TUnfoldSys), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnfoldSys::Dictionary, isa_proxy, 4,
                  sizeof(::TUnfoldSys) );
      instance.SetNew(&new_TUnfoldSys);
      instance.SetNewArray(&newArray_TUnfoldSys);
      instance.SetDelete(&delete_TUnfoldSys);
      instance.SetDeleteArray(&deleteArray_TUnfoldSys);
      instance.SetDestructor(&destruct_TUnfoldSys);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnfoldSys*)
   {
      return GenerateInitInstanceLocal((::TUnfoldSys*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnfoldSys*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TUnfoldDensity(void *p = 0);
   static void *newArray_TUnfoldDensity(Long_t size, void *p);
   static void delete_TUnfoldDensity(void *p);
   static void deleteArray_TUnfoldDensity(void *p);
   static void destruct_TUnfoldDensity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnfoldDensity*)
   {
      ::TUnfoldDensity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnfoldDensity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnfoldDensity", ::TUnfoldDensity::Class_Version(), "TUnfoldDensity.h", 48,
                  typeid(::TUnfoldDensity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnfoldDensity::Dictionary, isa_proxy, 4,
                  sizeof(::TUnfoldDensity) );
      instance.SetNew(&new_TUnfoldDensity);
      instance.SetNewArray(&newArray_TUnfoldDensity);
      instance.SetDelete(&delete_TUnfoldDensity);
      instance.SetDeleteArray(&deleteArray_TUnfoldDensity);
      instance.SetDestructor(&destruct_TUnfoldDensity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnfoldDensity*)
   {
      return GenerateInitInstanceLocal((::TUnfoldDensity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnfoldDensity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TUnfold::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnfold::Class_Name()
{
   return "TUnfold";
}

//______________________________________________________________________________
const char *TUnfold::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfold*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnfold::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfold*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnfold::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfold*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnfold::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfold*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TUnfoldBinning::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnfoldBinning::Class_Name()
{
   return "TUnfoldBinning";
}

//______________________________________________________________________________
const char *TUnfoldBinning::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldBinning*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnfoldBinning::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldBinning*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnfoldBinning::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldBinning*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnfoldBinning::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldBinning*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TUnfoldBinningXML::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnfoldBinningXML::Class_Name()
{
   return "TUnfoldBinningXML";
}

//______________________________________________________________________________
const char *TUnfoldBinningXML::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldBinningXML*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnfoldBinningXML::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldBinningXML*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnfoldBinningXML::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldBinningXML*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnfoldBinningXML::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldBinningXML*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TUnfoldSys::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnfoldSys::Class_Name()
{
   return "TUnfoldSys";
}

//______________________________________________________________________________
const char *TUnfoldSys::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldSys*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnfoldSys::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldSys*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnfoldSys::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldSys*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnfoldSys::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldSys*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TUnfoldDensity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnfoldDensity::Class_Name()
{
   return "TUnfoldDensity";
}

//______________________________________________________________________________
const char *TUnfoldDensity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldDensity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnfoldDensity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldDensity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnfoldDensity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldDensity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnfoldDensity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnfoldDensity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TUnfold::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnfold.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnfold::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnfold::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnfold(void *p) {
      return  p ? new(p) ::TUnfold : new ::TUnfold;
   }
   static void *newArray_TUnfold(Long_t nElements, void *p) {
      return p ? new(p) ::TUnfold[nElements] : new ::TUnfold[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnfold(void *p) {
      delete ((::TUnfold*)p);
   }
   static void deleteArray_TUnfold(void *p) {
      delete [] ((::TUnfold*)p);
   }
   static void destruct_TUnfold(void *p) {
      typedef ::TUnfold current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnfold

//______________________________________________________________________________
void TUnfoldBinning::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnfoldBinning.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnfoldBinning::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnfoldBinning::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnfoldBinning(void *p) {
      return  p ? new(p) ::TUnfoldBinning : new ::TUnfoldBinning;
   }
   static void *newArray_TUnfoldBinning(Long_t nElements, void *p) {
      return p ? new(p) ::TUnfoldBinning[nElements] : new ::TUnfoldBinning[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnfoldBinning(void *p) {
      delete ((::TUnfoldBinning*)p);
   }
   static void deleteArray_TUnfoldBinning(void *p) {
      delete [] ((::TUnfoldBinning*)p);
   }
   static void destruct_TUnfoldBinning(void *p) {
      typedef ::TUnfoldBinning current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnfoldBinning

//______________________________________________________________________________
void TUnfoldBinningXML::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnfoldBinningXML.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnfoldBinningXML::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnfoldBinningXML::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnfoldBinningXML(void *p) {
      return  p ? new(p) ::TUnfoldBinningXML : new ::TUnfoldBinningXML;
   }
   static void *newArray_TUnfoldBinningXML(Long_t nElements, void *p) {
      return p ? new(p) ::TUnfoldBinningXML[nElements] : new ::TUnfoldBinningXML[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnfoldBinningXML(void *p) {
      delete ((::TUnfoldBinningXML*)p);
   }
   static void deleteArray_TUnfoldBinningXML(void *p) {
      delete [] ((::TUnfoldBinningXML*)p);
   }
   static void destruct_TUnfoldBinningXML(void *p) {
      typedef ::TUnfoldBinningXML current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnfoldBinningXML

//______________________________________________________________________________
void TUnfoldSys::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnfoldSys.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnfoldSys::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnfoldSys::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnfoldSys(void *p) {
      return  p ? new(p) ::TUnfoldSys : new ::TUnfoldSys;
   }
   static void *newArray_TUnfoldSys(Long_t nElements, void *p) {
      return p ? new(p) ::TUnfoldSys[nElements] : new ::TUnfoldSys[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnfoldSys(void *p) {
      delete ((::TUnfoldSys*)p);
   }
   static void deleteArray_TUnfoldSys(void *p) {
      delete [] ((::TUnfoldSys*)p);
   }
   static void destruct_TUnfoldSys(void *p) {
      typedef ::TUnfoldSys current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnfoldSys

//______________________________________________________________________________
void TUnfoldDensity::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnfoldDensity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnfoldDensity::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnfoldDensity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnfoldDensity(void *p) {
      return  p ? new(p) ::TUnfoldDensity : new ::TUnfoldDensity;
   }
   static void *newArray_TUnfoldDensity(Long_t nElements, void *p) {
      return p ? new(p) ::TUnfoldDensity[nElements] : new ::TUnfoldDensity[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnfoldDensity(void *p) {
      delete ((::TUnfoldDensity*)p);
   }
   static void deleteArray_TUnfoldDensity(void *p) {
      delete [] ((::TUnfoldDensity*)p);
   }
   static void destruct_TUnfoldDensity(void *p) {
      typedef ::TUnfoldDensity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnfoldDensity

namespace {
  void TriggerDictionaryInitialization_libUnfold_Impl() {
    static const char* headers[] = {
"TUnfold.h",
"TUnfoldBinning.h",
"TUnfoldBinningXML.h",
"TUnfoldDensity.h",
"TUnfoldSys.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libUnfold dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TUnfold.h"
#include "TUnfoldBinning.h"
#include "TUnfoldBinningXML.h"
#include "TUnfoldDensity.h"
#include "TUnfoldSys.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libUnfold",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libUnfold_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libUnfold_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libUnfold() {
  TriggerDictionaryInitialization_libUnfold_Impl();
}
