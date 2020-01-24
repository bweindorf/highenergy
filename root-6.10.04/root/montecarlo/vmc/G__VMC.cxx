// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VMC

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
#include "TGeoMCGeometry.h"
#include "TMCAutoLock.h"
#include "TMCOptical.h"
#include "TMCParticleType.h"
#include "TMCProcess.h"
#include "TMCVerbose.h"
#include "TMCtls.h"
#include "TPDGCode.h"
#include "TVirtualMC.h"
#include "TVirtualMCApplication.h"
#include "TVirtualMCGeometry.h"
#include "TVirtualMCStack.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TVirtualMCGeometry(void *p);
   static void deleteArray_TVirtualMCGeometry(void *p);
   static void destruct_TVirtualMCGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualMCGeometry*)
   {
      ::TVirtualMCGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualMCGeometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualMCGeometry", ::TVirtualMCGeometry::Class_Version(), "TVirtualMCGeometry.h", 28,
                  typeid(::TVirtualMCGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualMCGeometry::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualMCGeometry) );
      instance.SetDelete(&delete_TVirtualMCGeometry);
      instance.SetDeleteArray(&deleteArray_TVirtualMCGeometry);
      instance.SetDestructor(&destruct_TVirtualMCGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualMCGeometry*)
   {
      return GenerateInitInstanceLocal((::TVirtualMCGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualMCGeometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMCGeometry(void *p = 0);
   static void *newArray_TGeoMCGeometry(Long_t size, void *p);
   static void delete_TGeoMCGeometry(void *p);
   static void deleteArray_TGeoMCGeometry(void *p);
   static void destruct_TGeoMCGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMCGeometry*)
   {
      ::TGeoMCGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMCGeometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMCGeometry", ::TGeoMCGeometry::Class_Version(), "TGeoMCGeometry.h", 31,
                  typeid(::TGeoMCGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMCGeometry::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoMCGeometry) );
      instance.SetNew(&new_TGeoMCGeometry);
      instance.SetNewArray(&newArray_TGeoMCGeometry);
      instance.SetDelete(&delete_TGeoMCGeometry);
      instance.SetDeleteArray(&deleteArray_TGeoMCGeometry);
      instance.SetDestructor(&destruct_TGeoMCGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMCGeometry*)
   {
      return GenerateInitInstanceLocal((::TGeoMCGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMCGeometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMCVerbose(void *p = 0);
   static void *newArray_TMCVerbose(Long_t size, void *p);
   static void delete_TMCVerbose(void *p);
   static void deleteArray_TMCVerbose(void *p);
   static void destruct_TMCVerbose(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMCVerbose*)
   {
      ::TMCVerbose *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMCVerbose >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMCVerbose", ::TMCVerbose::Class_Version(), "TMCVerbose.h", 30,
                  typeid(::TMCVerbose), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMCVerbose::Dictionary, isa_proxy, 4,
                  sizeof(::TMCVerbose) );
      instance.SetNew(&new_TMCVerbose);
      instance.SetNewArray(&newArray_TMCVerbose);
      instance.SetDelete(&delete_TMCVerbose);
      instance.SetDeleteArray(&deleteArray_TMCVerbose);
      instance.SetDestructor(&destruct_TMCVerbose);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMCVerbose*)
   {
      return GenerateInitInstanceLocal((::TMCVerbose*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMCVerbose*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualMCApplication(void *p);
   static void deleteArray_TVirtualMCApplication(void *p);
   static void destruct_TVirtualMCApplication(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualMCApplication*)
   {
      ::TVirtualMCApplication *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualMCApplication >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualMCApplication", ::TVirtualMCApplication::Class_Version(), "TVirtualMCApplication.h", 26,
                  typeid(::TVirtualMCApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualMCApplication::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualMCApplication) );
      instance.SetDelete(&delete_TVirtualMCApplication);
      instance.SetDeleteArray(&deleteArray_TVirtualMCApplication);
      instance.SetDestructor(&destruct_TVirtualMCApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualMCApplication*)
   {
      return GenerateInitInstanceLocal((::TVirtualMCApplication*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualMCApplication*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualMCStack(void *p);
   static void deleteArray_TVirtualMCStack(void *p);
   static void destruct_TVirtualMCStack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualMCStack*)
   {
      ::TVirtualMCStack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualMCStack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualMCStack", ::TVirtualMCStack::Class_Version(), "TVirtualMCStack.h", 26,
                  typeid(::TVirtualMCStack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualMCStack::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualMCStack) );
      instance.SetDelete(&delete_TVirtualMCStack);
      instance.SetDeleteArray(&deleteArray_TVirtualMCStack);
      instance.SetDestructor(&destruct_TVirtualMCStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualMCStack*)
   {
      return GenerateInitInstanceLocal((::TVirtualMCStack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualMCStack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualMC(void *p);
   static void deleteArray_TVirtualMC(void *p);
   static void destruct_TVirtualMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualMC*)
   {
      ::TVirtualMC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualMC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualMC", ::TVirtualMC::Class_Version(), "TVirtualMC.h", 41,
                  typeid(::TVirtualMC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualMC::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualMC) );
      instance.SetDelete(&delete_TVirtualMC);
      instance.SetDeleteArray(&deleteArray_TVirtualMC);
      instance.SetDestructor(&destruct_TVirtualMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualMC*)
   {
      return GenerateInitInstanceLocal((::TVirtualMC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualMC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TVirtualMCGeometry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualMCGeometry::Class_Name()
{
   return "TVirtualMCGeometry";
}

//______________________________________________________________________________
const char *TVirtualMCGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCGeometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualMCGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCGeometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualMCGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCGeometry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualMCGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCGeometry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMCGeometry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMCGeometry::Class_Name()
{
   return "TGeoMCGeometry";
}

//______________________________________________________________________________
const char *TGeoMCGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMCGeometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMCGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMCGeometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMCGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMCGeometry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMCGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMCGeometry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMCVerbose::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMCVerbose::Class_Name()
{
   return "TMCVerbose";
}

//______________________________________________________________________________
const char *TMCVerbose::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVerbose*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMCVerbose::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMCVerbose*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMCVerbose::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVerbose*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMCVerbose::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMCVerbose*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualMCApplication::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualMCApplication::Class_Name()
{
   return "TVirtualMCApplication";
}

//______________________________________________________________________________
const char *TVirtualMCApplication::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCApplication*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualMCApplication::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCApplication*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualMCApplication::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCApplication*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualMCApplication::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCApplication*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualMCStack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualMCStack::Class_Name()
{
   return "TVirtualMCStack";
}

//______________________________________________________________________________
const char *TVirtualMCStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCStack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualMCStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCStack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualMCStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCStack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualMCStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCStack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualMC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualMC::Class_Name()
{
   return "TVirtualMC";
}

//______________________________________________________________________________
const char *TVirtualMC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualMC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualMC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualMC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TVirtualMCGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualMCGeometry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualMCGeometry::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualMCGeometry::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualMCGeometry(void *p) {
      delete ((::TVirtualMCGeometry*)p);
   }
   static void deleteArray_TVirtualMCGeometry(void *p) {
      delete [] ((::TVirtualMCGeometry*)p);
   }
   static void destruct_TVirtualMCGeometry(void *p) {
      typedef ::TVirtualMCGeometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualMCGeometry

//______________________________________________________________________________
void TGeoMCGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMCGeometry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoMCGeometry::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoMCGeometry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMCGeometry(void *p) {
      return  p ? new(p) ::TGeoMCGeometry : new ::TGeoMCGeometry;
   }
   static void *newArray_TGeoMCGeometry(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMCGeometry[nElements] : new ::TGeoMCGeometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMCGeometry(void *p) {
      delete ((::TGeoMCGeometry*)p);
   }
   static void deleteArray_TGeoMCGeometry(void *p) {
      delete [] ((::TGeoMCGeometry*)p);
   }
   static void destruct_TGeoMCGeometry(void *p) {
      typedef ::TGeoMCGeometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoMCGeometry

//______________________________________________________________________________
void TMCVerbose::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMCVerbose.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMCVerbose::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMCVerbose::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMCVerbose(void *p) {
      return  p ? new(p) ::TMCVerbose : new ::TMCVerbose;
   }
   static void *newArray_TMCVerbose(Long_t nElements, void *p) {
      return p ? new(p) ::TMCVerbose[nElements] : new ::TMCVerbose[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMCVerbose(void *p) {
      delete ((::TMCVerbose*)p);
   }
   static void deleteArray_TMCVerbose(void *p) {
      delete [] ((::TMCVerbose*)p);
   }
   static void destruct_TMCVerbose(void *p) {
      typedef ::TMCVerbose current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMCVerbose

//______________________________________________________________________________
void TVirtualMCApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualMCApplication.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualMCApplication::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualMCApplication::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualMCApplication(void *p) {
      delete ((::TVirtualMCApplication*)p);
   }
   static void deleteArray_TVirtualMCApplication(void *p) {
      delete [] ((::TVirtualMCApplication*)p);
   }
   static void destruct_TVirtualMCApplication(void *p) {
      typedef ::TVirtualMCApplication current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualMCApplication

//______________________________________________________________________________
void TVirtualMCStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualMCStack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualMCStack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualMCStack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualMCStack(void *p) {
      delete ((::TVirtualMCStack*)p);
   }
   static void deleteArray_TVirtualMCStack(void *p) {
      delete [] ((::TVirtualMCStack*)p);
   }
   static void destruct_TVirtualMCStack(void *p) {
      typedef ::TVirtualMCStack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualMCStack

//______________________________________________________________________________
void TVirtualMC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualMC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualMC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualMC::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualMC(void *p) {
      delete ((::TVirtualMC*)p);
   }
   static void deleteArray_TVirtualMC(void *p) {
      delete [] ((::TVirtualMC*)p);
   }
   static void destruct_TVirtualMC(void *p) {
      typedef ::TVirtualMC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualMC

namespace {
  void TriggerDictionaryInitialization_libVMC_Impl() {
    static const char* headers[] = {
"TGeoMCGeometry.h",
"TMCAutoLock.h",
"TMCOptical.h",
"TMCParticleType.h",
"TMCProcess.h",
"TMCVerbose.h",
"TMCtls.h",
"TPDGCode.h",
"TVirtualMC.h",
"TVirtualMCApplication.h",
"TVirtualMCGeometry.h",
"TVirtualMCStack.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libVMC dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Interface to Monte Carlo geometry construction)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualMCGeometry.h")))  __attribute__((annotate("$clingAutoload$TGeoMCGeometry.h")))  TVirtualMCGeometry;
class __attribute__((annotate(R"ATTRDUMP(VMC TGeo Geometry builder)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMCGeometry.h")))  TGeoMCGeometry;
class __attribute__((annotate(R"ATTRDUMP(Verbose class for MC application)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMCVerbose.h")))  TMCVerbose;
class __attribute__((annotate(R"ATTRDUMP(Interface to MonteCarlo application)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualMCApplication.h")))  __attribute__((annotate("$clingAutoload$TVirtualMC.h")))  TVirtualMCApplication;
class __attribute__((annotate(R"ATTRDUMP(Interface to a particles stack)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualMCStack.h")))  __attribute__((annotate("$clingAutoload$TVirtualMC.h")))  TVirtualMCStack;
class __attribute__((annotate(R"ATTRDUMP(Interface to Monte Carlo)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualMC.h")))  TVirtualMC;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libVMC dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGeoMCGeometry.h"
#include "TMCAutoLock.h"
#include "TMCOptical.h"
#include "TMCParticleType.h"
#include "TMCProcess.h"
#include "TMCVerbose.h"
#include "TMCtls.h"
#include "TPDGCode.h"
#include "TVirtualMC.h"
#include "TVirtualMCApplication.h"
#include "TVirtualMCGeometry.h"
#include "TVirtualMCStack.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"EMCOpSurfaceFinish", payloadCode, "@",
"EMCOpSurfaceModel", payloadCode, "@",
"EMCOpSurfaceType", payloadCode, "@",
"TGeoMCGeometry", payloadCode, "@",
"TMCParticleType", payloadCode, "@",
"TMCProcess", payloadCode, "@",
"TMCVerbose", payloadCode, "@",
"TVirtualMC", payloadCode, "@",
"TVirtualMCApplication", payloadCode, "@",
"TVirtualMCGeometry", payloadCode, "@",
"TVirtualMCStack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVMC",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVMC_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVMC_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVMC() {
  TriggerDictionaryInitialization_libVMC_Impl();
}
