// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__EG

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
#include "TAttParticle.h"
#include "TDatabasePDG.h"
#include "TDecayChannel.h"
#include "TGenerator.h"
#include "TParticle.h"
#include "TParticleClassPDG.h"
#include "TParticlePDG.h"
#include "TPrimary.h"
#include "TVirtualMCDecayer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TAttParticle(void *p = 0);
   static void *newArray_TAttParticle(Long_t size, void *p);
   static void delete_TAttParticle(void *p);
   static void deleteArray_TAttParticle(void *p);
   static void destruct_TAttParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttParticle*)
   {
      ::TAttParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAttParticle", ::TAttParticle::Class_Version(), "TAttParticle.h", 30,
                  typeid(::TAttParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TAttParticle) );
      instance.SetNew(&new_TAttParticle);
      instance.SetNewArray(&newArray_TAttParticle);
      instance.SetDelete(&delete_TAttParticle);
      instance.SetDeleteArray(&deleteArray_TAttParticle);
      instance.SetDestructor(&destruct_TAttParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttParticle*)
   {
      return GenerateInitInstanceLocal((::TAttParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAttParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParticlePDG(void *p = 0);
   static void *newArray_TParticlePDG(Long_t size, void *p);
   static void delete_TParticlePDG(void *p);
   static void deleteArray_TParticlePDG(void *p);
   static void destruct_TParticlePDG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParticlePDG*)
   {
      ::TParticlePDG *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParticlePDG >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TParticlePDG", ::TParticlePDG::Class_Version(), "TParticlePDG.h", 19,
                  typeid(::TParticlePDG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParticlePDG::Dictionary, isa_proxy, 4,
                  sizeof(::TParticlePDG) );
      instance.SetNew(&new_TParticlePDG);
      instance.SetNewArray(&newArray_TParticlePDG);
      instance.SetDelete(&delete_TParticlePDG);
      instance.SetDeleteArray(&deleteArray_TParticlePDG);
      instance.SetDestructor(&destruct_TParticlePDG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParticlePDG*)
   {
      return GenerateInitInstanceLocal((::TParticlePDG*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TParticlePDG*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParticleClassPDG(void *p = 0);
   static void *newArray_TParticleClassPDG(Long_t size, void *p);
   static void delete_TParticleClassPDG(void *p);
   static void deleteArray_TParticleClassPDG(void *p);
   static void destruct_TParticleClassPDG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParticleClassPDG*)
   {
      ::TParticleClassPDG *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParticleClassPDG >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TParticleClassPDG", ::TParticleClassPDG::Class_Version(), "TParticleClassPDG.h", 19,
                  typeid(::TParticleClassPDG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParticleClassPDG::Dictionary, isa_proxy, 4,
                  sizeof(::TParticleClassPDG) );
      instance.SetNew(&new_TParticleClassPDG);
      instance.SetNewArray(&newArray_TParticleClassPDG);
      instance.SetDelete(&delete_TParticleClassPDG);
      instance.SetDeleteArray(&deleteArray_TParticleClassPDG);
      instance.SetDestructor(&destruct_TParticleClassPDG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParticleClassPDG*)
   {
      return GenerateInitInstanceLocal((::TParticleClassPDG*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TParticleClassPDG*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDatabasePDG(void *p = 0);
   static void *newArray_TDatabasePDG(Long_t size, void *p);
   static void delete_TDatabasePDG(void *p);
   static void deleteArray_TDatabasePDG(void *p);
   static void destruct_TDatabasePDG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDatabasePDG*)
   {
      ::TDatabasePDG *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDatabasePDG >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDatabasePDG", ::TDatabasePDG::Class_Version(), "TDatabasePDG.h", 21,
                  typeid(::TDatabasePDG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDatabasePDG::Dictionary, isa_proxy, 4,
                  sizeof(::TDatabasePDG) );
      instance.SetNew(&new_TDatabasePDG);
      instance.SetNewArray(&newArray_TDatabasePDG);
      instance.SetDelete(&delete_TDatabasePDG);
      instance.SetDeleteArray(&deleteArray_TDatabasePDG);
      instance.SetDestructor(&destruct_TDatabasePDG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDatabasePDG*)
   {
      return GenerateInitInstanceLocal((::TDatabasePDG*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDatabasePDG*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDecayChannel(void *p = 0);
   static void *newArray_TDecayChannel(Long_t size, void *p);
   static void delete_TDecayChannel(void *p);
   static void deleteArray_TDecayChannel(void *p);
   static void destruct_TDecayChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDecayChannel*)
   {
      ::TDecayChannel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDecayChannel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDecayChannel", ::TDecayChannel::Class_Version(), "TDecayChannel.h", 24,
                  typeid(::TDecayChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDecayChannel::Dictionary, isa_proxy, 4,
                  sizeof(::TDecayChannel) );
      instance.SetNew(&new_TDecayChannel);
      instance.SetNewArray(&newArray_TDecayChannel);
      instance.SetDelete(&delete_TDecayChannel);
      instance.SetDeleteArray(&deleteArray_TDecayChannel);
      instance.SetDestructor(&destruct_TDecayChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDecayChannel*)
   {
      return GenerateInitInstanceLocal((::TDecayChannel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDecayChannel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGenerator(void *p = 0);
   static void *newArray_TGenerator(Long_t size, void *p);
   static void delete_TGenerator(void *p);
   static void deleteArray_TGenerator(void *p);
   static void destruct_TGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenerator*)
   {
      ::TGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGenerator", ::TGenerator::Class_Version(), "TGenerator.h", 144,
                  typeid(::TGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::TGenerator) );
      instance.SetNew(&new_TGenerator);
      instance.SetNewArray(&newArray_TGenerator);
      instance.SetDelete(&delete_TGenerator);
      instance.SetDeleteArray(&deleteArray_TGenerator);
      instance.SetDestructor(&destruct_TGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenerator*)
   {
      return GenerateInitInstanceLocal((::TGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParticle(void *p = 0);
   static void *newArray_TParticle(Long_t size, void *p);
   static void delete_TParticle(void *p);
   static void deleteArray_TParticle(void *p);
   static void destruct_TParticle(void *p);
   static void streamer_TParticle(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParticle*)
   {
      ::TParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TParticle", ::TParticle::Class_Version(), "TParticle.h", 26,
                  typeid(::TParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParticle::Dictionary, isa_proxy, 17,
                  sizeof(::TParticle) );
      instance.SetNew(&new_TParticle);
      instance.SetNewArray(&newArray_TParticle);
      instance.SetDelete(&delete_TParticle);
      instance.SetDeleteArray(&deleteArray_TParticle);
      instance.SetDestructor(&destruct_TParticle);
      instance.SetStreamerFunc(&streamer_TParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParticle*)
   {
      return GenerateInitInstanceLocal((::TParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPrimary(void *p = 0);
   static void *newArray_TPrimary(Long_t size, void *p);
   static void delete_TPrimary(void *p);
   static void deleteArray_TPrimary(void *p);
   static void destruct_TPrimary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPrimary*)
   {
      ::TPrimary *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPrimary >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPrimary", ::TPrimary::Class_Version(), "TPrimary.h", 31,
                  typeid(::TPrimary), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPrimary::Dictionary, isa_proxy, 4,
                  sizeof(::TPrimary) );
      instance.SetNew(&new_TPrimary);
      instance.SetNewArray(&newArray_TPrimary);
      instance.SetDelete(&delete_TPrimary);
      instance.SetDeleteArray(&deleteArray_TPrimary);
      instance.SetDestructor(&destruct_TPrimary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPrimary*)
   {
      return GenerateInitInstanceLocal((::TPrimary*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPrimary*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualMCDecayer(void *p);
   static void deleteArray_TVirtualMCDecayer(void *p);
   static void destruct_TVirtualMCDecayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualMCDecayer*)
   {
      ::TVirtualMCDecayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualMCDecayer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualMCDecayer", ::TVirtualMCDecayer::Class_Version(), "TVirtualMCDecayer.h", 23,
                  typeid(::TVirtualMCDecayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualMCDecayer::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualMCDecayer) );
      instance.SetDelete(&delete_TVirtualMCDecayer);
      instance.SetDeleteArray(&deleteArray_TVirtualMCDecayer);
      instance.SetDestructor(&destruct_TVirtualMCDecayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualMCDecayer*)
   {
      return GenerateInitInstanceLocal((::TVirtualMCDecayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualMCDecayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAttParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttParticle::Class_Name()
{
   return "TAttParticle";
}

//______________________________________________________________________________
const char *TAttParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAttParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParticlePDG::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TParticlePDG::Class_Name()
{
   return "TParticlePDG";
}

//______________________________________________________________________________
const char *TParticlePDG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticlePDG*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TParticlePDG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticlePDG*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParticlePDG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticlePDG*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParticlePDG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticlePDG*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParticleClassPDG::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TParticleClassPDG::Class_Name()
{
   return "TParticleClassPDG";
}

//______________________________________________________________________________
const char *TParticleClassPDG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticleClassPDG*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TParticleClassPDG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticleClassPDG*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParticleClassPDG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticleClassPDG*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParticleClassPDG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticleClassPDG*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDatabasePDG::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDatabasePDG::Class_Name()
{
   return "TDatabasePDG";
}

//______________________________________________________________________________
const char *TDatabasePDG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDatabasePDG*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDatabasePDG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDatabasePDG*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDatabasePDG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDatabasePDG*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDatabasePDG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDatabasePDG*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDecayChannel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDecayChannel::Class_Name()
{
   return "TDecayChannel";
}

//______________________________________________________________________________
const char *TDecayChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecayChannel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDecayChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecayChannel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDecayChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecayChannel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDecayChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecayChannel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGenerator::Class_Name()
{
   return "TGenerator";
}

//______________________________________________________________________________
const char *TGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TParticle::Class_Name()
{
   return "TParticle";
}

//______________________________________________________________________________
const char *TParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPrimary::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPrimary::Class_Name()
{
   return "TPrimary";
}

//______________________________________________________________________________
const char *TPrimary::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPrimary*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPrimary::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPrimary*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPrimary::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPrimary*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPrimary::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPrimary*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualMCDecayer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualMCDecayer::Class_Name()
{
   return "TVirtualMCDecayer";
}

//______________________________________________________________________________
const char *TVirtualMCDecayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCDecayer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualMCDecayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCDecayer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualMCDecayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCDecayer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualMCDecayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMCDecayer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAttParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAttParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAttParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttParticle(void *p) {
      return  p ? new(p) ::TAttParticle : new ::TAttParticle;
   }
   static void *newArray_TAttParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TAttParticle[nElements] : new ::TAttParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttParticle(void *p) {
      delete ((::TAttParticle*)p);
   }
   static void deleteArray_TAttParticle(void *p) {
      delete [] ((::TAttParticle*)p);
   }
   static void destruct_TAttParticle(void *p) {
      typedef ::TAttParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAttParticle

//______________________________________________________________________________
void TParticlePDG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParticlePDG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TParticlePDG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TParticlePDG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParticlePDG(void *p) {
      return  p ? new(p) ::TParticlePDG : new ::TParticlePDG;
   }
   static void *newArray_TParticlePDG(Long_t nElements, void *p) {
      return p ? new(p) ::TParticlePDG[nElements] : new ::TParticlePDG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParticlePDG(void *p) {
      delete ((::TParticlePDG*)p);
   }
   static void deleteArray_TParticlePDG(void *p) {
      delete [] ((::TParticlePDG*)p);
   }
   static void destruct_TParticlePDG(void *p) {
      typedef ::TParticlePDG current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TParticlePDG

//______________________________________________________________________________
void TParticleClassPDG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParticleClassPDG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TParticleClassPDG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TParticleClassPDG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParticleClassPDG(void *p) {
      return  p ? new(p) ::TParticleClassPDG : new ::TParticleClassPDG;
   }
   static void *newArray_TParticleClassPDG(Long_t nElements, void *p) {
      return p ? new(p) ::TParticleClassPDG[nElements] : new ::TParticleClassPDG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParticleClassPDG(void *p) {
      delete ((::TParticleClassPDG*)p);
   }
   static void deleteArray_TParticleClassPDG(void *p) {
      delete [] ((::TParticleClassPDG*)p);
   }
   static void destruct_TParticleClassPDG(void *p) {
      typedef ::TParticleClassPDG current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TParticleClassPDG

//______________________________________________________________________________
void TDatabasePDG::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDatabasePDG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDatabasePDG::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDatabasePDG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDatabasePDG(void *p) {
      return  p ? new(p) ::TDatabasePDG : new ::TDatabasePDG;
   }
   static void *newArray_TDatabasePDG(Long_t nElements, void *p) {
      return p ? new(p) ::TDatabasePDG[nElements] : new ::TDatabasePDG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDatabasePDG(void *p) {
      delete ((::TDatabasePDG*)p);
   }
   static void deleteArray_TDatabasePDG(void *p) {
      delete [] ((::TDatabasePDG*)p);
   }
   static void destruct_TDatabasePDG(void *p) {
      typedef ::TDatabasePDG current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDatabasePDG

//______________________________________________________________________________
void TDecayChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDecayChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDecayChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDecayChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDecayChannel(void *p) {
      return  p ? new(p) ::TDecayChannel : new ::TDecayChannel;
   }
   static void *newArray_TDecayChannel(Long_t nElements, void *p) {
      return p ? new(p) ::TDecayChannel[nElements] : new ::TDecayChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDecayChannel(void *p) {
      delete ((::TDecayChannel*)p);
   }
   static void deleteArray_TDecayChannel(void *p) {
      delete [] ((::TDecayChannel*)p);
   }
   static void destruct_TDecayChannel(void *p) {
      typedef ::TDecayChannel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDecayChannel

//______________________________________________________________________________
void TGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGenerator(void *p) {
      return  p ? new(p) ::TGenerator : new ::TGenerator;
   }
   static void *newArray_TGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::TGenerator[nElements] : new ::TGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGenerator(void *p) {
      delete ((::TGenerator*)p);
   }
   static void deleteArray_TGenerator(void *p) {
      delete [] ((::TGenerator*)p);
   }
   static void destruct_TGenerator(void *p) {
      typedef ::TGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParticle(void *p) {
      return  p ? new(p) ::TParticle : new ::TParticle;
   }
   static void *newArray_TParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TParticle[nElements] : new ::TParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParticle(void *p) {
      delete ((::TParticle*)p);
   }
   static void deleteArray_TParticle(void *p) {
      delete [] ((::TParticle*)p);
   }
   static void destruct_TParticle(void *p) {
      typedef ::TParticle current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TParticle(TBuffer &buf, void *obj) {
      ((::TParticle*)obj)->::TParticle::Streamer(buf);
   }
} // end of namespace ROOT for class ::TParticle

//______________________________________________________________________________
void TPrimary::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPrimary.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPrimary::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPrimary::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPrimary(void *p) {
      return  p ? new(p) ::TPrimary : new ::TPrimary;
   }
   static void *newArray_TPrimary(Long_t nElements, void *p) {
      return p ? new(p) ::TPrimary[nElements] : new ::TPrimary[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPrimary(void *p) {
      delete ((::TPrimary*)p);
   }
   static void deleteArray_TPrimary(void *p) {
      delete [] ((::TPrimary*)p);
   }
   static void destruct_TPrimary(void *p) {
      typedef ::TPrimary current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPrimary

//______________________________________________________________________________
void TVirtualMCDecayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualMCDecayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualMCDecayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualMCDecayer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualMCDecayer(void *p) {
      delete ((::TVirtualMCDecayer*)p);
   }
   static void deleteArray_TVirtualMCDecayer(void *p) {
      delete [] ((::TVirtualMCDecayer*)p);
   }
   static void destruct_TVirtualMCDecayer(void *p) {
      typedef ::TVirtualMCDecayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualMCDecayer

namespace {
  void TriggerDictionaryInitialization_libEG_Impl() {
    static const char* headers[] = {
"TAttParticle.h",
"TDatabasePDG.h",
"TDecayChannel.h",
"TGenerator.h",
"TParticle.h",
"TParticleClassPDG.h",
"TParticlePDG.h",
"TPrimary.h",
"TVirtualMCDecayer.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Particle definition)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAttParticle.h")))  TAttParticle;
class __attribute__((annotate(R"ATTRDUMP(PDG static particle definition)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TParticlePDG.h")))  __attribute__((annotate("$clingAutoload$TDatabasePDG.h")))  TParticlePDG;
class __attribute__((annotate(R"ATTRDUMP(PDG static particle definition)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TParticleClassPDG.h")))  __attribute__((annotate("$clingAutoload$TDatabasePDG.h")))  TParticleClassPDG;
class __attribute__((annotate(R"ATTRDUMP(PDG particle database)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(PDG particle database)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(PDG particle database)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDatabasePDG.h")))  TDatabasePDG;
class __attribute__((annotate(R"ATTRDUMP(Class describing a particle decay channel)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDecayChannel.h")))  TDecayChannel;
class __attribute__((annotate(R"ATTRDUMP(Event generator interface abstract baseclass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGenerator.h")))  TGenerator;
class __attribute__((annotate(R"ATTRDUMP(TParticle vertex particle information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TParticle.h")))  TParticle;
class __attribute__((annotate(R"ATTRDUMP(TPrimary vertex particle information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPrimary.h")))  TPrimary;
class __attribute__((annotate(R"ATTRDUMP(Particle Decayer Base Class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualMCDecayer.h")))  TVirtualMCDecayer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libEG dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TAttParticle.h"
#include "TDatabasePDG.h"
#include "TDecayChannel.h"
#include "TGenerator.h"
#include "TParticle.h"
#include "TParticleClassPDG.h"
#include "TParticlePDG.h"
#include "TPrimary.h"
#include "TVirtualMCDecayer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TAttParticle", payloadCode, "@",
"TDatabasePDG", payloadCode, "@",
"TDecayChannel", payloadCode, "@",
"TGenerator", payloadCode, "@",
"TParticle", payloadCode, "@",
"TParticleClassPDG", payloadCode, "@",
"TParticlePDG", payloadCode, "@",
"TPrimary", payloadCode, "@",
"TVirtualMCDecayer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libEG_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libEG() {
  TriggerDictionaryInitialization_libEG_Impl();
}
