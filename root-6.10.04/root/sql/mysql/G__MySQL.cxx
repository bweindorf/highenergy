// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__MySQL

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
#include "TMySQLResult.h"
#include "TMySQLRow.h"
#include "TMySQLServer.h"
#include "TMySQLStatement.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TMySQLResult(void *p);
   static void deleteArray_TMySQLResult(void *p);
   static void destruct_TMySQLResult(void *p);
   static void streamer_TMySQLResult(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMySQLResult*)
   {
      ::TMySQLResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMySQLResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMySQLResult", ::TMySQLResult::Class_Version(), "TMySQLResult.h", 19,
                  typeid(::TMySQLResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMySQLResult::Dictionary, isa_proxy, 16,
                  sizeof(::TMySQLResult) );
      instance.SetDelete(&delete_TMySQLResult);
      instance.SetDeleteArray(&deleteArray_TMySQLResult);
      instance.SetDestructor(&destruct_TMySQLResult);
      instance.SetStreamerFunc(&streamer_TMySQLResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMySQLResult*)
   {
      return GenerateInitInstanceLocal((::TMySQLResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMySQLResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMySQLRow(void *p);
   static void deleteArray_TMySQLRow(void *p);
   static void destruct_TMySQLRow(void *p);
   static void streamer_TMySQLRow(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMySQLRow*)
   {
      ::TMySQLRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMySQLRow >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMySQLRow", ::TMySQLRow::Class_Version(), "TMySQLRow.h", 19,
                  typeid(::TMySQLRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMySQLRow::Dictionary, isa_proxy, 16,
                  sizeof(::TMySQLRow) );
      instance.SetDelete(&delete_TMySQLRow);
      instance.SetDeleteArray(&deleteArray_TMySQLRow);
      instance.SetDestructor(&destruct_TMySQLRow);
      instance.SetStreamerFunc(&streamer_TMySQLRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMySQLRow*)
   {
      return GenerateInitInstanceLocal((::TMySQLRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMySQLRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMySQLServer(void *p);
   static void deleteArray_TMySQLServer(void *p);
   static void destruct_TMySQLServer(void *p);
   static void streamer_TMySQLServer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMySQLServer*)
   {
      ::TMySQLServer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMySQLServer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMySQLServer", ::TMySQLServer::Class_Version(), "TMySQLServer.h", 51,
                  typeid(::TMySQLServer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMySQLServer::Dictionary, isa_proxy, 16,
                  sizeof(::TMySQLServer) );
      instance.SetDelete(&delete_TMySQLServer);
      instance.SetDeleteArray(&deleteArray_TMySQLServer);
      instance.SetDestructor(&destruct_TMySQLServer);
      instance.SetStreamerFunc(&streamer_TMySQLServer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMySQLServer*)
   {
      return GenerateInitInstanceLocal((::TMySQLServer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMySQLServer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMySQLStatement(void *p);
   static void deleteArray_TMySQLStatement(void *p);
   static void destruct_TMySQLStatement(void *p);
   static void streamer_TMySQLStatement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMySQLStatement*)
   {
      ::TMySQLStatement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMySQLStatement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMySQLStatement", ::TMySQLStatement::Class_Version(), "TMySQLStatement.h", 25,
                  typeid(::TMySQLStatement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMySQLStatement::Dictionary, isa_proxy, 16,
                  sizeof(::TMySQLStatement) );
      instance.SetDelete(&delete_TMySQLStatement);
      instance.SetDeleteArray(&deleteArray_TMySQLStatement);
      instance.SetDestructor(&destruct_TMySQLStatement);
      instance.SetStreamerFunc(&streamer_TMySQLStatement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMySQLStatement*)
   {
      return GenerateInitInstanceLocal((::TMySQLStatement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMySQLStatement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMySQLResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMySQLResult::Class_Name()
{
   return "TMySQLResult";
}

//______________________________________________________________________________
const char *TMySQLResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMySQLResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMySQLResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMySQLResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMySQLResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMySQLResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMySQLResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMySQLResult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMySQLRow::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMySQLRow::Class_Name()
{
   return "TMySQLRow";
}

//______________________________________________________________________________
const char *TMySQLRow::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMySQLRow*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMySQLRow::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMySQLRow*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMySQLRow::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMySQLRow*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMySQLRow::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMySQLRow*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMySQLServer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMySQLServer::Class_Name()
{
   return "TMySQLServer";
}

//______________________________________________________________________________
const char *TMySQLServer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMySQLServer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMySQLServer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMySQLServer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMySQLServer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMySQLServer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMySQLServer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMySQLServer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMySQLStatement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMySQLStatement::Class_Name()
{
   return "TMySQLStatement";
}

//______________________________________________________________________________
const char *TMySQLStatement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMySQLStatement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMySQLStatement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMySQLStatement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMySQLStatement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMySQLStatement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMySQLStatement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMySQLStatement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TMySQLResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMySQLResult.

   TSQLResult::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMySQLResult(void *p) {
      delete ((::TMySQLResult*)p);
   }
   static void deleteArray_TMySQLResult(void *p) {
      delete [] ((::TMySQLResult*)p);
   }
   static void destruct_TMySQLResult(void *p) {
      typedef ::TMySQLResult current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMySQLResult(TBuffer &buf, void *obj) {
      ((::TMySQLResult*)obj)->::TMySQLResult::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMySQLResult

//______________________________________________________________________________
void TMySQLRow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMySQLRow.

   TSQLRow::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMySQLRow(void *p) {
      delete ((::TMySQLRow*)p);
   }
   static void deleteArray_TMySQLRow(void *p) {
      delete [] ((::TMySQLRow*)p);
   }
   static void destruct_TMySQLRow(void *p) {
      typedef ::TMySQLRow current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMySQLRow(TBuffer &buf, void *obj) {
      ((::TMySQLRow*)obj)->::TMySQLRow::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMySQLRow

//______________________________________________________________________________
void TMySQLServer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMySQLServer.

   TSQLServer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMySQLServer(void *p) {
      delete ((::TMySQLServer*)p);
   }
   static void deleteArray_TMySQLServer(void *p) {
      delete [] ((::TMySQLServer*)p);
   }
   static void destruct_TMySQLServer(void *p) {
      typedef ::TMySQLServer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMySQLServer(TBuffer &buf, void *obj) {
      ((::TMySQLServer*)obj)->::TMySQLServer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMySQLServer

//______________________________________________________________________________
void TMySQLStatement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMySQLStatement.

   TSQLStatement::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMySQLStatement(void *p) {
      delete ((::TMySQLStatement*)p);
   }
   static void deleteArray_TMySQLStatement(void *p) {
      delete [] ((::TMySQLStatement*)p);
   }
   static void destruct_TMySQLStatement(void *p) {
      typedef ::TMySQLStatement current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMySQLStatement(TBuffer &buf, void *obj) {
      ((::TMySQLStatement*)obj)->::TMySQLStatement::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMySQLStatement

namespace {
  void TriggerDictionaryInitialization_libRMySQL_Impl() {
    static const char* headers[] = {
"TMySQLResult.h",
"TMySQLRow.h",
"TMySQLServer.h",
"TMySQLStatement.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/mysql",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libRMySQL dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(MySQL query result)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMySQLResult.h")))  TMySQLResult;
class __attribute__((annotate(R"ATTRDUMP(One row of MySQL query result)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMySQLRow.h")))  TMySQLRow;
class __attribute__((annotate(R"ATTRDUMP(Connection to MySQL server)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMySQLServer.h")))  TMySQLServer;
class __attribute__((annotate(R"ATTRDUMP(SQL statement class for MySQL DB)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(SQL statement class for MySQL DB)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(SQL statement class for MySQL DB)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMySQLStatement.h")))  TMySQLStatement;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRMySQL dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TMySQLResult.h"
#include "TMySQLRow.h"
#include "TMySQLServer.h"
#include "TMySQLStatement.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TMySQLResult", payloadCode, "@",
"TMySQLRow", payloadCode, "@",
"TMySQLServer", payloadCode, "@",
"TMySQLStatement", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRMySQL",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRMySQL_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRMySQL_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRMySQL() {
  TriggerDictionaryInitialization_libRMySQL_Impl();
}
