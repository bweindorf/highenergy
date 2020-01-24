// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__QtRoot

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
#include "TQtRootGuiFactory.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TQtRootGuiFactory(void *p = 0);
   static void *newArray_TQtRootGuiFactory(Long_t size, void *p);
   static void delete_TQtRootGuiFactory(void *p);
   static void deleteArray_TQtRootGuiFactory(void *p);
   static void destruct_TQtRootGuiFactory(void *p);
   static void streamer_TQtRootGuiFactory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQtRootGuiFactory*)
   {
      ::TQtRootGuiFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQtRootGuiFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQtRootGuiFactory", ::TQtRootGuiFactory::Class_Version(), "TQtRootGuiFactory.h", 28,
                  typeid(::TQtRootGuiFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQtRootGuiFactory::Dictionary, isa_proxy, 16,
                  sizeof(::TQtRootGuiFactory) );
      instance.SetNew(&new_TQtRootGuiFactory);
      instance.SetNewArray(&newArray_TQtRootGuiFactory);
      instance.SetDelete(&delete_TQtRootGuiFactory);
      instance.SetDeleteArray(&deleteArray_TQtRootGuiFactory);
      instance.SetDestructor(&destruct_TQtRootGuiFactory);
      instance.SetStreamerFunc(&streamer_TQtRootGuiFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQtRootGuiFactory*)
   {
      return GenerateInitInstanceLocal((::TQtRootGuiFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQtRootGuiFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TQtRootGuiFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQtRootGuiFactory::Class_Name()
{
   return "TQtRootGuiFactory";
}

//______________________________________________________________________________
const char *TQtRootGuiFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtRootGuiFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQtRootGuiFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQtRootGuiFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQtRootGuiFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtRootGuiFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQtRootGuiFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQtRootGuiFactory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TQtRootGuiFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQtRootGuiFactory.

   TGuiFactory::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQtRootGuiFactory(void *p) {
      return  p ? new(p) ::TQtRootGuiFactory : new ::TQtRootGuiFactory;
   }
   static void *newArray_TQtRootGuiFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TQtRootGuiFactory[nElements] : new ::TQtRootGuiFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQtRootGuiFactory(void *p) {
      delete ((::TQtRootGuiFactory*)p);
   }
   static void deleteArray_TQtRootGuiFactory(void *p) {
      delete [] ((::TQtRootGuiFactory*)p);
   }
   static void destruct_TQtRootGuiFactory(void *p) {
      typedef ::TQtRootGuiFactory current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TQtRootGuiFactory(TBuffer &buf, void *obj) {
      ((::TQtRootGuiFactory*)obj)->::TQtRootGuiFactory::Streamer(buf);
   }
} // end of namespace ROOT for class ::TQtRootGuiFactory

namespace {
  void TriggerDictionaryInitialization_libQtRoot_Impl() {
    static const char* headers[] = {
"TQtRootGuiFactory.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/qt4",
"/usr/include/qt4/QtGui",
"/usr/include/qt4/QtCore",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libQtRoot dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Factory for Qt-based ROOT GUI components)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQtRootGuiFactory.h")))  TQtRootGuiFactory;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libQtRoot dictionary payload"

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
#include "TQtRootGuiFactory.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TQtRootGuiFactory", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libQtRoot",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libQtRoot_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libQtRoot_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libQtRoot() {
  TriggerDictionaryInitialization_libQtRoot_Impl();
}
