// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Hbook

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
#include "THbookBranch.h"
#include "THbookFile.h"
#include "THbookKey.h"
#include "THbookTree.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_THbookBranch(void *p = 0);
   static void *newArray_THbookBranch(Long_t size, void *p);
   static void delete_THbookBranch(void *p);
   static void deleteArray_THbookBranch(void *p);
   static void destruct_THbookBranch(void *p);
   static void reset_THbookBranch(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THbookBranch*)
   {
      ::THbookBranch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THbookBranch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THbookBranch", ::THbookBranch::Class_Version(), "THbookBranch.h", 26,
                  typeid(::THbookBranch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THbookBranch::Dictionary, isa_proxy, 4,
                  sizeof(::THbookBranch) );
      instance.SetNew(&new_THbookBranch);
      instance.SetNewArray(&newArray_THbookBranch);
      instance.SetDelete(&delete_THbookBranch);
      instance.SetDeleteArray(&deleteArray_THbookBranch);
      instance.SetDestructor(&destruct_THbookBranch);
      instance.SetResetAfterMerge(&reset_THbookBranch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THbookBranch*)
   {
      return GenerateInitInstanceLocal((::THbookBranch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THbookBranch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THbookFile(void *p = 0);
   static void *newArray_THbookFile(Long_t size, void *p);
   static void delete_THbookFile(void *p);
   static void deleteArray_THbookFile(void *p);
   static void destruct_THbookFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THbookFile*)
   {
      ::THbookFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THbookFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THbookFile", ::THbookFile::Class_Version(), "THbookFile.h", 29,
                  typeid(::THbookFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THbookFile::Dictionary, isa_proxy, 4,
                  sizeof(::THbookFile) );
      instance.SetNew(&new_THbookFile);
      instance.SetNewArray(&newArray_THbookFile);
      instance.SetDelete(&delete_THbookFile);
      instance.SetDeleteArray(&deleteArray_THbookFile);
      instance.SetDestructor(&destruct_THbookFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THbookFile*)
   {
      return GenerateInitInstanceLocal((::THbookFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THbookFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THbookKey(void *p = 0);
   static void *newArray_THbookKey(Long_t size, void *p);
   static void delete_THbookKey(void *p);
   static void deleteArray_THbookKey(void *p);
   static void destruct_THbookKey(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THbookKey*)
   {
      ::THbookKey *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THbookKey >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THbookKey", ::THbookKey::Class_Version(), "THbookKey.h", 26,
                  typeid(::THbookKey), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THbookKey::Dictionary, isa_proxy, 4,
                  sizeof(::THbookKey) );
      instance.SetNew(&new_THbookKey);
      instance.SetNewArray(&newArray_THbookKey);
      instance.SetDelete(&delete_THbookKey);
      instance.SetDeleteArray(&deleteArray_THbookKey);
      instance.SetDestructor(&destruct_THbookKey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THbookKey*)
   {
      return GenerateInitInstanceLocal((::THbookKey*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THbookKey*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THbookTree(void *p = 0);
   static void *newArray_THbookTree(Long_t size, void *p);
   static void delete_THbookTree(void *p);
   static void deleteArray_THbookTree(void *p);
   static void destruct_THbookTree(void *p);
   static void directoryAutoAdd_THbookTree(void *obj, TDirectory *dir);
   static Long64_t merge_THbookTree(void *obj, TCollection *coll,TFileMergeInfo *info);
   static void reset_THbookTree(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THbookTree*)
   {
      ::THbookTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THbookTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THbookTree", ::THbookTree::Class_Version(), "THbookTree.h", 30,
                  typeid(::THbookTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THbookTree::Dictionary, isa_proxy, 4,
                  sizeof(::THbookTree) );
      instance.SetNew(&new_THbookTree);
      instance.SetNewArray(&newArray_THbookTree);
      instance.SetDelete(&delete_THbookTree);
      instance.SetDeleteArray(&deleteArray_THbookTree);
      instance.SetDestructor(&destruct_THbookTree);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_THbookTree);
      instance.SetMerge(&merge_THbookTree);
      instance.SetResetAfterMerge(&reset_THbookTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THbookTree*)
   {
      return GenerateInitInstanceLocal((::THbookTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THbookTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr THbookBranch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THbookBranch::Class_Name()
{
   return "THbookBranch";
}

//______________________________________________________________________________
const char *THbookBranch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THbookBranch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THbookBranch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THbookBranch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THbookBranch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THbookBranch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THbookBranch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THbookBranch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THbookFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THbookFile::Class_Name()
{
   return "THbookFile";
}

//______________________________________________________________________________
const char *THbookFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THbookFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THbookFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THbookFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THbookFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THbookFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THbookFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THbookFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THbookKey::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THbookKey::Class_Name()
{
   return "THbookKey";
}

//______________________________________________________________________________
const char *THbookKey::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THbookKey*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THbookKey::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THbookKey*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THbookKey::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THbookKey*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THbookKey::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THbookKey*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THbookTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THbookTree::Class_Name()
{
   return "THbookTree";
}

//______________________________________________________________________________
const char *THbookTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THbookTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THbookTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THbookTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THbookTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THbookTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THbookTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THbookTree*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void THbookBranch::Streamer(TBuffer &R__b)
{
   // Stream an object of class THbookBranch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THbookBranch::Class(),this);
   } else {
      R__b.WriteClassBuffer(THbookBranch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THbookBranch(void *p) {
      return  p ? new(p) ::THbookBranch : new ::THbookBranch;
   }
   static void *newArray_THbookBranch(Long_t nElements, void *p) {
      return p ? new(p) ::THbookBranch[nElements] : new ::THbookBranch[nElements];
   }
   // Wrapper around operator delete
   static void delete_THbookBranch(void *p) {
      delete ((::THbookBranch*)p);
   }
   static void deleteArray_THbookBranch(void *p) {
      delete [] ((::THbookBranch*)p);
   }
   static void destruct_THbookBranch(void *p) {
      typedef ::THbookBranch current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the Reset function.
   static void reset_THbookBranch(void *obj,TFileMergeInfo *info) {
      ((::THbookBranch*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::THbookBranch

//______________________________________________________________________________
void THbookFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class THbookFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THbookFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(THbookFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THbookFile(void *p) {
      return  p ? new(p) ::THbookFile : new ::THbookFile;
   }
   static void *newArray_THbookFile(Long_t nElements, void *p) {
      return p ? new(p) ::THbookFile[nElements] : new ::THbookFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_THbookFile(void *p) {
      delete ((::THbookFile*)p);
   }
   static void deleteArray_THbookFile(void *p) {
      delete [] ((::THbookFile*)p);
   }
   static void destruct_THbookFile(void *p) {
      typedef ::THbookFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THbookFile

//______________________________________________________________________________
void THbookKey::Streamer(TBuffer &R__b)
{
   // Stream an object of class THbookKey.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THbookKey::Class(),this);
   } else {
      R__b.WriteClassBuffer(THbookKey::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THbookKey(void *p) {
      return  p ? new(p) ::THbookKey : new ::THbookKey;
   }
   static void *newArray_THbookKey(Long_t nElements, void *p) {
      return p ? new(p) ::THbookKey[nElements] : new ::THbookKey[nElements];
   }
   // Wrapper around operator delete
   static void delete_THbookKey(void *p) {
      delete ((::THbookKey*)p);
   }
   static void deleteArray_THbookKey(void *p) {
      delete [] ((::THbookKey*)p);
   }
   static void destruct_THbookKey(void *p) {
      typedef ::THbookKey current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THbookKey

//______________________________________________________________________________
void THbookTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class THbookTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THbookTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(THbookTree::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THbookTree(void *p) {
      return  p ? new(p) ::THbookTree : new ::THbookTree;
   }
   static void *newArray_THbookTree(Long_t nElements, void *p) {
      return p ? new(p) ::THbookTree[nElements] : new ::THbookTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_THbookTree(void *p) {
      delete ((::THbookTree*)p);
   }
   static void deleteArray_THbookTree(void *p) {
      delete [] ((::THbookTree*)p);
   }
   static void destruct_THbookTree(void *p) {
      typedef ::THbookTree current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_THbookTree(void *p, TDirectory *dir) {
      ((::THbookTree*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t merge_THbookTree(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::THbookTree*)obj)->Merge(coll,info);
   }
   // Wrapper around the Reset function.
   static void reset_THbookTree(void *obj,TFileMergeInfo *info) {
      ((::THbookTree*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::THbookTree

namespace {
  void TriggerDictionaryInitialization_libHbook_Impl() {
    static const char* headers[] = {
"THbookBranch.h",
"THbookFile.h",
"THbookKey.h",
"THbookTree.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libHbook dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "THbookBranch.h"
#include "THbookFile.h"
#include "THbookKey.h"
#include "THbookTree.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libHbook",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHbook_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHbook_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHbook() {
  TriggerDictionaryInitialization_libHbook_Impl();
}
