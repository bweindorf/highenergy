// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Proof

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
#include "TCondor.h"
#include "TDSet.h"
#include "TDSetProxy.h"
#include "TDataSetManager.h"
#include "TDataSetManagerFile.h"
#include "TLockPath.h"
#include "TPackMgr.h"
#include "TProof.h"
#include "TProofChain.h"
#include "TProofCondor.h"
#include "TProofDebug.h"
#include "TProofLite.h"
#include "TProofLog.h"
#include "TProofMgr.h"
#include "TProofMgrLite.h"
#include "TProofNodeInfo.h"
#include "TProofOutputFile.h"
#include "TProofOutputList.h"
#include "TProofProgressStatus.h"
#include "TProofQueryResult.h"
#include "TProofResources.h"
#include "TProofResourcesStatic.h"
#include "TProofServ.h"
#include "TProofServLite.h"
#include "TProofSuperMaster.h"
#include "TQueryResultManager.h"
#include "TSelVerifyDataSet.h"
#include "TSlave.h"
#include "TSlaveLite.h"
#include "TVirtualProofPlayer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *pairlETDSetElementmUcOTStringgR_Dictionary();
   static void pairlETDSetElementmUcOTStringgR_TClassManip(TClass*);
   static void *new_pairlETDSetElementmUcOTStringgR(void *p = 0);
   static void *newArray_pairlETDSetElementmUcOTStringgR(Long_t size, void *p);
   static void delete_pairlETDSetElementmUcOTStringgR(void *p);
   static void deleteArray_pairlETDSetElementmUcOTStringgR(void *p);
   static void destruct_pairlETDSetElementmUcOTStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<TDSetElement*,TString>*)
   {
      pair<TDSetElement*,TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<TDSetElement*,TString>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<TDSetElement*,TString>", "string", 198,
                  typeid(pair<TDSetElement*,TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlETDSetElementmUcOTStringgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<TDSetElement*,TString>) );
      instance.SetNew(&new_pairlETDSetElementmUcOTStringgR);
      instance.SetNewArray(&newArray_pairlETDSetElementmUcOTStringgR);
      instance.SetDelete(&delete_pairlETDSetElementmUcOTStringgR);
      instance.SetDeleteArray(&deleteArray_pairlETDSetElementmUcOTStringgR);
      instance.SetDestructor(&destruct_pairlETDSetElementmUcOTStringgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<TDSetElement*,TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlETDSetElementmUcOTStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<TDSetElement*,TString>*)0x0)->GetClass();
      pairlETDSetElementmUcOTStringgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlETDSetElementmUcOTStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TCondorSlave(void *p = 0);
   static void *newArray_TCondorSlave(Long_t size, void *p);
   static void delete_TCondorSlave(void *p);
   static void deleteArray_TCondorSlave(void *p);
   static void destruct_TCondorSlave(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCondorSlave*)
   {
      ::TCondorSlave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCondorSlave >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCondorSlave", ::TCondorSlave::Class_Version(), "TCondor.h", 34,
                  typeid(::TCondorSlave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCondorSlave::Dictionary, isa_proxy, 4,
                  sizeof(::TCondorSlave) );
      instance.SetNew(&new_TCondorSlave);
      instance.SetNewArray(&newArray_TCondorSlave);
      instance.SetDelete(&delete_TCondorSlave);
      instance.SetDeleteArray(&deleteArray_TCondorSlave);
      instance.SetDestructor(&destruct_TCondorSlave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCondorSlave*)
   {
      return GenerateInitInstanceLocal((::TCondorSlave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCondorSlave*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCondor(void *p = 0);
   static void *newArray_TCondor(Long_t size, void *p);
   static void delete_TCondor(void *p);
   static void deleteArray_TCondor(void *p);
   static void destruct_TCondor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCondor*)
   {
      ::TCondor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCondor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCondor", ::TCondor::Class_Version(), "TCondor.h", 52,
                  typeid(::TCondor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCondor::Dictionary, isa_proxy, 4,
                  sizeof(::TCondor) );
      instance.SetNew(&new_TCondor);
      instance.SetNewArray(&newArray_TCondor);
      instance.SetDelete(&delete_TCondor);
      instance.SetDeleteArray(&deleteArray_TCondor);
      instance.SetDestructor(&destruct_TCondor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCondor*)
   {
      return GenerateInitInstanceLocal((::TCondor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCondor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDSetElement(void *p = 0);
   static void *newArray_TDSetElement(Long_t size, void *p);
   static void delete_TDSetElement(void *p);
   static void deleteArray_TDSetElement(void *p);
   static void destruct_TDSetElement(void *p);
   static void streamer_TDSetElement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDSetElement*)
   {
      ::TDSetElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDSetElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDSetElement", ::TDSetElement::Class_Version(), "TDSet.h", 66,
                  typeid(::TDSetElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDSetElement::Dictionary, isa_proxy, 17,
                  sizeof(::TDSetElement) );
      instance.SetNew(&new_TDSetElement);
      instance.SetNewArray(&newArray_TDSetElement);
      instance.SetDelete(&delete_TDSetElement);
      instance.SetDeleteArray(&deleteArray_TDSetElement);
      instance.SetDestructor(&destruct_TDSetElement);
      instance.SetStreamerFunc(&streamer_TDSetElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDSetElement*)
   {
      return GenerateInitInstanceLocal((::TDSetElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDSetElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDSet(void *p = 0);
   static void *newArray_TDSet(Long_t size, void *p);
   static void delete_TDSet(void *p);
   static void deleteArray_TDSet(void *p);
   static void destruct_TDSet(void *p);
   static void streamer_TDSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDSet*)
   {
      ::TDSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDSet", ::TDSet::Class_Version(), "TDSet.h", 151,
                  typeid(::TDSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDSet::Dictionary, isa_proxy, 17,
                  sizeof(::TDSet) );
      instance.SetNew(&new_TDSet);
      instance.SetNewArray(&newArray_TDSet);
      instance.SetDelete(&delete_TDSet);
      instance.SetDeleteArray(&deleteArray_TDSet);
      instance.SetDestructor(&destruct_TDSet);
      instance.SetStreamerFunc(&streamer_TDSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDSet*)
   {
      return GenerateInitInstanceLocal((::TDSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDSetProxy(void *p = 0);
   static void *newArray_TDSetProxy(Long_t size, void *p);
   static void delete_TDSetProxy(void *p);
   static void deleteArray_TDSetProxy(void *p);
   static void destruct_TDSetProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDSetProxy*)
   {
      ::TDSetProxy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDSetProxy >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDSetProxy", ::TDSetProxy::Class_Version(), "TDSetProxy.h", 29,
                  typeid(::TDSetProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDSetProxy::Dictionary, isa_proxy, 4,
                  sizeof(::TDSetProxy) );
      instance.SetNew(&new_TDSetProxy);
      instance.SetNewArray(&newArray_TDSetProxy);
      instance.SetDelete(&delete_TDSetProxy);
      instance.SetDeleteArray(&deleteArray_TDSetProxy);
      instance.SetDestructor(&destruct_TDSetProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDSetProxy*)
   {
      return GenerateInitInstanceLocal((::TDSetProxy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDSetProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDataSetManager(void *p = 0);
   static void *newArray_TDataSetManager(Long_t size, void *p);
   static void delete_TDataSetManager(void *p);
   static void deleteArray_TDataSetManager(void *p);
   static void destruct_TDataSetManager(void *p);
   static void streamer_TDataSetManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDataSetManager*)
   {
      ::TDataSetManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDataSetManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDataSetManager", ::TDataSetManager::Class_Version(), "TDataSetManager.h", 38,
                  typeid(::TDataSetManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDataSetManager::Dictionary, isa_proxy, 16,
                  sizeof(::TDataSetManager) );
      instance.SetNew(&new_TDataSetManager);
      instance.SetNewArray(&newArray_TDataSetManager);
      instance.SetDelete(&delete_TDataSetManager);
      instance.SetDeleteArray(&deleteArray_TDataSetManager);
      instance.SetDestructor(&destruct_TDataSetManager);
      instance.SetStreamerFunc(&streamer_TDataSetManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDataSetManager*)
   {
      return GenerateInitInstanceLocal((::TDataSetManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDataSetManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDataSetManagerFile(void *p = 0);
   static void *newArray_TDataSetManagerFile(Long_t size, void *p);
   static void delete_TDataSetManagerFile(void *p);
   static void deleteArray_TDataSetManagerFile(void *p);
   static void destruct_TDataSetManagerFile(void *p);
   static void streamer_TDataSetManagerFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDataSetManagerFile*)
   {
      ::TDataSetManagerFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDataSetManagerFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDataSetManagerFile", ::TDataSetManagerFile::Class_Version(), "TDataSetManagerFile.h", 30,
                  typeid(::TDataSetManagerFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDataSetManagerFile::Dictionary, isa_proxy, 16,
                  sizeof(::TDataSetManagerFile) );
      instance.SetNew(&new_TDataSetManagerFile);
      instance.SetNewArray(&newArray_TDataSetManagerFile);
      instance.SetDelete(&delete_TDataSetManagerFile);
      instance.SetDeleteArray(&deleteArray_TDataSetManagerFile);
      instance.SetDestructor(&destruct_TDataSetManagerFile);
      instance.SetStreamerFunc(&streamer_TDataSetManagerFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDataSetManagerFile*)
   {
      return GenerateInitInstanceLocal((::TDataSetManagerFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDataSetManagerFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLockPath(void *p = 0);
   static void *newArray_TLockPath(Long_t size, void *p);
   static void delete_TLockPath(void *p);
   static void deleteArray_TLockPath(void *p);
   static void destruct_TLockPath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLockPath*)
   {
      ::TLockPath *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLockPath >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLockPath", ::TLockPath::Class_Version(), "TLockPath.h", 26,
                  typeid(::TLockPath), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLockPath::Dictionary, isa_proxy, 4,
                  sizeof(::TLockPath) );
      instance.SetNew(&new_TLockPath);
      instance.SetNewArray(&newArray_TLockPath);
      instance.SetDelete(&delete_TLockPath);
      instance.SetDeleteArray(&deleteArray_TLockPath);
      instance.SetDestructor(&destruct_TLockPath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLockPath*)
   {
      return GenerateInitInstanceLocal((::TLockPath*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLockPath*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPackMgr(void *p);
   static void deleteArray_TPackMgr(void *p);
   static void destruct_TPackMgr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPackMgr*)
   {
      ::TPackMgr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPackMgr >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPackMgr", ::TPackMgr::Class_Version(), "TPackMgr.h", 37,
                  typeid(::TPackMgr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPackMgr::Dictionary, isa_proxy, 4,
                  sizeof(::TPackMgr) );
      instance.SetDelete(&delete_TPackMgr);
      instance.SetDeleteArray(&deleteArray_TPackMgr);
      instance.SetDestructor(&destruct_TPackMgr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPackMgr*)
   {
      return GenerateInitInstanceLocal((::TPackMgr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPackMgr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofMgr(void *p);
   static void deleteArray_TProofMgr(void *p);
   static void destruct_TProofMgr(void *p);
   static void streamer_TProofMgr(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofMgr*)
   {
      ::TProofMgr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofMgr >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofMgr", ::TProofMgr::Class_Version(), "TProofMgr.h", 43,
                  typeid(::TProofMgr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofMgr::Dictionary, isa_proxy, 16,
                  sizeof(::TProofMgr) );
      instance.SetDelete(&delete_TProofMgr);
      instance.SetDeleteArray(&deleteArray_TProofMgr);
      instance.SetDestructor(&destruct_TProofMgr);
      instance.SetStreamerFunc(&streamer_TProofMgr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofMgr*)
   {
      return GenerateInitInstanceLocal((::TProofMgr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofMgr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDesc(void *p = 0);
   static void *newArray_TProofDesc(Long_t size, void *p);
   static void delete_TProofDesc(void *p);
   static void deleteArray_TProofDesc(void *p);
   static void destruct_TProofDesc(void *p);
   static void streamer_TProofDesc(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDesc*)
   {
      ::TProofDesc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDesc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDesc", ::TProofDesc::Class_Version(), "TProofMgr.h", 142,
                  typeid(::TProofDesc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDesc::Dictionary, isa_proxy, 16,
                  sizeof(::TProofDesc) );
      instance.SetNew(&new_TProofDesc);
      instance.SetNewArray(&newArray_TProofDesc);
      instance.SetDelete(&delete_TProofDesc);
      instance.SetDeleteArray(&deleteArray_TProofDesc);
      instance.SetDestructor(&destruct_TProofDesc);
      instance.SetStreamerFunc(&streamer_TProofDesc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDesc*)
   {
      return GenerateInitInstanceLocal((::TProofDesc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDesc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TProofDebug_Dictionary();
   static void TProofDebug_TClassManip(TClass*);
   static void *new_TProofDebug(void *p = 0);
   static void *newArray_TProofDebug(Long_t size, void *p);
   static void delete_TProofDebug(void *p);
   static void deleteArray_TProofDebug(void *p);
   static void destruct_TProofDebug(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDebug*)
   {
      ::TProofDebug *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TProofDebug));
      static ::ROOT::TGenericClassInfo 
         instance("TProofDebug", "TProofDebug.h", 28,
                  typeid(::TProofDebug), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TProofDebug_Dictionary, isa_proxy, 0,
                  sizeof(::TProofDebug) );
      instance.SetNew(&new_TProofDebug);
      instance.SetNewArray(&newArray_TProofDebug);
      instance.SetDelete(&delete_TProofDebug);
      instance.SetDeleteArray(&deleteArray_TProofDebug);
      instance.SetDestructor(&destruct_TProofDebug);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDebug*)
   {
      return GenerateInitInstanceLocal((::TProofDebug*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDebug*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TProofDebug_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TProofDebug*)0x0)->GetClass();
      TProofDebug_TClassManip(theClass);
   return theClass;
   }

   static void TProofDebug_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofOutputList(void *p = 0);
   static void *newArray_TProofOutputList(Long_t size, void *p);
   static void delete_TProofOutputList(void *p);
   static void deleteArray_TProofOutputList(void *p);
   static void destruct_TProofOutputList(void *p);
   static Long64_t merge_TProofOutputList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofOutputList*)
   {
      ::TProofOutputList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofOutputList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofOutputList", ::TProofOutputList::Class_Version(), "TProofOutputList.h", 26,
                  typeid(::TProofOutputList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofOutputList::Dictionary, isa_proxy, 4,
                  sizeof(::TProofOutputList) );
      instance.SetNew(&new_TProofOutputList);
      instance.SetNewArray(&newArray_TProofOutputList);
      instance.SetDelete(&delete_TProofOutputList);
      instance.SetDeleteArray(&deleteArray_TProofOutputList);
      instance.SetDestructor(&destruct_TProofOutputList);
      instance.SetMerge(&merge_TProofOutputList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofOutputList*)
   {
      return GenerateInitInstanceLocal((::TProofOutputList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofOutputList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofProgressInfo(void *p = 0);
   static void *newArray_TProofProgressInfo(Long_t size, void *p);
   static void delete_TProofProgressInfo(void *p);
   static void deleteArray_TProofProgressInfo(void *p);
   static void destruct_TProofProgressInfo(void *p);
   static void streamer_TProofProgressInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofProgressInfo*)
   {
      ::TProofProgressInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofProgressInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofProgressInfo", ::TProofProgressInfo::Class_Version(), "TProof.h", 165,
                  typeid(::TProofProgressInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofProgressInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TProofProgressInfo) );
      instance.SetNew(&new_TProofProgressInfo);
      instance.SetNewArray(&newArray_TProofProgressInfo);
      instance.SetDelete(&delete_TProofProgressInfo);
      instance.SetDeleteArray(&deleteArray_TProofProgressInfo);
      instance.SetDestructor(&destruct_TProofProgressInfo);
      instance.SetStreamerFunc(&streamer_TProofProgressInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofProgressInfo*)
   {
      return GenerateInitInstanceLocal((::TProofProgressInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofProgressInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSlaveInfo(void *p = 0);
   static void *newArray_TSlaveInfo(Long_t size, void *p);
   static void delete_TSlaveInfo(void *p);
   static void deleteArray_TSlaveInfo(void *p);
   static void destruct_TSlaveInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSlaveInfo*)
   {
      ::TSlaveInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSlaveInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSlaveInfo", ::TSlaveInfo::Class_Version(), "TProof.h", 216,
                  typeid(::TSlaveInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSlaveInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TSlaveInfo) );
      instance.SetNew(&new_TSlaveInfo);
      instance.SetNewArray(&newArray_TSlaveInfo);
      instance.SetDelete(&delete_TSlaveInfo);
      instance.SetDeleteArray(&deleteArray_TSlaveInfo);
      instance.SetDestructor(&destruct_TSlaveInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSlaveInfo*)
   {
      return GenerateInitInstanceLocal((::TSlaveInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSlaveInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMergerInfo(void *p);
   static void deleteArray_TMergerInfo(void *p);
   static void destruct_TMergerInfo(void *p);
   static void streamer_TMergerInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMergerInfo*)
   {
      ::TMergerInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMergerInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMergerInfo", ::TMergerInfo::Class_Version(), "TProof.h", 251,
                  typeid(::TMergerInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMergerInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TMergerInfo) );
      instance.SetDelete(&delete_TMergerInfo);
      instance.SetDeleteArray(&deleteArray_TMergerInfo);
      instance.SetDestructor(&destruct_TMergerInfo);
      instance.SetStreamerFunc(&streamer_TMergerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMergerInfo*)
   {
      return GenerateInitInstanceLocal((::TMergerInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMergerInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProof(void *p);
   static void deleteArray_TProof(void *p);
   static void destruct_TProof(void *p);
   static void streamer_TProof(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProof*)
   {
      ::TProof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProof", ::TProof::Class_Version(), "TProof.h", 320,
                  typeid(::TProof), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProof::Dictionary, isa_proxy, 16,
                  sizeof(::TProof) );
      instance.SetDelete(&delete_TProof);
      instance.SetDeleteArray(&deleteArray_TProof);
      instance.SetDestructor(&destruct_TProof);
      instance.SetStreamerFunc(&streamer_TProof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProof*)
   {
      return GenerateInitInstanceLocal((::TProof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProof*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofChain(void *p = 0);
   static void *newArray_TProofChain(Long_t size, void *p);
   static void delete_TProofChain(void *p);
   static void deleteArray_TProofChain(void *p);
   static void destruct_TProofChain(void *p);
   static void directoryAutoAdd_TProofChain(void *obj, TDirectory *dir);
   static Long64_t merge_TProofChain(void *obj, TCollection *coll,TFileMergeInfo *info);
   static void reset_TProofChain(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofChain*)
   {
      ::TProofChain *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofChain >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofChain", ::TProofChain::Class_Version(), "TProofChain.h", 31,
                  typeid(::TProofChain), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofChain::Dictionary, isa_proxy, 4,
                  sizeof(::TProofChain) );
      instance.SetNew(&new_TProofChain);
      instance.SetNewArray(&newArray_TProofChain);
      instance.SetDelete(&delete_TProofChain);
      instance.SetDeleteArray(&deleteArray_TProofChain);
      instance.SetDestructor(&destruct_TProofChain);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TProofChain);
      instance.SetMerge(&merge_TProofChain);
      instance.SetResetAfterMerge(&reset_TProofChain);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofChain*)
   {
      return GenerateInitInstanceLocal((::TProofChain*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofChain*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofCondor(void *p);
   static void deleteArray_TProofCondor(void *p);
   static void destruct_TProofCondor(void *p);
   static void streamer_TProofCondor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofCondor*)
   {
      ::TProofCondor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofCondor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofCondor", ::TProofCondor::Class_Version(), "TProofCondor.h", 33,
                  typeid(::TProofCondor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofCondor::Dictionary, isa_proxy, 16,
                  sizeof(::TProofCondor) );
      instance.SetDelete(&delete_TProofCondor);
      instance.SetDeleteArray(&deleteArray_TProofCondor);
      instance.SetDestructor(&destruct_TProofCondor);
      instance.SetStreamerFunc(&streamer_TProofCondor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofCondor*)
   {
      return GenerateInitInstanceLocal((::TProofCondor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofCondor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofLite(void *p);
   static void deleteArray_TProofLite(void *p);
   static void destruct_TProofLite(void *p);
   static void streamer_TProofLite(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofLite*)
   {
      ::TProofLite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofLite >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofLite", ::TProofLite::Class_Version(), "TProofLite.h", 40,
                  typeid(::TProofLite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofLite::Dictionary, isa_proxy, 16,
                  sizeof(::TProofLite) );
      instance.SetDelete(&delete_TProofLite);
      instance.SetDeleteArray(&deleteArray_TProofLite);
      instance.SetDestructor(&destruct_TProofLite);
      instance.SetStreamerFunc(&streamer_TProofLite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofLite*)
   {
      return GenerateInitInstanceLocal((::TProofLite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofLite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofLog(void *p);
   static void deleteArray_TProofLog(void *p);
   static void destruct_TProofLog(void *p);
   static void streamer_TProofLog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofLog*)
   {
      ::TProofLog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofLog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofLog", ::TProofLog::Class_Version(), "TProofLog.h", 32,
                  typeid(::TProofLog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofLog::Dictionary, isa_proxy, 16,
                  sizeof(::TProofLog) );
      instance.SetDelete(&delete_TProofLog);
      instance.SetDeleteArray(&deleteArray_TProofLog);
      instance.SetDestructor(&destruct_TProofLog);
      instance.SetStreamerFunc(&streamer_TProofLog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofLog*)
   {
      return GenerateInitInstanceLocal((::TProofLog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofLog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofLogElem(void *p);
   static void deleteArray_TProofLogElem(void *p);
   static void destruct_TProofLogElem(void *p);
   static void streamer_TProofLogElem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofLogElem*)
   {
      ::TProofLogElem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofLogElem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofLogElem", ::TProofLogElem::Class_Version(), "TProofLog.h", 79,
                  typeid(::TProofLogElem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofLogElem::Dictionary, isa_proxy, 16,
                  sizeof(::TProofLogElem) );
      instance.SetDelete(&delete_TProofLogElem);
      instance.SetDeleteArray(&deleteArray_TProofLogElem);
      instance.SetDestructor(&destruct_TProofLogElem);
      instance.SetStreamerFunc(&streamer_TProofLogElem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofLogElem*)
   {
      return GenerateInitInstanceLocal((::TProofLogElem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofLogElem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofMgrLite(void *p);
   static void deleteArray_TProofMgrLite(void *p);
   static void destruct_TProofMgrLite(void *p);
   static void streamer_TProofMgrLite(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofMgrLite*)
   {
      ::TProofMgrLite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofMgrLite >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofMgrLite", ::TProofMgrLite::Class_Version(), "TProofMgrLite.h", 27,
                  typeid(::TProofMgrLite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofMgrLite::Dictionary, isa_proxy, 16,
                  sizeof(::TProofMgrLite) );
      instance.SetDelete(&delete_TProofMgrLite);
      instance.SetDeleteArray(&deleteArray_TProofMgrLite);
      instance.SetDestructor(&destruct_TProofMgrLite);
      instance.SetStreamerFunc(&streamer_TProofMgrLite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofMgrLite*)
   {
      return GenerateInitInstanceLocal((::TProofMgrLite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofMgrLite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofNodeInfo(void *p = 0);
   static void *newArray_TProofNodeInfo(Long_t size, void *p);
   static void delete_TProofNodeInfo(void *p);
   static void deleteArray_TProofNodeInfo(void *p);
   static void destruct_TProofNodeInfo(void *p);
   static void streamer_TProofNodeInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofNodeInfo*)
   {
      ::TProofNodeInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofNodeInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofNodeInfo", ::TProofNodeInfo::Class_Version(), "TProofNodeInfo.h", 32,
                  typeid(::TProofNodeInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofNodeInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TProofNodeInfo) );
      instance.SetNew(&new_TProofNodeInfo);
      instance.SetNewArray(&newArray_TProofNodeInfo);
      instance.SetDelete(&delete_TProofNodeInfo);
      instance.SetDeleteArray(&deleteArray_TProofNodeInfo);
      instance.SetDestructor(&destruct_TProofNodeInfo);
      instance.SetStreamerFunc(&streamer_TProofNodeInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofNodeInfo*)
   {
      return GenerateInitInstanceLocal((::TProofNodeInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofNodeInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofOutputFile(void *p = 0);
   static void *newArray_TProofOutputFile(Long_t size, void *p);
   static void delete_TProofOutputFile(void *p);
   static void deleteArray_TProofOutputFile(void *p);
   static void destruct_TProofOutputFile(void *p);
   static Long64_t merge_TProofOutputFile(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofOutputFile*)
   {
      ::TProofOutputFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofOutputFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofOutputFile", ::TProofOutputFile::Class_Version(), "TProofOutputFile.h", 33,
                  typeid(::TProofOutputFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofOutputFile::Dictionary, isa_proxy, 4,
                  sizeof(::TProofOutputFile) );
      instance.SetNew(&new_TProofOutputFile);
      instance.SetNewArray(&newArray_TProofOutputFile);
      instance.SetDelete(&delete_TProofOutputFile);
      instance.SetDeleteArray(&deleteArray_TProofOutputFile);
      instance.SetDestructor(&destruct_TProofOutputFile);
      instance.SetMerge(&merge_TProofOutputFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofOutputFile*)
   {
      return GenerateInitInstanceLocal((::TProofOutputFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofOutputFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofProgressStatus(void *p = 0);
   static void *newArray_TProofProgressStatus(Long_t size, void *p);
   static void delete_TProofProgressStatus(void *p);
   static void deleteArray_TProofProgressStatus(void *p);
   static void destruct_TProofProgressStatus(void *p);
   static void streamer_TProofProgressStatus(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofProgressStatus*)
   {
      ::TProofProgressStatus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofProgressStatus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofProgressStatus", ::TProofProgressStatus::Class_Version(), "TProofProgressStatus.h", 25,
                  typeid(::TProofProgressStatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofProgressStatus::Dictionary, isa_proxy, 16,
                  sizeof(::TProofProgressStatus) );
      instance.SetNew(&new_TProofProgressStatus);
      instance.SetNewArray(&newArray_TProofProgressStatus);
      instance.SetDelete(&delete_TProofProgressStatus);
      instance.SetDeleteArray(&deleteArray_TProofProgressStatus);
      instance.SetDestructor(&destruct_TProofProgressStatus);
      instance.SetStreamerFunc(&streamer_TProofProgressStatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofProgressStatus*)
   {
      return GenerateInitInstanceLocal((::TProofProgressStatus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofProgressStatus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofQueryResult(void *p = 0);
   static void *newArray_TProofQueryResult(Long_t size, void *p);
   static void delete_TProofQueryResult(void *p);
   static void deleteArray_TProofQueryResult(void *p);
   static void destruct_TProofQueryResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofQueryResult*)
   {
      ::TProofQueryResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofQueryResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofQueryResult", ::TProofQueryResult::Class_Version(), "TProofQueryResult.h", 28,
                  typeid(::TProofQueryResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofQueryResult::Dictionary, isa_proxy, 4,
                  sizeof(::TProofQueryResult) );
      instance.SetNew(&new_TProofQueryResult);
      instance.SetNewArray(&newArray_TProofQueryResult);
      instance.SetDelete(&delete_TProofQueryResult);
      instance.SetDeleteArray(&deleteArray_TProofQueryResult);
      instance.SetDestructor(&destruct_TProofQueryResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofQueryResult*)
   {
      return GenerateInitInstanceLocal((::TProofQueryResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofQueryResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofResources(void *p);
   static void deleteArray_TProofResources(void *p);
   static void destruct_TProofResources(void *p);
   static void streamer_TProofResources(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofResources*)
   {
      ::TProofResources *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofResources >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofResources", ::TProofResources::Class_Version(), "TProofResources.h", 34,
                  typeid(::TProofResources), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofResources::Dictionary, isa_proxy, 16,
                  sizeof(::TProofResources) );
      instance.SetDelete(&delete_TProofResources);
      instance.SetDeleteArray(&deleteArray_TProofResources);
      instance.SetDestructor(&destruct_TProofResources);
      instance.SetStreamerFunc(&streamer_TProofResources);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofResources*)
   {
      return GenerateInitInstanceLocal((::TProofResources*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofResources*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofResourcesStatic(void *p = 0);
   static void *newArray_TProofResourcesStatic(Long_t size, void *p);
   static void delete_TProofResourcesStatic(void *p);
   static void deleteArray_TProofResourcesStatic(void *p);
   static void destruct_TProofResourcesStatic(void *p);
   static void streamer_TProofResourcesStatic(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofResourcesStatic*)
   {
      ::TProofResourcesStatic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofResourcesStatic >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofResourcesStatic", ::TProofResourcesStatic::Class_Version(), "TProofResourcesStatic.h", 37,
                  typeid(::TProofResourcesStatic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofResourcesStatic::Dictionary, isa_proxy, 16,
                  sizeof(::TProofResourcesStatic) );
      instance.SetNew(&new_TProofResourcesStatic);
      instance.SetNewArray(&newArray_TProofResourcesStatic);
      instance.SetDelete(&delete_TProofResourcesStatic);
      instance.SetDeleteArray(&deleteArray_TProofResourcesStatic);
      instance.SetDestructor(&destruct_TProofResourcesStatic);
      instance.SetStreamerFunc(&streamer_TProofResourcesStatic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofResourcesStatic*)
   {
      return GenerateInitInstanceLocal((::TProofResourcesStatic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofResourcesStatic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofServ(void *p);
   static void deleteArray_TProofServ(void *p);
   static void destruct_TProofServ(void *p);
   static void streamer_TProofServ(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofServ*)
   {
      ::TProofServ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofServ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofServ", ::TProofServ::Class_Version(), "TProofServ.h", 66,
                  typeid(::TProofServ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofServ::Dictionary, isa_proxy, 16,
                  sizeof(::TProofServ) );
      instance.SetDelete(&delete_TProofServ);
      instance.SetDeleteArray(&deleteArray_TProofServ);
      instance.SetDestructor(&destruct_TProofServ);
      instance.SetStreamerFunc(&streamer_TProofServ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofServ*)
   {
      return GenerateInitInstanceLocal((::TProofServ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofServ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofServLite(void *p);
   static void deleteArray_TProofServLite(void *p);
   static void destruct_TProofServLite(void *p);
   static void streamer_TProofServLite(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofServLite*)
   {
      ::TProofServLite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofServLite >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofServLite", ::TProofServLite::Class_Version(), "TProofServLite.h", 30,
                  typeid(::TProofServLite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofServLite::Dictionary, isa_proxy, 16,
                  sizeof(::TProofServLite) );
      instance.SetDelete(&delete_TProofServLite);
      instance.SetDeleteArray(&deleteArray_TProofServLite);
      instance.SetDestructor(&destruct_TProofServLite);
      instance.SetStreamerFunc(&streamer_TProofServLite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofServLite*)
   {
      return GenerateInitInstanceLocal((::TProofServLite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofServLite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TProofSuperMaster(void *p);
   static void deleteArray_TProofSuperMaster(void *p);
   static void destruct_TProofSuperMaster(void *p);
   static void streamer_TProofSuperMaster(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofSuperMaster*)
   {
      ::TProofSuperMaster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofSuperMaster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofSuperMaster", ::TProofSuperMaster::Class_Version(), "TProofSuperMaster.h", 33,
                  typeid(::TProofSuperMaster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofSuperMaster::Dictionary, isa_proxy, 16,
                  sizeof(::TProofSuperMaster) );
      instance.SetDelete(&delete_TProofSuperMaster);
      instance.SetDeleteArray(&deleteArray_TProofSuperMaster);
      instance.SetDestructor(&destruct_TProofSuperMaster);
      instance.SetStreamerFunc(&streamer_TProofSuperMaster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofSuperMaster*)
   {
      return GenerateInitInstanceLocal((::TProofSuperMaster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofSuperMaster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TQueryResultManager(void *p);
   static void deleteArray_TQueryResultManager(void *p);
   static void destruct_TQueryResultManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQueryResultManager*)
   {
      ::TQueryResultManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQueryResultManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQueryResultManager", ::TQueryResultManager::Class_Version(), "TQueryResultManager.h", 35,
                  typeid(::TQueryResultManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQueryResultManager::Dictionary, isa_proxy, 4,
                  sizeof(::TQueryResultManager) );
      instance.SetDelete(&delete_TQueryResultManager);
      instance.SetDeleteArray(&deleteArray_TQueryResultManager);
      instance.SetDestructor(&destruct_TQueryResultManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQueryResultManager*)
   {
      return GenerateInitInstanceLocal((::TQueryResultManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQueryResultManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSelVerifyDataSet(void *p = 0);
   static void *newArray_TSelVerifyDataSet(Long_t size, void *p);
   static void delete_TSelVerifyDataSet(void *p);
   static void deleteArray_TSelVerifyDataSet(void *p);
   static void destruct_TSelVerifyDataSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSelVerifyDataSet*)
   {
      ::TSelVerifyDataSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSelVerifyDataSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSelVerifyDataSet", ::TSelVerifyDataSet::Class_Version(), "TSelVerifyDataSet.h", 28,
                  typeid(::TSelVerifyDataSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSelVerifyDataSet::Dictionary, isa_proxy, 4,
                  sizeof(::TSelVerifyDataSet) );
      instance.SetNew(&new_TSelVerifyDataSet);
      instance.SetNewArray(&newArray_TSelVerifyDataSet);
      instance.SetDelete(&delete_TSelVerifyDataSet);
      instance.SetDeleteArray(&deleteArray_TSelVerifyDataSet);
      instance.SetDestructor(&destruct_TSelVerifyDataSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSelVerifyDataSet*)
   {
      return GenerateInitInstanceLocal((::TSelVerifyDataSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSelVerifyDataSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSlave(void *p);
   static void deleteArray_TSlave(void *p);
   static void destruct_TSlave(void *p);
   static void streamer_TSlave(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSlave*)
   {
      ::TSlave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSlave >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSlave", ::TSlave::Class_Version(), "TSlave.h", 46,
                  typeid(::TSlave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSlave::Dictionary, isa_proxy, 16,
                  sizeof(::TSlave) );
      instance.SetDelete(&delete_TSlave);
      instance.SetDeleteArray(&deleteArray_TSlave);
      instance.SetDestructor(&destruct_TSlave);
      instance.SetStreamerFunc(&streamer_TSlave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSlave*)
   {
      return GenerateInitInstanceLocal((::TSlave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSlave*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSlaveLite(void *p);
   static void deleteArray_TSlaveLite(void *p);
   static void destruct_TSlaveLite(void *p);
   static void streamer_TSlaveLite(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSlaveLite*)
   {
      ::TSlaveLite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSlaveLite >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSlaveLite", ::TSlaveLite::Class_Version(), "TSlaveLite.h", 31,
                  typeid(::TSlaveLite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSlaveLite::Dictionary, isa_proxy, 16,
                  sizeof(::TSlaveLite) );
      instance.SetDelete(&delete_TSlaveLite);
      instance.SetDeleteArray(&deleteArray_TSlaveLite);
      instance.SetDestructor(&destruct_TSlaveLite);
      instance.SetStreamerFunc(&streamer_TSlaveLite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSlaveLite*)
   {
      return GenerateInitInstanceLocal((::TSlaveLite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSlaveLite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualProofPlayer(void *p);
   static void deleteArray_TVirtualProofPlayer(void *p);
   static void destruct_TVirtualProofPlayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualProofPlayer*)
   {
      ::TVirtualProofPlayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualProofPlayer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualProofPlayer", ::TVirtualProofPlayer::Class_Version(), "TVirtualProofPlayer.h", 43,
                  typeid(::TVirtualProofPlayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualProofPlayer::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualProofPlayer) );
      instance.SetDelete(&delete_TVirtualProofPlayer);
      instance.SetDeleteArray(&deleteArray_TVirtualProofPlayer);
      instance.SetDestructor(&destruct_TVirtualProofPlayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualProofPlayer*)
   {
      return GenerateInitInstanceLocal((::TVirtualProofPlayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualProofPlayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TCondorSlave::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCondorSlave::Class_Name()
{
   return "TCondorSlave";
}

//______________________________________________________________________________
const char *TCondorSlave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCondorSlave*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCondorSlave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCondorSlave*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCondorSlave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCondorSlave*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCondorSlave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCondorSlave*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCondor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCondor::Class_Name()
{
   return "TCondor";
}

//______________________________________________________________________________
const char *TCondor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCondor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCondor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCondor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCondor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCondor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCondor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCondor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDSetElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDSetElement::Class_Name()
{
   return "TDSetElement";
}

//______________________________________________________________________________
const char *TDSetElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDSetElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDSetElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDSetElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDSetElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDSetElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDSetElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDSetElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDSet::Class_Name()
{
   return "TDSet";
}

//______________________________________________________________________________
const char *TDSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDSetProxy::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDSetProxy::Class_Name()
{
   return "TDSetProxy";
}

//______________________________________________________________________________
const char *TDSetProxy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDSetProxy*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDSetProxy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDSetProxy*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDSetProxy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDSetProxy*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDSetProxy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDSetProxy*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDataSetManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDataSetManager::Class_Name()
{
   return "TDataSetManager";
}

//______________________________________________________________________________
const char *TDataSetManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDataSetManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDataSetManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDataSetManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDataSetManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDataSetManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDataSetManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDataSetManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDataSetManagerFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDataSetManagerFile::Class_Name()
{
   return "TDataSetManagerFile";
}

//______________________________________________________________________________
const char *TDataSetManagerFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDataSetManagerFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDataSetManagerFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDataSetManagerFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDataSetManagerFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDataSetManagerFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDataSetManagerFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDataSetManagerFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLockPath::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLockPath::Class_Name()
{
   return "TLockPath";
}

//______________________________________________________________________________
const char *TLockPath::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLockPath*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLockPath::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLockPath*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLockPath::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLockPath*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLockPath::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLockPath*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPackMgr::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPackMgr::Class_Name()
{
   return "TPackMgr";
}

//______________________________________________________________________________
const char *TPackMgr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPackMgr*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPackMgr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPackMgr*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPackMgr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPackMgr*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPackMgr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPackMgr*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofMgr::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofMgr::Class_Name()
{
   return "TProofMgr";
}

//______________________________________________________________________________
const char *TProofMgr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMgr*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofMgr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMgr*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofMgr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMgr*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofMgr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMgr*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDesc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDesc::Class_Name()
{
   return "TProofDesc";
}

//______________________________________________________________________________
const char *TProofDesc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDesc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDesc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDesc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDesc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDesc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDesc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDesc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofOutputList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofOutputList::Class_Name()
{
   return "TProofOutputList";
}

//______________________________________________________________________________
const char *TProofOutputList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofOutputList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofOutputList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofOutputList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofOutputList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofOutputList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofOutputList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofOutputList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofProgressInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofProgressInfo::Class_Name()
{
   return "TProofProgressInfo";
}

//______________________________________________________________________________
const char *TProofProgressInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofProgressInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofProgressInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofProgressInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofProgressInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofProgressInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofProgressInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofProgressInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSlaveInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSlaveInfo::Class_Name()
{
   return "TSlaveInfo";
}

//______________________________________________________________________________
const char *TSlaveInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSlaveInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSlaveInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSlaveInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSlaveInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSlaveInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSlaveInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSlaveInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMergerInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMergerInfo::Class_Name()
{
   return "TMergerInfo";
}

//______________________________________________________________________________
const char *TMergerInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMergerInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMergerInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMergerInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMergerInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMergerInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMergerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMergerInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProof::Class_Name()
{
   return "TProof";
}

//______________________________________________________________________________
const char *TProof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofChain::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofChain::Class_Name()
{
   return "TProofChain";
}

//______________________________________________________________________________
const char *TProofChain::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofChain*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofChain::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofChain*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofChain::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofChain*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofChain::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofChain*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofCondor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofCondor::Class_Name()
{
   return "TProofCondor";
}

//______________________________________________________________________________
const char *TProofCondor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofCondor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofCondor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofCondor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofCondor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofCondor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofCondor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofCondor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofLite::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofLite::Class_Name()
{
   return "TProofLite";
}

//______________________________________________________________________________
const char *TProofLite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofLite*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofLite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofLite*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofLite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofLite*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofLite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofLite*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofLog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofLog::Class_Name()
{
   return "TProofLog";
}

//______________________________________________________________________________
const char *TProofLog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofLog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofLog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofLog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofLog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofLog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofLog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofLog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofLogElem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofLogElem::Class_Name()
{
   return "TProofLogElem";
}

//______________________________________________________________________________
const char *TProofLogElem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofLogElem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofLogElem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofLogElem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofLogElem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofLogElem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofLogElem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofLogElem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofMgrLite::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofMgrLite::Class_Name()
{
   return "TProofMgrLite";
}

//______________________________________________________________________________
const char *TProofMgrLite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMgrLite*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofMgrLite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofMgrLite*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofMgrLite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMgrLite*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofMgrLite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofMgrLite*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofNodeInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofNodeInfo::Class_Name()
{
   return "TProofNodeInfo";
}

//______________________________________________________________________________
const char *TProofNodeInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofNodeInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofNodeInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofNodeInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofNodeInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofNodeInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofNodeInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofNodeInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofOutputFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofOutputFile::Class_Name()
{
   return "TProofOutputFile";
}

//______________________________________________________________________________
const char *TProofOutputFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofOutputFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofOutputFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofOutputFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofOutputFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofOutputFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofOutputFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofOutputFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofProgressStatus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofProgressStatus::Class_Name()
{
   return "TProofProgressStatus";
}

//______________________________________________________________________________
const char *TProofProgressStatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofProgressStatus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofProgressStatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofProgressStatus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofProgressStatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofProgressStatus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofProgressStatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofProgressStatus*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofQueryResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofQueryResult::Class_Name()
{
   return "TProofQueryResult";
}

//______________________________________________________________________________
const char *TProofQueryResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofQueryResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofQueryResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofQueryResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofQueryResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofQueryResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofQueryResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofQueryResult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofResources::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofResources::Class_Name()
{
   return "TProofResources";
}

//______________________________________________________________________________
const char *TProofResources::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofResources*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofResources::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofResources*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofResources::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofResources*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofResources::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofResources*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofResourcesStatic::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofResourcesStatic::Class_Name()
{
   return "TProofResourcesStatic";
}

//______________________________________________________________________________
const char *TProofResourcesStatic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofResourcesStatic*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofResourcesStatic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofResourcesStatic*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofResourcesStatic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofResourcesStatic*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofResourcesStatic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofResourcesStatic*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofServ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofServ::Class_Name()
{
   return "TProofServ";
}

//______________________________________________________________________________
const char *TProofServ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofServ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofServ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofServ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofServ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofServ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofServ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofServ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofServLite::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofServLite::Class_Name()
{
   return "TProofServLite";
}

//______________________________________________________________________________
const char *TProofServLite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofServLite*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofServLite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofServLite*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofServLite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofServLite*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofServLite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofServLite*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofSuperMaster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofSuperMaster::Class_Name()
{
   return "TProofSuperMaster";
}

//______________________________________________________________________________
const char *TProofSuperMaster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofSuperMaster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofSuperMaster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofSuperMaster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofSuperMaster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofSuperMaster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofSuperMaster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofSuperMaster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQueryResultManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQueryResultManager::Class_Name()
{
   return "TQueryResultManager";
}

//______________________________________________________________________________
const char *TQueryResultManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQueryResultManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQueryResultManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQueryResultManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQueryResultManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQueryResultManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQueryResultManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQueryResultManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSelVerifyDataSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSelVerifyDataSet::Class_Name()
{
   return "TSelVerifyDataSet";
}

//______________________________________________________________________________
const char *TSelVerifyDataSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelVerifyDataSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSelVerifyDataSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelVerifyDataSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSelVerifyDataSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelVerifyDataSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSelVerifyDataSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelVerifyDataSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSlave::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSlave::Class_Name()
{
   return "TSlave";
}

//______________________________________________________________________________
const char *TSlave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSlave*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSlave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSlave*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSlave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSlave*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSlave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSlave*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSlaveLite::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSlaveLite::Class_Name()
{
   return "TSlaveLite";
}

//______________________________________________________________________________
const char *TSlaveLite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSlaveLite*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSlaveLite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSlaveLite*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSlaveLite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSlaveLite*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSlaveLite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSlaveLite*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualProofPlayer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualProofPlayer::Class_Name()
{
   return "TVirtualProofPlayer";
}

//______________________________________________________________________________
const char *TVirtualProofPlayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualProofPlayer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualProofPlayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualProofPlayer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualProofPlayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualProofPlayer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualProofPlayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualProofPlayer*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlETDSetElementmUcOTStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<TDSetElement*,TString> : new pair<TDSetElement*,TString>;
   }
   static void *newArray_pairlETDSetElementmUcOTStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<TDSetElement*,TString>[nElements] : new pair<TDSetElement*,TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlETDSetElementmUcOTStringgR(void *p) {
      delete ((pair<TDSetElement*,TString>*)p);
   }
   static void deleteArray_pairlETDSetElementmUcOTStringgR(void *p) {
      delete [] ((pair<TDSetElement*,TString>*)p);
   }
   static void destruct_pairlETDSetElementmUcOTStringgR(void *p) {
      typedef pair<TDSetElement*,TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<TDSetElement*,TString>

//______________________________________________________________________________
void TCondorSlave::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCondorSlave.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCondorSlave::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCondorSlave::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCondorSlave(void *p) {
      return  p ? new(p) ::TCondorSlave : new ::TCondorSlave;
   }
   static void *newArray_TCondorSlave(Long_t nElements, void *p) {
      return p ? new(p) ::TCondorSlave[nElements] : new ::TCondorSlave[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCondorSlave(void *p) {
      delete ((::TCondorSlave*)p);
   }
   static void deleteArray_TCondorSlave(void *p) {
      delete [] ((::TCondorSlave*)p);
   }
   static void destruct_TCondorSlave(void *p) {
      typedef ::TCondorSlave current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCondorSlave

//______________________________________________________________________________
void TCondor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCondor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCondor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCondor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCondor(void *p) {
      return  p ? new(p) ::TCondor : new ::TCondor;
   }
   static void *newArray_TCondor(Long_t nElements, void *p) {
      return p ? new(p) ::TCondor[nElements] : new ::TCondor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCondor(void *p) {
      delete ((::TCondor*)p);
   }
   static void deleteArray_TCondor(void *p) {
      delete [] ((::TCondor*)p);
   }
   static void destruct_TCondor(void *p) {
      typedef ::TCondor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCondor

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDSetElement(void *p) {
      return  p ? new(p) ::TDSetElement : new ::TDSetElement;
   }
   static void *newArray_TDSetElement(Long_t nElements, void *p) {
      return p ? new(p) ::TDSetElement[nElements] : new ::TDSetElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDSetElement(void *p) {
      delete ((::TDSetElement*)p);
   }
   static void deleteArray_TDSetElement(void *p) {
      delete [] ((::TDSetElement*)p);
   }
   static void destruct_TDSetElement(void *p) {
      typedef ::TDSetElement current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDSetElement(TBuffer &buf, void *obj) {
      ((::TDSetElement*)obj)->::TDSetElement::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDSetElement

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDSet(void *p) {
      return  p ? new(p) ::TDSet : new ::TDSet;
   }
   static void *newArray_TDSet(Long_t nElements, void *p) {
      return p ? new(p) ::TDSet[nElements] : new ::TDSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDSet(void *p) {
      delete ((::TDSet*)p);
   }
   static void deleteArray_TDSet(void *p) {
      delete [] ((::TDSet*)p);
   }
   static void destruct_TDSet(void *p) {
      typedef ::TDSet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDSet(TBuffer &buf, void *obj) {
      ((::TDSet*)obj)->::TDSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDSet

//______________________________________________________________________________
void TDSetProxy::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDSetProxy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDSetProxy::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDSetProxy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDSetProxy(void *p) {
      return  p ? new(p) ::TDSetProxy : new ::TDSetProxy;
   }
   static void *newArray_TDSetProxy(Long_t nElements, void *p) {
      return p ? new(p) ::TDSetProxy[nElements] : new ::TDSetProxy[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDSetProxy(void *p) {
      delete ((::TDSetProxy*)p);
   }
   static void deleteArray_TDSetProxy(void *p) {
      delete [] ((::TDSetProxy*)p);
   }
   static void destruct_TDSetProxy(void *p) {
      typedef ::TDSetProxy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDSetProxy

//______________________________________________________________________________
void TDataSetManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDataSetManager.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDataSetManager(void *p) {
      return  p ? new(p) ::TDataSetManager : new ::TDataSetManager;
   }
   static void *newArray_TDataSetManager(Long_t nElements, void *p) {
      return p ? new(p) ::TDataSetManager[nElements] : new ::TDataSetManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDataSetManager(void *p) {
      delete ((::TDataSetManager*)p);
   }
   static void deleteArray_TDataSetManager(void *p) {
      delete [] ((::TDataSetManager*)p);
   }
   static void destruct_TDataSetManager(void *p) {
      typedef ::TDataSetManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDataSetManager(TBuffer &buf, void *obj) {
      ((::TDataSetManager*)obj)->::TDataSetManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDataSetManager

//______________________________________________________________________________
void TDataSetManagerFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDataSetManagerFile.

   TDataSetManager::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDataSetManagerFile(void *p) {
      return  p ? new(p) ::TDataSetManagerFile : new ::TDataSetManagerFile;
   }
   static void *newArray_TDataSetManagerFile(Long_t nElements, void *p) {
      return p ? new(p) ::TDataSetManagerFile[nElements] : new ::TDataSetManagerFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDataSetManagerFile(void *p) {
      delete ((::TDataSetManagerFile*)p);
   }
   static void deleteArray_TDataSetManagerFile(void *p) {
      delete [] ((::TDataSetManagerFile*)p);
   }
   static void destruct_TDataSetManagerFile(void *p) {
      typedef ::TDataSetManagerFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDataSetManagerFile(TBuffer &buf, void *obj) {
      ((::TDataSetManagerFile*)obj)->::TDataSetManagerFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDataSetManagerFile

//______________________________________________________________________________
void TLockPath::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLockPath.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLockPath::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLockPath::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLockPath(void *p) {
      return  p ? new(p) ::TLockPath : new ::TLockPath;
   }
   static void *newArray_TLockPath(Long_t nElements, void *p) {
      return p ? new(p) ::TLockPath[nElements] : new ::TLockPath[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLockPath(void *p) {
      delete ((::TLockPath*)p);
   }
   static void deleteArray_TLockPath(void *p) {
      delete [] ((::TLockPath*)p);
   }
   static void destruct_TLockPath(void *p) {
      typedef ::TLockPath current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLockPath

//______________________________________________________________________________
void TPackMgr::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPackMgr.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPackMgr::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPackMgr::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPackMgr(void *p) {
      delete ((::TPackMgr*)p);
   }
   static void deleteArray_TPackMgr(void *p) {
      delete [] ((::TPackMgr*)p);
   }
   static void destruct_TPackMgr(void *p) {
      typedef ::TPackMgr current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPackMgr

//______________________________________________________________________________
void TProofMgr::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofMgr.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofMgr(void *p) {
      delete ((::TProofMgr*)p);
   }
   static void deleteArray_TProofMgr(void *p) {
      delete [] ((::TProofMgr*)p);
   }
   static void destruct_TProofMgr(void *p) {
      typedef ::TProofMgr current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofMgr(TBuffer &buf, void *obj) {
      ((::TProofMgr*)obj)->::TProofMgr::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofMgr

//______________________________________________________________________________
void TProofDesc::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDesc.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fLocalId;
      R__b >> fStatus;
      R__b >> fProof;
      R__b >> fRemoteId;
      fUrl.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TProofDesc::IsA());
   } else {
      R__c = R__b.WriteVersion(TProofDesc::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fLocalId;
      R__b << fStatus;
      R__b << fProof;
      R__b << fRemoteId;
      fUrl.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDesc(void *p) {
      return  p ? new(p) ::TProofDesc : new ::TProofDesc;
   }
   static void *newArray_TProofDesc(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDesc[nElements] : new ::TProofDesc[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDesc(void *p) {
      delete ((::TProofDesc*)p);
   }
   static void deleteArray_TProofDesc(void *p) {
      delete [] ((::TProofDesc*)p);
   }
   static void destruct_TProofDesc(void *p) {
      typedef ::TProofDesc current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofDesc(TBuffer &buf, void *obj) {
      ((::TProofDesc*)obj)->::TProofDesc::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofDesc

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDebug(void *p) {
      return  p ? new(p) ::TProofDebug : new ::TProofDebug;
   }
   static void *newArray_TProofDebug(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDebug[nElements] : new ::TProofDebug[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDebug(void *p) {
      delete ((::TProofDebug*)p);
   }
   static void deleteArray_TProofDebug(void *p) {
      delete [] ((::TProofDebug*)p);
   }
   static void destruct_TProofDebug(void *p) {
      typedef ::TProofDebug current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDebug

//______________________________________________________________________________
void TProofOutputList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofOutputList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofOutputList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofOutputList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofOutputList(void *p) {
      return  p ? new(p) ::TProofOutputList : new ::TProofOutputList;
   }
   static void *newArray_TProofOutputList(Long_t nElements, void *p) {
      return p ? new(p) ::TProofOutputList[nElements] : new ::TProofOutputList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofOutputList(void *p) {
      delete ((::TProofOutputList*)p);
   }
   static void deleteArray_TProofOutputList(void *p) {
      delete [] ((::TProofOutputList*)p);
   }
   static void destruct_TProofOutputList(void *p) {
      typedef ::TProofOutputList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TProofOutputList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TProofOutputList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TProofOutputList

//______________________________________________________________________________
void TProofProgressInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofProgressInfo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fTotal;
      R__b >> fProcessed;
      R__b >> fBytesRead;
      R__b >> fInitTime;
      R__b >> fProcTime;
      R__b >> fEvtRateI;
      R__b >> fMBRateI;
      R__b >> fActWorkers;
      R__b >> fTotSessions;
      R__b >> fEffSessions;
      R__b.CheckByteCount(R__s, R__c, TProofProgressInfo::IsA());
   } else {
      R__c = R__b.WriteVersion(TProofProgressInfo::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fTotal;
      R__b << fProcessed;
      R__b << fBytesRead;
      R__b << fInitTime;
      R__b << fProcTime;
      R__b << fEvtRateI;
      R__b << fMBRateI;
      R__b << fActWorkers;
      R__b << fTotSessions;
      R__b << fEffSessions;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofProgressInfo(void *p) {
      return  p ? new(p) ::TProofProgressInfo : new ::TProofProgressInfo;
   }
   static void *newArray_TProofProgressInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TProofProgressInfo[nElements] : new ::TProofProgressInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofProgressInfo(void *p) {
      delete ((::TProofProgressInfo*)p);
   }
   static void deleteArray_TProofProgressInfo(void *p) {
      delete [] ((::TProofProgressInfo*)p);
   }
   static void destruct_TProofProgressInfo(void *p) {
      typedef ::TProofProgressInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofProgressInfo(TBuffer &buf, void *obj) {
      ((::TProofProgressInfo*)obj)->::TProofProgressInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofProgressInfo

//______________________________________________________________________________
void TSlaveInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSlaveInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSlaveInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSlaveInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSlaveInfo(void *p) {
      return  p ? new(p) ::TSlaveInfo : new ::TSlaveInfo;
   }
   static void *newArray_TSlaveInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TSlaveInfo[nElements] : new ::TSlaveInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSlaveInfo(void *p) {
      delete ((::TSlaveInfo*)p);
   }
   static void deleteArray_TSlaveInfo(void *p) {
      delete [] ((::TSlaveInfo*)p);
   }
   static void destruct_TSlaveInfo(void *p) {
      typedef ::TSlaveInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSlaveInfo

//______________________________________________________________________________
void TMergerInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMergerInfo.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMergerInfo(void *p) {
      delete ((::TMergerInfo*)p);
   }
   static void deleteArray_TMergerInfo(void *p) {
      delete [] ((::TMergerInfo*)p);
   }
   static void destruct_TMergerInfo(void *p) {
      typedef ::TMergerInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMergerInfo(TBuffer &buf, void *obj) {
      ((::TMergerInfo*)obj)->::TMergerInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMergerInfo

//______________________________________________________________________________
void TProof::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProof.

   TNamed::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProof(void *p) {
      delete ((::TProof*)p);
   }
   static void deleteArray_TProof(void *p) {
      delete [] ((::TProof*)p);
   }
   static void destruct_TProof(void *p) {
      typedef ::TProof current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProof(TBuffer &buf, void *obj) {
      ((::TProof*)obj)->::TProof::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProof

//______________________________________________________________________________
void TProofChain::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofChain.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofChain::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofChain::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofChain(void *p) {
      return  p ? new(p) ::TProofChain : new ::TProofChain;
   }
   static void *newArray_TProofChain(Long_t nElements, void *p) {
      return p ? new(p) ::TProofChain[nElements] : new ::TProofChain[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofChain(void *p) {
      delete ((::TProofChain*)p);
   }
   static void deleteArray_TProofChain(void *p) {
      delete [] ((::TProofChain*)p);
   }
   static void destruct_TProofChain(void *p) {
      typedef ::TProofChain current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TProofChain(void *p, TDirectory *dir) {
      ((::TProofChain*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t merge_TProofChain(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::TProofChain*)obj)->Merge(coll,info);
   }
   // Wrapper around the Reset function.
   static void reset_TProofChain(void *obj,TFileMergeInfo *info) {
      ((::TProofChain*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TProofChain

//______________________________________________________________________________
void TProofCondor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofCondor.

   TProof::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofCondor(void *p) {
      delete ((::TProofCondor*)p);
   }
   static void deleteArray_TProofCondor(void *p) {
      delete [] ((::TProofCondor*)p);
   }
   static void destruct_TProofCondor(void *p) {
      typedef ::TProofCondor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofCondor(TBuffer &buf, void *obj) {
      ((::TProofCondor*)obj)->::TProofCondor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofCondor

//______________________________________________________________________________
void TProofLite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofLite.

   TProof::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofLite(void *p) {
      delete ((::TProofLite*)p);
   }
   static void deleteArray_TProofLite(void *p) {
      delete [] ((::TProofLite*)p);
   }
   static void destruct_TProofLite(void *p) {
      typedef ::TProofLite current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofLite(TBuffer &buf, void *obj) {
      ((::TProofLite*)obj)->::TProofLite::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofLite

//______________________________________________________________________________
void TProofLog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofLog.

   TNamed::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofLog(void *p) {
      delete ((::TProofLog*)p);
   }
   static void deleteArray_TProofLog(void *p) {
      delete [] ((::TProofLog*)p);
   }
   static void destruct_TProofLog(void *p) {
      typedef ::TProofLog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofLog(TBuffer &buf, void *obj) {
      ((::TProofLog*)obj)->::TProofLog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofLog

//______________________________________________________________________________
void TProofLogElem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofLogElem.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofLogElem(void *p) {
      delete ((::TProofLogElem*)p);
   }
   static void deleteArray_TProofLogElem(void *p) {
      delete [] ((::TProofLogElem*)p);
   }
   static void destruct_TProofLogElem(void *p) {
      typedef ::TProofLogElem current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofLogElem(TBuffer &buf, void *obj) {
      ((::TProofLogElem*)obj)->::TProofLogElem::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofLogElem

//______________________________________________________________________________
void TProofMgrLite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofMgrLite.

   TProofMgr::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofMgrLite(void *p) {
      delete ((::TProofMgrLite*)p);
   }
   static void deleteArray_TProofMgrLite(void *p) {
      delete [] ((::TProofMgrLite*)p);
   }
   static void destruct_TProofMgrLite(void *p) {
      typedef ::TProofMgrLite current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofMgrLite(TBuffer &buf, void *obj) {
      ((::TProofMgrLite*)obj)->::TProofMgrLite::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofMgrLite

//______________________________________________________________________________
void TProofNodeInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofNodeInfo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      void *ptr_fNodeType = (void*)&fNodeType;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fNodeType);
      fName.Streamer(R__b);
      fNodeName.Streamer(R__b);
      fWorkDir.Streamer(R__b);
      fOrdinal.Streamer(R__b);
      fImage.Streamer(R__b);
      fId.Streamer(R__b);
      fConfig.Streamer(R__b);
      fMsd.Streamer(R__b);
      R__b >> fPort;
      R__b >> fPerfIndex;
      R__b >> fNWrks;
      R__b.CheckByteCount(R__s, R__c, TProofNodeInfo::IsA());
   } else {
      R__c = R__b.WriteVersion(TProofNodeInfo::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << (Int_t)fNodeType;
      fName.Streamer(R__b);
      fNodeName.Streamer(R__b);
      fWorkDir.Streamer(R__b);
      fOrdinal.Streamer(R__b);
      fImage.Streamer(R__b);
      fId.Streamer(R__b);
      fConfig.Streamer(R__b);
      fMsd.Streamer(R__b);
      R__b << fPort;
      R__b << fPerfIndex;
      R__b << fNWrks;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofNodeInfo(void *p) {
      return  p ? new(p) ::TProofNodeInfo : new ::TProofNodeInfo;
   }
   static void *newArray_TProofNodeInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TProofNodeInfo[nElements] : new ::TProofNodeInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofNodeInfo(void *p) {
      delete ((::TProofNodeInfo*)p);
   }
   static void deleteArray_TProofNodeInfo(void *p) {
      delete [] ((::TProofNodeInfo*)p);
   }
   static void destruct_TProofNodeInfo(void *p) {
      typedef ::TProofNodeInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofNodeInfo(TBuffer &buf, void *obj) {
      ((::TProofNodeInfo*)obj)->::TProofNodeInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofNodeInfo

//______________________________________________________________________________
void TProofOutputFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofOutputFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofOutputFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofOutputFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofOutputFile(void *p) {
      return  p ? new(p) ::TProofOutputFile : new ::TProofOutputFile;
   }
   static void *newArray_TProofOutputFile(Long_t nElements, void *p) {
      return p ? new(p) ::TProofOutputFile[nElements] : new ::TProofOutputFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofOutputFile(void *p) {
      delete ((::TProofOutputFile*)p);
   }
   static void deleteArray_TProofOutputFile(void *p) {
      delete [] ((::TProofOutputFile*)p);
   }
   static void destruct_TProofOutputFile(void *p) {
      typedef ::TProofOutputFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TProofOutputFile(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TProofOutputFile*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TProofOutputFile

//______________________________________________________________________________
void TProofProgressStatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofProgressStatus.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fLastEntries;
      R__b >> fEntries;
      R__b >> fBytesRead;
      R__b >> fReadCalls;
      R__b >> fLearnTime;
      R__b >> fLastProcTime;
      R__b >> fProcTime;
      R__b >> fCPUTime;
      R__b >> fLastUpdate;
      R__b.CheckByteCount(R__s, R__c, TProofProgressStatus::IsA());
   } else {
      R__c = R__b.WriteVersion(TProofProgressStatus::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fLastEntries;
      R__b << fEntries;
      R__b << fBytesRead;
      R__b << fReadCalls;
      R__b << fLearnTime;
      R__b << fLastProcTime;
      R__b << fProcTime;
      R__b << fCPUTime;
      R__b << fLastUpdate;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofProgressStatus(void *p) {
      return  p ? new(p) ::TProofProgressStatus : new ::TProofProgressStatus;
   }
   static void *newArray_TProofProgressStatus(Long_t nElements, void *p) {
      return p ? new(p) ::TProofProgressStatus[nElements] : new ::TProofProgressStatus[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofProgressStatus(void *p) {
      delete ((::TProofProgressStatus*)p);
   }
   static void deleteArray_TProofProgressStatus(void *p) {
      delete [] ((::TProofProgressStatus*)p);
   }
   static void destruct_TProofProgressStatus(void *p) {
      typedef ::TProofProgressStatus current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofProgressStatus(TBuffer &buf, void *obj) {
      ((::TProofProgressStatus*)obj)->::TProofProgressStatus::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofProgressStatus

//______________________________________________________________________________
void TProofQueryResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofQueryResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofQueryResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofQueryResult::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofQueryResult(void *p) {
      return  p ? new(p) ::TProofQueryResult : new ::TProofQueryResult;
   }
   static void *newArray_TProofQueryResult(Long_t nElements, void *p) {
      return p ? new(p) ::TProofQueryResult[nElements] : new ::TProofQueryResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofQueryResult(void *p) {
      delete ((::TProofQueryResult*)p);
   }
   static void deleteArray_TProofQueryResult(void *p) {
      delete [] ((::TProofQueryResult*)p);
   }
   static void destruct_TProofQueryResult(void *p) {
      typedef ::TProofQueryResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofQueryResult

//______________________________________________________________________________
void TProofResources::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofResources.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofResources(void *p) {
      delete ((::TProofResources*)p);
   }
   static void deleteArray_TProofResources(void *p) {
      delete [] ((::TProofResources*)p);
   }
   static void destruct_TProofResources(void *p) {
      typedef ::TProofResources current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofResources(TBuffer &buf, void *obj) {
      ((::TProofResources*)obj)->::TProofResources::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofResources

//______________________________________________________________________________
void TProofResourcesStatic::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofResourcesStatic.

   TProofResources::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofResourcesStatic(void *p) {
      return  p ? new(p) ::TProofResourcesStatic : new ::TProofResourcesStatic;
   }
   static void *newArray_TProofResourcesStatic(Long_t nElements, void *p) {
      return p ? new(p) ::TProofResourcesStatic[nElements] : new ::TProofResourcesStatic[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofResourcesStatic(void *p) {
      delete ((::TProofResourcesStatic*)p);
   }
   static void deleteArray_TProofResourcesStatic(void *p) {
      delete [] ((::TProofResourcesStatic*)p);
   }
   static void destruct_TProofResourcesStatic(void *p) {
      typedef ::TProofResourcesStatic current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofResourcesStatic(TBuffer &buf, void *obj) {
      ((::TProofResourcesStatic*)obj)->::TProofResourcesStatic::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofResourcesStatic

//______________________________________________________________________________
void TProofServ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofServ.

   TApplication::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofServ(void *p) {
      delete ((::TProofServ*)p);
   }
   static void deleteArray_TProofServ(void *p) {
      delete [] ((::TProofServ*)p);
   }
   static void destruct_TProofServ(void *p) {
      typedef ::TProofServ current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofServ(TBuffer &buf, void *obj) {
      ((::TProofServ*)obj)->::TProofServ::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofServ

//______________________________________________________________________________
void TProofServLite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofServLite.

   TProofServ::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofServLite(void *p) {
      delete ((::TProofServLite*)p);
   }
   static void deleteArray_TProofServLite(void *p) {
      delete [] ((::TProofServLite*)p);
   }
   static void destruct_TProofServLite(void *p) {
      typedef ::TProofServLite current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofServLite(TBuffer &buf, void *obj) {
      ((::TProofServLite*)obj)->::TProofServLite::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofServLite

//______________________________________________________________________________
void TProofSuperMaster::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofSuperMaster.

   TProof::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofSuperMaster(void *p) {
      delete ((::TProofSuperMaster*)p);
   }
   static void deleteArray_TProofSuperMaster(void *p) {
      delete [] ((::TProofSuperMaster*)p);
   }
   static void destruct_TProofSuperMaster(void *p) {
      typedef ::TProofSuperMaster current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProofSuperMaster(TBuffer &buf, void *obj) {
      ((::TProofSuperMaster*)obj)->::TProofSuperMaster::Streamer(buf);
   }
} // end of namespace ROOT for class ::TProofSuperMaster

//______________________________________________________________________________
void TQueryResultManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQueryResultManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQueryResultManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQueryResultManager::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TQueryResultManager(void *p) {
      delete ((::TQueryResultManager*)p);
   }
   static void deleteArray_TQueryResultManager(void *p) {
      delete [] ((::TQueryResultManager*)p);
   }
   static void destruct_TQueryResultManager(void *p) {
      typedef ::TQueryResultManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQueryResultManager

//______________________________________________________________________________
void TSelVerifyDataSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSelVerifyDataSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSelVerifyDataSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSelVerifyDataSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSelVerifyDataSet(void *p) {
      return  p ? new(p) ::TSelVerifyDataSet : new ::TSelVerifyDataSet;
   }
   static void *newArray_TSelVerifyDataSet(Long_t nElements, void *p) {
      return p ? new(p) ::TSelVerifyDataSet[nElements] : new ::TSelVerifyDataSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSelVerifyDataSet(void *p) {
      delete ((::TSelVerifyDataSet*)p);
   }
   static void deleteArray_TSelVerifyDataSet(void *p) {
      delete [] ((::TSelVerifyDataSet*)p);
   }
   static void destruct_TSelVerifyDataSet(void *p) {
      typedef ::TSelVerifyDataSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSelVerifyDataSet

//______________________________________________________________________________
void TSlave::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSlave.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSlave(void *p) {
      delete ((::TSlave*)p);
   }
   static void deleteArray_TSlave(void *p) {
      delete [] ((::TSlave*)p);
   }
   static void destruct_TSlave(void *p) {
      typedef ::TSlave current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSlave(TBuffer &buf, void *obj) {
      ((::TSlave*)obj)->::TSlave::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSlave

//______________________________________________________________________________
void TSlaveLite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSlaveLite.

   TSlave::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSlaveLite(void *p) {
      delete ((::TSlaveLite*)p);
   }
   static void deleteArray_TSlaveLite(void *p) {
      delete [] ((::TSlaveLite*)p);
   }
   static void destruct_TSlaveLite(void *p) {
      typedef ::TSlaveLite current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSlaveLite(TBuffer &buf, void *obj) {
      ((::TSlaveLite*)obj)->::TSlaveLite::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSlaveLite

//______________________________________________________________________________
void TVirtualProofPlayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualProofPlayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualProofPlayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualProofPlayer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualProofPlayer(void *p) {
      delete ((::TVirtualProofPlayer*)p);
   }
   static void deleteArray_TVirtualProofPlayer(void *p) {
      delete [] ((::TVirtualProofPlayer*)p);
   }
   static void destruct_TVirtualProofPlayer(void *p) {
      typedef ::TVirtualProofPlayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualProofPlayer

namespace ROOT {
   static TClass *listlEpairlETDSetElementmUcOTStringgRsPgR_Dictionary();
   static void listlEpairlETDSetElementmUcOTStringgRsPgR_TClassManip(TClass*);
   static void *new_listlEpairlETDSetElementmUcOTStringgRsPgR(void *p = 0);
   static void *newArray_listlEpairlETDSetElementmUcOTStringgRsPgR(Long_t size, void *p);
   static void delete_listlEpairlETDSetElementmUcOTStringgRsPgR(void *p);
   static void deleteArray_listlEpairlETDSetElementmUcOTStringgRsPgR(void *p);
   static void destruct_listlEpairlETDSetElementmUcOTStringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<pair<TDSetElement*,TString> >*)
   {
      list<pair<TDSetElement*,TString> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<pair<TDSetElement*,TString> >));
      static ::ROOT::TGenericClassInfo 
         instance("list<pair<TDSetElement*,TString> >", -2, "list", 503,
                  typeid(list<pair<TDSetElement*,TString> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEpairlETDSetElementmUcOTStringgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(list<pair<TDSetElement*,TString> >) );
      instance.SetNew(&new_listlEpairlETDSetElementmUcOTStringgRsPgR);
      instance.SetNewArray(&newArray_listlEpairlETDSetElementmUcOTStringgRsPgR);
      instance.SetDelete(&delete_listlEpairlETDSetElementmUcOTStringgRsPgR);
      instance.SetDeleteArray(&deleteArray_listlEpairlETDSetElementmUcOTStringgRsPgR);
      instance.SetDestructor(&destruct_listlEpairlETDSetElementmUcOTStringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<pair<TDSetElement*,TString> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<pair<TDSetElement*,TString> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEpairlETDSetElementmUcOTStringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<pair<TDSetElement*,TString> >*)0x0)->GetClass();
      listlEpairlETDSetElementmUcOTStringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEpairlETDSetElementmUcOTStringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEpairlETDSetElementmUcOTStringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<pair<TDSetElement*,TString> > : new list<pair<TDSetElement*,TString> >;
   }
   static void *newArray_listlEpairlETDSetElementmUcOTStringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<pair<TDSetElement*,TString> >[nElements] : new list<pair<TDSetElement*,TString> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEpairlETDSetElementmUcOTStringgRsPgR(void *p) {
      delete ((list<pair<TDSetElement*,TString> >*)p);
   }
   static void deleteArray_listlEpairlETDSetElementmUcOTStringgRsPgR(void *p) {
      delete [] ((list<pair<TDSetElement*,TString> >*)p);
   }
   static void destruct_listlEpairlETDSetElementmUcOTStringgRsPgR(void *p) {
      typedef list<pair<TDSetElement*,TString> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<pair<TDSetElement*,TString> >

namespace {
  void TriggerDictionaryInitialization_libProof_Impl() {
    static const char* headers[] = {
"TCondor.h",
"TDSet.h",
"TDSetProxy.h",
"TDataSetManager.h",
"TDataSetManagerFile.h",
"TLockPath.h",
"TPackMgr.h",
"TProof.h",
"TProofChain.h",
"TProofCondor.h",
"TProofDebug.h",
"TProofLite.h",
"TProofLog.h",
"TProofMgr.h",
"TProofMgrLite.h",
"TProofNodeInfo.h",
"TProofOutputFile.h",
"TProofOutputList.h",
"TProofProgressStatus.h",
"TProofQueryResult.h",
"TProofResources.h",
"TProofResourcesStatic.h",
"TProofServ.h",
"TProofServLite.h",
"TProofSuperMaster.h",
"TQueryResultManager.h",
"TSelVerifyDataSet.h",
"TSlave.h",
"TSlaveLite.h",
"TVirtualProofPlayer.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libProof dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(A TDSet element)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDSet.h")))  TDSetElement;
class __attribute__((annotate("$clingAutoload$TString.h")))  __attribute__((annotate("$clingAutoload$TCondor.h")))  TString;
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
class __attribute__((annotate(R"ATTRDUMP(Describes a claimed slave)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TCondor.h")))  TCondorSlave;
class __attribute__((annotate(R"ATTRDUMP(Interface to the Condor System)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TCondor.h")))  TCondor;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate(R"ATTRDUMP(Data set for remote processing (PROOF))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDSet.h")))  TDSet;
class __attribute__((annotate(R"ATTRDUMP(TDSet proxy for use on slaves)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDSetProxy.h")))  TDSetProxy;
class __attribute__((annotate(R"ATTRDUMP(Abstract data set manager class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDataSetManager.h")))  TDataSetManager;
class __attribute__((annotate(R"ATTRDUMP(DataSet manager for files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDataSetManagerFile.h")))  TDataSetManagerFile;
class __attribute__((annotate(R"ATTRDUMP(Path locking class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TLockPath.h")))  TLockPath;
class __attribute__((annotate(R"ATTRDUMP(Package manager interface)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPackMgr.h")))  TPackMgr;
class __attribute__((annotate(R"ATTRDUMP(Abstract PROOF manager interface)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofMgr.h")))  __attribute__((annotate("$clingAutoload$TProof.h")))  TProofMgr;
class __attribute__((annotate(R"ATTRDUMP(Small class describing a proof session)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofMgr.h")))  __attribute__((annotate("$clingAutoload$TProof.h")))  TProofDesc;
class __attribute__((annotate("$clingAutoload$TProofDebug.h")))  __attribute__((annotate("$clingAutoload$TProof.h")))  TProofDebug;
class __attribute__((annotate(R"ATTRDUMP(Output list specific TList derivation)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Output list specific TList derivation)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Output list specific TList derivation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofOutputList.h")))  __attribute__((annotate("$clingAutoload$TProof.h")))  TProofOutputList;
class __attribute__((annotate(R"ATTRDUMP(Progress information)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Progress information)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Progress information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProof.h")))  TProofProgressInfo;
class __attribute__((annotate(R"ATTRDUMP(basic info on workers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProof.h")))  TSlaveInfo;
class __attribute__((annotate(R"ATTRDUMP(Basic info on merger, i.e. worker serving as merger)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProof.h")))  TMergerInfo;
class __attribute__((annotate(R"ATTRDUMP(PROOF control class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProof.h")))  TProof;
class __attribute__((annotate(R"ATTRDUMP(TChain proxy for running chains on PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofChain.h")))  TProofChain;
class __attribute__((annotate(R"ATTRDUMP(PROOF control class for slaves allocated by condor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofCondor.h")))  TProofCondor;
class __attribute__((annotate(R"ATTRDUMP(PROOF-Lite control class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofLite.h")))  TProofLite;
class __attribute__((annotate(R"ATTRDUMP(PROOF session log handler)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofLog.h")))  TProofLog;
class __attribute__((annotate(R"ATTRDUMP(PROOF session log element)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofLog.h")))  TProofLogElem;
class __attribute__((annotate(R"ATTRDUMP(XrdProofd PROOF manager interface)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofMgrLite.h")))  TProofMgrLite;
class __attribute__((annotate(R"ATTRDUMP(Class describing a PROOF node)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofNodeInfo.h")))  TProofNodeInfo;
class __attribute__((annotate(R"ATTRDUMP(Wrapper class to steer the merging of files produced on workers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofOutputFile.h")))  TProofOutputFile;
class __attribute__((annotate(R"ATTRDUMP(Proof progress status class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofProgressStatus.h")))  TProofProgressStatus;
class __attribute__((annotate(R"ATTRDUMP(Class describing a PROOF query)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofQueryResult.h")))  TProofQueryResult;
class __attribute__((annotate(R"ATTRDUMP(Abstract class describing PROOF resources)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofResources.h")))  TProofResources;
class __attribute__((annotate(R"ATTRDUMP(Class to handle PROOF static config)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofResourcesStatic.h")))  TProofResourcesStatic;
class __attribute__((annotate(R"ATTRDUMP(PROOF Server Application Interface)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofServ.h")))  TProofServ;
class __attribute__((annotate(R"ATTRDUMP(PROOF-Lite Server Application Interface)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofServLite.h")))  TProofServLite;
class __attribute__((annotate(R"ATTRDUMP(PROOF control class for making submasters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofSuperMaster.h")))  TProofSuperMaster;
class __attribute__((annotate(R"ATTRDUMP(PROOF query result manager)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TQueryResultManager.h")))  TQueryResultManager;
class __attribute__((annotate(R"ATTRDUMP(PROOF selector for parallel dataset verification)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSelVerifyDataSet.h")))  TSelVerifyDataSet;
class __attribute__((annotate(R"ATTRDUMP(PROOF slave server)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSlave.h")))  TSlave;
class __attribute__((annotate(R"ATTRDUMP(PROOF lite worker server)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSlaveLite.h")))  TSlaveLite;
class __attribute__((annotate(R"ATTRDUMP(Abstract PROOF player)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualProofPlayer.h")))  TVirtualProofPlayer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libProof dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TCondor.h"
#include "TDSet.h"
#include "TDSetProxy.h"
#include "TDataSetManager.h"
#include "TDataSetManagerFile.h"
#include "TLockPath.h"
#include "TPackMgr.h"
#include "TProof.h"
#include "TProofChain.h"
#include "TProofCondor.h"
#include "TProofDebug.h"
#include "TProofLite.h"
#include "TProofLog.h"
#include "TProofMgr.h"
#include "TProofMgrLite.h"
#include "TProofNodeInfo.h"
#include "TProofOutputFile.h"
#include "TProofOutputList.h"
#include "TProofProgressStatus.h"
#include "TProofQueryResult.h"
#include "TProofResources.h"
#include "TProofResourcesStatic.h"
#include "TProofServ.h"
#include "TProofServLite.h"
#include "TProofSuperMaster.h"
#include "TQueryResultManager.h"
#include "TSelVerifyDataSet.h"
#include "TSlave.h"
#include "TSlaveLite.h"
#include "TVirtualProofPlayer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TCondor", payloadCode, "@",
"TCondorSlave", payloadCode, "@",
"TDSet", payloadCode, "@",
"TDSetElement", payloadCode, "@",
"TDSetProxy", payloadCode, "@",
"TDataSetManager", payloadCode, "@",
"TDataSetManagerFile", payloadCode, "@",
"TLockPath", payloadCode, "@",
"TMergerInfo", payloadCode, "@",
"TPackMgr", payloadCode, "@",
"TProof", payloadCode, "@",
"TProofChain", payloadCode, "@",
"TProofCondor", payloadCode, "@",
"TProofDebug", payloadCode, "@",
"TProofDesc", payloadCode, "@",
"TProofLite", payloadCode, "@",
"TProofLog", payloadCode, "@",
"TProofLogElem", payloadCode, "@",
"TProofMgr", payloadCode, "@",
"TProofMgrLite", payloadCode, "@",
"TProofNodeInfo", payloadCode, "@",
"TProofOutputFile", payloadCode, "@",
"TProofOutputList", payloadCode, "@",
"TProofProgressInfo", payloadCode, "@",
"TProofProgressStatus", payloadCode, "@",
"TProofQueryResult", payloadCode, "@",
"TProofResources", payloadCode, "@",
"TProofResourcesStatic", payloadCode, "@",
"TProofServ", payloadCode, "@",
"TProofServLite", payloadCode, "@",
"TProofSuperMaster", payloadCode, "@",
"TQueryResultManager", payloadCode, "@",
"TSelVerifyDataSet", payloadCode, "@",
"TSlave", payloadCode, "@",
"TSlaveInfo", payloadCode, "@",
"TSlaveLite", payloadCode, "@",
"TVirtualProofPlayer", payloadCode, "@",
"gProof", payloadCode, "@",
"gProofDebugLevel", payloadCode, "@",
"gProofDebugMask", payloadCode, "@",
"gProofServ", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libProof",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libProof_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libProof_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libProof() {
  TriggerDictionaryInitialization_libProof_Impl();
}
