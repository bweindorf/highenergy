// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__XMLParser

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
#include "TDOMParser.h"
#include "TSAXParser.h"
#include "TXMLAttr.h"
#include "TXMLDocument.h"
#include "TXMLNode.h"
#include "TXMLParser.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TXMLParser(void *p);
   static void deleteArray_TXMLParser(void *p);
   static void destruct_TXMLParser(void *p);
   static void streamer_TXMLParser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLParser*)
   {
      ::TXMLParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLParser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLParser", ::TXMLParser::Class_Version(), "TXMLParser.h", 24,
                  typeid(::TXMLParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLParser::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLParser) );
      instance.SetDelete(&delete_TXMLParser);
      instance.SetDeleteArray(&deleteArray_TXMLParser);
      instance.SetDestructor(&destruct_TXMLParser);
      instance.SetStreamerFunc(&streamer_TXMLParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLParser*)
   {
      return GenerateInitInstanceLocal((::TXMLParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TXMLParser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TXMLDocument(void *p);
   static void deleteArray_TXMLDocument(void *p);
   static void destruct_TXMLDocument(void *p);
   static void streamer_TXMLDocument(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLDocument*)
   {
      ::TXMLDocument *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLDocument >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLDocument", ::TXMLDocument::Class_Version(), "TXMLDocument.h", 24,
                  typeid(::TXMLDocument), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLDocument::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLDocument) );
      instance.SetDelete(&delete_TXMLDocument);
      instance.SetDeleteArray(&deleteArray_TXMLDocument);
      instance.SetDestructor(&destruct_TXMLDocument);
      instance.SetStreamerFunc(&streamer_TXMLDocument);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLDocument*)
   {
      return GenerateInitInstanceLocal((::TXMLDocument*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TXMLDocument*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDOMParser(void *p = 0);
   static void *newArray_TDOMParser(Long_t size, void *p);
   static void delete_TDOMParser(void *p);
   static void deleteArray_TDOMParser(void *p);
   static void destruct_TDOMParser(void *p);
   static void streamer_TDOMParser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDOMParser*)
   {
      ::TDOMParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDOMParser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDOMParser", ::TDOMParser::Class_Version(), "TDOMParser.h", 20,
                  typeid(::TDOMParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDOMParser::Dictionary, isa_proxy, 16,
                  sizeof(::TDOMParser) );
      instance.SetNew(&new_TDOMParser);
      instance.SetNewArray(&newArray_TDOMParser);
      instance.SetDelete(&delete_TDOMParser);
      instance.SetDeleteArray(&deleteArray_TDOMParser);
      instance.SetDestructor(&destruct_TDOMParser);
      instance.SetStreamerFunc(&streamer_TDOMParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDOMParser*)
   {
      return GenerateInitInstanceLocal((::TDOMParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDOMParser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSAXParser(void *p = 0);
   static void *newArray_TSAXParser(Long_t size, void *p);
   static void delete_TSAXParser(void *p);
   static void deleteArray_TSAXParser(void *p);
   static void destruct_TSAXParser(void *p);
   static void streamer_TSAXParser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSAXParser*)
   {
      ::TSAXParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSAXParser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSAXParser", ::TSAXParser::Class_Version(), "TSAXParser.h", 23,
                  typeid(::TSAXParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSAXParser::Dictionary, isa_proxy, 16,
                  sizeof(::TSAXParser) );
      instance.SetNew(&new_TSAXParser);
      instance.SetNewArray(&newArray_TSAXParser);
      instance.SetDelete(&delete_TSAXParser);
      instance.SetDeleteArray(&deleteArray_TSAXParser);
      instance.SetDestructor(&destruct_TSAXParser);
      instance.SetStreamerFunc(&streamer_TSAXParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSAXParser*)
   {
      return GenerateInitInstanceLocal((::TSAXParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSAXParser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TXMLAttr(void *p);
   static void deleteArray_TXMLAttr(void *p);
   static void destruct_TXMLAttr(void *p);
   static void streamer_TXMLAttr(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLAttr*)
   {
      ::TXMLAttr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLAttr >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLAttr", ::TXMLAttr::Class_Version(), "TXMLAttr.h", 18,
                  typeid(::TXMLAttr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLAttr::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLAttr) );
      instance.SetDelete(&delete_TXMLAttr);
      instance.SetDeleteArray(&deleteArray_TXMLAttr);
      instance.SetDestructor(&destruct_TXMLAttr);
      instance.SetStreamerFunc(&streamer_TXMLAttr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLAttr*)
   {
      return GenerateInitInstanceLocal((::TXMLAttr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TXMLAttr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TXMLNode(void *p);
   static void deleteArray_TXMLNode(void *p);
   static void destruct_TXMLNode(void *p);
   static void streamer_TXMLNode(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXMLNode*)
   {
      ::TXMLNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXMLNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TXMLNode", ::TXMLNode::Class_Version(), "TXMLNode.h", 22,
                  typeid(::TXMLNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXMLNode::Dictionary, isa_proxy, 16,
                  sizeof(::TXMLNode) );
      instance.SetDelete(&delete_TXMLNode);
      instance.SetDeleteArray(&deleteArray_TXMLNode);
      instance.SetDestructor(&destruct_TXMLNode);
      instance.SetStreamerFunc(&streamer_TXMLNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXMLNode*)
   {
      return GenerateInitInstanceLocal((::TXMLNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TXMLNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TXMLParser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLParser::Class_Name()
{
   return "TXMLParser";
}

//______________________________________________________________________________
const char *TXMLParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLParser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLParser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLParser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLParser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXMLDocument::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLDocument::Class_Name()
{
   return "TXMLDocument";
}

//______________________________________________________________________________
const char *TXMLDocument::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLDocument*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLDocument::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLDocument*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLDocument::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLDocument*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLDocument::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLDocument*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDOMParser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDOMParser::Class_Name()
{
   return "TDOMParser";
}

//______________________________________________________________________________
const char *TDOMParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDOMParser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDOMParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDOMParser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDOMParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDOMParser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDOMParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDOMParser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSAXParser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSAXParser::Class_Name()
{
   return "TSAXParser";
}

//______________________________________________________________________________
const char *TSAXParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSAXParser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSAXParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSAXParser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSAXParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSAXParser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSAXParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSAXParser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXMLAttr::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLAttr::Class_Name()
{
   return "TXMLAttr";
}

//______________________________________________________________________________
const char *TXMLAttr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLAttr*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLAttr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLAttr*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLAttr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLAttr*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLAttr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLAttr*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXMLNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TXMLNode::Class_Name()
{
   return "TXMLNode";
}

//______________________________________________________________________________
const char *TXMLNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TXMLNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXMLNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXMLNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXMLNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXMLNode*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TXMLParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLParser.

   TObject::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TXMLParser(void *p) {
      delete ((::TXMLParser*)p);
   }
   static void deleteArray_TXMLParser(void *p) {
      delete [] ((::TXMLParser*)p);
   }
   static void destruct_TXMLParser(void *p) {
      typedef ::TXMLParser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLParser(TBuffer &buf, void *obj) {
      ((::TXMLParser*)obj)->::TXMLParser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLParser

//______________________________________________________________________________
void TXMLDocument::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLDocument.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TXMLDocument(void *p) {
      delete ((::TXMLDocument*)p);
   }
   static void deleteArray_TXMLDocument(void *p) {
      delete [] ((::TXMLDocument*)p);
   }
   static void destruct_TXMLDocument(void *p) {
      typedef ::TXMLDocument current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLDocument(TBuffer &buf, void *obj) {
      ((::TXMLDocument*)obj)->::TXMLDocument::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLDocument

//______________________________________________________________________________
void TDOMParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDOMParser.

   TXMLParser::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDOMParser(void *p) {
      return  p ? new(p) ::TDOMParser : new ::TDOMParser;
   }
   static void *newArray_TDOMParser(Long_t nElements, void *p) {
      return p ? new(p) ::TDOMParser[nElements] : new ::TDOMParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDOMParser(void *p) {
      delete ((::TDOMParser*)p);
   }
   static void deleteArray_TDOMParser(void *p) {
      delete [] ((::TDOMParser*)p);
   }
   static void destruct_TDOMParser(void *p) {
      typedef ::TDOMParser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDOMParser(TBuffer &buf, void *obj) {
      ((::TDOMParser*)obj)->::TDOMParser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDOMParser

//______________________________________________________________________________
void TSAXParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSAXParser.

   TXMLParser::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSAXParser(void *p) {
      return  p ? new(p) ::TSAXParser : new ::TSAXParser;
   }
   static void *newArray_TSAXParser(Long_t nElements, void *p) {
      return p ? new(p) ::TSAXParser[nElements] : new ::TSAXParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSAXParser(void *p) {
      delete ((::TSAXParser*)p);
   }
   static void deleteArray_TSAXParser(void *p) {
      delete [] ((::TSAXParser*)p);
   }
   static void destruct_TSAXParser(void *p) {
      typedef ::TSAXParser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSAXParser(TBuffer &buf, void *obj) {
      ((::TSAXParser*)obj)->::TSAXParser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSAXParser

//______________________________________________________________________________
void TXMLAttr::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLAttr.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TXMLAttr(void *p) {
      delete ((::TXMLAttr*)p);
   }
   static void deleteArray_TXMLAttr(void *p) {
      delete [] ((::TXMLAttr*)p);
   }
   static void destruct_TXMLAttr(void *p) {
      typedef ::TXMLAttr current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLAttr(TBuffer &buf, void *obj) {
      ((::TXMLAttr*)obj)->::TXMLAttr::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLAttr

//______________________________________________________________________________
void TXMLNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXMLNode.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TXMLNode(void *p) {
      delete ((::TXMLNode*)p);
   }
   static void deleteArray_TXMLNode(void *p) {
      delete [] ((::TXMLNode*)p);
   }
   static void destruct_TXMLNode(void *p) {
      typedef ::TXMLNode current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXMLNode(TBuffer &buf, void *obj) {
      ((::TXMLNode*)obj)->::TXMLNode::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXMLNode

namespace {
  void TriggerDictionaryInitialization_libXMLParser_Impl() {
    static const char* headers[] = {
"TDOMParser.h",
"TSAXParser.h",
"TXMLAttr.h",
"TXMLDocument.h",
"TXMLNode.h",
"TXMLParser.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/libxml2",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libXMLParser dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(XML SAX parser)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(XML SAX parser)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(XML SAX parser)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TXMLParser.h")))  __attribute__((annotate("$clingAutoload$TDOMParser.h")))  TXMLParser;
class __attribute__((annotate(R"ATTRDUMP(XML document created by the DOM parser)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TXMLDocument.h")))  __attribute__((annotate("$clingAutoload$TDOMParser.h")))  TXMLDocument;
class __attribute__((annotate(R"ATTRDUMP(DOM Parser)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(DOM Parser)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(DOM Parser)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDOMParser.h")))  TDOMParser;
class __attribute__((annotate(R"ATTRDUMP(SAX Parser)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(SAX Parser)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(SAX Parser)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSAXParser.h")))  TSAXParser;
class __attribute__((annotate(R"ATTRDUMP(XML attribute pair)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TXMLAttr.h")))  TXMLAttr;
class __attribute__((annotate(R"ATTRDUMP(XML node under DOM tree)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(XML node under DOM tree)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(XML node under DOM tree)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TXMLNode.h")))  TXMLNode;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libXMLParser dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TDOMParser.h"
#include "TSAXParser.h"
#include "TXMLAttr.h"
#include "TXMLDocument.h"
#include "TXMLNode.h"
#include "TXMLParser.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TDOMParser", payloadCode, "@",
"TSAXParser", payloadCode, "@",
"TXMLAttr", payloadCode, "@",
"TXMLDocument", payloadCode, "@",
"TXMLNode", payloadCode, "@",
"TXMLParser", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libXMLParser",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libXMLParser_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libXMLParser_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libXMLParser() {
  TriggerDictionaryInitialization_libXMLParser_Impl();
}
