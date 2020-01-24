// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Gviz

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
#include "TGraphEdge.h"
#include "TGraphNode.h"
#include "TGraphStruct.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TGraphEdge(void *p = 0);
   static void *newArray_TGraphEdge(Long_t size, void *p);
   static void delete_TGraphEdge(void *p);
   static void deleteArray_TGraphEdge(void *p);
   static void destruct_TGraphEdge(void *p);
   static void streamer_TGraphEdge(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphEdge*)
   {
      ::TGraphEdge *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphEdge >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphEdge", ::TGraphEdge::Class_Version(), "TGraphEdge.h", 25,
                  typeid(::TGraphEdge), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphEdge::Dictionary, isa_proxy, 17,
                  sizeof(::TGraphEdge) );
      instance.SetNew(&new_TGraphEdge);
      instance.SetNewArray(&newArray_TGraphEdge);
      instance.SetDelete(&delete_TGraphEdge);
      instance.SetDeleteArray(&deleteArray_TGraphEdge);
      instance.SetDestructor(&destruct_TGraphEdge);
      instance.SetStreamerFunc(&streamer_TGraphEdge);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphEdge*)
   {
      return GenerateInitInstanceLocal((::TGraphEdge*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGraphEdge*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphNode(void *p = 0);
   static void *newArray_TGraphNode(Long_t size, void *p);
   static void delete_TGraphNode(void *p);
   static void deleteArray_TGraphNode(void *p);
   static void destruct_TGraphNode(void *p);
   static void streamer_TGraphNode(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphNode*)
   {
      ::TGraphNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphNode", ::TGraphNode::Class_Version(), "TGraphNode.h", 27,
                  typeid(::TGraphNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphNode::Dictionary, isa_proxy, 17,
                  sizeof(::TGraphNode) );
      instance.SetNew(&new_TGraphNode);
      instance.SetNewArray(&newArray_TGraphNode);
      instance.SetDelete(&delete_TGraphNode);
      instance.SetDeleteArray(&deleteArray_TGraphNode);
      instance.SetDestructor(&destruct_TGraphNode);
      instance.SetStreamerFunc(&streamer_TGraphNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphNode*)
   {
      return GenerateInitInstanceLocal((::TGraphNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGraphNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphStruct(void *p = 0);
   static void *newArray_TGraphStruct(Long_t size, void *p);
   static void delete_TGraphStruct(void *p);
   static void deleteArray_TGraphStruct(void *p);
   static void destruct_TGraphStruct(void *p);
   static void streamer_TGraphStruct(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphStruct*)
   {
      ::TGraphStruct *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphStruct >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphStruct", ::TGraphStruct::Class_Version(), "TGraphStruct.h", 24,
                  typeid(::TGraphStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphStruct::Dictionary, isa_proxy, 17,
                  sizeof(::TGraphStruct) );
      instance.SetNew(&new_TGraphStruct);
      instance.SetNewArray(&newArray_TGraphStruct);
      instance.SetDelete(&delete_TGraphStruct);
      instance.SetDeleteArray(&deleteArray_TGraphStruct);
      instance.SetDestructor(&destruct_TGraphStruct);
      instance.SetStreamerFunc(&streamer_TGraphStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphStruct*)
   {
      return GenerateInitInstanceLocal((::TGraphStruct*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGraphStruct*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGraphEdge::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphEdge::Class_Name()
{
   return "TGraphEdge";
}

//______________________________________________________________________________
const char *TGraphEdge::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphEdge*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphEdge::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphEdge*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphEdge::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphEdge*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphEdge::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphEdge*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphNode::Class_Name()
{
   return "TGraphNode";
}

//______________________________________________________________________________
const char *TGraphNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphNode*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphStruct::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphStruct::Class_Name()
{
   return "TGraphStruct";
}

//______________________________________________________________________________
const char *TGraphStruct::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphStruct*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphStruct::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphStruct*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphStruct::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphStruct*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphStruct::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphStruct*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphEdge(void *p) {
      return  p ? new(p) ::TGraphEdge : new ::TGraphEdge;
   }
   static void *newArray_TGraphEdge(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphEdge[nElements] : new ::TGraphEdge[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphEdge(void *p) {
      delete ((::TGraphEdge*)p);
   }
   static void deleteArray_TGraphEdge(void *p) {
      delete [] ((::TGraphEdge*)p);
   }
   static void destruct_TGraphEdge(void *p) {
      typedef ::TGraphEdge current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraphEdge(TBuffer &buf, void *obj) {
      ((::TGraphEdge*)obj)->::TGraphEdge::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraphEdge

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphNode(void *p) {
      return  p ? new(p) ::TGraphNode : new ::TGraphNode;
   }
   static void *newArray_TGraphNode(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphNode[nElements] : new ::TGraphNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphNode(void *p) {
      delete ((::TGraphNode*)p);
   }
   static void deleteArray_TGraphNode(void *p) {
      delete [] ((::TGraphNode*)p);
   }
   static void destruct_TGraphNode(void *p) {
      typedef ::TGraphNode current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraphNode(TBuffer &buf, void *obj) {
      ((::TGraphNode*)obj)->::TGraphNode::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraphNode

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphStruct(void *p) {
      return  p ? new(p) ::TGraphStruct : new ::TGraphStruct;
   }
   static void *newArray_TGraphStruct(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphStruct[nElements] : new ::TGraphStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphStruct(void *p) {
      delete ((::TGraphStruct*)p);
   }
   static void deleteArray_TGraphStruct(void *p) {
      delete [] ((::TGraphStruct*)p);
   }
   static void destruct_TGraphStruct(void *p) {
      typedef ::TGraphStruct current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraphStruct(TBuffer &buf, void *obj) {
      ((::TGraphStruct*)obj)->::TGraphStruct::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraphStruct

namespace {
  void TriggerDictionaryInitialization_libGviz_Impl() {
    static const char* headers[] = {
"TGraphEdge.h",
"TGraphNode.h",
"TGraphStruct.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/graphviz",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGviz dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGraphEdge.h"
#include "TGraphNode.h"
#include "TGraphStruct.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGviz",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGviz_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGviz_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGviz() {
  TriggerDictionaryInitialization_libGviz_Impl();
}
