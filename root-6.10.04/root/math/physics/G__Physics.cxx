// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Physics

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
#include "TFeldmanCousins.h"
#include "TGenPhaseSpace.h"
#include "TLorentzRotation.h"
#include "TLorentzVector.h"
#include "TQuaternion.h"
#include "TRobustEstimator.h"
#include "TRolke.h"
#include "TRotation.h"
#include "TVector2.h"
#include "TVector3.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TFeldmanCousins(void *p = 0);
   static void *newArray_TFeldmanCousins(Long_t size, void *p);
   static void delete_TFeldmanCousins(void *p);
   static void deleteArray_TFeldmanCousins(void *p);
   static void destruct_TFeldmanCousins(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFeldmanCousins*)
   {
      ::TFeldmanCousins *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFeldmanCousins >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFeldmanCousins", ::TFeldmanCousins::Class_Version(), "TFeldmanCousins.h", 47,
                  typeid(::TFeldmanCousins), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFeldmanCousins::Dictionary, isa_proxy, 4,
                  sizeof(::TFeldmanCousins) );
      instance.SetNew(&new_TFeldmanCousins);
      instance.SetNewArray(&newArray_TFeldmanCousins);
      instance.SetDelete(&delete_TFeldmanCousins);
      instance.SetDeleteArray(&deleteArray_TFeldmanCousins);
      instance.SetDestructor(&destruct_TFeldmanCousins);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFeldmanCousins*)
   {
      return GenerateInitInstanceLocal((::TFeldmanCousins*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFeldmanCousins*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TVector2(void *p = 0);
   static void *newArray_TVector2(Long_t size, void *p);
   static void delete_TVector2(void *p);
   static void deleteArray_TVector2(void *p);
   static void destruct_TVector2(void *p);
   static void streamer_TVector2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVector2*)
   {
      ::TVector2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVector2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVector2", ::TVector2::Class_Version(), "TVector2.h", 18,
                  typeid(::TVector2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVector2::Dictionary, isa_proxy, 17,
                  sizeof(::TVector2) );
      instance.SetNew(&new_TVector2);
      instance.SetNewArray(&newArray_TVector2);
      instance.SetDelete(&delete_TVector2);
      instance.SetDeleteArray(&deleteArray_TVector2);
      instance.SetDestructor(&destruct_TVector2);
      instance.SetStreamerFunc(&streamer_TVector2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVector2*)
   {
      return GenerateInitInstanceLocal((::TVector2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVector2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TVector3(void *p = 0);
   static void *newArray_TVector3(Long_t size, void *p);
   static void delete_TVector3(void *p);
   static void deleteArray_TVector3(void *p);
   static void destruct_TVector3(void *p);
   static void streamer_TVector3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVector3*)
   {
      ::TVector3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVector3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVector3", ::TVector3::Class_Version(), "TVector3.h", 22,
                  typeid(::TVector3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVector3::Dictionary, isa_proxy, 17,
                  sizeof(::TVector3) );
      instance.SetNew(&new_TVector3);
      instance.SetNewArray(&newArray_TVector3);
      instance.SetDelete(&delete_TVector3);
      instance.SetDeleteArray(&deleteArray_TVector3);
      instance.SetDestructor(&destruct_TVector3);
      instance.SetStreamerFunc(&streamer_TVector3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVector3*)
   {
      return GenerateInitInstanceLocal((::TVector3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVector3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRotation(void *p = 0);
   static void *newArray_TRotation(Long_t size, void *p);
   static void delete_TRotation(void *p);
   static void deleteArray_TRotation(void *p);
   static void destruct_TRotation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRotation*)
   {
      ::TRotation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRotation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRotation", ::TRotation::Class_Version(), "TRotation.h", 20,
                  typeid(::TRotation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRotation::Dictionary, isa_proxy, 4,
                  sizeof(::TRotation) );
      instance.SetNew(&new_TRotation);
      instance.SetNewArray(&newArray_TRotation);
      instance.SetDelete(&delete_TRotation);
      instance.SetDeleteArray(&deleteArray_TRotation);
      instance.SetDestructor(&destruct_TRotation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRotation*)
   {
      return GenerateInitInstanceLocal((::TRotation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRotation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLorentzVector(void *p = 0);
   static void *newArray_TLorentzVector(Long_t size, void *p);
   static void delete_TLorentzVector(void *p);
   static void deleteArray_TLorentzVector(void *p);
   static void destruct_TLorentzVector(void *p);
   static void streamer_TLorentzVector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLorentzVector*)
   {
      ::TLorentzVector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLorentzVector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLorentzVector", ::TLorentzVector::Class_Version(), "TLorentzVector.h", 32,
                  typeid(::TLorentzVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLorentzVector::Dictionary, isa_proxy, 17,
                  sizeof(::TLorentzVector) );
      instance.SetNew(&new_TLorentzVector);
      instance.SetNewArray(&newArray_TLorentzVector);
      instance.SetDelete(&delete_TLorentzVector);
      instance.SetDeleteArray(&deleteArray_TLorentzVector);
      instance.SetDestructor(&destruct_TLorentzVector);
      instance.SetStreamerFunc(&streamer_TLorentzVector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLorentzVector*)
   {
      return GenerateInitInstanceLocal((::TLorentzVector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLorentzVector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGenPhaseSpace(void *p = 0);
   static void *newArray_TGenPhaseSpace(Long_t size, void *p);
   static void delete_TGenPhaseSpace(void *p);
   static void deleteArray_TGenPhaseSpace(void *p);
   static void destruct_TGenPhaseSpace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenPhaseSpace*)
   {
      ::TGenPhaseSpace *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGenPhaseSpace >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGenPhaseSpace", ::TGenPhaseSpace::Class_Version(), "TGenPhaseSpace.h", 15,
                  typeid(::TGenPhaseSpace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGenPhaseSpace::Dictionary, isa_proxy, 4,
                  sizeof(::TGenPhaseSpace) );
      instance.SetNew(&new_TGenPhaseSpace);
      instance.SetNewArray(&newArray_TGenPhaseSpace);
      instance.SetDelete(&delete_TGenPhaseSpace);
      instance.SetDeleteArray(&deleteArray_TGenPhaseSpace);
      instance.SetDestructor(&destruct_TGenPhaseSpace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenPhaseSpace*)
   {
      return GenerateInitInstanceLocal((::TGenPhaseSpace*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGenPhaseSpace*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLorentzRotation(void *p = 0);
   static void *newArray_TLorentzRotation(Long_t size, void *p);
   static void delete_TLorentzRotation(void *p);
   static void deleteArray_TLorentzRotation(void *p);
   static void destruct_TLorentzRotation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLorentzRotation*)
   {
      ::TLorentzRotation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLorentzRotation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLorentzRotation", ::TLorentzRotation::Class_Version(), "TLorentzRotation.h", 20,
                  typeid(::TLorentzRotation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLorentzRotation::Dictionary, isa_proxy, 4,
                  sizeof(::TLorentzRotation) );
      instance.SetNew(&new_TLorentzRotation);
      instance.SetNewArray(&newArray_TLorentzRotation);
      instance.SetDelete(&delete_TLorentzRotation);
      instance.SetDeleteArray(&deleteArray_TLorentzRotation);
      instance.SetDestructor(&destruct_TLorentzRotation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLorentzRotation*)
   {
      return GenerateInitInstanceLocal((::TLorentzRotation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLorentzRotation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQuaternion(void *p = 0);
   static void *newArray_TQuaternion(Long_t size, void *p);
   static void delete_TQuaternion(void *p);
   static void deleteArray_TQuaternion(void *p);
   static void destruct_TQuaternion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQuaternion*)
   {
      ::TQuaternion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQuaternion >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQuaternion", ::TQuaternion::Class_Version(), "TQuaternion.h", 11,
                  typeid(::TQuaternion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQuaternion::Dictionary, isa_proxy, 4,
                  sizeof(::TQuaternion) );
      instance.SetNew(&new_TQuaternion);
      instance.SetNewArray(&newArray_TQuaternion);
      instance.SetDelete(&delete_TQuaternion);
      instance.SetDeleteArray(&deleteArray_TQuaternion);
      instance.SetDestructor(&destruct_TQuaternion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQuaternion*)
   {
      return GenerateInitInstanceLocal((::TQuaternion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQuaternion*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRobustEstimator(void *p = 0);
   static void *newArray_TRobustEstimator(Long_t size, void *p);
   static void delete_TRobustEstimator(void *p);
   static void deleteArray_TRobustEstimator(void *p);
   static void destruct_TRobustEstimator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRobustEstimator*)
   {
      ::TRobustEstimator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRobustEstimator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRobustEstimator", ::TRobustEstimator::Class_Version(), "TRobustEstimator.h", 23,
                  typeid(::TRobustEstimator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRobustEstimator::Dictionary, isa_proxy, 4,
                  sizeof(::TRobustEstimator) );
      instance.SetNew(&new_TRobustEstimator);
      instance.SetNewArray(&newArray_TRobustEstimator);
      instance.SetDelete(&delete_TRobustEstimator);
      instance.SetDeleteArray(&deleteArray_TRobustEstimator);
      instance.SetDestructor(&destruct_TRobustEstimator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRobustEstimator*)
   {
      return GenerateInitInstanceLocal((::TRobustEstimator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRobustEstimator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRolke(void *p = 0);
   static void *newArray_TRolke(Long_t size, void *p);
   static void delete_TRolke(void *p);
   static void deleteArray_TRolke(void *p);
   static void destruct_TRolke(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRolke*)
   {
      ::TRolke *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRolke >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRolke", ::TRolke::Class_Version(), "TRolke.h", 33,
                  typeid(::TRolke), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRolke::Dictionary, isa_proxy, 4,
                  sizeof(::TRolke) );
      instance.SetNew(&new_TRolke);
      instance.SetNewArray(&newArray_TRolke);
      instance.SetDelete(&delete_TRolke);
      instance.SetDeleteArray(&deleteArray_TRolke);
      instance.SetDestructor(&destruct_TRolke);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRolke*)
   {
      return GenerateInitInstanceLocal((::TRolke*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRolke*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TFeldmanCousins::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFeldmanCousins::Class_Name()
{
   return "TFeldmanCousins";
}

//______________________________________________________________________________
const char *TFeldmanCousins::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFeldmanCousins*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFeldmanCousins::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFeldmanCousins*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFeldmanCousins::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFeldmanCousins*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFeldmanCousins::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFeldmanCousins*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVector2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVector2::Class_Name()
{
   return "TVector2";
}

//______________________________________________________________________________
const char *TVector2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVector2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVector2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVector2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVector2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVector2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVector2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVector2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVector3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVector3::Class_Name()
{
   return "TVector3";
}

//______________________________________________________________________________
const char *TVector3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVector3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVector3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVector3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVector3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVector3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVector3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVector3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRotation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRotation::Class_Name()
{
   return "TRotation";
}

//______________________________________________________________________________
const char *TRotation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRotation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRotation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRotation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRotation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRotation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRotation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRotation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLorentzVector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLorentzVector::Class_Name()
{
   return "TLorentzVector";
}

//______________________________________________________________________________
const char *TLorentzVector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLorentzVector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLorentzVector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLorentzVector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLorentzVector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLorentzVector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLorentzVector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLorentzVector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGenPhaseSpace::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGenPhaseSpace::Class_Name()
{
   return "TGenPhaseSpace";
}

//______________________________________________________________________________
const char *TGenPhaseSpace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenPhaseSpace*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGenPhaseSpace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenPhaseSpace*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGenPhaseSpace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenPhaseSpace*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGenPhaseSpace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenPhaseSpace*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLorentzRotation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLorentzRotation::Class_Name()
{
   return "TLorentzRotation";
}

//______________________________________________________________________________
const char *TLorentzRotation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLorentzRotation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLorentzRotation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLorentzRotation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLorentzRotation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLorentzRotation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLorentzRotation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLorentzRotation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQuaternion::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQuaternion::Class_Name()
{
   return "TQuaternion";
}

//______________________________________________________________________________
const char *TQuaternion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQuaternion*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQuaternion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQuaternion*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQuaternion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQuaternion*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQuaternion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQuaternion*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRobustEstimator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRobustEstimator::Class_Name()
{
   return "TRobustEstimator";
}

//______________________________________________________________________________
const char *TRobustEstimator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRobustEstimator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRobustEstimator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRobustEstimator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRobustEstimator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRobustEstimator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRobustEstimator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRobustEstimator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRolke::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRolke::Class_Name()
{
   return "TRolke";
}

//______________________________________________________________________________
const char *TRolke::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRolke*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRolke::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRolke*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRolke::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRolke*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRolke::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRolke*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TFeldmanCousins::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFeldmanCousins.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFeldmanCousins::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFeldmanCousins::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFeldmanCousins(void *p) {
      return  p ? new(p) ::TFeldmanCousins : new ::TFeldmanCousins;
   }
   static void *newArray_TFeldmanCousins(Long_t nElements, void *p) {
      return p ? new(p) ::TFeldmanCousins[nElements] : new ::TFeldmanCousins[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFeldmanCousins(void *p) {
      delete ((::TFeldmanCousins*)p);
   }
   static void deleteArray_TFeldmanCousins(void *p) {
      delete [] ((::TFeldmanCousins*)p);
   }
   static void destruct_TFeldmanCousins(void *p) {
      typedef ::TFeldmanCousins current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFeldmanCousins

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVector2(void *p) {
      return  p ? new(p) ::TVector2 : new ::TVector2;
   }
   static void *newArray_TVector2(Long_t nElements, void *p) {
      return p ? new(p) ::TVector2[nElements] : new ::TVector2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVector2(void *p) {
      delete ((::TVector2*)p);
   }
   static void deleteArray_TVector2(void *p) {
      delete [] ((::TVector2*)p);
   }
   static void destruct_TVector2(void *p) {
      typedef ::TVector2 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVector2(TBuffer &buf, void *obj) {
      ((::TVector2*)obj)->::TVector2::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVector2

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVector3(void *p) {
      return  p ? new(p) ::TVector3 : new ::TVector3;
   }
   static void *newArray_TVector3(Long_t nElements, void *p) {
      return p ? new(p) ::TVector3[nElements] : new ::TVector3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVector3(void *p) {
      delete ((::TVector3*)p);
   }
   static void deleteArray_TVector3(void *p) {
      delete [] ((::TVector3*)p);
   }
   static void destruct_TVector3(void *p) {
      typedef ::TVector3 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVector3(TBuffer &buf, void *obj) {
      ((::TVector3*)obj)->::TVector3::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVector3

//______________________________________________________________________________
void TRotation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRotation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRotation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRotation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRotation(void *p) {
      return  p ? new(p) ::TRotation : new ::TRotation;
   }
   static void *newArray_TRotation(Long_t nElements, void *p) {
      return p ? new(p) ::TRotation[nElements] : new ::TRotation[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRotation(void *p) {
      delete ((::TRotation*)p);
   }
   static void deleteArray_TRotation(void *p) {
      delete [] ((::TRotation*)p);
   }
   static void destruct_TRotation(void *p) {
      typedef ::TRotation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRotation

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLorentzVector(void *p) {
      return  p ? new(p) ::TLorentzVector : new ::TLorentzVector;
   }
   static void *newArray_TLorentzVector(Long_t nElements, void *p) {
      return p ? new(p) ::TLorentzVector[nElements] : new ::TLorentzVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLorentzVector(void *p) {
      delete ((::TLorentzVector*)p);
   }
   static void deleteArray_TLorentzVector(void *p) {
      delete [] ((::TLorentzVector*)p);
   }
   static void destruct_TLorentzVector(void *p) {
      typedef ::TLorentzVector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLorentzVector(TBuffer &buf, void *obj) {
      ((::TLorentzVector*)obj)->::TLorentzVector::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLorentzVector

//______________________________________________________________________________
void TGenPhaseSpace::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGenPhaseSpace.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGenPhaseSpace::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGenPhaseSpace::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGenPhaseSpace(void *p) {
      return  p ? new(p) ::TGenPhaseSpace : new ::TGenPhaseSpace;
   }
   static void *newArray_TGenPhaseSpace(Long_t nElements, void *p) {
      return p ? new(p) ::TGenPhaseSpace[nElements] : new ::TGenPhaseSpace[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGenPhaseSpace(void *p) {
      delete ((::TGenPhaseSpace*)p);
   }
   static void deleteArray_TGenPhaseSpace(void *p) {
      delete [] ((::TGenPhaseSpace*)p);
   }
   static void destruct_TGenPhaseSpace(void *p) {
      typedef ::TGenPhaseSpace current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGenPhaseSpace

//______________________________________________________________________________
void TLorentzRotation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLorentzRotation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLorentzRotation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLorentzRotation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLorentzRotation(void *p) {
      return  p ? new(p) ::TLorentzRotation : new ::TLorentzRotation;
   }
   static void *newArray_TLorentzRotation(Long_t nElements, void *p) {
      return p ? new(p) ::TLorentzRotation[nElements] : new ::TLorentzRotation[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLorentzRotation(void *p) {
      delete ((::TLorentzRotation*)p);
   }
   static void deleteArray_TLorentzRotation(void *p) {
      delete [] ((::TLorentzRotation*)p);
   }
   static void destruct_TLorentzRotation(void *p) {
      typedef ::TLorentzRotation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLorentzRotation

//______________________________________________________________________________
void TQuaternion::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQuaternion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQuaternion::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQuaternion::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQuaternion(void *p) {
      return  p ? new(p) ::TQuaternion : new ::TQuaternion;
   }
   static void *newArray_TQuaternion(Long_t nElements, void *p) {
      return p ? new(p) ::TQuaternion[nElements] : new ::TQuaternion[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQuaternion(void *p) {
      delete ((::TQuaternion*)p);
   }
   static void deleteArray_TQuaternion(void *p) {
      delete [] ((::TQuaternion*)p);
   }
   static void destruct_TQuaternion(void *p) {
      typedef ::TQuaternion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQuaternion

//______________________________________________________________________________
void TRobustEstimator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRobustEstimator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRobustEstimator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRobustEstimator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRobustEstimator(void *p) {
      return  p ? new(p) ::TRobustEstimator : new ::TRobustEstimator;
   }
   static void *newArray_TRobustEstimator(Long_t nElements, void *p) {
      return p ? new(p) ::TRobustEstimator[nElements] : new ::TRobustEstimator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRobustEstimator(void *p) {
      delete ((::TRobustEstimator*)p);
   }
   static void deleteArray_TRobustEstimator(void *p) {
      delete [] ((::TRobustEstimator*)p);
   }
   static void destruct_TRobustEstimator(void *p) {
      typedef ::TRobustEstimator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRobustEstimator

//______________________________________________________________________________
void TRolke::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRolke.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRolke::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRolke::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRolke(void *p) {
      return  p ? new(p) ::TRolke : new ::TRolke;
   }
   static void *newArray_TRolke(Long_t nElements, void *p) {
      return p ? new(p) ::TRolke[nElements] : new ::TRolke[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRolke(void *p) {
      delete ((::TRolke*)p);
   }
   static void deleteArray_TRolke(void *p) {
      delete [] ((::TRolke*)p);
   }
   static void destruct_TRolke(void *p) {
      typedef ::TRolke current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRolke

namespace {
  void TriggerDictionaryInitialization_libPhysics_Impl() {
    static const char* headers[] = {
"TFeldmanCousins.h",
"TGenPhaseSpace.h",
"TLorentzRotation.h",
"TLorentzVector.h",
"TQuaternion.h",
"TRobustEstimator.h",
"TRolke.h",
"TRotation.h",
"TVector2.h",
"TVector3.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libPhysics dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TFeldmanCousins.h"
#include "TGenPhaseSpace.h"
#include "TLorentzRotation.h"
#include "TLorentzVector.h"
#include "TQuaternion.h"
#include "TRobustEstimator.h"
#include "TRolke.h"
#include "TRotation.h"
#include "TVector2.h"
#include "TVector3.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libPhysics",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libPhysics_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libPhysics_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libPhysics() {
  TriggerDictionaryInitialization_libPhysics_Impl();
}
