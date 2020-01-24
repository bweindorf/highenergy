// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__PyROOT

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
#include "TPyArg.h"
#include "TPyDispatcher.h"
#include "TPyException.h"
#include "TPyFitFunction.h"
#include "TPyROOTApplication.h"
#include "TPyReturn.h"
#include "TPySelector.h"
#include "TPython.h"

// Header files passed via #pragma extra_include

namespace PyROOT {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *PyROOT_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("PyROOT", 0 /*version*/, "TPyException.h", 40,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &PyROOT_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *PyROOT_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void delete_TPyArg(void *p);
   static void deleteArray_TPyArg(void *p);
   static void destruct_TPyArg(void *p);
   static void streamer_TPyArg(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyArg*)
   {
      ::TPyArg *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyArg >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPyArg", ::TPyArg::Class_Version(), "TPyArg.h", 27,
                  typeid(::TPyArg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPyArg::Dictionary, isa_proxy, 16,
                  sizeof(::TPyArg) );
      instance.SetDelete(&delete_TPyArg);
      instance.SetDeleteArray(&deleteArray_TPyArg);
      instance.SetDestructor(&destruct_TPyArg);
      instance.SetStreamerFunc(&streamer_TPyArg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyArg*)
   {
      return GenerateInitInstanceLocal((::TPyArg*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPyArg*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPyDispatcher(void *p);
   static void deleteArray_TPyDispatcher(void *p);
   static void destruct_TPyDispatcher(void *p);
   static void streamer_TPyDispatcher(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyDispatcher*)
   {
      ::TPyDispatcher *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyDispatcher >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPyDispatcher", ::TPyDispatcher::Class_Version(), "TPyDispatcher.h", 47,
                  typeid(::TPyDispatcher), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPyDispatcher::Dictionary, isa_proxy, 16,
                  sizeof(::TPyDispatcher) );
      instance.SetDelete(&delete_TPyDispatcher);
      instance.SetDeleteArray(&deleteArray_TPyDispatcher);
      instance.SetDestructor(&destruct_TPyDispatcher);
      instance.SetStreamerFunc(&streamer_TPyDispatcher);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyDispatcher*)
   {
      return GenerateInitInstanceLocal((::TPyDispatcher*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPyDispatcher*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PyROOTcLcLTPyException(void *p = 0);
   static void *newArray_PyROOTcLcLTPyException(Long_t size, void *p);
   static void delete_PyROOTcLcLTPyException(void *p);
   static void deleteArray_PyROOTcLcLTPyException(void *p);
   static void destruct_PyROOTcLcLTPyException(void *p);
   static void streamer_PyROOTcLcLTPyException(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PyROOT::TPyException*)
   {
      ::PyROOT::TPyException *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PyROOT::TPyException >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PyROOT::TPyException", ::PyROOT::TPyException::Class_Version(), "TPyException.h", 42,
                  typeid(::PyROOT::TPyException), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PyROOT::TPyException::Dictionary, isa_proxy, 16,
                  sizeof(::PyROOT::TPyException) );
      instance.SetNew(&new_PyROOTcLcLTPyException);
      instance.SetNewArray(&newArray_PyROOTcLcLTPyException);
      instance.SetDelete(&delete_PyROOTcLcLTPyException);
      instance.SetDeleteArray(&deleteArray_PyROOTcLcLTPyException);
      instance.SetDestructor(&destruct_PyROOTcLcLTPyException);
      instance.SetStreamerFunc(&streamer_PyROOTcLcLTPyException);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PyROOT::TPyException*)
   {
      return GenerateInitInstanceLocal((::PyROOT::TPyException*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PyROOT::TPyException*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPyMultiGenFunction(void *p = 0);
   static void *newArray_TPyMultiGenFunction(Long_t size, void *p);
   static void delete_TPyMultiGenFunction(void *p);
   static void deleteArray_TPyMultiGenFunction(void *p);
   static void destruct_TPyMultiGenFunction(void *p);
   static void streamer_TPyMultiGenFunction(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyMultiGenFunction*)
   {
      ::TPyMultiGenFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyMultiGenFunction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPyMultiGenFunction", ::TPyMultiGenFunction::Class_Version(), "TPyFitFunction.h", 24,
                  typeid(::TPyMultiGenFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPyMultiGenFunction::Dictionary, isa_proxy, 16,
                  sizeof(::TPyMultiGenFunction) );
      instance.SetNew(&new_TPyMultiGenFunction);
      instance.SetNewArray(&newArray_TPyMultiGenFunction);
      instance.SetDelete(&delete_TPyMultiGenFunction);
      instance.SetDeleteArray(&deleteArray_TPyMultiGenFunction);
      instance.SetDestructor(&destruct_TPyMultiGenFunction);
      instance.SetStreamerFunc(&streamer_TPyMultiGenFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyMultiGenFunction*)
   {
      return GenerateInitInstanceLocal((::TPyMultiGenFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPyMultiGenFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPyMultiGradFunction(void *p = 0);
   static void *newArray_TPyMultiGradFunction(Long_t size, void *p);
   static void delete_TPyMultiGradFunction(void *p);
   static void deleteArray_TPyMultiGradFunction(void *p);
   static void destruct_TPyMultiGradFunction(void *p);
   static void streamer_TPyMultiGradFunction(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyMultiGradFunction*)
   {
      ::TPyMultiGradFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyMultiGradFunction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPyMultiGradFunction", ::TPyMultiGradFunction::Class_Version(), "TPyFitFunction.h", 48,
                  typeid(::TPyMultiGradFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPyMultiGradFunction::Dictionary, isa_proxy, 16,
                  sizeof(::TPyMultiGradFunction) );
      instance.SetNew(&new_TPyMultiGradFunction);
      instance.SetNewArray(&newArray_TPyMultiGradFunction);
      instance.SetDelete(&delete_TPyMultiGradFunction);
      instance.SetDeleteArray(&deleteArray_TPyMultiGradFunction);
      instance.SetDestructor(&destruct_TPyMultiGradFunction);
      instance.SetStreamerFunc(&streamer_TPyMultiGradFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyMultiGradFunction*)
   {
      return GenerateInitInstanceLocal((::TPyMultiGradFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPyMultiGradFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_PyROOTcLcLTPyROOTApplication(void *p);
   static void deleteArray_PyROOTcLcLTPyROOTApplication(void *p);
   static void destruct_PyROOTcLcLTPyROOTApplication(void *p);
   static void streamer_PyROOTcLcLTPyROOTApplication(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PyROOT::TPyROOTApplication*)
   {
      ::PyROOT::TPyROOTApplication *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PyROOT::TPyROOTApplication >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PyROOT::TPyROOTApplication", ::PyROOT::TPyROOTApplication::Class_Version(), "TPyROOTApplication.h", 21,
                  typeid(::PyROOT::TPyROOTApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PyROOT::TPyROOTApplication::Dictionary, isa_proxy, 16,
                  sizeof(::PyROOT::TPyROOTApplication) );
      instance.SetDelete(&delete_PyROOTcLcLTPyROOTApplication);
      instance.SetDeleteArray(&deleteArray_PyROOTcLcLTPyROOTApplication);
      instance.SetDestructor(&destruct_PyROOTcLcLTPyROOTApplication);
      instance.SetStreamerFunc(&streamer_PyROOTcLcLTPyROOTApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PyROOT::TPyROOTApplication*)
   {
      return GenerateInitInstanceLocal((::PyROOT::TPyROOTApplication*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PyROOT::TPyROOTApplication*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPyReturn(void *p = 0);
   static void *newArray_TPyReturn(Long_t size, void *p);
   static void delete_TPyReturn(void *p);
   static void deleteArray_TPyReturn(void *p);
   static void destruct_TPyReturn(void *p);
   static void streamer_TPyReturn(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyReturn*)
   {
      ::TPyReturn *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyReturn >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPyReturn", ::TPyReturn::Class_Version(), "TPyReturn.h", 24,
                  typeid(::TPyReturn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPyReturn::Dictionary, isa_proxy, 16,
                  sizeof(::TPyReturn) );
      instance.SetNew(&new_TPyReturn);
      instance.SetNewArray(&newArray_TPyReturn);
      instance.SetDelete(&delete_TPyReturn);
      instance.SetDeleteArray(&deleteArray_TPyReturn);
      instance.SetDestructor(&destruct_TPyReturn);
      instance.SetStreamerFunc(&streamer_TPyReturn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyReturn*)
   {
      return GenerateInitInstanceLocal((::TPyReturn*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPyReturn*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPySelector(void *p = 0);
   static void *newArray_TPySelector(Long_t size, void *p);
   static void delete_TPySelector(void *p);
   static void deleteArray_TPySelector(void *p);
   static void destruct_TPySelector(void *p);
   static void streamer_TPySelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPySelector*)
   {
      ::TPySelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPySelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPySelector", ::TPySelector::Class_Version(), "TPySelector.h", 25,
                  typeid(::TPySelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPySelector::Dictionary, isa_proxy, 16,
                  sizeof(::TPySelector) );
      instance.SetNew(&new_TPySelector);
      instance.SetNewArray(&newArray_TPySelector);
      instance.SetDelete(&delete_TPySelector);
      instance.SetDeleteArray(&deleteArray_TPySelector);
      instance.SetDestructor(&destruct_TPySelector);
      instance.SetStreamerFunc(&streamer_TPySelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPySelector*)
   {
      return GenerateInitInstanceLocal((::TPySelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPySelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPython(void *p = 0);
   static void *newArray_TPython(Long_t size, void *p);
   static void delete_TPython(void *p);
   static void deleteArray_TPython(void *p);
   static void destruct_TPython(void *p);
   static void streamer_TPython(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPython*)
   {
      ::TPython *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPython >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPython", ::TPython::Class_Version(), "TPython.h", 23,
                  typeid(::TPython), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPython::Dictionary, isa_proxy, 16,
                  sizeof(::TPython) );
      instance.SetNew(&new_TPython);
      instance.SetNewArray(&newArray_TPython);
      instance.SetDelete(&delete_TPython);
      instance.SetDeleteArray(&deleteArray_TPython);
      instance.SetDestructor(&destruct_TPython);
      instance.SetStreamerFunc(&streamer_TPython);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPython*)
   {
      return GenerateInitInstanceLocal((::TPython*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPython*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TPyArg::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyArg::Class_Name()
{
   return "TPyArg";
}

//______________________________________________________________________________
const char *TPyArg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyArg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyArg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyArg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPyDispatcher::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyDispatcher::Class_Name()
{
   return "TPyDispatcher";
}

//______________________________________________________________________________
const char *TPyDispatcher::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyDispatcher*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyDispatcher::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyDispatcher*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyDispatcher::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyDispatcher*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyDispatcher::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyDispatcher*)0x0)->GetClass(); }
   return fgIsA;
}

namespace PyROOT {
//______________________________________________________________________________
atomic_TClass_ptr TPyException::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyException::Class_Name()
{
   return "PyROOT::TPyException";
}

//______________________________________________________________________________
const char *TPyException::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PyROOT::TPyException*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyException::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PyROOT::TPyException*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyException::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PyROOT::TPyException*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyException::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PyROOT::TPyException*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace PyROOT
//______________________________________________________________________________
atomic_TClass_ptr TPyMultiGenFunction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyMultiGenFunction::Class_Name()
{
   return "TPyMultiGenFunction";
}

//______________________________________________________________________________
const char *TPyMultiGenFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyMultiGenFunction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyMultiGenFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyMultiGenFunction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyMultiGenFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyMultiGenFunction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyMultiGenFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyMultiGenFunction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPyMultiGradFunction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyMultiGradFunction::Class_Name()
{
   return "TPyMultiGradFunction";
}

//______________________________________________________________________________
const char *TPyMultiGradFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyMultiGradFunction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyMultiGradFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyMultiGradFunction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyMultiGradFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyMultiGradFunction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyMultiGradFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyMultiGradFunction*)0x0)->GetClass(); }
   return fgIsA;
}

namespace PyROOT {
//______________________________________________________________________________
atomic_TClass_ptr TPyROOTApplication::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyROOTApplication::Class_Name()
{
   return "PyROOT::TPyROOTApplication";
}

//______________________________________________________________________________
const char *TPyROOTApplication::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PyROOT::TPyROOTApplication*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyROOTApplication::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PyROOT::TPyROOTApplication*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyROOTApplication::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PyROOT::TPyROOTApplication*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyROOTApplication::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PyROOT::TPyROOTApplication*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace PyROOT
//______________________________________________________________________________
atomic_TClass_ptr TPyReturn::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyReturn::Class_Name()
{
   return "TPyReturn";
}

//______________________________________________________________________________
const char *TPyReturn::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyReturn::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyReturn::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyReturn::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPySelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPySelector::Class_Name()
{
   return "TPySelector";
}

//______________________________________________________________________________
const char *TPySelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPySelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPySelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPySelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPySelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPySelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPySelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPySelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPython::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPython::Class_Name()
{
   return "TPython";
}

//______________________________________________________________________________
const char *TPython::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPython*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPython::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPython*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPython::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPython*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPython::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPython*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TPyArg::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyArg.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, TPyArg::IsA());
   } else {
      R__c = R__b.WriteVersion(TPyArg::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPyArg(void *p) {
      delete ((::TPyArg*)p);
   }
   static void deleteArray_TPyArg(void *p) {
      delete [] ((::TPyArg*)p);
   }
   static void destruct_TPyArg(void *p) {
      typedef ::TPyArg current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPyArg(TBuffer &buf, void *obj) {
      ((::TPyArg*)obj)->::TPyArg::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPyArg

//______________________________________________________________________________
void TPyDispatcher::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyDispatcher.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TPyDispatcher::IsA());
   } else {
      R__c = R__b.WriteVersion(TPyDispatcher::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPyDispatcher(void *p) {
      delete ((::TPyDispatcher*)p);
   }
   static void deleteArray_TPyDispatcher(void *p) {
      delete [] ((::TPyDispatcher*)p);
   }
   static void destruct_TPyDispatcher(void *p) {
      typedef ::TPyDispatcher current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPyDispatcher(TBuffer &buf, void *obj) {
      ((::TPyDispatcher*)obj)->::TPyDispatcher::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPyDispatcher

namespace PyROOT {
//______________________________________________________________________________
void TPyException::Streamer(TBuffer &R__b)
{
   // Stream an object of class PyROOT::TPyException.

   ::Error("PyROOT::TPyException::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace PyROOT
namespace ROOT {
   // Wrappers around operator new
   static void *new_PyROOTcLcLTPyException(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::PyROOT::TPyException : new ::PyROOT::TPyException;
   }
   static void *newArray_PyROOTcLcLTPyException(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::PyROOT::TPyException[nElements] : new ::PyROOT::TPyException[nElements];
   }
   // Wrapper around operator delete
   static void delete_PyROOTcLcLTPyException(void *p) {
      delete ((::PyROOT::TPyException*)p);
   }
   static void deleteArray_PyROOTcLcLTPyException(void *p) {
      delete [] ((::PyROOT::TPyException*)p);
   }
   static void destruct_PyROOTcLcLTPyException(void *p) {
      typedef ::PyROOT::TPyException current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_PyROOTcLcLTPyException(TBuffer &buf, void *obj) {
      ((::PyROOT::TPyException*)obj)->::PyROOT::TPyException::Streamer(buf);
   }
} // end of namespace ROOT for class ::PyROOT::TPyException

//______________________________________________________________________________
void TPyMultiGenFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyMultiGenFunction.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, TPyMultiGenFunction::IsA());
   } else {
      R__c = R__b.WriteVersion(TPyMultiGenFunction::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPyMultiGenFunction(void *p) {
      return  p ? new(p) ::TPyMultiGenFunction : new ::TPyMultiGenFunction;
   }
   static void *newArray_TPyMultiGenFunction(Long_t nElements, void *p) {
      return p ? new(p) ::TPyMultiGenFunction[nElements] : new ::TPyMultiGenFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPyMultiGenFunction(void *p) {
      delete ((::TPyMultiGenFunction*)p);
   }
   static void deleteArray_TPyMultiGenFunction(void *p) {
      delete [] ((::TPyMultiGenFunction*)p);
   }
   static void destruct_TPyMultiGenFunction(void *p) {
      typedef ::TPyMultiGenFunction current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPyMultiGenFunction(TBuffer &buf, void *obj) {
      ((::TPyMultiGenFunction*)obj)->::TPyMultiGenFunction::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPyMultiGenFunction

//______________________________________________________________________________
void TPyMultiGradFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyMultiGradFunction.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, TPyMultiGradFunction::IsA());
   } else {
      R__c = R__b.WriteVersion(TPyMultiGradFunction::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPyMultiGradFunction(void *p) {
      return  p ? new(p) ::TPyMultiGradFunction : new ::TPyMultiGradFunction;
   }
   static void *newArray_TPyMultiGradFunction(Long_t nElements, void *p) {
      return p ? new(p) ::TPyMultiGradFunction[nElements] : new ::TPyMultiGradFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPyMultiGradFunction(void *p) {
      delete ((::TPyMultiGradFunction*)p);
   }
   static void deleteArray_TPyMultiGradFunction(void *p) {
      delete [] ((::TPyMultiGradFunction*)p);
   }
   static void destruct_TPyMultiGradFunction(void *p) {
      typedef ::TPyMultiGradFunction current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPyMultiGradFunction(TBuffer &buf, void *obj) {
      ((::TPyMultiGradFunction*)obj)->::TPyMultiGradFunction::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPyMultiGradFunction

namespace PyROOT {
//______________________________________________________________________________
void TPyROOTApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class PyROOT::TPyROOTApplication.

   TApplication::Streamer(R__b);
}

} // namespace PyROOT
namespace ROOT {
   // Wrapper around operator delete
   static void delete_PyROOTcLcLTPyROOTApplication(void *p) {
      delete ((::PyROOT::TPyROOTApplication*)p);
   }
   static void deleteArray_PyROOTcLcLTPyROOTApplication(void *p) {
      delete [] ((::PyROOT::TPyROOTApplication*)p);
   }
   static void destruct_PyROOTcLcLTPyROOTApplication(void *p) {
      typedef ::PyROOT::TPyROOTApplication current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_PyROOTcLcLTPyROOTApplication(TBuffer &buf, void *obj) {
      ((::PyROOT::TPyROOTApplication*)obj)->::PyROOT::TPyROOTApplication::Streamer(buf);
   }
} // end of namespace ROOT for class ::PyROOT::TPyROOTApplication

//______________________________________________________________________________
void TPyReturn::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyReturn.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, TPyReturn::IsA());
   } else {
      R__c = R__b.WriteVersion(TPyReturn::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPyReturn(void *p) {
      return  p ? new(p) ::TPyReturn : new ::TPyReturn;
   }
   static void *newArray_TPyReturn(Long_t nElements, void *p) {
      return p ? new(p) ::TPyReturn[nElements] : new ::TPyReturn[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPyReturn(void *p) {
      delete ((::TPyReturn*)p);
   }
   static void deleteArray_TPyReturn(void *p) {
      delete [] ((::TPyReturn*)p);
   }
   static void destruct_TPyReturn(void *p) {
      typedef ::TPyReturn current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPyReturn(TBuffer &buf, void *obj) {
      ((::TPyReturn*)obj)->::TPyReturn::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPyReturn

//______________________________________________________________________________
void TPySelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPySelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TSelector::Streamer(R__b);
      R__b >> fChain;
      R__b.CheckByteCount(R__s, R__c, TPySelector::IsA());
   } else {
      R__c = R__b.WriteVersion(TPySelector::IsA(), kTRUE);
      TSelector::Streamer(R__b);
      R__b << fChain;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPySelector(void *p) {
      return  p ? new(p) ::TPySelector : new ::TPySelector;
   }
   static void *newArray_TPySelector(Long_t nElements, void *p) {
      return p ? new(p) ::TPySelector[nElements] : new ::TPySelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPySelector(void *p) {
      delete ((::TPySelector*)p);
   }
   static void deleteArray_TPySelector(void *p) {
      delete [] ((::TPySelector*)p);
   }
   static void destruct_TPySelector(void *p) {
      typedef ::TPySelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPySelector(TBuffer &buf, void *obj) {
      ((::TPySelector*)obj)->::TPySelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPySelector

//______________________________________________________________________________
void TPython::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPython.

   ::Error("TPython::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPython(void *p) {
      return  p ? new(p) ::TPython : new ::TPython;
   }
   static void *newArray_TPython(Long_t nElements, void *p) {
      return p ? new(p) ::TPython[nElements] : new ::TPython[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPython(void *p) {
      delete ((::TPython*)p);
   }
   static void deleteArray_TPython(void *p) {
      delete [] ((::TPython*)p);
   }
   static void destruct_TPython(void *p) {
      typedef ::TPython current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPython(TBuffer &buf, void *obj) {
      ((::TPython*)obj)->::TPython::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPython

namespace {
  void TriggerDictionaryInitialization_libPyROOT_Impl() {
    static const char* headers[] = {
"TPyArg.h",
"TPyDispatcher.h",
"TPyException.h",
"TPyFitFunction.h",
"TPyROOTApplication.h",
"TPyReturn.h",
"TPySelector.h",
"TPython.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/python2.7",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libPyROOT dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TPyArg.h"
#include "TPyDispatcher.h"
#include "TPyException.h"
#include "TPyFitFunction.h"
#include "TPyROOTApplication.h"
#include "TPyReturn.h"
#include "TPySelector.h"
#include "TPython.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libPyROOT",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libPyROOT_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libPyROOT_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libPyROOT() {
  TriggerDictionaryInitialization_libPyROOT_Impl();
}
