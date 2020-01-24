// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Fumili

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
#include "TFumili.h"
#include "TFumiliMinimizer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TFumili(void *p = 0);
   static void *newArray_TFumili(Long_t size, void *p);
   static void delete_TFumili(void *p);
   static void deleteArray_TFumili(void *p);
   static void destruct_TFumili(void *p);
   static void streamer_TFumili(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFumili*)
   {
      ::TFumili *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFumili >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFumili", ::TFumili::Class_Version(), "TFumili.h", 19,
                  typeid(::TFumili), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFumili::Dictionary, isa_proxy, 16,
                  sizeof(::TFumili) );
      instance.SetNew(&new_TFumili);
      instance.SetNewArray(&newArray_TFumili);
      instance.SetDelete(&delete_TFumili);
      instance.SetDeleteArray(&deleteArray_TFumili);
      instance.SetDestructor(&destruct_TFumili);
      instance.SetStreamerFunc(&streamer_TFumili);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFumili*)
   {
      return GenerateInitInstanceLocal((::TFumili*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFumili*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFumiliMinimizer(void *p = 0);
   static void *newArray_TFumiliMinimizer(Long_t size, void *p);
   static void delete_TFumiliMinimizer(void *p);
   static void deleteArray_TFumiliMinimizer(void *p);
   static void destruct_TFumiliMinimizer(void *p);
   static void streamer_TFumiliMinimizer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFumiliMinimizer*)
   {
      ::TFumiliMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFumiliMinimizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFumiliMinimizer", ::TFumiliMinimizer::Class_Version(), "TFumiliMinimizer.h", 41,
                  typeid(::TFumiliMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFumiliMinimizer::Dictionary, isa_proxy, 16,
                  sizeof(::TFumiliMinimizer) );
      instance.SetNew(&new_TFumiliMinimizer);
      instance.SetNewArray(&newArray_TFumiliMinimizer);
      instance.SetDelete(&delete_TFumiliMinimizer);
      instance.SetDeleteArray(&deleteArray_TFumiliMinimizer);
      instance.SetDestructor(&destruct_TFumiliMinimizer);
      instance.SetStreamerFunc(&streamer_TFumiliMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFumiliMinimizer*)
   {
      return GenerateInitInstanceLocal((::TFumiliMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFumiliMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TFumili::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFumili::Class_Name()
{
   return "TFumili";
}

//______________________________________________________________________________
const char *TFumili::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFumili*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFumili::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFumili*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFumili::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFumili*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFumili::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFumili*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFumiliMinimizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFumiliMinimizer::Class_Name()
{
   return "TFumiliMinimizer";
}

//______________________________________________________________________________
const char *TFumiliMinimizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFumiliMinimizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFumiliMinimizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFumiliMinimizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFumiliMinimizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFumiliMinimizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFumiliMinimizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFumiliMinimizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TFumili::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFumili.

   TVirtualFitter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFumili(void *p) {
      return  p ? new(p) ::TFumili : new ::TFumili;
   }
   static void *newArray_TFumili(Long_t nElements, void *p) {
      return p ? new(p) ::TFumili[nElements] : new ::TFumili[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFumili(void *p) {
      delete ((::TFumili*)p);
   }
   static void deleteArray_TFumili(void *p) {
      delete [] ((::TFumili*)p);
   }
   static void destruct_TFumili(void *p) {
      typedef ::TFumili current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFumili(TBuffer &buf, void *obj) {
      ((::TFumili*)obj)->::TFumili::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFumili

//______________________________________________________________________________
void TFumiliMinimizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFumiliMinimizer.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> fDim;
      R__b >> fNFree;
      R__b >> fMinVal;
      R__b >> fEdm;
      {
         vector<double> &R__stl =  fParams;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<double> &R__stl =  fErrors;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<double> &R__stl =  fCovar;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      R__b >> fFumili;
      R__b.CheckByteCount(R__s, R__c, TFumiliMinimizer::IsA());
   } else {
      R__c = R__b.WriteVersion(TFumiliMinimizer::IsA(), kTRUE);
      R__b << fDim;
      R__b << fNFree;
      R__b << fMinVal;
      R__b << fEdm;
      {
         vector<double> &R__stl =  fParams;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<double>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<double> &R__stl =  fErrors;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<double>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<double> &R__stl =  fCovar;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<double>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << fFumili;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFumiliMinimizer(void *p) {
      return  p ? new(p) ::TFumiliMinimizer : new ::TFumiliMinimizer;
   }
   static void *newArray_TFumiliMinimizer(Long_t nElements, void *p) {
      return p ? new(p) ::TFumiliMinimizer[nElements] : new ::TFumiliMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFumiliMinimizer(void *p) {
      delete ((::TFumiliMinimizer*)p);
   }
   static void deleteArray_TFumiliMinimizer(void *p) {
      delete [] ((::TFumiliMinimizer*)p);
   }
   static void destruct_TFumiliMinimizer(void *p) {
      typedef ::TFumiliMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFumiliMinimizer(TBuffer &buf, void *obj) {
      ((::TFumiliMinimizer*)obj)->::TFumiliMinimizer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFumiliMinimizer

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_libFumili_Impl() {
    static const char* headers[] = {
"TFumili.h",
"TFumiliMinimizer.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libFumili dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(The FUMILI Minimization package)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFumili.h")))  TFumili;
class __attribute__((annotate(R"ATTRDUMP(Implementation of Minimizer interface using TFumili)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFumiliMinimizer.h")))  TFumiliMinimizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libFumili dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TFumili.h"
#include "TFumiliMinimizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TFumili", payloadCode, "@",
"TFumiliMinimizer", payloadCode, "@",
"gFumili", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libFumili",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFumili_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFumili_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFumili() {
  TriggerDictionaryInitialization_libFumili_Impl();
}
