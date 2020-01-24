// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ProofPlayer

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
#include "TDrawFeedback.h"
#include "TEventIter.h"
#include "TOutputListSelectorDataMap.h"
#include "TPacketizer.h"
#include "TPacketizerAdaptive.h"
#include "TPacketizerFile.h"
#include "TPacketizerMulti.h"
#include "TPacketizerUnit.h"
#include "TPerfStats.h"
#include "TProofLimitsFinder.h"
#include "TProofMonSender.h"
#include "TProofMonSenderML.h"
#include "TProofMonSenderSQL.h"
#include "TProofPlayer.h"
#include "TProofPlayerLite.h"
#include "TStatsFeedback.h"
#include "TStatus.h"
#include "TVirtualPacketizer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TDrawFeedback(void *p = 0);
   static void *newArray_TDrawFeedback(Long_t size, void *p);
   static void delete_TDrawFeedback(void *p);
   static void deleteArray_TDrawFeedback(void *p);
   static void destruct_TDrawFeedback(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDrawFeedback*)
   {
      ::TDrawFeedback *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDrawFeedback >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDrawFeedback", ::TDrawFeedback::Class_Version(), "TDrawFeedback.h", 35,
                  typeid(::TDrawFeedback), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDrawFeedback::Dictionary, isa_proxy, 4,
                  sizeof(::TDrawFeedback) );
      instance.SetNew(&new_TDrawFeedback);
      instance.SetNewArray(&newArray_TDrawFeedback);
      instance.SetDelete(&delete_TDrawFeedback);
      instance.SetDeleteArray(&deleteArray_TDrawFeedback);
      instance.SetDestructor(&destruct_TDrawFeedback);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDrawFeedback*)
   {
      return GenerateInitInstanceLocal((::TDrawFeedback*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDrawFeedback*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEventIter(void *p);
   static void deleteArray_TEventIter(void *p);
   static void destruct_TEventIter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEventIter*)
   {
      ::TEventIter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEventIter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEventIter", ::TEventIter::Class_Version(), "TEventIter.h", 42,
                  typeid(::TEventIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEventIter::Dictionary, isa_proxy, 4,
                  sizeof(::TEventIter) );
      instance.SetDelete(&delete_TEventIter);
      instance.SetDeleteArray(&deleteArray_TEventIter);
      instance.SetDestructor(&destruct_TEventIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEventIter*)
   {
      return GenerateInitInstanceLocal((::TEventIter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEventIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEventIterUnit(void *p = 0);
   static void *newArray_TEventIterUnit(Long_t size, void *p);
   static void delete_TEventIterUnit(void *p);
   static void deleteArray_TEventIterUnit(void *p);
   static void destruct_TEventIterUnit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEventIterUnit*)
   {
      ::TEventIterUnit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEventIterUnit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEventIterUnit", ::TEventIterUnit::Class_Version(), "TEventIter.h", 99,
                  typeid(::TEventIterUnit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEventIterUnit::Dictionary, isa_proxy, 4,
                  sizeof(::TEventIterUnit) );
      instance.SetNew(&new_TEventIterUnit);
      instance.SetNewArray(&newArray_TEventIterUnit);
      instance.SetDelete(&delete_TEventIterUnit);
      instance.SetDeleteArray(&deleteArray_TEventIterUnit);
      instance.SetDestructor(&destruct_TEventIterUnit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEventIterUnit*)
   {
      return GenerateInitInstanceLocal((::TEventIterUnit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEventIterUnit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEventIterObj(void *p = 0);
   static void *newArray_TEventIterObj(Long_t size, void *p);
   static void delete_TEventIterObj(void *p);
   static void deleteArray_TEventIterObj(void *p);
   static void destruct_TEventIterObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEventIterObj*)
   {
      ::TEventIterObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEventIterObj >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEventIterObj", ::TEventIterObj::Class_Version(), "TEventIter.h", 122,
                  typeid(::TEventIterObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEventIterObj::Dictionary, isa_proxy, 4,
                  sizeof(::TEventIterObj) );
      instance.SetNew(&new_TEventIterObj);
      instance.SetNewArray(&newArray_TEventIterObj);
      instance.SetDelete(&delete_TEventIterObj);
      instance.SetDeleteArray(&deleteArray_TEventIterObj);
      instance.SetDestructor(&destruct_TEventIterObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEventIterObj*)
   {
      return GenerateInitInstanceLocal((::TEventIterObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEventIterObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEventIterTree(void *p = 0);
   static void *newArray_TEventIterTree(Long_t size, void *p);
   static void delete_TEventIterTree(void *p);
   static void deleteArray_TEventIterTree(void *p);
   static void destruct_TEventIterTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEventIterTree*)
   {
      ::TEventIterTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEventIterTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEventIterTree", ::TEventIterTree::Class_Version(), "TEventIter.h", 148,
                  typeid(::TEventIterTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEventIterTree::Dictionary, isa_proxy, 4,
                  sizeof(::TEventIterTree) );
      instance.SetNew(&new_TEventIterTree);
      instance.SetNewArray(&newArray_TEventIterTree);
      instance.SetDelete(&delete_TEventIterTree);
      instance.SetDeleteArray(&deleteArray_TEventIterTree);
      instance.SetDestructor(&destruct_TEventIterTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEventIterTree*)
   {
      return GenerateInitInstanceLocal((::TEventIterTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEventIterTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOutputListSelectorDataMap(void *p = 0);
   static void *newArray_TOutputListSelectorDataMap(Long_t size, void *p);
   static void delete_TOutputListSelectorDataMap(void *p);
   static void deleteArray_TOutputListSelectorDataMap(void *p);
   static void destruct_TOutputListSelectorDataMap(void *p);
   static Long64_t merge_TOutputListSelectorDataMap(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOutputListSelectorDataMap*)
   {
      ::TOutputListSelectorDataMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOutputListSelectorDataMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TOutputListSelectorDataMap", ::TOutputListSelectorDataMap::Class_Version(), "TOutputListSelectorDataMap.h", 30,
                  typeid(::TOutputListSelectorDataMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TOutputListSelectorDataMap::Dictionary, isa_proxy, 4,
                  sizeof(::TOutputListSelectorDataMap) );
      instance.SetNew(&new_TOutputListSelectorDataMap);
      instance.SetNewArray(&newArray_TOutputListSelectorDataMap);
      instance.SetDelete(&delete_TOutputListSelectorDataMap);
      instance.SetDeleteArray(&deleteArray_TOutputListSelectorDataMap);
      instance.SetDestructor(&destruct_TOutputListSelectorDataMap);
      instance.SetMerge(&merge_TOutputListSelectorDataMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOutputListSelectorDataMap*)
   {
      return GenerateInitInstanceLocal((::TOutputListSelectorDataMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TOutputListSelectorDataMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualPacketizer(void *p);
   static void deleteArray_TVirtualPacketizer(void *p);
   static void destruct_TVirtualPacketizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualPacketizer*)
   {
      ::TVirtualPacketizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualPacketizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualPacketizer", ::TVirtualPacketizer::Class_Version(), "TVirtualPacketizer.h", 53,
                  typeid(::TVirtualPacketizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualPacketizer::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualPacketizer) );
      instance.SetDelete(&delete_TVirtualPacketizer);
      instance.SetDeleteArray(&deleteArray_TVirtualPacketizer);
      instance.SetDestructor(&destruct_TVirtualPacketizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualPacketizer*)
   {
      return GenerateInitInstanceLocal((::TVirtualPacketizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualPacketizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPacketizer(void *p);
   static void deleteArray_TPacketizer(void *p);
   static void destruct_TPacketizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPacketizer*)
   {
      ::TPacketizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPacketizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPacketizer", ::TPacketizer::Class_Version(), "TPacketizer.h", 39,
                  typeid(::TPacketizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPacketizer::Dictionary, isa_proxy, 4,
                  sizeof(::TPacketizer) );
      instance.SetDelete(&delete_TPacketizer);
      instance.SetDeleteArray(&deleteArray_TPacketizer);
      instance.SetDestructor(&destruct_TPacketizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPacketizer*)
   {
      return GenerateInitInstanceLocal((::TPacketizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPacketizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPacketizerAdaptive(void *p);
   static void deleteArray_TPacketizerAdaptive(void *p);
   static void destruct_TPacketizerAdaptive(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPacketizerAdaptive*)
   {
      ::TPacketizerAdaptive *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPacketizerAdaptive >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPacketizerAdaptive", ::TPacketizerAdaptive::Class_Version(), "TPacketizerAdaptive.h", 48,
                  typeid(::TPacketizerAdaptive), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPacketizerAdaptive::Dictionary, isa_proxy, 4,
                  sizeof(::TPacketizerAdaptive) );
      instance.SetDelete(&delete_TPacketizerAdaptive);
      instance.SetDeleteArray(&deleteArray_TPacketizerAdaptive);
      instance.SetDestructor(&destruct_TPacketizerAdaptive);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPacketizerAdaptive*)
   {
      return GenerateInitInstanceLocal((::TPacketizerAdaptive*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPacketizerAdaptive*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPacketizerFile(void *p);
   static void deleteArray_TPacketizerFile(void *p);
   static void destruct_TPacketizerFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPacketizerFile*)
   {
      ::TPacketizerFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPacketizerFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPacketizerFile", ::TPacketizerFile::Class_Version(), "TPacketizerFile.h", 33,
                  typeid(::TPacketizerFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPacketizerFile::Dictionary, isa_proxy, 4,
                  sizeof(::TPacketizerFile) );
      instance.SetDelete(&delete_TPacketizerFile);
      instance.SetDeleteArray(&deleteArray_TPacketizerFile);
      instance.SetDestructor(&destruct_TPacketizerFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPacketizerFile*)
   {
      return GenerateInitInstanceLocal((::TPacketizerFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPacketizerFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPacketizerMulti(void *p);
   static void deleteArray_TPacketizerMulti(void *p);
   static void destruct_TPacketizerMulti(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPacketizerMulti*)
   {
      ::TPacketizerMulti *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPacketizerMulti >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPacketizerMulti", ::TPacketizerMulti::Class_Version(), "TPacketizerMulti.h", 39,
                  typeid(::TPacketizerMulti), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPacketizerMulti::Dictionary, isa_proxy, 4,
                  sizeof(::TPacketizerMulti) );
      instance.SetDelete(&delete_TPacketizerMulti);
      instance.SetDeleteArray(&deleteArray_TPacketizerMulti);
      instance.SetDestructor(&destruct_TPacketizerMulti);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPacketizerMulti*)
   {
      return GenerateInitInstanceLocal((::TPacketizerMulti*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPacketizerMulti*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPacketizerUnit(void *p);
   static void deleteArray_TPacketizerUnit(void *p);
   static void destruct_TPacketizerUnit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPacketizerUnit*)
   {
      ::TPacketizerUnit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPacketizerUnit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPacketizerUnit", ::TPacketizerUnit::Class_Version(), "TPacketizerUnit.h", 40,
                  typeid(::TPacketizerUnit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPacketizerUnit::Dictionary, isa_proxy, 4,
                  sizeof(::TPacketizerUnit) );
      instance.SetDelete(&delete_TPacketizerUnit);
      instance.SetDeleteArray(&deleteArray_TPacketizerUnit);
      instance.SetDestructor(&destruct_TPacketizerUnit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPacketizerUnit*)
   {
      return GenerateInitInstanceLocal((::TPacketizerUnit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPacketizerUnit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPerfEvent(void *p = 0);
   static void *newArray_TPerfEvent(Long_t size, void *p);
   static void delete_TPerfEvent(void *p);
   static void deleteArray_TPerfEvent(void *p);
   static void destruct_TPerfEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPerfEvent*)
   {
      ::TPerfEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPerfEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPerfEvent", ::TPerfEvent::Class_Version(), "TPerfStats.h", 39,
                  typeid(::TPerfEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPerfEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TPerfEvent) );
      instance.SetNew(&new_TPerfEvent);
      instance.SetNewArray(&newArray_TPerfEvent);
      instance.SetDelete(&delete_TPerfEvent);
      instance.SetDeleteArray(&deleteArray_TPerfEvent);
      instance.SetDestructor(&destruct_TPerfEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPerfEvent*)
   {
      return GenerateInitInstanceLocal((::TPerfEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPerfEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPerfStats(void *p);
   static void deleteArray_TPerfStats(void *p);
   static void destruct_TPerfStats(void *p);
   static void streamer_TPerfStats(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPerfStats*)
   {
      ::TPerfStats *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPerfStats >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPerfStats", ::TPerfStats::Class_Version(), "TPerfStats.h", 70,
                  typeid(::TPerfStats), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPerfStats::Dictionary, isa_proxy, 16,
                  sizeof(::TPerfStats) );
      instance.SetDelete(&delete_TPerfStats);
      instance.SetDeleteArray(&deleteArray_TPerfStats);
      instance.SetDestructor(&destruct_TPerfStats);
      instance.SetStreamerFunc(&streamer_TPerfStats);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPerfStats*)
   {
      return GenerateInitInstanceLocal((::TPerfStats*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPerfStats*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofLimitsFinder(void *p = 0);
   static void *newArray_TProofLimitsFinder(Long_t size, void *p);
   static void delete_TProofLimitsFinder(void *p);
   static void deleteArray_TProofLimitsFinder(void *p);
   static void destruct_TProofLimitsFinder(void *p);
   static void streamer_TProofLimitsFinder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofLimitsFinder*)
   {
      ::TProofLimitsFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofLimitsFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofLimitsFinder", ::TProofLimitsFinder::Class_Version(), "TProofLimitsFinder.h", 28,
                  typeid(::TProofLimitsFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofLimitsFinder::Dictionary, isa_proxy, 16,
                  sizeof(::TProofLimitsFinder) );
      instance.SetNew(&new_TProofLimitsFinder);
      instance.SetNewArray(&newArray_TProofLimitsFinder);
      instance.SetDelete(&delete_TProofLimitsFinder);
      instance.SetDeleteArray(&deleteArray_TProofLimitsFinder);
      instance.SetDestructor(&destruct_TProofLimitsFinder);
      instance.SetStreamerFunc(&streamer_TProofLimitsFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofLimitsFinder*)
   {
      return GenerateInitInstanceLocal((::TProofLimitsFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofLimitsFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofMonSender(void *p);
   static void deleteArray_TProofMonSender(void *p);
   static void destruct_TProofMonSender(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofMonSender*)
   {
      ::TProofMonSender *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofMonSender >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofMonSender", ::TProofMonSender::Class_Version(), "TProofMonSender.h", 30,
                  typeid(::TProofMonSender), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofMonSender::Dictionary, isa_proxy, 4,
                  sizeof(::TProofMonSender) );
      instance.SetDelete(&delete_TProofMonSender);
      instance.SetDeleteArray(&deleteArray_TProofMonSender);
      instance.SetDestructor(&destruct_TProofMonSender);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofMonSender*)
   {
      return GenerateInitInstanceLocal((::TProofMonSender*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofMonSender*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofMonSenderML(void *p);
   static void deleteArray_TProofMonSenderML(void *p);
   static void destruct_TProofMonSenderML(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofMonSenderML*)
   {
      ::TProofMonSenderML *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofMonSenderML >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofMonSenderML", ::TProofMonSenderML::Class_Version(), "TProofMonSenderML.h", 30,
                  typeid(::TProofMonSenderML), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofMonSenderML::Dictionary, isa_proxy, 4,
                  sizeof(::TProofMonSenderML) );
      instance.SetDelete(&delete_TProofMonSenderML);
      instance.SetDeleteArray(&deleteArray_TProofMonSenderML);
      instance.SetDestructor(&destruct_TProofMonSenderML);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofMonSenderML*)
   {
      return GenerateInitInstanceLocal((::TProofMonSenderML*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofMonSenderML*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofMonSenderSQL(void *p);
   static void deleteArray_TProofMonSenderSQL(void *p);
   static void destruct_TProofMonSenderSQL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofMonSenderSQL*)
   {
      ::TProofMonSenderSQL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofMonSenderSQL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofMonSenderSQL", ::TProofMonSenderSQL::Class_Version(), "TProofMonSenderSQL.h", 30,
                  typeid(::TProofMonSenderSQL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofMonSenderSQL::Dictionary, isa_proxy, 4,
                  sizeof(::TProofMonSenderSQL) );
      instance.SetDelete(&delete_TProofMonSenderSQL);
      instance.SetDeleteArray(&deleteArray_TProofMonSenderSQL);
      instance.SetDestructor(&destruct_TProofMonSenderSQL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofMonSenderSQL*)
   {
      return GenerateInitInstanceLocal((::TProofMonSenderSQL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofMonSenderSQL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofPlayer(void *p = 0);
   static void *newArray_TProofPlayer(Long_t size, void *p);
   static void delete_TProofPlayer(void *p);
   static void deleteArray_TProofPlayer(void *p);
   static void destruct_TProofPlayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofPlayer*)
   {
      ::TProofPlayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofPlayer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofPlayer", ::TProofPlayer::Class_Version(), "TProofPlayer.h", 60,
                  typeid(::TProofPlayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofPlayer::Dictionary, isa_proxy, 4,
                  sizeof(::TProofPlayer) );
      instance.SetNew(&new_TProofPlayer);
      instance.SetNewArray(&newArray_TProofPlayer);
      instance.SetDelete(&delete_TProofPlayer);
      instance.SetDeleteArray(&deleteArray_TProofPlayer);
      instance.SetDestructor(&destruct_TProofPlayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofPlayer*)
   {
      return GenerateInitInstanceLocal((::TProofPlayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofPlayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofPlayerLocal(void *p = 0);
   static void *newArray_TProofPlayerLocal(Long_t size, void *p);
   static void delete_TProofPlayerLocal(void *p);
   static void deleteArray_TProofPlayerLocal(void *p);
   static void destruct_TProofPlayerLocal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofPlayerLocal*)
   {
      ::TProofPlayerLocal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofPlayerLocal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofPlayerLocal", ::TProofPlayerLocal::Class_Version(), "TProofPlayer.h", 234,
                  typeid(::TProofPlayerLocal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofPlayerLocal::Dictionary, isa_proxy, 4,
                  sizeof(::TProofPlayerLocal) );
      instance.SetNew(&new_TProofPlayerLocal);
      instance.SetNewArray(&newArray_TProofPlayerLocal);
      instance.SetDelete(&delete_TProofPlayerLocal);
      instance.SetDeleteArray(&deleteArray_TProofPlayerLocal);
      instance.SetDestructor(&destruct_TProofPlayerLocal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofPlayerLocal*)
   {
      return GenerateInitInstanceLocal((::TProofPlayerLocal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofPlayerLocal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofPlayerRemote(void *p = 0);
   static void *newArray_TProofPlayerRemote(Long_t size, void *p);
   static void delete_TProofPlayerRemote(void *p);
   static void deleteArray_TProofPlayerRemote(void *p);
   static void destruct_TProofPlayerRemote(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofPlayerRemote*)
   {
      ::TProofPlayerRemote *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofPlayerRemote >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofPlayerRemote", ::TProofPlayerRemote::Class_Version(), "TProofPlayer.h", 279,
                  typeid(::TProofPlayerRemote), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofPlayerRemote::Dictionary, isa_proxy, 4,
                  sizeof(::TProofPlayerRemote) );
      instance.SetNew(&new_TProofPlayerRemote);
      instance.SetNewArray(&newArray_TProofPlayerRemote);
      instance.SetDelete(&delete_TProofPlayerRemote);
      instance.SetDeleteArray(&deleteArray_TProofPlayerRemote);
      instance.SetDestructor(&destruct_TProofPlayerRemote);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofPlayerRemote*)
   {
      return GenerateInitInstanceLocal((::TProofPlayerRemote*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofPlayerRemote*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofPlayerSlave(void *p = 0);
   static void *newArray_TProofPlayerSlave(Long_t size, void *p);
   static void delete_TProofPlayerSlave(void *p);
   static void deleteArray_TProofPlayerSlave(void *p);
   static void destruct_TProofPlayerSlave(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofPlayerSlave*)
   {
      ::TProofPlayerSlave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofPlayerSlave >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofPlayerSlave", ::TProofPlayerSlave::Class_Version(), "TProofPlayer.h", 372,
                  typeid(::TProofPlayerSlave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofPlayerSlave::Dictionary, isa_proxy, 4,
                  sizeof(::TProofPlayerSlave) );
      instance.SetNew(&new_TProofPlayerSlave);
      instance.SetNewArray(&newArray_TProofPlayerSlave);
      instance.SetDelete(&delete_TProofPlayerSlave);
      instance.SetDeleteArray(&deleteArray_TProofPlayerSlave);
      instance.SetDestructor(&destruct_TProofPlayerSlave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofPlayerSlave*)
   {
      return GenerateInitInstanceLocal((::TProofPlayerSlave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofPlayerSlave*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofPlayerSuperMaster(void *p = 0);
   static void *newArray_TProofPlayerSuperMaster(Long_t size, void *p);
   static void delete_TProofPlayerSuperMaster(void *p);
   static void deleteArray_TProofPlayerSuperMaster(void *p);
   static void destruct_TProofPlayerSuperMaster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofPlayerSuperMaster*)
   {
      ::TProofPlayerSuperMaster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofPlayerSuperMaster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofPlayerSuperMaster", ::TProofPlayerSuperMaster::Class_Version(), "TProofPlayer.h", 395,
                  typeid(::TProofPlayerSuperMaster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofPlayerSuperMaster::Dictionary, isa_proxy, 4,
                  sizeof(::TProofPlayerSuperMaster) );
      instance.SetNew(&new_TProofPlayerSuperMaster);
      instance.SetNewArray(&newArray_TProofPlayerSuperMaster);
      instance.SetDelete(&delete_TProofPlayerSuperMaster);
      instance.SetDeleteArray(&deleteArray_TProofPlayerSuperMaster);
      instance.SetDestructor(&destruct_TProofPlayerSuperMaster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofPlayerSuperMaster*)
   {
      return GenerateInitInstanceLocal((::TProofPlayerSuperMaster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofPlayerSuperMaster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofPlayerLite(void *p = 0);
   static void *newArray_TProofPlayerLite(Long_t size, void *p);
   static void delete_TProofPlayerLite(void *p);
   static void deleteArray_TProofPlayerLite(void *p);
   static void destruct_TProofPlayerLite(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofPlayerLite*)
   {
      ::TProofPlayerLite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofPlayerLite >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofPlayerLite", ::TProofPlayerLite::Class_Version(), "TProofPlayerLite.h", 28,
                  typeid(::TProofPlayerLite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofPlayerLite::Dictionary, isa_proxy, 4,
                  sizeof(::TProofPlayerLite) );
      instance.SetNew(&new_TProofPlayerLite);
      instance.SetNewArray(&newArray_TProofPlayerLite);
      instance.SetDelete(&delete_TProofPlayerLite);
      instance.SetDeleteArray(&deleteArray_TProofPlayerLite);
      instance.SetDestructor(&destruct_TProofPlayerLite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofPlayerLite*)
   {
      return GenerateInitInstanceLocal((::TProofPlayerLite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofPlayerLite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TStatsFeedback(void *p = 0);
   static void *newArray_TStatsFeedback(Long_t size, void *p);
   static void delete_TStatsFeedback(void *p);
   static void deleteArray_TStatsFeedback(void *p);
   static void destruct_TStatsFeedback(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStatsFeedback*)
   {
      ::TStatsFeedback *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStatsFeedback >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStatsFeedback", ::TStatsFeedback::Class_Version(), "TStatsFeedback.h", 32,
                  typeid(::TStatsFeedback), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStatsFeedback::Dictionary, isa_proxy, 4,
                  sizeof(::TStatsFeedback) );
      instance.SetNew(&new_TStatsFeedback);
      instance.SetNewArray(&newArray_TStatsFeedback);
      instance.SetDelete(&delete_TStatsFeedback);
      instance.SetDeleteArray(&deleteArray_TStatsFeedback);
      instance.SetDestructor(&destruct_TStatsFeedback);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStatsFeedback*)
   {
      return GenerateInitInstanceLocal((::TStatsFeedback*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStatsFeedback*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TStatus(void *p = 0);
   static void *newArray_TStatus(Long_t size, void *p);
   static void delete_TStatus(void *p);
   static void deleteArray_TStatus(void *p);
   static void destruct_TStatus(void *p);
   static void streamer_TStatus(TBuffer &buf, void *obj);
   static Long64_t merge_TStatus(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStatus*)
   {
      ::TStatus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStatus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStatus", ::TStatus::Class_Version(), "TStatus.h", 35,
                  typeid(::TStatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStatus::Dictionary, isa_proxy, 17,
                  sizeof(::TStatus) );
      instance.SetNew(&new_TStatus);
      instance.SetNewArray(&newArray_TStatus);
      instance.SetDelete(&delete_TStatus);
      instance.SetDeleteArray(&deleteArray_TStatus);
      instance.SetDestructor(&destruct_TStatus);
      instance.SetStreamerFunc(&streamer_TStatus);
      instance.SetMerge(&merge_TStatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStatus*)
   {
      return GenerateInitInstanceLocal((::TStatus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStatus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TDrawFeedback::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDrawFeedback::Class_Name()
{
   return "TDrawFeedback";
}

//______________________________________________________________________________
const char *TDrawFeedback::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDrawFeedback*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDrawFeedback::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDrawFeedback*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDrawFeedback::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDrawFeedback*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDrawFeedback::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDrawFeedback*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEventIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEventIter::Class_Name()
{
   return "TEventIter";
}

//______________________________________________________________________________
const char *TEventIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEventIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEventIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEventIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventIter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEventIterUnit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEventIterUnit::Class_Name()
{
   return "TEventIterUnit";
}

//______________________________________________________________________________
const char *TEventIterUnit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventIterUnit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEventIterUnit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventIterUnit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEventIterUnit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventIterUnit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEventIterUnit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventIterUnit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEventIterObj::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEventIterObj::Class_Name()
{
   return "TEventIterObj";
}

//______________________________________________________________________________
const char *TEventIterObj::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventIterObj*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEventIterObj::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventIterObj*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEventIterObj::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventIterObj*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEventIterObj::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventIterObj*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEventIterTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEventIterTree::Class_Name()
{
   return "TEventIterTree";
}

//______________________________________________________________________________
const char *TEventIterTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventIterTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEventIterTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventIterTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEventIterTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventIterTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEventIterTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventIterTree*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOutputListSelectorDataMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TOutputListSelectorDataMap::Class_Name()
{
   return "TOutputListSelectorDataMap";
}

//______________________________________________________________________________
const char *TOutputListSelectorDataMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOutputListSelectorDataMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TOutputListSelectorDataMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOutputListSelectorDataMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOutputListSelectorDataMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOutputListSelectorDataMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOutputListSelectorDataMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOutputListSelectorDataMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualPacketizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualPacketizer::Class_Name()
{
   return "TVirtualPacketizer";
}

//______________________________________________________________________________
const char *TVirtualPacketizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualPacketizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualPacketizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualPacketizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualPacketizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualPacketizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualPacketizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualPacketizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPacketizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPacketizer::Class_Name()
{
   return "TPacketizer";
}

//______________________________________________________________________________
const char *TPacketizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPacketizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPacketizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPacketizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPacketizerAdaptive::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPacketizerAdaptive::Class_Name()
{
   return "TPacketizerAdaptive";
}

//______________________________________________________________________________
const char *TPacketizerAdaptive::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerAdaptive*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPacketizerAdaptive::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerAdaptive*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPacketizerAdaptive::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerAdaptive*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPacketizerAdaptive::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerAdaptive*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPacketizerFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPacketizerFile::Class_Name()
{
   return "TPacketizerFile";
}

//______________________________________________________________________________
const char *TPacketizerFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPacketizerFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPacketizerFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPacketizerFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPacketizerMulti::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPacketizerMulti::Class_Name()
{
   return "TPacketizerMulti";
}

//______________________________________________________________________________
const char *TPacketizerMulti::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerMulti*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPacketizerMulti::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerMulti*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPacketizerMulti::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerMulti*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPacketizerMulti::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerMulti*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPacketizerUnit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPacketizerUnit::Class_Name()
{
   return "TPacketizerUnit";
}

//______________________________________________________________________________
const char *TPacketizerUnit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerUnit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPacketizerUnit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerUnit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPacketizerUnit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerUnit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPacketizerUnit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPacketizerUnit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPerfEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPerfEvent::Class_Name()
{
   return "TPerfEvent";
}

//______________________________________________________________________________
const char *TPerfEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPerfEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPerfEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPerfEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPerfEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPerfEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPerfEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPerfEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPerfStats::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPerfStats::Class_Name()
{
   return "TPerfStats";
}

//______________________________________________________________________________
const char *TPerfStats::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPerfStats*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPerfStats::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPerfStats*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPerfStats::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPerfStats*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPerfStats::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPerfStats*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofLimitsFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofLimitsFinder::Class_Name()
{
   return "TProofLimitsFinder";
}

//______________________________________________________________________________
const char *TProofLimitsFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofLimitsFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofLimitsFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofLimitsFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofLimitsFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofLimitsFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofLimitsFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofLimitsFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofMonSender::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofMonSender::Class_Name()
{
   return "TProofMonSender";
}

//______________________________________________________________________________
const char *TProofMonSender::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSender*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofMonSender::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSender*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofMonSender::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSender*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofMonSender::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSender*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofMonSenderML::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofMonSenderML::Class_Name()
{
   return "TProofMonSenderML";
}

//______________________________________________________________________________
const char *TProofMonSenderML::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSenderML*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofMonSenderML::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSenderML*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofMonSenderML::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSenderML*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofMonSenderML::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSenderML*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofMonSenderSQL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofMonSenderSQL::Class_Name()
{
   return "TProofMonSenderSQL";
}

//______________________________________________________________________________
const char *TProofMonSenderSQL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSenderSQL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofMonSenderSQL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSenderSQL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofMonSenderSQL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSenderSQL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofMonSenderSQL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMonSenderSQL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofPlayer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofPlayer::Class_Name()
{
   return "TProofPlayer";
}

//______________________________________________________________________________
const char *TProofPlayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofPlayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofPlayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofPlayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofPlayerLocal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofPlayerLocal::Class_Name()
{
   return "TProofPlayerLocal";
}

//______________________________________________________________________________
const char *TProofPlayerLocal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerLocal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofPlayerLocal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerLocal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofPlayerLocal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerLocal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofPlayerLocal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerLocal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofPlayerRemote::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofPlayerRemote::Class_Name()
{
   return "TProofPlayerRemote";
}

//______________________________________________________________________________
const char *TProofPlayerRemote::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerRemote*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofPlayerRemote::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerRemote*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofPlayerRemote::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerRemote*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofPlayerRemote::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerRemote*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofPlayerSlave::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofPlayerSlave::Class_Name()
{
   return "TProofPlayerSlave";
}

//______________________________________________________________________________
const char *TProofPlayerSlave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerSlave*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofPlayerSlave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerSlave*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofPlayerSlave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerSlave*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofPlayerSlave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerSlave*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofPlayerSuperMaster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofPlayerSuperMaster::Class_Name()
{
   return "TProofPlayerSuperMaster";
}

//______________________________________________________________________________
const char *TProofPlayerSuperMaster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerSuperMaster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofPlayerSuperMaster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerSuperMaster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofPlayerSuperMaster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerSuperMaster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofPlayerSuperMaster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerSuperMaster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofPlayerLite::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofPlayerLite::Class_Name()
{
   return "TProofPlayerLite";
}

//______________________________________________________________________________
const char *TProofPlayerLite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerLite*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofPlayerLite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerLite*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofPlayerLite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerLite*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofPlayerLite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofPlayerLite*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStatsFeedback::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStatsFeedback::Class_Name()
{
   return "TStatsFeedback";
}

//______________________________________________________________________________
const char *TStatsFeedback::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStatsFeedback*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStatsFeedback::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStatsFeedback*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStatsFeedback::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStatsFeedback*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStatsFeedback::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStatsFeedback*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStatus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStatus::Class_Name()
{
   return "TStatus";
}

//______________________________________________________________________________
const char *TStatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStatus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStatus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStatus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStatus*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TDrawFeedback::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDrawFeedback.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDrawFeedback::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDrawFeedback::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDrawFeedback(void *p) {
      return  p ? new(p) ::TDrawFeedback : new ::TDrawFeedback;
   }
   static void *newArray_TDrawFeedback(Long_t nElements, void *p) {
      return p ? new(p) ::TDrawFeedback[nElements] : new ::TDrawFeedback[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDrawFeedback(void *p) {
      delete ((::TDrawFeedback*)p);
   }
   static void deleteArray_TDrawFeedback(void *p) {
      delete [] ((::TDrawFeedback*)p);
   }
   static void destruct_TDrawFeedback(void *p) {
      typedef ::TDrawFeedback current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDrawFeedback

//______________________________________________________________________________
void TEventIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEventIter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEventIter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEventIter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEventIter(void *p) {
      delete ((::TEventIter*)p);
   }
   static void deleteArray_TEventIter(void *p) {
      delete [] ((::TEventIter*)p);
   }
   static void destruct_TEventIter(void *p) {
      typedef ::TEventIter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TEventIter

//______________________________________________________________________________
void TEventIterUnit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEventIterUnit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEventIterUnit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEventIterUnit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEventIterUnit(void *p) {
      return  p ? new(p) ::TEventIterUnit : new ::TEventIterUnit;
   }
   static void *newArray_TEventIterUnit(Long_t nElements, void *p) {
      return p ? new(p) ::TEventIterUnit[nElements] : new ::TEventIterUnit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEventIterUnit(void *p) {
      delete ((::TEventIterUnit*)p);
   }
   static void deleteArray_TEventIterUnit(void *p) {
      delete [] ((::TEventIterUnit*)p);
   }
   static void destruct_TEventIterUnit(void *p) {
      typedef ::TEventIterUnit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TEventIterUnit

//______________________________________________________________________________
void TEventIterObj::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEventIterObj.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEventIterObj::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEventIterObj::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEventIterObj(void *p) {
      return  p ? new(p) ::TEventIterObj : new ::TEventIterObj;
   }
   static void *newArray_TEventIterObj(Long_t nElements, void *p) {
      return p ? new(p) ::TEventIterObj[nElements] : new ::TEventIterObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEventIterObj(void *p) {
      delete ((::TEventIterObj*)p);
   }
   static void deleteArray_TEventIterObj(void *p) {
      delete [] ((::TEventIterObj*)p);
   }
   static void destruct_TEventIterObj(void *p) {
      typedef ::TEventIterObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TEventIterObj

//______________________________________________________________________________
void TEventIterTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEventIterTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEventIterTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEventIterTree::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEventIterTree(void *p) {
      return  p ? new(p) ::TEventIterTree : new ::TEventIterTree;
   }
   static void *newArray_TEventIterTree(Long_t nElements, void *p) {
      return p ? new(p) ::TEventIterTree[nElements] : new ::TEventIterTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEventIterTree(void *p) {
      delete ((::TEventIterTree*)p);
   }
   static void deleteArray_TEventIterTree(void *p) {
      delete [] ((::TEventIterTree*)p);
   }
   static void destruct_TEventIterTree(void *p) {
      typedef ::TEventIterTree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TEventIterTree

//______________________________________________________________________________
void TOutputListSelectorDataMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOutputListSelectorDataMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TOutputListSelectorDataMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TOutputListSelectorDataMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOutputListSelectorDataMap(void *p) {
      return  p ? new(p) ::TOutputListSelectorDataMap : new ::TOutputListSelectorDataMap;
   }
   static void *newArray_TOutputListSelectorDataMap(Long_t nElements, void *p) {
      return p ? new(p) ::TOutputListSelectorDataMap[nElements] : new ::TOutputListSelectorDataMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOutputListSelectorDataMap(void *p) {
      delete ((::TOutputListSelectorDataMap*)p);
   }
   static void deleteArray_TOutputListSelectorDataMap(void *p) {
      delete [] ((::TOutputListSelectorDataMap*)p);
   }
   static void destruct_TOutputListSelectorDataMap(void *p) {
      typedef ::TOutputListSelectorDataMap current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TOutputListSelectorDataMap(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TOutputListSelectorDataMap*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TOutputListSelectorDataMap

//______________________________________________________________________________
void TVirtualPacketizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualPacketizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualPacketizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualPacketizer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualPacketizer(void *p) {
      delete ((::TVirtualPacketizer*)p);
   }
   static void deleteArray_TVirtualPacketizer(void *p) {
      delete [] ((::TVirtualPacketizer*)p);
   }
   static void destruct_TVirtualPacketizer(void *p) {
      typedef ::TVirtualPacketizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualPacketizer

//______________________________________________________________________________
void TPacketizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPacketizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPacketizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPacketizer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPacketizer(void *p) {
      delete ((::TPacketizer*)p);
   }
   static void deleteArray_TPacketizer(void *p) {
      delete [] ((::TPacketizer*)p);
   }
   static void destruct_TPacketizer(void *p) {
      typedef ::TPacketizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPacketizer

//______________________________________________________________________________
void TPacketizerAdaptive::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPacketizerAdaptive.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPacketizerAdaptive::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPacketizerAdaptive::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPacketizerAdaptive(void *p) {
      delete ((::TPacketizerAdaptive*)p);
   }
   static void deleteArray_TPacketizerAdaptive(void *p) {
      delete [] ((::TPacketizerAdaptive*)p);
   }
   static void destruct_TPacketizerAdaptive(void *p) {
      typedef ::TPacketizerAdaptive current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPacketizerAdaptive

//______________________________________________________________________________
void TPacketizerFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPacketizerFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPacketizerFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPacketizerFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPacketizerFile(void *p) {
      delete ((::TPacketizerFile*)p);
   }
   static void deleteArray_TPacketizerFile(void *p) {
      delete [] ((::TPacketizerFile*)p);
   }
   static void destruct_TPacketizerFile(void *p) {
      typedef ::TPacketizerFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPacketizerFile

//______________________________________________________________________________
void TPacketizerMulti::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPacketizerMulti.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPacketizerMulti::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPacketizerMulti::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPacketizerMulti(void *p) {
      delete ((::TPacketizerMulti*)p);
   }
   static void deleteArray_TPacketizerMulti(void *p) {
      delete [] ((::TPacketizerMulti*)p);
   }
   static void destruct_TPacketizerMulti(void *p) {
      typedef ::TPacketizerMulti current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPacketizerMulti

//______________________________________________________________________________
void TPacketizerUnit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPacketizerUnit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPacketizerUnit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPacketizerUnit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPacketizerUnit(void *p) {
      delete ((::TPacketizerUnit*)p);
   }
   static void deleteArray_TPacketizerUnit(void *p) {
      delete [] ((::TPacketizerUnit*)p);
   }
   static void destruct_TPacketizerUnit(void *p) {
      typedef ::TPacketizerUnit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPacketizerUnit

//______________________________________________________________________________
void TPerfEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPerfEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPerfEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPerfEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPerfEvent(void *p) {
      return  p ? new(p) ::TPerfEvent : new ::TPerfEvent;
   }
   static void *newArray_TPerfEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TPerfEvent[nElements] : new ::TPerfEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPerfEvent(void *p) {
      delete ((::TPerfEvent*)p);
   }
   static void deleteArray_TPerfEvent(void *p) {
      delete [] ((::TPerfEvent*)p);
   }
   static void destruct_TPerfEvent(void *p) {
      typedef ::TPerfEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPerfEvent

//______________________________________________________________________________
void TPerfStats::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPerfStats.

   TVirtualPerfStats::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPerfStats(void *p) {
      delete ((::TPerfStats*)p);
   }
   static void deleteArray_TPerfStats(void *p) {
      delete [] ((::TPerfStats*)p);
   }
   static void destruct_TPerfStats(void *p) {
      typedef ::TPerfStats current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPerfStats(TBuffer &buf, void *obj) {
      ((::TPerfStats*)obj)->::TPerfStats::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPerfStats

//______________________________________________________________________________
void TProofLimitsFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofLimitsFinder.

   THLimitsFinder::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofLimitsFinder(void *p) {
      return  p ? new(p) ::TProofLimitsFinder : new ::TProofLimitsFinder;
   }
   static void *newArray_TProofLimitsFinder(Long_t nElements, void *p) {
      return p ? new(p) ::TProofLimitsFinder[nElements] : new ::TProofLimitsFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofLimitsFinder(void *p) {
      delete ((::TProofLimitsFinder*)p);
   }
   static void deleteArray_TProofLimitsFinder(void *p) {
      delete [] ((::TProofLimitsFinder*)p);
   }
   static void destruct_TProofLimitsFinder(void *p) {
      typedef ::TProofLimitsFinder current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofLimitsFinder(TBuffer &buf, void *obj) {
      ((::TProofLimitsFinder*)obj)->::TProofLimitsFinder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofLimitsFinder

//______________________________________________________________________________
void TProofMonSender::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofMonSender.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofMonSender::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofMonSender::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofMonSender(void *p) {
      delete ((::TProofMonSender*)p);
   }
   static void deleteArray_TProofMonSender(void *p) {
      delete [] ((::TProofMonSender*)p);
   }
   static void destruct_TProofMonSender(void *p) {
      typedef ::TProofMonSender current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofMonSender

//______________________________________________________________________________
void TProofMonSenderML::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofMonSenderML.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofMonSenderML::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofMonSenderML::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofMonSenderML(void *p) {
      delete ((::TProofMonSenderML*)p);
   }
   static void deleteArray_TProofMonSenderML(void *p) {
      delete [] ((::TProofMonSenderML*)p);
   }
   static void destruct_TProofMonSenderML(void *p) {
      typedef ::TProofMonSenderML current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofMonSenderML

//______________________________________________________________________________
void TProofMonSenderSQL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofMonSenderSQL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofMonSenderSQL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofMonSenderSQL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofMonSenderSQL(void *p) {
      delete ((::TProofMonSenderSQL*)p);
   }
   static void deleteArray_TProofMonSenderSQL(void *p) {
      delete [] ((::TProofMonSenderSQL*)p);
   }
   static void destruct_TProofMonSenderSQL(void *p) {
      typedef ::TProofMonSenderSQL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofMonSenderSQL

//______________________________________________________________________________
void TProofPlayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofPlayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofPlayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofPlayer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofPlayer(void *p) {
      return  p ? new(p) ::TProofPlayer : new ::TProofPlayer;
   }
   static void *newArray_TProofPlayer(Long_t nElements, void *p) {
      return p ? new(p) ::TProofPlayer[nElements] : new ::TProofPlayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofPlayer(void *p) {
      delete ((::TProofPlayer*)p);
   }
   static void deleteArray_TProofPlayer(void *p) {
      delete [] ((::TProofPlayer*)p);
   }
   static void destruct_TProofPlayer(void *p) {
      typedef ::TProofPlayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofPlayer

//______________________________________________________________________________
void TProofPlayerLocal::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofPlayerLocal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofPlayerLocal::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofPlayerLocal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofPlayerLocal(void *p) {
      return  p ? new(p) ::TProofPlayerLocal : new ::TProofPlayerLocal;
   }
   static void *newArray_TProofPlayerLocal(Long_t nElements, void *p) {
      return p ? new(p) ::TProofPlayerLocal[nElements] : new ::TProofPlayerLocal[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofPlayerLocal(void *p) {
      delete ((::TProofPlayerLocal*)p);
   }
   static void deleteArray_TProofPlayerLocal(void *p) {
      delete [] ((::TProofPlayerLocal*)p);
   }
   static void destruct_TProofPlayerLocal(void *p) {
      typedef ::TProofPlayerLocal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofPlayerLocal

//______________________________________________________________________________
void TProofPlayerRemote::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofPlayerRemote.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofPlayerRemote::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofPlayerRemote::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofPlayerRemote(void *p) {
      return  p ? new(p) ::TProofPlayerRemote : new ::TProofPlayerRemote;
   }
   static void *newArray_TProofPlayerRemote(Long_t nElements, void *p) {
      return p ? new(p) ::TProofPlayerRemote[nElements] : new ::TProofPlayerRemote[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofPlayerRemote(void *p) {
      delete ((::TProofPlayerRemote*)p);
   }
   static void deleteArray_TProofPlayerRemote(void *p) {
      delete [] ((::TProofPlayerRemote*)p);
   }
   static void destruct_TProofPlayerRemote(void *p) {
      typedef ::TProofPlayerRemote current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofPlayerRemote

//______________________________________________________________________________
void TProofPlayerSlave::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofPlayerSlave.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofPlayerSlave::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofPlayerSlave::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofPlayerSlave(void *p) {
      return  p ? new(p) ::TProofPlayerSlave : new ::TProofPlayerSlave;
   }
   static void *newArray_TProofPlayerSlave(Long_t nElements, void *p) {
      return p ? new(p) ::TProofPlayerSlave[nElements] : new ::TProofPlayerSlave[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofPlayerSlave(void *p) {
      delete ((::TProofPlayerSlave*)p);
   }
   static void deleteArray_TProofPlayerSlave(void *p) {
      delete [] ((::TProofPlayerSlave*)p);
   }
   static void destruct_TProofPlayerSlave(void *p) {
      typedef ::TProofPlayerSlave current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofPlayerSlave

//______________________________________________________________________________
void TProofPlayerSuperMaster::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofPlayerSuperMaster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofPlayerSuperMaster::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofPlayerSuperMaster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofPlayerSuperMaster(void *p) {
      return  p ? new(p) ::TProofPlayerSuperMaster : new ::TProofPlayerSuperMaster;
   }
   static void *newArray_TProofPlayerSuperMaster(Long_t nElements, void *p) {
      return p ? new(p) ::TProofPlayerSuperMaster[nElements] : new ::TProofPlayerSuperMaster[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofPlayerSuperMaster(void *p) {
      delete ((::TProofPlayerSuperMaster*)p);
   }
   static void deleteArray_TProofPlayerSuperMaster(void *p) {
      delete [] ((::TProofPlayerSuperMaster*)p);
   }
   static void destruct_TProofPlayerSuperMaster(void *p) {
      typedef ::TProofPlayerSuperMaster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofPlayerSuperMaster

//______________________________________________________________________________
void TProofPlayerLite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofPlayerLite.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofPlayerLite::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofPlayerLite::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofPlayerLite(void *p) {
      return  p ? new(p) ::TProofPlayerLite : new ::TProofPlayerLite;
   }
   static void *newArray_TProofPlayerLite(Long_t nElements, void *p) {
      return p ? new(p) ::TProofPlayerLite[nElements] : new ::TProofPlayerLite[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofPlayerLite(void *p) {
      delete ((::TProofPlayerLite*)p);
   }
   static void deleteArray_TProofPlayerLite(void *p) {
      delete [] ((::TProofPlayerLite*)p);
   }
   static void destruct_TProofPlayerLite(void *p) {
      typedef ::TProofPlayerLite current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofPlayerLite

//______________________________________________________________________________
void TStatsFeedback::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStatsFeedback.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TStatsFeedback::Class(),this);
   } else {
      R__b.WriteClassBuffer(TStatsFeedback::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TStatsFeedback(void *p) {
      return  p ? new(p) ::TStatsFeedback : new ::TStatsFeedback;
   }
   static void *newArray_TStatsFeedback(Long_t nElements, void *p) {
      return p ? new(p) ::TStatsFeedback[nElements] : new ::TStatsFeedback[nElements];
   }
   // Wrapper around operator delete
   static void delete_TStatsFeedback(void *p) {
      delete ((::TStatsFeedback*)p);
   }
   static void deleteArray_TStatsFeedback(void *p) {
      delete [] ((::TStatsFeedback*)p);
   }
   static void destruct_TStatsFeedback(void *p) {
      typedef ::TStatsFeedback current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TStatsFeedback

namespace ROOT {
   // Wrappers around operator new
   static void *new_TStatus(void *p) {
      return  p ? new(p) ::TStatus : new ::TStatus;
   }
   static void *newArray_TStatus(Long_t nElements, void *p) {
      return p ? new(p) ::TStatus[nElements] : new ::TStatus[nElements];
   }
   // Wrapper around operator delete
   static void delete_TStatus(void *p) {
      delete ((::TStatus*)p);
   }
   static void deleteArray_TStatus(void *p) {
      delete [] ((::TStatus*)p);
   }
   static void destruct_TStatus(void *p) {
      typedef ::TStatus current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStatus(TBuffer &buf, void *obj) {
      ((::TStatus*)obj)->::TStatus::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TStatus(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TStatus*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TStatus

namespace {
  void TriggerDictionaryInitialization_libProofPlayer_Impl() {
    static const char* headers[] = {
"TDrawFeedback.h",
"TEventIter.h",
"TOutputListSelectorDataMap.h",
"TPacketizer.h",
"TPacketizerAdaptive.h",
"TPacketizerFile.h",
"TPacketizerMulti.h",
"TPacketizerUnit.h",
"TPerfStats.h",
"TProofLimitsFinder.h",
"TProofMonSender.h",
"TProofMonSenderML.h",
"TProofMonSenderSQL.h",
"TProofPlayer.h",
"TProofPlayerLite.h",
"TStatsFeedback.h",
"TStatus.h",
"TVirtualPacketizer.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libProofPlayer dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Present PROOF query feedback)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDrawFeedback.h")))  TDrawFeedback;
class __attribute__((annotate(R"ATTRDUMP(Event iterator used by TProofPlayer's)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TEventIter.h")))  TEventIter;
class __attribute__((annotate(R"ATTRDUMP(Event iterator for objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TEventIter.h")))  TEventIterUnit;
class __attribute__((annotate(R"ATTRDUMP(Event iterator for objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TEventIter.h")))  TEventIterObj;
class __attribute__((annotate(R"ATTRDUMP(Event iterator for Trees)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TEventIter.h")))  TEventIterTree;
class __attribute__((annotate(R"ATTRDUMP(Converter from output list to TSelector data members)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TOutputListSelectorDataMap.h")))  TOutputListSelectorDataMap;
class __attribute__((annotate(R"ATTRDUMP(Generate work packets for parallel processing)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualPacketizer.h")))  __attribute__((annotate("$clingAutoload$TPacketizer.h")))  TVirtualPacketizer;
class __attribute__((annotate(R"ATTRDUMP(Generate work packets for parallel processing)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPacketizer.h")))  TPacketizer;
class __attribute__((annotate(R"ATTRDUMP(Generate work packets for parallel processing)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPacketizerAdaptive.h")))  TPacketizerAdaptive;
class __attribute__((annotate(R"ATTRDUMP(Generate work packets for parallel processing)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPacketizerFile.h")))  TPacketizerFile;
class __attribute__((annotate(R"ATTRDUMP(Generate work packets for parallel processing)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPacketizerMulti.h")))  TPacketizerMulti;
class __attribute__((annotate(R"ATTRDUMP(Generate work packets for parallel processing)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPacketizerUnit.h")))  TPacketizerUnit;
class __attribute__((annotate(R"ATTRDUMP(Class holding TProof Event Info)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPerfStats.h")))  TPerfEvent;
class __attribute__((annotate(R"ATTRDUMP(Class for collecting PROOF statistics)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPerfStats.h")))  TPerfStats;
class __attribute__((annotate(R"ATTRDUMP(Find and communicate best axis limits)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofLimitsFinder.h")))  TProofLimitsFinder;
class __attribute__((annotate(R"ATTRDUMP(Interface for PROOF monitoring)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Interface for PROOF monitoring)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Interface for PROOF monitoring)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofMonSender.h")))  TProofMonSender;
class __attribute__((annotate(R"ATTRDUMP(Interface for PROOF monitoring)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Interface for PROOF monitoring)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Interface for PROOF monitoring)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofMonSenderML.h")))  TProofMonSenderML;
class __attribute__((annotate(R"ATTRDUMP(Interface for PROOF monitoring)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Interface for PROOF monitoring)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Interface for PROOF monitoring)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofMonSenderSQL.h")))  TProofMonSenderSQL;
class __attribute__((annotate(R"ATTRDUMP(Basic PROOF player)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofPlayer.h")))  TProofPlayer;
class __attribute__((annotate(R"ATTRDUMP(PROOF player running on client)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofPlayer.h")))  TProofPlayerLocal;
class __attribute__((annotate(R"ATTRDUMP(PROOF player running on master server)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofPlayer.h")))  TProofPlayerRemote;
class __attribute__((annotate(R"ATTRDUMP(PROOF player running on slave server)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofPlayer.h")))  TProofPlayerSlave;
class __attribute__((annotate(R"ATTRDUMP(PROOF player running on super master)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofPlayer.h")))  TProofPlayerSuperMaster;
class __attribute__((annotate(R"ATTRDUMP(PROOF player running in PROOF-Lite)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofPlayerLite.h")))  TProofPlayerLite;
class __attribute__((annotate(R"ATTRDUMP(Present PROOF query feedback)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TStatsFeedback.h")))  TStatsFeedback;
class __attribute__((annotate(R"ATTRDUMP(Status class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Status class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Status class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TStatus.h")))  TStatus;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libProofPlayer dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TDrawFeedback.h"
#include "TEventIter.h"
#include "TOutputListSelectorDataMap.h"
#include "TPacketizer.h"
#include "TPacketizerAdaptive.h"
#include "TPacketizerFile.h"
#include "TPacketizerMulti.h"
#include "TPacketizerUnit.h"
#include "TPerfStats.h"
#include "TProofLimitsFinder.h"
#include "TProofMonSender.h"
#include "TProofMonSenderML.h"
#include "TProofMonSenderSQL.h"
#include "TProofPlayer.h"
#include "TProofPlayerLite.h"
#include "TStatsFeedback.h"
#include "TStatus.h"
#include "TVirtualPacketizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TDrawFeedback", payloadCode, "@",
"TEventIter", payloadCode, "@",
"TEventIterObj", payloadCode, "@",
"TEventIterTree", payloadCode, "@",
"TEventIterUnit", payloadCode, "@",
"TOutputListSelectorDataMap", payloadCode, "@",
"TPacketizer", payloadCode, "@",
"TPacketizerAdaptive", payloadCode, "@",
"TPacketizerFile", payloadCode, "@",
"TPacketizerMulti", payloadCode, "@",
"TPacketizerUnit", payloadCode, "@",
"TPerfEvent", payloadCode, "@",
"TPerfStats", payloadCode, "@",
"TProofLimitsFinder", payloadCode, "@",
"TProofMonSender", payloadCode, "@",
"TProofMonSenderML", payloadCode, "@",
"TProofMonSenderSQL", payloadCode, "@",
"TProofPlayer", payloadCode, "@",
"TProofPlayerLite", payloadCode, "@",
"TProofPlayerLocal", payloadCode, "@",
"TProofPlayerRemote", payloadCode, "@",
"TProofPlayerSlave", payloadCode, "@",
"TProofPlayerSuperMaster", payloadCode, "@",
"TStatsFeedback", payloadCode, "@",
"TStatus", payloadCode, "@",
"TVirtualPacketizer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libProofPlayer",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libProofPlayer_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libProofPlayer_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libProofPlayer() {
  TriggerDictionaryInitialization_libProofPlayer_Impl();
}
