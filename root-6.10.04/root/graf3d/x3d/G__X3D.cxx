// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__X3D

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
#include "TViewerX3D.h"
#include "TX3DFrame.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TViewerX3D(void *p);
   static void deleteArray_TViewerX3D(void *p);
   static void destruct_TViewerX3D(void *p);
   static void streamer_TViewerX3D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TViewerX3D*)
   {
      ::TViewerX3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TViewerX3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TViewerX3D", ::TViewerX3D::Class_Version(), "TViewerX3D.h", 34,
                  typeid(::TViewerX3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TViewerX3D::Dictionary, isa_proxy, 16,
                  sizeof(::TViewerX3D) );
      instance.SetDelete(&delete_TViewerX3D);
      instance.SetDeleteArray(&deleteArray_TViewerX3D);
      instance.SetDestructor(&destruct_TViewerX3D);
      instance.SetStreamerFunc(&streamer_TViewerX3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TViewerX3D*)
   {
      return GenerateInitInstanceLocal((::TViewerX3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TViewerX3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TViewerX3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TViewerX3D::Class_Name()
{
   return "TViewerX3D";
}

//______________________________________________________________________________
const char *TViewerX3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TViewerX3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TViewerX3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TViewerX3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TViewerX3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TViewerX3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TViewerX3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TViewerX3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TViewerX3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TViewerX3D.

   TVirtualViewer3D::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TViewerX3D(void *p) {
      delete ((::TViewerX3D*)p);
   }
   static void deleteArray_TViewerX3D(void *p) {
      delete [] ((::TViewerX3D*)p);
   }
   static void destruct_TViewerX3D(void *p) {
      typedef ::TViewerX3D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TViewerX3D(TBuffer &buf, void *obj) {
      ((::TViewerX3D*)obj)->::TViewerX3D::Streamer(buf);
   }
} // end of namespace ROOT for class ::TViewerX3D

namespace {
  void TriggerDictionaryInitialization_libX3d_Impl() {
    static const char* headers[] = {
"TViewerX3D.h",
"TX3DFrame.h",
0
    };
    static const char* includePaths[] = {
"/usr/include",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libX3d dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Interface to the X3D viewer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TViewerX3D.h")))  TViewerX3D;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libX3d dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TViewerX3D.h"
#include "TX3DFrame.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TViewerX3D", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libX3d",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libX3d_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libX3d_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libX3d() {
  TriggerDictionaryInitialization_libX3d_Impl();
}
