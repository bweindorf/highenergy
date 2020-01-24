// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__SPlot

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
#include "TSPlot.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TSPlot(void *p = 0);
   static void *newArray_TSPlot(Long_t size, void *p);
   static void delete_TSPlot(void *p);
   static void deleteArray_TSPlot(void *p);
   static void destruct_TSPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSPlot*)
   {
      ::TSPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSPlot", ::TSPlot::Class_Version(), "TSPlot.h", 21,
                  typeid(::TSPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSPlot::Dictionary, isa_proxy, 4,
                  sizeof(::TSPlot) );
      instance.SetNew(&new_TSPlot);
      instance.SetNewArray(&newArray_TSPlot);
      instance.SetDelete(&delete_TSPlot);
      instance.SetDeleteArray(&deleteArray_TSPlot);
      instance.SetDestructor(&destruct_TSPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSPlot*)
   {
      return GenerateInitInstanceLocal((::TSPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TSPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSPlot::Class_Name()
{
   return "TSPlot";
}

//______________________________________________________________________________
const char *TSPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSPlot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TSPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSPlot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSPlot(void *p) {
      return  p ? new(p) ::TSPlot : new ::TSPlot;
   }
   static void *newArray_TSPlot(Long_t nElements, void *p) {
      return p ? new(p) ::TSPlot[nElements] : new ::TSPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSPlot(void *p) {
      delete ((::TSPlot*)p);
   }
   static void deleteArray_TSPlot(void *p) {
      delete [] ((::TSPlot*)p);
   }
   static void destruct_TSPlot(void *p) {
      typedef ::TSPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSPlot

namespace {
  void TriggerDictionaryInitialization_libSPlot_Impl() {
    static const char* headers[] = {
"TSPlot.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libSPlot dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(class to disentangle signal from background)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSPlot.h")))  TSPlot;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSPlot dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TSPlot.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TSPlot", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSPlot",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSPlot_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSPlot_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSPlot() {
  TriggerDictionaryInitialization_libSPlot_Impl();
}
