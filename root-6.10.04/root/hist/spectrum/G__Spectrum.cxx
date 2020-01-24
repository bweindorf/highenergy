// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Spectrum

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
#include "TSpectrum.h"
#include "TSpectrum2.h"
#include "TSpectrum2Fit.h"
#include "TSpectrum2Transform.h"
#include "TSpectrum3.h"
#include "TSpectrumFit.h"
#include "TSpectrumTransform.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TSpectrum(void *p = 0);
   static void *newArray_TSpectrum(Long_t size, void *p);
   static void delete_TSpectrum(void *p);
   static void deleteArray_TSpectrum(void *p);
   static void destruct_TSpectrum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpectrum*)
   {
      ::TSpectrum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpectrum >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSpectrum", ::TSpectrum::Class_Version(), "TSpectrum.h", 18,
                  typeid(::TSpectrum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpectrum::Dictionary, isa_proxy, 4,
                  sizeof(::TSpectrum) );
      instance.SetNew(&new_TSpectrum);
      instance.SetNewArray(&newArray_TSpectrum);
      instance.SetDelete(&delete_TSpectrum);
      instance.SetDeleteArray(&deleteArray_TSpectrum);
      instance.SetDestructor(&destruct_TSpectrum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpectrum*)
   {
      return GenerateInitInstanceLocal((::TSpectrum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSpectrum*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpectrum2(void *p = 0);
   static void *newArray_TSpectrum2(Long_t size, void *p);
   static void delete_TSpectrum2(void *p);
   static void deleteArray_TSpectrum2(void *p);
   static void destruct_TSpectrum2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpectrum2*)
   {
      ::TSpectrum2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpectrum2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSpectrum2", ::TSpectrum2::Class_Version(), "TSpectrum2.h", 18,
                  typeid(::TSpectrum2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpectrum2::Dictionary, isa_proxy, 4,
                  sizeof(::TSpectrum2) );
      instance.SetNew(&new_TSpectrum2);
      instance.SetNewArray(&newArray_TSpectrum2);
      instance.SetDelete(&delete_TSpectrum2);
      instance.SetDeleteArray(&deleteArray_TSpectrum2);
      instance.SetDestructor(&destruct_TSpectrum2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpectrum2*)
   {
      return GenerateInitInstanceLocal((::TSpectrum2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSpectrum2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpectrum2Fit(void *p = 0);
   static void *newArray_TSpectrum2Fit(Long_t size, void *p);
   static void delete_TSpectrum2Fit(void *p);
   static void deleteArray_TSpectrum2Fit(void *p);
   static void destruct_TSpectrum2Fit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpectrum2Fit*)
   {
      ::TSpectrum2Fit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpectrum2Fit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSpectrum2Fit", ::TSpectrum2Fit::Class_Version(), "TSpectrum2Fit.h", 16,
                  typeid(::TSpectrum2Fit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpectrum2Fit::Dictionary, isa_proxy, 4,
                  sizeof(::TSpectrum2Fit) );
      instance.SetNew(&new_TSpectrum2Fit);
      instance.SetNewArray(&newArray_TSpectrum2Fit);
      instance.SetDelete(&delete_TSpectrum2Fit);
      instance.SetDeleteArray(&deleteArray_TSpectrum2Fit);
      instance.SetDestructor(&destruct_TSpectrum2Fit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpectrum2Fit*)
   {
      return GenerateInitInstanceLocal((::TSpectrum2Fit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSpectrum2Fit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpectrum2Transform(void *p = 0);
   static void *newArray_TSpectrum2Transform(Long_t size, void *p);
   static void delete_TSpectrum2Transform(void *p);
   static void deleteArray_TSpectrum2Transform(void *p);
   static void destruct_TSpectrum2Transform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpectrum2Transform*)
   {
      ::TSpectrum2Transform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpectrum2Transform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSpectrum2Transform", ::TSpectrum2Transform::Class_Version(), "TSpectrum2Transform.h", 16,
                  typeid(::TSpectrum2Transform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpectrum2Transform::Dictionary, isa_proxy, 4,
                  sizeof(::TSpectrum2Transform) );
      instance.SetNew(&new_TSpectrum2Transform);
      instance.SetNewArray(&newArray_TSpectrum2Transform);
      instance.SetDelete(&delete_TSpectrum2Transform);
      instance.SetDeleteArray(&deleteArray_TSpectrum2Transform);
      instance.SetDestructor(&destruct_TSpectrum2Transform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpectrum2Transform*)
   {
      return GenerateInitInstanceLocal((::TSpectrum2Transform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSpectrum2Transform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpectrum3(void *p = 0);
   static void *newArray_TSpectrum3(Long_t size, void *p);
   static void delete_TSpectrum3(void *p);
   static void deleteArray_TSpectrum3(void *p);
   static void destruct_TSpectrum3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpectrum3*)
   {
      ::TSpectrum3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpectrum3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSpectrum3", ::TSpectrum3::Class_Version(), "TSpectrum3.h", 18,
                  typeid(::TSpectrum3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpectrum3::Dictionary, isa_proxy, 4,
                  sizeof(::TSpectrum3) );
      instance.SetNew(&new_TSpectrum3);
      instance.SetNewArray(&newArray_TSpectrum3);
      instance.SetDelete(&delete_TSpectrum3);
      instance.SetDeleteArray(&deleteArray_TSpectrum3);
      instance.SetDestructor(&destruct_TSpectrum3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpectrum3*)
   {
      return GenerateInitInstanceLocal((::TSpectrum3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSpectrum3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpectrumFit(void *p = 0);
   static void *newArray_TSpectrumFit(Long_t size, void *p);
   static void delete_TSpectrumFit(void *p);
   static void deleteArray_TSpectrumFit(void *p);
   static void destruct_TSpectrumFit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpectrumFit*)
   {
      ::TSpectrumFit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpectrumFit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSpectrumFit", ::TSpectrumFit::Class_Version(), "TSpectrumFit.h", 18,
                  typeid(::TSpectrumFit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpectrumFit::Dictionary, isa_proxy, 4,
                  sizeof(::TSpectrumFit) );
      instance.SetNew(&new_TSpectrumFit);
      instance.SetNewArray(&newArray_TSpectrumFit);
      instance.SetDelete(&delete_TSpectrumFit);
      instance.SetDeleteArray(&deleteArray_TSpectrumFit);
      instance.SetDestructor(&destruct_TSpectrumFit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpectrumFit*)
   {
      return GenerateInitInstanceLocal((::TSpectrumFit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSpectrumFit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpectrumTransform(void *p = 0);
   static void *newArray_TSpectrumTransform(Long_t size, void *p);
   static void delete_TSpectrumTransform(void *p);
   static void deleteArray_TSpectrumTransform(void *p);
   static void destruct_TSpectrumTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpectrumTransform*)
   {
      ::TSpectrumTransform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpectrumTransform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSpectrumTransform", ::TSpectrumTransform::Class_Version(), "TSpectrumTransform.h", 18,
                  typeid(::TSpectrumTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpectrumTransform::Dictionary, isa_proxy, 4,
                  sizeof(::TSpectrumTransform) );
      instance.SetNew(&new_TSpectrumTransform);
      instance.SetNewArray(&newArray_TSpectrumTransform);
      instance.SetDelete(&delete_TSpectrumTransform);
      instance.SetDeleteArray(&deleteArray_TSpectrumTransform);
      instance.SetDestructor(&destruct_TSpectrumTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpectrumTransform*)
   {
      return GenerateInitInstanceLocal((::TSpectrumTransform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSpectrumTransform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TSpectrum::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpectrum::Class_Name()
{
   return "TSpectrum";
}

//______________________________________________________________________________
const char *TSpectrum::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpectrum::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpectrum::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpectrum::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpectrum2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpectrum2::Class_Name()
{
   return "TSpectrum2";
}

//______________________________________________________________________________
const char *TSpectrum2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpectrum2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpectrum2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpectrum2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpectrum2Fit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpectrum2Fit::Class_Name()
{
   return "TSpectrum2Fit";
}

//______________________________________________________________________________
const char *TSpectrum2Fit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Fit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpectrum2Fit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Fit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpectrum2Fit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Fit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpectrum2Fit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Fit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpectrum2Transform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpectrum2Transform::Class_Name()
{
   return "TSpectrum2Transform";
}

//______________________________________________________________________________
const char *TSpectrum2Transform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Transform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpectrum2Transform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Transform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpectrum2Transform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Transform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpectrum2Transform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Transform*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpectrum3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpectrum3::Class_Name()
{
   return "TSpectrum3";
}

//______________________________________________________________________________
const char *TSpectrum3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpectrum3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpectrum3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpectrum3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpectrumFit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpectrumFit::Class_Name()
{
   return "TSpectrumFit";
}

//______________________________________________________________________________
const char *TSpectrumFit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrumFit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpectrumFit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrumFit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpectrumFit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrumFit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpectrumFit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrumFit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpectrumTransform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpectrumTransform::Class_Name()
{
   return "TSpectrumTransform";
}

//______________________________________________________________________________
const char *TSpectrumTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrumTransform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpectrumTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrumTransform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpectrumTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrumTransform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpectrumTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrumTransform*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TSpectrum::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpectrum.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSpectrum::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSpectrum::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpectrum(void *p) {
      return  p ? new(p) ::TSpectrum : new ::TSpectrum;
   }
   static void *newArray_TSpectrum(Long_t nElements, void *p) {
      return p ? new(p) ::TSpectrum[nElements] : new ::TSpectrum[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpectrum(void *p) {
      delete ((::TSpectrum*)p);
   }
   static void deleteArray_TSpectrum(void *p) {
      delete [] ((::TSpectrum*)p);
   }
   static void destruct_TSpectrum(void *p) {
      typedef ::TSpectrum current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSpectrum

//______________________________________________________________________________
void TSpectrum2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpectrum2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSpectrum2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSpectrum2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpectrum2(void *p) {
      return  p ? new(p) ::TSpectrum2 : new ::TSpectrum2;
   }
   static void *newArray_TSpectrum2(Long_t nElements, void *p) {
      return p ? new(p) ::TSpectrum2[nElements] : new ::TSpectrum2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpectrum2(void *p) {
      delete ((::TSpectrum2*)p);
   }
   static void deleteArray_TSpectrum2(void *p) {
      delete [] ((::TSpectrum2*)p);
   }
   static void destruct_TSpectrum2(void *p) {
      typedef ::TSpectrum2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSpectrum2

//______________________________________________________________________________
void TSpectrum2Fit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpectrum2Fit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSpectrum2Fit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSpectrum2Fit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpectrum2Fit(void *p) {
      return  p ? new(p) ::TSpectrum2Fit : new ::TSpectrum2Fit;
   }
   static void *newArray_TSpectrum2Fit(Long_t nElements, void *p) {
      return p ? new(p) ::TSpectrum2Fit[nElements] : new ::TSpectrum2Fit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpectrum2Fit(void *p) {
      delete ((::TSpectrum2Fit*)p);
   }
   static void deleteArray_TSpectrum2Fit(void *p) {
      delete [] ((::TSpectrum2Fit*)p);
   }
   static void destruct_TSpectrum2Fit(void *p) {
      typedef ::TSpectrum2Fit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSpectrum2Fit

//______________________________________________________________________________
void TSpectrum2Transform::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpectrum2Transform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSpectrum2Transform::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSpectrum2Transform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpectrum2Transform(void *p) {
      return  p ? new(p) ::TSpectrum2Transform : new ::TSpectrum2Transform;
   }
   static void *newArray_TSpectrum2Transform(Long_t nElements, void *p) {
      return p ? new(p) ::TSpectrum2Transform[nElements] : new ::TSpectrum2Transform[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpectrum2Transform(void *p) {
      delete ((::TSpectrum2Transform*)p);
   }
   static void deleteArray_TSpectrum2Transform(void *p) {
      delete [] ((::TSpectrum2Transform*)p);
   }
   static void destruct_TSpectrum2Transform(void *p) {
      typedef ::TSpectrum2Transform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSpectrum2Transform

//______________________________________________________________________________
void TSpectrum3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpectrum3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSpectrum3::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSpectrum3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpectrum3(void *p) {
      return  p ? new(p) ::TSpectrum3 : new ::TSpectrum3;
   }
   static void *newArray_TSpectrum3(Long_t nElements, void *p) {
      return p ? new(p) ::TSpectrum3[nElements] : new ::TSpectrum3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpectrum3(void *p) {
      delete ((::TSpectrum3*)p);
   }
   static void deleteArray_TSpectrum3(void *p) {
      delete [] ((::TSpectrum3*)p);
   }
   static void destruct_TSpectrum3(void *p) {
      typedef ::TSpectrum3 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSpectrum3

//______________________________________________________________________________
void TSpectrumFit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpectrumFit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSpectrumFit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSpectrumFit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpectrumFit(void *p) {
      return  p ? new(p) ::TSpectrumFit : new ::TSpectrumFit;
   }
   static void *newArray_TSpectrumFit(Long_t nElements, void *p) {
      return p ? new(p) ::TSpectrumFit[nElements] : new ::TSpectrumFit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpectrumFit(void *p) {
      delete ((::TSpectrumFit*)p);
   }
   static void deleteArray_TSpectrumFit(void *p) {
      delete [] ((::TSpectrumFit*)p);
   }
   static void destruct_TSpectrumFit(void *p) {
      typedef ::TSpectrumFit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSpectrumFit

//______________________________________________________________________________
void TSpectrumTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpectrumTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSpectrumTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSpectrumTransform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpectrumTransform(void *p) {
      return  p ? new(p) ::TSpectrumTransform : new ::TSpectrumTransform;
   }
   static void *newArray_TSpectrumTransform(Long_t nElements, void *p) {
      return p ? new(p) ::TSpectrumTransform[nElements] : new ::TSpectrumTransform[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpectrumTransform(void *p) {
      delete ((::TSpectrumTransform*)p);
   }
   static void deleteArray_TSpectrumTransform(void *p) {
      delete [] ((::TSpectrumTransform*)p);
   }
   static void destruct_TSpectrumTransform(void *p) {
      typedef ::TSpectrumTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSpectrumTransform

namespace {
  void TriggerDictionaryInitialization_libSpectrum_Impl() {
    static const char* headers[] = {
"TSpectrum.h",
"TSpectrum2.h",
"TSpectrum2Fit.h",
"TSpectrum2Transform.h",
"TSpectrum3.h",
"TSpectrumFit.h",
"TSpectrumTransform.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSpectrum dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TSpectrum.h"
#include "TSpectrum2.h"
#include "TSpectrum2Fit.h"
#include "TSpectrum2Transform.h"
#include "TSpectrum3.h"
#include "TSpectrumFit.h"
#include "TSpectrumTransform.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSpectrum",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSpectrum_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSpectrum_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSpectrum() {
  TriggerDictionaryInitialization_libSpectrum_Impl();
}
