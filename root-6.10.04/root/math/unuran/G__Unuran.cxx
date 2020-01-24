// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Unuran

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
#include "TUnuran.h"
#include "TUnuranBaseDist.h"
#include "TUnuranContDist.h"
#include "TUnuranDiscrDist.h"
#include "TUnuranEmpDist.h"
#include "TUnuranMultiContDist.h"
#include "TUnuranSampler.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TUnuranBaseDist(void *p);
   static void deleteArray_TUnuranBaseDist(void *p);
   static void destruct_TUnuranBaseDist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnuranBaseDist*)
   {
      ::TUnuranBaseDist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnuranBaseDist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnuranBaseDist", ::TUnuranBaseDist::Class_Version(), "TUnuranBaseDist.h", 29,
                  typeid(::TUnuranBaseDist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnuranBaseDist::Dictionary, isa_proxy, 4,
                  sizeof(::TUnuranBaseDist) );
      instance.SetDelete(&delete_TUnuranBaseDist);
      instance.SetDeleteArray(&deleteArray_TUnuranBaseDist);
      instance.SetDestructor(&destruct_TUnuranBaseDist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnuranBaseDist*)
   {
      return GenerateInitInstanceLocal((::TUnuranBaseDist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnuranBaseDist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TUnuran_Dictionary();
   static void TUnuran_TClassManip(TClass*);
   static void *new_TUnuran(void *p = 0);
   static void *newArray_TUnuran(Long_t size, void *p);
   static void delete_TUnuran(void *p);
   static void deleteArray_TUnuran(void *p);
   static void destruct_TUnuran(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnuran*)
   {
      ::TUnuran *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TUnuran));
      static ::ROOT::TGenericClassInfo 
         instance("TUnuran", "TUnuran.h", 79,
                  typeid(::TUnuran), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TUnuran_Dictionary, isa_proxy, 4,
                  sizeof(::TUnuran) );
      instance.SetNew(&new_TUnuran);
      instance.SetNewArray(&newArray_TUnuran);
      instance.SetDelete(&delete_TUnuran);
      instance.SetDeleteArray(&deleteArray_TUnuran);
      instance.SetDestructor(&destruct_TUnuran);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnuran*)
   {
      return GenerateInitInstanceLocal((::TUnuran*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnuran*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TUnuran_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TUnuran*)0x0)->GetClass();
      TUnuran_TClassManip(theClass);
   return theClass;
   }

   static void TUnuran_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TUnuranContDist(void *p = 0);
   static void *newArray_TUnuranContDist(Long_t size, void *p);
   static void delete_TUnuranContDist(void *p);
   static void deleteArray_TUnuranContDist(void *p);
   static void destruct_TUnuranContDist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnuranContDist*)
   {
      ::TUnuranContDist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnuranContDist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnuranContDist", ::TUnuranContDist::Class_Version(), "TUnuranContDist.h", 48,
                  typeid(::TUnuranContDist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnuranContDist::Dictionary, isa_proxy, 4,
                  sizeof(::TUnuranContDist) );
      instance.SetNew(&new_TUnuranContDist);
      instance.SetNewArray(&newArray_TUnuranContDist);
      instance.SetDelete(&delete_TUnuranContDist);
      instance.SetDeleteArray(&deleteArray_TUnuranContDist);
      instance.SetDestructor(&destruct_TUnuranContDist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnuranContDist*)
   {
      return GenerateInitInstanceLocal((::TUnuranContDist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnuranContDist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TUnuranDiscrDist(void *p);
   static void deleteArray_TUnuranDiscrDist(void *p);
   static void destruct_TUnuranDiscrDist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnuranDiscrDist*)
   {
      ::TUnuranDiscrDist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnuranDiscrDist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnuranDiscrDist", ::TUnuranDiscrDist::Class_Version(), "TUnuranDiscrDist.h", 51,
                  typeid(::TUnuranDiscrDist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnuranDiscrDist::Dictionary, isa_proxy, 4,
                  sizeof(::TUnuranDiscrDist) );
      instance.SetDelete(&delete_TUnuranDiscrDist);
      instance.SetDeleteArray(&deleteArray_TUnuranDiscrDist);
      instance.SetDestructor(&destruct_TUnuranDiscrDist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnuranDiscrDist*)
   {
      return GenerateInitInstanceLocal((::TUnuranDiscrDist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnuranDiscrDist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TUnuranEmpDist(void *p = 0);
   static void *newArray_TUnuranEmpDist(Long_t size, void *p);
   static void delete_TUnuranEmpDist(void *p);
   static void deleteArray_TUnuranEmpDist(void *p);
   static void destruct_TUnuranEmpDist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnuranEmpDist*)
   {
      ::TUnuranEmpDist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnuranEmpDist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnuranEmpDist", ::TUnuranEmpDist::Class_Version(), "TUnuranEmpDist.h", 49,
                  typeid(::TUnuranEmpDist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnuranEmpDist::Dictionary, isa_proxy, 4,
                  sizeof(::TUnuranEmpDist) );
      instance.SetNew(&new_TUnuranEmpDist);
      instance.SetNewArray(&newArray_TUnuranEmpDist);
      instance.SetDelete(&delete_TUnuranEmpDist);
      instance.SetDeleteArray(&deleteArray_TUnuranEmpDist);
      instance.SetDestructor(&destruct_TUnuranEmpDist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnuranEmpDist*)
   {
      return GenerateInitInstanceLocal((::TUnuranEmpDist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnuranEmpDist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TUnuranMultiContDist(void *p = 0);
   static void *newArray_TUnuranMultiContDist(Long_t size, void *p);
   static void delete_TUnuranMultiContDist(void *p);
   static void deleteArray_TUnuranMultiContDist(void *p);
   static void destruct_TUnuranMultiContDist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnuranMultiContDist*)
   {
      ::TUnuranMultiContDist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUnuranMultiContDist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUnuranMultiContDist", ::TUnuranMultiContDist::Class_Version(), "TUnuranMultiContDist.h", 47,
                  typeid(::TUnuranMultiContDist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUnuranMultiContDist::Dictionary, isa_proxy, 4,
                  sizeof(::TUnuranMultiContDist) );
      instance.SetNew(&new_TUnuranMultiContDist);
      instance.SetNewArray(&newArray_TUnuranMultiContDist);
      instance.SetDelete(&delete_TUnuranMultiContDist);
      instance.SetDeleteArray(&deleteArray_TUnuranMultiContDist);
      instance.SetDestructor(&destruct_TUnuranMultiContDist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnuranMultiContDist*)
   {
      return GenerateInitInstanceLocal((::TUnuranMultiContDist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnuranMultiContDist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TUnuranSampler_Dictionary();
   static void TUnuranSampler_TClassManip(TClass*);
   static void *new_TUnuranSampler(void *p = 0);
   static void *newArray_TUnuranSampler(Long_t size, void *p);
   static void delete_TUnuranSampler(void *p);
   static void deleteArray_TUnuranSampler(void *p);
   static void destruct_TUnuranSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUnuranSampler*)
   {
      ::TUnuranSampler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TUnuranSampler));
      static ::ROOT::TGenericClassInfo 
         instance("TUnuranSampler", "TUnuranSampler.h", 49,
                  typeid(::TUnuranSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TUnuranSampler_Dictionary, isa_proxy, 4,
                  sizeof(::TUnuranSampler) );
      instance.SetNew(&new_TUnuranSampler);
      instance.SetNewArray(&newArray_TUnuranSampler);
      instance.SetDelete(&delete_TUnuranSampler);
      instance.SetDeleteArray(&deleteArray_TUnuranSampler);
      instance.SetDestructor(&destruct_TUnuranSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUnuranSampler*)
   {
      return GenerateInitInstanceLocal((::TUnuranSampler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUnuranSampler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TUnuranSampler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TUnuranSampler*)0x0)->GetClass();
      TUnuranSampler_TClassManip(theClass);
   return theClass;
   }

   static void TUnuranSampler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TUnuranBaseDist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnuranBaseDist::Class_Name()
{
   return "TUnuranBaseDist";
}

//______________________________________________________________________________
const char *TUnuranBaseDist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranBaseDist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnuranBaseDist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranBaseDist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnuranBaseDist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranBaseDist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnuranBaseDist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranBaseDist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TUnuranContDist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnuranContDist::Class_Name()
{
   return "TUnuranContDist";
}

//______________________________________________________________________________
const char *TUnuranContDist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranContDist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnuranContDist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranContDist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnuranContDist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranContDist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnuranContDist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranContDist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TUnuranDiscrDist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnuranDiscrDist::Class_Name()
{
   return "TUnuranDiscrDist";
}

//______________________________________________________________________________
const char *TUnuranDiscrDist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranDiscrDist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnuranDiscrDist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranDiscrDist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnuranDiscrDist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranDiscrDist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnuranDiscrDist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranDiscrDist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TUnuranEmpDist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnuranEmpDist::Class_Name()
{
   return "TUnuranEmpDist";
}

//______________________________________________________________________________
const char *TUnuranEmpDist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranEmpDist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnuranEmpDist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranEmpDist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnuranEmpDist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranEmpDist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnuranEmpDist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranEmpDist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TUnuranMultiContDist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnuranMultiContDist::Class_Name()
{
   return "TUnuranMultiContDist";
}

//______________________________________________________________________________
const char *TUnuranMultiContDist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranMultiContDist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnuranMultiContDist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUnuranMultiContDist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnuranMultiContDist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranMultiContDist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnuranMultiContDist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUnuranMultiContDist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TUnuranBaseDist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnuranBaseDist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnuranBaseDist::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnuranBaseDist::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TUnuranBaseDist(void *p) {
      delete ((::TUnuranBaseDist*)p);
   }
   static void deleteArray_TUnuranBaseDist(void *p) {
      delete [] ((::TUnuranBaseDist*)p);
   }
   static void destruct_TUnuranBaseDist(void *p) {
      typedef ::TUnuranBaseDist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnuranBaseDist

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnuran(void *p) {
      return  p ? new(p) ::TUnuran : new ::TUnuran;
   }
   static void *newArray_TUnuran(Long_t nElements, void *p) {
      return p ? new(p) ::TUnuran[nElements] : new ::TUnuran[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnuran(void *p) {
      delete ((::TUnuran*)p);
   }
   static void deleteArray_TUnuran(void *p) {
      delete [] ((::TUnuran*)p);
   }
   static void destruct_TUnuran(void *p) {
      typedef ::TUnuran current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnuran

//______________________________________________________________________________
void TUnuranContDist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnuranContDist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnuranContDist::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnuranContDist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnuranContDist(void *p) {
      return  p ? new(p) ::TUnuranContDist : new ::TUnuranContDist;
   }
   static void *newArray_TUnuranContDist(Long_t nElements, void *p) {
      return p ? new(p) ::TUnuranContDist[nElements] : new ::TUnuranContDist[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnuranContDist(void *p) {
      delete ((::TUnuranContDist*)p);
   }
   static void deleteArray_TUnuranContDist(void *p) {
      delete [] ((::TUnuranContDist*)p);
   }
   static void destruct_TUnuranContDist(void *p) {
      typedef ::TUnuranContDist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnuranContDist

//______________________________________________________________________________
void TUnuranDiscrDist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnuranDiscrDist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnuranDiscrDist::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnuranDiscrDist::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TUnuranDiscrDist(void *p) {
      delete ((::TUnuranDiscrDist*)p);
   }
   static void deleteArray_TUnuranDiscrDist(void *p) {
      delete [] ((::TUnuranDiscrDist*)p);
   }
   static void destruct_TUnuranDiscrDist(void *p) {
      typedef ::TUnuranDiscrDist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnuranDiscrDist

//______________________________________________________________________________
void TUnuranEmpDist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnuranEmpDist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnuranEmpDist::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnuranEmpDist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnuranEmpDist(void *p) {
      return  p ? new(p) ::TUnuranEmpDist : new ::TUnuranEmpDist;
   }
   static void *newArray_TUnuranEmpDist(Long_t nElements, void *p) {
      return p ? new(p) ::TUnuranEmpDist[nElements] : new ::TUnuranEmpDist[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnuranEmpDist(void *p) {
      delete ((::TUnuranEmpDist*)p);
   }
   static void deleteArray_TUnuranEmpDist(void *p) {
      delete [] ((::TUnuranEmpDist*)p);
   }
   static void destruct_TUnuranEmpDist(void *p) {
      typedef ::TUnuranEmpDist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnuranEmpDist

//______________________________________________________________________________
void TUnuranMultiContDist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUnuranMultiContDist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TUnuranMultiContDist::Class(),this);
   } else {
      R__b.WriteClassBuffer(TUnuranMultiContDist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnuranMultiContDist(void *p) {
      return  p ? new(p) ::TUnuranMultiContDist : new ::TUnuranMultiContDist;
   }
   static void *newArray_TUnuranMultiContDist(Long_t nElements, void *p) {
      return p ? new(p) ::TUnuranMultiContDist[nElements] : new ::TUnuranMultiContDist[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnuranMultiContDist(void *p) {
      delete ((::TUnuranMultiContDist*)p);
   }
   static void deleteArray_TUnuranMultiContDist(void *p) {
      delete [] ((::TUnuranMultiContDist*)p);
   }
   static void destruct_TUnuranMultiContDist(void *p) {
      typedef ::TUnuranMultiContDist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnuranMultiContDist

namespace ROOT {
   // Wrappers around operator new
   static void *new_TUnuranSampler(void *p) {
      return  p ? new(p) ::TUnuranSampler : new ::TUnuranSampler;
   }
   static void *newArray_TUnuranSampler(Long_t nElements, void *p) {
      return p ? new(p) ::TUnuranSampler[nElements] : new ::TUnuranSampler[nElements];
   }
   // Wrapper around operator delete
   static void delete_TUnuranSampler(void *p) {
      delete ((::TUnuranSampler*)p);
   }
   static void deleteArray_TUnuranSampler(void *p) {
      delete [] ((::TUnuranSampler*)p);
   }
   static void destruct_TUnuranSampler(void *p) {
      typedef ::TUnuranSampler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TUnuranSampler

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_libUnuran_Impl() {
    static const char* headers[] = {
"TUnuran.h",
"TUnuranBaseDist.h",
"TUnuranContDist.h",
"TUnuranDiscrDist.h",
"TUnuranEmpDist.h",
"TUnuranMultiContDist.h",
"TUnuranSampler.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libUnuran dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Base class for Unuran distribution wrappers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TUnuranBaseDist.h")))  __attribute__((annotate("$clingAutoload$TUnuran.h")))  TUnuranBaseDist;
class __attribute__((annotate("$clingAutoload$TUnuran.h")))  TUnuran;
class __attribute__((annotate(R"ATTRDUMP(Wrapper class for one dimensional continuous distribution)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TUnuranContDist.h")))  TUnuranContDist;
class __attribute__((annotate(R"ATTRDUMP(Wrapper class for one dimensional discrete distribution)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TUnuranDiscrDist.h")))  TUnuranDiscrDist;
class __attribute__((annotate(R"ATTRDUMP(Wrapper class for empirical distribution)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TUnuranEmpDist.h")))  TUnuranEmpDist;
class __attribute__((annotate(R"ATTRDUMP(Wrapper class for multi dimensional continuous distribution)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TUnuranMultiContDist.h")))  TUnuranMultiContDist;
class __attribute__((annotate("$clingAutoload$TUnuranSampler.h")))  TUnuranSampler;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libUnuran dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef HAVE_CONFIG_H
  #define HAVE_CONFIG_H 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TUnuran.h"
#include "TUnuranBaseDist.h"
#include "TUnuranContDist.h"
#include "TUnuranDiscrDist.h"
#include "TUnuranEmpDist.h"
#include "TUnuranMultiContDist.h"
#include "TUnuranSampler.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TUnuran", payloadCode, "@",
"TUnuranBaseDist", payloadCode, "@",
"TUnuranContDist", payloadCode, "@",
"TUnuranDiscrDist", payloadCode, "@",
"TUnuranEmpDist", payloadCode, "@",
"TUnuranMultiContDist", payloadCode, "@",
"TUnuranSampler", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libUnuran",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libUnuran_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libUnuran_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libUnuran() {
  TriggerDictionaryInitialization_libUnuran_Impl();
}
