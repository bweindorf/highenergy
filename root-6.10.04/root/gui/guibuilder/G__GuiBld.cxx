// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GuiBld

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
#include "TGuiBldDragManager.h"
#include "TGuiBldEditor.h"
#include "TGuiBldGeometryFrame.h"
#include "TGuiBldHintsButton.h"
#include "TGuiBldHintsEditor.h"
#include "TGuiBldNameFrame.h"
#include "TRootGuiBuilder.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TGuiBldDragManager(void *p = 0);
   static void *newArray_TGuiBldDragManager(Long_t size, void *p);
   static void delete_TGuiBldDragManager(void *p);
   static void deleteArray_TGuiBldDragManager(void *p);
   static void destruct_TGuiBldDragManager(void *p);
   static void streamer_TGuiBldDragManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGuiBldDragManager*)
   {
      ::TGuiBldDragManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGuiBldDragManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGuiBldDragManager", ::TGuiBldDragManager::Class_Version(), "TGuiBldDragManager.h", 58,
                  typeid(::TGuiBldDragManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGuiBldDragManager::Dictionary, isa_proxy, 16,
                  sizeof(::TGuiBldDragManager) );
      instance.SetNew(&new_TGuiBldDragManager);
      instance.SetNewArray(&newArray_TGuiBldDragManager);
      instance.SetDelete(&delete_TGuiBldDragManager);
      instance.SetDeleteArray(&deleteArray_TGuiBldDragManager);
      instance.SetDestructor(&destruct_TGuiBldDragManager);
      instance.SetStreamerFunc(&streamer_TGuiBldDragManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGuiBldDragManager*)
   {
      return GenerateInitInstanceLocal((::TGuiBldDragManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGuiBldDragManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGuiBldEditor(void *p = 0);
   static void *newArray_TGuiBldEditor(Long_t size, void *p);
   static void delete_TGuiBldEditor(void *p);
   static void deleteArray_TGuiBldEditor(void *p);
   static void destruct_TGuiBldEditor(void *p);
   static void streamer_TGuiBldEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGuiBldEditor*)
   {
      ::TGuiBldEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGuiBldEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGuiBldEditor", ::TGuiBldEditor::Class_Version(), "TGuiBldEditor.h", 39,
                  typeid(::TGuiBldEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGuiBldEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGuiBldEditor) );
      instance.SetNew(&new_TGuiBldEditor);
      instance.SetNewArray(&newArray_TGuiBldEditor);
      instance.SetDelete(&delete_TGuiBldEditor);
      instance.SetDeleteArray(&deleteArray_TGuiBldEditor);
      instance.SetDestructor(&destruct_TGuiBldEditor);
      instance.SetStreamerFunc(&streamer_TGuiBldEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGuiBldEditor*)
   {
      return GenerateInitInstanceLocal((::TGuiBldEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGuiBldEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGuiBldGeometryFrame(void *p);
   static void deleteArray_TGuiBldGeometryFrame(void *p);
   static void destruct_TGuiBldGeometryFrame(void *p);
   static void streamer_TGuiBldGeometryFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGuiBldGeometryFrame*)
   {
      ::TGuiBldGeometryFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGuiBldGeometryFrame >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGuiBldGeometryFrame", ::TGuiBldGeometryFrame::Class_Version(), "TGuiBldGeometryFrame.h", 34,
                  typeid(::TGuiBldGeometryFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGuiBldGeometryFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGuiBldGeometryFrame) );
      instance.SetDelete(&delete_TGuiBldGeometryFrame);
      instance.SetDeleteArray(&deleteArray_TGuiBldGeometryFrame);
      instance.SetDestructor(&destruct_TGuiBldGeometryFrame);
      instance.SetStreamerFunc(&streamer_TGuiBldGeometryFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGuiBldGeometryFrame*)
   {
      return GenerateInitInstanceLocal((::TGuiBldGeometryFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGuiBldGeometryFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGuiBldHintsButton(void *p);
   static void deleteArray_TGuiBldHintsButton(void *p);
   static void destruct_TGuiBldHintsButton(void *p);
   static void streamer_TGuiBldHintsButton(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGuiBldHintsButton*)
   {
      ::TGuiBldHintsButton *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGuiBldHintsButton >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGuiBldHintsButton", ::TGuiBldHintsButton::Class_Version(), "TGuiBldHintsButton.h", 27,
                  typeid(::TGuiBldHintsButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGuiBldHintsButton::Dictionary, isa_proxy, 16,
                  sizeof(::TGuiBldHintsButton) );
      instance.SetDelete(&delete_TGuiBldHintsButton);
      instance.SetDeleteArray(&deleteArray_TGuiBldHintsButton);
      instance.SetDestructor(&destruct_TGuiBldHintsButton);
      instance.SetStreamerFunc(&streamer_TGuiBldHintsButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGuiBldHintsButton*)
   {
      return GenerateInitInstanceLocal((::TGuiBldHintsButton*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGuiBldHintsButton*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGuiBldHintsEditor(void *p);
   static void deleteArray_TGuiBldHintsEditor(void *p);
   static void destruct_TGuiBldHintsEditor(void *p);
   static void streamer_TGuiBldHintsEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGuiBldHintsEditor*)
   {
      ::TGuiBldHintsEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGuiBldHintsEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGuiBldHintsEditor", ::TGuiBldHintsEditor::Class_Version(), "TGuiBldHintsEditor.h", 34,
                  typeid(::TGuiBldHintsEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGuiBldHintsEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGuiBldHintsEditor) );
      instance.SetDelete(&delete_TGuiBldHintsEditor);
      instance.SetDeleteArray(&deleteArray_TGuiBldHintsEditor);
      instance.SetDestructor(&destruct_TGuiBldHintsEditor);
      instance.SetStreamerFunc(&streamer_TGuiBldHintsEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGuiBldHintsEditor*)
   {
      return GenerateInitInstanceLocal((::TGuiBldHintsEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGuiBldHintsEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGuiBldNameFrame(void *p);
   static void deleteArray_TGuiBldNameFrame(void *p);
   static void destruct_TGuiBldNameFrame(void *p);
   static void streamer_TGuiBldNameFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGuiBldNameFrame*)
   {
      ::TGuiBldNameFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGuiBldNameFrame >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGuiBldNameFrame", ::TGuiBldNameFrame::Class_Version(), "TGuiBldNameFrame.h", 39,
                  typeid(::TGuiBldNameFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGuiBldNameFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGuiBldNameFrame) );
      instance.SetDelete(&delete_TGuiBldNameFrame);
      instance.SetDeleteArray(&deleteArray_TGuiBldNameFrame);
      instance.SetDestructor(&destruct_TGuiBldNameFrame);
      instance.SetStreamerFunc(&streamer_TGuiBldNameFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGuiBldNameFrame*)
   {
      return GenerateInitInstanceLocal((::TGuiBldNameFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGuiBldNameFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootGuiBuilder(void *p = 0);
   static void *newArray_TRootGuiBuilder(Long_t size, void *p);
   static void delete_TRootGuiBuilder(void *p);
   static void deleteArray_TRootGuiBuilder(void *p);
   static void destruct_TRootGuiBuilder(void *p);
   static void streamer_TRootGuiBuilder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootGuiBuilder*)
   {
      ::TRootGuiBuilder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootGuiBuilder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootGuiBuilder", ::TRootGuiBuilder::Class_Version(), "TRootGuiBuilder.h", 65,
                  typeid(::TRootGuiBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootGuiBuilder::Dictionary, isa_proxy, 16,
                  sizeof(::TRootGuiBuilder) );
      instance.SetNew(&new_TRootGuiBuilder);
      instance.SetNewArray(&newArray_TRootGuiBuilder);
      instance.SetDelete(&delete_TRootGuiBuilder);
      instance.SetDeleteArray(&deleteArray_TRootGuiBuilder);
      instance.SetDestructor(&destruct_TRootGuiBuilder);
      instance.SetStreamerFunc(&streamer_TRootGuiBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootGuiBuilder*)
   {
      return GenerateInitInstanceLocal((::TRootGuiBuilder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRootGuiBuilder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGuiBldDragManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGuiBldDragManager::Class_Name()
{
   return "TGuiBldDragManager";
}

//______________________________________________________________________________
const char *TGuiBldDragManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldDragManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGuiBldDragManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldDragManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGuiBldDragManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldDragManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGuiBldDragManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldDragManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGuiBldEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGuiBldEditor::Class_Name()
{
   return "TGuiBldEditor";
}

//______________________________________________________________________________
const char *TGuiBldEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGuiBldEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGuiBldEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGuiBldEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGuiBldGeometryFrame::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGuiBldGeometryFrame::Class_Name()
{
   return "TGuiBldGeometryFrame";
}

//______________________________________________________________________________
const char *TGuiBldGeometryFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldGeometryFrame*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGuiBldGeometryFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldGeometryFrame*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGuiBldGeometryFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldGeometryFrame*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGuiBldGeometryFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldGeometryFrame*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGuiBldHintsButton::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGuiBldHintsButton::Class_Name()
{
   return "TGuiBldHintsButton";
}

//______________________________________________________________________________
const char *TGuiBldHintsButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldHintsButton*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGuiBldHintsButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldHintsButton*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGuiBldHintsButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldHintsButton*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGuiBldHintsButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldHintsButton*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGuiBldHintsEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGuiBldHintsEditor::Class_Name()
{
   return "TGuiBldHintsEditor";
}

//______________________________________________________________________________
const char *TGuiBldHintsEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldHintsEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGuiBldHintsEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldHintsEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGuiBldHintsEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldHintsEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGuiBldHintsEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldHintsEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGuiBldNameFrame::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGuiBldNameFrame::Class_Name()
{
   return "TGuiBldNameFrame";
}

//______________________________________________________________________________
const char *TGuiBldNameFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldNameFrame*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGuiBldNameFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldNameFrame*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGuiBldNameFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldNameFrame*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGuiBldNameFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGuiBldNameFrame*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootGuiBuilder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootGuiBuilder::Class_Name()
{
   return "TRootGuiBuilder";
}

//______________________________________________________________________________
const char *TRootGuiBuilder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootGuiBuilder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootGuiBuilder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootGuiBuilder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootGuiBuilder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootGuiBuilder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootGuiBuilder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootGuiBuilder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGuiBldDragManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGuiBldDragManager.

   TVirtualDragManager::Streamer(R__b);
   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGuiBldDragManager(void *p) {
      return  p ? new(p) ::TGuiBldDragManager : new ::TGuiBldDragManager;
   }
   static void *newArray_TGuiBldDragManager(Long_t nElements, void *p) {
      return p ? new(p) ::TGuiBldDragManager[nElements] : new ::TGuiBldDragManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGuiBldDragManager(void *p) {
      delete ((::TGuiBldDragManager*)p);
   }
   static void deleteArray_TGuiBldDragManager(void *p) {
      delete [] ((::TGuiBldDragManager*)p);
   }
   static void destruct_TGuiBldDragManager(void *p) {
      typedef ::TGuiBldDragManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGuiBldDragManager(TBuffer &buf, void *obj) {
      ((::TGuiBldDragManager*)obj)->::TGuiBldDragManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGuiBldDragManager

//______________________________________________________________________________
void TGuiBldEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGuiBldEditor.

   TGVerticalFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGuiBldEditor(void *p) {
      return  p ? new(p) ::TGuiBldEditor : new ::TGuiBldEditor;
   }
   static void *newArray_TGuiBldEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGuiBldEditor[nElements] : new ::TGuiBldEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGuiBldEditor(void *p) {
      delete ((::TGuiBldEditor*)p);
   }
   static void deleteArray_TGuiBldEditor(void *p) {
      delete [] ((::TGuiBldEditor*)p);
   }
   static void destruct_TGuiBldEditor(void *p) {
      typedef ::TGuiBldEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGuiBldEditor(TBuffer &buf, void *obj) {
      ((::TGuiBldEditor*)obj)->::TGuiBldEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGuiBldEditor

//______________________________________________________________________________
void TGuiBldGeometryFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGuiBldGeometryFrame.

   TGVerticalFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGuiBldGeometryFrame(void *p) {
      delete ((::TGuiBldGeometryFrame*)p);
   }
   static void deleteArray_TGuiBldGeometryFrame(void *p) {
      delete [] ((::TGuiBldGeometryFrame*)p);
   }
   static void destruct_TGuiBldGeometryFrame(void *p) {
      typedef ::TGuiBldGeometryFrame current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGuiBldGeometryFrame(TBuffer &buf, void *obj) {
      ((::TGuiBldGeometryFrame*)obj)->::TGuiBldGeometryFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGuiBldGeometryFrame

//______________________________________________________________________________
void TGuiBldHintsButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGuiBldHintsButton.

   TGButton::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGuiBldHintsButton(void *p) {
      delete ((::TGuiBldHintsButton*)p);
   }
   static void deleteArray_TGuiBldHintsButton(void *p) {
      delete [] ((::TGuiBldHintsButton*)p);
   }
   static void destruct_TGuiBldHintsButton(void *p) {
      typedef ::TGuiBldHintsButton current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGuiBldHintsButton(TBuffer &buf, void *obj) {
      ((::TGuiBldHintsButton*)obj)->::TGuiBldHintsButton::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGuiBldHintsButton

//______________________________________________________________________________
void TGuiBldHintsEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGuiBldHintsEditor.

   TGVerticalFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGuiBldHintsEditor(void *p) {
      delete ((::TGuiBldHintsEditor*)p);
   }
   static void deleteArray_TGuiBldHintsEditor(void *p) {
      delete [] ((::TGuiBldHintsEditor*)p);
   }
   static void destruct_TGuiBldHintsEditor(void *p) {
      typedef ::TGuiBldHintsEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGuiBldHintsEditor(TBuffer &buf, void *obj) {
      ((::TGuiBldHintsEditor*)obj)->::TGuiBldHintsEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGuiBldHintsEditor

//______________________________________________________________________________
void TGuiBldNameFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGuiBldNameFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGuiBldNameFrame(void *p) {
      delete ((::TGuiBldNameFrame*)p);
   }
   static void deleteArray_TGuiBldNameFrame(void *p) {
      delete [] ((::TGuiBldNameFrame*)p);
   }
   static void destruct_TGuiBldNameFrame(void *p) {
      typedef ::TGuiBldNameFrame current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGuiBldNameFrame(TBuffer &buf, void *obj) {
      ((::TGuiBldNameFrame*)obj)->::TGuiBldNameFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGuiBldNameFrame

//______________________________________________________________________________
void TRootGuiBuilder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootGuiBuilder.

   TGuiBuilder::Streamer(R__b);
   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootGuiBuilder(void *p) {
      return  p ? new(p) ::TRootGuiBuilder : new ::TRootGuiBuilder;
   }
   static void *newArray_TRootGuiBuilder(Long_t nElements, void *p) {
      return p ? new(p) ::TRootGuiBuilder[nElements] : new ::TRootGuiBuilder[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootGuiBuilder(void *p) {
      delete ((::TRootGuiBuilder*)p);
   }
   static void deleteArray_TRootGuiBuilder(void *p) {
      delete [] ((::TRootGuiBuilder*)p);
   }
   static void destruct_TRootGuiBuilder(void *p) {
      typedef ::TRootGuiBuilder current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootGuiBuilder(TBuffer &buf, void *obj) {
      ((::TRootGuiBuilder*)obj)->::TRootGuiBuilder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootGuiBuilder

namespace {
  void TriggerDictionaryInitialization_libGuiBld_Impl() {
    static const char* headers[] = {
"TGuiBldDragManager.h",
"TGuiBldEditor.h",
"TGuiBldGeometryFrame.h",
"TGuiBldHintsButton.h",
"TGuiBldHintsEditor.h",
"TGuiBldNameFrame.h",
"TRootGuiBuilder.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGuiBld dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(drag and drop manager)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGuiBldDragManager.h")))  TGuiBldDragManager;
class __attribute__((annotate(R"ATTRDUMP(frame property editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGuiBldEditor.h")))  TGuiBldEditor;
class __attribute__((annotate(R"ATTRDUMP(frame geometry editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGuiBldGeometryFrame.h")))  TGuiBldGeometryFrame;
class __attribute__((annotate(R"ATTRDUMP(Button for editing layout hints in GUI Builder)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGuiBldHintsButton.h")))  TGuiBldHintsButton;
class __attribute__((annotate(R"ATTRDUMP(layout hints editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGuiBldHintsEditor.h")))  TGuiBldHintsEditor;
class __attribute__((annotate(R"ATTRDUMP(frame name editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGuiBldNameFrame.h")))  TGuiBldNameFrame;
class __attribute__((annotate(R"ATTRDUMP(ROOT GUI Builder)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TRootGuiBuilder.h")))  TRootGuiBuilder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGuiBld dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGuiBldDragManager.h"
#include "TGuiBldEditor.h"
#include "TGuiBldGeometryFrame.h"
#include "TGuiBldHintsButton.h"
#include "TGuiBldHintsEditor.h"
#include "TGuiBldNameFrame.h"
#include "TRootGuiBuilder.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TGuiBldDragManager", payloadCode, "@",
"TGuiBldEditor", payloadCode, "@",
"TGuiBldGeometryFrame", payloadCode, "@",
"TGuiBldHintsButton", payloadCode, "@",
"TGuiBldHintsEditor", payloadCode, "@",
"TGuiBldNameFrame", payloadCode, "@",
"TRootGuiBuilder", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGuiBld",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGuiBld_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGuiBld_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGuiBld() {
  TriggerDictionaryInitialization_libGuiBld_Impl();
}
