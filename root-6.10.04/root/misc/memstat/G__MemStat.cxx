// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__MemStat

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
#include "TMemStatHelpers.h"
#include "TMemStat.h"
#include "TMemStatBacktrace.h"
#include "TMemStatDef.h"
#include "TMemStatMng.h"
#include "TMemStatHook.h"

// Header files passed via #pragma extra_include

namespace Memstat {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *Memstat_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("Memstat", 0 /*version*/, "TMemStatHelpers.h", 27,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &Memstat_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *Memstat_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_TMemStat(void *p = 0);
   static void *newArray_TMemStat(Long_t size, void *p);
   static void delete_TMemStat(void *p);
   static void deleteArray_TMemStat(void *p);
   static void destruct_TMemStat(void *p);
   static void streamer_TMemStat(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMemStat*)
   {
      ::TMemStat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMemStat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMemStat", ::TMemStat::Class_Version(), "TMemStat.h", 16,
                  typeid(::TMemStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMemStat::Dictionary, isa_proxy, 16,
                  sizeof(::TMemStat) );
      instance.SetNew(&new_TMemStat);
      instance.SetNewArray(&newArray_TMemStat);
      instance.SetDelete(&delete_TMemStat);
      instance.SetDeleteArray(&deleteArray_TMemStat);
      instance.SetDestructor(&destruct_TMemStat);
      instance.SetStreamerFunc(&streamer_TMemStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMemStat*)
   {
      return GenerateInitInstanceLocal((::TMemStat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMemStat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void streamer_MemstatcLcLTMemStatMng(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Memstat::TMemStatMng*)
   {
      ::Memstat::TMemStatMng *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Memstat::TMemStatMng >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Memstat::TMemStatMng", ::Memstat::TMemStatMng::Class_Version(), "TMemStatMng.h", 74,
                  typeid(::Memstat::TMemStatMng), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Memstat::TMemStatMng::Dictionary, isa_proxy, 16,
                  sizeof(::Memstat::TMemStatMng) );
      instance.SetStreamerFunc(&streamer_MemstatcLcLTMemStatMng);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Memstat::TMemStatMng*)
   {
      return GenerateInitInstanceLocal((::Memstat::TMemStatMng*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Memstat::TMemStatMng*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMemStat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMemStat::Class_Name()
{
   return "TMemStat";
}

//______________________________________________________________________________
const char *TMemStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMemStat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMemStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMemStat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMemStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMemStat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMemStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMemStat*)0x0)->GetClass(); }
   return fgIsA;
}

namespace Memstat {
//______________________________________________________________________________
atomic_TClass_ptr TMemStatMng::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMemStatMng::Class_Name()
{
   return "Memstat::TMemStatMng";
}

//______________________________________________________________________________
const char *TMemStatMng::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Memstat::TMemStatMng*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMemStatMng::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Memstat::TMemStatMng*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMemStatMng::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Memstat::TMemStatMng*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMemStatMng::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Memstat::TMemStatMng*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace Memstat
//______________________________________________________________________________
void TMemStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMemStat.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMemStat(void *p) {
      return  p ? new(p) ::TMemStat : new ::TMemStat;
   }
   static void *newArray_TMemStat(Long_t nElements, void *p) {
      return p ? new(p) ::TMemStat[nElements] : new ::TMemStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMemStat(void *p) {
      delete ((::TMemStat*)p);
   }
   static void deleteArray_TMemStat(void *p) {
      delete [] ((::TMemStat*)p);
   }
   static void destruct_TMemStat(void *p) {
      typedef ::TMemStat current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMemStat(TBuffer &buf, void *obj) {
      ((::TMemStat*)obj)->::TMemStat::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMemStat

namespace Memstat {
//______________________________________________________________________________
void TMemStatMng::Streamer(TBuffer &R__b)
{
   // Stream an object of class Memstat::TMemStatMng.

   TObject::Streamer(R__b);
}

} // namespace Memstat
namespace ROOT {
   // Wrapper around a custom streamer member function.
   static void streamer_MemstatcLcLTMemStatMng(TBuffer &buf, void *obj) {
      ((::Memstat::TMemStatMng*)obj)->::Memstat::TMemStatMng::Streamer(buf);
   }
} // end of namespace ROOT for class ::Memstat::TMemStatMng

namespace {
  void TriggerDictionaryInitialization_libMemStat_Impl() {
    static const char* headers[] = {
"TMemStatHelpers.h",
"TMemStat.h",
"TMemStatBacktrace.h",
"TMemStatDef.h",
"TMemStatMng.h",
"TMemStatHook.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMemStat dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(a user interface class of MemStat)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMemStat.h")))  TMemStat;
namespace Memstat{class __attribute__((annotate(R"ATTRDUMP(a manager of memstat sessions.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMemStatMng.h")))  TMemStatMng;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMemStat dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TMemStatHelpers.h"
#include "TMemStat.h"
#include "TMemStatBacktrace.h"
#include "TMemStatDef.h"
#include "TMemStatMng.h"
#include "TMemStatHook.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Memstat::TMemStatMng", payloadCode, "@",
"TMemStat", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMemStat",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMemStat_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMemStat_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMemStat() {
  TriggerDictionaryInitialization_libMemStat_Impl();
}
