// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__FitPanel

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
#include "TAdvancedGraphicsDialog.h"
#include "TFitEditor.h"
#include "TFitParametersDialog.h"
#include "TTreeInput.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TTreeInput(void *p);
   static void deleteArray_TTreeInput(void *p);
   static void destruct_TTreeInput(void *p);
   static void streamer_TTreeInput(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeInput*)
   {
      ::TTreeInput *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeInput >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeInput", ::TTreeInput::Class_Version(), "TTreeInput.h", 30,
                  typeid(::TTreeInput), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeInput::Dictionary, isa_proxy, 16,
                  sizeof(::TTreeInput) );
      instance.SetDelete(&delete_TTreeInput);
      instance.SetDeleteArray(&deleteArray_TTreeInput);
      instance.SetDestructor(&destruct_TTreeInput);
      instance.SetStreamerFunc(&streamer_TTreeInput);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeInput*)
   {
      return GenerateInitInstanceLocal((::TTreeInput*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeInput*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TAdvancedGraphicsDialog(void *p);
   static void deleteArray_TAdvancedGraphicsDialog(void *p);
   static void destruct_TAdvancedGraphicsDialog(void *p);
   static void streamer_TAdvancedGraphicsDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAdvancedGraphicsDialog*)
   {
      ::TAdvancedGraphicsDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAdvancedGraphicsDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAdvancedGraphicsDialog", ::TAdvancedGraphicsDialog::Class_Version(), "TAdvancedGraphicsDialog.h", 47,
                  typeid(::TAdvancedGraphicsDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAdvancedGraphicsDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TAdvancedGraphicsDialog) );
      instance.SetDelete(&delete_TAdvancedGraphicsDialog);
      instance.SetDeleteArray(&deleteArray_TAdvancedGraphicsDialog);
      instance.SetDestructor(&destruct_TAdvancedGraphicsDialog);
      instance.SetStreamerFunc(&streamer_TAdvancedGraphicsDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAdvancedGraphicsDialog*)
   {
      return GenerateInitInstanceLocal((::TAdvancedGraphicsDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAdvancedGraphicsDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFitEditor(void *p);
   static void deleteArray_TFitEditor(void *p);
   static void destruct_TFitEditor(void *p);
   static void streamer_TFitEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitEditor*)
   {
      ::TFitEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFitEditor", ::TFitEditor::Class_Version(), "TFitEditor.h", 64,
                  typeid(::TFitEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TFitEditor) );
      instance.SetDelete(&delete_TFitEditor);
      instance.SetDeleteArray(&deleteArray_TFitEditor);
      instance.SetDestructor(&destruct_TFitEditor);
      instance.SetStreamerFunc(&streamer_TFitEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitEditor*)
   {
      return GenerateInitInstanceLocal((::TFitEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFitParametersDialog(void *p);
   static void deleteArray_TFitParametersDialog(void *p);
   static void destruct_TFitParametersDialog(void *p);
   static void streamer_TFitParametersDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParametersDialog*)
   {
      ::TFitParametersDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParametersDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParametersDialog", ::TFitParametersDialog::Class_Version(), "TFitParametersDialog.h", 48,
                  typeid(::TFitParametersDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParametersDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParametersDialog) );
      instance.SetDelete(&delete_TFitParametersDialog);
      instance.SetDeleteArray(&deleteArray_TFitParametersDialog);
      instance.SetDestructor(&destruct_TFitParametersDialog);
      instance.SetStreamerFunc(&streamer_TFitParametersDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParametersDialog*)
   {
      return GenerateInitInstanceLocal((::TFitParametersDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParametersDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TTreeInput::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeInput::Class_Name()
{
   return "TTreeInput";
}

//______________________________________________________________________________
const char *TTreeInput::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeInput*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeInput::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeInput*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeInput::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeInput*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeInput::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeInput*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAdvancedGraphicsDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAdvancedGraphicsDialog::Class_Name()
{
   return "TAdvancedGraphicsDialog";
}

//______________________________________________________________________________
const char *TAdvancedGraphicsDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAdvancedGraphicsDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAdvancedGraphicsDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAdvancedGraphicsDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAdvancedGraphicsDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAdvancedGraphicsDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAdvancedGraphicsDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAdvancedGraphicsDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitEditor::Class_Name()
{
   return "TFitEditor";
}

//______________________________________________________________________________
const char *TFitEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFitEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParametersDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParametersDialog::Class_Name()
{
   return "TFitParametersDialog";
}

//______________________________________________________________________________
const char *TFitParametersDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParametersDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParametersDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParametersDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParametersDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParametersDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParametersDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParametersDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TTreeInput::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeInput.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeInput(void *p) {
      delete ((::TTreeInput*)p);
   }
   static void deleteArray_TTreeInput(void *p) {
      delete [] ((::TTreeInput*)p);
   }
   static void destruct_TTreeInput(void *p) {
      typedef ::TTreeInput current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTreeInput(TBuffer &buf, void *obj) {
      ((::TTreeInput*)obj)->::TTreeInput::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTreeInput

//______________________________________________________________________________
void TAdvancedGraphicsDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAdvancedGraphicsDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAdvancedGraphicsDialog(void *p) {
      delete ((::TAdvancedGraphicsDialog*)p);
   }
   static void deleteArray_TAdvancedGraphicsDialog(void *p) {
      delete [] ((::TAdvancedGraphicsDialog*)p);
   }
   static void destruct_TAdvancedGraphicsDialog(void *p) {
      typedef ::TAdvancedGraphicsDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAdvancedGraphicsDialog(TBuffer &buf, void *obj) {
      ((::TAdvancedGraphicsDialog*)obj)->::TAdvancedGraphicsDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAdvancedGraphicsDialog

//______________________________________________________________________________
void TFitEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitEditor.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFitEditor(void *p) {
      delete ((::TFitEditor*)p);
   }
   static void deleteArray_TFitEditor(void *p) {
      delete [] ((::TFitEditor*)p);
   }
   static void destruct_TFitEditor(void *p) {
      typedef ::TFitEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitEditor(TBuffer &buf, void *obj) {
      ((::TFitEditor*)obj)->::TFitEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitEditor

//______________________________________________________________________________
void TFitParametersDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParametersDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFitParametersDialog(void *p) {
      delete ((::TFitParametersDialog*)p);
   }
   static void deleteArray_TFitParametersDialog(void *p) {
      delete [] ((::TFitParametersDialog*)p);
   }
   static void destruct_TFitParametersDialog(void *p) {
      typedef ::TFitParametersDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParametersDialog(TBuffer &buf, void *obj) {
      ((::TFitParametersDialog*)obj)->::TFitParametersDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParametersDialog

namespace {
  void TriggerDictionaryInitialization_libFitPanel_Impl() {
    static const char* headers[] = {
"TAdvancedGraphicsDialog.h",
"TFitEditor.h",
"TFitParametersDialog.h",
"TTreeInput.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libFitPanel dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TAdvancedGraphicsDialog.h"
#include "TFitEditor.h"
#include "TFitParametersDialog.h"
#include "TTreeInput.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libFitPanel",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFitPanel_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFitPanel_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFitPanel() {
  TriggerDictionaryInitialization_libFitPanel_Impl();
}
