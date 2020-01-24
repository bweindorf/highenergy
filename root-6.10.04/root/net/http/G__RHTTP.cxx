// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RHTTP

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
#include "TCivetweb.h"
#include "TFastCgi.h"
#include "THttpCallArg.h"
#include "THttpEngine.h"
#include "THttpServer.h"
#include "TRootSniffer.h"
#include "TRootSnifferStore.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_THttpEngine(void *p);
   static void deleteArray_THttpEngine(void *p);
   static void destruct_THttpEngine(void *p);
   static void streamer_THttpEngine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THttpEngine*)
   {
      ::THttpEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THttpEngine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THttpEngine", ::THttpEngine::Class_Version(), "THttpEngine.h", 21,
                  typeid(::THttpEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THttpEngine::Dictionary, isa_proxy, 16,
                  sizeof(::THttpEngine) );
      instance.SetDelete(&delete_THttpEngine);
      instance.SetDeleteArray(&deleteArray_THttpEngine);
      instance.SetDestructor(&destruct_THttpEngine);
      instance.SetStreamerFunc(&streamer_THttpEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THttpEngine*)
   {
      return GenerateInitInstanceLocal((::THttpEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THttpEngine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THttpWSEngine(void *p);
   static void deleteArray_THttpWSEngine(void *p);
   static void destruct_THttpWSEngine(void *p);
   static void streamer_THttpWSEngine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THttpWSEngine*)
   {
      ::THttpWSEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THttpWSEngine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THttpWSEngine", ::THttpWSEngine::Class_Version(), "THttpEngine.h", 48,
                  typeid(::THttpWSEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THttpWSEngine::Dictionary, isa_proxy, 16,
                  sizeof(::THttpWSEngine) );
      instance.SetDelete(&delete_THttpWSEngine);
      instance.SetDeleteArray(&deleteArray_THttpWSEngine);
      instance.SetDestructor(&destruct_THttpWSEngine);
      instance.SetStreamerFunc(&streamer_THttpWSEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THttpWSEngine*)
   {
      return GenerateInitInstanceLocal((::THttpWSEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THttpWSEngine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCivetweb(void *p = 0);
   static void *newArray_TCivetweb(Long_t size, void *p);
   static void delete_TCivetweb(void *p);
   static void deleteArray_TCivetweb(void *p);
   static void destruct_TCivetweb(void *p);
   static void streamer_TCivetweb(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCivetweb*)
   {
      ::TCivetweb *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCivetweb >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCivetweb", ::TCivetweb::Class_Version(), "TCivetweb.h", 18,
                  typeid(::TCivetweb), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCivetweb::Dictionary, isa_proxy, 16,
                  sizeof(::TCivetweb) );
      instance.SetNew(&new_TCivetweb);
      instance.SetNewArray(&newArray_TCivetweb);
      instance.SetDelete(&delete_TCivetweb);
      instance.SetDeleteArray(&deleteArray_TCivetweb);
      instance.SetDestructor(&destruct_TCivetweb);
      instance.SetStreamerFunc(&streamer_TCivetweb);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCivetweb*)
   {
      return GenerateInitInstanceLocal((::TCivetweb*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCivetweb*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFastCgi(void *p = 0);
   static void *newArray_TFastCgi(Long_t size, void *p);
   static void delete_TFastCgi(void *p);
   static void deleteArray_TFastCgi(void *p);
   static void destruct_TFastCgi(void *p);
   static void streamer_TFastCgi(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFastCgi*)
   {
      ::TFastCgi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFastCgi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFastCgi", ::TFastCgi::Class_Version(), "TFastCgi.h", 19,
                  typeid(::TFastCgi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFastCgi::Dictionary, isa_proxy, 16,
                  sizeof(::TFastCgi) );
      instance.SetNew(&new_TFastCgi);
      instance.SetNewArray(&newArray_TFastCgi);
      instance.SetDelete(&delete_TFastCgi);
      instance.SetDeleteArray(&deleteArray_TFastCgi);
      instance.SetDestructor(&destruct_TFastCgi);
      instance.SetStreamerFunc(&streamer_TFastCgi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFastCgi*)
   {
      return GenerateInitInstanceLocal((::TFastCgi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFastCgi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THttpCallArg(void *p = 0);
   static void *newArray_THttpCallArg(Long_t size, void *p);
   static void delete_THttpCallArg(void *p);
   static void deleteArray_THttpCallArg(void *p);
   static void destruct_THttpCallArg(void *p);
   static void streamer_THttpCallArg(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THttpCallArg*)
   {
      ::THttpCallArg *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THttpCallArg >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THttpCallArg", ::THttpCallArg::Class_Version(), "THttpCallArg.h", 24,
                  typeid(::THttpCallArg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THttpCallArg::Dictionary, isa_proxy, 16,
                  sizeof(::THttpCallArg) );
      instance.SetNew(&new_THttpCallArg);
      instance.SetNewArray(&newArray_THttpCallArg);
      instance.SetDelete(&delete_THttpCallArg);
      instance.SetDeleteArray(&deleteArray_THttpCallArg);
      instance.SetDestructor(&destruct_THttpCallArg);
      instance.SetStreamerFunc(&streamer_THttpCallArg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THttpCallArg*)
   {
      return GenerateInitInstanceLocal((::THttpCallArg*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THttpCallArg*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THttpServer(void *p = 0);
   static void *newArray_THttpServer(Long_t size, void *p);
   static void delete_THttpServer(void *p);
   static void deleteArray_THttpServer(void *p);
   static void destruct_THttpServer(void *p);
   static void streamer_THttpServer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THttpServer*)
   {
      ::THttpServer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THttpServer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THttpServer", ::THttpServer::Class_Version(), "THttpServer.h", 29,
                  typeid(::THttpServer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THttpServer::Dictionary, isa_proxy, 16,
                  sizeof(::THttpServer) );
      instance.SetNew(&new_THttpServer);
      instance.SetNewArray(&newArray_THttpServer);
      instance.SetDelete(&delete_THttpServer);
      instance.SetDeleteArray(&deleteArray_THttpServer);
      instance.SetDestructor(&destruct_THttpServer);
      instance.SetStreamerFunc(&streamer_THttpServer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THttpServer*)
   {
      return GenerateInitInstanceLocal((::THttpServer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THttpServer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootSnifferScanRec(void *p = 0);
   static void *newArray_TRootSnifferScanRec(Long_t size, void *p);
   static void delete_TRootSnifferScanRec(void *p);
   static void deleteArray_TRootSnifferScanRec(void *p);
   static void destruct_TRootSnifferScanRec(void *p);
   static void streamer_TRootSnifferScanRec(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootSnifferScanRec*)
   {
      ::TRootSnifferScanRec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootSnifferScanRec >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootSnifferScanRec", ::TRootSnifferScanRec::Class_Version(), "TRootSniffer.h", 27,
                  typeid(::TRootSnifferScanRec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootSnifferScanRec::Dictionary, isa_proxy, 16,
                  sizeof(::TRootSnifferScanRec) );
      instance.SetNew(&new_TRootSnifferScanRec);
      instance.SetNewArray(&newArray_TRootSnifferScanRec);
      instance.SetDelete(&delete_TRootSnifferScanRec);
      instance.SetDeleteArray(&deleteArray_TRootSnifferScanRec);
      instance.SetDestructor(&destruct_TRootSnifferScanRec);
      instance.SetStreamerFunc(&streamer_TRootSnifferScanRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootSnifferScanRec*)
   {
      return GenerateInitInstanceLocal((::TRootSnifferScanRec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRootSnifferScanRec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TRootSniffer(void *p);
   static void deleteArray_TRootSniffer(void *p);
   static void destruct_TRootSniffer(void *p);
   static void streamer_TRootSniffer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootSniffer*)
   {
      ::TRootSniffer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootSniffer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootSniffer", ::TRootSniffer::Class_Version(), "TRootSniffer.h", 113,
                  typeid(::TRootSniffer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootSniffer::Dictionary, isa_proxy, 16,
                  sizeof(::TRootSniffer) );
      instance.SetDelete(&delete_TRootSniffer);
      instance.SetDeleteArray(&deleteArray_TRootSniffer);
      instance.SetDestructor(&destruct_TRootSniffer);
      instance.SetStreamerFunc(&streamer_TRootSniffer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootSniffer*)
   {
      return GenerateInitInstanceLocal((::TRootSniffer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRootSniffer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRootSnifferStore(void *p = 0);
   static void *newArray_TRootSnifferStore(Long_t size, void *p);
   static void delete_TRootSnifferStore(void *p);
   static void deleteArray_TRootSnifferStore(void *p);
   static void destruct_TRootSnifferStore(void *p);
   static void streamer_TRootSnifferStore(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootSnifferStore*)
   {
      ::TRootSnifferStore *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootSnifferStore >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootSnifferStore", ::TRootSnifferStore::Class_Version(), "TRootSnifferStore.h", 24,
                  typeid(::TRootSnifferStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootSnifferStore::Dictionary, isa_proxy, 16,
                  sizeof(::TRootSnifferStore) );
      instance.SetNew(&new_TRootSnifferStore);
      instance.SetNewArray(&newArray_TRootSnifferStore);
      instance.SetDelete(&delete_TRootSnifferStore);
      instance.SetDeleteArray(&deleteArray_TRootSnifferStore);
      instance.SetDestructor(&destruct_TRootSnifferStore);
      instance.SetStreamerFunc(&streamer_TRootSnifferStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootSnifferStore*)
   {
      return GenerateInitInstanceLocal((::TRootSnifferStore*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRootSnifferStore*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TRootSnifferStoreXml(void *p);
   static void deleteArray_TRootSnifferStoreXml(void *p);
   static void destruct_TRootSnifferStoreXml(void *p);
   static void streamer_TRootSnifferStoreXml(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootSnifferStoreXml*)
   {
      ::TRootSnifferStoreXml *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootSnifferStoreXml >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootSnifferStoreXml", ::TRootSnifferStoreXml::Class_Version(), "TRootSnifferStore.h", 56,
                  typeid(::TRootSnifferStoreXml), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootSnifferStoreXml::Dictionary, isa_proxy, 16,
                  sizeof(::TRootSnifferStoreXml) );
      instance.SetDelete(&delete_TRootSnifferStoreXml);
      instance.SetDeleteArray(&deleteArray_TRootSnifferStoreXml);
      instance.SetDestructor(&destruct_TRootSnifferStoreXml);
      instance.SetStreamerFunc(&streamer_TRootSnifferStoreXml);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootSnifferStoreXml*)
   {
      return GenerateInitInstanceLocal((::TRootSnifferStoreXml*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRootSnifferStoreXml*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TRootSnifferStoreJson(void *p);
   static void deleteArray_TRootSnifferStoreJson(void *p);
   static void destruct_TRootSnifferStoreJson(void *p);
   static void streamer_TRootSnifferStoreJson(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootSnifferStoreJson*)
   {
      ::TRootSnifferStoreJson *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootSnifferStoreJson >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootSnifferStoreJson", ::TRootSnifferStoreJson::Class_Version(), "TRootSnifferStore.h", 82,
                  typeid(::TRootSnifferStoreJson), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootSnifferStoreJson::Dictionary, isa_proxy, 16,
                  sizeof(::TRootSnifferStoreJson) );
      instance.SetDelete(&delete_TRootSnifferStoreJson);
      instance.SetDeleteArray(&deleteArray_TRootSnifferStoreJson);
      instance.SetDestructor(&destruct_TRootSnifferStoreJson);
      instance.SetStreamerFunc(&streamer_TRootSnifferStoreJson);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootSnifferStoreJson*)
   {
      return GenerateInitInstanceLocal((::TRootSnifferStoreJson*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRootSnifferStoreJson*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr THttpEngine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THttpEngine::Class_Name()
{
   return "THttpEngine";
}

//______________________________________________________________________________
const char *THttpEngine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THttpEngine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THttpEngine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THttpEngine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THttpEngine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THttpEngine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THttpEngine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THttpEngine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THttpWSEngine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THttpWSEngine::Class_Name()
{
   return "THttpWSEngine";
}

//______________________________________________________________________________
const char *THttpWSEngine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THttpWSEngine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THttpWSEngine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THttpWSEngine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THttpWSEngine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THttpWSEngine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THttpWSEngine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THttpWSEngine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCivetweb::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCivetweb::Class_Name()
{
   return "TCivetweb";
}

//______________________________________________________________________________
const char *TCivetweb::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCivetweb*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCivetweb::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCivetweb*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCivetweb::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCivetweb*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCivetweb::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCivetweb*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFastCgi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFastCgi::Class_Name()
{
   return "TFastCgi";
}

//______________________________________________________________________________
const char *TFastCgi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFastCgi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFastCgi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFastCgi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFastCgi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFastCgi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFastCgi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFastCgi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THttpCallArg::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THttpCallArg::Class_Name()
{
   return "THttpCallArg";
}

//______________________________________________________________________________
const char *THttpCallArg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THttpCallArg*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THttpCallArg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THttpCallArg*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THttpCallArg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THttpCallArg*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THttpCallArg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THttpCallArg*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THttpServer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THttpServer::Class_Name()
{
   return "THttpServer";
}

//______________________________________________________________________________
const char *THttpServer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THttpServer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THttpServer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THttpServer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THttpServer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THttpServer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THttpServer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THttpServer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootSnifferScanRec::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootSnifferScanRec::Class_Name()
{
   return "TRootSnifferScanRec";
}

//______________________________________________________________________________
const char *TRootSnifferScanRec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferScanRec*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootSnifferScanRec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferScanRec*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootSnifferScanRec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferScanRec*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootSnifferScanRec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferScanRec*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootSniffer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootSniffer::Class_Name()
{
   return "TRootSniffer";
}

//______________________________________________________________________________
const char *TRootSniffer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSniffer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootSniffer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSniffer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootSniffer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSniffer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootSniffer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSniffer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootSnifferStore::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootSnifferStore::Class_Name()
{
   return "TRootSnifferStore";
}

//______________________________________________________________________________
const char *TRootSnifferStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStore*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootSnifferStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStore*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootSnifferStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStore*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootSnifferStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStore*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootSnifferStoreXml::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootSnifferStoreXml::Class_Name()
{
   return "TRootSnifferStoreXml";
}

//______________________________________________________________________________
const char *TRootSnifferStoreXml::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStoreXml*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootSnifferStoreXml::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStoreXml*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootSnifferStoreXml::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStoreXml*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootSnifferStoreXml::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStoreXml*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRootSnifferStoreJson::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootSnifferStoreJson::Class_Name()
{
   return "TRootSnifferStoreJson";
}

//______________________________________________________________________________
const char *TRootSnifferStoreJson::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStoreJson*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootSnifferStoreJson::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStoreJson*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootSnifferStoreJson::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStoreJson*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootSnifferStoreJson::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferStoreJson*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void THttpEngine::Streamer(TBuffer &R__b)
{
   // Stream an object of class THttpEngine.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THttpEngine(void *p) {
      delete ((::THttpEngine*)p);
   }
   static void deleteArray_THttpEngine(void *p) {
      delete [] ((::THttpEngine*)p);
   }
   static void destruct_THttpEngine(void *p) {
      typedef ::THttpEngine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THttpEngine(TBuffer &buf, void *obj) {
      ((::THttpEngine*)obj)->::THttpEngine::Streamer(buf);
   }
} // end of namespace ROOT for class ::THttpEngine

//______________________________________________________________________________
void THttpWSEngine::Streamer(TBuffer &R__b)
{
   // Stream an object of class THttpWSEngine.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THttpWSEngine(void *p) {
      delete ((::THttpWSEngine*)p);
   }
   static void deleteArray_THttpWSEngine(void *p) {
      delete [] ((::THttpWSEngine*)p);
   }
   static void destruct_THttpWSEngine(void *p) {
      typedef ::THttpWSEngine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THttpWSEngine(TBuffer &buf, void *obj) {
      ((::THttpWSEngine*)obj)->::THttpWSEngine::Streamer(buf);
   }
} // end of namespace ROOT for class ::THttpWSEngine

//______________________________________________________________________________
void TCivetweb::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCivetweb.

   THttpEngine::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCivetweb(void *p) {
      return  p ? new(p) ::TCivetweb : new ::TCivetweb;
   }
   static void *newArray_TCivetweb(Long_t nElements, void *p) {
      return p ? new(p) ::TCivetweb[nElements] : new ::TCivetweb[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCivetweb(void *p) {
      delete ((::TCivetweb*)p);
   }
   static void deleteArray_TCivetweb(void *p) {
      delete [] ((::TCivetweb*)p);
   }
   static void destruct_TCivetweb(void *p) {
      typedef ::TCivetweb current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCivetweb(TBuffer &buf, void *obj) {
      ((::TCivetweb*)obj)->::TCivetweb::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCivetweb

//______________________________________________________________________________
void TFastCgi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFastCgi.

   THttpEngine::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFastCgi(void *p) {
      return  p ? new(p) ::TFastCgi : new ::TFastCgi;
   }
   static void *newArray_TFastCgi(Long_t nElements, void *p) {
      return p ? new(p) ::TFastCgi[nElements] : new ::TFastCgi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFastCgi(void *p) {
      delete ((::TFastCgi*)p);
   }
   static void deleteArray_TFastCgi(void *p) {
      delete [] ((::TFastCgi*)p);
   }
   static void destruct_TFastCgi(void *p) {
      typedef ::TFastCgi current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFastCgi(TBuffer &buf, void *obj) {
      ((::TFastCgi*)obj)->::TFastCgi::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFastCgi

//______________________________________________________________________________
void THttpCallArg::Streamer(TBuffer &R__b)
{
   // Stream an object of class THttpCallArg.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THttpCallArg(void *p) {
      return  p ? new(p) ::THttpCallArg : new ::THttpCallArg;
   }
   static void *newArray_THttpCallArg(Long_t nElements, void *p) {
      return p ? new(p) ::THttpCallArg[nElements] : new ::THttpCallArg[nElements];
   }
   // Wrapper around operator delete
   static void delete_THttpCallArg(void *p) {
      delete ((::THttpCallArg*)p);
   }
   static void deleteArray_THttpCallArg(void *p) {
      delete [] ((::THttpCallArg*)p);
   }
   static void destruct_THttpCallArg(void *p) {
      typedef ::THttpCallArg current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THttpCallArg(TBuffer &buf, void *obj) {
      ((::THttpCallArg*)obj)->::THttpCallArg::Streamer(buf);
   }
} // end of namespace ROOT for class ::THttpCallArg

//______________________________________________________________________________
void THttpServer::Streamer(TBuffer &R__b)
{
   // Stream an object of class THttpServer.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THttpServer(void *p) {
      return  p ? new(p) ::THttpServer : new ::THttpServer;
   }
   static void *newArray_THttpServer(Long_t nElements, void *p) {
      return p ? new(p) ::THttpServer[nElements] : new ::THttpServer[nElements];
   }
   // Wrapper around operator delete
   static void delete_THttpServer(void *p) {
      delete ((::THttpServer*)p);
   }
   static void deleteArray_THttpServer(void *p) {
      delete [] ((::THttpServer*)p);
   }
   static void destruct_THttpServer(void *p) {
      typedef ::THttpServer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THttpServer(TBuffer &buf, void *obj) {
      ((::THttpServer*)obj)->::THttpServer::Streamer(buf);
   }
} // end of namespace ROOT for class ::THttpServer

//______________________________________________________________________________
void TRootSnifferScanRec::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootSnifferScanRec.

   ::Error("TRootSnifferScanRec::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootSnifferScanRec(void *p) {
      return  p ? new(p) ::TRootSnifferScanRec : new ::TRootSnifferScanRec;
   }
   static void *newArray_TRootSnifferScanRec(Long_t nElements, void *p) {
      return p ? new(p) ::TRootSnifferScanRec[nElements] : new ::TRootSnifferScanRec[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootSnifferScanRec(void *p) {
      delete ((::TRootSnifferScanRec*)p);
   }
   static void deleteArray_TRootSnifferScanRec(void *p) {
      delete [] ((::TRootSnifferScanRec*)p);
   }
   static void destruct_TRootSnifferScanRec(void *p) {
      typedef ::TRootSnifferScanRec current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootSnifferScanRec(TBuffer &buf, void *obj) {
      ((::TRootSnifferScanRec*)obj)->::TRootSnifferScanRec::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootSnifferScanRec

//______________________________________________________________________________
void TRootSniffer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootSniffer.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRootSniffer(void *p) {
      delete ((::TRootSniffer*)p);
   }
   static void deleteArray_TRootSniffer(void *p) {
      delete [] ((::TRootSniffer*)p);
   }
   static void destruct_TRootSniffer(void *p) {
      typedef ::TRootSniffer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootSniffer(TBuffer &buf, void *obj) {
      ((::TRootSniffer*)obj)->::TRootSniffer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootSniffer

//______________________________________________________________________________
void TRootSnifferStore::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootSnifferStore.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootSnifferStore(void *p) {
      return  p ? new(p) ::TRootSnifferStore : new ::TRootSnifferStore;
   }
   static void *newArray_TRootSnifferStore(Long_t nElements, void *p) {
      return p ? new(p) ::TRootSnifferStore[nElements] : new ::TRootSnifferStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootSnifferStore(void *p) {
      delete ((::TRootSnifferStore*)p);
   }
   static void deleteArray_TRootSnifferStore(void *p) {
      delete [] ((::TRootSnifferStore*)p);
   }
   static void destruct_TRootSnifferStore(void *p) {
      typedef ::TRootSnifferStore current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootSnifferStore(TBuffer &buf, void *obj) {
      ((::TRootSnifferStore*)obj)->::TRootSnifferStore::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootSnifferStore

//______________________________________________________________________________
void TRootSnifferStoreXml::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootSnifferStoreXml.

   TRootSnifferStore::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRootSnifferStoreXml(void *p) {
      delete ((::TRootSnifferStoreXml*)p);
   }
   static void deleteArray_TRootSnifferStoreXml(void *p) {
      delete [] ((::TRootSnifferStoreXml*)p);
   }
   static void destruct_TRootSnifferStoreXml(void *p) {
      typedef ::TRootSnifferStoreXml current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootSnifferStoreXml(TBuffer &buf, void *obj) {
      ((::TRootSnifferStoreXml*)obj)->::TRootSnifferStoreXml::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootSnifferStoreXml

//______________________________________________________________________________
void TRootSnifferStoreJson::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootSnifferStoreJson.

   TRootSnifferStore::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRootSnifferStoreJson(void *p) {
      delete ((::TRootSnifferStoreJson*)p);
   }
   static void deleteArray_TRootSnifferStoreJson(void *p) {
      delete [] ((::TRootSnifferStoreJson*)p);
   }
   static void destruct_TRootSnifferStoreJson(void *p) {
      typedef ::TRootSnifferStoreJson current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootSnifferStoreJson(TBuffer &buf, void *obj) {
      ((::TRootSnifferStoreJson*)obj)->::TRootSnifferStoreJson::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootSnifferStoreJson

namespace {
  void TriggerDictionaryInitialization_libRHTTP_Impl() {
    static const char* headers[] = {
"TCivetweb.h",
"TFastCgi.h",
"THttpCallArg.h",
"THttpEngine.h",
"THttpServer.h",
"TRootSniffer.h",
"TRootSnifferStore.h",
0
    };
    static const char* includePaths[] = {
"/usr/include",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libRHTTP dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(abstract class which should provide http-based protocol for server)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THttpEngine.h")))  __attribute__((annotate("$clingAutoload$TCivetweb.h")))  THttpEngine;
class __attribute__((annotate(R"ATTRDUMP(abstract class for working with WebSockets-like protocol)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THttpEngine.h")))  __attribute__((annotate("$clingAutoload$TCivetweb.h")))  THttpWSEngine;
class __attribute__((annotate(R"ATTRDUMP(http server implementation, based on civetweb embedded server)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TCivetweb.h")))  TCivetweb;
class __attribute__((annotate(R"ATTRDUMP(fastcgi engine for THttpServer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFastCgi.h")))  TFastCgi;
class __attribute__((annotate(R"ATTRDUMP(Arguments for single HTTP call)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THttpCallArg.h")))  THttpCallArg;
class __attribute__((annotate(R"ATTRDUMP(HTTP server for ROOT analysis)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THttpServer.h")))  THttpServer;
class __attribute__((annotate(R"ATTRDUMP(Scan record for objects sniffer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TRootSniffer.h")))  TRootSnifferScanRec;
class __attribute__((annotate(R"ATTRDUMP(Sniffer of ROOT objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TRootSniffer.h")))  TRootSniffer;
class __attribute__((annotate(R"ATTRDUMP(structure for results store of objects sniffer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TRootSnifferStore.h")))  TRootSnifferStore;
class __attribute__((annotate(R"ATTRDUMP(xml results store of objects sniffer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TRootSnifferStore.h")))  TRootSnifferStoreXml;
class __attribute__((annotate(R"ATTRDUMP(json results store of objects sniffer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TRootSnifferStore.h")))  TRootSnifferStoreJson;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRHTTP dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef HTTP_WITHOUT_FASTCGI
  #define HTTP_WITHOUT_FASTCGI 1
#endif
#ifndef USE_WEBSOCKET
  #define USE_WEBSOCKET 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TCivetweb.h"
#include "TFastCgi.h"
#include "THttpCallArg.h"
#include "THttpEngine.h"
#include "THttpServer.h"
#include "TRootSniffer.h"
#include "TRootSnifferStore.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TCivetweb", payloadCode, "@",
"TFastCgi", payloadCode, "@",
"THttpCallArg", payloadCode, "@",
"THttpEngine", payloadCode, "@",
"THttpServer", payloadCode, "@",
"THttpWSEngine", payloadCode, "@",
"TRootSniffer", payloadCode, "@",
"TRootSnifferScanRec", payloadCode, "@",
"TRootSnifferStore", payloadCode, "@",
"TRootSnifferStoreJson", payloadCode, "@",
"TRootSnifferStoreXml", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRHTTP",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRHTTP_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRHTTP_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRHTTP() {
  TriggerDictionaryInitialization_libRHTTP_Impl();
}
