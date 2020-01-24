// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__MultiProc

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
#include "TMPClient.h"
#include "MPSendRecv.h"
#include "ROOT/TProcessExecutor.hxx"
#include "TProcPool.h"
#include "TMPWorker.h"
#include "TMPWorkerExecutor.h"
#include "MPCode.h"
#include "PoolUtils.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TMPWorker(void *p = 0);
   static void *newArray_TMPWorker(Long_t size, void *p);
   static void delete_TMPWorker(void *p);
   static void deleteArray_TMPWorker(void *p);
   static void destruct_TMPWorker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMPWorker*)
   {
      ::TMPWorker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMPWorker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMPWorker", ::TMPWorker::Class_Version(), "TMPWorker.h", 26,
                  typeid(::TMPWorker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMPWorker::Dictionary, isa_proxy, 4,
                  sizeof(::TMPWorker) );
      instance.SetNew(&new_TMPWorker);
      instance.SetNewArray(&newArray_TMPWorker);
      instance.SetDelete(&delete_TMPWorker);
      instance.SetDeleteArray(&deleteArray_TMPWorker);
      instance.SetDestructor(&destruct_TMPWorker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMPWorker*)
   {
      return GenerateInitInstanceLocal((::TMPWorker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMPWorker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMPClient_Dictionary();
   static void TMPClient_TClassManip(TClass*);
   static void *new_TMPClient(void *p = 0);
   static void *newArray_TMPClient(Long_t size, void *p);
   static void delete_TMPClient(void *p);
   static void deleteArray_TMPClient(void *p);
   static void destruct_TMPClient(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMPClient*)
   {
      ::TMPClient *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMPClient));
      static ::ROOT::TGenericClassInfo 
         instance("TMPClient", "TMPClient.h", 23,
                  typeid(::TMPClient), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMPClient_Dictionary, isa_proxy, 4,
                  sizeof(::TMPClient) );
      instance.SetNew(&new_TMPClient);
      instance.SetNewArray(&newArray_TMPClient);
      instance.SetDelete(&delete_TMPClient);
      instance.SetDeleteArray(&deleteArray_TMPClient);
      instance.SetDestructor(&destruct_TMPClient);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMPClient*)
   {
      return GenerateInitInstanceLocal((::TMPClient*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMPClient*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMPClient_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMPClient*)0x0)->GetClass();
      TMPClient_TClassManip(theClass);
   return theClass;
   }

   static void TMPClient_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLTProcessExecutor_Dictionary();
   static void ROOTcLcLTProcessExecutor_TClassManip(TClass*);
   static void *new_ROOTcLcLTProcessExecutor(void *p = 0);
   static void *newArray_ROOTcLcLTProcessExecutor(Long_t size, void *p);
   static void delete_ROOTcLcLTProcessExecutor(void *p);
   static void deleteArray_ROOTcLcLTProcessExecutor(void *p);
   static void destruct_ROOTcLcLTProcessExecutor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::TProcessExecutor*)
   {
      ::ROOT::TProcessExecutor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::TProcessExecutor));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::TProcessExecutor", "ROOT/TProcessExecutor.hxx", 37,
                  typeid(::ROOT::TProcessExecutor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLTProcessExecutor_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::TProcessExecutor) );
      instance.SetNew(&new_ROOTcLcLTProcessExecutor);
      instance.SetNewArray(&newArray_ROOTcLcLTProcessExecutor);
      instance.SetDelete(&delete_ROOTcLcLTProcessExecutor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLTProcessExecutor);
      instance.SetDestructor(&destruct_ROOTcLcLTProcessExecutor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::TProcessExecutor*)
   {
      return GenerateInitInstanceLocal((::ROOT::TProcessExecutor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::TProcessExecutor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLTProcessExecutor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::TProcessExecutor*)0x0)->GetClass();
      ROOTcLcLTProcessExecutor_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLTProcessExecutor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMPWorker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMPWorker::Class_Name()
{
   return "TMPWorker";
}

//______________________________________________________________________________
const char *TMPWorker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMPWorker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMPWorker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMPWorker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMPWorker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMPWorker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMPWorker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMPWorker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TMPWorker::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMPWorker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMPWorker::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMPWorker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMPWorker(void *p) {
      return  p ? new(p) ::TMPWorker : new ::TMPWorker;
   }
   static void *newArray_TMPWorker(Long_t nElements, void *p) {
      return p ? new(p) ::TMPWorker[nElements] : new ::TMPWorker[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMPWorker(void *p) {
      delete ((::TMPWorker*)p);
   }
   static void deleteArray_TMPWorker(void *p) {
      delete [] ((::TMPWorker*)p);
   }
   static void destruct_TMPWorker(void *p) {
      typedef ::TMPWorker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMPWorker

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMPClient(void *p) {
      return  p ? new(p) ::TMPClient : new ::TMPClient;
   }
   static void *newArray_TMPClient(Long_t nElements, void *p) {
      return p ? new(p) ::TMPClient[nElements] : new ::TMPClient[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMPClient(void *p) {
      delete ((::TMPClient*)p);
   }
   static void deleteArray_TMPClient(void *p) {
      delete [] ((::TMPClient*)p);
   }
   static void destruct_TMPClient(void *p) {
      typedef ::TMPClient current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMPClient

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLTProcessExecutor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::TProcessExecutor : new ::ROOT::TProcessExecutor;
   }
   static void *newArray_ROOTcLcLTProcessExecutor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::TProcessExecutor[nElements] : new ::ROOT::TProcessExecutor[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLTProcessExecutor(void *p) {
      delete ((::ROOT::TProcessExecutor*)p);
   }
   static void deleteArray_ROOTcLcLTProcessExecutor(void *p) {
      delete [] ((::ROOT::TProcessExecutor*)p);
   }
   static void destruct_ROOTcLcLTProcessExecutor(void *p) {
      typedef ::ROOT::TProcessExecutor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::TProcessExecutor

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace {
  void TriggerDictionaryInitialization_libMultiProc_Impl() {
    static const char* headers[] = {
"TMPClient.h",
"MPSendRecv.h",
"ROOT/TProcessExecutor.hxx",
"TProcPool.h",
"TMPWorker.h",
"TMPWorkerExecutor.h",
"MPCode.h",
"PoolUtils.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMultiProc dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TMPWorker.h")))  __attribute__((annotate("$clingAutoload$TMPClient.h")))  TMPWorker;
class __attribute__((annotate("$clingAutoload$TMPClient.h")))  TMPClient;
namespace ROOT{class __attribute__((annotate("$clingAutoload$ROOT/TProcessExecutor.hxx")))  TProcessExecutor;}
using TProcPool __attribute__((annotate("$clingAutoload$TProcPool.h")))  = ROOT::TProcessExecutor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMultiProc dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TMPClient.h"
#include "MPSendRecv.h"
#include "ROOT/TProcessExecutor.hxx"
#include "TProcPool.h"
#include "TMPWorker.h"
#include "TMPWorkerExecutor.h"
#include "MPCode.h"
#include "PoolUtils.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ROOT::TProcessExecutor", payloadCode, "@",
"TMPClient", payloadCode, "@",
"TMPWorker", payloadCode, "@",
"TProcPool", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMultiProc",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMultiProc_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMultiProc_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMultiProc() {
  TriggerDictionaryInitialization_libMultiProc_Impl();
}
