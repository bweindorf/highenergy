// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GQt

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
#include "TGQt.h"
#include "TQtApplication.h"
#include "TQtBrush.h"
#include "TQMimeTypes.h"
#include "TQtClientFilter.h"
#include "TQtClientWidget.h"
#include "TQtWidget.h"
#include "TQtMarker.h"
#include "TQtTimer.h"
#include "TQtRootSlot.h"
#include "TQtPadFont.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TQtClientWidget(void *p);
   static void deleteArray_TQtClientWidget(void *p);
   static void destruct_TQtClientWidget(void *p);
   static void streamer_TQtClientWidget(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtClientWidget*)
   {
      ::TQtClientWidget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQtClientWidget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQtClientWidget", ::TQtClientWidget::Class_Version(), "TQtClientWidget.h", 42,
                  typeid(::TQtClientWidget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQtClientWidget::Dictionary, isa_proxy, 16,
                  sizeof(::TQtClientWidget) );
      instance.SetDelete(&delete_TQtClientWidget);
      instance.SetDeleteArray(&deleteArray_TQtClientWidget);
      instance.SetDestructor(&destruct_TQtClientWidget);
      instance.SetStreamerFunc(&streamer_TQtClientWidget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtClientWidget*)
   {
      return GenerateInitInstanceLocal((::TQtClientWidget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtClientWidget*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGQt(void *p = 0);
   static void *newArray_TGQt(Long_t size, void *p);
   static void delete_TGQt(void *p);
   static void deleteArray_TGQt(void *p);
   static void destruct_TGQt(void *p);
   static void streamer_TGQt(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGQt*)
   {
      ::TGQt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGQt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGQt", ::TGQt::Class_Version(), "TGQt.h", 110,
                  typeid(::TGQt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGQt::Dictionary, isa_proxy, 16,
                  sizeof(::TGQt) );
      instance.SetNew(&new_TGQt);
      instance.SetNewArray(&newArray_TGQt);
      instance.SetDelete(&delete_TGQt);
      instance.SetDeleteArray(&deleteArray_TGQt);
      instance.SetDestructor(&destruct_TGQt);
      instance.SetStreamerFunc(&streamer_TGQt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGQt*)
   {
      return GenerateInitInstanceLocal((::TGQt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGQt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQtApplication(void *p = 0);
   static void *newArray_TQtApplication(Long_t size, void *p);
   static void delete_TQtApplication(void *p);
   static void deleteArray_TQtApplication(void *p);
   static void destruct_TQtApplication(void *p);
   static void streamer_TQtApplication(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtApplication*)
   {
      ::TQtApplication *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQtApplication >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQtApplication", ::TQtApplication::Class_Version(), "TQtApplication.h", 29,
                  typeid(::TQtApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQtApplication::Dictionary, isa_proxy, 16,
                  sizeof(::TQtApplication) );
      instance.SetNew(&new_TQtApplication);
      instance.SetNewArray(&newArray_TQtApplication);
      instance.SetDelete(&delete_TQtApplication);
      instance.SetDeleteArray(&deleteArray_TQtApplication);
      instance.SetDestructor(&destruct_TQtApplication);
      instance.SetStreamerFunc(&streamer_TQtApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtApplication*)
   {
      return GenerateInitInstanceLocal((::TQtApplication*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtApplication*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQtBrush(void *p = 0);
   static void *newArray_TQtBrush(Long_t size, void *p);
   static void delete_TQtBrush(void *p);
   static void deleteArray_TQtBrush(void *p);
   static void destruct_TQtBrush(void *p);
   static void streamer_TQtBrush(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtBrush*)
   {
      ::TQtBrush *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQtBrush >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQtBrush", ::TQtBrush::Class_Version(), "TQtBrush.h", 35,
                  typeid(::TQtBrush), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQtBrush::Dictionary, isa_proxy, 16,
                  sizeof(::TQtBrush) );
      instance.SetNew(&new_TQtBrush);
      instance.SetNewArray(&newArray_TQtBrush);
      instance.SetDelete(&delete_TQtBrush);
      instance.SetDeleteArray(&deleteArray_TQtBrush);
      instance.SetDestructor(&destruct_TQtBrush);
      instance.SetStreamerFunc(&streamer_TQtBrush);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtBrush*)
   {
      return GenerateInitInstanceLocal((::TQtBrush*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtBrush*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQMimeTypes(void *p);
   static void deleteArray_TQMimeTypes(void *p);
   static void destruct_TQMimeTypes(void *p);
   static void streamer_TQMimeTypes(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQMimeTypes*)
   {
      ::TQMimeTypes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQMimeTypes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQMimeTypes", ::TQMimeTypes::Class_Version(), "TQMimeTypes.h", 69,
                  typeid(::TQMimeTypes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQMimeTypes::Dictionary, isa_proxy, 16,
                  sizeof(::TQMimeTypes) );
      instance.SetDelete(&delete_TQMimeTypes);
      instance.SetDeleteArray(&deleteArray_TQMimeTypes);
      instance.SetDestructor(&destruct_TQMimeTypes);
      instance.SetStreamerFunc(&streamer_TQMimeTypes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQMimeTypes*)
   {
      return GenerateInitInstanceLocal((::TQMimeTypes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQMimeTypes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQtClientFilter(void *p = 0);
   static void *newArray_TQtClientFilter(Long_t size, void *p);
   static void delete_TQtClientFilter(void *p);
   static void deleteArray_TQtClientFilter(void *p);
   static void destruct_TQtClientFilter(void *p);
   static void streamer_TQtClientFilter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtClientFilter*)
   {
      ::TQtClientFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQtClientFilter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQtClientFilter", ::TQtClientFilter::Class_Version(), "TQtClientFilter.h", 42,
                  typeid(::TQtClientFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQtClientFilter::Dictionary, isa_proxy, 16,
                  sizeof(::TQtClientFilter) );
      instance.SetNew(&new_TQtClientFilter);
      instance.SetNewArray(&newArray_TQtClientFilter);
      instance.SetDelete(&delete_TQtClientFilter);
      instance.SetDeleteArray(&deleteArray_TQtClientFilter);
      instance.SetDestructor(&destruct_TQtClientFilter);
      instance.SetStreamerFunc(&streamer_TQtClientFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtClientFilter*)
   {
      return GenerateInitInstanceLocal((::TQtClientFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtClientFilter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQtWidget(void *p = 0);
   static void *newArray_TQtWidget(Long_t size, void *p);
   static void delete_TQtWidget(void *p);
   static void deleteArray_TQtWidget(void *p);
   static void destruct_TQtWidget(void *p);
   static void streamer_TQtWidget(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtWidget*)
   {
      ::TQtWidget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQtWidget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQtWidget", ::TQtWidget::Class_Version(), "TQtWidget.h", 98,
                  typeid(::TQtWidget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQtWidget::Dictionary, isa_proxy, 16,
                  sizeof(::TQtWidget) );
      instance.SetNew(&new_TQtWidget);
      instance.SetNewArray(&newArray_TQtWidget);
      instance.SetDelete(&delete_TQtWidget);
      instance.SetDeleteArray(&deleteArray_TQtWidget);
      instance.SetDestructor(&destruct_TQtWidget);
      instance.SetStreamerFunc(&streamer_TQtWidget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtWidget*)
   {
      return GenerateInitInstanceLocal((::TQtWidget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtWidget*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQtMarker(void *p = 0);
   static void *newArray_TQtMarker(Long_t size, void *p);
   static void delete_TQtMarker(void *p);
   static void deleteArray_TQtMarker(void *p);
   static void destruct_TQtMarker(void *p);
   static void streamer_TQtMarker(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtMarker*)
   {
      ::TQtMarker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQtMarker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQtMarker", ::TQtMarker::Class_Version(), "TQtMarker.h", 35,
                  typeid(::TQtMarker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQtMarker::Dictionary, isa_proxy, 16,
                  sizeof(::TQtMarker) );
      instance.SetNew(&new_TQtMarker);
      instance.SetNewArray(&newArray_TQtMarker);
      instance.SetDelete(&delete_TQtMarker);
      instance.SetDeleteArray(&deleteArray_TQtMarker);
      instance.SetDestructor(&destruct_TQtMarker);
      instance.SetStreamerFunc(&streamer_TQtMarker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtMarker*)
   {
      return GenerateInitInstanceLocal((::TQtMarker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtMarker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQtTimer(void *p);
   static void deleteArray_TQtTimer(void *p);
   static void destruct_TQtTimer(void *p);
   static void streamer_TQtTimer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtTimer*)
   {
      ::TQtTimer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQtTimer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQtTimer", ::TQtTimer::Class_Version(), "TQtTimer.h", 29,
                  typeid(::TQtTimer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQtTimer::Dictionary, isa_proxy, 16,
                  sizeof(::TQtTimer) );
      instance.SetDelete(&delete_TQtTimer);
      instance.SetDeleteArray(&deleteArray_TQtTimer);
      instance.SetDestructor(&destruct_TQtTimer);
      instance.SetStreamerFunc(&streamer_TQtTimer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtTimer*)
   {
      return GenerateInitInstanceLocal((::TQtTimer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtTimer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TQtRootSlot_Dictionary();
   static void TQtRootSlot_TClassManip(TClass*);
   static void delete_TQtRootSlot(void *p);
   static void deleteArray_TQtRootSlot(void *p);
   static void destruct_TQtRootSlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtRootSlot*)
   {
      ::TQtRootSlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TQtRootSlot));
      static ::ROOT::TGenericClassInfo 
         instance("TQtRootSlot", "TQtRootSlot.h", 39,
                  typeid(::TQtRootSlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TQtRootSlot_Dictionary, isa_proxy, 0,
                  sizeof(::TQtRootSlot) );
      instance.SetDelete(&delete_TQtRootSlot);
      instance.SetDeleteArray(&deleteArray_TQtRootSlot);
      instance.SetDestructor(&destruct_TQtRootSlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtRootSlot*)
   {
      return GenerateInitInstanceLocal((::TQtRootSlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtRootSlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TQtRootSlot_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TQtRootSlot*)0x0)->GetClass();
      TQtRootSlot_TClassManip(theClass);
   return theClass;
   }

   static void TQtRootSlot_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TQtPadFont(void *p = 0);
   static void *newArray_TQtPadFont(Long_t size, void *p);
   static void delete_TQtPadFont(void *p);
   static void deleteArray_TQtPadFont(void *p);
   static void destruct_TQtPadFont(void *p);
   static void streamer_TQtPadFont(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtPadFont*)
   {
      ::TQtPadFont *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQtPadFont >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQtPadFont", ::TQtPadFont::Class_Version(), "TQtPadFont.h", 23,
                  typeid(::TQtPadFont), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQtPadFont::Dictionary, isa_proxy, 16,
                  sizeof(::TQtPadFont) );
      instance.SetNew(&new_TQtPadFont);
      instance.SetNewArray(&newArray_TQtPadFont);
      instance.SetDelete(&delete_TQtPadFont);
      instance.SetDeleteArray(&deleteArray_TQtPadFont);
      instance.SetDestructor(&destruct_TQtPadFont);
      instance.SetStreamerFunc(&streamer_TQtPadFont);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtPadFont*)
   {
      return GenerateInitInstanceLocal((::TQtPadFont*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtPadFont*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TQtClientWidget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQtClientWidget::Class_Name()
{
   return "TQtClientWidget";
}

//______________________________________________________________________________
const char *TQtClientWidget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtClientWidget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQtClientWidget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtClientWidget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQtClientWidget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtClientWidget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQtClientWidget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtClientWidget*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGQt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGQt::Class_Name()
{
   return "TGQt";
}

//______________________________________________________________________________
const char *TGQt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGQt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGQt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGQt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGQt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGQt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGQt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGQt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQtApplication::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQtApplication::Class_Name()
{
   return "TQtApplication";
}

//______________________________________________________________________________
const char *TQtApplication::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtApplication*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQtApplication::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtApplication*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQtApplication::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtApplication*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQtApplication::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtApplication*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQtBrush::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQtBrush::Class_Name()
{
   return "TQtBrush";
}

//______________________________________________________________________________
const char *TQtBrush::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtBrush*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQtBrush::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtBrush*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQtBrush::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtBrush*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQtBrush::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtBrush*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQMimeTypes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQMimeTypes::Class_Name()
{
   return "TQMimeTypes";
}

//______________________________________________________________________________
const char *TQMimeTypes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQMimeTypes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQMimeTypes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQMimeTypes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQMimeTypes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQMimeTypes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQMimeTypes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQMimeTypes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQtClientFilter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQtClientFilter::Class_Name()
{
   return "TQtClientFilter";
}

//______________________________________________________________________________
const char *TQtClientFilter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtClientFilter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQtClientFilter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtClientFilter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQtClientFilter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtClientFilter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQtClientFilter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtClientFilter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQtWidget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQtWidget::Class_Name()
{
   return "TQtWidget";
}

//______________________________________________________________________________
const char *TQtWidget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtWidget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQtWidget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtWidget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQtWidget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtWidget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQtWidget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtWidget*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQtMarker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQtMarker::Class_Name()
{
   return "TQtMarker";
}

//______________________________________________________________________________
const char *TQtMarker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtMarker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQtMarker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtMarker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQtMarker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtMarker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQtMarker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtMarker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQtTimer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQtTimer::Class_Name()
{
   return "TQtTimer";
}

//______________________________________________________________________________
const char *TQtTimer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtTimer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQtTimer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtTimer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQtTimer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtTimer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQtTimer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtTimer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQtPadFont::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQtPadFont::Class_Name()
{
   return "TQtPadFont";
}

//______________________________________________________________________________
const char *TQtPadFont::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtPadFont*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQtPadFont::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtPadFont*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQtPadFont::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtPadFont*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQtPadFont::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtPadFont*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TQtClientWidget::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQtClientWidget.

   ::Error("TQtClientWidget::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQtClientWidget(void *p) {
      delete ((::TQtClientWidget*)p);
   }
   static void deleteArray_TQtClientWidget(void *p) {
      delete [] ((::TQtClientWidget*)p);
   }
   static void destruct_TQtClientWidget(void *p) {
      typedef ::TQtClientWidget current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQtClientWidget(TBuffer &buf, void *obj) {
      ((::TQtClientWidget*)obj)->::TQtClientWidget::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQtClientWidget

//______________________________________________________________________________
void TGQt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGQt.

   TVirtualX::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGQt(void *p) {
      return  p ? new(p) ::TGQt : new ::TGQt;
   }
   static void *newArray_TGQt(Long_t nElements, void *p) {
      return p ? new(p) ::TGQt[nElements] : new ::TGQt[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGQt(void *p) {
      delete ((::TGQt*)p);
   }
   static void deleteArray_TGQt(void *p) {
      delete [] ((::TGQt*)p);
   }
   static void destruct_TGQt(void *p) {
      typedef ::TGQt current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGQt(TBuffer &buf, void *obj) {
      ((::TGQt*)obj)->::TGQt::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGQt

//______________________________________________________________________________
void TQtApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQtApplication.

   ::Error("TQtApplication::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQtApplication(void *p) {
      return  p ? new(p) ::TQtApplication : new ::TQtApplication;
   }
   static void *newArray_TQtApplication(Long_t nElements, void *p) {
      return p ? new(p) ::TQtApplication[nElements] : new ::TQtApplication[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQtApplication(void *p) {
      delete ((::TQtApplication*)p);
   }
   static void deleteArray_TQtApplication(void *p) {
      delete [] ((::TQtApplication*)p);
   }
   static void destruct_TQtApplication(void *p) {
      typedef ::TQtApplication current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQtApplication(TBuffer &buf, void *obj) {
      ((::TQtApplication*)obj)->::TQtApplication::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQtApplication

//______________________________________________________________________________
void TQtBrush::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQtBrush.

   ::Error("TQtBrush::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQtBrush(void *p) {
      return  p ? new(p) ::TQtBrush : new ::TQtBrush;
   }
   static void *newArray_TQtBrush(Long_t nElements, void *p) {
      return p ? new(p) ::TQtBrush[nElements] : new ::TQtBrush[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQtBrush(void *p) {
      delete ((::TQtBrush*)p);
   }
   static void deleteArray_TQtBrush(void *p) {
      delete [] ((::TQtBrush*)p);
   }
   static void destruct_TQtBrush(void *p) {
      typedef ::TQtBrush current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQtBrush(TBuffer &buf, void *obj) {
      ((::TQtBrush*)obj)->::TQtBrush::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQtBrush

//______________________________________________________________________________
void TQMimeTypes::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQMimeTypes.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQMimeTypes(void *p) {
      delete ((::TQMimeTypes*)p);
   }
   static void deleteArray_TQMimeTypes(void *p) {
      delete [] ((::TQMimeTypes*)p);
   }
   static void destruct_TQMimeTypes(void *p) {
      typedef ::TQMimeTypes current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQMimeTypes(TBuffer &buf, void *obj) {
      ((::TQMimeTypes*)obj)->::TQMimeTypes::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQMimeTypes

//______________________________________________________________________________
void TQtClientFilter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQtClientFilter.

   ::Error("TQtClientFilter::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQtClientFilter(void *p) {
      return  p ? new(p) ::TQtClientFilter : new ::TQtClientFilter;
   }
   static void *newArray_TQtClientFilter(Long_t nElements, void *p) {
      return p ? new(p) ::TQtClientFilter[nElements] : new ::TQtClientFilter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQtClientFilter(void *p) {
      delete ((::TQtClientFilter*)p);
   }
   static void deleteArray_TQtClientFilter(void *p) {
      delete [] ((::TQtClientFilter*)p);
   }
   static void destruct_TQtClientFilter(void *p) {
      typedef ::TQtClientFilter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQtClientFilter(TBuffer &buf, void *obj) {
      ((::TQtClientFilter*)obj)->::TQtClientFilter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQtClientFilter

//______________________________________________________________________________
void TQtWidget::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQtWidget.

   ::Error("TQtWidget::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQtWidget(void *p) {
      return  p ? new(p) ::TQtWidget : new ::TQtWidget;
   }
   static void *newArray_TQtWidget(Long_t nElements, void *p) {
      return p ? new(p) ::TQtWidget[nElements] : new ::TQtWidget[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQtWidget(void *p) {
      delete ((::TQtWidget*)p);
   }
   static void deleteArray_TQtWidget(void *p) {
      delete [] ((::TQtWidget*)p);
   }
   static void destruct_TQtWidget(void *p) {
      typedef ::TQtWidget current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQtWidget(TBuffer &buf, void *obj) {
      ((::TQtWidget*)obj)->::TQtWidget::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQtWidget

//______________________________________________________________________________
void TQtMarker::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQtMarker.

   ::Error("TQtMarker::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQtMarker(void *p) {
      return  p ? new(p) ::TQtMarker : new ::TQtMarker;
   }
   static void *newArray_TQtMarker(Long_t nElements, void *p) {
      return p ? new(p) ::TQtMarker[nElements] : new ::TQtMarker[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQtMarker(void *p) {
      delete ((::TQtMarker*)p);
   }
   static void deleteArray_TQtMarker(void *p) {
      delete [] ((::TQtMarker*)p);
   }
   static void destruct_TQtMarker(void *p) {
      typedef ::TQtMarker current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQtMarker(TBuffer &buf, void *obj) {
      ((::TQtMarker*)obj)->::TQtMarker::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQtMarker

//______________________________________________________________________________
void TQtTimer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQtTimer.

   ::Error("TQtTimer::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQtTimer(void *p) {
      delete ((::TQtTimer*)p);
   }
   static void deleteArray_TQtTimer(void *p) {
      delete [] ((::TQtTimer*)p);
   }
   static void destruct_TQtTimer(void *p) {
      typedef ::TQtTimer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQtTimer(TBuffer &buf, void *obj) {
      ((::TQtTimer*)obj)->::TQtTimer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQtTimer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQtRootSlot(void *p) {
      delete ((::TQtRootSlot*)p);
   }
   static void deleteArray_TQtRootSlot(void *p) {
      delete [] ((::TQtRootSlot*)p);
   }
   static void destruct_TQtRootSlot(void *p) {
      typedef ::TQtRootSlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQtRootSlot

//______________________________________________________________________________
void TQtPadFont::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQtPadFont.

   TAttText::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQtPadFont(void *p) {
      return  p ? new(p) ::TQtPadFont : new ::TQtPadFont;
   }
   static void *newArray_TQtPadFont(Long_t nElements, void *p) {
      return p ? new(p) ::TQtPadFont[nElements] : new ::TQtPadFont[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQtPadFont(void *p) {
      delete ((::TQtPadFont*)p);
   }
   static void deleteArray_TQtPadFont(void *p) {
      delete [] ((::TQtPadFont*)p);
   }
   static void destruct_TQtPadFont(void *p) {
      typedef ::TQtPadFont current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQtPadFont(TBuffer &buf, void *obj) {
      ((::TQtPadFont*)obj)->::TQtPadFont::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQtPadFont

namespace {
  void TriggerDictionaryInitialization_libGQt_Impl() {
    static const char* headers[] = {
"TGQt.h",
"TQtApplication.h",
"TQtBrush.h",
"TQMimeTypes.h",
"TQtClientFilter.h",
"TQtClientWidget.h",
"TQtWidget.h",
"TQtMarker.h",
"TQtTimer.h",
"TQtRootSlot.h",
"TQtPadFont.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/qt4",
"/usr/include/qt4/QtGui",
"/usr/include/qt4/QtCore",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGQt dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(QFrame implementation backing  ROOT TGWindow objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQtClientWidget.h")))  __attribute__((annotate("$clingAutoload$TGQt.h")))  TQtClientWidget;
class __attribute__((annotate(R"ATTRDUMP(Interface to Qt GUI)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGQt.h")))  TGQt;
class __attribute__((annotate(R"ATTRDUMP(Instantiate the Qt system within ROOT environment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQtApplication.h")))  TQtApplication;
class __attribute__((annotate(R"ATTRDUMP(create QBrush object based on the ROOT "fill" attributes)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(create QBrush object based on the ROOT "fill" attributes)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(create QBrush object based on the ROOT "fill" attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQtBrush.h")))  TQtBrush;
class __attribute__((annotate(R"ATTRDUMP(Pool of mime type objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQMimeTypes.h")))  TQMimeTypes;
class __attribute__((annotate(R"ATTRDUMP(Map Qt and ROOT event)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQtClientFilter.h")))  TQtClientFilter;
class __attribute__((annotate(R"ATTRDUMP(QWidget to back ROOT TCanvas (Can be used with Qt designer))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQtWidget.h")))  TQtWidget;
class __attribute__((annotate(R"ATTRDUMP(Convert  ROOT TMarker objects on to QPointArray)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQtMarker.h")))  TQtMarker;
class __attribute__((annotate(R"ATTRDUMP(QTimer to awake the ROOT event loop from Qt event loop)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQtTimer.h")))  TQtTimer;
class __attribute__((annotate("$clingAutoload$TQtRootSlot.h")))  TQtRootSlot;
class __attribute__((annotate(R"ATTRDUMP(< Create Qt QFont object based on ROOT TAttText attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQtPadFont.h")))  TQtPadFont;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGQt dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef QT_GUI_LIB
  #define QT_GUI_LIB 1
#endif
#ifndef QT_CORE_LIB
  #define QT_CORE_LIB 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGQt.h"
#include "TQtApplication.h"
#include "TQtBrush.h"
#include "TQMimeTypes.h"
#include "TQtClientFilter.h"
#include "TQtClientWidget.h"
#include "TQtWidget.h"
#include "TQtMarker.h"
#include "TQtTimer.h"
#include "TQtRootSlot.h"
#include "TQtPadFont.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"QConnectCint", payloadCode, "@",
"QConnectTerminate", payloadCode, "@",
"TGQt", payloadCode, "@",
"TQMimeTypes", payloadCode, "@",
"TQtApplication", payloadCode, "@",
"TQtBrush", payloadCode, "@",
"TQtClientFilter", payloadCode, "@",
"TQtClientWidget", payloadCode, "@",
"TQtMarker", payloadCode, "@",
"TQtPadFont", payloadCode, "@",
"TQtRootSlot", payloadCode, "@",
"TQtTimer", payloadCode, "@",
"TQtWidget", payloadCode, "@",
"gQt", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGQt",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGQt_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGQt_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGQt() {
  TriggerDictionaryInitialization_libGQt_Impl();
}
