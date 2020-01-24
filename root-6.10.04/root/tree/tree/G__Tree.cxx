// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Tree

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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"


// Header files passed as explicit arguments
#include "TBasket.h"
#include "TBasketSQL.h"
#include "TBranch.h"
#include "TBranchBrowsable.h"
#include "TBranchClones.h"
#include "TBranchElement.h"
#include "TBranchObject.h"
#include "TBranchRef.h"
#include "TBranchSTL.h"
#include "TBufferSQL.h"
#include "TChain.h"
#include "TChainElement.h"
#include "TCut.h"
#include "TEntryList.h"
#include "TEntryListArray.h"
#include "TEntryListBlock.h"
#include "TEntryListFromFile.h"
#include "TEventList.h"
#include "TFriendElement.h"
#include "TIndArray.h"
#include "TLeaf.h"
#include "TLeafB.h"
#include "TLeafC.h"
#include "TLeafD.h"
#include "TLeafElement.h"
#include "TLeafF.h"
#include "TLeafI.h"
#include "TLeafL.h"
#include "TLeafO.h"
#include "TLeafObject.h"
#include "TLeafS.h"
#include "TNtuple.h"
#include "TNtupleD.h"
#include "TQueryResult.h"
#include "TSelector.h"
#include "TSelectorCint.h"
#include "TSelectorList.h"
#include "TSelectorScalar.h"
#include "TTree.h"
#include "TTreeCache.h"
#include "TTreeCacheUnzip.h"
#include "TTreeCloner.h"
#include "TTreeResult.h"
#include "TTreeRow.h"
#include "TTreeSQL.h"
#include "TVirtualIndex.h"
#include "TVirtualTreePlayer.h"
#include "TreeUtils.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TBasket(void *p = 0);
   static void *newArray_TBasket(Long_t size, void *p);
   static void delete_TBasket(void *p);
   static void deleteArray_TBasket(void *p);
   static void destruct_TBasket(void *p);
   static void streamer_TBasket(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBasket*)
   {
      ::TBasket *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBasket >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBasket", ::TBasket::Class_Version(), "TBasket.h", 36,
                  typeid(::TBasket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBasket::Dictionary, isa_proxy, 17,
                  sizeof(::TBasket) );
      instance.SetNew(&new_TBasket);
      instance.SetNewArray(&newArray_TBasket);
      instance.SetDelete(&delete_TBasket);
      instance.SetDeleteArray(&deleteArray_TBasket);
      instance.SetDestructor(&destruct_TBasket);
      instance.SetStreamerFunc(&streamer_TBasket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBasket*)
   {
      return GenerateInitInstanceLocal((::TBasket*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBasket*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBasketSQL(void *p = 0);
   static void *newArray_TBasketSQL(Long_t size, void *p);
   static void delete_TBasketSQL(void *p);
   static void deleteArray_TBasketSQL(void *p);
   static void destruct_TBasketSQL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBasketSQL*)
   {
      ::TBasketSQL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBasketSQL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBasketSQL", ::TBasketSQL::Class_Version(), "TBasketSQL.h", 30,
                  typeid(::TBasketSQL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBasketSQL::Dictionary, isa_proxy, 4,
                  sizeof(::TBasketSQL) );
      instance.SetNew(&new_TBasketSQL);
      instance.SetNewArray(&newArray_TBasketSQL);
      instance.SetDelete(&delete_TBasketSQL);
      instance.SetDeleteArray(&deleteArray_TBasketSQL);
      instance.SetDestructor(&destruct_TBasketSQL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBasketSQL*)
   {
      return GenerateInitInstanceLocal((::TBasketSQL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBasketSQL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBranch(void *p = 0);
   static void *newArray_TBranch(Long_t size, void *p);
   static void delete_TBranch(void *p);
   static void deleteArray_TBranch(void *p);
   static void destruct_TBranch(void *p);
   static void streamer_TBranch(TBuffer &buf, void *obj);
   static void reset_TBranch(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBranch*)
   {
      ::TBranch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBranch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBranch", ::TBranch::Class_Version(), "TBranch.h", 57,
                  typeid(::TBranch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBranch::Dictionary, isa_proxy, 17,
                  sizeof(::TBranch) );
      instance.SetNew(&new_TBranch);
      instance.SetNewArray(&newArray_TBranch);
      instance.SetDelete(&delete_TBranch);
      instance.SetDeleteArray(&deleteArray_TBranch);
      instance.SetDestructor(&destruct_TBranch);
      instance.SetStreamerFunc(&streamer_TBranch);
      instance.SetResetAfterMerge(&reset_TBranch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBranch*)
   {
      return GenerateInitInstanceLocal((::TBranch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBranch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualBranchBrowsable(void *p);
   static void deleteArray_TVirtualBranchBrowsable(void *p);
   static void destruct_TVirtualBranchBrowsable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualBranchBrowsable*)
   {
      ::TVirtualBranchBrowsable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualBranchBrowsable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualBranchBrowsable", ::TVirtualBranchBrowsable::Class_Version(), "TBranchBrowsable.h", 29,
                  typeid(::TVirtualBranchBrowsable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualBranchBrowsable::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualBranchBrowsable) );
      instance.SetDelete(&delete_TVirtualBranchBrowsable);
      instance.SetDeleteArray(&deleteArray_TVirtualBranchBrowsable);
      instance.SetDestructor(&destruct_TVirtualBranchBrowsable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualBranchBrowsable*)
   {
      return GenerateInitInstanceLocal((::TVirtualBranchBrowsable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualBranchBrowsable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMethodBrowsable(void *p);
   static void deleteArray_TMethodBrowsable(void *p);
   static void destruct_TMethodBrowsable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMethodBrowsable*)
   {
      ::TMethodBrowsable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMethodBrowsable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMethodBrowsable", ::TMethodBrowsable::Class_Version(), "TBranchBrowsable.h", 99,
                  typeid(::TMethodBrowsable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMethodBrowsable::Dictionary, isa_proxy, 4,
                  sizeof(::TMethodBrowsable) );
      instance.SetDelete(&delete_TMethodBrowsable);
      instance.SetDeleteArray(&deleteArray_TMethodBrowsable);
      instance.SetDestructor(&destruct_TMethodBrowsable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMethodBrowsable*)
   {
      return GenerateInitInstanceLocal((::TMethodBrowsable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMethodBrowsable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TNonSplitBrowsable(void *p);
   static void deleteArray_TNonSplitBrowsable(void *p);
   static void destruct_TNonSplitBrowsable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNonSplitBrowsable*)
   {
      ::TNonSplitBrowsable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNonSplitBrowsable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNonSplitBrowsable", ::TNonSplitBrowsable::Class_Version(), "TBranchBrowsable.h", 124,
                  typeid(::TNonSplitBrowsable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNonSplitBrowsable::Dictionary, isa_proxy, 4,
                  sizeof(::TNonSplitBrowsable) );
      instance.SetDelete(&delete_TNonSplitBrowsable);
      instance.SetDeleteArray(&deleteArray_TNonSplitBrowsable);
      instance.SetDestructor(&destruct_TNonSplitBrowsable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNonSplitBrowsable*)
   {
      return GenerateInitInstanceLocal((::TNonSplitBrowsable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNonSplitBrowsable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCollectionPropertyBrowsable(void *p);
   static void deleteArray_TCollectionPropertyBrowsable(void *p);
   static void destruct_TCollectionPropertyBrowsable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionPropertyBrowsable*)
   {
      ::TCollectionPropertyBrowsable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCollectionPropertyBrowsable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionPropertyBrowsable", ::TCollectionPropertyBrowsable::Class_Version(), "TBranchBrowsable.h", 142,
                  typeid(::TCollectionPropertyBrowsable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCollectionPropertyBrowsable::Dictionary, isa_proxy, 4,
                  sizeof(::TCollectionPropertyBrowsable) );
      instance.SetDelete(&delete_TCollectionPropertyBrowsable);
      instance.SetDeleteArray(&deleteArray_TCollectionPropertyBrowsable);
      instance.SetDestructor(&destruct_TCollectionPropertyBrowsable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionPropertyBrowsable*)
   {
      return GenerateInitInstanceLocal((::TCollectionPropertyBrowsable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCollectionPropertyBrowsable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TCollectionMethodBrowsable(void *p);
   static void deleteArray_TCollectionMethodBrowsable(void *p);
   static void destruct_TCollectionMethodBrowsable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionMethodBrowsable*)
   {
      ::TCollectionMethodBrowsable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCollectionMethodBrowsable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionMethodBrowsable", ::TCollectionMethodBrowsable::Class_Version(), "TBranchBrowsable.h", 169,
                  typeid(::TCollectionMethodBrowsable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCollectionMethodBrowsable::Dictionary, isa_proxy, 4,
                  sizeof(::TCollectionMethodBrowsable) );
      instance.SetDelete(&delete_TCollectionMethodBrowsable);
      instance.SetDeleteArray(&deleteArray_TCollectionMethodBrowsable);
      instance.SetDestructor(&destruct_TCollectionMethodBrowsable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionMethodBrowsable*)
   {
      return GenerateInitInstanceLocal((::TCollectionMethodBrowsable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCollectionMethodBrowsable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBranchClones(void *p = 0);
   static void *newArray_TBranchClones(Long_t size, void *p);
   static void delete_TBranchClones(void *p);
   static void deleteArray_TBranchClones(void *p);
   static void destruct_TBranchClones(void *p);
   static void streamer_TBranchClones(TBuffer &buf, void *obj);
   static void reset_TBranchClones(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBranchClones*)
   {
      ::TBranchClones *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBranchClones >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBranchClones", ::TBranchClones::Class_Version(), "TBranchClones.h", 29,
                  typeid(::TBranchClones), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBranchClones::Dictionary, isa_proxy, 17,
                  sizeof(::TBranchClones) );
      instance.SetNew(&new_TBranchClones);
      instance.SetNewArray(&newArray_TBranchClones);
      instance.SetDelete(&delete_TBranchClones);
      instance.SetDeleteArray(&deleteArray_TBranchClones);
      instance.SetDestructor(&destruct_TBranchClones);
      instance.SetStreamerFunc(&streamer_TBranchClones);
      instance.SetResetAfterMerge(&reset_TBranchClones);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBranchClones*)
   {
      return GenerateInitInstanceLocal((::TBranchClones*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBranchClones*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualTreePlayer(void *p);
   static void deleteArray_TVirtualTreePlayer(void *p);
   static void destruct_TVirtualTreePlayer(void *p);
   static void streamer_TVirtualTreePlayer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualTreePlayer*)
   {
      ::TVirtualTreePlayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualTreePlayer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualTreePlayer", ::TVirtualTreePlayer::Class_Version(), "TVirtualTreePlayer.h", 38,
                  typeid(::TVirtualTreePlayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualTreePlayer::Dictionary, isa_proxy, 16,
                  sizeof(::TVirtualTreePlayer) );
      instance.SetDelete(&delete_TVirtualTreePlayer);
      instance.SetDeleteArray(&deleteArray_TVirtualTreePlayer);
      instance.SetDestructor(&destruct_TVirtualTreePlayer);
      instance.SetStreamerFunc(&streamer_TVirtualTreePlayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualTreePlayer*)
   {
      return GenerateInitInstanceLocal((::TVirtualTreePlayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualTreePlayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTree(void *p = 0);
   static void *newArray_TTree(Long_t size, void *p);
   static void delete_TTree(void *p);
   static void deleteArray_TTree(void *p);
   static void destruct_TTree(void *p);
   static void directoryAutoAdd_TTree(void *obj, TDirectory *dir);
   static void streamer_TTree(TBuffer &buf, void *obj);
   static Long64_t merge_TTree(void *obj, TCollection *coll,TFileMergeInfo *info);
   static void reset_TTree(void *obj, TFileMergeInfo *info);

   // Schema evolution read functions
   static void read_TTree_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("TTree");
      static Long_t offset_fDefaultEntryOffsetLen = cls->GetDataMemberOffset("fDefaultEntryOffsetLen");
      Int_t& fDefaultEntryOffsetLen = *(Int_t*)(target+offset_fDefaultEntryOffsetLen);
      TTree* newObj = (TTree*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
      fDefaultEntryOffsetLen = 1000; 
   }
   static void read_TTree_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("TTree");
      static Long_t offset_fNClusterRange = cls->GetDataMemberOffset("fNClusterRange");
      Int_t& fNClusterRange = *(Int_t*)(target+offset_fNClusterRange);
      TTree* newObj = (TTree*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
      fNClusterRange = 0; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTree*)
   {
      ::TTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTree", ::TTree::Class_Version(), "TTree.h", 78,
                  typeid(::TTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTree::Dictionary, isa_proxy, 17,
                  sizeof(::TTree) );
      instance.SetNew(&new_TTree);
      instance.SetNewArray(&newArray_TTree);
      instance.SetDelete(&delete_TTree);
      instance.SetDeleteArray(&deleteArray_TTree);
      instance.SetDestructor(&destruct_TTree);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TTree);
      instance.SetStreamerFunc(&streamer_TTree);
      instance.SetMerge(&merge_TTree);
      instance.SetResetAfterMerge(&reset_TTree);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(2);
      rule = &readrules[0];
      rule->fSourceClass = "TTree";
      rule->fTarget      = "fDefaultEntryOffsetLen";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_TTree_0);
      rule->fCode        = " fDefaultEntryOffsetLen = 1000; ";
      rule->fVersion     = "[-16]";
      rule = &readrules[1];
      rule->fSourceClass = "TTree";
      rule->fTarget      = "fNClusterRange";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_TTree_1);
      rule->fCode        = " fNClusterRange = 0; ";
      rule->fVersion     = "[-18]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTree*)
   {
      return GenerateInitInstanceLocal((::TTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTreeFriendLeafIter(void *p);
   static void deleteArray_TTreeFriendLeafIter(void *p);
   static void destruct_TTreeFriendLeafIter(void *p);
   static void streamer_TTreeFriendLeafIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeFriendLeafIter*)
   {
      ::TTreeFriendLeafIter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeFriendLeafIter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeFriendLeafIter", ::TTreeFriendLeafIter::Class_Version(), "TTree.h", 585,
                  typeid(::TTreeFriendLeafIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeFriendLeafIter::Dictionary, isa_proxy, 16,
                  sizeof(::TTreeFriendLeafIter) );
      instance.SetDelete(&delete_TTreeFriendLeafIter);
      instance.SetDeleteArray(&deleteArray_TTreeFriendLeafIter);
      instance.SetDestructor(&destruct_TTreeFriendLeafIter);
      instance.SetStreamerFunc(&streamer_TTreeFriendLeafIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeFriendLeafIter*)
   {
      return GenerateInitInstanceLocal((::TTreeFriendLeafIter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeFriendLeafIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBranchElement(void *p = 0);
   static void *newArray_TBranchElement(Long_t size, void *p);
   static void delete_TBranchElement(void *p);
   static void deleteArray_TBranchElement(void *p);
   static void destruct_TBranchElement(void *p);
   static void streamer_TBranchElement(TBuffer &buf, void *obj);
   static void reset_TBranchElement(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBranchElement*)
   {
      ::TBranchElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBranchElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBranchElement", ::TBranchElement::Class_Version(), "TBranchElement.h", 44,
                  typeid(::TBranchElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBranchElement::Dictionary, isa_proxy, 17,
                  sizeof(::TBranchElement) );
      instance.SetNew(&new_TBranchElement);
      instance.SetNewArray(&newArray_TBranchElement);
      instance.SetDelete(&delete_TBranchElement);
      instance.SetDeleteArray(&deleteArray_TBranchElement);
      instance.SetDestructor(&destruct_TBranchElement);
      instance.SetStreamerFunc(&streamer_TBranchElement);
      instance.SetResetAfterMerge(&reset_TBranchElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBranchElement*)
   {
      return GenerateInitInstanceLocal((::TBranchElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBranchElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBranchObject(void *p = 0);
   static void *newArray_TBranchObject(Long_t size, void *p);
   static void delete_TBranchObject(void *p);
   static void deleteArray_TBranchObject(void *p);
   static void destruct_TBranchObject(void *p);
   static void streamer_TBranchObject(TBuffer &buf, void *obj);
   static void reset_TBranchObject(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBranchObject*)
   {
      ::TBranchObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBranchObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBranchObject", ::TBranchObject::Class_Version(), "TBranchObject.h", 26,
                  typeid(::TBranchObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBranchObject::Dictionary, isa_proxy, 17,
                  sizeof(::TBranchObject) );
      instance.SetNew(&new_TBranchObject);
      instance.SetNewArray(&newArray_TBranchObject);
      instance.SetDelete(&delete_TBranchObject);
      instance.SetDeleteArray(&deleteArray_TBranchObject);
      instance.SetDestructor(&destruct_TBranchObject);
      instance.SetStreamerFunc(&streamer_TBranchObject);
      instance.SetResetAfterMerge(&reset_TBranchObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBranchObject*)
   {
      return GenerateInitInstanceLocal((::TBranchObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBranchObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBranchRef(void *p = 0);
   static void *newArray_TBranchRef(Long_t size, void *p);
   static void delete_TBranchRef(void *p);
   static void deleteArray_TBranchRef(void *p);
   static void destruct_TBranchRef(void *p);
   static void reset_TBranchRef(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBranchRef*)
   {
      ::TBranchRef *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBranchRef >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBranchRef", ::TBranchRef::Class_Version(), "TBranchRef.h", 29,
                  typeid(::TBranchRef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBranchRef::Dictionary, isa_proxy, 4,
                  sizeof(::TBranchRef) );
      instance.SetNew(&new_TBranchRef);
      instance.SetNewArray(&newArray_TBranchRef);
      instance.SetDelete(&delete_TBranchRef);
      instance.SetDeleteArray(&deleteArray_TBranchRef);
      instance.SetDestructor(&destruct_TBranchRef);
      instance.SetResetAfterMerge(&reset_TBranchRef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBranchRef*)
   {
      return GenerateInitInstanceLocal((::TBranchRef*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBranchRef*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TIndArray_Dictionary();
   static void TIndArray_TClassManip(TClass*);
   static void *new_TIndArray(void *p = 0);
   static void *newArray_TIndArray(Long_t size, void *p);
   static void delete_TIndArray(void *p);
   static void deleteArray_TIndArray(void *p);
   static void destruct_TIndArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TIndArray*)
   {
      ::TIndArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TIndArray));
      static ::ROOT::TGenericClassInfo 
         instance("TIndArray", "TIndArray.h", 14,
                  typeid(::TIndArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TIndArray_Dictionary, isa_proxy, 4,
                  sizeof(::TIndArray) );
      instance.SetNew(&new_TIndArray);
      instance.SetNewArray(&newArray_TIndArray);
      instance.SetDelete(&delete_TIndArray);
      instance.SetDeleteArray(&deleteArray_TIndArray);
      instance.SetDestructor(&destruct_TIndArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TIndArray*)
   {
      return GenerateInitInstanceLocal((::TIndArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TIndArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TIndArray_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TIndArray*)0x0)->GetClass();
      TIndArray_TClassManip(theClass);
   return theClass;
   }

   static void TIndArray_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TBranchSTL(void *p = 0);
   static void *newArray_TBranchSTL(Long_t size, void *p);
   static void delete_TBranchSTL(void *p);
   static void deleteArray_TBranchSTL(void *p);
   static void destruct_TBranchSTL(void *p);
   static void reset_TBranchSTL(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBranchSTL*)
   {
      ::TBranchSTL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBranchSTL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBranchSTL", ::TBranchSTL::Class_Version(), "TBranchSTL.h", 22,
                  typeid(::TBranchSTL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBranchSTL::Dictionary, isa_proxy, 4,
                  sizeof(::TBranchSTL) );
      instance.SetNew(&new_TBranchSTL);
      instance.SetNewArray(&newArray_TBranchSTL);
      instance.SetDelete(&delete_TBranchSTL);
      instance.SetDeleteArray(&deleteArray_TBranchSTL);
      instance.SetDestructor(&destruct_TBranchSTL);
      instance.SetResetAfterMerge(&reset_TBranchSTL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBranchSTL*)
   {
      return GenerateInitInstanceLocal((::TBranchSTL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBranchSTL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBufferSQL(void *p = 0);
   static void *newArray_TBufferSQL(Long_t size, void *p);
   static void delete_TBufferSQL(void *p);
   static void deleteArray_TBufferSQL(void *p);
   static void destruct_TBufferSQL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBufferSQL*)
   {
      ::TBufferSQL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBufferSQL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBufferSQL", ::TBufferSQL::Class_Version(), "TBufferSQL.h", 30,
                  typeid(::TBufferSQL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBufferSQL::Dictionary, isa_proxy, 4,
                  sizeof(::TBufferSQL) );
      instance.SetNew(&new_TBufferSQL);
      instance.SetNewArray(&newArray_TBufferSQL);
      instance.SetDelete(&delete_TBufferSQL);
      instance.SetDeleteArray(&deleteArray_TBufferSQL);
      instance.SetDestructor(&destruct_TBufferSQL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBufferSQL*)
   {
      return GenerateInitInstanceLocal((::TBufferSQL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBufferSQL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TChain(void *p = 0);
   static void *newArray_TChain(Long_t size, void *p);
   static void delete_TChain(void *p);
   static void deleteArray_TChain(void *p);
   static void destruct_TChain(void *p);
   static void directoryAutoAdd_TChain(void *obj, TDirectory *dir);
   static void streamer_TChain(TBuffer &buf, void *obj);
   static Long64_t merge_TChain(void *obj, TCollection *coll,TFileMergeInfo *info);
   static void reset_TChain(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TChain*)
   {
      ::TChain *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TChain >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TChain", ::TChain::Class_Version(), "TChain.h", 33,
                  typeid(::TChain), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TChain::Dictionary, isa_proxy, 17,
                  sizeof(::TChain) );
      instance.SetNew(&new_TChain);
      instance.SetNewArray(&newArray_TChain);
      instance.SetDelete(&delete_TChain);
      instance.SetDeleteArray(&deleteArray_TChain);
      instance.SetDestructor(&destruct_TChain);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TChain);
      instance.SetStreamerFunc(&streamer_TChain);
      instance.SetMerge(&merge_TChain);
      instance.SetResetAfterMerge(&reset_TChain);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TChain*)
   {
      return GenerateInitInstanceLocal((::TChain*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TChain*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TChainElement(void *p = 0);
   static void *newArray_TChainElement(Long_t size, void *p);
   static void delete_TChainElement(void *p);
   static void deleteArray_TChainElement(void *p);
   static void destruct_TChainElement(void *p);
   static void streamer_TChainElement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TChainElement*)
   {
      ::TChainElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TChainElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TChainElement", ::TChainElement::Class_Version(), "TChainElement.h", 28,
                  typeid(::TChainElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TChainElement::Dictionary, isa_proxy, 16,
                  sizeof(::TChainElement) );
      instance.SetNew(&new_TChainElement);
      instance.SetNewArray(&newArray_TChainElement);
      instance.SetDelete(&delete_TChainElement);
      instance.SetDeleteArray(&deleteArray_TChainElement);
      instance.SetDestructor(&destruct_TChainElement);
      instance.SetStreamerFunc(&streamer_TChainElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TChainElement*)
   {
      return GenerateInitInstanceLocal((::TChainElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TChainElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCut(void *p = 0);
   static void *newArray_TCut(Long_t size, void *p);
   static void delete_TCut(void *p);
   static void deleteArray_TCut(void *p);
   static void destruct_TCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCut*)
   {
      ::TCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCut", ::TCut::Class_Version(), "TCut.h", 25,
                  typeid(::TCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCut::Dictionary, isa_proxy, 4,
                  sizeof(::TCut) );
      instance.SetNew(&new_TCut);
      instance.SetNewArray(&newArray_TCut);
      instance.SetDelete(&delete_TCut);
      instance.SetDeleteArray(&deleteArray_TCut);
      instance.SetDestructor(&destruct_TCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCut*)
   {
      return GenerateInitInstanceLocal((::TCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEntryList(void *p = 0);
   static void *newArray_TEntryList(Long_t size, void *p);
   static void delete_TEntryList(void *p);
   static void deleteArray_TEntryList(void *p);
   static void destruct_TEntryList(void *p);
   static void directoryAutoAdd_TEntryList(void *obj, TDirectory *dir);
   static void streamer_TEntryList(TBuffer &buf, void *obj);
   static Long64_t merge_TEntryList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEntryList*)
   {
      ::TEntryList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEntryList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEntryList", ::TEntryList::Class_Version(), "TEntryList.h", 25,
                  typeid(::TEntryList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEntryList::Dictionary, isa_proxy, 17,
                  sizeof(::TEntryList) );
      instance.SetNew(&new_TEntryList);
      instance.SetNewArray(&newArray_TEntryList);
      instance.SetDelete(&delete_TEntryList);
      instance.SetDeleteArray(&deleteArray_TEntryList);
      instance.SetDestructor(&destruct_TEntryList);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TEntryList);
      instance.SetStreamerFunc(&streamer_TEntryList);
      instance.SetMerge(&merge_TEntryList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEntryList*)
   {
      return GenerateInitInstanceLocal((::TEntryList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEntryList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEntryListArray(void *p = 0);
   static void *newArray_TEntryListArray(Long_t size, void *p);
   static void delete_TEntryListArray(void *p);
   static void deleteArray_TEntryListArray(void *p);
   static void destruct_TEntryListArray(void *p);
   static void directoryAutoAdd_TEntryListArray(void *obj, TDirectory *dir);
   static Long64_t merge_TEntryListArray(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEntryListArray*)
   {
      ::TEntryListArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEntryListArray >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEntryListArray", ::TEntryListArray::Class_Version(), "TEntryListArray.h", 26,
                  typeid(::TEntryListArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEntryListArray::Dictionary, isa_proxy, 4,
                  sizeof(::TEntryListArray) );
      instance.SetNew(&new_TEntryListArray);
      instance.SetNewArray(&newArray_TEntryListArray);
      instance.SetDelete(&delete_TEntryListArray);
      instance.SetDeleteArray(&deleteArray_TEntryListArray);
      instance.SetDestructor(&destruct_TEntryListArray);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TEntryListArray);
      instance.SetMerge(&merge_TEntryListArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEntryListArray*)
   {
      return GenerateInitInstanceLocal((::TEntryListArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEntryListArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEntryListBlock(void *p = 0);
   static void *newArray_TEntryListBlock(Long_t size, void *p);
   static void delete_TEntryListBlock(void *p);
   static void deleteArray_TEntryListBlock(void *p);
   static void destruct_TEntryListBlock(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEntryListBlock*)
   {
      ::TEntryListBlock *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEntryListBlock >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEntryListBlock", ::TEntryListBlock::Class_Version(), "TEntryListBlock.h", 43,
                  typeid(::TEntryListBlock), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEntryListBlock::Dictionary, isa_proxy, 4,
                  sizeof(::TEntryListBlock) );
      instance.SetNew(&new_TEntryListBlock);
      instance.SetNewArray(&newArray_TEntryListBlock);
      instance.SetDelete(&delete_TEntryListBlock);
      instance.SetDeleteArray(&deleteArray_TEntryListBlock);
      instance.SetDestructor(&destruct_TEntryListBlock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEntryListBlock*)
   {
      return GenerateInitInstanceLocal((::TEntryListBlock*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEntryListBlock*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEntryListFromFile(void *p = 0);
   static void *newArray_TEntryListFromFile(Long_t size, void *p);
   static void delete_TEntryListFromFile(void *p);
   static void deleteArray_TEntryListFromFile(void *p);
   static void destruct_TEntryListFromFile(void *p);
   static void directoryAutoAdd_TEntryListFromFile(void *obj, TDirectory *dir);
   static Long64_t merge_TEntryListFromFile(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEntryListFromFile*)
   {
      ::TEntryListFromFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEntryListFromFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEntryListFromFile", ::TEntryListFromFile::Class_Version(), "TEntryListFromFile.h", 40,
                  typeid(::TEntryListFromFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEntryListFromFile::Dictionary, isa_proxy, 4,
                  sizeof(::TEntryListFromFile) );
      instance.SetNew(&new_TEntryListFromFile);
      instance.SetNewArray(&newArray_TEntryListFromFile);
      instance.SetDelete(&delete_TEntryListFromFile);
      instance.SetDeleteArray(&deleteArray_TEntryListFromFile);
      instance.SetDestructor(&destruct_TEntryListFromFile);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TEntryListFromFile);
      instance.SetMerge(&merge_TEntryListFromFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEntryListFromFile*)
   {
      return GenerateInitInstanceLocal((::TEntryListFromFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEntryListFromFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEventList(void *p = 0);
   static void *newArray_TEventList(Long_t size, void *p);
   static void delete_TEventList(void *p);
   static void deleteArray_TEventList(void *p);
   static void destruct_TEventList(void *p);
   static void directoryAutoAdd_TEventList(void *obj, TDirectory *dir);
   static void streamer_TEventList(TBuffer &buf, void *obj);
   static Long64_t merge_TEventList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEventList*)
   {
      ::TEventList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEventList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEventList", ::TEventList::Class_Version(), "TEventList.h", 31,
                  typeid(::TEventList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEventList::Dictionary, isa_proxy, 17,
                  sizeof(::TEventList) );
      instance.SetNew(&new_TEventList);
      instance.SetNewArray(&newArray_TEventList);
      instance.SetDelete(&delete_TEventList);
      instance.SetDeleteArray(&deleteArray_TEventList);
      instance.SetDestructor(&destruct_TEventList);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TEventList);
      instance.SetStreamerFunc(&streamer_TEventList);
      instance.SetMerge(&merge_TEventList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEventList*)
   {
      return GenerateInitInstanceLocal((::TEventList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEventList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFriendElement(void *p = 0);
   static void *newArray_TFriendElement(Long_t size, void *p);
   static void delete_TFriendElement(void *p);
   static void deleteArray_TFriendElement(void *p);
   static void destruct_TFriendElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFriendElement*)
   {
      ::TFriendElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFriendElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFriendElement", ::TFriendElement::Class_Version(), "TFriendElement.h", 33,
                  typeid(::TFriendElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFriendElement::Dictionary, isa_proxy, 4,
                  sizeof(::TFriendElement) );
      instance.SetNew(&new_TFriendElement);
      instance.SetNewArray(&newArray_TFriendElement);
      instance.SetDelete(&delete_TFriendElement);
      instance.SetDeleteArray(&deleteArray_TFriendElement);
      instance.SetDestructor(&destruct_TFriendElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFriendElement*)
   {
      return GenerateInitInstanceLocal((::TFriendElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFriendElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeaf(void *p = 0);
   static void *newArray_TLeaf(Long_t size, void *p);
   static void delete_TLeaf(void *p);
   static void deleteArray_TLeaf(void *p);
   static void destruct_TLeaf(void *p);
   static void streamer_TLeaf(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeaf*)
   {
      ::TLeaf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeaf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeaf", ::TLeaf::Class_Version(), "TLeaf.h", 32,
                  typeid(::TLeaf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeaf::Dictionary, isa_proxy, 17,
                  sizeof(::TLeaf) );
      instance.SetNew(&new_TLeaf);
      instance.SetNewArray(&newArray_TLeaf);
      instance.SetDelete(&delete_TLeaf);
      instance.SetDeleteArray(&deleteArray_TLeaf);
      instance.SetDestructor(&destruct_TLeaf);
      instance.SetStreamerFunc(&streamer_TLeaf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeaf*)
   {
      return GenerateInitInstanceLocal((::TLeaf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeaf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafB(void *p = 0);
   static void *newArray_TLeafB(Long_t size, void *p);
   static void delete_TLeafB(void *p);
   static void deleteArray_TLeafB(void *p);
   static void destruct_TLeafB(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafB*)
   {
      ::TLeafB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafB", ::TLeafB::Class_Version(), "TLeafB.h", 26,
                  typeid(::TLeafB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafB::Dictionary, isa_proxy, 4,
                  sizeof(::TLeafB) );
      instance.SetNew(&new_TLeafB);
      instance.SetNewArray(&newArray_TLeafB);
      instance.SetDelete(&delete_TLeafB);
      instance.SetDeleteArray(&deleteArray_TLeafB);
      instance.SetDestructor(&destruct_TLeafB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafB*)
   {
      return GenerateInitInstanceLocal((::TLeafB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafB*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafC(void *p = 0);
   static void *newArray_TLeafC(Long_t size, void *p);
   static void delete_TLeafC(void *p);
   static void deleteArray_TLeafC(void *p);
   static void destruct_TLeafC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafC*)
   {
      ::TLeafC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafC", ::TLeafC::Class_Version(), "TLeafC.h", 26,
                  typeid(::TLeafC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafC::Dictionary, isa_proxy, 4,
                  sizeof(::TLeafC) );
      instance.SetNew(&new_TLeafC);
      instance.SetNewArray(&newArray_TLeafC);
      instance.SetDelete(&delete_TLeafC);
      instance.SetDeleteArray(&deleteArray_TLeafC);
      instance.SetDestructor(&destruct_TLeafC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafC*)
   {
      return GenerateInitInstanceLocal((::TLeafC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafD(void *p = 0);
   static void *newArray_TLeafD(Long_t size, void *p);
   static void delete_TLeafD(void *p);
   static void deleteArray_TLeafD(void *p);
   static void destruct_TLeafD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafD*)
   {
      ::TLeafD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafD", ::TLeafD::Class_Version(), "TLeafD.h", 26,
                  typeid(::TLeafD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafD::Dictionary, isa_proxy, 4,
                  sizeof(::TLeafD) );
      instance.SetNew(&new_TLeafD);
      instance.SetNewArray(&newArray_TLeafD);
      instance.SetDelete(&delete_TLeafD);
      instance.SetDeleteArray(&deleteArray_TLeafD);
      instance.SetDestructor(&destruct_TLeafD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafD*)
   {
      return GenerateInitInstanceLocal((::TLeafD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafElement(void *p = 0);
   static void *newArray_TLeafElement(Long_t size, void *p);
   static void delete_TLeafElement(void *p);
   static void deleteArray_TLeafElement(void *p);
   static void destruct_TLeafElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafElement*)
   {
      ::TLeafElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafElement", ::TLeafElement::Class_Version(), "TLeafElement.h", 30,
                  typeid(::TLeafElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafElement::Dictionary, isa_proxy, 4,
                  sizeof(::TLeafElement) );
      instance.SetNew(&new_TLeafElement);
      instance.SetNewArray(&newArray_TLeafElement);
      instance.SetDelete(&delete_TLeafElement);
      instance.SetDeleteArray(&deleteArray_TLeafElement);
      instance.SetDestructor(&destruct_TLeafElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafElement*)
   {
      return GenerateInitInstanceLocal((::TLeafElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafF(void *p = 0);
   static void *newArray_TLeafF(Long_t size, void *p);
   static void delete_TLeafF(void *p);
   static void deleteArray_TLeafF(void *p);
   static void destruct_TLeafF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafF*)
   {
      ::TLeafF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafF", ::TLeafF::Class_Version(), "TLeafF.h", 26,
                  typeid(::TLeafF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafF::Dictionary, isa_proxy, 4,
                  sizeof(::TLeafF) );
      instance.SetNew(&new_TLeafF);
      instance.SetNewArray(&newArray_TLeafF);
      instance.SetDelete(&delete_TLeafF);
      instance.SetDeleteArray(&deleteArray_TLeafF);
      instance.SetDestructor(&destruct_TLeafF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafF*)
   {
      return GenerateInitInstanceLocal((::TLeafF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafI(void *p = 0);
   static void *newArray_TLeafI(Long_t size, void *p);
   static void delete_TLeafI(void *p);
   static void deleteArray_TLeafI(void *p);
   static void destruct_TLeafI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafI*)
   {
      ::TLeafI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafI", ::TLeafI::Class_Version(), "TLeafI.h", 27,
                  typeid(::TLeafI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafI::Dictionary, isa_proxy, 4,
                  sizeof(::TLeafI) );
      instance.SetNew(&new_TLeafI);
      instance.SetNewArray(&newArray_TLeafI);
      instance.SetDelete(&delete_TLeafI);
      instance.SetDeleteArray(&deleteArray_TLeafI);
      instance.SetDestructor(&destruct_TLeafI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafI*)
   {
      return GenerateInitInstanceLocal((::TLeafI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafL(void *p = 0);
   static void *newArray_TLeafL(Long_t size, void *p);
   static void delete_TLeafL(void *p);
   static void deleteArray_TLeafL(void *p);
   static void destruct_TLeafL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafL*)
   {
      ::TLeafL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafL", ::TLeafL::Class_Version(), "TLeafL.h", 27,
                  typeid(::TLeafL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafL::Dictionary, isa_proxy, 4,
                  sizeof(::TLeafL) );
      instance.SetNew(&new_TLeafL);
      instance.SetNewArray(&newArray_TLeafL);
      instance.SetDelete(&delete_TLeafL);
      instance.SetDeleteArray(&deleteArray_TLeafL);
      instance.SetDestructor(&destruct_TLeafL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafL*)
   {
      return GenerateInitInstanceLocal((::TLeafL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafO(void *p = 0);
   static void *newArray_TLeafO(Long_t size, void *p);
   static void delete_TLeafO(void *p);
   static void deleteArray_TLeafO(void *p);
   static void destruct_TLeafO(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafO*)
   {
      ::TLeafO *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafO >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafO", ::TLeafO::Class_Version(), "TLeafO.h", 26,
                  typeid(::TLeafO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafO::Dictionary, isa_proxy, 4,
                  sizeof(::TLeafO) );
      instance.SetNew(&new_TLeafO);
      instance.SetNewArray(&newArray_TLeafO);
      instance.SetDelete(&delete_TLeafO);
      instance.SetDeleteArray(&deleteArray_TLeafO);
      instance.SetDestructor(&destruct_TLeafO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafO*)
   {
      return GenerateInitInstanceLocal((::TLeafO*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafO*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafObject(void *p = 0);
   static void *newArray_TLeafObject(Long_t size, void *p);
   static void delete_TLeafObject(void *p);
   static void deleteArray_TLeafObject(void *p);
   static void destruct_TLeafObject(void *p);
   static void streamer_TLeafObject(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafObject*)
   {
      ::TLeafObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafObject", ::TLeafObject::Class_Version(), "TLeafObject.h", 31,
                  typeid(::TLeafObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafObject::Dictionary, isa_proxy, 17,
                  sizeof(::TLeafObject) );
      instance.SetNew(&new_TLeafObject);
      instance.SetNewArray(&newArray_TLeafObject);
      instance.SetDelete(&delete_TLeafObject);
      instance.SetDeleteArray(&deleteArray_TLeafObject);
      instance.SetDestructor(&destruct_TLeafObject);
      instance.SetStreamerFunc(&streamer_TLeafObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafObject*)
   {
      return GenerateInitInstanceLocal((::TLeafObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLeafS(void *p = 0);
   static void *newArray_TLeafS(Long_t size, void *p);
   static void delete_TLeafS(void *p);
   static void deleteArray_TLeafS(void *p);
   static void destruct_TLeafS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLeafS*)
   {
      ::TLeafS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLeafS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLeafS", ::TLeafS::Class_Version(), "TLeafS.h", 26,
                  typeid(::TLeafS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLeafS::Dictionary, isa_proxy, 4,
                  sizeof(::TLeafS) );
      instance.SetNew(&new_TLeafS);
      instance.SetNewArray(&newArray_TLeafS);
      instance.SetDelete(&delete_TLeafS);
      instance.SetDeleteArray(&deleteArray_TLeafS);
      instance.SetDestructor(&destruct_TLeafS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLeafS*)
   {
      return GenerateInitInstanceLocal((::TLeafS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLeafS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNtuple(void *p = 0);
   static void *newArray_TNtuple(Long_t size, void *p);
   static void delete_TNtuple(void *p);
   static void deleteArray_TNtuple(void *p);
   static void destruct_TNtuple(void *p);
   static void directoryAutoAdd_TNtuple(void *obj, TDirectory *dir);
   static void streamer_TNtuple(TBuffer &buf, void *obj);
   static Long64_t merge_TNtuple(void *obj, TCollection *coll,TFileMergeInfo *info);
   static void reset_TNtuple(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNtuple*)
   {
      ::TNtuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNtuple >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNtuple", ::TNtuple::Class_Version(), "TNtuple.h", 28,
                  typeid(::TNtuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNtuple::Dictionary, isa_proxy, 17,
                  sizeof(::TNtuple) );
      instance.SetNew(&new_TNtuple);
      instance.SetNewArray(&newArray_TNtuple);
      instance.SetDelete(&delete_TNtuple);
      instance.SetDeleteArray(&deleteArray_TNtuple);
      instance.SetDestructor(&destruct_TNtuple);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TNtuple);
      instance.SetStreamerFunc(&streamer_TNtuple);
      instance.SetMerge(&merge_TNtuple);
      instance.SetResetAfterMerge(&reset_TNtuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNtuple*)
   {
      return GenerateInitInstanceLocal((::TNtuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNtuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNtupleD(void *p = 0);
   static void *newArray_TNtupleD(Long_t size, void *p);
   static void delete_TNtupleD(void *p);
   static void deleteArray_TNtupleD(void *p);
   static void destruct_TNtupleD(void *p);
   static void directoryAutoAdd_TNtupleD(void *obj, TDirectory *dir);
   static void streamer_TNtupleD(TBuffer &buf, void *obj);
   static Long64_t merge_TNtupleD(void *obj, TCollection *coll,TFileMergeInfo *info);
   static void reset_TNtupleD(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNtupleD*)
   {
      ::TNtupleD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNtupleD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNtupleD", ::TNtupleD::Class_Version(), "TNtupleD.h", 28,
                  typeid(::TNtupleD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNtupleD::Dictionary, isa_proxy, 17,
                  sizeof(::TNtupleD) );
      instance.SetNew(&new_TNtupleD);
      instance.SetNewArray(&newArray_TNtupleD);
      instance.SetDelete(&delete_TNtupleD);
      instance.SetDeleteArray(&deleteArray_TNtupleD);
      instance.SetDestructor(&destruct_TNtupleD);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TNtupleD);
      instance.SetStreamerFunc(&streamer_TNtupleD);
      instance.SetMerge(&merge_TNtupleD);
      instance.SetResetAfterMerge(&reset_TNtupleD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNtupleD*)
   {
      return GenerateInitInstanceLocal((::TNtupleD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNtupleD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TQueryResult(void *p = 0);
   static void *newArray_TQueryResult(Long_t size, void *p);
   static void delete_TQueryResult(void *p);
   static void deleteArray_TQueryResult(void *p);
   static void destruct_TQueryResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TQueryResult*)
   {
      ::TQueryResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TQueryResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TQueryResult", ::TQueryResult::Class_Version(), "TQueryResult.h", 36,
                  typeid(::TQueryResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TQueryResult::Dictionary, isa_proxy, 4,
                  sizeof(::TQueryResult) );
      instance.SetNew(&new_TQueryResult);
      instance.SetNewArray(&newArray_TQueryResult);
      instance.SetDelete(&delete_TQueryResult);
      instance.SetDeleteArray(&deleteArray_TQueryResult);
      instance.SetDestructor(&destruct_TQueryResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TQueryResult*)
   {
      return GenerateInitInstanceLocal((::TQueryResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TQueryResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSelectorList(void *p = 0);
   static void *newArray_TSelectorList(Long_t size, void *p);
   static void delete_TSelectorList(void *p);
   static void deleteArray_TSelectorList(void *p);
   static void destruct_TSelectorList(void *p);
   static Long64_t merge_TSelectorList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSelectorList*)
   {
      ::TSelectorList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSelectorList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSelectorList", ::TSelectorList::Class_Version(), "TSelectorList.h", 31,
                  typeid(::TSelectorList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSelectorList::Dictionary, isa_proxy, 4,
                  sizeof(::TSelectorList) );
      instance.SetNew(&new_TSelectorList);
      instance.SetNewArray(&newArray_TSelectorList);
      instance.SetDelete(&delete_TSelectorList);
      instance.SetDeleteArray(&deleteArray_TSelectorList);
      instance.SetDestructor(&destruct_TSelectorList);
      instance.SetMerge(&merge_TSelectorList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSelectorList*)
   {
      return GenerateInitInstanceLocal((::TSelectorList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSelectorList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSelector(void *p = 0);
   static void *newArray_TSelector(Long_t size, void *p);
   static void delete_TSelector(void *p);
   static void deleteArray_TSelector(void *p);
   static void destruct_TSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSelector*)
   {
      ::TSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSelector", ::TSelector::Class_Version(), "TSelector.h", 33,
                  typeid(::TSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSelector::Dictionary, isa_proxy, 4,
                  sizeof(::TSelector) );
      instance.SetNew(&new_TSelector);
      instance.SetNewArray(&newArray_TSelector);
      instance.SetDelete(&delete_TSelector);
      instance.SetDeleteArray(&deleteArray_TSelector);
      instance.SetDestructor(&destruct_TSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSelector*)
   {
      return GenerateInitInstanceLocal((::TSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSelectorCint(void *p = 0);
   static void *newArray_TSelectorCint(Long_t size, void *p);
   static void delete_TSelectorCint(void *p);
   static void deleteArray_TSelectorCint(void *p);
   static void destruct_TSelectorCint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSelectorCint*)
   {
      ::TSelectorCint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSelectorCint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSelectorCint", ::TSelectorCint::Class_Version(), "TSelectorCint.h", 31,
                  typeid(::TSelectorCint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSelectorCint::Dictionary, isa_proxy, 4,
                  sizeof(::TSelectorCint) );
      instance.SetNew(&new_TSelectorCint);
      instance.SetNewArray(&newArray_TSelectorCint);
      instance.SetDelete(&delete_TSelectorCint);
      instance.SetDeleteArray(&deleteArray_TSelectorCint);
      instance.SetDestructor(&destruct_TSelectorCint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSelectorCint*)
   {
      return GenerateInitInstanceLocal((::TSelectorCint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSelectorCint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSelectorScalar(void *p = 0);
   static void *newArray_TSelectorScalar(Long_t size, void *p);
   static void delete_TSelectorScalar(void *p);
   static void deleteArray_TSelectorScalar(void *p);
   static void destruct_TSelectorScalar(void *p);
   static Long64_t merge_TSelectorScalar(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSelectorScalar*)
   {
      ::TSelectorScalar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSelectorScalar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSelectorScalar", ::TSelectorScalar::Class_Version(), "TSelectorScalar.h", 35,
                  typeid(::TSelectorScalar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSelectorScalar::Dictionary, isa_proxy, 4,
                  sizeof(::TSelectorScalar) );
      instance.SetNew(&new_TSelectorScalar);
      instance.SetNewArray(&newArray_TSelectorScalar);
      instance.SetDelete(&delete_TSelectorScalar);
      instance.SetDeleteArray(&deleteArray_TSelectorScalar);
      instance.SetDestructor(&destruct_TSelectorScalar);
      instance.SetMerge(&merge_TSelectorScalar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSelectorScalar*)
   {
      return GenerateInitInstanceLocal((::TSelectorScalar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSelectorScalar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeCache(void *p = 0);
   static void *newArray_TTreeCache(Long_t size, void *p);
   static void delete_TTreeCache(void *p);
   static void deleteArray_TTreeCache(void *p);
   static void destruct_TTreeCache(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeCache*)
   {
      ::TTreeCache *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeCache >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeCache", ::TTreeCache::Class_Version(), "TTreeCache.h", 30,
                  typeid(::TTreeCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeCache::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeCache) );
      instance.SetNew(&new_TTreeCache);
      instance.SetNewArray(&newArray_TTreeCache);
      instance.SetDelete(&delete_TTreeCache);
      instance.SetDeleteArray(&deleteArray_TTreeCache);
      instance.SetDestructor(&destruct_TTreeCache);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeCache*)
   {
      return GenerateInitInstanceLocal((::TTreeCache*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeCache*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeCacheUnzip(void *p = 0);
   static void *newArray_TTreeCacheUnzip(Long_t size, void *p);
   static void delete_TTreeCacheUnzip(void *p);
   static void deleteArray_TTreeCacheUnzip(void *p);
   static void destruct_TTreeCacheUnzip(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeCacheUnzip*)
   {
      ::TTreeCacheUnzip *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeCacheUnzip >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeCacheUnzip", ::TTreeCacheUnzip::Class_Version(), "TTreeCacheUnzip.h", 39,
                  typeid(::TTreeCacheUnzip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeCacheUnzip::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeCacheUnzip) );
      instance.SetNew(&new_TTreeCacheUnzip);
      instance.SetNewArray(&newArray_TTreeCacheUnzip);
      instance.SetDelete(&delete_TTreeCacheUnzip);
      instance.SetDeleteArray(&deleteArray_TTreeCacheUnzip);
      instance.SetDestructor(&destruct_TTreeCacheUnzip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeCacheUnzip*)
   {
      return GenerateInitInstanceLocal((::TTreeCacheUnzip*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeCacheUnzip*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTreeCloner(void *p);
   static void deleteArray_TTreeCloner(void *p);
   static void destruct_TTreeCloner(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeCloner*)
   {
      ::TTreeCloner *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeCloner >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeCloner", ::TTreeCloner::Class_Version(), "TTreeCloner.h", 38,
                  typeid(::TTreeCloner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeCloner::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeCloner) );
      instance.SetDelete(&delete_TTreeCloner);
      instance.SetDeleteArray(&deleteArray_TTreeCloner);
      instance.SetDestructor(&destruct_TTreeCloner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeCloner*)
   {
      return GenerateInitInstanceLocal((::TTreeCloner*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeCloner*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeResult(void *p = 0);
   static void *newArray_TTreeResult(Long_t size, void *p);
   static void delete_TTreeResult(void *p);
   static void deleteArray_TTreeResult(void *p);
   static void destruct_TTreeResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeResult*)
   {
      ::TTreeResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeResult", ::TTreeResult::Class_Version(), "TTreeResult.h", 34,
                  typeid(::TTreeResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeResult::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeResult) );
      instance.SetNew(&new_TTreeResult);
      instance.SetNewArray(&newArray_TTreeResult);
      instance.SetDelete(&delete_TTreeResult);
      instance.SetDeleteArray(&deleteArray_TTreeResult);
      instance.SetDestructor(&destruct_TTreeResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeResult*)
   {
      return GenerateInitInstanceLocal((::TTreeResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeRow(void *p = 0);
   static void *newArray_TTreeRow(Long_t size, void *p);
   static void delete_TTreeRow(void *p);
   static void deleteArray_TTreeRow(void *p);
   static void destruct_TTreeRow(void *p);
   static void streamer_TTreeRow(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeRow*)
   {
      ::TTreeRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeRow >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeRow", ::TTreeRow::Class_Version(), "TTreeRow.h", 29,
                  typeid(::TTreeRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeRow::Dictionary, isa_proxy, 17,
                  sizeof(::TTreeRow) );
      instance.SetNew(&new_TTreeRow);
      instance.SetNewArray(&newArray_TTreeRow);
      instance.SetDelete(&delete_TTreeRow);
      instance.SetDeleteArray(&deleteArray_TTreeRow);
      instance.SetDestructor(&destruct_TTreeRow);
      instance.SetStreamerFunc(&streamer_TTreeRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeRow*)
   {
      return GenerateInitInstanceLocal((::TTreeRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTreeSQL(void *p);
   static void deleteArray_TTreeSQL(void *p);
   static void destruct_TTreeSQL(void *p);
   static void directoryAutoAdd_TTreeSQL(void *obj, TDirectory *dir);
   static Long64_t merge_TTreeSQL(void *obj, TCollection *coll,TFileMergeInfo *info);
   static void reset_TTreeSQL(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeSQL*)
   {
      ::TTreeSQL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeSQL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeSQL", ::TTreeSQL::Class_Version(), "TTreeSQL.h", 41,
                  typeid(::TTreeSQL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeSQL::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeSQL) );
      instance.SetDelete(&delete_TTreeSQL);
      instance.SetDeleteArray(&deleteArray_TTreeSQL);
      instance.SetDestructor(&destruct_TTreeSQL);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TTreeSQL);
      instance.SetMerge(&merge_TTreeSQL);
      instance.SetResetAfterMerge(&reset_TTreeSQL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeSQL*)
   {
      return GenerateInitInstanceLocal((::TTreeSQL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeSQL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualIndex(void *p);
   static void deleteArray_TVirtualIndex(void *p);
   static void destruct_TVirtualIndex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualIndex*)
   {
      ::TVirtualIndex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualIndex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualIndex", ::TVirtualIndex::Class_Version(), "TVirtualIndex.h", 29,
                  typeid(::TVirtualIndex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualIndex::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualIndex) );
      instance.SetDelete(&delete_TVirtualIndex);
      instance.SetDeleteArray(&deleteArray_TVirtualIndex);
      instance.SetDestructor(&destruct_TVirtualIndex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualIndex*)
   {
      return GenerateInitInstanceLocal((::TVirtualIndex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualIndex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TBasket::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBasket::Class_Name()
{
   return "TBasket";
}

//______________________________________________________________________________
const char *TBasket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBasket*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBasket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBasket*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBasket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBasket*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBasket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBasket*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBasketSQL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBasketSQL::Class_Name()
{
   return "TBasketSQL";
}

//______________________________________________________________________________
const char *TBasketSQL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBasketSQL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBasketSQL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBasketSQL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBasketSQL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBasketSQL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBasketSQL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBasketSQL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBranch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBranch::Class_Name()
{
   return "TBranch";
}

//______________________________________________________________________________
const char *TBranch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBranch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBranch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBranch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualBranchBrowsable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualBranchBrowsable::Class_Name()
{
   return "TVirtualBranchBrowsable";
}

//______________________________________________________________________________
const char *TVirtualBranchBrowsable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualBranchBrowsable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualBranchBrowsable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualBranchBrowsable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualBranchBrowsable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualBranchBrowsable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualBranchBrowsable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualBranchBrowsable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMethodBrowsable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMethodBrowsable::Class_Name()
{
   return "TMethodBrowsable";
}

//______________________________________________________________________________
const char *TMethodBrowsable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMethodBrowsable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMethodBrowsable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMethodBrowsable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMethodBrowsable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMethodBrowsable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMethodBrowsable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMethodBrowsable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNonSplitBrowsable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNonSplitBrowsable::Class_Name()
{
   return "TNonSplitBrowsable";
}

//______________________________________________________________________________
const char *TNonSplitBrowsable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNonSplitBrowsable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNonSplitBrowsable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNonSplitBrowsable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNonSplitBrowsable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNonSplitBrowsable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNonSplitBrowsable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNonSplitBrowsable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCollectionPropertyBrowsable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCollectionPropertyBrowsable::Class_Name()
{
   return "TCollectionPropertyBrowsable";
}

//______________________________________________________________________________
const char *TCollectionPropertyBrowsable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCollectionPropertyBrowsable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCollectionPropertyBrowsable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCollectionPropertyBrowsable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCollectionPropertyBrowsable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCollectionPropertyBrowsable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCollectionPropertyBrowsable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCollectionPropertyBrowsable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCollectionMethodBrowsable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCollectionMethodBrowsable::Class_Name()
{
   return "TCollectionMethodBrowsable";
}

//______________________________________________________________________________
const char *TCollectionMethodBrowsable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCollectionMethodBrowsable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCollectionMethodBrowsable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCollectionMethodBrowsable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCollectionMethodBrowsable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCollectionMethodBrowsable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCollectionMethodBrowsable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCollectionMethodBrowsable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBranchClones::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBranchClones::Class_Name()
{
   return "TBranchClones";
}

//______________________________________________________________________________
const char *TBranchClones::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchClones*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBranchClones::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchClones*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBranchClones::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchClones*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBranchClones::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchClones*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualTreePlayer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualTreePlayer::Class_Name()
{
   return "TVirtualTreePlayer";
}

//______________________________________________________________________________
const char *TVirtualTreePlayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualTreePlayer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualTreePlayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualTreePlayer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualTreePlayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualTreePlayer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualTreePlayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualTreePlayer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTree::Class_Name()
{
   return "TTree";
}

//______________________________________________________________________________
const char *TTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTree*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeFriendLeafIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeFriendLeafIter::Class_Name()
{
   return "TTreeFriendLeafIter";
}

//______________________________________________________________________________
const char *TTreeFriendLeafIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeFriendLeafIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeFriendLeafIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeFriendLeafIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeFriendLeafIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeFriendLeafIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeFriendLeafIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeFriendLeafIter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBranchElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBranchElement::Class_Name()
{
   return "TBranchElement";
}

//______________________________________________________________________________
const char *TBranchElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBranchElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBranchElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBranchElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBranchObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBranchObject::Class_Name()
{
   return "TBranchObject";
}

//______________________________________________________________________________
const char *TBranchObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBranchObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBranchObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBranchObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchObject*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBranchRef::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBranchRef::Class_Name()
{
   return "TBranchRef";
}

//______________________________________________________________________________
const char *TBranchRef::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchRef*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBranchRef::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchRef*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBranchRef::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchRef*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBranchRef::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchRef*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBranchSTL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBranchSTL::Class_Name()
{
   return "TBranchSTL";
}

//______________________________________________________________________________
const char *TBranchSTL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchSTL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBranchSTL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBranchSTL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBranchSTL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchSTL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBranchSTL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBranchSTL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBufferSQL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferSQL::Class_Name()
{
   return "TBufferSQL";
}

//______________________________________________________________________________
const char *TBufferSQL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferSQL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferSQL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferSQL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferSQL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferSQL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferSQL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferSQL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TChain::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TChain::Class_Name()
{
   return "TChain";
}

//______________________________________________________________________________
const char *TChain::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TChain*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TChain::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TChain*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TChain::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TChain*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TChain::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TChain*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TChainElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TChainElement::Class_Name()
{
   return "TChainElement";
}

//______________________________________________________________________________
const char *TChainElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TChainElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TChainElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TChainElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TChainElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TChainElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TChainElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TChainElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCut::Class_Name()
{
   return "TCut";
}

//______________________________________________________________________________
const char *TCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEntryList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEntryList::Class_Name()
{
   return "TEntryList";
}

//______________________________________________________________________________
const char *TEntryList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEntryList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEntryList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEntryList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEntryList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEntryList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEntryList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEntryList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEntryListArray::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEntryListArray::Class_Name()
{
   return "TEntryListArray";
}

//______________________________________________________________________________
const char *TEntryListArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEntryListArray*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEntryListArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEntryListArray*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEntryListArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEntryListArray*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEntryListArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEntryListArray*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEntryListBlock::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEntryListBlock::Class_Name()
{
   return "TEntryListBlock";
}

//______________________________________________________________________________
const char *TEntryListBlock::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEntryListBlock*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEntryListBlock::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEntryListBlock*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEntryListBlock::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEntryListBlock*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEntryListBlock::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEntryListBlock*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEntryListFromFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEntryListFromFile::Class_Name()
{
   return "TEntryListFromFile";
}

//______________________________________________________________________________
const char *TEntryListFromFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEntryListFromFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEntryListFromFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEntryListFromFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEntryListFromFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEntryListFromFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEntryListFromFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEntryListFromFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEventList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEventList::Class_Name()
{
   return "TEventList";
}

//______________________________________________________________________________
const char *TEventList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEventList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEventList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEventList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEventList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEventList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFriendElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFriendElement::Class_Name()
{
   return "TFriendElement";
}

//______________________________________________________________________________
const char *TFriendElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFriendElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFriendElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFriendElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFriendElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFriendElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFriendElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFriendElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeaf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeaf::Class_Name()
{
   return "TLeaf";
}

//______________________________________________________________________________
const char *TLeaf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeaf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeaf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeaf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeaf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeaf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeaf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeaf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafB::Class_Name()
{
   return "TLeafB";
}

//______________________________________________________________________________
const char *TLeafB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafB*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafC::Class_Name()
{
   return "TLeafC";
}

//______________________________________________________________________________
const char *TLeafC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafD::Class_Name()
{
   return "TLeafD";
}

//______________________________________________________________________________
const char *TLeafD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafElement::Class_Name()
{
   return "TLeafElement";
}

//______________________________________________________________________________
const char *TLeafElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafF::Class_Name()
{
   return "TLeafF";
}

//______________________________________________________________________________
const char *TLeafF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafI::Class_Name()
{
   return "TLeafI";
}

//______________________________________________________________________________
const char *TLeafI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafL::Class_Name()
{
   return "TLeafL";
}

//______________________________________________________________________________
const char *TLeafL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafO::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafO::Class_Name()
{
   return "TLeafO";
}

//______________________________________________________________________________
const char *TLeafO::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafO*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafO::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafO*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafO::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafO*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafO::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafO*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafObject::Class_Name()
{
   return "TLeafObject";
}

//______________________________________________________________________________
const char *TLeafObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafObject*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLeafS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLeafS::Class_Name()
{
   return "TLeafS";
}

//______________________________________________________________________________
const char *TLeafS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLeafS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLeafS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLeafS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLeafS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLeafS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNtuple::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNtuple::Class_Name()
{
   return "TNtuple";
}

//______________________________________________________________________________
const char *TNtuple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNtuple*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNtuple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNtuple*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNtuple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNtuple*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNtuple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNtuple*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNtupleD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNtupleD::Class_Name()
{
   return "TNtupleD";
}

//______________________________________________________________________________
const char *TNtupleD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNtupleD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNtupleD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNtupleD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNtupleD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNtupleD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNtupleD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNtupleD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TQueryResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TQueryResult::Class_Name()
{
   return "TQueryResult";
}

//______________________________________________________________________________
const char *TQueryResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQueryResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TQueryResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TQueryResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TQueryResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQueryResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TQueryResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TQueryResult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSelectorList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSelectorList::Class_Name()
{
   return "TSelectorList";
}

//______________________________________________________________________________
const char *TSelectorList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSelectorList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSelectorList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSelectorList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSelector::Class_Name()
{
   return "TSelector";
}

//______________________________________________________________________________
const char *TSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSelectorCint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSelectorCint::Class_Name()
{
   return "TSelectorCint";
}

//______________________________________________________________________________
const char *TSelectorCint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorCint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSelectorCint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorCint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSelectorCint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorCint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSelectorCint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorCint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSelectorScalar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSelectorScalar::Class_Name()
{
   return "TSelectorScalar";
}

//______________________________________________________________________________
const char *TSelectorScalar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorScalar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSelectorScalar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorScalar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSelectorScalar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorScalar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSelectorScalar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorScalar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeCache::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeCache::Class_Name()
{
   return "TTreeCache";
}

//______________________________________________________________________________
const char *TTreeCache::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeCache*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeCache::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeCache*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeCache::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeCache*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeCache::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeCache*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeCacheUnzip::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeCacheUnzip::Class_Name()
{
   return "TTreeCacheUnzip";
}

//______________________________________________________________________________
const char *TTreeCacheUnzip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeCacheUnzip*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeCacheUnzip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeCacheUnzip*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeCacheUnzip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeCacheUnzip*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeCacheUnzip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeCacheUnzip*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeCloner::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeCloner::Class_Name()
{
   return "TTreeCloner";
}

//______________________________________________________________________________
const char *TTreeCloner::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeCloner*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeCloner::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeCloner*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeCloner::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeCloner*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeCloner::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeCloner*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeResult::Class_Name()
{
   return "TTreeResult";
}

//______________________________________________________________________________
const char *TTreeResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeResult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeRow::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeRow::Class_Name()
{
   return "TTreeRow";
}

//______________________________________________________________________________
const char *TTreeRow::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeRow*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeRow::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeRow*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeRow::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeRow*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeRow::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeRow*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeSQL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeSQL::Class_Name()
{
   return "TTreeSQL";
}

//______________________________________________________________________________
const char *TTreeSQL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeSQL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeSQL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeSQL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeSQL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeSQL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeSQL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeSQL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualIndex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualIndex::Class_Name()
{
   return "TVirtualIndex";
}

//______________________________________________________________________________
const char *TVirtualIndex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualIndex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualIndex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualIndex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualIndex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualIndex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualIndex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualIndex*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBasket(void *p) {
      return  p ? new(p) ::TBasket : new ::TBasket;
   }
   static void *newArray_TBasket(Long_t nElements, void *p) {
      return p ? new(p) ::TBasket[nElements] : new ::TBasket[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBasket(void *p) {
      delete ((::TBasket*)p);
   }
   static void deleteArray_TBasket(void *p) {
      delete [] ((::TBasket*)p);
   }
   static void destruct_TBasket(void *p) {
      typedef ::TBasket current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBasket(TBuffer &buf, void *obj) {
      ((::TBasket*)obj)->::TBasket::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBasket

//______________________________________________________________________________
void TBasketSQL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBasketSQL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBasketSQL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBasketSQL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBasketSQL(void *p) {
      return  p ? new(p) ::TBasketSQL : new ::TBasketSQL;
   }
   static void *newArray_TBasketSQL(Long_t nElements, void *p) {
      return p ? new(p) ::TBasketSQL[nElements] : new ::TBasketSQL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBasketSQL(void *p) {
      delete ((::TBasketSQL*)p);
   }
   static void deleteArray_TBasketSQL(void *p) {
      delete [] ((::TBasketSQL*)p);
   }
   static void destruct_TBasketSQL(void *p) {
      typedef ::TBasketSQL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TBasketSQL

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBranch(void *p) {
      return  p ? new(p) ::TBranch : new ::TBranch;
   }
   static void *newArray_TBranch(Long_t nElements, void *p) {
      return p ? new(p) ::TBranch[nElements] : new ::TBranch[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBranch(void *p) {
      delete ((::TBranch*)p);
   }
   static void deleteArray_TBranch(void *p) {
      delete [] ((::TBranch*)p);
   }
   static void destruct_TBranch(void *p) {
      typedef ::TBranch current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBranch(TBuffer &buf, void *obj) {
      ((::TBranch*)obj)->::TBranch::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TBranch(void *obj,TFileMergeInfo *info) {
      ((::TBranch*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TBranch

//______________________________________________________________________________
void TVirtualBranchBrowsable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualBranchBrowsable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualBranchBrowsable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualBranchBrowsable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualBranchBrowsable(void *p) {
      delete ((::TVirtualBranchBrowsable*)p);
   }
   static void deleteArray_TVirtualBranchBrowsable(void *p) {
      delete [] ((::TVirtualBranchBrowsable*)p);
   }
   static void destruct_TVirtualBranchBrowsable(void *p) {
      typedef ::TVirtualBranchBrowsable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualBranchBrowsable

//______________________________________________________________________________
void TMethodBrowsable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMethodBrowsable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMethodBrowsable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMethodBrowsable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMethodBrowsable(void *p) {
      delete ((::TMethodBrowsable*)p);
   }
   static void deleteArray_TMethodBrowsable(void *p) {
      delete [] ((::TMethodBrowsable*)p);
   }
   static void destruct_TMethodBrowsable(void *p) {
      typedef ::TMethodBrowsable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMethodBrowsable

//______________________________________________________________________________
void TNonSplitBrowsable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNonSplitBrowsable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNonSplitBrowsable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNonSplitBrowsable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNonSplitBrowsable(void *p) {
      delete ((::TNonSplitBrowsable*)p);
   }
   static void deleteArray_TNonSplitBrowsable(void *p) {
      delete [] ((::TNonSplitBrowsable*)p);
   }
   static void destruct_TNonSplitBrowsable(void *p) {
      typedef ::TNonSplitBrowsable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TNonSplitBrowsable

//______________________________________________________________________________
void TCollectionPropertyBrowsable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCollectionPropertyBrowsable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCollectionPropertyBrowsable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCollectionPropertyBrowsable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCollectionPropertyBrowsable(void *p) {
      delete ((::TCollectionPropertyBrowsable*)p);
   }
   static void deleteArray_TCollectionPropertyBrowsable(void *p) {
      delete [] ((::TCollectionPropertyBrowsable*)p);
   }
   static void destruct_TCollectionPropertyBrowsable(void *p) {
      typedef ::TCollectionPropertyBrowsable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionPropertyBrowsable

//______________________________________________________________________________
void TCollectionMethodBrowsable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCollectionMethodBrowsable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCollectionMethodBrowsable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCollectionMethodBrowsable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCollectionMethodBrowsable(void *p) {
      delete ((::TCollectionMethodBrowsable*)p);
   }
   static void deleteArray_TCollectionMethodBrowsable(void *p) {
      delete [] ((::TCollectionMethodBrowsable*)p);
   }
   static void destruct_TCollectionMethodBrowsable(void *p) {
      typedef ::TCollectionMethodBrowsable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionMethodBrowsable

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBranchClones(void *p) {
      return  p ? new(p) ::TBranchClones : new ::TBranchClones;
   }
   static void *newArray_TBranchClones(Long_t nElements, void *p) {
      return p ? new(p) ::TBranchClones[nElements] : new ::TBranchClones[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBranchClones(void *p) {
      delete ((::TBranchClones*)p);
   }
   static void deleteArray_TBranchClones(void *p) {
      delete [] ((::TBranchClones*)p);
   }
   static void destruct_TBranchClones(void *p) {
      typedef ::TBranchClones current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBranchClones(TBuffer &buf, void *obj) {
      ((::TBranchClones*)obj)->::TBranchClones::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TBranchClones(void *obj,TFileMergeInfo *info) {
      ((::TBranchClones*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TBranchClones

//______________________________________________________________________________
void TVirtualTreePlayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualTreePlayer.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualTreePlayer(void *p) {
      delete ((::TVirtualTreePlayer*)p);
   }
   static void deleteArray_TVirtualTreePlayer(void *p) {
      delete [] ((::TVirtualTreePlayer*)p);
   }
   static void destruct_TVirtualTreePlayer(void *p) {
      typedef ::TVirtualTreePlayer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVirtualTreePlayer(TBuffer &buf, void *obj) {
      ((::TVirtualTreePlayer*)obj)->::TVirtualTreePlayer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVirtualTreePlayer

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTree(void *p) {
      return  p ? new(p) ::TTree : new ::TTree;
   }
   static void *newArray_TTree(Long_t nElements, void *p) {
      return p ? new(p) ::TTree[nElements] : new ::TTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTree(void *p) {
      delete ((::TTree*)p);
   }
   static void deleteArray_TTree(void *p) {
      delete [] ((::TTree*)p);
   }
   static void destruct_TTree(void *p) {
      typedef ::TTree current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TTree(void *p, TDirectory *dir) {
      ((::TTree*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTree(TBuffer &buf, void *obj) {
      ((::TTree*)obj)->::TTree::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t merge_TTree(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::TTree*)obj)->Merge(coll,info);
   }
   // Wrapper around the Reset function.
   static void reset_TTree(void *obj,TFileMergeInfo *info) {
      ((::TTree*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TTree

//______________________________________________________________________________
void TTreeFriendLeafIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeFriendLeafIter.

   TIterator::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeFriendLeafIter(void *p) {
      delete ((::TTreeFriendLeafIter*)p);
   }
   static void deleteArray_TTreeFriendLeafIter(void *p) {
      delete [] ((::TTreeFriendLeafIter*)p);
   }
   static void destruct_TTreeFriendLeafIter(void *p) {
      typedef ::TTreeFriendLeafIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTreeFriendLeafIter(TBuffer &buf, void *obj) {
      ((::TTreeFriendLeafIter*)obj)->::TTreeFriendLeafIter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTreeFriendLeafIter

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBranchElement(void *p) {
      return  p ? new(p) ::TBranchElement : new ::TBranchElement;
   }
   static void *newArray_TBranchElement(Long_t nElements, void *p) {
      return p ? new(p) ::TBranchElement[nElements] : new ::TBranchElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBranchElement(void *p) {
      delete ((::TBranchElement*)p);
   }
   static void deleteArray_TBranchElement(void *p) {
      delete [] ((::TBranchElement*)p);
   }
   static void destruct_TBranchElement(void *p) {
      typedef ::TBranchElement current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBranchElement(TBuffer &buf, void *obj) {
      ((::TBranchElement*)obj)->::TBranchElement::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TBranchElement(void *obj,TFileMergeInfo *info) {
      ((::TBranchElement*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TBranchElement

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBranchObject(void *p) {
      return  p ? new(p) ::TBranchObject : new ::TBranchObject;
   }
   static void *newArray_TBranchObject(Long_t nElements, void *p) {
      return p ? new(p) ::TBranchObject[nElements] : new ::TBranchObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBranchObject(void *p) {
      delete ((::TBranchObject*)p);
   }
   static void deleteArray_TBranchObject(void *p) {
      delete [] ((::TBranchObject*)p);
   }
   static void destruct_TBranchObject(void *p) {
      typedef ::TBranchObject current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBranchObject(TBuffer &buf, void *obj) {
      ((::TBranchObject*)obj)->::TBranchObject::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TBranchObject(void *obj,TFileMergeInfo *info) {
      ((::TBranchObject*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TBranchObject

//______________________________________________________________________________
void TBranchRef::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBranchRef.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBranchRef::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBranchRef::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBranchRef(void *p) {
      return  p ? new(p) ::TBranchRef : new ::TBranchRef;
   }
   static void *newArray_TBranchRef(Long_t nElements, void *p) {
      return p ? new(p) ::TBranchRef[nElements] : new ::TBranchRef[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBranchRef(void *p) {
      delete ((::TBranchRef*)p);
   }
   static void deleteArray_TBranchRef(void *p) {
      delete [] ((::TBranchRef*)p);
   }
   static void destruct_TBranchRef(void *p) {
      typedef ::TBranchRef current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the Reset function.
   static void reset_TBranchRef(void *obj,TFileMergeInfo *info) {
      ((::TBranchRef*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TBranchRef

namespace ROOT {
   // Wrappers around operator new
   static void *new_TIndArray(void *p) {
      return  p ? new(p) ::TIndArray : new ::TIndArray;
   }
   static void *newArray_TIndArray(Long_t nElements, void *p) {
      return p ? new(p) ::TIndArray[nElements] : new ::TIndArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_TIndArray(void *p) {
      delete ((::TIndArray*)p);
   }
   static void deleteArray_TIndArray(void *p) {
      delete [] ((::TIndArray*)p);
   }
   static void destruct_TIndArray(void *p) {
      typedef ::TIndArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TIndArray

//______________________________________________________________________________
void TBranchSTL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBranchSTL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBranchSTL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBranchSTL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBranchSTL(void *p) {
      return  p ? new(p) ::TBranchSTL : new ::TBranchSTL;
   }
   static void *newArray_TBranchSTL(Long_t nElements, void *p) {
      return p ? new(p) ::TBranchSTL[nElements] : new ::TBranchSTL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBranchSTL(void *p) {
      delete ((::TBranchSTL*)p);
   }
   static void deleteArray_TBranchSTL(void *p) {
      delete [] ((::TBranchSTL*)p);
   }
   static void destruct_TBranchSTL(void *p) {
      typedef ::TBranchSTL current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the Reset function.
   static void reset_TBranchSTL(void *obj,TFileMergeInfo *info) {
      ((::TBranchSTL*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TBranchSTL

//______________________________________________________________________________
void TBufferSQL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBufferSQL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBufferSQL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBufferSQL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBufferSQL(void *p) {
      return  p ? new(p) ::TBufferSQL : new ::TBufferSQL;
   }
   static void *newArray_TBufferSQL(Long_t nElements, void *p) {
      return p ? new(p) ::TBufferSQL[nElements] : new ::TBufferSQL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBufferSQL(void *p) {
      delete ((::TBufferSQL*)p);
   }
   static void deleteArray_TBufferSQL(void *p) {
      delete [] ((::TBufferSQL*)p);
   }
   static void destruct_TBufferSQL(void *p) {
      typedef ::TBufferSQL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TBufferSQL

namespace ROOT {
   // Wrappers around operator new
   static void *new_TChain(void *p) {
      return  p ? new(p) ::TChain : new ::TChain;
   }
   static void *newArray_TChain(Long_t nElements, void *p) {
      return p ? new(p) ::TChain[nElements] : new ::TChain[nElements];
   }
   // Wrapper around operator delete
   static void delete_TChain(void *p) {
      delete ((::TChain*)p);
   }
   static void deleteArray_TChain(void *p) {
      delete [] ((::TChain*)p);
   }
   static void destruct_TChain(void *p) {
      typedef ::TChain current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TChain(void *p, TDirectory *dir) {
      ((::TChain*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TChain(TBuffer &buf, void *obj) {
      ((::TChain*)obj)->::TChain::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t merge_TChain(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::TChain*)obj)->Merge(coll,info);
   }
   // Wrapper around the Reset function.
   static void reset_TChain(void *obj,TFileMergeInfo *info) {
      ((::TChain*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TChain

//______________________________________________________________________________
void TChainElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TChainElement.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fEntries;
      R__b >> fNPackets;
      R__b >> fPacketSize;
      R__b >> fStatus;
      R__b.CheckByteCount(R__s, R__c, TChainElement::IsA());
   } else {
      R__c = R__b.WriteVersion(TChainElement::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fEntries;
      R__b << fNPackets;
      R__b << fPacketSize;
      R__b << fStatus;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TChainElement(void *p) {
      return  p ? new(p) ::TChainElement : new ::TChainElement;
   }
   static void *newArray_TChainElement(Long_t nElements, void *p) {
      return p ? new(p) ::TChainElement[nElements] : new ::TChainElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TChainElement(void *p) {
      delete ((::TChainElement*)p);
   }
   static void deleteArray_TChainElement(void *p) {
      delete [] ((::TChainElement*)p);
   }
   static void destruct_TChainElement(void *p) {
      typedef ::TChainElement current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TChainElement(TBuffer &buf, void *obj) {
      ((::TChainElement*)obj)->::TChainElement::Streamer(buf);
   }
} // end of namespace ROOT for class ::TChainElement

//______________________________________________________________________________
void TCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCut(void *p) {
      return  p ? new(p) ::TCut : new ::TCut;
   }
   static void *newArray_TCut(Long_t nElements, void *p) {
      return p ? new(p) ::TCut[nElements] : new ::TCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCut(void *p) {
      delete ((::TCut*)p);
   }
   static void deleteArray_TCut(void *p) {
      delete [] ((::TCut*)p);
   }
   static void destruct_TCut(void *p) {
      typedef ::TCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCut

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEntryList(void *p) {
      return  p ? new(p) ::TEntryList : new ::TEntryList;
   }
   static void *newArray_TEntryList(Long_t nElements, void *p) {
      return p ? new(p) ::TEntryList[nElements] : new ::TEntryList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEntryList(void *p) {
      delete ((::TEntryList*)p);
   }
   static void deleteArray_TEntryList(void *p) {
      delete [] ((::TEntryList*)p);
   }
   static void destruct_TEntryList(void *p) {
      typedef ::TEntryList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TEntryList(void *p, TDirectory *dir) {
      ((::TEntryList*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEntryList(TBuffer &buf, void *obj) {
      ((::TEntryList*)obj)->::TEntryList::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEntryList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEntryList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEntryList

//______________________________________________________________________________
void TEntryListArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEntryListArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEntryListArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEntryListArray::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEntryListArray(void *p) {
      return  p ? new(p) ::TEntryListArray : new ::TEntryListArray;
   }
   static void *newArray_TEntryListArray(Long_t nElements, void *p) {
      return p ? new(p) ::TEntryListArray[nElements] : new ::TEntryListArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEntryListArray(void *p) {
      delete ((::TEntryListArray*)p);
   }
   static void deleteArray_TEntryListArray(void *p) {
      delete [] ((::TEntryListArray*)p);
   }
   static void destruct_TEntryListArray(void *p) {
      typedef ::TEntryListArray current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TEntryListArray(void *p, TDirectory *dir) {
      ((::TEntryListArray*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEntryListArray(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEntryListArray*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEntryListArray

//______________________________________________________________________________
void TEntryListBlock::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEntryListBlock.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEntryListBlock::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEntryListBlock::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEntryListBlock(void *p) {
      return  p ? new(p) ::TEntryListBlock : new ::TEntryListBlock;
   }
   static void *newArray_TEntryListBlock(Long_t nElements, void *p) {
      return p ? new(p) ::TEntryListBlock[nElements] : new ::TEntryListBlock[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEntryListBlock(void *p) {
      delete ((::TEntryListBlock*)p);
   }
   static void deleteArray_TEntryListBlock(void *p) {
      delete [] ((::TEntryListBlock*)p);
   }
   static void destruct_TEntryListBlock(void *p) {
      typedef ::TEntryListBlock current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TEntryListBlock

//______________________________________________________________________________
void TEntryListFromFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEntryListFromFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEntryListFromFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEntryListFromFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEntryListFromFile(void *p) {
      return  p ? new(p) ::TEntryListFromFile : new ::TEntryListFromFile;
   }
   static void *newArray_TEntryListFromFile(Long_t nElements, void *p) {
      return p ? new(p) ::TEntryListFromFile[nElements] : new ::TEntryListFromFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEntryListFromFile(void *p) {
      delete ((::TEntryListFromFile*)p);
   }
   static void deleteArray_TEntryListFromFile(void *p) {
      delete [] ((::TEntryListFromFile*)p);
   }
   static void destruct_TEntryListFromFile(void *p) {
      typedef ::TEntryListFromFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TEntryListFromFile(void *p, TDirectory *dir) {
      ((::TEntryListFromFile*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEntryListFromFile(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEntryListFromFile*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEntryListFromFile

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEventList(void *p) {
      return  p ? new(p) ::TEventList : new ::TEventList;
   }
   static void *newArray_TEventList(Long_t nElements, void *p) {
      return p ? new(p) ::TEventList[nElements] : new ::TEventList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEventList(void *p) {
      delete ((::TEventList*)p);
   }
   static void deleteArray_TEventList(void *p) {
      delete [] ((::TEventList*)p);
   }
   static void destruct_TEventList(void *p) {
      typedef ::TEventList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TEventList(void *p, TDirectory *dir) {
      ((::TEventList*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEventList(TBuffer &buf, void *obj) {
      ((::TEventList*)obj)->::TEventList::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEventList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEventList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEventList

//______________________________________________________________________________
void TFriendElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFriendElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFriendElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFriendElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFriendElement(void *p) {
      return  p ? new(p) ::TFriendElement : new ::TFriendElement;
   }
   static void *newArray_TFriendElement(Long_t nElements, void *p) {
      return p ? new(p) ::TFriendElement[nElements] : new ::TFriendElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFriendElement(void *p) {
      delete ((::TFriendElement*)p);
   }
   static void deleteArray_TFriendElement(void *p) {
      delete [] ((::TFriendElement*)p);
   }
   static void destruct_TFriendElement(void *p) {
      typedef ::TFriendElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFriendElement

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeaf(void *p) {
      return  p ? new(p) ::TLeaf : new ::TLeaf;
   }
   static void *newArray_TLeaf(Long_t nElements, void *p) {
      return p ? new(p) ::TLeaf[nElements] : new ::TLeaf[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeaf(void *p) {
      delete ((::TLeaf*)p);
   }
   static void deleteArray_TLeaf(void *p) {
      delete [] ((::TLeaf*)p);
   }
   static void destruct_TLeaf(void *p) {
      typedef ::TLeaf current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLeaf(TBuffer &buf, void *obj) {
      ((::TLeaf*)obj)->::TLeaf::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLeaf

//______________________________________________________________________________
void TLeafB::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeafB.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeafB::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeafB::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafB(void *p) {
      return  p ? new(p) ::TLeafB : new ::TLeafB;
   }
   static void *newArray_TLeafB(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafB[nElements] : new ::TLeafB[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafB(void *p) {
      delete ((::TLeafB*)p);
   }
   static void deleteArray_TLeafB(void *p) {
      delete [] ((::TLeafB*)p);
   }
   static void destruct_TLeafB(void *p) {
      typedef ::TLeafB current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLeafB

//______________________________________________________________________________
void TLeafC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeafC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeafC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeafC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafC(void *p) {
      return  p ? new(p) ::TLeafC : new ::TLeafC;
   }
   static void *newArray_TLeafC(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafC[nElements] : new ::TLeafC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafC(void *p) {
      delete ((::TLeafC*)p);
   }
   static void deleteArray_TLeafC(void *p) {
      delete [] ((::TLeafC*)p);
   }
   static void destruct_TLeafC(void *p) {
      typedef ::TLeafC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLeafC

//______________________________________________________________________________
void TLeafD::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeafD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeafD::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeafD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafD(void *p) {
      return  p ? new(p) ::TLeafD : new ::TLeafD;
   }
   static void *newArray_TLeafD(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafD[nElements] : new ::TLeafD[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafD(void *p) {
      delete ((::TLeafD*)p);
   }
   static void deleteArray_TLeafD(void *p) {
      delete [] ((::TLeafD*)p);
   }
   static void destruct_TLeafD(void *p) {
      typedef ::TLeafD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLeafD

//______________________________________________________________________________
void TLeafElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeafElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeafElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeafElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafElement(void *p) {
      return  p ? new(p) ::TLeafElement : new ::TLeafElement;
   }
   static void *newArray_TLeafElement(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafElement[nElements] : new ::TLeafElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafElement(void *p) {
      delete ((::TLeafElement*)p);
   }
   static void deleteArray_TLeafElement(void *p) {
      delete [] ((::TLeafElement*)p);
   }
   static void destruct_TLeafElement(void *p) {
      typedef ::TLeafElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLeafElement

//______________________________________________________________________________
void TLeafF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeafF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeafF::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeafF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafF(void *p) {
      return  p ? new(p) ::TLeafF : new ::TLeafF;
   }
   static void *newArray_TLeafF(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafF[nElements] : new ::TLeafF[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafF(void *p) {
      delete ((::TLeafF*)p);
   }
   static void deleteArray_TLeafF(void *p) {
      delete [] ((::TLeafF*)p);
   }
   static void destruct_TLeafF(void *p) {
      typedef ::TLeafF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLeafF

//______________________________________________________________________________
void TLeafI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeafI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeafI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeafI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafI(void *p) {
      return  p ? new(p) ::TLeafI : new ::TLeafI;
   }
   static void *newArray_TLeafI(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafI[nElements] : new ::TLeafI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafI(void *p) {
      delete ((::TLeafI*)p);
   }
   static void deleteArray_TLeafI(void *p) {
      delete [] ((::TLeafI*)p);
   }
   static void destruct_TLeafI(void *p) {
      typedef ::TLeafI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLeafI

//______________________________________________________________________________
void TLeafL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeafL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeafL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeafL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafL(void *p) {
      return  p ? new(p) ::TLeafL : new ::TLeafL;
   }
   static void *newArray_TLeafL(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafL[nElements] : new ::TLeafL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafL(void *p) {
      delete ((::TLeafL*)p);
   }
   static void deleteArray_TLeafL(void *p) {
      delete [] ((::TLeafL*)p);
   }
   static void destruct_TLeafL(void *p) {
      typedef ::TLeafL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLeafL

//______________________________________________________________________________
void TLeafO::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeafO.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeafO::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeafO::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafO(void *p) {
      return  p ? new(p) ::TLeafO : new ::TLeafO;
   }
   static void *newArray_TLeafO(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafO[nElements] : new ::TLeafO[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafO(void *p) {
      delete ((::TLeafO*)p);
   }
   static void deleteArray_TLeafO(void *p) {
      delete [] ((::TLeafO*)p);
   }
   static void destruct_TLeafO(void *p) {
      typedef ::TLeafO current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLeafO

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafObject(void *p) {
      return  p ? new(p) ::TLeafObject : new ::TLeafObject;
   }
   static void *newArray_TLeafObject(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafObject[nElements] : new ::TLeafObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafObject(void *p) {
      delete ((::TLeafObject*)p);
   }
   static void deleteArray_TLeafObject(void *p) {
      delete [] ((::TLeafObject*)p);
   }
   static void destruct_TLeafObject(void *p) {
      typedef ::TLeafObject current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLeafObject(TBuffer &buf, void *obj) {
      ((::TLeafObject*)obj)->::TLeafObject::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLeafObject

//______________________________________________________________________________
void TLeafS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLeafS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLeafS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLeafS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLeafS(void *p) {
      return  p ? new(p) ::TLeafS : new ::TLeafS;
   }
   static void *newArray_TLeafS(Long_t nElements, void *p) {
      return p ? new(p) ::TLeafS[nElements] : new ::TLeafS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLeafS(void *p) {
      delete ((::TLeafS*)p);
   }
   static void deleteArray_TLeafS(void *p) {
      delete [] ((::TLeafS*)p);
   }
   static void destruct_TLeafS(void *p) {
      typedef ::TLeafS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLeafS

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNtuple(void *p) {
      return  p ? new(p) ::TNtuple : new ::TNtuple;
   }
   static void *newArray_TNtuple(Long_t nElements, void *p) {
      return p ? new(p) ::TNtuple[nElements] : new ::TNtuple[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNtuple(void *p) {
      delete ((::TNtuple*)p);
   }
   static void deleteArray_TNtuple(void *p) {
      delete [] ((::TNtuple*)p);
   }
   static void destruct_TNtuple(void *p) {
      typedef ::TNtuple current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TNtuple(void *p, TDirectory *dir) {
      ((::TNtuple*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNtuple(TBuffer &buf, void *obj) {
      ((::TNtuple*)obj)->::TNtuple::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t merge_TNtuple(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::TNtuple*)obj)->Merge(coll,info);
   }
   // Wrapper around the Reset function.
   static void reset_TNtuple(void *obj,TFileMergeInfo *info) {
      ((::TNtuple*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TNtuple

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNtupleD(void *p) {
      return  p ? new(p) ::TNtupleD : new ::TNtupleD;
   }
   static void *newArray_TNtupleD(Long_t nElements, void *p) {
      return p ? new(p) ::TNtupleD[nElements] : new ::TNtupleD[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNtupleD(void *p) {
      delete ((::TNtupleD*)p);
   }
   static void deleteArray_TNtupleD(void *p) {
      delete [] ((::TNtupleD*)p);
   }
   static void destruct_TNtupleD(void *p) {
      typedef ::TNtupleD current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TNtupleD(void *p, TDirectory *dir) {
      ((::TNtupleD*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNtupleD(TBuffer &buf, void *obj) {
      ((::TNtupleD*)obj)->::TNtupleD::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t merge_TNtupleD(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::TNtupleD*)obj)->Merge(coll,info);
   }
   // Wrapper around the Reset function.
   static void reset_TNtupleD(void *obj,TFileMergeInfo *info) {
      ((::TNtupleD*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TNtupleD

//______________________________________________________________________________
void TQueryResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TQueryResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TQueryResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(TQueryResult::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TQueryResult(void *p) {
      return  p ? new(p) ::TQueryResult : new ::TQueryResult;
   }
   static void *newArray_TQueryResult(Long_t nElements, void *p) {
      return p ? new(p) ::TQueryResult[nElements] : new ::TQueryResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_TQueryResult(void *p) {
      delete ((::TQueryResult*)p);
   }
   static void deleteArray_TQueryResult(void *p) {
      delete [] ((::TQueryResult*)p);
   }
   static void destruct_TQueryResult(void *p) {
      typedef ::TQueryResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TQueryResult

//______________________________________________________________________________
void TSelectorList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSelectorList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSelectorList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSelectorList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSelectorList(void *p) {
      return  p ? new(p) ::TSelectorList : new ::TSelectorList;
   }
   static void *newArray_TSelectorList(Long_t nElements, void *p) {
      return p ? new(p) ::TSelectorList[nElements] : new ::TSelectorList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSelectorList(void *p) {
      delete ((::TSelectorList*)p);
   }
   static void deleteArray_TSelectorList(void *p) {
      delete [] ((::TSelectorList*)p);
   }
   static void destruct_TSelectorList(void *p) {
      typedef ::TSelectorList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TSelectorList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TSelectorList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TSelectorList

//______________________________________________________________________________
void TSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSelector(void *p) {
      return  p ? new(p) ::TSelector : new ::TSelector;
   }
   static void *newArray_TSelector(Long_t nElements, void *p) {
      return p ? new(p) ::TSelector[nElements] : new ::TSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSelector(void *p) {
      delete ((::TSelector*)p);
   }
   static void deleteArray_TSelector(void *p) {
      delete [] ((::TSelector*)p);
   }
   static void destruct_TSelector(void *p) {
      typedef ::TSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSelector

//______________________________________________________________________________
void TSelectorCint::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSelectorCint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSelectorCint::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSelectorCint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSelectorCint(void *p) {
      return  p ? new(p) ::TSelectorCint : new ::TSelectorCint;
   }
   static void *newArray_TSelectorCint(Long_t nElements, void *p) {
      return p ? new(p) ::TSelectorCint[nElements] : new ::TSelectorCint[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSelectorCint(void *p) {
      delete ((::TSelectorCint*)p);
   }
   static void deleteArray_TSelectorCint(void *p) {
      delete [] ((::TSelectorCint*)p);
   }
   static void destruct_TSelectorCint(void *p) {
      typedef ::TSelectorCint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSelectorCint

//______________________________________________________________________________
void TSelectorScalar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSelectorScalar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSelectorScalar::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSelectorScalar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSelectorScalar(void *p) {
      return  p ? new(p) ::TSelectorScalar : new ::TSelectorScalar;
   }
   static void *newArray_TSelectorScalar(Long_t nElements, void *p) {
      return p ? new(p) ::TSelectorScalar[nElements] : new ::TSelectorScalar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSelectorScalar(void *p) {
      delete ((::TSelectorScalar*)p);
   }
   static void deleteArray_TSelectorScalar(void *p) {
      delete [] ((::TSelectorScalar*)p);
   }
   static void destruct_TSelectorScalar(void *p) {
      typedef ::TSelectorScalar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TSelectorScalar(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TSelectorScalar*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TSelectorScalar

//______________________________________________________________________________
void TTreeCache::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeCache.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeCache::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeCache::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeCache(void *p) {
      return  p ? new(p) ::TTreeCache : new ::TTreeCache;
   }
   static void *newArray_TTreeCache(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeCache[nElements] : new ::TTreeCache[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeCache(void *p) {
      delete ((::TTreeCache*)p);
   }
   static void deleteArray_TTreeCache(void *p) {
      delete [] ((::TTreeCache*)p);
   }
   static void destruct_TTreeCache(void *p) {
      typedef ::TTreeCache current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeCache

//______________________________________________________________________________
void TTreeCacheUnzip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeCacheUnzip.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeCacheUnzip::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeCacheUnzip::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeCacheUnzip(void *p) {
      return  p ? new(p) ::TTreeCacheUnzip : new ::TTreeCacheUnzip;
   }
   static void *newArray_TTreeCacheUnzip(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeCacheUnzip[nElements] : new ::TTreeCacheUnzip[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeCacheUnzip(void *p) {
      delete ((::TTreeCacheUnzip*)p);
   }
   static void deleteArray_TTreeCacheUnzip(void *p) {
      delete [] ((::TTreeCacheUnzip*)p);
   }
   static void destruct_TTreeCacheUnzip(void *p) {
      typedef ::TTreeCacheUnzip current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeCacheUnzip

//______________________________________________________________________________
void TTreeCloner::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeCloner.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeCloner::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeCloner::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeCloner(void *p) {
      delete ((::TTreeCloner*)p);
   }
   static void deleteArray_TTreeCloner(void *p) {
      delete [] ((::TTreeCloner*)p);
   }
   static void destruct_TTreeCloner(void *p) {
      typedef ::TTreeCloner current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeCloner

//______________________________________________________________________________
void TTreeResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeResult::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeResult(void *p) {
      return  p ? new(p) ::TTreeResult : new ::TTreeResult;
   }
   static void *newArray_TTreeResult(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeResult[nElements] : new ::TTreeResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeResult(void *p) {
      delete ((::TTreeResult*)p);
   }
   static void deleteArray_TTreeResult(void *p) {
      delete [] ((::TTreeResult*)p);
   }
   static void destruct_TTreeResult(void *p) {
      typedef ::TTreeResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeResult

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeRow(void *p) {
      return  p ? new(p) ::TTreeRow : new ::TTreeRow;
   }
   static void *newArray_TTreeRow(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeRow[nElements] : new ::TTreeRow[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeRow(void *p) {
      delete ((::TTreeRow*)p);
   }
   static void deleteArray_TTreeRow(void *p) {
      delete [] ((::TTreeRow*)p);
   }
   static void destruct_TTreeRow(void *p) {
      typedef ::TTreeRow current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTreeRow(TBuffer &buf, void *obj) {
      ((::TTreeRow*)obj)->::TTreeRow::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTreeRow

//______________________________________________________________________________
void TTreeSQL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeSQL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeSQL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeSQL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeSQL(void *p) {
      delete ((::TTreeSQL*)p);
   }
   static void deleteArray_TTreeSQL(void *p) {
      delete [] ((::TTreeSQL*)p);
   }
   static void destruct_TTreeSQL(void *p) {
      typedef ::TTreeSQL current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TTreeSQL(void *p, TDirectory *dir) {
      ((::TTreeSQL*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t merge_TTreeSQL(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::TTreeSQL*)obj)->Merge(coll,info);
   }
   // Wrapper around the Reset function.
   static void reset_TTreeSQL(void *obj,TFileMergeInfo *info) {
      ((::TTreeSQL*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TTreeSQL

//______________________________________________________________________________
void TVirtualIndex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualIndex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualIndex::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualIndex::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualIndex(void *p) {
      delete ((::TVirtualIndex*)p);
   }
   static void deleteArray_TVirtualIndex(void *p) {
      delete [] ((::TVirtualIndex*)p);
   }
   static void destruct_TVirtualIndex(void *p) {
      typedef ::TVirtualIndex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualIndex

namespace {
  void TriggerDictionaryInitialization_libTree_Impl() {
    static const char* headers[] = {
"TBasket.h",
"TBasketSQL.h",
"TBranch.h",
"TBranchBrowsable.h",
"TBranchClones.h",
"TBranchElement.h",
"TBranchObject.h",
"TBranchRef.h",
"TBranchSTL.h",
"TBufferSQL.h",
"TChain.h",
"TChainElement.h",
"TCut.h",
"TEntryList.h",
"TEntryListArray.h",
"TEntryListBlock.h",
"TEntryListFromFile.h",
"TEventList.h",
"TFriendElement.h",
"TIndArray.h",
"TLeaf.h",
"TLeafB.h",
"TLeafC.h",
"TLeafD.h",
"TLeafElement.h",
"TLeafF.h",
"TLeafI.h",
"TLeafL.h",
"TLeafO.h",
"TLeafObject.h",
"TLeafS.h",
"TNtuple.h",
"TNtupleD.h",
"TQueryResult.h",
"TSelector.h",
"TSelectorCint.h",
"TSelectorList.h",
"TSelectorScalar.h",
"TTree.h",
"TTreeCache.h",
"TTreeCacheUnzip.h",
"TTreeCloner.h",
"TTreeResult.h",
"TTreeRow.h",
"TTreeSQL.h",
"TVirtualIndex.h",
"TVirtualTreePlayer.h",
"TreeUtils.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libTree dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TBasket.h"
#include "TBasketSQL.h"
#include "TBranch.h"
#include "TBranchBrowsable.h"
#include "TBranchClones.h"
#include "TBranchElement.h"
#include "TBranchObject.h"
#include "TBranchRef.h"
#include "TBranchSTL.h"
#include "TBufferSQL.h"
#include "TChain.h"
#include "TChainElement.h"
#include "TCut.h"
#include "TEntryList.h"
#include "TEntryListArray.h"
#include "TEntryListBlock.h"
#include "TEntryListFromFile.h"
#include "TEventList.h"
#include "TFriendElement.h"
#include "TIndArray.h"
#include "TLeaf.h"
#include "TLeafB.h"
#include "TLeafC.h"
#include "TLeafD.h"
#include "TLeafElement.h"
#include "TLeafF.h"
#include "TLeafI.h"
#include "TLeafL.h"
#include "TLeafO.h"
#include "TLeafObject.h"
#include "TLeafS.h"
#include "TNtuple.h"
#include "TNtupleD.h"
#include "TQueryResult.h"
#include "TSelector.h"
#include "TSelectorCint.h"
#include "TSelectorList.h"
#include "TSelectorScalar.h"
#include "TTree.h"
#include "TTreeCache.h"
#include "TTreeCacheUnzip.h"
#include "TTreeCloner.h"
#include "TTreeResult.h"
#include "TTreeRow.h"
#include "TTreeSQL.h"
#include "TVirtualIndex.h"
#include "TVirtualTreePlayer.h"
#include "TreeUtils.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libTree",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTree_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTree_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTree() {
  TriggerDictionaryInitialization_libTree_Impl();
}
