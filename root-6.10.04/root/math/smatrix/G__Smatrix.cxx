// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Smatrix

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
   namespace Math {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLMath_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Math", 0 /*version*/, "Math/Expression.h", 52,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLMath_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLMath_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<double,2,2>*)
   {
      ::ROOT::Math::MatRepStd<double,2,2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<double,2,2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<double,2,2>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<double,2,2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<double,2,2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<double,2,2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<double,2,2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,2,2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,2,2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<double,3,3>*)
   {
      ::ROOT::Math::MatRepStd<double,3,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<double,3,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<double,3,3>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<double,3,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<double,3,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<double,3,3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<double,3,3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,3,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,3,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<double,4,4>*)
   {
      ::ROOT::Math::MatRepStd<double,4,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<double,4,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<double,4,4>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<double,4,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<double,4,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<double,4,4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<double,4,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,4,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,4,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<double,5,5>*)
   {
      ::ROOT::Math::MatRepStd<double,5,5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<double,5,5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<double,5,5>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<double,5,5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<double,5,5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<double,5,5>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<double,5,5>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,5,5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,5,5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<double,6,6>*)
   {
      ::ROOT::Math::MatRepStd<double,6,6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<double,6,6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<double,6,6>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<double,6,6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<double,6,6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<double,6,6>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<double,6,6>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,6,6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,6,6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<double,7,7>*)
   {
      ::ROOT::Math::MatRepStd<double,7,7> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<double,7,7>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<double,7,7>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<double,7,7>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<double,7,7>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<double,7,7>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<double,7,7>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,7,7>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,7,7>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<float,2,2>*)
   {
      ::ROOT::Math::MatRepStd<float,2,2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<float,2,2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<float,2,2>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<float,2,2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<float,2,2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<float,2,2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<float,2,2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,2,2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,2,2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<float,3,3>*)
   {
      ::ROOT::Math::MatRepStd<float,3,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<float,3,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<float,3,3>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<float,3,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<float,3,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<float,3,3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<float,3,3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,3,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,3,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<float,4,4>*)
   {
      ::ROOT::Math::MatRepStd<float,4,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<float,4,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<float,4,4>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<float,4,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<float,4,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<float,4,4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<float,4,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,4,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,4,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<float,5,5>*)
   {
      ::ROOT::Math::MatRepStd<float,5,5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<float,5,5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<float,5,5>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<float,5,5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<float,5,5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<float,5,5>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<float,5,5>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,5,5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,5,5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<float,6,6>*)
   {
      ::ROOT::Math::MatRepStd<float,6,6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<float,6,6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<float,6,6>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<float,6,6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<float,6,6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<float,6,6>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<float,6,6>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,6,6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,6,6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<float,7,7>*)
   {
      ::ROOT::Math::MatRepStd<float,7,7> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<float,7,7>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<float,7,7>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<float,7,7>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<float,7,7>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<float,7,7>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<float,7,7>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,7,7>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,7,7>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<float,9,7>*)
   {
      ::ROOT::Math::MatRepStd<float,9,7> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<float,9,7>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<float,9,7>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<float,9,7>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<float,9,7>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<float,9,7>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<float,9,7>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,9,7>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,9,7>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<float,3,4>*)
   {
      ::ROOT::Math::MatRepStd<float,3,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<float,3,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<float,3,4>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<float,3,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<float,3,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<float,3,4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<float,3,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,3,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,3,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<float,4,3>*)
   {
      ::ROOT::Math::MatRepStd<float,4,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<float,4,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<float,4,3>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<float,4,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<float,4,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<float,4,3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<float,4,3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,4,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<float,4,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<double,9,7>*)
   {
      ::ROOT::Math::MatRepStd<double,9,7> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<double,9,7>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<double,9,7>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<double,9,7>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<double,9,7>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<double,9,7>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<double,9,7>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,9,7>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,9,7>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<double,3,4>*)
   {
      ::ROOT::Math::MatRepStd<double,3,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<double,3,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<double,3,4>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<double,3,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<double,3,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<double,3,4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<double,3,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,3,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,3,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepStd<double,4,3>*)
   {
      ::ROOT::Math::MatRepStd<double,4,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepStd<double,4,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepStd<double,4,3>", "Math/MatrixRepresentationsStatic.h", 53,
                  typeid(::ROOT::Math::MatRepStd<double,4,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepStd<double,4,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepStd<double,4,3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepStd<double,4,3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,4,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepStd<double,4,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRowOffsetslE7gR_Dictionary();
   static void ROOTcLcLMathcLcLRowOffsetslE7gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRowOffsetslE7gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE7gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRowOffsetslE7gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE7gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE7gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RowOffsets<7>*)
   {
      ::ROOT::Math::RowOffsets<7> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RowOffsets<7>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RowOffsets<7>", "Math/MatrixRepresentationsStatic.h", 130,
                  typeid(::ROOT::Math::RowOffsets<7>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRowOffsetslE7gR_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::RowOffsets<7>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRowOffsetslE7gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRowOffsetslE7gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRowOffsetslE7gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRowOffsetslE7gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRowOffsetslE7gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RowOffsets<7>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RowOffsets<7>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<7>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRowOffsetslE7gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<7>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRowOffsetslE7gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRowOffsetslE7gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRowOffsetslE6gR_Dictionary();
   static void ROOTcLcLMathcLcLRowOffsetslE6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRowOffsetslE6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRowOffsetslE6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RowOffsets<6>*)
   {
      ::ROOT::Math::RowOffsets<6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RowOffsets<6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RowOffsets<6>", "Math/MatrixRepresentationsStatic.h", 130,
                  typeid(::ROOT::Math::RowOffsets<6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRowOffsetslE6gR_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::RowOffsets<6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRowOffsetslE6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRowOffsetslE6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRowOffsetslE6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRowOffsetslE6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRowOffsetslE6gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RowOffsets<6>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RowOffsets<6>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRowOffsetslE6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRowOffsetslE6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRowOffsetslE6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRowOffsetslE5gR_Dictionary();
   static void ROOTcLcLMathcLcLRowOffsetslE5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRowOffsetslE5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRowOffsetslE5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RowOffsets<5>*)
   {
      ::ROOT::Math::RowOffsets<5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RowOffsets<5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RowOffsets<5>", "Math/MatrixRepresentationsStatic.h", 130,
                  typeid(::ROOT::Math::RowOffsets<5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRowOffsetslE5gR_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::RowOffsets<5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRowOffsetslE5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRowOffsetslE5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRowOffsetslE5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRowOffsetslE5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRowOffsetslE5gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RowOffsets<5>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RowOffsets<5>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRowOffsetslE5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRowOffsetslE5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRowOffsetslE5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRowOffsetslE4gR_Dictionary();
   static void ROOTcLcLMathcLcLRowOffsetslE4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRowOffsetslE4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRowOffsetslE4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RowOffsets<4>*)
   {
      ::ROOT::Math::RowOffsets<4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RowOffsets<4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RowOffsets<4>", "Math/MatrixRepresentationsStatic.h", 130,
                  typeid(::ROOT::Math::RowOffsets<4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRowOffsetslE4gR_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::RowOffsets<4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRowOffsetslE4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRowOffsetslE4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRowOffsetslE4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRowOffsetslE4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRowOffsetslE4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RowOffsets<4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RowOffsets<4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRowOffsetslE4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRowOffsetslE4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRowOffsetslE4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRowOffsetslE3gR_Dictionary();
   static void ROOTcLcLMathcLcLRowOffsetslE3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRowOffsetslE3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRowOffsetslE3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RowOffsets<3>*)
   {
      ::ROOT::Math::RowOffsets<3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RowOffsets<3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RowOffsets<3>", "Math/MatrixRepresentationsStatic.h", 130,
                  typeid(::ROOT::Math::RowOffsets<3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRowOffsetslE3gR_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::RowOffsets<3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRowOffsetslE3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRowOffsetslE3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRowOffsetslE3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRowOffsetslE3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRowOffsetslE3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RowOffsets<3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RowOffsets<3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRowOffsetslE3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRowOffsetslE3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRowOffsetslE3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRowOffsetslE2gR_Dictionary();
   static void ROOTcLcLMathcLcLRowOffsetslE2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRowOffsetslE2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRowOffsetslE2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RowOffsets<2>*)
   {
      ::ROOT::Math::RowOffsets<2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RowOffsets<2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RowOffsets<2>", "Math/MatrixRepresentationsStatic.h", 130,
                  typeid(::ROOT::Math::RowOffsets<2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRowOffsetslE2gR_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::RowOffsets<2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRowOffsetslE2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRowOffsetslE2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRowOffsetslE2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRowOffsetslE2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRowOffsetslE2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RowOffsets<2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RowOffsets<2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRowOffsetslE2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RowOffsets<2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRowOffsetslE2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRowOffsetslE2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<double,2>*)
   {
      ::ROOT::Math::MatRepSym<double,2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<double,2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<double,2>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<double,2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<double,2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<double,2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<double,2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<double,3>*)
   {
      ::ROOT::Math::MatRepSym<double,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<double,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<double,3>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<double,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<double,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<double,3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<double,3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<double,4>*)
   {
      ::ROOT::Math::MatRepSym<double,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<double,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<double,4>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<double,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<double,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<double,4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<double,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<double,5>*)
   {
      ::ROOT::Math::MatRepSym<double,5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<double,5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<double,5>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<double,5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<double,5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<double,5>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<double,5>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<double,6>*)
   {
      ::ROOT::Math::MatRepSym<double,6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<double,6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<double,6>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<double,6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<double,6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<double,6>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<double,6>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<double,7>*)
   {
      ::ROOT::Math::MatRepSym<double,7> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<double,7>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<double,7>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<double,7>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<double,7>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<double,7>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<double,7>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,7>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<double,7>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<float,2>*)
   {
      ::ROOT::Math::MatRepSym<float,2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<float,2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<float,2>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<float,2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<float,2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<float,2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<float,2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<float,3>*)
   {
      ::ROOT::Math::MatRepSym<float,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<float,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<float,3>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<float,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<float,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<float,3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<float,3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<float,4>*)
   {
      ::ROOT::Math::MatRepSym<float,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<float,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<float,4>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<float,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<float,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<float,4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<float,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<float,5>*)
   {
      ::ROOT::Math::MatRepSym<float,5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<float,5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<float,5>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<float,5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<float,5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<float,5>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<float,5>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<float,6>*)
   {
      ::ROOT::Math::MatRepSym<float,6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<float,6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<float,6>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<float,6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<float,6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<float,6>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<float,6>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR_Dictionary();
   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MatRepSym<float,7>*)
   {
      ::ROOT::Math::MatRepSym<float,7> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MatRepSym<float,7>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MatRepSym<float,7>", "Math/MatrixRepresentationsStatic.h", 212,
                  typeid(::ROOT::Math::MatRepSym<float,7>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MatRepSym<float,7>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MatRepSym<float,7>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MatRepSym<float,7>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,7>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MatRepSym<float,7>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO7gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEfloatcO7gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<float,7>*)
   {
      ::ROOT::Math::SVector<float,7> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<float,7>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<float,7>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<float,7>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEfloatcO7gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<float,7>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEfloatcO7gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEfloatcO7gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEfloatcO7gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO7gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEfloatcO7gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<float,7>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<float,7>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,7>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO7gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,7>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEfloatcO7gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEfloatcO7gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO6gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEfloatcO6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<float,6>*)
   {
      ::ROOT::Math::SVector<float,6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<float,6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<float,6>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<float,6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEfloatcO6gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<float,6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEfloatcO6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEfloatcO6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEfloatcO6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEfloatcO6gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<float,6>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<float,6>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEfloatcO6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEfloatcO6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO5gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEfloatcO5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<float,5>*)
   {
      ::ROOT::Math::SVector<float,5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<float,5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<float,5>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<float,5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEfloatcO5gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<float,5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEfloatcO5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEfloatcO5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEfloatcO5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEfloatcO5gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<float,5>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<float,5>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEfloatcO5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEfloatcO5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO4gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEfloatcO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<float,4>*)
   {
      ::ROOT::Math::SVector<float,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<float,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<float,4>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<float,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEfloatcO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<float,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEfloatcO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEfloatcO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEfloatcO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEfloatcO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<float,4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<float,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEfloatcO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEfloatcO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO3gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEfloatcO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<float,3>*)
   {
      ::ROOT::Math::SVector<float,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<float,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<float,3>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<float,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEfloatcO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<float,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEfloatcO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEfloatcO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEfloatcO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEfloatcO3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<float,3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<float,3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEfloatcO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEfloatcO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO2gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEfloatcO2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<float,2>*)
   {
      ::ROOT::Math::SVector<float,2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<float,2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<float,2>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<float,2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEfloatcO2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<float,2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEfloatcO2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEfloatcO2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEfloatcO2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEfloatcO2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<float,2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<float,2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEfloatcO2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<float,2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEfloatcO2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEfloatcO2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO7gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEdoublecO7gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<double,7>*)
   {
      ::ROOT::Math::SVector<double,7> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<double,7>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<double,7>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<double,7>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEdoublecO7gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<double,7>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEdoublecO7gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEdoublecO7gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEdoublecO7gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO7gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEdoublecO7gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<double,7>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<double,7>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,7>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO7gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,7>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEdoublecO7gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEdoublecO7gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO6gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEdoublecO6gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<double,6>*)
   {
      ::ROOT::Math::SVector<double,6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<double,6>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<double,6>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<double,6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEdoublecO6gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<double,6>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEdoublecO6gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEdoublecO6gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEdoublecO6gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO6gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEdoublecO6gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<double,6>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<double,6>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,6>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,6>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEdoublecO6gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEdoublecO6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO5gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEdoublecO5gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<double,5>*)
   {
      ::ROOT::Math::SVector<double,5> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<double,5>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<double,5>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<double,5>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEdoublecO5gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<double,5>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEdoublecO5gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEdoublecO5gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEdoublecO5gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO5gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEdoublecO5gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<double,5>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<double,5>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,5>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO5gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,5>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEdoublecO5gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEdoublecO5gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO4gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEdoublecO4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<double,4>*)
   {
      ::ROOT::Math::SVector<double,4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<double,4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<double,4>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<double,4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEdoublecO4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<double,4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEdoublecO4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEdoublecO4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEdoublecO4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEdoublecO4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<double,4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<double,4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEdoublecO4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEdoublecO4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO3gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEdoublecO3gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<double,3>*)
   {
      ::ROOT::Math::SVector<double,3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<double,3>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<double,3>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<double,3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEdoublecO3gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<double,3>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEdoublecO3gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEdoublecO3gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEdoublecO3gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO3gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEdoublecO3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<double,3>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<double,3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,3>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEdoublecO3gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEdoublecO3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO2gR_Dictionary();
   static void ROOTcLcLMathcLcLSVectorlEdoublecO2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SVector<double,2>*)
   {
      ::ROOT::Math::SVector<double,2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SVector<double,2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SVector<double,2>", "Math/SVector.h", 75,
                  typeid(::ROOT::Math::SVector<double,2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSVectorlEdoublecO2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SVector<double,2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSVectorlEdoublecO2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSVectorlEdoublecO2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSVectorlEdoublecO2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSVectorlEdoublecO2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SVector<double,2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SVector<double,2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSVectorlEdoublecO2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SVector<double,2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLSVectorlEdoublecO2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSVectorlEdoublecO2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixIdentity_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixIdentity_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixIdentity(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixIdentity(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixIdentity(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixIdentity(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixIdentity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrixIdentity*)
   {
      ::ROOT::Math::SMatrixIdentity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrixIdentity));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrixIdentity", "Math/SMatrix.h", 95,
                  typeid(::ROOT::Math::SMatrixIdentity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixIdentity_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrixIdentity) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixIdentity);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixIdentity);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixIdentity);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixIdentity);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixIdentity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrixIdentity*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrixIdentity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrixIdentity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixIdentity_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrixIdentity*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixIdentity_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixIdentity_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >*)
   {
      ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >","ROOT::Math::SMatrix<double,2,2>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow","ROOT::Math::SMatrix<double,2,2>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const","ROOT::Math::SMatrix<double,2,2>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >*)
   {
      ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >","ROOT::Math::SMatrix<double,3,3>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow","ROOT::Math::SMatrix<double,3,3>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const","ROOT::Math::SMatrix<double,3,3>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >*)
   {
      ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >","ROOT::Math::SMatrix<double,4,4>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow","ROOT::Math::SMatrix<double,4,4>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const","ROOT::Math::SMatrix<double,4,4>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >*)
   {
      ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >","ROOT::Math::SMatrix<double,5,5>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow","ROOT::Math::SMatrix<double,5,5>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const","ROOT::Math::SMatrix<double,5,5>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >*)
   {
      ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >","ROOT::Math::SMatrix<double,6,6>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow","ROOT::Math::SMatrix<double,6,6>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const","ROOT::Math::SMatrix<double,6,6>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >*)
   {
      ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >","ROOT::Math::SMatrix<double,7,7>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow","ROOT::Math::SMatrix<double,7,7>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const","ROOT::Math::SMatrix<double,7,7>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >*)
   {
      ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >*)
   {
      ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >*)
   {
      ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >*)
   {
      ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >*)
   {
      ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >*)
   {
      ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >*)
   {
      ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >","ROOT::Math::SMatrix<float,2,2>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow","ROOT::Math::SMatrix<float,2,2>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const","ROOT::Math::SMatrix<float,2,2>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >*)
   {
      ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >","ROOT::Math::SMatrix<float,3,3>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow","ROOT::Math::SMatrix<float,3,3>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const","ROOT::Math::SMatrix<float,3,3>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >*)
   {
      ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >","ROOT::Math::SMatrix<float,4,4>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow","ROOT::Math::SMatrix<float,4,4>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const","ROOT::Math::SMatrix<float,4,4>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >*)
   {
      ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >","ROOT::Math::SMatrix<float,5,5>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow","ROOT::Math::SMatrix<float,5,5>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const","ROOT::Math::SMatrix<float,5,5>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >*)
   {
      ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >","ROOT::Math::SMatrix<float,6,6>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow","ROOT::Math::SMatrix<float,6,6>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const","ROOT::Math::SMatrix<float,6,6>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >*)
   {
      ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >","ROOT::Math::SMatrix<float,7,7>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow","ROOT::Math::SMatrix<float,7,7>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const","ROOT::Math::SMatrix<float,7,7>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >*)
   {
      ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >*)
   {
      ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >*)
   {
      ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >*)
   {
      ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >*)
   {
      ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >*)
   {
      ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >*)
   {
      ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >","ROOT::Math::SMatrix<float,9,7>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow","ROOT::Math::SMatrix<float,9,7>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const","ROOT::Math::SMatrix<float,9,7>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >*)
   {
      ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >","ROOT::Math::SMatrix<float,3,4>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow","ROOT::Math::SMatrix<float,3,4>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const","ROOT::Math::SMatrix<float,3,4>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >*)
   {
      ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >","ROOT::Math::SMatrix<float,4,3>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow","ROOT::Math::SMatrix<float,4,3>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const","ROOT::Math::SMatrix<float,4,3>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >*)
   {
      ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >","ROOT::Math::SMatrix<double,9,7>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow","ROOT::Math::SMatrix<double,9,7>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const","ROOT::Math::SMatrix<double,9,7>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >*)
   {
      ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >","ROOT::Math::SMatrix<double,3,4>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow","ROOT::Math::SMatrix<double,3,4>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const","ROOT::Math::SMatrix<double,3,4>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >*)
   {
      ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >", "Math/SMatrix.h", 124,
                  typeid(::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >","ROOT::Math::SMatrix<double,4,3>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow*)
   {
      ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow", "Math/SMatrix.h", 392,
                  typeid(::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow","ROOT::Math::SMatrix<double,4,3>::SMatrixRow");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const_Dictionary();
   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const(void *p);
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const*)
   {
      ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const", "Math/SMatrix.h", 403,
                  typeid(::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const);

      ::ROOT::AddClassAlternate("ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const","ROOT::Math::SMatrix<double,4,3>::SMatrixRow_const");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const*)0x0)->GetClass();
      ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,2,2> : new ::ROOT::Math::MatRepStd<double,2,2>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,2,2>[nElements] : new ::ROOT::Math::MatRepStd<double,2,2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<double,2,2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<double,2,2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<double,2,2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<double,2,2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,3,3> : new ::ROOT::Math::MatRepStd<double,3,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,3,3>[nElements] : new ::ROOT::Math::MatRepStd<double,3,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<double,3,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<double,3,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<double,3,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<double,3,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,4,4> : new ::ROOT::Math::MatRepStd<double,4,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,4,4>[nElements] : new ::ROOT::Math::MatRepStd<double,4,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<double,4,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<double,4,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<double,4,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<double,4,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,5,5> : new ::ROOT::Math::MatRepStd<double,5,5>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,5,5>[nElements] : new ::ROOT::Math::MatRepStd<double,5,5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<double,5,5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<double,5,5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<double,5,5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<double,5,5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,6,6> : new ::ROOT::Math::MatRepStd<double,6,6>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,6,6>[nElements] : new ::ROOT::Math::MatRepStd<double,6,6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<double,6,6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<double,6,6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<double,6,6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<double,6,6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,7,7> : new ::ROOT::Math::MatRepStd<double,7,7>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,7,7>[nElements] : new ::ROOT::Math::MatRepStd<double,7,7>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<double,7,7>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<double,7,7>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<double,7,7> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<double,7,7>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,2,2> : new ::ROOT::Math::MatRepStd<float,2,2>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,2,2>[nElements] : new ::ROOT::Math::MatRepStd<float,2,2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<float,2,2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<float,2,2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<float,2,2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<float,2,2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,3,3> : new ::ROOT::Math::MatRepStd<float,3,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,3,3>[nElements] : new ::ROOT::Math::MatRepStd<float,3,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<float,3,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<float,3,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<float,3,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<float,3,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,4,4> : new ::ROOT::Math::MatRepStd<float,4,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,4,4>[nElements] : new ::ROOT::Math::MatRepStd<float,4,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<float,4,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<float,4,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<float,4,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<float,4,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,5,5> : new ::ROOT::Math::MatRepStd<float,5,5>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,5,5>[nElements] : new ::ROOT::Math::MatRepStd<float,5,5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<float,5,5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<float,5,5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<float,5,5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<float,5,5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,6,6> : new ::ROOT::Math::MatRepStd<float,6,6>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,6,6>[nElements] : new ::ROOT::Math::MatRepStd<float,6,6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<float,6,6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<float,6,6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<float,6,6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<float,6,6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,7,7> : new ::ROOT::Math::MatRepStd<float,7,7>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,7,7>[nElements] : new ::ROOT::Math::MatRepStd<float,7,7>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<float,7,7>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<float,7,7>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<float,7,7> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<float,7,7>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,9,7> : new ::ROOT::Math::MatRepStd<float,9,7>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,9,7>[nElements] : new ::ROOT::Math::MatRepStd<float,9,7>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<float,9,7>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<float,9,7>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<float,9,7> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<float,9,7>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,3,4> : new ::ROOT::Math::MatRepStd<float,3,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,3,4>[nElements] : new ::ROOT::Math::MatRepStd<float,3,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<float,3,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<float,3,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<float,3,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<float,3,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,4,3> : new ::ROOT::Math::MatRepStd<float,4,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<float,4,3>[nElements] : new ::ROOT::Math::MatRepStd<float,4,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<float,4,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<float,4,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<float,4,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<float,4,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,9,7> : new ::ROOT::Math::MatRepStd<double,9,7>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,9,7>[nElements] : new ::ROOT::Math::MatRepStd<double,9,7>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<double,9,7>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<double,9,7>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<double,9,7> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<double,9,7>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,3,4> : new ::ROOT::Math::MatRepStd<double,3,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,3,4>[nElements] : new ::ROOT::Math::MatRepStd<double,3,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<double,3,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<double,3,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<double,3,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<double,3,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,4,3> : new ::ROOT::Math::MatRepStd<double,4,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepStd<double,4,3>[nElements] : new ::ROOT::Math::MatRepStd<double,4,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(void *p) {
      delete ((::ROOT::Math::MatRepStd<double,4,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(void *p) {
      delete [] ((::ROOT::Math::MatRepStd<double,4,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gR(void *p) {
      typedef ::ROOT::Math::MatRepStd<double,4,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepStd<double,4,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRowOffsetslE7gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<7> : new ::ROOT::Math::RowOffsets<7>;
   }
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE7gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<7>[nElements] : new ::ROOT::Math::RowOffsets<7>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRowOffsetslE7gR(void *p) {
      delete ((::ROOT::Math::RowOffsets<7>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE7gR(void *p) {
      delete [] ((::ROOT::Math::RowOffsets<7>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE7gR(void *p) {
      typedef ::ROOT::Math::RowOffsets<7> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RowOffsets<7>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRowOffsetslE6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<6> : new ::ROOT::Math::RowOffsets<6>;
   }
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<6>[nElements] : new ::ROOT::Math::RowOffsets<6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRowOffsetslE6gR(void *p) {
      delete ((::ROOT::Math::RowOffsets<6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE6gR(void *p) {
      delete [] ((::ROOT::Math::RowOffsets<6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE6gR(void *p) {
      typedef ::ROOT::Math::RowOffsets<6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RowOffsets<6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRowOffsetslE5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<5> : new ::ROOT::Math::RowOffsets<5>;
   }
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<5>[nElements] : new ::ROOT::Math::RowOffsets<5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRowOffsetslE5gR(void *p) {
      delete ((::ROOT::Math::RowOffsets<5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE5gR(void *p) {
      delete [] ((::ROOT::Math::RowOffsets<5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE5gR(void *p) {
      typedef ::ROOT::Math::RowOffsets<5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RowOffsets<5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRowOffsetslE4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<4> : new ::ROOT::Math::RowOffsets<4>;
   }
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<4>[nElements] : new ::ROOT::Math::RowOffsets<4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRowOffsetslE4gR(void *p) {
      delete ((::ROOT::Math::RowOffsets<4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE4gR(void *p) {
      delete [] ((::ROOT::Math::RowOffsets<4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE4gR(void *p) {
      typedef ::ROOT::Math::RowOffsets<4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RowOffsets<4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRowOffsetslE3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<3> : new ::ROOT::Math::RowOffsets<3>;
   }
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<3>[nElements] : new ::ROOT::Math::RowOffsets<3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRowOffsetslE3gR(void *p) {
      delete ((::ROOT::Math::RowOffsets<3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE3gR(void *p) {
      delete [] ((::ROOT::Math::RowOffsets<3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE3gR(void *p) {
      typedef ::ROOT::Math::RowOffsets<3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RowOffsets<3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRowOffsetslE2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<2> : new ::ROOT::Math::RowOffsets<2>;
   }
   static void *newArray_ROOTcLcLMathcLcLRowOffsetslE2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RowOffsets<2>[nElements] : new ::ROOT::Math::RowOffsets<2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRowOffsetslE2gR(void *p) {
      delete ((::ROOT::Math::RowOffsets<2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRowOffsetslE2gR(void *p) {
      delete [] ((::ROOT::Math::RowOffsets<2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRowOffsetslE2gR(void *p) {
      typedef ::ROOT::Math::RowOffsets<2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RowOffsets<2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,2> : new ::ROOT::Math::MatRepSym<double,2>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,2>[nElements] : new ::ROOT::Math::MatRepSym<double,2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<double,2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<double,2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO2gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<double,2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<double,2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,3> : new ::ROOT::Math::MatRepSym<double,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,3>[nElements] : new ::ROOT::Math::MatRepSym<double,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<double,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<double,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO3gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<double,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<double,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,4> : new ::ROOT::Math::MatRepSym<double,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,4>[nElements] : new ::ROOT::Math::MatRepSym<double,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<double,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<double,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO4gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<double,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<double,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,5> : new ::ROOT::Math::MatRepSym<double,5>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,5>[nElements] : new ::ROOT::Math::MatRepSym<double,5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<double,5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<double,5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO5gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<double,5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<double,5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,6> : new ::ROOT::Math::MatRepSym<double,6>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,6>[nElements] : new ::ROOT::Math::MatRepSym<double,6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<double,6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<double,6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO6gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<double,6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<double,6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,7> : new ::ROOT::Math::MatRepSym<double,7>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<double,7>[nElements] : new ::ROOT::Math::MatRepSym<double,7>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<double,7>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<double,7>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEdoublecO7gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<double,7> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<double,7>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,2> : new ::ROOT::Math::MatRepSym<float,2>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,2>[nElements] : new ::ROOT::Math::MatRepSym<float,2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<float,2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<float,2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO2gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<float,2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<float,2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,3> : new ::ROOT::Math::MatRepSym<float,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,3>[nElements] : new ::ROOT::Math::MatRepSym<float,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<float,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<float,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO3gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<float,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<float,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,4> : new ::ROOT::Math::MatRepSym<float,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,4>[nElements] : new ::ROOT::Math::MatRepSym<float,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<float,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<float,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO4gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<float,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<float,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,5> : new ::ROOT::Math::MatRepSym<float,5>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,5>[nElements] : new ::ROOT::Math::MatRepSym<float,5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<float,5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<float,5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO5gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<float,5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<float,5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,6> : new ::ROOT::Math::MatRepSym<float,6>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,6>[nElements] : new ::ROOT::Math::MatRepSym<float,6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<float,6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<float,6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO6gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<float,6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<float,6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,7> : new ::ROOT::Math::MatRepSym<float,7>;
   }
   static void *newArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MatRepSym<float,7>[nElements] : new ::ROOT::Math::MatRepSym<float,7>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(void *p) {
      delete ((::ROOT::Math::MatRepSym<float,7>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(void *p) {
      delete [] ((::ROOT::Math::MatRepSym<float,7>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMatRepSymlEfloatcO7gR(void *p) {
      typedef ::ROOT::Math::MatRepSym<float,7> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MatRepSym<float,7>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,7> : new ::ROOT::Math::SVector<float,7>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,7>[nElements] : new ::ROOT::Math::SVector<float,7>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(void *p) {
      delete ((::ROOT::Math::SVector<float,7>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(void *p) {
      delete [] ((::ROOT::Math::SVector<float,7>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO7gR(void *p) {
      typedef ::ROOT::Math::SVector<float,7> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<float,7>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,6> : new ::ROOT::Math::SVector<float,6>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,6>[nElements] : new ::ROOT::Math::SVector<float,6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(void *p) {
      delete ((::ROOT::Math::SVector<float,6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(void *p) {
      delete [] ((::ROOT::Math::SVector<float,6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO6gR(void *p) {
      typedef ::ROOT::Math::SVector<float,6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<float,6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,5> : new ::ROOT::Math::SVector<float,5>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,5>[nElements] : new ::ROOT::Math::SVector<float,5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(void *p) {
      delete ((::ROOT::Math::SVector<float,5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(void *p) {
      delete [] ((::ROOT::Math::SVector<float,5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO5gR(void *p) {
      typedef ::ROOT::Math::SVector<float,5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<float,5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,4> : new ::ROOT::Math::SVector<float,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,4>[nElements] : new ::ROOT::Math::SVector<float,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(void *p) {
      delete ((::ROOT::Math::SVector<float,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(void *p) {
      delete [] ((::ROOT::Math::SVector<float,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO4gR(void *p) {
      typedef ::ROOT::Math::SVector<float,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<float,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,3> : new ::ROOT::Math::SVector<float,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,3>[nElements] : new ::ROOT::Math::SVector<float,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(void *p) {
      delete ((::ROOT::Math::SVector<float,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(void *p) {
      delete [] ((::ROOT::Math::SVector<float,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO3gR(void *p) {
      typedef ::ROOT::Math::SVector<float,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<float,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,2> : new ::ROOT::Math::SVector<float,2>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<float,2>[nElements] : new ::ROOT::Math::SVector<float,2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(void *p) {
      delete ((::ROOT::Math::SVector<float,2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(void *p) {
      delete [] ((::ROOT::Math::SVector<float,2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEfloatcO2gR(void *p) {
      typedef ::ROOT::Math::SVector<float,2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<float,2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,7> : new ::ROOT::Math::SVector<double,7>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,7>[nElements] : new ::ROOT::Math::SVector<double,7>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(void *p) {
      delete ((::ROOT::Math::SVector<double,7>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(void *p) {
      delete [] ((::ROOT::Math::SVector<double,7>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO7gR(void *p) {
      typedef ::ROOT::Math::SVector<double,7> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<double,7>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,6> : new ::ROOT::Math::SVector<double,6>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,6>[nElements] : new ::ROOT::Math::SVector<double,6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(void *p) {
      delete ((::ROOT::Math::SVector<double,6>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(void *p) {
      delete [] ((::ROOT::Math::SVector<double,6>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO6gR(void *p) {
      typedef ::ROOT::Math::SVector<double,6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<double,6>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,5> : new ::ROOT::Math::SVector<double,5>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,5>[nElements] : new ::ROOT::Math::SVector<double,5>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(void *p) {
      delete ((::ROOT::Math::SVector<double,5>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(void *p) {
      delete [] ((::ROOT::Math::SVector<double,5>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO5gR(void *p) {
      typedef ::ROOT::Math::SVector<double,5> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<double,5>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,4> : new ::ROOT::Math::SVector<double,4>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,4>[nElements] : new ::ROOT::Math::SVector<double,4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(void *p) {
      delete ((::ROOT::Math::SVector<double,4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(void *p) {
      delete [] ((::ROOT::Math::SVector<double,4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO4gR(void *p) {
      typedef ::ROOT::Math::SVector<double,4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<double,4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,3> : new ::ROOT::Math::SVector<double,3>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,3>[nElements] : new ::ROOT::Math::SVector<double,3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(void *p) {
      delete ((::ROOT::Math::SVector<double,3>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(void *p) {
      delete [] ((::ROOT::Math::SVector<double,3>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO3gR(void *p) {
      typedef ::ROOT::Math::SVector<double,3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<double,3>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,2> : new ::ROOT::Math::SVector<double,2>;
   }
   static void *newArray_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SVector<double,2>[nElements] : new ::ROOT::Math::SVector<double,2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(void *p) {
      delete ((::ROOT::Math::SVector<double,2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(void *p) {
      delete [] ((::ROOT::Math::SVector<double,2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSVectorlEdoublecO2gR(void *p) {
      typedef ::ROOT::Math::SVector<double,2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SVector<double,2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixIdentity(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrixIdentity : new ::ROOT::Math::SMatrixIdentity;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixIdentity(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrixIdentity[nElements] : new ::ROOT::Math::SMatrixIdentity[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixIdentity(void *p) {
      delete ((::ROOT::Math::SMatrixIdentity*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixIdentity(void *p) {
      delete [] ((::ROOT::Math::SMatrixIdentity*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixIdentity(void *p) {
      typedef ::ROOT::Math::SMatrixIdentity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrixIdentity

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> > : new ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >[nElements] : new ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepStdlEdoublecO2cO2gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepStd<double,2,2> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> > : new ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >[nElements] : new ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepStd<double,3,3> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> > : new ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >[nElements] : new ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepStd<double,4,4> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> > : new ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >[nElements] : new ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepStdlEdoublecO5cO5gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepStd<double,5,5> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> > : new ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >[nElements] : new ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepStdlEdoublecO6cO6gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepStd<double,6,6> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> > : new ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >[nElements] : new ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO7cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepStd<double,7,7> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > : new ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >[nElements] : new ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > : new ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >[nElements] : new ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > : new ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >[nElements] : new ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > : new ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >[nElements] : new ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> > : new ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >[nElements] : new ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO6cO6cOROOTcLcLMathcLcLMatRepSymlEdoublecO6gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,6,6,ROOT::Math::MatRepSym<double,6> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> > : new ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >[nElements] : new ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO7cO7cOROOTcLcLMathcLcLMatRepSymlEdoublecO7gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,7,7,ROOT::Math::MatRepSym<double,7> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> > : new ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >[nElements] : new ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepStdlEfloatcO2cO2gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepStd<float,2,2> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> > : new ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >[nElements] : new ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepStd<float,3,3> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> > : new ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >[nElements] : new ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepStd<float,4,4> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> > : new ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >[nElements] : new ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepStdlEfloatcO5cO5gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepStd<float,5,5> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> > : new ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >[nElements] : new ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepStdlEfloatcO6cO6gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepStd<float,6,6> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> > : new ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >[nElements] : new ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO7cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepStd<float,7,7> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> > : new ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >[nElements] : new ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO2cO2cOROOTcLcLMathcLcLMatRepSymlEfloatcO2gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,2,2,ROOT::Math::MatRepSym<float,2> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> > : new ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >[nElements] : new ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO3cOROOTcLcLMathcLcLMatRepSymlEfloatcO3gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,3,3,ROOT::Math::MatRepSym<float,3> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> > : new ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >[nElements] : new ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO4cOROOTcLcLMathcLcLMatRepSymlEfloatcO4gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,4,4,ROOT::Math::MatRepSym<float,4> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> > : new ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >[nElements] : new ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO5cO5cOROOTcLcLMathcLcLMatRepSymlEfloatcO5gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,5,5,ROOT::Math::MatRepSym<float,5> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> > : new ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >[nElements] : new ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO6cO6cOROOTcLcLMathcLcLMatRepSymlEfloatcO6gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,6,6,ROOT::Math::MatRepSym<float,6> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> > : new ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >[nElements] : new ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO7cO7cOROOTcLcLMathcLcLMatRepSymlEfloatcO7gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,7,7,ROOT::Math::MatRepSym<float,7> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> > : new ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >[nElements] : new ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO9cO7cOROOTcLcLMathcLcLMatRepStdlEfloatcO9cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,9,7,ROOT::Math::MatRepStd<float,9,7> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> > : new ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >[nElements] : new ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO3cO4cOROOTcLcLMathcLcLMatRepStdlEfloatcO3cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,3,4,ROOT::Math::MatRepStd<float,3,4> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> > : new ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >[nElements] : new ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEfloatcO4cO3cOROOTcLcLMathcLcLMatRepStdlEfloatcO4cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<float,4,3,ROOT::Math::MatRepStd<float,4,3> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> > : new ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >[nElements] : new ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO9cO7cOROOTcLcLMathcLcLMatRepStdlEdoublecO9cO7gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,9,7,ROOT::Math::MatRepStd<double,9,7> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> > : new ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >[nElements] : new ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO3cO4cOROOTcLcLMathcLcLMatRepStdlEdoublecO3cO4gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,3,4,ROOT::Math::MatRepStd<double,3,4> >::SMatrixRow_const

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> > : new ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >;
   }
   static void *newArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >[nElements] : new ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(void *p) {
      delete ((::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgR(void *p) {
      typedef ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow(void *p) {
      delete ((::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow(void *p) {
      typedef ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete ((::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      delete [] ((::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const*)p);
   }
   static void destruct_ROOTcLcLMathcLcLSMatrixlEdoublecO4cO3cOROOTcLcLMathcLcLMatRepStdlEdoublecO4cO3gRsPgRcLcLSMatrixRow_const(void *p) {
      typedef ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::SMatrix<double,4,3,ROOT::Math::MatRepStd<double,4,3> >::SMatrixRow_const

namespace {
  void TriggerDictionaryInitialization_libSmatrix_Impl() {
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
#line 1 "libSmatrix dictionary payload"

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
      TROOT::RegisterModule("libSmatrix",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSmatrix_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSmatrix_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSmatrix() {
  TriggerDictionaryInitialization_libSmatrix_Impl();
}
