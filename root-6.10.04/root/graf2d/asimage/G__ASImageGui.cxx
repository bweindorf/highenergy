// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ASImageGui

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
#include "TASPaletteEditor.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TASPaletteEditor(void *p);
   static void deleteArray_TASPaletteEditor(void *p);
   static void destruct_TASPaletteEditor(void *p);
   static void streamer_TASPaletteEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TASPaletteEditor*)
   {
      ::TASPaletteEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TASPaletteEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TASPaletteEditor", ::TASPaletteEditor::Class_Version(), "TASPaletteEditor.h", 39,
                  typeid(::TASPaletteEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TASPaletteEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TASPaletteEditor) );
      instance.SetDelete(&delete_TASPaletteEditor);
      instance.SetDeleteArray(&deleteArray_TASPaletteEditor);
      instance.SetDestructor(&destruct_TASPaletteEditor);
      instance.SetStreamerFunc(&streamer_TASPaletteEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TASPaletteEditor*)
   {
      return GenerateInitInstanceLocal((::TASPaletteEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TASPaletteEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TASPaletteEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TASPaletteEditor::Class_Name()
{
   return "TASPaletteEditor";
}

//______________________________________________________________________________
const char *TASPaletteEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASPaletteEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TASPaletteEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASPaletteEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TASPaletteEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASPaletteEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TASPaletteEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASPaletteEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TASPaletteEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TASPaletteEditor.

   TPaletteEditor::Streamer(R__b);
   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TASPaletteEditor(void *p) {
      delete ((::TASPaletteEditor*)p);
   }
   static void deleteArray_TASPaletteEditor(void *p) {
      delete [] ((::TASPaletteEditor*)p);
   }
   static void destruct_TASPaletteEditor(void *p) {
      typedef ::TASPaletteEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TASPaletteEditor(TBuffer &buf, void *obj) {
      ((::TASPaletteEditor*)obj)->::TASPaletteEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TASPaletteEditor

namespace {
  void TriggerDictionaryInitialization_libASImageGui_Impl() {
    static const char* headers[] = {
"TASPaletteEditor.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/freetype2",
"/usr/include",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libASImageGui dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TASPaletteEditor.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libASImageGui",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libASImageGui_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libASImageGui_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libASImageGui() {
  TriggerDictionaryInitialization_libASImageGui_Impl();
}
