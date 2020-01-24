// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Gdml

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
#include "TGDMLParse.h"
#include "TGDMLWrite.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TGDMLRefl(void *p = 0);
   static void *newArray_TGDMLRefl(Long_t size, void *p);
   static void delete_TGDMLRefl(void *p);
   static void deleteArray_TGDMLRefl(void *p);
   static void destruct_TGDMLRefl(void *p);
   static void streamer_TGDMLRefl(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDMLRefl*)
   {
      ::TGDMLRefl *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDMLRefl >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGDMLRefl", ::TGDMLRefl::Class_Version(), "TGDMLParse.h", 31,
                  typeid(::TGDMLRefl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDMLRefl::Dictionary, isa_proxy, 16,
                  sizeof(::TGDMLRefl) );
      instance.SetNew(&new_TGDMLRefl);
      instance.SetNewArray(&newArray_TGDMLRefl);
      instance.SetDelete(&delete_TGDMLRefl);
      instance.SetDeleteArray(&deleteArray_TGDMLRefl);
      instance.SetDestructor(&destruct_TGDMLRefl);
      instance.SetStreamerFunc(&streamer_TGDMLRefl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDMLRefl*)
   {
      return GenerateInitInstanceLocal((::TGDMLRefl*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGDMLRefl*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDMLParse(void *p = 0);
   static void *newArray_TGDMLParse(Long_t size, void *p);
   static void delete_TGDMLParse(void *p);
   static void deleteArray_TGDMLParse(void *p);
   static void destruct_TGDMLParse(void *p);
   static void streamer_TGDMLParse(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDMLParse*)
   {
      ::TGDMLParse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDMLParse >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGDMLParse", ::TGDMLParse::Class_Version(), "TGDMLParse.h", 96,
                  typeid(::TGDMLParse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDMLParse::Dictionary, isa_proxy, 16,
                  sizeof(::TGDMLParse) );
      instance.SetNew(&new_TGDMLParse);
      instance.SetNewArray(&newArray_TGDMLParse);
      instance.SetDelete(&delete_TGDMLParse);
      instance.SetDeleteArray(&deleteArray_TGDMLParse);
      instance.SetDestructor(&destruct_TGDMLParse);
      instance.SetStreamerFunc(&streamer_TGDMLParse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDMLParse*)
   {
      return GenerateInitInstanceLocal((::TGDMLParse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGDMLParse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDMLWrite(void *p = 0);
   static void *newArray_TGDMLWrite(Long_t size, void *p);
   static void delete_TGDMLWrite(void *p);
   static void deleteArray_TGDMLWrite(void *p);
   static void destruct_TGDMLWrite(void *p);
   static void streamer_TGDMLWrite(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDMLWrite*)
   {
      ::TGDMLWrite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDMLWrite >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGDMLWrite", ::TGDMLWrite::Class_Version(), "TGDMLWrite.h", 69,
                  typeid(::TGDMLWrite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDMLWrite::Dictionary, isa_proxy, 16,
                  sizeof(::TGDMLWrite) );
      instance.SetNew(&new_TGDMLWrite);
      instance.SetNewArray(&newArray_TGDMLWrite);
      instance.SetDelete(&delete_TGDMLWrite);
      instance.SetDeleteArray(&deleteArray_TGDMLWrite);
      instance.SetDestructor(&destruct_TGDMLWrite);
      instance.SetStreamerFunc(&streamer_TGDMLWrite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDMLWrite*)
   {
      return GenerateInitInstanceLocal((::TGDMLWrite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGDMLWrite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGDMLRefl::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDMLRefl::Class_Name()
{
   return "TGDMLRefl";
}

//______________________________________________________________________________
const char *TGDMLRefl::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLRefl*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGDMLRefl::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLRefl*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDMLRefl::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLRefl*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDMLRefl::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLRefl*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDMLParse::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDMLParse::Class_Name()
{
   return "TGDMLParse";
}

//______________________________________________________________________________
const char *TGDMLParse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLParse*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGDMLParse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLParse*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDMLParse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLParse*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDMLParse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLParse*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDMLWrite::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDMLWrite::Class_Name()
{
   return "TGDMLWrite";
}

//______________________________________________________________________________
const char *TGDMLWrite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLWrite*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGDMLWrite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLWrite*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDMLWrite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLWrite*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDMLWrite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLWrite*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGDMLRefl::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDMLRefl.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDMLRefl(void *p) {
      return  p ? new(p) ::TGDMLRefl : new ::TGDMLRefl;
   }
   static void *newArray_TGDMLRefl(Long_t nElements, void *p) {
      return p ? new(p) ::TGDMLRefl[nElements] : new ::TGDMLRefl[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDMLRefl(void *p) {
      delete ((::TGDMLRefl*)p);
   }
   static void deleteArray_TGDMLRefl(void *p) {
      delete [] ((::TGDMLRefl*)p);
   }
   static void destruct_TGDMLRefl(void *p) {
      typedef ::TGDMLRefl current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDMLRefl(TBuffer &buf, void *obj) {
      ((::TGDMLRefl*)obj)->::TGDMLRefl::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDMLRefl

//______________________________________________________________________________
void TGDMLParse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDMLParse.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDMLParse(void *p) {
      return  p ? new(p) ::TGDMLParse : new ::TGDMLParse;
   }
   static void *newArray_TGDMLParse(Long_t nElements, void *p) {
      return p ? new(p) ::TGDMLParse[nElements] : new ::TGDMLParse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDMLParse(void *p) {
      delete ((::TGDMLParse*)p);
   }
   static void deleteArray_TGDMLParse(void *p) {
      delete [] ((::TGDMLParse*)p);
   }
   static void destruct_TGDMLParse(void *p) {
      typedef ::TGDMLParse current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDMLParse(TBuffer &buf, void *obj) {
      ((::TGDMLParse*)obj)->::TGDMLParse::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDMLParse

//______________________________________________________________________________
void TGDMLWrite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDMLWrite.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDMLWrite(void *p) {
      return  p ? new(p) ::TGDMLWrite : new ::TGDMLWrite;
   }
   static void *newArray_TGDMLWrite(Long_t nElements, void *p) {
      return p ? new(p) ::TGDMLWrite[nElements] : new ::TGDMLWrite[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDMLWrite(void *p) {
      delete ((::TGDMLWrite*)p);
   }
   static void deleteArray_TGDMLWrite(void *p) {
      delete [] ((::TGDMLWrite*)p);
   }
   static void destruct_TGDMLWrite(void *p) {
      typedef ::TGDMLWrite current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDMLWrite(TBuffer &buf, void *obj) {
      ((::TGDMLWrite*)obj)->::TGDMLWrite::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDMLWrite

namespace {
  void TriggerDictionaryInitialization_libGdml_Impl() {
    static const char* headers[] = {
"TGDMLParse.h",
"TGDMLWrite.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGdml dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(helper class used for the storage of reflected solids)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGDMLParse.h")))  TGDMLRefl;
class __attribute__((annotate(R"ATTRDUMP(imports GDML using DOM and binds it to ROOT)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGDMLParse.h")))  TGDMLParse;
class __attribute__((annotate(R"ATTRDUMP(imports GDML using DOM and binds it to ROOT)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGDMLWrite.h")))  TGDMLWrite;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGdml dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGDMLParse.h"
#include "TGDMLWrite.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TGDMLParse", payloadCode, "@",
"TGDMLRefl", payloadCode, "@",
"TGDMLWrite", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGdml",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGdml_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGdml_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGdml() {
  TriggerDictionaryInitialization_libGdml_Impl();
}
