// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Imt

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
#include "ROOT/TPoolManager.hxx"
#include "ROOT/TThreadExecutor.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLTThreadExecutor_Dictionary();
   static void ROOTcLcLTThreadExecutor_TClassManip(TClass*);
   static void *new_ROOTcLcLTThreadExecutor(void *p = 0);
   static void *newArray_ROOTcLcLTThreadExecutor(Long_t size, void *p);
   static void delete_ROOTcLcLTThreadExecutor(void *p);
   static void deleteArray_ROOTcLcLTThreadExecutor(void *p);
   static void destruct_ROOTcLcLTThreadExecutor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::TThreadExecutor*)
   {
      ::ROOT::TThreadExecutor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::TThreadExecutor));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::TThreadExecutor", "ROOT/TThreadExecutor.hxx", 34,
                  typeid(::ROOT::TThreadExecutor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLTThreadExecutor_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::TThreadExecutor) );
      instance.SetNew(&new_ROOTcLcLTThreadExecutor);
      instance.SetNewArray(&newArray_ROOTcLcLTThreadExecutor);
      instance.SetDelete(&delete_ROOTcLcLTThreadExecutor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLTThreadExecutor);
      instance.SetDestructor(&destruct_ROOTcLcLTThreadExecutor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::TThreadExecutor*)
   {
      return GenerateInitInstanceLocal((::ROOT::TThreadExecutor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::TThreadExecutor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLTThreadExecutor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::TThreadExecutor*)0x0)->GetClass();
      ROOTcLcLTThreadExecutor_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLTThreadExecutor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLTThreadExecutor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::TThreadExecutor : new ::ROOT::TThreadExecutor;
   }
   static void *newArray_ROOTcLcLTThreadExecutor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::TThreadExecutor[nElements] : new ::ROOT::TThreadExecutor[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLTThreadExecutor(void *p) {
      delete ((::ROOT::TThreadExecutor*)p);
   }
   static void deleteArray_ROOTcLcLTThreadExecutor(void *p) {
      delete [] ((::ROOT::TThreadExecutor*)p);
   }
   static void destruct_ROOTcLcLTThreadExecutor(void *p) {
      typedef ::ROOT::TThreadExecutor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::TThreadExecutor

namespace {
  void TriggerDictionaryInitialization_libImt_Impl() {
    static const char* headers[] = {
"ROOT/TPoolManager.hxx",
"ROOT/TThreadExecutor.hxx",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libImt dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "ROOT/TPoolManager.hxx"
#include "ROOT/TThreadExecutor.hxx"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ROOT::TThreadExecutor", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libImt",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libImt_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libImt_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libImt() {
  TriggerDictionaryInitialization_libImt_Impl();
}
