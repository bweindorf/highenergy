// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__QtGSI

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
#include "TQApplication.h"
#include "TQCanvasImp.h"
#include "TQCanvasMenu.h"
#include "TQRootApplication.h"
#include "TQRootCanvas.h"
#include "TQRootDialog.h"
#include "TQRootGuiFactory.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TQApplication(void *p = 0);
   static void *newArray_TQApplication(Long_t size, void *p);
   static void delete_TQApplication(void *p);
   static void deleteArray_TQApplication(void *p);
   static void destruct_TQApplication(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQApplication*)
   {
      ::TQApplication *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQApplication >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQApplication", ::TQApplication::Class_Version(), "TQApplication.h", 28,
                  typeid(::TQApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQApplication::Dictionary, isa_proxy, 4,
                  sizeof(::TQApplication) );
      instance.SetNew(&new_TQApplication);
      instance.SetNewArray(&newArray_TQApplication);
      instance.SetDelete(&delete_TQApplication);
      instance.SetDeleteArray(&deleteArray_TQApplication);
      instance.SetDestructor(&destruct_TQApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQApplication*)
   {
      return GenerateInitInstanceLocal((::TQApplication*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQApplication*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQCanvasImp(void *p = 0);
   static void *newArray_TQCanvasImp(Long_t size, void *p);
   static void delete_TQCanvasImp(void *p);
   static void deleteArray_TQCanvasImp(void *p);
   static void destruct_TQCanvasImp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQCanvasImp*)
   {
      ::TQCanvasImp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQCanvasImp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQCanvasImp", ::TQCanvasImp::Class_Version(), "TQCanvasImp.h", 28,
                  typeid(::TQCanvasImp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQCanvasImp::Dictionary, isa_proxy, 4,
                  sizeof(::TQCanvasImp) );
      instance.SetNew(&new_TQCanvasImp);
      instance.SetNewArray(&newArray_TQCanvasImp);
      instance.SetDelete(&delete_TQCanvasImp);
      instance.SetDeleteArray(&deleteArray_TQCanvasImp);
      instance.SetDestructor(&destruct_TQCanvasImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQCanvasImp*)
   {
      return GenerateInitInstanceLocal((::TQCanvasImp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQCanvasImp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQCanvasMenu(void *p = 0);
   static void *newArray_TQCanvasMenu(Long_t size, void *p);
   static void delete_TQCanvasMenu(void *p);
   static void deleteArray_TQCanvasMenu(void *p);
   static void destruct_TQCanvasMenu(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQCanvasMenu*)
   {
      ::TQCanvasMenu *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQCanvasMenu >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQCanvasMenu", ::TQCanvasMenu::Class_Version(), "TQCanvasMenu.h", 48,
                  typeid(::TQCanvasMenu), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQCanvasMenu::Dictionary, isa_proxy, 4,
                  sizeof(::TQCanvasMenu) );
      instance.SetNew(&new_TQCanvasMenu);
      instance.SetNewArray(&newArray_TQCanvasMenu);
      instance.SetDelete(&delete_TQCanvasMenu);
      instance.SetDeleteArray(&deleteArray_TQCanvasMenu);
      instance.SetDestructor(&destruct_TQCanvasMenu);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQCanvasMenu*)
   {
      return GenerateInitInstanceLocal((::TQCanvasMenu*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQCanvasMenu*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQRootApplication(void *p);
   static void deleteArray_TQRootApplication(void *p);
   static void destruct_TQRootApplication(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQRootApplication*)
   {
      ::TQRootApplication *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQRootApplication >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQRootApplication", ::TQRootApplication::Class_Version(), "TQRootApplication.h", 37,
                  typeid(::TQRootApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQRootApplication::Dictionary, isa_proxy, 4,
                  sizeof(::TQRootApplication) );
      instance.SetDelete(&delete_TQRootApplication);
      instance.SetDeleteArray(&deleteArray_TQRootApplication);
      instance.SetDestructor(&destruct_TQRootApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQRootApplication*)
   {
      return GenerateInitInstanceLocal((::TQRootApplication*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQRootApplication*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQRootCanvas(void *p = 0);
   static void *newArray_TQRootCanvas(Long_t size, void *p);
   static void delete_TQRootCanvas(void *p);
   static void deleteArray_TQRootCanvas(void *p);
   static void destruct_TQRootCanvas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQRootCanvas*)
   {
      ::TQRootCanvas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQRootCanvas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQRootCanvas", ::TQRootCanvas::Class_Version(), "TQRootCanvas.h", 57,
                  typeid(::TQRootCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQRootCanvas::Dictionary, isa_proxy, 4,
                  sizeof(::TQRootCanvas) );
      instance.SetNew(&new_TQRootCanvas);
      instance.SetNewArray(&newArray_TQRootCanvas);
      instance.SetDelete(&delete_TQRootCanvas);
      instance.SetDeleteArray(&deleteArray_TQRootCanvas);
      instance.SetDestructor(&destruct_TQRootCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQRootCanvas*)
   {
      return GenerateInitInstanceLocal((::TQRootCanvas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQRootCanvas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQRootDialog(void *p);
   static void deleteArray_TQRootDialog(void *p);
   static void destruct_TQRootDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQRootDialog*)
   {
      ::TQRootDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQRootDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQRootDialog", ::TQRootDialog::Class_Version(), "TQRootDialog.h", 57,
                  typeid(::TQRootDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQRootDialog::Dictionary, isa_proxy, 4,
                  sizeof(::TQRootDialog) );
      instance.SetDelete(&delete_TQRootDialog);
      instance.SetDeleteArray(&deleteArray_TQRootDialog);
      instance.SetDestructor(&destruct_TQRootDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQRootDialog*)
   {
      return GenerateInitInstanceLocal((::TQRootDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQRootDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQRootGuiFactory(void *p = 0);
   static void *newArray_TQRootGuiFactory(Long_t size, void *p);
   static void delete_TQRootGuiFactory(void *p);
   static void deleteArray_TQRootGuiFactory(void *p);
   static void destruct_TQRootGuiFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQRootGuiFactory*)
   {
      ::TQRootGuiFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQRootGuiFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQRootGuiFactory", ::TQRootGuiFactory::Class_Version(), "TQRootGuiFactory.h", 39,
                  typeid(::TQRootGuiFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQRootGuiFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TQRootGuiFactory) );
      instance.SetNew(&new_TQRootGuiFactory);
      instance.SetNewArray(&newArray_TQRootGuiFactory);
      instance.SetDelete(&delete_TQRootGuiFactory);
      instance.SetDeleteArray(&deleteArray_TQRootGuiFactory);
      instance.SetDestructor(&destruct_TQRootGuiFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQRootGuiFactory*)
   {
      return GenerateInitInstanceLocal((::TQRootGuiFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQRootGuiFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TQApplication::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQApplication::Class_Name()
{
   return "TQApplication";
}

//______________________________________________________________________________
const char *TQApplication::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQApplication*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQApplication::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQApplication*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQApplication::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQApplication*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQApplication::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQApplication*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQCanvasImp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQCanvasImp::Class_Name()
{
   return "TQCanvasImp";
}

//______________________________________________________________________________
const char *TQCanvasImp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQCanvasImp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQCanvasImp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQCanvasImp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQCanvasImp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQCanvasImp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQCanvasImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQCanvasImp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQCanvasMenu::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQCanvasMenu::Class_Name()
{
   return "TQCanvasMenu";
}

//______________________________________________________________________________
const char *TQCanvasMenu::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQCanvasMenu*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQCanvasMenu::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQCanvasMenu*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQCanvasMenu::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQCanvasMenu*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQCanvasMenu::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQCanvasMenu*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQRootApplication::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQRootApplication::Class_Name()
{
   return "TQRootApplication";
}

//______________________________________________________________________________
const char *TQRootApplication::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQRootApplication*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQRootApplication::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQRootApplication*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQRootApplication::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQRootApplication*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQRootApplication::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQRootApplication*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQRootCanvas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQRootCanvas::Class_Name()
{
   return "TQRootCanvas";
}

//______________________________________________________________________________
const char *TQRootCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQRootCanvas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQRootCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQRootCanvas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQRootCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQRootCanvas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQRootCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQRootCanvas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQRootDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQRootDialog::Class_Name()
{
   return "TQRootDialog";
}

//______________________________________________________________________________
const char *TQRootDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQRootDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQRootDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQRootDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQRootDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQRootDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQRootDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQRootDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQRootGuiFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQRootGuiFactory::Class_Name()
{
   return "TQRootGuiFactory";
}

//______________________________________________________________________________
const char *TQRootGuiFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQRootGuiFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQRootGuiFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQRootGuiFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQRootGuiFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQRootGuiFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQRootGuiFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQRootGuiFactory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TQApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQApplication.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQApplication::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQApplication::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQApplication(void *p) {
      return  p ? new(p) ::TQApplication : new ::TQApplication;
   }
   static void *newArray_TQApplication(Long_t nElements, void *p) {
      return p ? new(p) ::TQApplication[nElements] : new ::TQApplication[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQApplication(void *p) {
      delete ((::TQApplication*)p);
   }
   static void deleteArray_TQApplication(void *p) {
      delete [] ((::TQApplication*)p);
   }
   static void destruct_TQApplication(void *p) {
      typedef ::TQApplication current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQApplication

//______________________________________________________________________________
void TQCanvasImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQCanvasImp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQCanvasImp::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQCanvasImp::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQCanvasImp(void *p) {
      return  p ? new(p) ::TQCanvasImp : new ::TQCanvasImp;
   }
   static void *newArray_TQCanvasImp(Long_t nElements, void *p) {
      return p ? new(p) ::TQCanvasImp[nElements] : new ::TQCanvasImp[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQCanvasImp(void *p) {
      delete ((::TQCanvasImp*)p);
   }
   static void deleteArray_TQCanvasImp(void *p) {
      delete [] ((::TQCanvasImp*)p);
   }
   static void destruct_TQCanvasImp(void *p) {
      typedef ::TQCanvasImp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQCanvasImp

//______________________________________________________________________________
void TQCanvasMenu::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQCanvasMenu.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQCanvasMenu::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQCanvasMenu::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQCanvasMenu(void *p) {
      return  p ? new(p) ::TQCanvasMenu : new ::TQCanvasMenu;
   }
   static void *newArray_TQCanvasMenu(Long_t nElements, void *p) {
      return p ? new(p) ::TQCanvasMenu[nElements] : new ::TQCanvasMenu[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQCanvasMenu(void *p) {
      delete ((::TQCanvasMenu*)p);
   }
   static void deleteArray_TQCanvasMenu(void *p) {
      delete [] ((::TQCanvasMenu*)p);
   }
   static void destruct_TQCanvasMenu(void *p) {
      typedef ::TQCanvasMenu current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQCanvasMenu

//______________________________________________________________________________
void TQRootApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQRootApplication.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQRootApplication::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQRootApplication::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQRootApplication(void *p) {
      delete ((::TQRootApplication*)p);
   }
   static void deleteArray_TQRootApplication(void *p) {
      delete [] ((::TQRootApplication*)p);
   }
   static void destruct_TQRootApplication(void *p) {
      typedef ::TQRootApplication current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQRootApplication

//______________________________________________________________________________
void TQRootCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQRootCanvas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQRootCanvas::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQRootCanvas::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQRootCanvas(void *p) {
      return  p ? new(p) ::TQRootCanvas : new ::TQRootCanvas;
   }
   static void *newArray_TQRootCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::TQRootCanvas[nElements] : new ::TQRootCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQRootCanvas(void *p) {
      delete ((::TQRootCanvas*)p);
   }
   static void deleteArray_TQRootCanvas(void *p) {
      delete [] ((::TQRootCanvas*)p);
   }
   static void destruct_TQRootCanvas(void *p) {
      typedef ::TQRootCanvas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQRootCanvas

//______________________________________________________________________________
void TQRootDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQRootDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQRootDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQRootDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQRootDialog(void *p) {
      delete ((::TQRootDialog*)p);
   }
   static void deleteArray_TQRootDialog(void *p) {
      delete [] ((::TQRootDialog*)p);
   }
   static void destruct_TQRootDialog(void *p) {
      typedef ::TQRootDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQRootDialog

//______________________________________________________________________________
void TQRootGuiFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQRootGuiFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQRootGuiFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQRootGuiFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQRootGuiFactory(void *p) {
      return  p ? new(p) ::TQRootGuiFactory : new ::TQRootGuiFactory;
   }
   static void *newArray_TQRootGuiFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TQRootGuiFactory[nElements] : new ::TQRootGuiFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQRootGuiFactory(void *p) {
      delete ((::TQRootGuiFactory*)p);
   }
   static void deleteArray_TQRootGuiFactory(void *p) {
      delete [] ((::TQRootGuiFactory*)p);
   }
   static void destruct_TQRootGuiFactory(void *p) {
      typedef ::TQRootGuiFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQRootGuiFactory

namespace {
  void TriggerDictionaryInitialization_libQtGSI_Impl() {
    static const char* headers[] = {
"TQApplication.h",
"TQCanvasImp.h",
"TQCanvasMenu.h",
"TQRootApplication.h",
"TQRootCanvas.h",
"TQRootDialog.h",
"TQRootGuiFactory.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/qt4",
"/usr/include/qt4/QtGui",
"/usr/include/qt4/QtCore",
"/usr/include/qt4/Qt3Support",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libQtGSI dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(creates ROOT environment with the Qt windowing system)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQApplication.h")))  TQApplication;
class __attribute__((annotate(R"ATTRDUMP(ABC describing Qt GUI independent main window)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQCanvasImp.h")))  TQCanvasImp;
class __attribute__((annotate(R"ATTRDUMP(interface to Qt based context sensitive popup menus)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQCanvasMenu.h")))  TQCanvasMenu;
class __attribute__((annotate(R"ATTRDUMP(creates Qt environment interface with the ROOT windowing system)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQRootApplication.h")))  TQRootApplication;
class __attribute__((annotate(R"ATTRDUMP(interface to Qt eventloop to handle user input)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQRootCanvas.h")))  TQRootCanvas;
class __attribute__((annotate(R"ATTRDUMP(prompt for the arguments of an object's member function)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQRootDialog.h")))  TQRootDialog;
class __attribute__((annotate(R"ATTRDUMP(Qt ROOT Gui factory)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQRootGuiFactory.h")))  TQRootGuiFactory;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libQtGSI dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef QTVERS
  #define QTVERS 0x40807
#endif
#ifndef QT_GUI_LIB
  #define QT_GUI_LIB 1
#endif
#ifndef QT_CORE_LIB
  #define QT_CORE_LIB 1
#endif
#ifndef QT_DLL
  #define QT_DLL 1
#endif
#ifndef QT_THREAD_SUPPORT
  #define QT_THREAD_SUPPORT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TQApplication.h"
#include "TQCanvasImp.h"
#include "TQCanvasMenu.h"
#include "TQRootApplication.h"
#include "TQRootCanvas.h"
#include "TQRootDialog.h"
#include "TQRootGuiFactory.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TQApplication", payloadCode, "@",
"TQCanvasImp", payloadCode, "@",
"TQCanvasMenu", payloadCode, "@",
"TQRootApplication", payloadCode, "@",
"TQRootCanvas", payloadCode, "@",
"TQRootDialog", payloadCode, "@",
"TQRootGuiFactory", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libQtGSI",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libQtGSI_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libQtGSI_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libQtGSI() {
  TriggerDictionaryInitialization_libQtGSI_Impl();
}
