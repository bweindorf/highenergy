// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__MLP

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
#include "TMLPAnalyzer.h"
#include "TMultiLayerPerceptron.h"
#include "TNeuron.h"
#include "TSynapse.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TMLPAnalyzer(void *p);
   static void deleteArray_TMLPAnalyzer(void *p);
   static void destruct_TMLPAnalyzer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMLPAnalyzer*)
   {
      ::TMLPAnalyzer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMLPAnalyzer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMLPAnalyzer", ::TMLPAnalyzer::Class_Version(), "TMLPAnalyzer.h", 36,
                  typeid(::TMLPAnalyzer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMLPAnalyzer::Dictionary, isa_proxy, 4,
                  sizeof(::TMLPAnalyzer) );
      instance.SetDelete(&delete_TMLPAnalyzer);
      instance.SetDeleteArray(&deleteArray_TMLPAnalyzer);
      instance.SetDestructor(&destruct_TMLPAnalyzer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMLPAnalyzer*)
   {
      return GenerateInitInstanceLocal((::TMLPAnalyzer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMLPAnalyzer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNeuron(void *p = 0);
   static void *newArray_TNeuron(Long_t size, void *p);
   static void delete_TNeuron(void *p);
   static void deleteArray_TNeuron(void *p);
   static void destruct_TNeuron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNeuron*)
   {
      ::TNeuron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNeuron >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNeuron", ::TNeuron::Class_Version(), "TNeuron.h", 44,
                  typeid(::TNeuron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNeuron::Dictionary, isa_proxy, 4,
                  sizeof(::TNeuron) );
      instance.SetNew(&new_TNeuron);
      instance.SetNewArray(&newArray_TNeuron);
      instance.SetDelete(&delete_TNeuron);
      instance.SetDeleteArray(&deleteArray_TNeuron);
      instance.SetDestructor(&destruct_TNeuron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNeuron*)
   {
      return GenerateInitInstanceLocal((::TNeuron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNeuron*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMultiLayerPerceptron(void *p = 0);
   static void *newArray_TMultiLayerPerceptron(Long_t size, void *p);
   static void delete_TMultiLayerPerceptron(void *p);
   static void deleteArray_TMultiLayerPerceptron(void *p);
   static void destruct_TMultiLayerPerceptron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMultiLayerPerceptron*)
   {
      ::TMultiLayerPerceptron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMultiLayerPerceptron >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMultiLayerPerceptron", ::TMultiLayerPerceptron::Class_Version(), "TMultiLayerPerceptron.h", 48,
                  typeid(::TMultiLayerPerceptron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMultiLayerPerceptron::Dictionary, isa_proxy, 4,
                  sizeof(::TMultiLayerPerceptron) );
      instance.SetNew(&new_TMultiLayerPerceptron);
      instance.SetNewArray(&newArray_TMultiLayerPerceptron);
      instance.SetDelete(&delete_TMultiLayerPerceptron);
      instance.SetDeleteArray(&deleteArray_TMultiLayerPerceptron);
      instance.SetDestructor(&destruct_TMultiLayerPerceptron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMultiLayerPerceptron*)
   {
      return GenerateInitInstanceLocal((::TMultiLayerPerceptron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMultiLayerPerceptron*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSynapse(void *p = 0);
   static void *newArray_TSynapse(Long_t size, void *p);
   static void delete_TSynapse(void *p);
   static void deleteArray_TSynapse(void *p);
   static void destruct_TSynapse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSynapse*)
   {
      ::TSynapse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSynapse >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSynapse", ::TSynapse::Class_Version(), "TSynapse.h", 30,
                  typeid(::TSynapse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSynapse::Dictionary, isa_proxy, 4,
                  sizeof(::TSynapse) );
      instance.SetNew(&new_TSynapse);
      instance.SetNewArray(&newArray_TSynapse);
      instance.SetDelete(&delete_TSynapse);
      instance.SetDeleteArray(&deleteArray_TSynapse);
      instance.SetDestructor(&destruct_TSynapse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSynapse*)
   {
      return GenerateInitInstanceLocal((::TSynapse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSynapse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMLPAnalyzer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMLPAnalyzer::Class_Name()
{
   return "TMLPAnalyzer";
}

//______________________________________________________________________________
const char *TMLPAnalyzer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMLPAnalyzer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMLPAnalyzer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMLPAnalyzer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMLPAnalyzer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMLPAnalyzer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMLPAnalyzer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMLPAnalyzer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNeuron::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNeuron::Class_Name()
{
   return "TNeuron";
}

//______________________________________________________________________________
const char *TNeuron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNeuron*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNeuron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNeuron*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNeuron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNeuron*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNeuron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNeuron*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMultiLayerPerceptron::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMultiLayerPerceptron::Class_Name()
{
   return "TMultiLayerPerceptron";
}

//______________________________________________________________________________
const char *TMultiLayerPerceptron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMultiLayerPerceptron*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMultiLayerPerceptron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMultiLayerPerceptron*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMultiLayerPerceptron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMultiLayerPerceptron*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMultiLayerPerceptron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMultiLayerPerceptron*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSynapse::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSynapse::Class_Name()
{
   return "TSynapse";
}

//______________________________________________________________________________
const char *TSynapse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSynapse*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSynapse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSynapse*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSynapse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSynapse*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSynapse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSynapse*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TMLPAnalyzer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMLPAnalyzer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMLPAnalyzer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMLPAnalyzer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMLPAnalyzer(void *p) {
      delete ((::TMLPAnalyzer*)p);
   }
   static void deleteArray_TMLPAnalyzer(void *p) {
      delete [] ((::TMLPAnalyzer*)p);
   }
   static void destruct_TMLPAnalyzer(void *p) {
      typedef ::TMLPAnalyzer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMLPAnalyzer

//______________________________________________________________________________
void TNeuron::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNeuron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNeuron::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNeuron::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNeuron(void *p) {
      return  p ? new(p) ::TNeuron : new ::TNeuron;
   }
   static void *newArray_TNeuron(Long_t nElements, void *p) {
      return p ? new(p) ::TNeuron[nElements] : new ::TNeuron[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNeuron(void *p) {
      delete ((::TNeuron*)p);
   }
   static void deleteArray_TNeuron(void *p) {
      delete [] ((::TNeuron*)p);
   }
   static void destruct_TNeuron(void *p) {
      typedef ::TNeuron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TNeuron

//______________________________________________________________________________
void TMultiLayerPerceptron::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMultiLayerPerceptron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMultiLayerPerceptron::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMultiLayerPerceptron::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMultiLayerPerceptron(void *p) {
      return  p ? new(p) ::TMultiLayerPerceptron : new ::TMultiLayerPerceptron;
   }
   static void *newArray_TMultiLayerPerceptron(Long_t nElements, void *p) {
      return p ? new(p) ::TMultiLayerPerceptron[nElements] : new ::TMultiLayerPerceptron[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMultiLayerPerceptron(void *p) {
      delete ((::TMultiLayerPerceptron*)p);
   }
   static void deleteArray_TMultiLayerPerceptron(void *p) {
      delete [] ((::TMultiLayerPerceptron*)p);
   }
   static void destruct_TMultiLayerPerceptron(void *p) {
      typedef ::TMultiLayerPerceptron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMultiLayerPerceptron

//______________________________________________________________________________
void TSynapse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSynapse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSynapse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSynapse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSynapse(void *p) {
      return  p ? new(p) ::TSynapse : new ::TSynapse;
   }
   static void *newArray_TSynapse(Long_t nElements, void *p) {
      return p ? new(p) ::TSynapse[nElements] : new ::TSynapse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSynapse(void *p) {
      delete ((::TSynapse*)p);
   }
   static void deleteArray_TSynapse(void *p) {
      delete [] ((::TSynapse*)p);
   }
   static void destruct_TSynapse(void *p) {
      typedef ::TSynapse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSynapse

namespace {
  void TriggerDictionaryInitialization_libMLP_Impl() {
    static const char* headers[] = {
"TMLPAnalyzer.h",
"TMultiLayerPerceptron.h",
"TNeuron.h",
"TSynapse.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMLP dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(A simple analysis class for MLP)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMLPAnalyzer.h")))  TMLPAnalyzer;
class __attribute__((annotate(R"ATTRDUMP(Neuron for MultiLayerPerceptrons)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TNeuron.h")))  __attribute__((annotate("$clingAutoload$TMultiLayerPerceptron.h")))  TNeuron;
class __attribute__((annotate(R"ATTRDUMP(a Neural Network)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMultiLayerPerceptron.h")))  TMultiLayerPerceptron;
class __attribute__((annotate(R"ATTRDUMP(simple weighted bidirectionnal connection between 2 neurons)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSynapse.h")))  TSynapse;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMLP dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TMLPAnalyzer.h"
#include "TMultiLayerPerceptron.h"
#include "TNeuron.h"
#include "TSynapse.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TMLPAnalyzer", payloadCode, "@",
"TMultiLayerPerceptron", payloadCode, "@",
"TNeuron", payloadCode, "@",
"TSynapse", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMLP",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMLP_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMLP_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMLP() {
  TriggerDictionaryInitialization_libMLP_Impl();
}
