// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Genetic

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
#include "Math/GeneticMinimizer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGeneticMinimizerParameters_Dictionary();
   static void ROOTcLcLMathcLcLGeneticMinimizerParameters_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGeneticMinimizerParameters(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p);
   static void destruct_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GeneticMinimizerParameters*)
   {
      ::ROOT::Math::GeneticMinimizerParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GeneticMinimizerParameters));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GeneticMinimizerParameters", "Math/GeneticMinimizer.h", 34,
                  typeid(::ROOT::Math::GeneticMinimizerParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGeneticMinimizerParameters_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GeneticMinimizerParameters) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GeneticMinimizerParameters*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GeneticMinimizerParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GeneticMinimizerParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGeneticMinimizerParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GeneticMinimizerParameters*)0x0)->GetClass();
      ROOTcLcLMathcLcLGeneticMinimizerParameters_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGeneticMinimizerParameters_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGeneticMinimizer_Dictionary();
   static void ROOTcLcLMathcLcLGeneticMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGeneticMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGeneticMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGeneticMinimizer(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGeneticMinimizer(void *p);
   static void destruct_ROOTcLcLMathcLcLGeneticMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GeneticMinimizer*)
   {
      ::ROOT::Math::GeneticMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GeneticMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GeneticMinimizer", "Math/GeneticMinimizer.h", 60,
                  typeid(::ROOT::Math::GeneticMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGeneticMinimizer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GeneticMinimizer) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGeneticMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGeneticMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGeneticMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGeneticMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGeneticMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GeneticMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GeneticMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GeneticMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGeneticMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GeneticMinimizer*)0x0)->GetClass();
      ROOTcLcLMathcLcLGeneticMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGeneticMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GeneticMinimizerParameters : new ::ROOT::Math::GeneticMinimizerParameters;
   }
   static void *newArray_ROOTcLcLMathcLcLGeneticMinimizerParameters(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GeneticMinimizerParameters[nElements] : new ::ROOT::Math::GeneticMinimizerParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p) {
      delete ((::ROOT::Math::GeneticMinimizerParameters*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p) {
      delete [] ((::ROOT::Math::GeneticMinimizerParameters*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p) {
      typedef ::ROOT::Math::GeneticMinimizerParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GeneticMinimizerParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGeneticMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GeneticMinimizer : new ::ROOT::Math::GeneticMinimizer;
   }
   static void *newArray_ROOTcLcLMathcLcLGeneticMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GeneticMinimizer[nElements] : new ::ROOT::Math::GeneticMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGeneticMinimizer(void *p) {
      delete ((::ROOT::Math::GeneticMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGeneticMinimizer(void *p) {
      delete [] ((::ROOT::Math::GeneticMinimizer*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGeneticMinimizer(void *p) {
      typedef ::ROOT::Math::GeneticMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GeneticMinimizer

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

namespace ROOT {
   static TClass *vectorlETMVAcLcLIntervalmUgR_Dictionary();
   static void vectorlETMVAcLcLIntervalmUgR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLIntervalmUgR(void *p = 0);
   static void *newArray_vectorlETMVAcLcLIntervalmUgR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLIntervalmUgR(void *p);
   static void deleteArray_vectorlETMVAcLcLIntervalmUgR(void *p);
   static void destruct_vectorlETMVAcLcLIntervalmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::Interval*>*)
   {
      vector<TMVA::Interval*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::Interval*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::Interval*>", -2, "vector", 216,
                  typeid(vector<TMVA::Interval*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLIntervalmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::Interval*>) );
      instance.SetNew(&new_vectorlETMVAcLcLIntervalmUgR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLIntervalmUgR);
      instance.SetDelete(&delete_vectorlETMVAcLcLIntervalmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLIntervalmUgR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLIntervalmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::Interval*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TMVA::Interval*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLIntervalmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TMVA::Interval*>*)0x0)->GetClass();
      vectorlETMVAcLcLIntervalmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLIntervalmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLIntervalmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::Interval*> : new vector<TMVA::Interval*>;
   }
   static void *newArray_vectorlETMVAcLcLIntervalmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::Interval*>[nElements] : new vector<TMVA::Interval*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLIntervalmUgR(void *p) {
      delete ((vector<TMVA::Interval*>*)p);
   }
   static void deleteArray_vectorlETMVAcLcLIntervalmUgR(void *p) {
      delete [] ((vector<TMVA::Interval*>*)p);
   }
   static void destruct_vectorlETMVAcLcLIntervalmUgR(void *p) {
      typedef vector<TMVA::Interval*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::Interval*>

namespace {
  void TriggerDictionaryInitialization_libGenetic_Impl() {
    static const char* headers[] = {
"Math/GeneticMinimizer.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGenetic dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Math/GeneticMinimizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGenetic",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGenetic_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGenetic_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGenetic() {
  TriggerDictionaryInitialization_libGenetic_Impl();
}
