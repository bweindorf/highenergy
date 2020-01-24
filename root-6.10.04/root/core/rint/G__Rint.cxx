// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Rint

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
#include "TRint.h"
#include "TTabCom.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TRint(void *p);
   static void deleteArray_TRint(void *p);
   static void destruct_TRint(void *p);
   static void streamer_TRint(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRint*)
   {
      ::TRint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRint", ::TRint::Class_Version(), "TRint.h", 31,
                  typeid(::TRint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRint::Dictionary, isa_proxy, 16,
                  sizeof(::TRint) );
      instance.SetDelete(&delete_TRint);
      instance.SetDeleteArray(&deleteArray_TRint);
      instance.SetDestructor(&destruct_TRint);
      instance.SetStreamerFunc(&streamer_TRint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRint*)
   {
      return GenerateInitInstanceLocal((::TRint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTabCom(void *p = 0);
   static void *newArray_TTabCom(Long_t size, void *p);
   static void delete_TTabCom(void *p);
   static void deleteArray_TTabCom(void *p);
   static void destruct_TTabCom(void *p);
   static void streamer_TTabCom(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTabCom*)
   {
      ::TTabCom *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTabCom >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTabCom", ::TTabCom::Class_Version(), "TTabCom.h", 53,
                  typeid(::TTabCom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTabCom::Dictionary, isa_proxy, 16,
                  sizeof(::TTabCom) );
      instance.SetNew(&new_TTabCom);
      instance.SetNewArray(&newArray_TTabCom);
      instance.SetDelete(&delete_TTabCom);
      instance.SetDeleteArray(&deleteArray_TTabCom);
      instance.SetDestructor(&destruct_TTabCom);
      instance.SetStreamerFunc(&streamer_TTabCom);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTabCom*)
   {
      return GenerateInitInstanceLocal((::TTabCom*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTabCom*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TRint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRint::Class_Name()
{
   return "TRint";
}

//______________________________________________________________________________
const char *TRint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTabCom::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTabCom::Class_Name()
{
   return "TTabCom";
}

//______________________________________________________________________________
const char *TTabCom::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTabCom*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTabCom::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTabCom*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTabCom::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTabCom*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTabCom::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTabCom*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TRint::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRint.

   TApplication::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRint(void *p) {
      delete ((::TRint*)p);
   }
   static void deleteArray_TRint(void *p) {
      delete [] ((::TRint*)p);
   }
   static void destruct_TRint(void *p) {
      typedef ::TRint current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRint(TBuffer &buf, void *obj) {
      ((::TRint*)obj)->::TRint::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRint

//______________________________________________________________________________
void TTabCom::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTabCom.

   ::Error("TTabCom::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTabCom(void *p) {
      return  p ? new(p) ::TTabCom : new ::TTabCom;
   }
   static void *newArray_TTabCom(Long_t nElements, void *p) {
      return p ? new(p) ::TTabCom[nElements] : new ::TTabCom[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTabCom(void *p) {
      delete ((::TTabCom*)p);
   }
   static void deleteArray_TTabCom(void *p) {
      delete [] ((::TTabCom*)p);
   }
   static void destruct_TTabCom(void *p) {
      typedef ::TTabCom current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTabCom(TBuffer &buf, void *obj) {
      ((::TTabCom*)obj)->::TTabCom::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTabCom

namespace {
  void TriggerDictionaryInitialization_libRint_Impl() {
    static const char* headers[] = {
"TRint.h",
"TTabCom.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRint dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TRint.h"
#include "TTabCom.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRint_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRint() {
  TriggerDictionaryInitialization_libRint_Impl();
}
