// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Html

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
#include "TClassDocOutput.h"
#include "TDocDirective.h"
#include "TDocInfo.h"
#include "TDocOutput.h"
#include "TDocParser.h"
#include "THtml.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TDocParser(void *p);
   static void deleteArray_TDocParser(void *p);
   static void destruct_TDocParser(void *p);
   static void streamer_TDocParser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDocParser*)
   {
      ::TDocParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDocParser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDocParser", ::TDocParser::Class_Version(), "TDocParser.h", 44,
                  typeid(::TDocParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDocParser::Dictionary, isa_proxy, 16,
                  sizeof(::TDocParser) );
      instance.SetDelete(&delete_TDocParser);
      instance.SetDeleteArray(&deleteArray_TDocParser);
      instance.SetDestructor(&destruct_TDocParser);
      instance.SetStreamerFunc(&streamer_TDocParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDocParser*)
   {
      return GenerateInitInstanceLocal((::TDocParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDocParser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDocOutput(void *p);
   static void deleteArray_TDocOutput(void *p);
   static void destruct_TDocOutput(void *p);
   static void streamer_TDocOutput(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDocOutput*)
   {
      ::TDocOutput *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDocOutput >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDocOutput", ::TDocOutput::Class_Version(), "TDocOutput.h", 37,
                  typeid(::TDocOutput), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDocOutput::Dictionary, isa_proxy, 16,
                  sizeof(::TDocOutput) );
      instance.SetDelete(&delete_TDocOutput);
      instance.SetDeleteArray(&deleteArray_TDocOutput);
      instance.SetDestructor(&destruct_TDocOutput);
      instance.SetStreamerFunc(&streamer_TDocOutput);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDocOutput*)
   {
      return GenerateInitInstanceLocal((::TDocOutput*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDocOutput*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TClassDocOutput(void *p);
   static void deleteArray_TClassDocOutput(void *p);
   static void destruct_TClassDocOutput(void *p);
   static void streamer_TClassDocOutput(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TClassDocOutput*)
   {
      ::TClassDocOutput *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TClassDocOutput >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TClassDocOutput", ::TClassDocOutput::Class_Version(), "TClassDocOutput.h", 22,
                  typeid(::TClassDocOutput), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TClassDocOutput::Dictionary, isa_proxy, 16,
                  sizeof(::TClassDocOutput) );
      instance.SetDelete(&delete_TClassDocOutput);
      instance.SetDeleteArray(&deleteArray_TClassDocOutput);
      instance.SetDestructor(&destruct_TClassDocOutput);
      instance.SetStreamerFunc(&streamer_TClassDocOutput);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TClassDocOutput*)
   {
      return GenerateInitInstanceLocal((::TClassDocOutput*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TClassDocOutput*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void streamer_TDocDirective(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDocDirective*)
   {
      ::TDocDirective *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDocDirective >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDocDirective", ::TDocDirective::Class_Version(), "TDocDirective.h", 34,
                  typeid(::TDocDirective), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDocDirective::Dictionary, isa_proxy, 16,
                  sizeof(::TDocDirective) );
      instance.SetStreamerFunc(&streamer_TDocDirective);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDocDirective*)
   {
      return GenerateInitInstanceLocal((::TDocDirective*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDocDirective*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDocHtmlDirective(void *p = 0);
   static void *newArray_TDocHtmlDirective(Long_t size, void *p);
   static void delete_TDocHtmlDirective(void *p);
   static void deleteArray_TDocHtmlDirective(void *p);
   static void destruct_TDocHtmlDirective(void *p);
   static void streamer_TDocHtmlDirective(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDocHtmlDirective*)
   {
      ::TDocHtmlDirective *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDocHtmlDirective >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDocHtmlDirective", ::TDocHtmlDirective::Class_Version(), "TDocDirective.h", 80,
                  typeid(::TDocHtmlDirective), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDocHtmlDirective::Dictionary, isa_proxy, 16,
                  sizeof(::TDocHtmlDirective) );
      instance.SetNew(&new_TDocHtmlDirective);
      instance.SetNewArray(&newArray_TDocHtmlDirective);
      instance.SetDelete(&delete_TDocHtmlDirective);
      instance.SetDeleteArray(&deleteArray_TDocHtmlDirective);
      instance.SetDestructor(&destruct_TDocHtmlDirective);
      instance.SetStreamerFunc(&streamer_TDocHtmlDirective);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDocHtmlDirective*)
   {
      return GenerateInitInstanceLocal((::TDocHtmlDirective*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDocHtmlDirective*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDocMacroDirective(void *p = 0);
   static void *newArray_TDocMacroDirective(Long_t size, void *p);
   static void delete_TDocMacroDirective(void *p);
   static void deleteArray_TDocMacroDirective(void *p);
   static void destruct_TDocMacroDirective(void *p);
   static void streamer_TDocMacroDirective(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDocMacroDirective*)
   {
      ::TDocMacroDirective *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDocMacroDirective >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDocMacroDirective", ::TDocMacroDirective::Class_Version(), "TDocDirective.h", 95,
                  typeid(::TDocMacroDirective), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDocMacroDirective::Dictionary, isa_proxy, 16,
                  sizeof(::TDocMacroDirective) );
      instance.SetNew(&new_TDocMacroDirective);
      instance.SetNewArray(&newArray_TDocMacroDirective);
      instance.SetDelete(&delete_TDocMacroDirective);
      instance.SetDeleteArray(&deleteArray_TDocMacroDirective);
      instance.SetDestructor(&destruct_TDocMacroDirective);
      instance.SetStreamerFunc(&streamer_TDocMacroDirective);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDocMacroDirective*)
   {
      return GenerateInitInstanceLocal((::TDocMacroDirective*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDocMacroDirective*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDocLatexDirective(void *p = 0);
   static void *newArray_TDocLatexDirective(Long_t size, void *p);
   static void delete_TDocLatexDirective(void *p);
   static void deleteArray_TDocLatexDirective(void *p);
   static void destruct_TDocLatexDirective(void *p);
   static void streamer_TDocLatexDirective(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDocLatexDirective*)
   {
      ::TDocLatexDirective *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDocLatexDirective >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDocLatexDirective", ::TDocLatexDirective::Class_Version(), "TDocDirective.h", 122,
                  typeid(::TDocLatexDirective), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDocLatexDirective::Dictionary, isa_proxy, 16,
                  sizeof(::TDocLatexDirective) );
      instance.SetNew(&new_TDocLatexDirective);
      instance.SetNewArray(&newArray_TDocLatexDirective);
      instance.SetDelete(&delete_TDocLatexDirective);
      instance.SetDeleteArray(&deleteArray_TDocLatexDirective);
      instance.SetDestructor(&destruct_TDocLatexDirective);
      instance.SetStreamerFunc(&streamer_TDocLatexDirective);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDocLatexDirective*)
   {
      return GenerateInitInstanceLocal((::TDocLatexDirective*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDocLatexDirective*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TClassDocInfo(void *p);
   static void deleteArray_TClassDocInfo(void *p);
   static void destruct_TClassDocInfo(void *p);
   static void streamer_TClassDocInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TClassDocInfo*)
   {
      ::TClassDocInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TClassDocInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TClassDocInfo", ::TClassDocInfo::Class_Version(), "TDocInfo.h", 28,
                  typeid(::TClassDocInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TClassDocInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TClassDocInfo) );
      instance.SetDelete(&delete_TClassDocInfo);
      instance.SetDeleteArray(&deleteArray_TClassDocInfo);
      instance.SetDestructor(&destruct_TClassDocInfo);
      instance.SetStreamerFunc(&streamer_TClassDocInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TClassDocInfo*)
   {
      return GenerateInitInstanceLocal((::TClassDocInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TClassDocInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TModuleDocInfo(void *p);
   static void deleteArray_TModuleDocInfo(void *p);
   static void destruct_TModuleDocInfo(void *p);
   static void streamer_TModuleDocInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TModuleDocInfo*)
   {
      ::TModuleDocInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TModuleDocInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TModuleDocInfo", ::TModuleDocInfo::Class_Version(), "TDocInfo.h", 102,
                  typeid(::TModuleDocInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TModuleDocInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TModuleDocInfo) );
      instance.SetDelete(&delete_TModuleDocInfo);
      instance.SetDeleteArray(&deleteArray_TModuleDocInfo);
      instance.SetDestructor(&destruct_TModuleDocInfo);
      instance.SetStreamerFunc(&streamer_TModuleDocInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TModuleDocInfo*)
   {
      return GenerateInitInstanceLocal((::TModuleDocInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TModuleDocInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLibraryDocInfo(void *p = 0);
   static void *newArray_TLibraryDocInfo(Long_t size, void *p);
   static void delete_TLibraryDocInfo(void *p);
   static void deleteArray_TLibraryDocInfo(void *p);
   static void destruct_TLibraryDocInfo(void *p);
   static void streamer_TLibraryDocInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLibraryDocInfo*)
   {
      ::TLibraryDocInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLibraryDocInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLibraryDocInfo", ::TLibraryDocInfo::Class_Version(), "TDocInfo.h", 136,
                  typeid(::TLibraryDocInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLibraryDocInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TLibraryDocInfo) );
      instance.SetNew(&new_TLibraryDocInfo);
      instance.SetNewArray(&newArray_TLibraryDocInfo);
      instance.SetDelete(&delete_TLibraryDocInfo);
      instance.SetDeleteArray(&deleteArray_TLibraryDocInfo);
      instance.SetDestructor(&destruct_TLibraryDocInfo);
      instance.SetStreamerFunc(&streamer_TLibraryDocInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLibraryDocInfo*)
   {
      return GenerateInitInstanceLocal((::TLibraryDocInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLibraryDocInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THtml(void *p = 0);
   static void *newArray_THtml(Long_t size, void *p);
   static void delete_THtml(void *p);
   static void deleteArray_THtml(void *p);
   static void destruct_THtml(void *p);
   static void streamer_THtml(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THtml*)
   {
      ::THtml *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THtml >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THtml", ::THtml::Class_Version(), "THtml.h", 38,
                  typeid(::THtml), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THtml::Dictionary, isa_proxy, 16,
                  sizeof(::THtml) );
      instance.SetNew(&new_THtml);
      instance.SetNewArray(&newArray_THtml);
      instance.SetDelete(&delete_THtml);
      instance.SetDeleteArray(&deleteArray_THtml);
      instance.SetDestructor(&destruct_THtml);
      instance.SetStreamerFunc(&streamer_THtml);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THtml*)
   {
      return GenerateInitInstanceLocal((::THtml*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THtml*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THtmlcLcLTHelperBase(void *p = 0);
   static void *newArray_THtmlcLcLTHelperBase(Long_t size, void *p);
   static void delete_THtmlcLcLTHelperBase(void *p);
   static void deleteArray_THtmlcLcLTHelperBase(void *p);
   static void destruct_THtmlcLcLTHelperBase(void *p);
   static void streamer_THtmlcLcLTHelperBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THtml::THelperBase*)
   {
      ::THtml::THelperBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THtml::THelperBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THtml::THelperBase", ::THtml::THelperBase::Class_Version(), "THtml.h", 42,
                  typeid(::THtml::THelperBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THtml::THelperBase::Dictionary, isa_proxy, 16,
                  sizeof(::THtml::THelperBase) );
      instance.SetNew(&new_THtmlcLcLTHelperBase);
      instance.SetNewArray(&newArray_THtmlcLcLTHelperBase);
      instance.SetDelete(&delete_THtmlcLcLTHelperBase);
      instance.SetDeleteArray(&deleteArray_THtmlcLcLTHelperBase);
      instance.SetDestructor(&destruct_THtmlcLcLTHelperBase);
      instance.SetStreamerFunc(&streamer_THtmlcLcLTHelperBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THtml::THelperBase*)
   {
      return GenerateInitInstanceLocal((::THtml::THelperBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THtml::THelperBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THtmlcLcLTModuleDefinition(void *p = 0);
   static void *newArray_THtmlcLcLTModuleDefinition(Long_t size, void *p);
   static void delete_THtmlcLcLTModuleDefinition(void *p);
   static void deleteArray_THtmlcLcLTModuleDefinition(void *p);
   static void destruct_THtmlcLcLTModuleDefinition(void *p);
   static void streamer_THtmlcLcLTModuleDefinition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THtml::TModuleDefinition*)
   {
      ::THtml::TModuleDefinition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THtml::TModuleDefinition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THtml::TModuleDefinition", ::THtml::TModuleDefinition::Class_Version(), "THtml.h", 59,
                  typeid(::THtml::TModuleDefinition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THtml::TModuleDefinition::Dictionary, isa_proxy, 16,
                  sizeof(::THtml::TModuleDefinition) );
      instance.SetNew(&new_THtmlcLcLTModuleDefinition);
      instance.SetNewArray(&newArray_THtmlcLcLTModuleDefinition);
      instance.SetDelete(&delete_THtmlcLcLTModuleDefinition);
      instance.SetDeleteArray(&deleteArray_THtmlcLcLTModuleDefinition);
      instance.SetDestructor(&destruct_THtmlcLcLTModuleDefinition);
      instance.SetStreamerFunc(&streamer_THtmlcLcLTModuleDefinition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THtml::TModuleDefinition*)
   {
      return GenerateInitInstanceLocal((::THtml::TModuleDefinition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THtml::TModuleDefinition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THtmlcLcLTFileDefinition(void *p = 0);
   static void *newArray_THtmlcLcLTFileDefinition(Long_t size, void *p);
   static void delete_THtmlcLcLTFileDefinition(void *p);
   static void deleteArray_THtmlcLcLTFileDefinition(void *p);
   static void destruct_THtmlcLcLTFileDefinition(void *p);
   static void streamer_THtmlcLcLTFileDefinition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THtml::TFileDefinition*)
   {
      ::THtml::TFileDefinition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THtml::TFileDefinition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THtml::TFileDefinition", ::THtml::TFileDefinition::Class_Version(), "THtml.h", 69,
                  typeid(::THtml::TFileDefinition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THtml::TFileDefinition::Dictionary, isa_proxy, 16,
                  sizeof(::THtml::TFileDefinition) );
      instance.SetNew(&new_THtmlcLcLTFileDefinition);
      instance.SetNewArray(&newArray_THtmlcLcLTFileDefinition);
      instance.SetDelete(&delete_THtmlcLcLTFileDefinition);
      instance.SetDeleteArray(&deleteArray_THtmlcLcLTFileDefinition);
      instance.SetDestructor(&destruct_THtmlcLcLTFileDefinition);
      instance.SetStreamerFunc(&streamer_THtmlcLcLTFileDefinition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THtml::TFileDefinition*)
   {
      return GenerateInitInstanceLocal((::THtml::TFileDefinition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THtml::TFileDefinition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THtmlcLcLTPathDefinition(void *p = 0);
   static void *newArray_THtmlcLcLTPathDefinition(Long_t size, void *p);
   static void delete_THtmlcLcLTPathDefinition(void *p);
   static void deleteArray_THtmlcLcLTPathDefinition(void *p);
   static void destruct_THtmlcLcLTPathDefinition(void *p);
   static void streamer_THtmlcLcLTPathDefinition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THtml::TPathDefinition*)
   {
      ::THtml::TPathDefinition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THtml::TPathDefinition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THtml::TPathDefinition", ::THtml::TPathDefinition::Class_Version(), "THtml.h", 90,
                  typeid(::THtml::TPathDefinition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THtml::TPathDefinition::Dictionary, isa_proxy, 16,
                  sizeof(::THtml::TPathDefinition) );
      instance.SetNew(&new_THtmlcLcLTPathDefinition);
      instance.SetNewArray(&newArray_THtmlcLcLTPathDefinition);
      instance.SetDelete(&delete_THtmlcLcLTPathDefinition);
      instance.SetDeleteArray(&deleteArray_THtmlcLcLTPathDefinition);
      instance.SetDestructor(&destruct_THtmlcLcLTPathDefinition);
      instance.SetStreamerFunc(&streamer_THtmlcLcLTPathDefinition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THtml::TPathDefinition*)
   {
      return GenerateInitInstanceLocal((::THtml::TPathDefinition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THtml::TPathDefinition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THtmlcLcLTFileSysEntry(void *p);
   static void deleteArray_THtmlcLcLTFileSysEntry(void *p);
   static void destruct_THtmlcLcLTFileSysEntry(void *p);
   static void streamer_THtmlcLcLTFileSysEntry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THtml::TFileSysEntry*)
   {
      ::THtml::TFileSysEntry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THtml::TFileSysEntry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THtml::TFileSysEntry", ::THtml::TFileSysEntry::Class_Version(), "THtml.h", 104,
                  typeid(::THtml::TFileSysEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THtml::TFileSysEntry::Dictionary, isa_proxy, 16,
                  sizeof(::THtml::TFileSysEntry) );
      instance.SetDelete(&delete_THtmlcLcLTFileSysEntry);
      instance.SetDeleteArray(&deleteArray_THtmlcLcLTFileSysEntry);
      instance.SetDestructor(&destruct_THtmlcLcLTFileSysEntry);
      instance.SetStreamerFunc(&streamer_THtmlcLcLTFileSysEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THtml::TFileSysEntry*)
   {
      return GenerateInitInstanceLocal((::THtml::TFileSysEntry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THtml::TFileSysEntry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THtmlcLcLTFileSysDir(void *p);
   static void deleteArray_THtmlcLcLTFileSysDir(void *p);
   static void destruct_THtmlcLcLTFileSysDir(void *p);
   static void streamer_THtmlcLcLTFileSysDir(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THtml::TFileSysDir*)
   {
      ::THtml::TFileSysDir *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THtml::TFileSysDir >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THtml::TFileSysDir", ::THtml::TFileSysDir::Class_Version(), "THtml.h", 131,
                  typeid(::THtml::TFileSysDir), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THtml::TFileSysDir::Dictionary, isa_proxy, 16,
                  sizeof(::THtml::TFileSysDir) );
      instance.SetDelete(&delete_THtmlcLcLTFileSysDir);
      instance.SetDeleteArray(&deleteArray_THtmlcLcLTFileSysDir);
      instance.SetDestructor(&destruct_THtmlcLcLTFileSysDir);
      instance.SetStreamerFunc(&streamer_THtmlcLcLTFileSysDir);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THtml::TFileSysDir*)
   {
      return GenerateInitInstanceLocal((::THtml::TFileSysDir*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THtml::TFileSysDir*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THtmlcLcLTFileSysRoot(void *p);
   static void deleteArray_THtmlcLcLTFileSysRoot(void *p);
   static void destruct_THtmlcLcLTFileSysRoot(void *p);
   static void streamer_THtmlcLcLTFileSysRoot(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THtml::TFileSysRoot*)
   {
      ::THtml::TFileSysRoot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THtml::TFileSysRoot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THtml::TFileSysRoot", ::THtml::TFileSysRoot::Class_Version(), "THtml.h", 150,
                  typeid(::THtml::TFileSysRoot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THtml::TFileSysRoot::Dictionary, isa_proxy, 16,
                  sizeof(::THtml::TFileSysRoot) );
      instance.SetDelete(&delete_THtmlcLcLTFileSysRoot);
      instance.SetDeleteArray(&deleteArray_THtmlcLcLTFileSysRoot);
      instance.SetDestructor(&destruct_THtmlcLcLTFileSysRoot);
      instance.SetStreamerFunc(&streamer_THtmlcLcLTFileSysRoot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THtml::TFileSysRoot*)
   {
      return GenerateInitInstanceLocal((::THtml::TFileSysRoot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THtml::TFileSysRoot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THtmlcLcLTFileSysDB(void *p);
   static void deleteArray_THtmlcLcLTFileSysDB(void *p);
   static void destruct_THtmlcLcLTFileSysDB(void *p);
   static void streamer_THtmlcLcLTFileSysDB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THtml::TFileSysDB*)
   {
      ::THtml::TFileSysDB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THtml::TFileSysDB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THtml::TFileSysDB", ::THtml::TFileSysDB::Class_Version(), "THtml.h", 167,
                  typeid(::THtml::TFileSysDB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THtml::TFileSysDB::Dictionary, isa_proxy, 16,
                  sizeof(::THtml::TFileSysDB) );
      instance.SetDelete(&delete_THtmlcLcLTFileSysDB);
      instance.SetDeleteArray(&deleteArray_THtmlcLcLTFileSysDB);
      instance.SetDestructor(&destruct_THtmlcLcLTFileSysDB);
      instance.SetStreamerFunc(&streamer_THtmlcLcLTFileSysDB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THtml::TFileSysDB*)
   {
      return GenerateInitInstanceLocal((::THtml::TFileSysDB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THtml::TFileSysDB*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TDocParser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDocParser::Class_Name()
{
   return "TDocParser";
}

//______________________________________________________________________________
const char *TDocParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocParser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDocParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocParser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDocParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocParser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDocParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocParser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDocOutput::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDocOutput::Class_Name()
{
   return "TDocOutput";
}

//______________________________________________________________________________
const char *TDocOutput::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocOutput*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDocOutput::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocOutput*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDocOutput::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocOutput*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDocOutput::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocOutput*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TClassDocOutput::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TClassDocOutput::Class_Name()
{
   return "TClassDocOutput";
}

//______________________________________________________________________________
const char *TClassDocOutput::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TClassDocOutput*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TClassDocOutput::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TClassDocOutput*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TClassDocOutput::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TClassDocOutput*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TClassDocOutput::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TClassDocOutput*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDocDirective::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDocDirective::Class_Name()
{
   return "TDocDirective";
}

//______________________________________________________________________________
const char *TDocDirective::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocDirective*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDocDirective::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocDirective*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDocDirective::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocDirective*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDocDirective::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocDirective*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDocHtmlDirective::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDocHtmlDirective::Class_Name()
{
   return "TDocHtmlDirective";
}

//______________________________________________________________________________
const char *TDocHtmlDirective::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocHtmlDirective*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDocHtmlDirective::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocHtmlDirective*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDocHtmlDirective::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocHtmlDirective*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDocHtmlDirective::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocHtmlDirective*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDocMacroDirective::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDocMacroDirective::Class_Name()
{
   return "TDocMacroDirective";
}

//______________________________________________________________________________
const char *TDocMacroDirective::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocMacroDirective*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDocMacroDirective::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocMacroDirective*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDocMacroDirective::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocMacroDirective*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDocMacroDirective::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocMacroDirective*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDocLatexDirective::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDocLatexDirective::Class_Name()
{
   return "TDocLatexDirective";
}

//______________________________________________________________________________
const char *TDocLatexDirective::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocLatexDirective*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDocLatexDirective::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDocLatexDirective*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDocLatexDirective::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocLatexDirective*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDocLatexDirective::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDocLatexDirective*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TClassDocInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TClassDocInfo::Class_Name()
{
   return "TClassDocInfo";
}

//______________________________________________________________________________
const char *TClassDocInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TClassDocInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TClassDocInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TClassDocInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TClassDocInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TClassDocInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TClassDocInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TClassDocInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TModuleDocInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TModuleDocInfo::Class_Name()
{
   return "TModuleDocInfo";
}

//______________________________________________________________________________
const char *TModuleDocInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TModuleDocInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TModuleDocInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TModuleDocInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TModuleDocInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TModuleDocInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TModuleDocInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TModuleDocInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLibraryDocInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLibraryDocInfo::Class_Name()
{
   return "TLibraryDocInfo";
}

//______________________________________________________________________________
const char *TLibraryDocInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLibraryDocInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLibraryDocInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLibraryDocInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLibraryDocInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLibraryDocInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLibraryDocInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLibraryDocInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THtml::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THtml::Class_Name()
{
   return "THtml";
}

//______________________________________________________________________________
const char *THtml::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THtml::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THtml::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THtml::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THtml::THelperBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THtml::THelperBase::Class_Name()
{
   return "THtml::THelperBase";
}

//______________________________________________________________________________
const char *THtml::THelperBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::THelperBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THtml::THelperBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::THelperBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THtml::THelperBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::THelperBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THtml::THelperBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::THelperBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THtml::TModuleDefinition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THtml::TModuleDefinition::Class_Name()
{
   return "THtml::TModuleDefinition";
}

//______________________________________________________________________________
const char *THtml::TModuleDefinition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TModuleDefinition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THtml::TModuleDefinition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TModuleDefinition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THtml::TModuleDefinition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TModuleDefinition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THtml::TModuleDefinition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TModuleDefinition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THtml::TFileDefinition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THtml::TFileDefinition::Class_Name()
{
   return "THtml::TFileDefinition";
}

//______________________________________________________________________________
const char *THtml::TFileDefinition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileDefinition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THtml::TFileDefinition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileDefinition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THtml::TFileDefinition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileDefinition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THtml::TFileDefinition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileDefinition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THtml::TPathDefinition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THtml::TPathDefinition::Class_Name()
{
   return "THtml::TPathDefinition";
}

//______________________________________________________________________________
const char *THtml::TPathDefinition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TPathDefinition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THtml::TPathDefinition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TPathDefinition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THtml::TPathDefinition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TPathDefinition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THtml::TPathDefinition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TPathDefinition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THtml::TFileSysEntry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THtml::TFileSysEntry::Class_Name()
{
   return "THtml::TFileSysEntry";
}

//______________________________________________________________________________
const char *THtml::TFileSysEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysEntry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THtml::TFileSysEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysEntry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THtml::TFileSysEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysEntry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THtml::TFileSysEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysEntry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THtml::TFileSysDir::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THtml::TFileSysDir::Class_Name()
{
   return "THtml::TFileSysDir";
}

//______________________________________________________________________________
const char *THtml::TFileSysDir::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysDir*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THtml::TFileSysDir::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysDir*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THtml::TFileSysDir::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysDir*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THtml::TFileSysDir::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysDir*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THtml::TFileSysRoot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THtml::TFileSysRoot::Class_Name()
{
   return "THtml::TFileSysRoot";
}

//______________________________________________________________________________
const char *THtml::TFileSysRoot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysRoot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THtml::TFileSysRoot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysRoot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THtml::TFileSysRoot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysRoot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THtml::TFileSysRoot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysRoot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THtml::TFileSysDB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THtml::TFileSysDB::Class_Name()
{
   return "THtml::TFileSysDB";
}

//______________________________________________________________________________
const char *THtml::TFileSysDB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysDB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THtml::TFileSysDB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysDB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THtml::TFileSysDB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysDB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THtml::TFileSysDB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THtml::TFileSysDB*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TDocParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDocParser.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDocParser(void *p) {
      delete ((::TDocParser*)p);
   }
   static void deleteArray_TDocParser(void *p) {
      delete [] ((::TDocParser*)p);
   }
   static void destruct_TDocParser(void *p) {
      typedef ::TDocParser current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDocParser(TBuffer &buf, void *obj) {
      ((::TDocParser*)obj)->::TDocParser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDocParser

//______________________________________________________________________________
void TDocOutput::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDocOutput.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDocOutput(void *p) {
      delete ((::TDocOutput*)p);
   }
   static void deleteArray_TDocOutput(void *p) {
      delete [] ((::TDocOutput*)p);
   }
   static void destruct_TDocOutput(void *p) {
      typedef ::TDocOutput current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDocOutput(TBuffer &buf, void *obj) {
      ((::TDocOutput*)obj)->::TDocOutput::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDocOutput

//______________________________________________________________________________
void TClassDocOutput::Streamer(TBuffer &R__b)
{
   // Stream an object of class TClassDocOutput.

   TDocOutput::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TClassDocOutput(void *p) {
      delete ((::TClassDocOutput*)p);
   }
   static void deleteArray_TClassDocOutput(void *p) {
      delete [] ((::TClassDocOutput*)p);
   }
   static void destruct_TClassDocOutput(void *p) {
      typedef ::TClassDocOutput current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TClassDocOutput(TBuffer &buf, void *obj) {
      ((::TClassDocOutput*)obj)->::TClassDocOutput::Streamer(buf);
   }
} // end of namespace ROOT for class ::TClassDocOutput

//______________________________________________________________________________
void TDocDirective::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDocDirective.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around a custom streamer member function.
   static void streamer_TDocDirective(TBuffer &buf, void *obj) {
      ((::TDocDirective*)obj)->::TDocDirective::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDocDirective

//______________________________________________________________________________
void TDocHtmlDirective::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDocHtmlDirective.

   TDocDirective::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDocHtmlDirective(void *p) {
      return  p ? new(p) ::TDocHtmlDirective : new ::TDocHtmlDirective;
   }
   static void *newArray_TDocHtmlDirective(Long_t nElements, void *p) {
      return p ? new(p) ::TDocHtmlDirective[nElements] : new ::TDocHtmlDirective[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDocHtmlDirective(void *p) {
      delete ((::TDocHtmlDirective*)p);
   }
   static void deleteArray_TDocHtmlDirective(void *p) {
      delete [] ((::TDocHtmlDirective*)p);
   }
   static void destruct_TDocHtmlDirective(void *p) {
      typedef ::TDocHtmlDirective current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDocHtmlDirective(TBuffer &buf, void *obj) {
      ((::TDocHtmlDirective*)obj)->::TDocHtmlDirective::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDocHtmlDirective

//______________________________________________________________________________
void TDocMacroDirective::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDocMacroDirective.

   TDocDirective::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDocMacroDirective(void *p) {
      return  p ? new(p) ::TDocMacroDirective : new ::TDocMacroDirective;
   }
   static void *newArray_TDocMacroDirective(Long_t nElements, void *p) {
      return p ? new(p) ::TDocMacroDirective[nElements] : new ::TDocMacroDirective[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDocMacroDirective(void *p) {
      delete ((::TDocMacroDirective*)p);
   }
   static void deleteArray_TDocMacroDirective(void *p) {
      delete [] ((::TDocMacroDirective*)p);
   }
   static void destruct_TDocMacroDirective(void *p) {
      typedef ::TDocMacroDirective current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDocMacroDirective(TBuffer &buf, void *obj) {
      ((::TDocMacroDirective*)obj)->::TDocMacroDirective::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDocMacroDirective

//______________________________________________________________________________
void TDocLatexDirective::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDocLatexDirective.

   TDocDirective::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDocLatexDirective(void *p) {
      return  p ? new(p) ::TDocLatexDirective : new ::TDocLatexDirective;
   }
   static void *newArray_TDocLatexDirective(Long_t nElements, void *p) {
      return p ? new(p) ::TDocLatexDirective[nElements] : new ::TDocLatexDirective[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDocLatexDirective(void *p) {
      delete ((::TDocLatexDirective*)p);
   }
   static void deleteArray_TDocLatexDirective(void *p) {
      delete [] ((::TDocLatexDirective*)p);
   }
   static void destruct_TDocLatexDirective(void *p) {
      typedef ::TDocLatexDirective current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDocLatexDirective(TBuffer &buf, void *obj) {
      ((::TDocLatexDirective*)obj)->::TDocLatexDirective::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDocLatexDirective

//______________________________________________________________________________
void TClassDocInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TClassDocInfo.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TClassDocInfo(void *p) {
      delete ((::TClassDocInfo*)p);
   }
   static void deleteArray_TClassDocInfo(void *p) {
      delete [] ((::TClassDocInfo*)p);
   }
   static void destruct_TClassDocInfo(void *p) {
      typedef ::TClassDocInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TClassDocInfo(TBuffer &buf, void *obj) {
      ((::TClassDocInfo*)obj)->::TClassDocInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TClassDocInfo

//______________________________________________________________________________
void TModuleDocInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TModuleDocInfo.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TModuleDocInfo(void *p) {
      delete ((::TModuleDocInfo*)p);
   }
   static void deleteArray_TModuleDocInfo(void *p) {
      delete [] ((::TModuleDocInfo*)p);
   }
   static void destruct_TModuleDocInfo(void *p) {
      typedef ::TModuleDocInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TModuleDocInfo(TBuffer &buf, void *obj) {
      ((::TModuleDocInfo*)obj)->::TModuleDocInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TModuleDocInfo

//______________________________________________________________________________
void TLibraryDocInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLibraryDocInfo.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLibraryDocInfo(void *p) {
      return  p ? new(p) ::TLibraryDocInfo : new ::TLibraryDocInfo;
   }
   static void *newArray_TLibraryDocInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TLibraryDocInfo[nElements] : new ::TLibraryDocInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLibraryDocInfo(void *p) {
      delete ((::TLibraryDocInfo*)p);
   }
   static void deleteArray_TLibraryDocInfo(void *p) {
      delete [] ((::TLibraryDocInfo*)p);
   }
   static void destruct_TLibraryDocInfo(void *p) {
      typedef ::TLibraryDocInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLibraryDocInfo(TBuffer &buf, void *obj) {
      ((::TLibraryDocInfo*)obj)->::TLibraryDocInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLibraryDocInfo

//______________________________________________________________________________
void THtml::Streamer(TBuffer &R__b)
{
   // Stream an object of class THtml.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THtml(void *p) {
      return  p ? new(p) ::THtml : new ::THtml;
   }
   static void *newArray_THtml(Long_t nElements, void *p) {
      return p ? new(p) ::THtml[nElements] : new ::THtml[nElements];
   }
   // Wrapper around operator delete
   static void delete_THtml(void *p) {
      delete ((::THtml*)p);
   }
   static void deleteArray_THtml(void *p) {
      delete [] ((::THtml*)p);
   }
   static void destruct_THtml(void *p) {
      typedef ::THtml current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THtml(TBuffer &buf, void *obj) {
      ((::THtml*)obj)->::THtml::Streamer(buf);
   }
} // end of namespace ROOT for class ::THtml

//______________________________________________________________________________
void THtml::THelperBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class THtml::THelperBase.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THtmlcLcLTHelperBase(void *p) {
      return  p ? new(p) ::THtml::THelperBase : new ::THtml::THelperBase;
   }
   static void *newArray_THtmlcLcLTHelperBase(Long_t nElements, void *p) {
      return p ? new(p) ::THtml::THelperBase[nElements] : new ::THtml::THelperBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_THtmlcLcLTHelperBase(void *p) {
      delete ((::THtml::THelperBase*)p);
   }
   static void deleteArray_THtmlcLcLTHelperBase(void *p) {
      delete [] ((::THtml::THelperBase*)p);
   }
   static void destruct_THtmlcLcLTHelperBase(void *p) {
      typedef ::THtml::THelperBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THtmlcLcLTHelperBase(TBuffer &buf, void *obj) {
      ((::THtml::THelperBase*)obj)->::THtml::THelperBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::THtml::THelperBase

//______________________________________________________________________________
void THtml::TModuleDefinition::Streamer(TBuffer &R__b)
{
   // Stream an object of class THtml::TModuleDefinition.

   //This works around a msvc bug and should be harmless on other platforms
   typedef THtml::THelperBase baseClass0;
   baseClass0::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THtmlcLcLTModuleDefinition(void *p) {
      return  p ? new(p) ::THtml::TModuleDefinition : new ::THtml::TModuleDefinition;
   }
   static void *newArray_THtmlcLcLTModuleDefinition(Long_t nElements, void *p) {
      return p ? new(p) ::THtml::TModuleDefinition[nElements] : new ::THtml::TModuleDefinition[nElements];
   }
   // Wrapper around operator delete
   static void delete_THtmlcLcLTModuleDefinition(void *p) {
      delete ((::THtml::TModuleDefinition*)p);
   }
   static void deleteArray_THtmlcLcLTModuleDefinition(void *p) {
      delete [] ((::THtml::TModuleDefinition*)p);
   }
   static void destruct_THtmlcLcLTModuleDefinition(void *p) {
      typedef ::THtml::TModuleDefinition current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THtmlcLcLTModuleDefinition(TBuffer &buf, void *obj) {
      ((::THtml::TModuleDefinition*)obj)->::THtml::TModuleDefinition::Streamer(buf);
   }
} // end of namespace ROOT for class ::THtml::TModuleDefinition

//______________________________________________________________________________
void THtml::TFileDefinition::Streamer(TBuffer &R__b)
{
   // Stream an object of class THtml::TFileDefinition.

   //This works around a msvc bug and should be harmless on other platforms
   typedef THtml::THelperBase baseClass0;
   baseClass0::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THtmlcLcLTFileDefinition(void *p) {
      return  p ? new(p) ::THtml::TFileDefinition : new ::THtml::TFileDefinition;
   }
   static void *newArray_THtmlcLcLTFileDefinition(Long_t nElements, void *p) {
      return p ? new(p) ::THtml::TFileDefinition[nElements] : new ::THtml::TFileDefinition[nElements];
   }
   // Wrapper around operator delete
   static void delete_THtmlcLcLTFileDefinition(void *p) {
      delete ((::THtml::TFileDefinition*)p);
   }
   static void deleteArray_THtmlcLcLTFileDefinition(void *p) {
      delete [] ((::THtml::TFileDefinition*)p);
   }
   static void destruct_THtmlcLcLTFileDefinition(void *p) {
      typedef ::THtml::TFileDefinition current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THtmlcLcLTFileDefinition(TBuffer &buf, void *obj) {
      ((::THtml::TFileDefinition*)obj)->::THtml::TFileDefinition::Streamer(buf);
   }
} // end of namespace ROOT for class ::THtml::TFileDefinition

//______________________________________________________________________________
void THtml::TPathDefinition::Streamer(TBuffer &R__b)
{
   // Stream an object of class THtml::TPathDefinition.

   //This works around a msvc bug and should be harmless on other platforms
   typedef THtml::THelperBase baseClass0;
   baseClass0::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THtmlcLcLTPathDefinition(void *p) {
      return  p ? new(p) ::THtml::TPathDefinition : new ::THtml::TPathDefinition;
   }
   static void *newArray_THtmlcLcLTPathDefinition(Long_t nElements, void *p) {
      return p ? new(p) ::THtml::TPathDefinition[nElements] : new ::THtml::TPathDefinition[nElements];
   }
   // Wrapper around operator delete
   static void delete_THtmlcLcLTPathDefinition(void *p) {
      delete ((::THtml::TPathDefinition*)p);
   }
   static void deleteArray_THtmlcLcLTPathDefinition(void *p) {
      delete [] ((::THtml::TPathDefinition*)p);
   }
   static void destruct_THtmlcLcLTPathDefinition(void *p) {
      typedef ::THtml::TPathDefinition current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THtmlcLcLTPathDefinition(TBuffer &buf, void *obj) {
      ((::THtml::TPathDefinition*)obj)->::THtml::TPathDefinition::Streamer(buf);
   }
} // end of namespace ROOT for class ::THtml::TPathDefinition

//______________________________________________________________________________
void THtml::TFileSysEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class THtml::TFileSysEntry.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THtmlcLcLTFileSysEntry(void *p) {
      delete ((::THtml::TFileSysEntry*)p);
   }
   static void deleteArray_THtmlcLcLTFileSysEntry(void *p) {
      delete [] ((::THtml::TFileSysEntry*)p);
   }
   static void destruct_THtmlcLcLTFileSysEntry(void *p) {
      typedef ::THtml::TFileSysEntry current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THtmlcLcLTFileSysEntry(TBuffer &buf, void *obj) {
      ((::THtml::TFileSysEntry*)obj)->::THtml::TFileSysEntry::Streamer(buf);
   }
} // end of namespace ROOT for class ::THtml::TFileSysEntry

//______________________________________________________________________________
void THtml::TFileSysDir::Streamer(TBuffer &R__b)
{
   // Stream an object of class THtml::TFileSysDir.

   //This works around a msvc bug and should be harmless on other platforms
   typedef THtml::TFileSysEntry baseClass0;
   baseClass0::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THtmlcLcLTFileSysDir(void *p) {
      delete ((::THtml::TFileSysDir*)p);
   }
   static void deleteArray_THtmlcLcLTFileSysDir(void *p) {
      delete [] ((::THtml::TFileSysDir*)p);
   }
   static void destruct_THtmlcLcLTFileSysDir(void *p) {
      typedef ::THtml::TFileSysDir current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THtmlcLcLTFileSysDir(TBuffer &buf, void *obj) {
      ((::THtml::TFileSysDir*)obj)->::THtml::TFileSysDir::Streamer(buf);
   }
} // end of namespace ROOT for class ::THtml::TFileSysDir

//______________________________________________________________________________
void THtml::TFileSysRoot::Streamer(TBuffer &R__b)
{
   // Stream an object of class THtml::TFileSysRoot.

   //This works around a msvc bug and should be harmless on other platforms
   typedef THtml::TFileSysDir baseClass0;
   baseClass0::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THtmlcLcLTFileSysRoot(void *p) {
      delete ((::THtml::TFileSysRoot*)p);
   }
   static void deleteArray_THtmlcLcLTFileSysRoot(void *p) {
      delete [] ((::THtml::TFileSysRoot*)p);
   }
   static void destruct_THtmlcLcLTFileSysRoot(void *p) {
      typedef ::THtml::TFileSysRoot current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THtmlcLcLTFileSysRoot(TBuffer &buf, void *obj) {
      ((::THtml::TFileSysRoot*)obj)->::THtml::TFileSysRoot::Streamer(buf);
   }
} // end of namespace ROOT for class ::THtml::TFileSysRoot

//______________________________________________________________________________
void THtml::TFileSysDB::Streamer(TBuffer &R__b)
{
   // Stream an object of class THtml::TFileSysDB.

   //This works around a msvc bug and should be harmless on other platforms
   typedef THtml::TFileSysDir baseClass0;
   baseClass0::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THtmlcLcLTFileSysDB(void *p) {
      delete ((::THtml::TFileSysDB*)p);
   }
   static void deleteArray_THtmlcLcLTFileSysDB(void *p) {
      delete [] ((::THtml::TFileSysDB*)p);
   }
   static void destruct_THtmlcLcLTFileSysDB(void *p) {
      typedef ::THtml::TFileSysDB current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THtmlcLcLTFileSysDB(TBuffer &buf, void *obj) {
      ((::THtml::TFileSysDB*)obj)->::THtml::TFileSysDB::Streamer(buf);
   }
} // end of namespace ROOT for class ::THtml::TFileSysDB

namespace {
  void TriggerDictionaryInitialization_libHtml_Impl() {
    static const char* headers[] = {
"TClassDocOutput.h",
"TDocDirective.h",
"TDocInfo.h",
"TDocOutput.h",
"TDocParser.h",
"THtml.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libHtml dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(parser for reference documentation)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(parser for reference documentation)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(parser for reference documentation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDocParser.h")))  __attribute__((annotate("$clingAutoload$TClassDocOutput.h")))  TDocParser;
class __attribute__((annotate(R"ATTRDUMP(generates documentation web pages)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(generates documentation web pages)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(generates documentation web pages)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDocOutput.h")))  __attribute__((annotate("$clingAutoload$TClassDocOutput.h")))  TDocOutput;
class __attribute__((annotate(R"ATTRDUMP(generates documentation web pages for a class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(generates documentation web pages for a class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(generates documentation web pages for a class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TClassDocOutput.h")))  TClassDocOutput;
class __attribute__((annotate(R"ATTRDUMP(THtml directive handler)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(THtml directive handler)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(THtml directive handler)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDocDirective.h")))  TDocDirective;
class __attribute__((annotate(R"ATTRDUMP(Handler for "Begin_Html"/"End_Html" for raw HTML in documentation comments)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Handler for "Begin_Html"/"End_Html" for raw HTML in documentation comments)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Handler for "Begin_Html"/"End_Html" for raw HTML in documentation comments)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDocDirective.h")))  TDocHtmlDirective;
class __attribute__((annotate(R"ATTRDUMP(Handler for "Begin_Macro"/"End_Macro" for code that is executed and that can generate an image for documentation)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Handler for "Begin_Macro"/"End_Macro" for code that is executed and that can generate an image for documentation)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Handler for "Begin_Macro"/"End_Macro" for code that is executed and that can generate an image for documentation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDocDirective.h")))  TDocMacroDirective;
class __attribute__((annotate(R"ATTRDUMP(Handler for "Begin_Latex"/"End_Latex" to generate an image from latex)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Handler for "Begin_Latex"/"End_Latex" to generate an image from latex)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Handler for "Begin_Latex"/"End_Latex" to generate an image from latex)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDocDirective.h")))  TDocLatexDirective;
class __attribute__((annotate(R"ATTRDUMP(info cache for class documentation)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(info cache for class documentation)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(info cache for class documentation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDocInfo.h")))  TClassDocInfo;
class __attribute__((annotate(R"ATTRDUMP(documentation for a group of classes)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(documentation for a group of classes)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(documentation for a group of classes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDocInfo.h")))  TModuleDocInfo;
class __attribute__((annotate(R"ATTRDUMP(documentation for a library)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(documentation for a library)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(documentation for a library)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDocInfo.h")))  TLibraryDocInfo;
class __attribute__((annotate(R"ATTRDUMP(Convert class(es) into HTML file(s))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THtml.h")))  THtml;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libHtml dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TClassDocOutput.h"
#include "TDocDirective.h"
#include "TDocInfo.h"
#include "TDocOutput.h"
#include "TDocParser.h"
#include "THtml.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TClassDocInfo", payloadCode, "@",
"TClassDocOutput", payloadCode, "@",
"TDocDirective", payloadCode, "@",
"TDocHtmlDirective", payloadCode, "@",
"TDocLatexDirective", payloadCode, "@",
"TDocMacroDirective", payloadCode, "@",
"TDocOutput", payloadCode, "@",
"TDocParser", payloadCode, "@",
"THtml", payloadCode, "@",
"THtml::TFileDefinition", payloadCode, "@",
"THtml::TFileSysDB", payloadCode, "@",
"THtml::TFileSysDir", payloadCode, "@",
"THtml::TFileSysEntry", payloadCode, "@",
"THtml::TFileSysRoot", payloadCode, "@",
"THtml::THelperBase", payloadCode, "@",
"THtml::TModuleDefinition", payloadCode, "@",
"THtml::TPathDefinition", payloadCode, "@",
"TLibraryDocInfo", payloadCode, "@",
"TModuleDocInfo", payloadCode, "@",
"gHtml", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libHtml",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHtml_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHtml_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHtml() {
  TriggerDictionaryInitialization_libHtml_Impl();
}
