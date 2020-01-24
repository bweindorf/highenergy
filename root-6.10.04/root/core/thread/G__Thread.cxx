// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Thread

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
#include "TAtomicCount.h"
#include "TCondition.h"
#include "TConditionImp.h"
#include "TMutex.h"
#include "TMutexImp.h"
#include "TRWLock.h"
#include "ROOT/TRWSpinLock.hxx"
#include "TSemaphore.h"
#include "TThread.h"
#include "TThreadFactory.h"
#include "TThreadImp.h"
#include "ROOT/TThreadedObject.hxx"
#include "TThreadPool.h"
#include "ThreadLocalStorage.h"
#include "ROOT/TSpinMutex.hxx"
#include "TPosixCondition.h"
#include "TPosixMutex.h"
#include "TPosixThread.h"
#include "TPosixThreadFactory.h"
#include "PosixThreadInc.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *TAtomicCount_Dictionary();
   static void TAtomicCount_TClassManip(TClass*);
   static void delete_TAtomicCount(void *p);
   static void deleteArray_TAtomicCount(void *p);
   static void destruct_TAtomicCount(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAtomicCount*)
   {
      ::TAtomicCount *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TAtomicCount));
      static ::ROOT::TGenericClassInfo 
         instance("TAtomicCount", "TAtomicCountGcc.h", 52,
                  typeid(::TAtomicCount), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TAtomicCount_Dictionary, isa_proxy, 0,
                  sizeof(::TAtomicCount) );
      instance.SetDelete(&delete_TAtomicCount);
      instance.SetDeleteArray(&deleteArray_TAtomicCount);
      instance.SetDestructor(&destruct_TAtomicCount);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAtomicCount*)
   {
      return GenerateInitInstanceLocal((::TAtomicCount*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAtomicCount*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TAtomicCount_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TAtomicCount*)0x0)->GetClass();
      TAtomicCount_TClassManip(theClass);
   return theClass;
   }

   static void TAtomicCount_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TConditionImp(void *p);
   static void deleteArray_TConditionImp(void *p);
   static void destruct_TConditionImp(void *p);
   static void streamer_TConditionImp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TConditionImp*)
   {
      ::TConditionImp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TConditionImp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TConditionImp", ::TConditionImp::Class_Version(), "TConditionImp.h", 29,
                  typeid(::TConditionImp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TConditionImp::Dictionary, isa_proxy, 16,
                  sizeof(::TConditionImp) );
      instance.SetDelete(&delete_TConditionImp);
      instance.SetDeleteArray(&deleteArray_TConditionImp);
      instance.SetDestructor(&destruct_TConditionImp);
      instance.SetStreamerFunc(&streamer_TConditionImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TConditionImp*)
   {
      return GenerateInitInstanceLocal((::TConditionImp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TConditionImp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCondition(void *p = 0);
   static void *newArray_TCondition(Long_t size, void *p);
   static void delete_TCondition(void *p);
   static void deleteArray_TCondition(void *p);
   static void destruct_TCondition(void *p);
   static void streamer_TCondition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCondition*)
   {
      ::TCondition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCondition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCondition", ::TCondition::Class_Version(), "TCondition.h", 32,
                  typeid(::TCondition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCondition::Dictionary, isa_proxy, 16,
                  sizeof(::TCondition) );
      instance.SetNew(&new_TCondition);
      instance.SetNewArray(&newArray_TCondition);
      instance.SetDelete(&delete_TCondition);
      instance.SetDeleteArray(&deleteArray_TCondition);
      instance.SetDestructor(&destruct_TCondition);
      instance.SetStreamerFunc(&streamer_TCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCondition*)
   {
      return GenerateInitInstanceLocal((::TCondition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCondition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMutexImp(void *p);
   static void deleteArray_TMutexImp(void *p);
   static void destruct_TMutexImp(void *p);
   static void streamer_TMutexImp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMutexImp*)
   {
      ::TMutexImp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMutexImp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMutexImp", ::TMutexImp::Class_Version(), "TMutexImp.h", 29,
                  typeid(::TMutexImp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMutexImp::Dictionary, isa_proxy, 16,
                  sizeof(::TMutexImp) );
      instance.SetDelete(&delete_TMutexImp);
      instance.SetDeleteArray(&deleteArray_TMutexImp);
      instance.SetDestructor(&destruct_TMutexImp);
      instance.SetStreamerFunc(&streamer_TMutexImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMutexImp*)
   {
      return GenerateInitInstanceLocal((::TMutexImp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMutexImp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMutex(void *p = 0);
   static void *newArray_TMutex(Long_t size, void *p);
   static void delete_TMutex(void *p);
   static void deleteArray_TMutex(void *p);
   static void destruct_TMutex(void *p);
   static void streamer_TMutex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMutex*)
   {
      ::TMutex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMutex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMutex", ::TMutex::Class_Version(), "TMutex.h", 30,
                  typeid(::TMutex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMutex::Dictionary, isa_proxy, 16,
                  sizeof(::TMutex) );
      instance.SetNew(&new_TMutex);
      instance.SetNewArray(&newArray_TMutex);
      instance.SetDelete(&delete_TMutex);
      instance.SetDeleteArray(&deleteArray_TMutex);
      instance.SetDestructor(&destruct_TMutex);
      instance.SetStreamerFunc(&streamer_TMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMutex*)
   {
      return GenerateInitInstanceLocal((::TMutex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRWLock(void *p = 0);
   static void *newArray_TRWLock(Long_t size, void *p);
   static void delete_TRWLock(void *p);
   static void deleteArray_TRWLock(void *p);
   static void destruct_TRWLock(void *p);
   static void streamer_TRWLock(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRWLock*)
   {
      ::TRWLock *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRWLock >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRWLock", ::TRWLock::Class_Version(), "TRWLock.h", 31,
                  typeid(::TRWLock), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRWLock::Dictionary, isa_proxy, 16,
                  sizeof(::TRWLock) );
      instance.SetNew(&new_TRWLock);
      instance.SetNewArray(&newArray_TRWLock);
      instance.SetDelete(&delete_TRWLock);
      instance.SetDeleteArray(&deleteArray_TRWLock);
      instance.SetDestructor(&destruct_TRWLock);
      instance.SetStreamerFunc(&streamer_TRWLock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRWLock*)
   {
      return GenerateInitInstanceLocal((::TRWLock*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRWLock*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLTSpinMutex_Dictionary();
   static void ROOTcLcLTSpinMutex_TClassManip(TClass*);
   static void *new_ROOTcLcLTSpinMutex(void *p = 0);
   static void *newArray_ROOTcLcLTSpinMutex(Long_t size, void *p);
   static void delete_ROOTcLcLTSpinMutex(void *p);
   static void deleteArray_ROOTcLcLTSpinMutex(void *p);
   static void destruct_ROOTcLcLTSpinMutex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::TSpinMutex*)
   {
      ::ROOT::TSpinMutex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::TSpinMutex));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::TSpinMutex", "ROOT/TSpinMutex.hxx", 40,
                  typeid(::ROOT::TSpinMutex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLTSpinMutex_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::TSpinMutex) );
      instance.SetNew(&new_ROOTcLcLTSpinMutex);
      instance.SetNewArray(&newArray_ROOTcLcLTSpinMutex);
      instance.SetDelete(&delete_ROOTcLcLTSpinMutex);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLTSpinMutex);
      instance.SetDestructor(&destruct_ROOTcLcLTSpinMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::TSpinMutex*)
   {
      return GenerateInitInstanceLocal((::ROOT::TSpinMutex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::TSpinMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLTSpinMutex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::TSpinMutex*)0x0)->GetClass();
      ROOTcLcLTSpinMutex_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLTSpinMutex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TSemaphore(void *p = 0);
   static void *newArray_TSemaphore(Long_t size, void *p);
   static void delete_TSemaphore(void *p);
   static void deleteArray_TSemaphore(void *p);
   static void destruct_TSemaphore(void *p);
   static void streamer_TSemaphore(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSemaphore*)
   {
      ::TSemaphore *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSemaphore >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSemaphore", ::TSemaphore::Class_Version(), "TSemaphore.h", 29,
                  typeid(::TSemaphore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSemaphore::Dictionary, isa_proxy, 16,
                  sizeof(::TSemaphore) );
      instance.SetNew(&new_TSemaphore);
      instance.SetNewArray(&newArray_TSemaphore);
      instance.SetDelete(&delete_TSemaphore);
      instance.SetDeleteArray(&deleteArray_TSemaphore);
      instance.SetDestructor(&destruct_TSemaphore);
      instance.SetStreamerFunc(&streamer_TSemaphore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSemaphore*)
   {
      return GenerateInitInstanceLocal((::TSemaphore*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSemaphore*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TThread(void *p = 0);
   static void *newArray_TThread(Long_t size, void *p);
   static void delete_TThread(void *p);
   static void deleteArray_TThread(void *p);
   static void destruct_TThread(void *p);
   static void streamer_TThread(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TThread*)
   {
      ::TThread *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TThread >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TThread", ::TThread::Class_Version(), "TThread.h", 37,
                  typeid(::TThread), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TThread::Dictionary, isa_proxy, 16,
                  sizeof(::TThread) );
      instance.SetNew(&new_TThread);
      instance.SetNewArray(&newArray_TThread);
      instance.SetDelete(&delete_TThread);
      instance.SetDeleteArray(&deleteArray_TThread);
      instance.SetDestructor(&destruct_TThread);
      instance.SetStreamerFunc(&streamer_TThread);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TThread*)
   {
      return GenerateInitInstanceLocal((::TThread*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TThread*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TThreadFactory(void *p);
   static void deleteArray_TThreadFactory(void *p);
   static void destruct_TThreadFactory(void *p);
   static void streamer_TThreadFactory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TThreadFactory*)
   {
      ::TThreadFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TThreadFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TThreadFactory", ::TThreadFactory::Class_Version(), "TThreadFactory.h", 32,
                  typeid(::TThreadFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TThreadFactory::Dictionary, isa_proxy, 16,
                  sizeof(::TThreadFactory) );
      instance.SetDelete(&delete_TThreadFactory);
      instance.SetDeleteArray(&deleteArray_TThreadFactory);
      instance.SetDestructor(&destruct_TThreadFactory);
      instance.SetStreamerFunc(&streamer_TThreadFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TThreadFactory*)
   {
      return GenerateInitInstanceLocal((::TThreadFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TThreadFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TThreadImp(void *p);
   static void deleteArray_TThreadImp(void *p);
   static void destruct_TThreadImp(void *p);
   static void streamer_TThreadImp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TThreadImp*)
   {
      ::TThreadImp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TThreadImp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TThreadImp", ::TThreadImp::Class_Version(), "TThreadImp.h", 30,
                  typeid(::TThreadImp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TThreadImp::Dictionary, isa_proxy, 16,
                  sizeof(::TThreadImp) );
      instance.SetDelete(&delete_TThreadImp);
      instance.SetDeleteArray(&deleteArray_TThreadImp);
      instance.SetDestructor(&destruct_TThreadImp);
      instance.SetStreamerFunc(&streamer_TThreadImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TThreadImp*)
   {
      return GenerateInitInstanceLocal((::TThreadImp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TThreadImp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPosixCondition(void *p);
   static void deleteArray_TPosixCondition(void *p);
   static void destruct_TPosixCondition(void *p);
   static void streamer_TPosixCondition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPosixCondition*)
   {
      ::TPosixCondition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPosixCondition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPosixCondition", ::TPosixCondition::Class_Version(), "TPosixCondition.h", 37,
                  typeid(::TPosixCondition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPosixCondition::Dictionary, isa_proxy, 16,
                  sizeof(::TPosixCondition) );
      instance.SetDelete(&delete_TPosixCondition);
      instance.SetDeleteArray(&deleteArray_TPosixCondition);
      instance.SetDestructor(&destruct_TPosixCondition);
      instance.SetStreamerFunc(&streamer_TPosixCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPosixCondition*)
   {
      return GenerateInitInstanceLocal((::TPosixCondition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPosixCondition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPosixMutex(void *p = 0);
   static void *newArray_TPosixMutex(Long_t size, void *p);
   static void delete_TPosixMutex(void *p);
   static void deleteArray_TPosixMutex(void *p);
   static void destruct_TPosixMutex(void *p);
   static void streamer_TPosixMutex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPosixMutex*)
   {
      ::TPosixMutex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPosixMutex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPosixMutex", ::TPosixMutex::Class_Version(), "TPosixMutex.h", 32,
                  typeid(::TPosixMutex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPosixMutex::Dictionary, isa_proxy, 16,
                  sizeof(::TPosixMutex) );
      instance.SetNew(&new_TPosixMutex);
      instance.SetNewArray(&newArray_TPosixMutex);
      instance.SetDelete(&delete_TPosixMutex);
      instance.SetDeleteArray(&deleteArray_TPosixMutex);
      instance.SetDestructor(&destruct_TPosixMutex);
      instance.SetStreamerFunc(&streamer_TPosixMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPosixMutex*)
   {
      return GenerateInitInstanceLocal((::TPosixMutex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPosixMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPosixThread(void *p = 0);
   static void *newArray_TPosixThread(Long_t size, void *p);
   static void delete_TPosixThread(void *p);
   static void deleteArray_TPosixThread(void *p);
   static void destruct_TPosixThread(void *p);
   static void streamer_TPosixThread(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPosixThread*)
   {
      ::TPosixThread *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPosixThread >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPosixThread", ::TPosixThread::Class_Version(), "TPosixThread.h", 35,
                  typeid(::TPosixThread), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPosixThread::Dictionary, isa_proxy, 16,
                  sizeof(::TPosixThread) );
      instance.SetNew(&new_TPosixThread);
      instance.SetNewArray(&newArray_TPosixThread);
      instance.SetDelete(&delete_TPosixThread);
      instance.SetDeleteArray(&deleteArray_TPosixThread);
      instance.SetDestructor(&destruct_TPosixThread);
      instance.SetStreamerFunc(&streamer_TPosixThread);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPosixThread*)
   {
      return GenerateInitInstanceLocal((::TPosixThread*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPosixThread*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPosixThreadFactory(void *p = 0);
   static void *newArray_TPosixThreadFactory(Long_t size, void *p);
   static void delete_TPosixThreadFactory(void *p);
   static void deleteArray_TPosixThreadFactory(void *p);
   static void destruct_TPosixThreadFactory(void *p);
   static void streamer_TPosixThreadFactory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPosixThreadFactory*)
   {
      ::TPosixThreadFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPosixThreadFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPosixThreadFactory", ::TPosixThreadFactory::Class_Version(), "TPosixThreadFactory.h", 31,
                  typeid(::TPosixThreadFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPosixThreadFactory::Dictionary, isa_proxy, 16,
                  sizeof(::TPosixThreadFactory) );
      instance.SetNew(&new_TPosixThreadFactory);
      instance.SetNewArray(&newArray_TPosixThreadFactory);
      instance.SetDelete(&delete_TPosixThreadFactory);
      instance.SetDeleteArray(&deleteArray_TPosixThreadFactory);
      instance.SetDestructor(&destruct_TPosixThreadFactory);
      instance.SetStreamerFunc(&streamer_TPosixThreadFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPosixThreadFactory*)
   {
      return GenerateInitInstanceLocal((::TPosixThreadFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPosixThreadFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TConditionImp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TConditionImp::Class_Name()
{
   return "TConditionImp";
}

//______________________________________________________________________________
const char *TConditionImp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TConditionImp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TConditionImp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TConditionImp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TConditionImp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TConditionImp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TConditionImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TConditionImp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCondition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCondition::Class_Name()
{
   return "TCondition";
}

//______________________________________________________________________________
const char *TCondition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCondition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCondition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCondition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCondition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCondition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCondition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMutexImp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMutexImp::Class_Name()
{
   return "TMutexImp";
}

//______________________________________________________________________________
const char *TMutexImp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMutexImp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMutexImp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMutexImp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMutexImp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMutexImp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMutexImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMutexImp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMutex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMutex::Class_Name()
{
   return "TMutex";
}

//______________________________________________________________________________
const char *TMutex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMutex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMutex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMutex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMutex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMutex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMutex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMutex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRWLock::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRWLock::Class_Name()
{
   return "TRWLock";
}

//______________________________________________________________________________
const char *TRWLock::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRWLock*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRWLock::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRWLock*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRWLock::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRWLock*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRWLock::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRWLock*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSemaphore::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSemaphore::Class_Name()
{
   return "TSemaphore";
}

//______________________________________________________________________________
const char *TSemaphore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSemaphore*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSemaphore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSemaphore*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSemaphore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSemaphore*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSemaphore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSemaphore*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TThread::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TThread::Class_Name()
{
   return "TThread";
}

//______________________________________________________________________________
const char *TThread::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThread*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TThread::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThread*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TThread::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThread*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TThread::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThread*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TThreadFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TThreadFactory::Class_Name()
{
   return "TThreadFactory";
}

//______________________________________________________________________________
const char *TThreadFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThreadFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TThreadFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThreadFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TThreadFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThreadFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TThreadFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThreadFactory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TThreadImp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TThreadImp::Class_Name()
{
   return "TThreadImp";
}

//______________________________________________________________________________
const char *TThreadImp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThreadImp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TThreadImp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThreadImp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TThreadImp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThreadImp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TThreadImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThreadImp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPosixCondition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixCondition::Class_Name()
{
   return "TPosixCondition";
}

//______________________________________________________________________________
const char *TPosixCondition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixCondition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixCondition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixCondition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixCondition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixCondition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixCondition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPosixMutex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixMutex::Class_Name()
{
   return "TPosixMutex";
}

//______________________________________________________________________________
const char *TPosixMutex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixMutex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixMutex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixMutex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixMutex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixMutex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixMutex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixMutex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPosixThread::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixThread::Class_Name()
{
   return "TPosixThread";
}

//______________________________________________________________________________
const char *TPosixThread::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixThread*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixThread::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixThread*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixThread::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixThread*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixThread::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixThread*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPosixThreadFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixThreadFactory::Class_Name()
{
   return "TPosixThreadFactory";
}

//______________________________________________________________________________
const char *TPosixThreadFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixThreadFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixThreadFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixThreadFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixThreadFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixThreadFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixThreadFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixThreadFactory*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAtomicCount(void *p) {
      delete ((::TAtomicCount*)p);
   }
   static void deleteArray_TAtomicCount(void *p) {
      delete [] ((::TAtomicCount*)p);
   }
   static void destruct_TAtomicCount(void *p) {
      typedef ::TAtomicCount current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAtomicCount

//______________________________________________________________________________
void TConditionImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TConditionImp.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TConditionImp(void *p) {
      delete ((::TConditionImp*)p);
   }
   static void deleteArray_TConditionImp(void *p) {
      delete [] ((::TConditionImp*)p);
   }
   static void destruct_TConditionImp(void *p) {
      typedef ::TConditionImp current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TConditionImp(TBuffer &buf, void *obj) {
      ((::TConditionImp*)obj)->::TConditionImp::Streamer(buf);
   }
} // end of namespace ROOT for class ::TConditionImp

//______________________________________________________________________________
void TCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCondition.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCondition(void *p) {
      return  p ? new(p) ::TCondition : new ::TCondition;
   }
   static void *newArray_TCondition(Long_t nElements, void *p) {
      return p ? new(p) ::TCondition[nElements] : new ::TCondition[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCondition(void *p) {
      delete ((::TCondition*)p);
   }
   static void deleteArray_TCondition(void *p) {
      delete [] ((::TCondition*)p);
   }
   static void destruct_TCondition(void *p) {
      typedef ::TCondition current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCondition(TBuffer &buf, void *obj) {
      ((::TCondition*)obj)->::TCondition::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCondition

//______________________________________________________________________________
void TMutexImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMutexImp.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMutexImp(void *p) {
      delete ((::TMutexImp*)p);
   }
   static void deleteArray_TMutexImp(void *p) {
      delete [] ((::TMutexImp*)p);
   }
   static void destruct_TMutexImp(void *p) {
      typedef ::TMutexImp current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMutexImp(TBuffer &buf, void *obj) {
      ((::TMutexImp*)obj)->::TMutexImp::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMutexImp

//______________________________________________________________________________
void TMutex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMutex.

   TVirtualMutex::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMutex(void *p) {
      return  p ? new(p) ::TMutex : new ::TMutex;
   }
   static void *newArray_TMutex(Long_t nElements, void *p) {
      return p ? new(p) ::TMutex[nElements] : new ::TMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMutex(void *p) {
      delete ((::TMutex*)p);
   }
   static void deleteArray_TMutex(void *p) {
      delete [] ((::TMutex*)p);
   }
   static void destruct_TMutex(void *p) {
      typedef ::TMutex current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMutex(TBuffer &buf, void *obj) {
      ((::TMutex*)obj)->::TMutex::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMutex

//______________________________________________________________________________
void TRWLock::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRWLock.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRWLock(void *p) {
      return  p ? new(p) ::TRWLock : new ::TRWLock;
   }
   static void *newArray_TRWLock(Long_t nElements, void *p) {
      return p ? new(p) ::TRWLock[nElements] : new ::TRWLock[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRWLock(void *p) {
      delete ((::TRWLock*)p);
   }
   static void deleteArray_TRWLock(void *p) {
      delete [] ((::TRWLock*)p);
   }
   static void destruct_TRWLock(void *p) {
      typedef ::TRWLock current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRWLock(TBuffer &buf, void *obj) {
      ((::TRWLock*)obj)->::TRWLock::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRWLock

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLTSpinMutex(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::TSpinMutex : new ::ROOT::TSpinMutex;
   }
   static void *newArray_ROOTcLcLTSpinMutex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::TSpinMutex[nElements] : new ::ROOT::TSpinMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLTSpinMutex(void *p) {
      delete ((::ROOT::TSpinMutex*)p);
   }
   static void deleteArray_ROOTcLcLTSpinMutex(void *p) {
      delete [] ((::ROOT::TSpinMutex*)p);
   }
   static void destruct_ROOTcLcLTSpinMutex(void *p) {
      typedef ::ROOT::TSpinMutex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::TSpinMutex

//______________________________________________________________________________
void TSemaphore::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSemaphore.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSemaphore(void *p) {
      return  p ? new(p) ::TSemaphore : new ::TSemaphore;
   }
   static void *newArray_TSemaphore(Long_t nElements, void *p) {
      return p ? new(p) ::TSemaphore[nElements] : new ::TSemaphore[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSemaphore(void *p) {
      delete ((::TSemaphore*)p);
   }
   static void deleteArray_TSemaphore(void *p) {
      delete [] ((::TSemaphore*)p);
   }
   static void destruct_TSemaphore(void *p) {
      typedef ::TSemaphore current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSemaphore(TBuffer &buf, void *obj) {
      ((::TSemaphore*)obj)->::TSemaphore::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSemaphore

//______________________________________________________________________________
void TThread::Streamer(TBuffer &R__b)
{
   // Stream an object of class TThread.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TThread(void *p) {
      return  p ? new(p) ::TThread : new ::TThread;
   }
   static void *newArray_TThread(Long_t nElements, void *p) {
      return p ? new(p) ::TThread[nElements] : new ::TThread[nElements];
   }
   // Wrapper around operator delete
   static void delete_TThread(void *p) {
      delete ((::TThread*)p);
   }
   static void deleteArray_TThread(void *p) {
      delete [] ((::TThread*)p);
   }
   static void destruct_TThread(void *p) {
      typedef ::TThread current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TThread(TBuffer &buf, void *obj) {
      ((::TThread*)obj)->::TThread::Streamer(buf);
   }
} // end of namespace ROOT for class ::TThread

//______________________________________________________________________________
void TThreadFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TThreadFactory.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TThreadFactory(void *p) {
      delete ((::TThreadFactory*)p);
   }
   static void deleteArray_TThreadFactory(void *p) {
      delete [] ((::TThreadFactory*)p);
   }
   static void destruct_TThreadFactory(void *p) {
      typedef ::TThreadFactory current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TThreadFactory(TBuffer &buf, void *obj) {
      ((::TThreadFactory*)obj)->::TThreadFactory::Streamer(buf);
   }
} // end of namespace ROOT for class ::TThreadFactory

//______________________________________________________________________________
void TThreadImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TThreadImp.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TThreadImp(void *p) {
      delete ((::TThreadImp*)p);
   }
   static void deleteArray_TThreadImp(void *p) {
      delete [] ((::TThreadImp*)p);
   }
   static void destruct_TThreadImp(void *p) {
      typedef ::TThreadImp current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TThreadImp(TBuffer &buf, void *obj) {
      ((::TThreadImp*)obj)->::TThreadImp::Streamer(buf);
   }
} // end of namespace ROOT for class ::TThreadImp

//______________________________________________________________________________
void TPosixCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPosixCondition.

   TConditionImp::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPosixCondition(void *p) {
      delete ((::TPosixCondition*)p);
   }
   static void deleteArray_TPosixCondition(void *p) {
      delete [] ((::TPosixCondition*)p);
   }
   static void destruct_TPosixCondition(void *p) {
      typedef ::TPosixCondition current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPosixCondition(TBuffer &buf, void *obj) {
      ((::TPosixCondition*)obj)->::TPosixCondition::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPosixCondition

//______________________________________________________________________________
void TPosixMutex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPosixMutex.

   TMutexImp::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPosixMutex(void *p) {
      return  p ? new(p) ::TPosixMutex : new ::TPosixMutex;
   }
   static void *newArray_TPosixMutex(Long_t nElements, void *p) {
      return p ? new(p) ::TPosixMutex[nElements] : new ::TPosixMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPosixMutex(void *p) {
      delete ((::TPosixMutex*)p);
   }
   static void deleteArray_TPosixMutex(void *p) {
      delete [] ((::TPosixMutex*)p);
   }
   static void destruct_TPosixMutex(void *p) {
      typedef ::TPosixMutex current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPosixMutex(TBuffer &buf, void *obj) {
      ((::TPosixMutex*)obj)->::TPosixMutex::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPosixMutex

//______________________________________________________________________________
void TPosixThread::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPosixThread.

   TThreadImp::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPosixThread(void *p) {
      return  p ? new(p) ::TPosixThread : new ::TPosixThread;
   }
   static void *newArray_TPosixThread(Long_t nElements, void *p) {
      return p ? new(p) ::TPosixThread[nElements] : new ::TPosixThread[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPosixThread(void *p) {
      delete ((::TPosixThread*)p);
   }
   static void deleteArray_TPosixThread(void *p) {
      delete [] ((::TPosixThread*)p);
   }
   static void destruct_TPosixThread(void *p) {
      typedef ::TPosixThread current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPosixThread(TBuffer &buf, void *obj) {
      ((::TPosixThread*)obj)->::TPosixThread::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPosixThread

//______________________________________________________________________________
void TPosixThreadFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPosixThreadFactory.

   TThreadFactory::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPosixThreadFactory(void *p) {
      return  p ? new(p) ::TPosixThreadFactory : new ::TPosixThreadFactory;
   }
   static void *newArray_TPosixThreadFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TPosixThreadFactory[nElements] : new ::TPosixThreadFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPosixThreadFactory(void *p) {
      delete ((::TPosixThreadFactory*)p);
   }
   static void deleteArray_TPosixThreadFactory(void *p) {
      delete [] ((::TPosixThreadFactory*)p);
   }
   static void destruct_TPosixThreadFactory(void *p) {
      typedef ::TPosixThreadFactory current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPosixThreadFactory(TBuffer &buf, void *obj) {
      ((::TPosixThreadFactory*)obj)->::TPosixThreadFactory::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPosixThreadFactory

namespace {
  void TriggerDictionaryInitialization_libThread_Impl() {
    static const char* headers[] = {
"TAtomicCount.h",
"TCondition.h",
"TConditionImp.h",
"TMutex.h",
"TMutexImp.h",
"TRWLock.h",
"ROOT/TRWSpinLock.hxx",
"TSemaphore.h",
"TThread.h",
"TThreadFactory.h",
"TThreadImp.h",
"ROOT/TThreadedObject.hxx",
"TThreadPool.h",
"ThreadLocalStorage.h",
"ROOT/TSpinMutex.hxx",
"TPosixCondition.h",
"TPosixMutex.h",
"TPosixThread.h",
"TPosixThreadFactory.h",
"PosixThreadInc.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libThread dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TAtomicCount.h"
#include "TCondition.h"
#include "TConditionImp.h"
#include "TMutex.h"
#include "TMutexImp.h"
#include "TRWLock.h"
#include "ROOT/TRWSpinLock.hxx"
#include "TSemaphore.h"
#include "TThread.h"
#include "TThreadFactory.h"
#include "TThreadImp.h"
#include "ROOT/TThreadedObject.hxx"
#include "TThreadPool.h"
#include "ThreadLocalStorage.h"
#include "ROOT/TSpinMutex.hxx"
#include "TPosixCondition.h"
#include "TPosixMutex.h"
#include "TPosixThread.h"
#include "TPosixThreadFactory.h"
#include "PosixThreadInc.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ROOT::TSpinMutex", payloadCode, "@",
"TAtomicCount", payloadCode, "@",
"TCondition", payloadCode, "@",
"TConditionImp", payloadCode, "@",
"TMutex", payloadCode, "@",
"TMutexImp", payloadCode, "@",
"TPosixCondition", payloadCode, "@",
"TPosixMutex", payloadCode, "@",
"TPosixThread", payloadCode, "@",
"TPosixThreadFactory", payloadCode, "@",
"TRWLock", payloadCode, "@",
"TSemaphore", payloadCode, "@",
"TThread", payloadCode, "@",
"TThreadFactory", payloadCode, "@",
"TThreadImp", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libThread",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libThread_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libThread_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libThread() {
  TriggerDictionaryInitialization_libThread_Impl();
}
