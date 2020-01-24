// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Smatrix32

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
#include "Math/SMatrix.h"
#include "Math/SVector.h"
#include "Math/SMatrixDfwd.h"
#include "Math/SMatrixFfwd.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<Double32_t,3,3>*)
   {
      ::ROOT::Math::MatRepStd<Double32_t,3,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<Double32_t,3,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<Double32_t,3,3>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<Double32_t,3,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<Double32_t,3,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<Double32_t,3,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<Double32_t,3,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<Double32_t,4,4>*)
   {
      ::ROOT::Math::MatRepStd<Double32_t,4,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<Double32_t,4,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<Double32_t,4,4>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<Double32_t,4,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<Double32_t,4,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<Double32_t,4,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<Double32_t,4,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<Double32_t,5,5>*)
   {
      ::ROOT::Math::MatRepStd<Double32_t,5,5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<Double32_t,5,5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<Double32_t,5,5>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<Double32_t,5,5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<Double32_t,5,5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<Double32_t,5,5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<Double32_t,5,5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<Double32_t,6,6>*)
   {
      ::ROOT::Math::MatRepStd<Double32_t,6,6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<Double32_t,6,6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<Double32_t,6,6>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<Double32_t,6,6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<Double32_t,6,6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<Double32_t,6,6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<Double32_t,6,6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<Double32_t,3>*)
   {
      ::ROOT::Math::MatRepSym<Double32_t,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<Double32_t,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<Double32_t,3>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<Double32_t,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<Double32_t,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<Double32_t,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<Double32_t,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<Double32_t,4>*)
   {
      ::ROOT::Math::MatRepSym<Double32_t,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<Double32_t,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<Double32_t,4>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<Double32_t,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<Double32_t,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<Double32_t,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<Double32_t,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<Double32_t,5>*)
   {
      ::ROOT::Math::MatRepSym<Double32_t,5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<Double32_t,5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<Double32_t,5>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<Double32_t,5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<Double32_t,5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<Double32_t,5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<Double32_t,5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<Double32_t,6>*)
   {
      ::ROOT::Math::MatRepSym<Double32_t,6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<Double32_t,6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<Double32_t,6>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<Double32_t,6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<Double32_t,6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<Double32_t,6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<Double32_t,6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<Double32_t,6>*)
   {
      ::ROOT::Math::SVector<Double32_t,6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<Double32_t,6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<Double32_t,6>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<Double32_t,6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<Double32_t,6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<Double32_t,6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<Double32_t,6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<Double32_t,5>*)
   {
      ::ROOT::Math::SVector<Double32_t,5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<Double32_t,5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<Double32_t,5>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<Double32_t,5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<Double32_t,5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<Double32_t,5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<Double32_t,5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<Double32_t,4>*)
   {
      ::ROOT::Math::SVector<Double32_t,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<Double32_t,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<Double32_t,4>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<Double32_t,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<Double32_t,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<Double32_t,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<Double32_t,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<Double32_t,3>*)
   {
      ::ROOT::Math::SVector<Double32_t,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<Double32_t,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<Double32_t,3>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<Double32_t,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<Double32_t,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<Double32_t,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<Double32_t,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >*)
   {
      ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >","ROOT::Math::SMatrix<Double32_t,3,3>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >*)
   {
      ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >","ROOT::Math::SMatrix<Double32_t,4,4>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >*)
   {
      ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >","ROOT::Math::SMatrix<Double32_t,5,5>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >*)
   {
      ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >","ROOT::Math::SMatrix<Double32_t,6,6>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >*)
   {
      ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >*)
   {
      ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >*)
   {
      ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >*)
   {
      ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<Double32_t,3,3> : new ::ROOT::Math::MatRepStd<Double32_t,3,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<Double32_t,3,3>[nElements] : new ::ROOT::Math::MatRepStd<Double32_t,3,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<Double32_t,3,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<Double32_t,3,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<Double32_t,3,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<Double32_t,3,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<Double32_t,4,4> : new ::ROOT::Math::MatRepStd<Double32_t,4,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<Double32_t,4,4>[nElements] : new ::ROOT::Math::MatRepStd<Double32_t,4,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<Double32_t,4,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<Double32_t,4,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<Double32_t,4,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<Double32_t,4,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<Double32_t,5,5> : new ::ROOT::Math::MatRepStd<Double32_t,5,5>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<Double32_t,5,5>[nElements] : new ::ROOT::Math::MatRepStd<Double32_t,5,5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<Double32_t,5,5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<Double32_t,5,5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<Double32_t,5,5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<Double32_t,5,5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<Double32_t,6,6> : new ::ROOT::Math::MatRepStd<Double32_t,6,6>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<Double32_t,6,6>[nElements] : new ::ROOT::Math::MatRepStd<Double32_t,6,6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<Double32_t,6,6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<Double32_t,6,6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<Double32_t,6,6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<Double32_t,6,6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<Double32_t,3> : new ::ROOT::Math::MatRepSym<Double32_t,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<Double32_t,3>[nElements] : new ::ROOT::Math::MatRepSym<Double32_t,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<Double32_t,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<Double32_t,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<Double32_t,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<Double32_t,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<Double32_t,4> : new ::ROOT::Math::MatRepSym<Double32_t,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<Double32_t,4>[nElements] : new ::ROOT::Math::MatRepSym<Double32_t,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<Double32_t,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<Double32_t,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<Double32_t,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<Double32_t,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<Double32_t,5> : new ::ROOT::Math::MatRepSym<Double32_t,5>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<Double32_t,5>[nElements] : new ::ROOT::Math::MatRepSym<Double32_t,5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<Double32_t,5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<Double32_t,5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<Double32_t,5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<Double32_t,5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<Double32_t,6> : new ::ROOT::Math::MatRepSym<Double32_t,6>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<Double32_t,6>[nElements] : new ::ROOT::Math::MatRepSym<Double32_t,6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<Double32_t,6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<Double32_t,6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<Double32_t,6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<Double32_t,6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<Double32_t,6> : new ::ROOT::Math::SVector<Double32_t,6>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<Double32_t,6>[nElements] : new ::ROOT::Math::SVector<Double32_t,6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(void *p) {
      delete ((::ROOT::Math::SVector<Double32_t,6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(void *p) {
      delete [] ((::ROOT::Math::SVector<Double32_t,6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO6gR(void *p) {
      typedef ::ROOT::Math::SVector<Double32_t,6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<Double32_t,6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<Double32_t,5> : new ::ROOT::Math::SVector<Double32_t,5>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<Double32_t,5>[nElements] : new ::ROOT::Math::SVector<Double32_t,5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(void *p) {
      delete ((::ROOT::Math::SVector<Double32_t,5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(void *p) {
      delete [] ((::ROOT::Math::SVector<Double32_t,5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO5gR(void *p) {
      typedef ::ROOT::Math::SVector<Double32_t,5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<Double32_t,5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<Double32_t,4> : new ::ROOT::Math::SVector<Double32_t,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<Double32_t,4>[nElements] : new ::ROOT::Math::SVector<Double32_t,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(void *p) {
      delete ((::ROOT::Math::SVector<Double32_t,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(void *p) {
      delete [] ((::ROOT::Math::SVector<Double32_t,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO4gR(void *p) {
      typedef ::ROOT::Math::SVector<Double32_t,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<Double32_t,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<Double32_t,3> : new ::ROOT::Math::SVector<Double32_t,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<Double32_t,3>[nElements] : new ::ROOT::Math::SVector<Double32_t,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(void *p) {
      delete ((::ROOT::Math::SVector<Double32_t,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(void *p) {
      delete [] ((::ROOT::Math::SVector<Double32_t,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEDouble32_tcO3gR(void *p) {
      typedef ::ROOT::Math::SVector<Double32_t,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<Double32_t,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> > : new ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >[nElements] : new ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO3cO3gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepStd<Double32_t,3,3> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> > : new ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >[nElements] : new ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO4cO4gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepStd<Double32_t,4,4> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> > : new ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >[nElements] : new ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO5cO5gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepStd<Double32_t,5,5> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> > : new ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >[nElements] : new ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepStdlEDouble32_tcO6cO6gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepStd<Double32_t,6,6> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> > : new ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >[nElements] : new ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO3cO3cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO3gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<Double32_t,3,3,ROOT::Math::MatRepSym<Double32_t,3> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> > : new ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >[nElements] : new ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO4cO4cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO4gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<Double32_t,4,4,ROOT::Math::MatRepSym<Double32_t,4> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> > : new ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >[nElements] : new ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO5cO5cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO5gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<Double32_t,5,5,ROOT::Math::MatRepSym<Double32_t,5> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> > : new ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >[nElements] : new ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEDouble32_tcO6cO6cOROOTcLcLMathcLcLMatRepSymlEDouble32_tcO6gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<Double32_t,6,6,ROOT::Math::MatRepSym<Double32_t,6> >

namespace {
  void TriggerDictionaryInitialization_libSmatrix_G__Smatrix32_Impl() {
    static const char* headers[] = {
"Math/SMatrix.h",
"Math/SVector.h",
"Math/SMatrixDfwd.h",
"Math/SMatrixFfwd.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSmatrix_G__Smatrix32 dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Math/SMatrix.h"
#include "Math/SVector.h"
#include "Math/SMatrixDfwd.h"
#include "Math/SMatrixFfwd.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSmatrix_G__Smatrix32",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSmatrix_G__Smatrix32_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSmatrix_G__Smatrix32_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSmatrix_G__Smatrix32() {
  TriggerDictionaryInitialization_libSmatrix_G__Smatrix32_Impl();
}
