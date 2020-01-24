// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__PostScript

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
#include "TImageDump.h"
#include "TPDF.h"
#include "TPostScript.h"
#include "TSVG.h"
#include "TTeXDump.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TImageDump(void *p = 0);
   static void *newArray_TImageDump(Long_t size, void *p);
   static void delete_TImageDump(void *p);
   static void deleteArray_TImageDump(void *p);
   static void destruct_TImageDump(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TImageDump*)
   {
      ::TImageDump *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TImageDump >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TImageDump", ::TImageDump::Class_Version(), "TImageDump.h", 22,
                  typeid(::TImageDump), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TImageDump::Dictionary, isa_proxy, 4,
                  sizeof(::TImageDump) );
      instance.SetNew(&new_TImageDump);
      instance.SetNewArray(&newArray_TImageDump);
      instance.SetDelete(&delete_TImageDump);
      instance.SetDeleteArray(&deleteArray_TImageDump);
      instance.SetDestructor(&destruct_TImageDump);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TImageDump*)
   {
      return GenerateInitInstanceLocal((::TImageDump*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TImageDump*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPDF(void *p = 0);
   static void *newArray_TPDF(Long_t size, void *p);
   static void delete_TPDF(void *p);
   static void deleteArray_TPDF(void *p);
   static void destruct_TPDF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPDF*)
   {
      ::TPDF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPDF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPDF", ::TPDF::Class_Version(), "TPDF.h", 30,
                  typeid(::TPDF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPDF::Dictionary, isa_proxy, 4,
                  sizeof(::TPDF) );
      instance.SetNew(&new_TPDF);
      instance.SetNewArray(&newArray_TPDF);
      instance.SetDelete(&delete_TPDF);
      instance.SetDeleteArray(&deleteArray_TPDF);
      instance.SetDestructor(&destruct_TPDF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPDF*)
   {
      return GenerateInitInstanceLocal((::TPDF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPDF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPostScript(void *p = 0);
   static void *newArray_TPostScript(Long_t size, void *p);
   static void delete_TPostScript(void *p);
   static void deleteArray_TPostScript(void *p);
   static void destruct_TPostScript(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPostScript*)
   {
      ::TPostScript *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPostScript >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPostScript", ::TPostScript::Class_Version(), "TPostScript.h", 20,
                  typeid(::TPostScript), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPostScript::Dictionary, isa_proxy, 4,
                  sizeof(::TPostScript) );
      instance.SetNew(&new_TPostScript);
      instance.SetNewArray(&newArray_TPostScript);
      instance.SetDelete(&delete_TPostScript);
      instance.SetDeleteArray(&deleteArray_TPostScript);
      instance.SetDestructor(&destruct_TPostScript);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPostScript*)
   {
      return GenerateInitInstanceLocal((::TPostScript*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPostScript*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSVG(void *p = 0);
   static void *newArray_TSVG(Long_t size, void *p);
   static void delete_TSVG(void *p);
   static void deleteArray_TSVG(void *p);
   static void destruct_TSVG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSVG*)
   {
      ::TSVG *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSVG >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSVG", ::TSVG::Class_Version(), "TSVG.h", 20,
                  typeid(::TSVG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSVG::Dictionary, isa_proxy, 4,
                  sizeof(::TSVG) );
      instance.SetNew(&new_TSVG);
      instance.SetNewArray(&newArray_TSVG);
      instance.SetDelete(&delete_TSVG);
      instance.SetDeleteArray(&deleteArray_TSVG);
      instance.SetDestructor(&destruct_TSVG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSVG*)
   {
      return GenerateInitInstanceLocal((::TSVG*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSVG*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTeXDump(void *p = 0);
   static void *newArray_TTeXDump(Long_t size, void *p);
   static void delete_TTeXDump(void *p);
   static void deleteArray_TTeXDump(void *p);
   static void destruct_TTeXDump(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTeXDump*)
   {
      ::TTeXDump *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTeXDump >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTeXDump", ::TTeXDump::Class_Version(), "TTeXDump.h", 20,
                  typeid(::TTeXDump), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTeXDump::Dictionary, isa_proxy, 4,
                  sizeof(::TTeXDump) );
      instance.SetNew(&new_TTeXDump);
      instance.SetNewArray(&newArray_TTeXDump);
      instance.SetDelete(&delete_TTeXDump);
      instance.SetDeleteArray(&deleteArray_TTeXDump);
      instance.SetDestructor(&destruct_TTeXDump);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTeXDump*)
   {
      return GenerateInitInstanceLocal((::TTeXDump*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTeXDump*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TImageDump::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TImageDump::Class_Name()
{
   return "TImageDump";
}

//______________________________________________________________________________
const char *TImageDump::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TImageDump*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TImageDump::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TImageDump*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TImageDump::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TImageDump*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TImageDump::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TImageDump*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPDF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPDF::Class_Name()
{
   return "TPDF";
}

//______________________________________________________________________________
const char *TPDF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPDF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPDF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPDF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPDF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPDF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPDF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPDF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPostScript::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPostScript::Class_Name()
{
   return "TPostScript";
}

//______________________________________________________________________________
const char *TPostScript::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPostScript*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPostScript::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPostScript*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPostScript::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPostScript*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPostScript::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPostScript*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSVG::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSVG::Class_Name()
{
   return "TSVG";
}

//______________________________________________________________________________
const char *TSVG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSVG*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSVG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSVG*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSVG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSVG*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSVG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSVG*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTeXDump::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTeXDump::Class_Name()
{
   return "TTeXDump";
}

//______________________________________________________________________________
const char *TTeXDump::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTeXDump*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTeXDump::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTeXDump*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTeXDump::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTeXDump*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTeXDump::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTeXDump*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TImageDump::Streamer(TBuffer &R__b)
{
   // Stream an object of class TImageDump.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TImageDump::Class(),this);
   } else {
      R__b.WriteClassBuffer(TImageDump::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TImageDump(void *p) {
      return  p ? new(p) ::TImageDump : new ::TImageDump;
   }
   static void *newArray_TImageDump(Long_t nElements, void *p) {
      return p ? new(p) ::TImageDump[nElements] : new ::TImageDump[nElements];
   }
   // Wrapper around operator delete
   static void delete_TImageDump(void *p) {
      delete ((::TImageDump*)p);
   }
   static void deleteArray_TImageDump(void *p) {
      delete [] ((::TImageDump*)p);
   }
   static void destruct_TImageDump(void *p) {
      typedef ::TImageDump current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TImageDump

//______________________________________________________________________________
void TPDF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPDF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPDF::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPDF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPDF(void *p) {
      return  p ? new(p) ::TPDF : new ::TPDF;
   }
   static void *newArray_TPDF(Long_t nElements, void *p) {
      return p ? new(p) ::TPDF[nElements] : new ::TPDF[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPDF(void *p) {
      delete ((::TPDF*)p);
   }
   static void deleteArray_TPDF(void *p) {
      delete [] ((::TPDF*)p);
   }
   static void destruct_TPDF(void *p) {
      typedef ::TPDF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPDF

//______________________________________________________________________________
void TPostScript::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPostScript.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPostScript::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPostScript::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPostScript(void *p) {
      return  p ? new(p) ::TPostScript : new ::TPostScript;
   }
   static void *newArray_TPostScript(Long_t nElements, void *p) {
      return p ? new(p) ::TPostScript[nElements] : new ::TPostScript[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPostScript(void *p) {
      delete ((::TPostScript*)p);
   }
   static void deleteArray_TPostScript(void *p) {
      delete [] ((::TPostScript*)p);
   }
   static void destruct_TPostScript(void *p) {
      typedef ::TPostScript current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPostScript

//______________________________________________________________________________
void TSVG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSVG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSVG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSVG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSVG(void *p) {
      return  p ? new(p) ::TSVG : new ::TSVG;
   }
   static void *newArray_TSVG(Long_t nElements, void *p) {
      return p ? new(p) ::TSVG[nElements] : new ::TSVG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSVG(void *p) {
      delete ((::TSVG*)p);
   }
   static void deleteArray_TSVG(void *p) {
      delete [] ((::TSVG*)p);
   }
   static void destruct_TSVG(void *p) {
      typedef ::TSVG current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSVG

//______________________________________________________________________________
void TTeXDump::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTeXDump.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTeXDump::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTeXDump::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTeXDump(void *p) {
      return  p ? new(p) ::TTeXDump : new ::TTeXDump;
   }
   static void *newArray_TTeXDump(Long_t nElements, void *p) {
      return p ? new(p) ::TTeXDump[nElements] : new ::TTeXDump[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTeXDump(void *p) {
      delete ((::TTeXDump*)p);
   }
   static void deleteArray_TTeXDump(void *p) {
      delete [] ((::TTeXDump*)p);
   }
   static void destruct_TTeXDump(void *p) {
      typedef ::TTeXDump current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTeXDump

namespace {
  void TriggerDictionaryInitialization_libPostscript_Impl() {
    static const char* headers[] = {
"TImageDump.h",
"TPDF.h",
"TPostScript.h",
"TSVG.h",
"TTeXDump.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libPostscript dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TImageDump.h"
#include "TPDF.h"
#include "TPostScript.h"
#include "TSVG.h"
#include "TTeXDump.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libPostscript",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libPostscript_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libPostscript_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libPostscript() {
  TriggerDictionaryInitialization_libPostscript_Impl();
}
