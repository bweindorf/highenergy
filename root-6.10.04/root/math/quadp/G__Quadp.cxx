// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Quadp

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
#include "TGondzioSolver.h"
#include "TMehrotraSolver.h"
#include "TQpDataBase.h"
#include "TQpDataDens.h"
#include "TQpDataSparse.h"
#include "TQpLinSolverBase.h"
#include "TQpLinSolverDens.h"
#include "TQpLinSolverSparse.h"
#include "TQpProbBase.h"
#include "TQpProbDens.h"
#include "TQpProbSparse.h"
#include "TQpResidual.h"
#include "TQpSolverBase.h"
#include "TQpVar.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TQpVar(void *p = 0);
   static void *newArray_TQpVar(Long_t size, void *p);
   static void delete_TQpVar(void *p);
   static void deleteArray_TQpVar(void *p);
   static void destruct_TQpVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpVar*)
   {
      ::TQpVar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpVar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpVar", ::TQpVar::Class_Version(), "TQpVar.h", 59,
                  typeid(::TQpVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpVar::Dictionary, isa_proxy, 4,
                  sizeof(::TQpVar) );
      instance.SetNew(&new_TQpVar);
      instance.SetNewArray(&newArray_TQpVar);
      instance.SetDelete(&delete_TQpVar);
      instance.SetDeleteArray(&deleteArray_TQpVar);
      instance.SetDestructor(&destruct_TQpVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpVar*)
   {
      return GenerateInitInstanceLocal((::TQpVar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpVar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQpDataBase(void *p);
   static void deleteArray_TQpDataBase(void *p);
   static void destruct_TQpDataBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpDataBase*)
   {
      ::TQpDataBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpDataBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpDataBase", ::TQpDataBase::Class_Version(), "TQpDataBase.h", 60,
                  typeid(::TQpDataBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpDataBase::Dictionary, isa_proxy, 4,
                  sizeof(::TQpDataBase) );
      instance.SetDelete(&delete_TQpDataBase);
      instance.SetDeleteArray(&deleteArray_TQpDataBase);
      instance.SetDestructor(&destruct_TQpDataBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpDataBase*)
   {
      return GenerateInitInstanceLocal((::TQpDataBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpDataBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpDataDens(void *p = 0);
   static void *newArray_TQpDataDens(Long_t size, void *p);
   static void delete_TQpDataDens(void *p);
   static void deleteArray_TQpDataDens(void *p);
   static void destruct_TQpDataDens(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpDataDens*)
   {
      ::TQpDataDens *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpDataDens >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpDataDens", ::TQpDataDens::Class_Version(), "TQpDataDens.h", 62,
                  typeid(::TQpDataDens), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpDataDens::Dictionary, isa_proxy, 4,
                  sizeof(::TQpDataDens) );
      instance.SetNew(&new_TQpDataDens);
      instance.SetNewArray(&newArray_TQpDataDens);
      instance.SetDelete(&delete_TQpDataDens);
      instance.SetDeleteArray(&deleteArray_TQpDataDens);
      instance.SetDestructor(&destruct_TQpDataDens);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpDataDens*)
   {
      return GenerateInitInstanceLocal((::TQpDataDens*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpDataDens*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpResidual(void *p = 0);
   static void *newArray_TQpResidual(Long_t size, void *p);
   static void delete_TQpResidual(void *p);
   static void deleteArray_TQpResidual(void *p);
   static void destruct_TQpResidual(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpResidual*)
   {
      ::TQpResidual *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpResidual >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpResidual", ::TQpResidual::Class_Version(), "TQpResidual.h", 61,
                  typeid(::TQpResidual), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpResidual::Dictionary, isa_proxy, 4,
                  sizeof(::TQpResidual) );
      instance.SetNew(&new_TQpResidual);
      instance.SetNewArray(&newArray_TQpResidual);
      instance.SetDelete(&delete_TQpResidual);
      instance.SetDeleteArray(&deleteArray_TQpResidual);
      instance.SetDestructor(&destruct_TQpResidual);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpResidual*)
   {
      return GenerateInitInstanceLocal((::TQpResidual*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpResidual*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQpProbBase(void *p);
   static void deleteArray_TQpProbBase(void *p);
   static void destruct_TQpProbBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpProbBase*)
   {
      ::TQpProbBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpProbBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpProbBase", ::TQpProbBase::Class_Version(), "TQpProbBase.h", 88,
                  typeid(::TQpProbBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpProbBase::Dictionary, isa_proxy, 4,
                  sizeof(::TQpProbBase) );
      instance.SetDelete(&delete_TQpProbBase);
      instance.SetDeleteArray(&deleteArray_TQpProbBase);
      instance.SetDestructor(&destruct_TQpProbBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpProbBase*)
   {
      return GenerateInitInstanceLocal((::TQpProbBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpProbBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQpLinSolverBase(void *p);
   static void deleteArray_TQpLinSolverBase(void *p);
   static void destruct_TQpLinSolverBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpLinSolverBase*)
   {
      ::TQpLinSolverBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpLinSolverBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpLinSolverBase", ::TQpLinSolverBase::Class_Version(), "TQpLinSolverBase.h", 66,
                  typeid(::TQpLinSolverBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpLinSolverBase::Dictionary, isa_proxy, 4,
                  sizeof(::TQpLinSolverBase) );
      instance.SetDelete(&delete_TQpLinSolverBase);
      instance.SetDeleteArray(&deleteArray_TQpLinSolverBase);
      instance.SetDestructor(&destruct_TQpLinSolverBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpLinSolverBase*)
   {
      return GenerateInitInstanceLocal((::TQpLinSolverBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpLinSolverBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQpSolverBase(void *p);
   static void deleteArray_TQpSolverBase(void *p);
   static void destruct_TQpSolverBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpSolverBase*)
   {
      ::TQpSolverBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpSolverBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpSolverBase", ::TQpSolverBase::Class_Version(), "TQpSolverBase.h", 72,
                  typeid(::TQpSolverBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpSolverBase::Dictionary, isa_proxy, 4,
                  sizeof(::TQpSolverBase) );
      instance.SetDelete(&delete_TQpSolverBase);
      instance.SetDeleteArray(&deleteArray_TQpSolverBase);
      instance.SetDestructor(&destruct_TQpSolverBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpSolverBase*)
   {
      return GenerateInitInstanceLocal((::TQpSolverBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpSolverBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGondzioSolver(void *p = 0);
   static void *newArray_TGondzioSolver(Long_t size, void *p);
   static void delete_TGondzioSolver(void *p);
   static void deleteArray_TGondzioSolver(void *p);
   static void destruct_TGondzioSolver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGondzioSolver*)
   {
      ::TGondzioSolver *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGondzioSolver >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGondzioSolver", ::TGondzioSolver::Class_Version(), "TGondzioSolver.h", 56,
                  typeid(::TGondzioSolver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGondzioSolver::Dictionary, isa_proxy, 4,
                  sizeof(::TGondzioSolver) );
      instance.SetNew(&new_TGondzioSolver);
      instance.SetNewArray(&newArray_TGondzioSolver);
      instance.SetDelete(&delete_TGondzioSolver);
      instance.SetDeleteArray(&deleteArray_TGondzioSolver);
      instance.SetDestructor(&destruct_TGondzioSolver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGondzioSolver*)
   {
      return GenerateInitInstanceLocal((::TGondzioSolver*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGondzioSolver*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMehrotraSolver(void *p = 0);
   static void *newArray_TMehrotraSolver(Long_t size, void *p);
   static void delete_TMehrotraSolver(void *p);
   static void deleteArray_TMehrotraSolver(void *p);
   static void destruct_TMehrotraSolver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMehrotraSolver*)
   {
      ::TMehrotraSolver *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMehrotraSolver >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMehrotraSolver", ::TMehrotraSolver::Class_Version(), "TMehrotraSolver.h", 55,
                  typeid(::TMehrotraSolver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMehrotraSolver::Dictionary, isa_proxy, 4,
                  sizeof(::TMehrotraSolver) );
      instance.SetNew(&new_TMehrotraSolver);
      instance.SetNewArray(&newArray_TMehrotraSolver);
      instance.SetDelete(&delete_TMehrotraSolver);
      instance.SetDeleteArray(&deleteArray_TMehrotraSolver);
      instance.SetDestructor(&destruct_TMehrotraSolver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMehrotraSolver*)
   {
      return GenerateInitInstanceLocal((::TMehrotraSolver*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMehrotraSolver*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpDataSparse(void *p = 0);
   static void *newArray_TQpDataSparse(Long_t size, void *p);
   static void delete_TQpDataSparse(void *p);
   static void deleteArray_TQpDataSparse(void *p);
   static void destruct_TQpDataSparse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpDataSparse*)
   {
      ::TQpDataSparse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpDataSparse >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpDataSparse", ::TQpDataSparse::Class_Version(), "TQpDataSparse.h", 59,
                  typeid(::TQpDataSparse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpDataSparse::Dictionary, isa_proxy, 4,
                  sizeof(::TQpDataSparse) );
      instance.SetNew(&new_TQpDataSparse);
      instance.SetNewArray(&newArray_TQpDataSparse);
      instance.SetDelete(&delete_TQpDataSparse);
      instance.SetDeleteArray(&deleteArray_TQpDataSparse);
      instance.SetDestructor(&destruct_TQpDataSparse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpDataSparse*)
   {
      return GenerateInitInstanceLocal((::TQpDataSparse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpDataSparse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpProbDens(void *p = 0);
   static void *newArray_TQpProbDens(Long_t size, void *p);
   static void delete_TQpProbDens(void *p);
   static void deleteArray_TQpProbDens(void *p);
   static void destruct_TQpProbDens(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpProbDens*)
   {
      ::TQpProbDens *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpProbDens >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpProbDens", ::TQpProbDens::Class_Version(), "TQpProbDens.h", 60,
                  typeid(::TQpProbDens), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpProbDens::Dictionary, isa_proxy, 4,
                  sizeof(::TQpProbDens) );
      instance.SetNew(&new_TQpProbDens);
      instance.SetNewArray(&newArray_TQpProbDens);
      instance.SetDelete(&delete_TQpProbDens);
      instance.SetDeleteArray(&deleteArray_TQpProbDens);
      instance.SetDestructor(&destruct_TQpProbDens);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpProbDens*)
   {
      return GenerateInitInstanceLocal((::TQpProbDens*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpProbDens*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpLinSolverDens(void *p = 0);
   static void *newArray_TQpLinSolverDens(Long_t size, void *p);
   static void delete_TQpLinSolverDens(void *p);
   static void deleteArray_TQpLinSolverDens(void *p);
   static void destruct_TQpLinSolverDens(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpLinSolverDens*)
   {
      ::TQpLinSolverDens *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpLinSolverDens >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpLinSolverDens", ::TQpLinSolverDens::Class_Version(), "TQpLinSolverDens.h", 60,
                  typeid(::TQpLinSolverDens), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpLinSolverDens::Dictionary, isa_proxy, 4,
                  sizeof(::TQpLinSolverDens) );
      instance.SetNew(&new_TQpLinSolverDens);
      instance.SetNewArray(&newArray_TQpLinSolverDens);
      instance.SetDelete(&delete_TQpLinSolverDens);
      instance.SetDeleteArray(&deleteArray_TQpLinSolverDens);
      instance.SetDestructor(&destruct_TQpLinSolverDens);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpLinSolverDens*)
   {
      return GenerateInitInstanceLocal((::TQpLinSolverDens*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpLinSolverDens*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpProbSparse(void *p = 0);
   static void *newArray_TQpProbSparse(Long_t size, void *p);
   static void delete_TQpProbSparse(void *p);
   static void deleteArray_TQpProbSparse(void *p);
   static void destruct_TQpProbSparse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpProbSparse*)
   {
      ::TQpProbSparse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpProbSparse >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpProbSparse", ::TQpProbSparse::Class_Version(), "TQpProbSparse.h", 58,
                  typeid(::TQpProbSparse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpProbSparse::Dictionary, isa_proxy, 4,
                  sizeof(::TQpProbSparse) );
      instance.SetNew(&new_TQpProbSparse);
      instance.SetNewArray(&newArray_TQpProbSparse);
      instance.SetDelete(&delete_TQpProbSparse);
      instance.SetDeleteArray(&deleteArray_TQpProbSparse);
      instance.SetDestructor(&destruct_TQpProbSparse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpProbSparse*)
   {
      return GenerateInitInstanceLocal((::TQpProbSparse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpProbSparse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQpLinSolverSparse(void *p = 0);
   static void *newArray_TQpLinSolverSparse(Long_t size, void *p);
   static void delete_TQpLinSolverSparse(void *p);
   static void deleteArray_TQpLinSolverSparse(void *p);
   static void destruct_TQpLinSolverSparse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQpLinSolverSparse*)
   {
      ::TQpLinSolverSparse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQpLinSolverSparse >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQpLinSolverSparse", ::TQpLinSolverSparse::Class_Version(), "TQpLinSolverSparse.h", 60,
                  typeid(::TQpLinSolverSparse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQpLinSolverSparse::Dictionary, isa_proxy, 4,
                  sizeof(::TQpLinSolverSparse) );
      instance.SetNew(&new_TQpLinSolverSparse);
      instance.SetNewArray(&newArray_TQpLinSolverSparse);
      instance.SetDelete(&delete_TQpLinSolverSparse);
      instance.SetDeleteArray(&deleteArray_TQpLinSolverSparse);
      instance.SetDestructor(&destruct_TQpLinSolverSparse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQpLinSolverSparse*)
   {
      return GenerateInitInstanceLocal((::TQpLinSolverSparse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQpLinSolverSparse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TQpVar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpVar::Class_Name()
{
   return "TQpVar";
}

//______________________________________________________________________________
const char *TQpVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpVar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpVar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpVar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpVar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpDataBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpDataBase::Class_Name()
{
   return "TQpDataBase";
}

//______________________________________________________________________________
const char *TQpDataBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpDataBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpDataBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpDataBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpDataDens::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpDataDens::Class_Name()
{
   return "TQpDataDens";
}

//______________________________________________________________________________
const char *TQpDataDens::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataDens*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpDataDens::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataDens*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpDataDens::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataDens*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpDataDens::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataDens*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpResidual::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpResidual::Class_Name()
{
   return "TQpResidual";
}

//______________________________________________________________________________
const char *TQpResidual::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpResidual*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpResidual::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpResidual*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpResidual::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpResidual*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpResidual::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpResidual*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpProbBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpProbBase::Class_Name()
{
   return "TQpProbBase";
}

//______________________________________________________________________________
const char *TQpProbBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpProbBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpProbBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpProbBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpLinSolverBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpLinSolverBase::Class_Name()
{
   return "TQpLinSolverBase";
}

//______________________________________________________________________________
const char *TQpLinSolverBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpLinSolverBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpLinSolverBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpLinSolverBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpSolverBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpSolverBase::Class_Name()
{
   return "TQpSolverBase";
}

//______________________________________________________________________________
const char *TQpSolverBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpSolverBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpSolverBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpSolverBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpSolverBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpSolverBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpSolverBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpSolverBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGondzioSolver::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGondzioSolver::Class_Name()
{
   return "TGondzioSolver";
}

//______________________________________________________________________________
const char *TGondzioSolver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGondzioSolver*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGondzioSolver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGondzioSolver*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGondzioSolver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGondzioSolver*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGondzioSolver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGondzioSolver*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMehrotraSolver::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMehrotraSolver::Class_Name()
{
   return "TMehrotraSolver";
}

//______________________________________________________________________________
const char *TMehrotraSolver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMehrotraSolver*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMehrotraSolver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMehrotraSolver*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMehrotraSolver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMehrotraSolver*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMehrotraSolver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMehrotraSolver*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpDataSparse::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpDataSparse::Class_Name()
{
   return "TQpDataSparse";
}

//______________________________________________________________________________
const char *TQpDataSparse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataSparse*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpDataSparse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpDataSparse*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpDataSparse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataSparse*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpDataSparse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpDataSparse*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpProbDens::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpProbDens::Class_Name()
{
   return "TQpProbDens";
}

//______________________________________________________________________________
const char *TQpProbDens::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbDens*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpProbDens::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbDens*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpProbDens::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbDens*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpProbDens::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbDens*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpLinSolverDens::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpLinSolverDens::Class_Name()
{
   return "TQpLinSolverDens";
}

//______________________________________________________________________________
const char *TQpLinSolverDens::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverDens*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpLinSolverDens::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverDens*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpLinSolverDens::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverDens*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpLinSolverDens::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverDens*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpProbSparse::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpProbSparse::Class_Name()
{
   return "TQpProbSparse";
}

//______________________________________________________________________________
const char *TQpProbSparse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbSparse*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpProbSparse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpProbSparse*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpProbSparse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbSparse*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpProbSparse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpProbSparse*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQpLinSolverSparse::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQpLinSolverSparse::Class_Name()
{
   return "TQpLinSolverSparse";
}

//______________________________________________________________________________
const char *TQpLinSolverSparse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverSparse*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQpLinSolverSparse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverSparse*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQpLinSolverSparse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverSparse*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQpLinSolverSparse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQpLinSolverSparse*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TQpVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpVar(void *p) {
      return  p ? new(p) ::TQpVar : new ::TQpVar;
   }
   static void *newArray_TQpVar(Long_t nElements, void *p) {
      return p ? new(p) ::TQpVar[nElements] : new ::TQpVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpVar(void *p) {
      delete ((::TQpVar*)p);
   }
   static void deleteArray_TQpVar(void *p) {
      delete [] ((::TQpVar*)p);
   }
   static void destruct_TQpVar(void *p) {
      typedef ::TQpVar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpVar

//______________________________________________________________________________
void TQpDataBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpDataBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpDataBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpDataBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQpDataBase(void *p) {
      delete ((::TQpDataBase*)p);
   }
   static void deleteArray_TQpDataBase(void *p) {
      delete [] ((::TQpDataBase*)p);
   }
   static void destruct_TQpDataBase(void *p) {
      typedef ::TQpDataBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpDataBase

//______________________________________________________________________________
void TQpDataDens::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpDataDens.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpDataDens::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpDataDens::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpDataDens(void *p) {
      return  p ? new(p) ::TQpDataDens : new ::TQpDataDens;
   }
   static void *newArray_TQpDataDens(Long_t nElements, void *p) {
      return p ? new(p) ::TQpDataDens[nElements] : new ::TQpDataDens[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpDataDens(void *p) {
      delete ((::TQpDataDens*)p);
   }
   static void deleteArray_TQpDataDens(void *p) {
      delete [] ((::TQpDataDens*)p);
   }
   static void destruct_TQpDataDens(void *p) {
      typedef ::TQpDataDens current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpDataDens

//______________________________________________________________________________
void TQpResidual::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpResidual.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpResidual::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpResidual::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpResidual(void *p) {
      return  p ? new(p) ::TQpResidual : new ::TQpResidual;
   }
   static void *newArray_TQpResidual(Long_t nElements, void *p) {
      return p ? new(p) ::TQpResidual[nElements] : new ::TQpResidual[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpResidual(void *p) {
      delete ((::TQpResidual*)p);
   }
   static void deleteArray_TQpResidual(void *p) {
      delete [] ((::TQpResidual*)p);
   }
   static void destruct_TQpResidual(void *p) {
      typedef ::TQpResidual current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpResidual

//______________________________________________________________________________
void TQpProbBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpProbBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpProbBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpProbBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQpProbBase(void *p) {
      delete ((::TQpProbBase*)p);
   }
   static void deleteArray_TQpProbBase(void *p) {
      delete [] ((::TQpProbBase*)p);
   }
   static void destruct_TQpProbBase(void *p) {
      typedef ::TQpProbBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpProbBase

//______________________________________________________________________________
void TQpLinSolverBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpLinSolverBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpLinSolverBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpLinSolverBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQpLinSolverBase(void *p) {
      delete ((::TQpLinSolverBase*)p);
   }
   static void deleteArray_TQpLinSolverBase(void *p) {
      delete [] ((::TQpLinSolverBase*)p);
   }
   static void destruct_TQpLinSolverBase(void *p) {
      typedef ::TQpLinSolverBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpLinSolverBase

//______________________________________________________________________________
void TQpSolverBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpSolverBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpSolverBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpSolverBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQpSolverBase(void *p) {
      delete ((::TQpSolverBase*)p);
   }
   static void deleteArray_TQpSolverBase(void *p) {
      delete [] ((::TQpSolverBase*)p);
   }
   static void destruct_TQpSolverBase(void *p) {
      typedef ::TQpSolverBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpSolverBase

//______________________________________________________________________________
void TGondzioSolver::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGondzioSolver.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGondzioSolver::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGondzioSolver::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGondzioSolver(void *p) {
      return  p ? new(p) ::TGondzioSolver : new ::TGondzioSolver;
   }
   static void *newArray_TGondzioSolver(Long_t nElements, void *p) {
      return p ? new(p) ::TGondzioSolver[nElements] : new ::TGondzioSolver[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGondzioSolver(void *p) {
      delete ((::TGondzioSolver*)p);
   }
   static void deleteArray_TGondzioSolver(void *p) {
      delete [] ((::TGondzioSolver*)p);
   }
   static void destruct_TGondzioSolver(void *p) {
      typedef ::TGondzioSolver current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGondzioSolver

//______________________________________________________________________________
void TMehrotraSolver::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMehrotraSolver.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMehrotraSolver::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMehrotraSolver::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMehrotraSolver(void *p) {
      return  p ? new(p) ::TMehrotraSolver : new ::TMehrotraSolver;
   }
   static void *newArray_TMehrotraSolver(Long_t nElements, void *p) {
      return p ? new(p) ::TMehrotraSolver[nElements] : new ::TMehrotraSolver[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMehrotraSolver(void *p) {
      delete ((::TMehrotraSolver*)p);
   }
   static void deleteArray_TMehrotraSolver(void *p) {
      delete [] ((::TMehrotraSolver*)p);
   }
   static void destruct_TMehrotraSolver(void *p) {
      typedef ::TMehrotraSolver current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMehrotraSolver

//______________________________________________________________________________
void TQpDataSparse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpDataSparse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpDataSparse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpDataSparse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpDataSparse(void *p) {
      return  p ? new(p) ::TQpDataSparse : new ::TQpDataSparse;
   }
   static void *newArray_TQpDataSparse(Long_t nElements, void *p) {
      return p ? new(p) ::TQpDataSparse[nElements] : new ::TQpDataSparse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpDataSparse(void *p) {
      delete ((::TQpDataSparse*)p);
   }
   static void deleteArray_TQpDataSparse(void *p) {
      delete [] ((::TQpDataSparse*)p);
   }
   static void destruct_TQpDataSparse(void *p) {
      typedef ::TQpDataSparse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpDataSparse

//______________________________________________________________________________
void TQpProbDens::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpProbDens.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpProbDens::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpProbDens::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpProbDens(void *p) {
      return  p ? new(p) ::TQpProbDens : new ::TQpProbDens;
   }
   static void *newArray_TQpProbDens(Long_t nElements, void *p) {
      return p ? new(p) ::TQpProbDens[nElements] : new ::TQpProbDens[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpProbDens(void *p) {
      delete ((::TQpProbDens*)p);
   }
   static void deleteArray_TQpProbDens(void *p) {
      delete [] ((::TQpProbDens*)p);
   }
   static void destruct_TQpProbDens(void *p) {
      typedef ::TQpProbDens current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpProbDens

//______________________________________________________________________________
void TQpLinSolverDens::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpLinSolverDens.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpLinSolverDens::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpLinSolverDens::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpLinSolverDens(void *p) {
      return  p ? new(p) ::TQpLinSolverDens : new ::TQpLinSolverDens;
   }
   static void *newArray_TQpLinSolverDens(Long_t nElements, void *p) {
      return p ? new(p) ::TQpLinSolverDens[nElements] : new ::TQpLinSolverDens[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpLinSolverDens(void *p) {
      delete ((::TQpLinSolverDens*)p);
   }
   static void deleteArray_TQpLinSolverDens(void *p) {
      delete [] ((::TQpLinSolverDens*)p);
   }
   static void destruct_TQpLinSolverDens(void *p) {
      typedef ::TQpLinSolverDens current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpLinSolverDens

//______________________________________________________________________________
void TQpProbSparse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpProbSparse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpProbSparse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpProbSparse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpProbSparse(void *p) {
      return  p ? new(p) ::TQpProbSparse : new ::TQpProbSparse;
   }
   static void *newArray_TQpProbSparse(Long_t nElements, void *p) {
      return p ? new(p) ::TQpProbSparse[nElements] : new ::TQpProbSparse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpProbSparse(void *p) {
      delete ((::TQpProbSparse*)p);
   }
   static void deleteArray_TQpProbSparse(void *p) {
      delete [] ((::TQpProbSparse*)p);
   }
   static void destruct_TQpProbSparse(void *p) {
      typedef ::TQpProbSparse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpProbSparse

//______________________________________________________________________________
void TQpLinSolverSparse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQpLinSolverSparse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQpLinSolverSparse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQpLinSolverSparse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQpLinSolverSparse(void *p) {
      return  p ? new(p) ::TQpLinSolverSparse : new ::TQpLinSolverSparse;
   }
   static void *newArray_TQpLinSolverSparse(Long_t nElements, void *p) {
      return p ? new(p) ::TQpLinSolverSparse[nElements] : new ::TQpLinSolverSparse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQpLinSolverSparse(void *p) {
      delete ((::TQpLinSolverSparse*)p);
   }
   static void deleteArray_TQpLinSolverSparse(void *p) {
      delete [] ((::TQpLinSolverSparse*)p);
   }
   static void destruct_TQpLinSolverSparse(void *p) {
      typedef ::TQpLinSolverSparse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQpLinSolverSparse

namespace {
  void TriggerDictionaryInitialization_libQuadp_Impl() {
    static const char* headers[] = {
"TGondzioSolver.h",
"TMehrotraSolver.h",
"TQpDataBase.h",
"TQpDataDens.h",
"TQpDataSparse.h",
"TQpLinSolverBase.h",
"TQpLinSolverDens.h",
"TQpLinSolverSparse.h",
"TQpProbBase.h",
"TQpProbDens.h",
"TQpProbSparse.h",
"TQpResidual.h",
"TQpSolverBase.h",
"TQpVar.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libQuadp dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Qp Variables class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpVar.h")))  __attribute__((annotate("$clingAutoload$TGondzioSolver.h")))  TQpVar;
class __attribute__((annotate(R"ATTRDUMP(Qp Base Data class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpDataBase.h")))  __attribute__((annotate("$clingAutoload$TGondzioSolver.h")))  TQpDataBase;
class __attribute__((annotate(R"ATTRDUMP(Qp Data class for Dens formulation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpDataDens.h")))  __attribute__((annotate("$clingAutoload$TGondzioSolver.h")))  TQpDataDens;
class __attribute__((annotate(R"ATTRDUMP(Qp Residual class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpResidual.h")))  __attribute__((annotate("$clingAutoload$TGondzioSolver.h")))  TQpResidual;
class __attribute__((annotate(R"ATTRDUMP(Qp problem formulation base class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpProbBase.h")))  __attribute__((annotate("$clingAutoload$TGondzioSolver.h")))  TQpProbBase;
class __attribute__((annotate(R"ATTRDUMP(Qp linear solver base class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpLinSolverBase.h")))  __attribute__((annotate("$clingAutoload$TGondzioSolver.h")))  TQpLinSolverBase;
class __attribute__((annotate(R"ATTRDUMP(Qp Solver class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpSolverBase.h")))  __attribute__((annotate("$clingAutoload$TGondzioSolver.h")))  TQpSolverBase;
class __attribute__((annotate(R"ATTRDUMP(Gondzio Qp Solver class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGondzioSolver.h")))  TGondzioSolver;
class __attribute__((annotate(R"ATTRDUMP(Mehrotra Qp Solver class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMehrotraSolver.h")))  TMehrotraSolver;
class __attribute__((annotate(R"ATTRDUMP(Qp Data class for Sparse formulation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpDataSparse.h")))  TQpDataSparse;
class __attribute__((annotate(R"ATTRDUMP(Qp dens problem formulation class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpProbDens.h")))  __attribute__((annotate("$clingAutoload$TQpLinSolverDens.h")))  TQpProbDens;
class __attribute__((annotate(R"ATTRDUMP(Qp linear solver class for Dens formulation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpLinSolverDens.h")))  TQpLinSolverDens;
class __attribute__((annotate(R"ATTRDUMP(Qp sparse problem formulation class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpProbSparse.h")))  __attribute__((annotate("$clingAutoload$TQpLinSolverSparse.h")))  TQpProbSparse;
class __attribute__((annotate(R"ATTRDUMP(Qp linear solver class for Sparse formulation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQpLinSolverSparse.h")))  TQpLinSolverSparse;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libQuadp dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGondzioSolver.h"
#include "TMehrotraSolver.h"
#include "TQpDataBase.h"
#include "TQpDataDens.h"
#include "TQpDataSparse.h"
#include "TQpLinSolverBase.h"
#include "TQpLinSolverDens.h"
#include "TQpLinSolverSparse.h"
#include "TQpProbBase.h"
#include "TQpProbDens.h"
#include "TQpProbSparse.h"
#include "TQpResidual.h"
#include "TQpSolverBase.h"
#include "TQpVar.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TGondzioSolver", payloadCode, "@",
"TMehrotraSolver", payloadCode, "@",
"TQpDataBase", payloadCode, "@",
"TQpDataDens", payloadCode, "@",
"TQpDataSparse", payloadCode, "@",
"TQpLinSolverBase", payloadCode, "@",
"TQpLinSolverDens", payloadCode, "@",
"TQpLinSolverSparse", payloadCode, "@",
"TQpProbBase", payloadCode, "@",
"TQpProbDens", payloadCode, "@",
"TQpProbSparse", payloadCode, "@",
"TQpResidual", payloadCode, "@",
"TQpSolverBase", payloadCode, "@",
"TQpVar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libQuadp",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libQuadp_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libQuadp_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libQuadp() {
  TriggerDictionaryInitialization_libQuadp_Impl();
}
