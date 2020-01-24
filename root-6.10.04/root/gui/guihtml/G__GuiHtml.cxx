// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GuiHtml

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
#include "TGHtml.h"
#include "TGHtmlBrowser.h"
#include "TGHtmlTokens.h"
#include "TGHtmlUri.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TGHtml(void *p);
   static void deleteArray_TGHtml(void *p);
   static void destruct_TGHtml(void *p);
   static void streamer_TGHtml(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHtml*)
   {
      ::TGHtml *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHtml >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGHtml", ::TGHtml::Class_Version(), "TGHtml.h", 872,
                  typeid(::TGHtml), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHtml::Dictionary, isa_proxy, 16,
                  sizeof(::TGHtml) );
      instance.SetDelete(&delete_TGHtml);
      instance.SetDeleteArray(&deleteArray_TGHtml);
      instance.SetDestructor(&destruct_TGHtml);
      instance.SetStreamerFunc(&streamer_TGHtml);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHtml*)
   {
      return GenerateInitInstanceLocal((::TGHtml*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGHtml*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGHtmlBrowser(void *p = 0);
   static void *newArray_TGHtmlBrowser(Long_t size, void *p);
   static void delete_TGHtmlBrowser(void *p);
   static void deleteArray_TGHtmlBrowser(void *p);
   static void destruct_TGHtmlBrowser(void *p);
   static void streamer_TGHtmlBrowser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHtmlBrowser*)
   {
      ::TGHtmlBrowser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHtmlBrowser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGHtmlBrowser", ::TGHtmlBrowser::Class_Version(), "TGHtmlBrowser.h", 34,
                  typeid(::TGHtmlBrowser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHtmlBrowser::Dictionary, isa_proxy, 16,
                  sizeof(::TGHtmlBrowser) );
      instance.SetNew(&new_TGHtmlBrowser);
      instance.SetNewArray(&newArray_TGHtmlBrowser);
      instance.SetDelete(&delete_TGHtmlBrowser);
      instance.SetDeleteArray(&deleteArray_TGHtmlBrowser);
      instance.SetDestructor(&destruct_TGHtmlBrowser);
      instance.SetStreamerFunc(&streamer_TGHtmlBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHtmlBrowser*)
   {
      return GenerateInitInstanceLocal((::TGHtmlBrowser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGHtmlBrowser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGHtml::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHtml::Class_Name()
{
   return "TGHtml";
}

//______________________________________________________________________________
const char *TGHtml::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHtml*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGHtml::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHtml*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHtml::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHtml*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHtml::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHtml*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHtmlBrowser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHtmlBrowser::Class_Name()
{
   return "TGHtmlBrowser";
}

//______________________________________________________________________________
const char *TGHtmlBrowser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHtmlBrowser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGHtmlBrowser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHtmlBrowser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHtmlBrowser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHtmlBrowser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHtmlBrowser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHtmlBrowser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGHtml::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHtml.

   TGView::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGHtml(void *p) {
      delete ((::TGHtml*)p);
   }
   static void deleteArray_TGHtml(void *p) {
      delete [] ((::TGHtml*)p);
   }
   static void destruct_TGHtml(void *p) {
      typedef ::TGHtml current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHtml(TBuffer &buf, void *obj) {
      ((::TGHtml*)obj)->::TGHtml::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHtml

//______________________________________________________________________________
void TGHtmlBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHtmlBrowser.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGHtmlBrowser(void *p) {
      return  p ? new(p) ::TGHtmlBrowser : new ::TGHtmlBrowser;
   }
   static void *newArray_TGHtmlBrowser(Long_t nElements, void *p) {
      return p ? new(p) ::TGHtmlBrowser[nElements] : new ::TGHtmlBrowser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGHtmlBrowser(void *p) {
      delete ((::TGHtmlBrowser*)p);
   }
   static void deleteArray_TGHtmlBrowser(void *p) {
      delete [] ((::TGHtmlBrowser*)p);
   }
   static void destruct_TGHtmlBrowser(void *p) {
      typedef ::TGHtmlBrowser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHtmlBrowser(TBuffer &buf, void *obj) {
      ((::TGHtmlBrowser*)obj)->::TGHtmlBrowser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHtmlBrowser

namespace {
  void TriggerDictionaryInitialization_libGuiHtml_Impl() {
    static const char* headers[] = {
"TGHtml.h",
"TGHtmlBrowser.h",
"TGHtmlTokens.h",
"TGHtmlUri.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGuiHtml dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(HTML widget)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(HTML widget)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(HTML widget)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGHtml.h")))  TGHtml;
class __attribute__((annotate(R"ATTRDUMP(very simple html browser)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGHtmlBrowser.h")))  TGHtmlBrowser;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGuiHtml dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGHtml.h"
#include "TGHtmlBrowser.h"
#include "TGHtmlTokens.h"
#include "TGHtmlUri.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TGHtml", payloadCode, "@",
"TGHtmlBrowser", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGuiHtml",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGuiHtml_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGuiHtml_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGuiHtml() {
  TriggerDictionaryInitialization_libGuiHtml_Impl();
}
