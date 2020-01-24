// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ASImage

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
#include "TASImage.h"
#include "TASImagePlugin.h"
#include "TASPluginGS.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TASImage(void *p = 0);
   static void *newArray_TASImage(Long_t size, void *p);
   static void delete_TASImage(void *p);
   static void deleteArray_TASImage(void *p);
   static void destruct_TASImage(void *p);
   static void streamer_TASImage(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TASImage*)
   {
      ::TASImage *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TASImage >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TASImage", ::TASImage::Class_Version(), "TASImage.h", 31,
                  typeid(::TASImage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TASImage::Dictionary, isa_proxy, 17,
                  sizeof(::TASImage) );
      instance.SetNew(&new_TASImage);
      instance.SetNewArray(&newArray_TASImage);
      instance.SetDelete(&delete_TASImage);
      instance.SetDeleteArray(&deleteArray_TASImage);
      instance.SetDestructor(&destruct_TASImage);
      instance.SetStreamerFunc(&streamer_TASImage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TASImage*)
   {
      return GenerateInitInstanceLocal((::TASImage*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TASImage*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TASImagePlugin(void *p);
   static void deleteArray_TASImagePlugin(void *p);
   static void destruct_TASImagePlugin(void *p);
   static void streamer_TASImagePlugin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TASImagePlugin*)
   {
      ::TASImagePlugin *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TASImagePlugin >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TASImagePlugin", ::TASImagePlugin::Class_Version(), "TASImagePlugin.h", 26,
                  typeid(::TASImagePlugin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TASImagePlugin::Dictionary, isa_proxy, 16,
                  sizeof(::TASImagePlugin) );
      instance.SetDelete(&delete_TASImagePlugin);
      instance.SetDeleteArray(&deleteArray_TASImagePlugin);
      instance.SetDestructor(&destruct_TASImagePlugin);
      instance.SetStreamerFunc(&streamer_TASImagePlugin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TASImagePlugin*)
   {
      return GenerateInitInstanceLocal((::TASImagePlugin*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TASImagePlugin*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TASPluginGS(void *p);
   static void deleteArray_TASPluginGS(void *p);
   static void destruct_TASPluginGS(void *p);
   static void streamer_TASPluginGS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TASPluginGS*)
   {
      ::TASPluginGS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TASPluginGS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TASPluginGS", ::TASPluginGS::Class_Version(), "TASPluginGS.h", 25,
                  typeid(::TASPluginGS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TASPluginGS::Dictionary, isa_proxy, 16,
                  sizeof(::TASPluginGS) );
      instance.SetDelete(&delete_TASPluginGS);
      instance.SetDeleteArray(&deleteArray_TASPluginGS);
      instance.SetDestructor(&destruct_TASPluginGS);
      instance.SetStreamerFunc(&streamer_TASPluginGS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TASPluginGS*)
   {
      return GenerateInitInstanceLocal((::TASPluginGS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TASPluginGS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TASImage::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TASImage::Class_Name()
{
   return "TASImage";
}

//______________________________________________________________________________
const char *TASImage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASImage*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TASImage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASImage*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TASImage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASImage*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TASImage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASImage*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TASImagePlugin::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TASImagePlugin::Class_Name()
{
   return "TASImagePlugin";
}

//______________________________________________________________________________
const char *TASImagePlugin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASImagePlugin*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TASImagePlugin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASImagePlugin*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TASImagePlugin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASImagePlugin*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TASImagePlugin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASImagePlugin*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TASPluginGS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TASPluginGS::Class_Name()
{
   return "TASPluginGS";
}

//______________________________________________________________________________
const char *TASPluginGS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASPluginGS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TASPluginGS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASPluginGS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TASPluginGS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASPluginGS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TASPluginGS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASPluginGS*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TASImage(void *p) {
      return  p ? new(p) ::TASImage : new ::TASImage;
   }
   static void *newArray_TASImage(Long_t nElements, void *p) {
      return p ? new(p) ::TASImage[nElements] : new ::TASImage[nElements];
   }
   // Wrapper around operator delete
   static void delete_TASImage(void *p) {
      delete ((::TASImage*)p);
   }
   static void deleteArray_TASImage(void *p) {
      delete [] ((::TASImage*)p);
   }
   static void destruct_TASImage(void *p) {
      typedef ::TASImage current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TASImage(TBuffer &buf, void *obj) {
      ((::TASImage*)obj)->::TASImage::Streamer(buf);
   }
} // end of namespace ROOT for class ::TASImage

//______________________________________________________________________________
void TASImagePlugin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TASImagePlugin.

   TImagePlugin::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TASImagePlugin(void *p) {
      delete ((::TASImagePlugin*)p);
   }
   static void deleteArray_TASImagePlugin(void *p) {
      delete [] ((::TASImagePlugin*)p);
   }
   static void destruct_TASImagePlugin(void *p) {
      typedef ::TASImagePlugin current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TASImagePlugin(TBuffer &buf, void *obj) {
      ((::TASImagePlugin*)obj)->::TASImagePlugin::Streamer(buf);
   }
} // end of namespace ROOT for class ::TASImagePlugin

//______________________________________________________________________________
void TASPluginGS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TASPluginGS.

   TASImagePlugin::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TASPluginGS(void *p) {
      delete ((::TASPluginGS*)p);
   }
   static void deleteArray_TASPluginGS(void *p) {
      delete [] ((::TASPluginGS*)p);
   }
   static void destruct_TASPluginGS(void *p) {
      typedef ::TASPluginGS current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TASPluginGS(TBuffer &buf, void *obj) {
      ((::TASPluginGS*)obj)->::TASPluginGS::Streamer(buf);
   }
} // end of namespace ROOT for class ::TASPluginGS

namespace {
  void TriggerDictionaryInitialization_libASImage_Impl() {
    static const char* headers[] = {
"TASImage.h",
"TASImagePlugin.h",
"TASPluginGS.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/freetype2",
"/usr/include",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libASImage dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TASImage.h"
#include "TASImagePlugin.h"
#include "TASPluginGS.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libASImage",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libASImage_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libASImage_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libASImage() {
  TriggerDictionaryInitialization_libASImage_Impl();
}
