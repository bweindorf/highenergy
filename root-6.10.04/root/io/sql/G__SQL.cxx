// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__SQL

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
#include "TBufferSQL2.h"
#include "TKeySQL.h"
#include "TSQLClassInfo.h"
#include "TSQLFile.h"
#include "TSQLObjectData.h"
#include "TSQLStructure.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TBufferSQL2(void *p);
   static void deleteArray_TBufferSQL2(void *p);
   static void destruct_TBufferSQL2(void *p);
   static void streamer_TBufferSQL2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBufferSQL2*)
   {
      ::TBufferSQL2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBufferSQL2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBufferSQL2", ::TBufferSQL2::Class_Version(), "TBufferSQL2.h", 30,
                  typeid(::TBufferSQL2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBufferSQL2::Dictionary, isa_proxy, 16,
                  sizeof(::TBufferSQL2) );
      instance.SetDelete(&delete_TBufferSQL2);
      instance.SetDeleteArray(&deleteArray_TBufferSQL2);
      instance.SetDestructor(&destruct_TBufferSQL2);
      instance.SetStreamerFunc(&streamer_TBufferSQL2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBufferSQL2*)
   {
      return GenerateInitInstanceLocal((::TBufferSQL2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBufferSQL2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TKeySQL(void *p);
   static void deleteArray_TKeySQL(void *p);
   static void destruct_TKeySQL(void *p);
   static void streamer_TKeySQL(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKeySQL*)
   {
      ::TKeySQL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKeySQL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TKeySQL", ::TKeySQL::Class_Version(), "TKeySQL.h", 20,
                  typeid(::TKeySQL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKeySQL::Dictionary, isa_proxy, 16,
                  sizeof(::TKeySQL) );
      instance.SetDelete(&delete_TKeySQL);
      instance.SetDeleteArray(&deleteArray_TKeySQL);
      instance.SetDestructor(&destruct_TKeySQL);
      instance.SetStreamerFunc(&streamer_TKeySQL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKeySQL*)
   {
      return GenerateInitInstanceLocal((::TKeySQL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TKeySQL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLClassColumnInfo(void *p = 0);
   static void *newArray_TSQLClassColumnInfo(Long_t size, void *p);
   static void delete_TSQLClassColumnInfo(void *p);
   static void deleteArray_TSQLClassColumnInfo(void *p);
   static void destruct_TSQLClassColumnInfo(void *p);
   static void streamer_TSQLClassColumnInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLClassColumnInfo*)
   {
      ::TSQLClassColumnInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLClassColumnInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLClassColumnInfo", ::TSQLClassColumnInfo::Class_Version(), "TSQLClassInfo.h", 21,
                  typeid(::TSQLClassColumnInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLClassColumnInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLClassColumnInfo) );
      instance.SetNew(&new_TSQLClassColumnInfo);
      instance.SetNewArray(&newArray_TSQLClassColumnInfo);
      instance.SetDelete(&delete_TSQLClassColumnInfo);
      instance.SetDeleteArray(&deleteArray_TSQLClassColumnInfo);
      instance.SetDestructor(&destruct_TSQLClassColumnInfo);
      instance.SetStreamerFunc(&streamer_TSQLClassColumnInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLClassColumnInfo*)
   {
      return GenerateInitInstanceLocal((::TSQLClassColumnInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLClassColumnInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLClassInfo(void *p = 0);
   static void *newArray_TSQLClassInfo(Long_t size, void *p);
   static void delete_TSQLClassInfo(void *p);
   static void deleteArray_TSQLClassInfo(void *p);
   static void destruct_TSQLClassInfo(void *p);
   static void streamer_TSQLClassInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLClassInfo*)
   {
      ::TSQLClassInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLClassInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLClassInfo", ::TSQLClassInfo::Class_Version(), "TSQLClassInfo.h", 44,
                  typeid(::TSQLClassInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLClassInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLClassInfo) );
      instance.SetNew(&new_TSQLClassInfo);
      instance.SetNewArray(&newArray_TSQLClassInfo);
      instance.SetDelete(&delete_TSQLClassInfo);
      instance.SetDeleteArray(&deleteArray_TSQLClassInfo);
      instance.SetDestructor(&destruct_TSQLClassInfo);
      instance.SetStreamerFunc(&streamer_TSQLClassInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLClassInfo*)
   {
      return GenerateInitInstanceLocal((::TSQLClassInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLClassInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLFile(void *p = 0);
   static void *newArray_TSQLFile(Long_t size, void *p);
   static void delete_TSQLFile(void *p);
   static void deleteArray_TSQLFile(void *p);
   static void destruct_TSQLFile(void *p);
   static void streamer_TSQLFile(TBuffer &buf, void *obj);
   static void reset_TSQLFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLFile*)
   {
      ::TSQLFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLFile", ::TSQLFile::Class_Version(), "TSQLFile.h", 30,
                  typeid(::TSQLFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLFile::Dictionary, isa_proxy, 17,
                  sizeof(::TSQLFile) );
      instance.SetNew(&new_TSQLFile);
      instance.SetNewArray(&newArray_TSQLFile);
      instance.SetDelete(&delete_TSQLFile);
      instance.SetDeleteArray(&deleteArray_TSQLFile);
      instance.SetDestructor(&destruct_TSQLFile);
      instance.SetStreamerFunc(&streamer_TSQLFile);
      instance.SetResetAfterMerge(&reset_TSQLFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLFile*)
   {
      return GenerateInitInstanceLocal((::TSQLFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLObjectInfo(void *p = 0);
   static void *newArray_TSQLObjectInfo(Long_t size, void *p);
   static void delete_TSQLObjectInfo(void *p);
   static void deleteArray_TSQLObjectInfo(void *p);
   static void destruct_TSQLObjectInfo(void *p);
   static void streamer_TSQLObjectInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLObjectInfo*)
   {
      ::TSQLObjectInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLObjectInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLObjectInfo", ::TSQLObjectInfo::Class_Version(), "TSQLObjectData.h", 27,
                  typeid(::TSQLObjectInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLObjectInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLObjectInfo) );
      instance.SetNew(&new_TSQLObjectInfo);
      instance.SetNewArray(&newArray_TSQLObjectInfo);
      instance.SetDelete(&delete_TSQLObjectInfo);
      instance.SetDeleteArray(&deleteArray_TSQLObjectInfo);
      instance.SetDestructor(&destruct_TSQLObjectInfo);
      instance.SetStreamerFunc(&streamer_TSQLObjectInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLObjectInfo*)
   {
      return GenerateInitInstanceLocal((::TSQLObjectInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLObjectInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLObjectData(void *p = 0);
   static void *newArray_TSQLObjectData(Long_t size, void *p);
   static void delete_TSQLObjectData(void *p);
   static void deleteArray_TSQLObjectData(void *p);
   static void destruct_TSQLObjectData(void *p);
   static void streamer_TSQLObjectData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLObjectData*)
   {
      ::TSQLObjectData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLObjectData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLObjectData", ::TSQLObjectData::Class_Version(), "TSQLObjectData.h", 50,
                  typeid(::TSQLObjectData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLObjectData::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLObjectData) );
      instance.SetNew(&new_TSQLObjectData);
      instance.SetNewArray(&newArray_TSQLObjectData);
      instance.SetDelete(&delete_TSQLObjectData);
      instance.SetDeleteArray(&deleteArray_TSQLObjectData);
      instance.SetDestructor(&destruct_TSQLObjectData);
      instance.SetStreamerFunc(&streamer_TSQLObjectData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLObjectData*)
   {
      return GenerateInitInstanceLocal((::TSQLObjectData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLObjectData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLObjectDataPool(void *p = 0);
   static void *newArray_TSQLObjectDataPool(Long_t size, void *p);
   static void delete_TSQLObjectDataPool(void *p);
   static void deleteArray_TSQLObjectDataPool(void *p);
   static void destruct_TSQLObjectDataPool(void *p);
   static void streamer_TSQLObjectDataPool(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLObjectDataPool*)
   {
      ::TSQLObjectDataPool *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLObjectDataPool >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLObjectDataPool", ::TSQLObjectDataPool::Class_Version(), "TSQLObjectData.h", 116,
                  typeid(::TSQLObjectDataPool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLObjectDataPool::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLObjectDataPool) );
      instance.SetNew(&new_TSQLObjectDataPool);
      instance.SetNewArray(&newArray_TSQLObjectDataPool);
      instance.SetDelete(&delete_TSQLObjectDataPool);
      instance.SetDeleteArray(&deleteArray_TSQLObjectDataPool);
      instance.SetDestructor(&destruct_TSQLObjectDataPool);
      instance.SetStreamerFunc(&streamer_TSQLObjectDataPool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLObjectDataPool*)
   {
      return GenerateInitInstanceLocal((::TSQLObjectDataPool*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLObjectDataPool*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLColumnData(void *p = 0);
   static void *newArray_TSQLColumnData(Long_t size, void *p);
   static void delete_TSQLColumnData(void *p);
   static void deleteArray_TSQLColumnData(void *p);
   static void destruct_TSQLColumnData(void *p);
   static void streamer_TSQLColumnData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLColumnData*)
   {
      ::TSQLColumnData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLColumnData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLColumnData", ::TSQLColumnData::Class_Version(), "TSQLStructure.h", 42,
                  typeid(::TSQLColumnData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLColumnData::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLColumnData) );
      instance.SetNew(&new_TSQLColumnData);
      instance.SetNewArray(&newArray_TSQLColumnData);
      instance.SetDelete(&delete_TSQLColumnData);
      instance.SetDeleteArray(&deleteArray_TSQLColumnData);
      instance.SetDestructor(&destruct_TSQLColumnData);
      instance.SetStreamerFunc(&streamer_TSQLColumnData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLColumnData*)
   {
      return GenerateInitInstanceLocal((::TSQLColumnData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLColumnData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLTableData(void *p = 0);
   static void *newArray_TSQLTableData(Long_t size, void *p);
   static void delete_TSQLTableData(void *p);
   static void deleteArray_TSQLTableData(void *p);
   static void destruct_TSQLTableData(void *p);
   static void streamer_TSQLTableData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLTableData*)
   {
      ::TSQLTableData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLTableData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLTableData", ::TSQLTableData::Class_Version(), "TSQLStructure.h", 69,
                  typeid(::TSQLTableData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLTableData::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLTableData) );
      instance.SetNew(&new_TSQLTableData);
      instance.SetNewArray(&newArray_TSQLTableData);
      instance.SetDelete(&delete_TSQLTableData);
      instance.SetDeleteArray(&deleteArray_TSQLTableData);
      instance.SetDestructor(&destruct_TSQLTableData);
      instance.SetStreamerFunc(&streamer_TSQLTableData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLTableData*)
   {
      return GenerateInitInstanceLocal((::TSQLTableData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLTableData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLStructure(void *p = 0);
   static void *newArray_TSQLStructure(Long_t size, void *p);
   static void delete_TSQLStructure(void *p);
   static void deleteArray_TSQLStructure(void *p);
   static void destruct_TSQLStructure(void *p);
   static void streamer_TSQLStructure(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLStructure*)
   {
      ::TSQLStructure *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLStructure >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLStructure", ::TSQLStructure::Class_Version(), "TSQLStructure.h", 101,
                  typeid(::TSQLStructure), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLStructure::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLStructure) );
      instance.SetNew(&new_TSQLStructure);
      instance.SetNewArray(&newArray_TSQLStructure);
      instance.SetDelete(&delete_TSQLStructure);
      instance.SetDeleteArray(&deleteArray_TSQLStructure);
      instance.SetDestructor(&destruct_TSQLStructure);
      instance.SetStreamerFunc(&streamer_TSQLStructure);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLStructure*)
   {
      return GenerateInitInstanceLocal((::TSQLStructure*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLStructure*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TBufferSQL2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferSQL2::Class_Name()
{
   return "TBufferSQL2";
}

//______________________________________________________________________________
const char *TBufferSQL2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferSQL2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferSQL2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferSQL2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferSQL2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferSQL2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferSQL2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferSQL2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TKeySQL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TKeySQL::Class_Name()
{
   return "TKeySQL";
}

//______________________________________________________________________________
const char *TKeySQL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKeySQL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TKeySQL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKeySQL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKeySQL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKeySQL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKeySQL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKeySQL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLClassColumnInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLClassColumnInfo::Class_Name()
{
   return "TSQLClassColumnInfo";
}

//______________________________________________________________________________
const char *TSQLClassColumnInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLClassColumnInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLClassColumnInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLClassColumnInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLClassColumnInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLClassColumnInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLClassColumnInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLClassColumnInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLClassInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLClassInfo::Class_Name()
{
   return "TSQLClassInfo";
}

//______________________________________________________________________________
const char *TSQLClassInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLClassInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLClassInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLClassInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLClassInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLClassInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLClassInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLClassInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLFile::Class_Name()
{
   return "TSQLFile";
}

//______________________________________________________________________________
const char *TSQLFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLObjectInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLObjectInfo::Class_Name()
{
   return "TSQLObjectInfo";
}

//______________________________________________________________________________
const char *TSQLObjectInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLObjectInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLObjectInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLObjectInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLObjectData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLObjectData::Class_Name()
{
   return "TSQLObjectData";
}

//______________________________________________________________________________
const char *TSQLObjectData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLObjectData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLObjectData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLObjectData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLObjectDataPool::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLObjectDataPool::Class_Name()
{
   return "TSQLObjectDataPool";
}

//______________________________________________________________________________
const char *TSQLObjectDataPool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectDataPool*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLObjectDataPool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectDataPool*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLObjectDataPool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectDataPool*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLObjectDataPool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLObjectDataPool*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLColumnData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLColumnData::Class_Name()
{
   return "TSQLColumnData";
}

//______________________________________________________________________________
const char *TSQLColumnData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLColumnData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLColumnData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLColumnData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLColumnData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLColumnData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLColumnData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLColumnData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLTableData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLTableData::Class_Name()
{
   return "TSQLTableData";
}

//______________________________________________________________________________
const char *TSQLTableData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLTableData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLTableData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLTableData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLTableData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLTableData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLTableData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLTableData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLStructure::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLStructure::Class_Name()
{
   return "TSQLStructure";
}

//______________________________________________________________________________
const char *TSQLStructure::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLStructure*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLStructure::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLStructure*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLStructure::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLStructure*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLStructure::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLStructure*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TBufferSQL2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBufferSQL2.

   TBufferFile::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TBufferSQL2(void *p) {
      delete ((::TBufferSQL2*)p);
   }
   static void deleteArray_TBufferSQL2(void *p) {
      delete [] ((::TBufferSQL2*)p);
   }
   static void destruct_TBufferSQL2(void *p) {
      typedef ::TBufferSQL2 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBufferSQL2(TBuffer &buf, void *obj) {
      ((::TBufferSQL2*)obj)->::TBufferSQL2::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBufferSQL2

//______________________________________________________________________________
void TKeySQL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKeySQL.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TKey::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TKeySQL::IsA());
   } else {
      R__c = R__b.WriteVersion(TKeySQL::IsA(), kTRUE);
      TKey::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TKeySQL(void *p) {
      delete ((::TKeySQL*)p);
   }
   static void deleteArray_TKeySQL(void *p) {
      delete [] ((::TKeySQL*)p);
   }
   static void destruct_TKeySQL(void *p) {
      typedef ::TKeySQL current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TKeySQL(TBuffer &buf, void *obj) {
      ((::TKeySQL*)obj)->::TKeySQL::Streamer(buf);
   }
} // end of namespace ROOT for class ::TKeySQL

//______________________________________________________________________________
void TSQLClassColumnInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLClassColumnInfo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fName.Streamer(R__b);
      fSQLName.Streamer(R__b);
      fSQLType.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TSQLClassColumnInfo::IsA());
   } else {
      R__c = R__b.WriteVersion(TSQLClassColumnInfo::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fName.Streamer(R__b);
      fSQLName.Streamer(R__b);
      fSQLType.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLClassColumnInfo(void *p) {
      return  p ? new(p) ::TSQLClassColumnInfo : new ::TSQLClassColumnInfo;
   }
   static void *newArray_TSQLClassColumnInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLClassColumnInfo[nElements] : new ::TSQLClassColumnInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLClassColumnInfo(void *p) {
      delete ((::TSQLClassColumnInfo*)p);
   }
   static void deleteArray_TSQLClassColumnInfo(void *p) {
      delete [] ((::TSQLClassColumnInfo*)p);
   }
   static void destruct_TSQLClassColumnInfo(void *p) {
      typedef ::TSQLClassColumnInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLClassColumnInfo(TBuffer &buf, void *obj) {
      ((::TSQLClassColumnInfo*)obj)->::TSQLClassColumnInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLClassColumnInfo

//______________________________________________________________________________
void TSQLClassInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLClassInfo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TSQLClassInfo::IsA());
   } else {
      R__c = R__b.WriteVersion(TSQLClassInfo::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLClassInfo(void *p) {
      return  p ? new(p) ::TSQLClassInfo : new ::TSQLClassInfo;
   }
   static void *newArray_TSQLClassInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLClassInfo[nElements] : new ::TSQLClassInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLClassInfo(void *p) {
      delete ((::TSQLClassInfo*)p);
   }
   static void deleteArray_TSQLClassInfo(void *p) {
      delete [] ((::TSQLClassInfo*)p);
   }
   static void destruct_TSQLClassInfo(void *p) {
      typedef ::TSQLClassInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLClassInfo(TBuffer &buf, void *obj) {
      ((::TSQLClassInfo*)obj)->::TSQLClassInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLClassInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLFile(void *p) {
      return  p ? new(p) ::TSQLFile : new ::TSQLFile;
   }
   static void *newArray_TSQLFile(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLFile[nElements] : new ::TSQLFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLFile(void *p) {
      delete ((::TSQLFile*)p);
   }
   static void deleteArray_TSQLFile(void *p) {
      delete [] ((::TSQLFile*)p);
   }
   static void destruct_TSQLFile(void *p) {
      typedef ::TSQLFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLFile(TBuffer &buf, void *obj) {
      ((::TSQLFile*)obj)->::TSQLFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TSQLFile(void *obj,TFileMergeInfo *info) {
      ((::TSQLFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TSQLFile

//______________________________________________________________________________
void TSQLObjectInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLObjectInfo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fObjId;
      fClassName.Streamer(R__b);
      R__b >> fVersion;
      R__b.CheckByteCount(R__s, R__c, TSQLObjectInfo::IsA());
   } else {
      R__c = R__b.WriteVersion(TSQLObjectInfo::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fObjId;
      fClassName.Streamer(R__b);
      R__b << fVersion;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLObjectInfo(void *p) {
      return  p ? new(p) ::TSQLObjectInfo : new ::TSQLObjectInfo;
   }
   static void *newArray_TSQLObjectInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLObjectInfo[nElements] : new ::TSQLObjectInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLObjectInfo(void *p) {
      delete ((::TSQLObjectInfo*)p);
   }
   static void deleteArray_TSQLObjectInfo(void *p) {
      delete [] ((::TSQLObjectInfo*)p);
   }
   static void destruct_TSQLObjectInfo(void *p) {
      typedef ::TSQLObjectInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLObjectInfo(TBuffer &buf, void *obj) {
      ((::TSQLObjectInfo*)obj)->::TSQLObjectInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLObjectInfo

//______________________________________________________________________________
void TSQLObjectData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLObjectData.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TSQLObjectData::IsA());
   } else {
      R__c = R__b.WriteVersion(TSQLObjectData::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLObjectData(void *p) {
      return  p ? new(p) ::TSQLObjectData : new ::TSQLObjectData;
   }
   static void *newArray_TSQLObjectData(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLObjectData[nElements] : new ::TSQLObjectData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLObjectData(void *p) {
      delete ((::TSQLObjectData*)p);
   }
   static void deleteArray_TSQLObjectData(void *p) {
      delete [] ((::TSQLObjectData*)p);
   }
   static void destruct_TSQLObjectData(void *p) {
      typedef ::TSQLObjectData current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLObjectData(TBuffer &buf, void *obj) {
      ((::TSQLObjectData*)obj)->::TSQLObjectData::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLObjectData

//______________________________________________________________________________
void TSQLObjectDataPool::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLObjectDataPool.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TSQLObjectDataPool::IsA());
   } else {
      R__c = R__b.WriteVersion(TSQLObjectDataPool::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLObjectDataPool(void *p) {
      return  p ? new(p) ::TSQLObjectDataPool : new ::TSQLObjectDataPool;
   }
   static void *newArray_TSQLObjectDataPool(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLObjectDataPool[nElements] : new ::TSQLObjectDataPool[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLObjectDataPool(void *p) {
      delete ((::TSQLObjectDataPool*)p);
   }
   static void deleteArray_TSQLObjectDataPool(void *p) {
      delete [] ((::TSQLObjectDataPool*)p);
   }
   static void destruct_TSQLObjectDataPool(void *p) {
      typedef ::TSQLObjectDataPool current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLObjectDataPool(TBuffer &buf, void *obj) {
      ((::TSQLObjectDataPool*)obj)->::TSQLObjectDataPool::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLObjectDataPool

//______________________________________________________________________________
void TSQLColumnData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLColumnData.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TSQLColumnData::IsA());
   } else {
      R__c = R__b.WriteVersion(TSQLColumnData::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLColumnData(void *p) {
      return  p ? new(p) ::TSQLColumnData : new ::TSQLColumnData;
   }
   static void *newArray_TSQLColumnData(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLColumnData[nElements] : new ::TSQLColumnData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLColumnData(void *p) {
      delete ((::TSQLColumnData*)p);
   }
   static void deleteArray_TSQLColumnData(void *p) {
      delete [] ((::TSQLColumnData*)p);
   }
   static void destruct_TSQLColumnData(void *p) {
      typedef ::TSQLColumnData current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLColumnData(TBuffer &buf, void *obj) {
      ((::TSQLColumnData*)obj)->::TSQLColumnData::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLColumnData

//______________________________________________________________________________
void TSQLTableData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLTableData.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TSQLTableData::IsA());
   } else {
      R__c = R__b.WriteVersion(TSQLTableData::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLTableData(void *p) {
      return  p ? new(p) ::TSQLTableData : new ::TSQLTableData;
   }
   static void *newArray_TSQLTableData(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLTableData[nElements] : new ::TSQLTableData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLTableData(void *p) {
      delete ((::TSQLTableData*)p);
   }
   static void deleteArray_TSQLTableData(void *p) {
      delete [] ((::TSQLTableData*)p);
   }
   static void destruct_TSQLTableData(void *p) {
      typedef ::TSQLTableData current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLTableData(TBuffer &buf, void *obj) {
      ((::TSQLTableData*)obj)->::TSQLTableData::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLTableData

//______________________________________________________________________________
void TSQLStructure::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLStructure.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TSQLStructure::IsA());
   } else {
      R__c = R__b.WriteVersion(TSQLStructure::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLStructure(void *p) {
      return  p ? new(p) ::TSQLStructure : new ::TSQLStructure;
   }
   static void *newArray_TSQLStructure(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLStructure[nElements] : new ::TSQLStructure[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLStructure(void *p) {
      delete ((::TSQLStructure*)p);
   }
   static void deleteArray_TSQLStructure(void *p) {
      delete [] ((::TSQLStructure*)p);
   }
   static void destruct_TSQLStructure(void *p) {
      typedef ::TSQLStructure current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLStructure(TBuffer &buf, void *obj) {
      ((::TSQLStructure*)obj)->::TSQLStructure::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLStructure

namespace {
  void TriggerDictionaryInitialization_libSQLIO_Impl() {
    static const char* headers[] = {
"TBufferSQL2.h",
"TKeySQL.h",
"TSQLClassInfo.h",
"TSQLFile.h",
"TSQLObjectData.h",
"TSQLStructure.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libSQLIO dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(a specialized TBuffer to convert data to SQL statements or read data from SQL tables)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(a specialized TBuffer to convert data to SQL statements or read data from SQL tables)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(a specialized TBuffer to convert data to SQL statements or read data from SQL tables)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TBufferSQL2.h")))  TBufferSQL2;
class __attribute__((annotate(R"ATTRDUMP(a special TKey for SQL data base)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TKeySQL.h")))  TKeySQL;
class __attribute__((annotate(R"ATTRDUMP(Keeps information about single column in class table)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Keeps information about single column in class table)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Keeps information about single column in class table)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSQLClassInfo.h")))  TSQLClassColumnInfo;
class __attribute__((annotate(R"ATTRDUMP(Keeps the table information relevant for one class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Keeps the table information relevant for one class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Keeps the table information relevant for one class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSQLClassInfo.h")))  TSQLClassInfo;
class __attribute__((annotate(R"ATTRDUMP(ROOT TFile interface to SQL database)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSQLFile.h")))  TSQLFile;
class __attribute__((annotate(R"ATTRDUMP(Info (classname, version) about object in database)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSQLObjectData.h")))  TSQLObjectInfo;
class __attribute__((annotate(R"ATTRDUMP(Keeps the data requested from the SQL server for an object.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSQLObjectData.h")))  TSQLObjectData;
class __attribute__((annotate(R"ATTRDUMP(XML object keeper class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSQLObjectData.h")))  TSQLObjectDataPool;
class __attribute__((annotate(R"ATTRDUMP(Single SQL column data.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Single SQL column data.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Single SQL column data.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSQLStructure.h")))  TSQLColumnData;
class __attribute__((annotate(R"ATTRDUMP(Collection of columns data for single SQL table)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Collection of columns data for single SQL table)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Collection of columns data for single SQL table)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSQLStructure.h")))  TSQLTableData;
class __attribute__((annotate(R"ATTRDUMP(Table/structure description used internally by TBufferSQL.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Table/structure description used internally by TBufferSQL.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Table/structure description used internally by TBufferSQL.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSQLStructure.h")))  TSQLStructure;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSQLIO dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TBufferSQL2.h"
#include "TKeySQL.h"
#include "TSQLClassInfo.h"
#include "TSQLFile.h"
#include "TSQLObjectData.h"
#include "TSQLStructure.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TBufferSQL2", payloadCode, "@",
"TKeySQL", payloadCode, "@",
"TSQLClassColumnInfo", payloadCode, "@",
"TSQLClassInfo", payloadCode, "@",
"TSQLColumnData", payloadCode, "@",
"TSQLFile", payloadCode, "@",
"TSQLObjectData", payloadCode, "@",
"TSQLObjectDataPool", payloadCode, "@",
"TSQLObjectInfo", payloadCode, "@",
"TSQLStructure", payloadCode, "@",
"TSQLTableData", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSQLIO",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSQLIO_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSQLIO_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSQLIO() {
  TriggerDictionaryInitialization_libSQLIO_Impl();
}
