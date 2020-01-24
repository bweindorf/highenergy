// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ProofDraw

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
#include "TProofDraw.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TProofDraw(void *p);
   static void deleteArray_TProofDraw(void *p);
   static void destruct_TProofDraw(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDraw*)
   {
      ::TProofDraw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDraw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDraw", ::TProofDraw::Class_Version(), "TProofDraw.h", 49,
                  typeid(::TProofDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDraw::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDraw) );
      instance.SetDelete(&delete_TProofDraw);
      instance.SetDeleteArray(&deleteArray_TProofDraw);
      instance.SetDestructor(&destruct_TProofDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDraw*)
   {
      return GenerateInitInstanceLocal((::TProofDraw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDraw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDrawHist(void *p = 0);
   static void *newArray_TProofDrawHist(Long_t size, void *p);
   static void delete_TProofDrawHist(void *p);
   static void deleteArray_TProofDrawHist(void *p);
   static void destruct_TProofDrawHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawHist*)
   {
      ::TProofDrawHist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDrawHist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawHist", ::TProofDrawHist::Class_Version(), "TProofDraw.h", 97,
                  typeid(::TProofDrawHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDrawHist::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawHist) );
      instance.SetNew(&new_TProofDrawHist);
      instance.SetNewArray(&newArray_TProofDrawHist);
      instance.SetDelete(&delete_TProofDrawHist);
      instance.SetDeleteArray(&deleteArray_TProofDrawHist);
      instance.SetDestructor(&destruct_TProofDrawHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawHist*)
   {
      return GenerateInitInstanceLocal((::TProofDrawHist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawHist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDrawEventList(void *p = 0);
   static void *newArray_TProofDrawEventList(Long_t size, void *p);
   static void delete_TProofDrawEventList(void *p);
   static void deleteArray_TProofDrawEventList(void *p);
   static void destruct_TProofDrawEventList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawEventList*)
   {
      ::TProofDrawEventList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDrawEventList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawEventList", ::TProofDrawEventList::Class_Version(), "TProofDraw.h", 124,
                  typeid(::TProofDrawEventList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDrawEventList::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawEventList) );
      instance.SetNew(&new_TProofDrawEventList);
      instance.SetNewArray(&newArray_TProofDrawEventList);
      instance.SetDelete(&delete_TProofDrawEventList);
      instance.SetDeleteArray(&deleteArray_TProofDrawEventList);
      instance.SetDestructor(&destruct_TProofDrawEventList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawEventList*)
   {
      return GenerateInitInstanceLocal((::TProofDrawEventList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawEventList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDrawEntryList(void *p = 0);
   static void *newArray_TProofDrawEntryList(Long_t size, void *p);
   static void delete_TProofDrawEntryList(void *p);
   static void deleteArray_TProofDrawEntryList(void *p);
   static void destruct_TProofDrawEntryList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawEntryList*)
   {
      ::TProofDrawEntryList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDrawEntryList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawEntryList", ::TProofDrawEntryList::Class_Version(), "TProofDraw.h", 145,
                  typeid(::TProofDrawEntryList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDrawEntryList::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawEntryList) );
      instance.SetNew(&new_TProofDrawEntryList);
      instance.SetNewArray(&newArray_TProofDrawEntryList);
      instance.SetDelete(&delete_TProofDrawEntryList);
      instance.SetDeleteArray(&deleteArray_TProofDrawEntryList);
      instance.SetDestructor(&destruct_TProofDrawEntryList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawEntryList*)
   {
      return GenerateInitInstanceLocal((::TProofDrawEntryList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawEntryList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDrawProfile(void *p = 0);
   static void *newArray_TProofDrawProfile(Long_t size, void *p);
   static void delete_TProofDrawProfile(void *p);
   static void deleteArray_TProofDrawProfile(void *p);
   static void destruct_TProofDrawProfile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawProfile*)
   {
      ::TProofDrawProfile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDrawProfile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawProfile", ::TProofDrawProfile::Class_Version(), "TProofDraw.h", 165,
                  typeid(::TProofDrawProfile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDrawProfile::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawProfile) );
      instance.SetNew(&new_TProofDrawProfile);
      instance.SetNewArray(&newArray_TProofDrawProfile);
      instance.SetDelete(&delete_TProofDrawProfile);
      instance.SetDeleteArray(&deleteArray_TProofDrawProfile);
      instance.SetDestructor(&destruct_TProofDrawProfile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawProfile*)
   {
      return GenerateInitInstanceLocal((::TProofDrawProfile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawProfile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDrawProfile2D(void *p = 0);
   static void *newArray_TProofDrawProfile2D(Long_t size, void *p);
   static void delete_TProofDrawProfile2D(void *p);
   static void deleteArray_TProofDrawProfile2D(void *p);
   static void destruct_TProofDrawProfile2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawProfile2D*)
   {
      ::TProofDrawProfile2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDrawProfile2D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawProfile2D", ::TProofDrawProfile2D::Class_Version(), "TProofDraw.h", 184,
                  typeid(::TProofDrawProfile2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDrawProfile2D::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawProfile2D) );
      instance.SetNew(&new_TProofDrawProfile2D);
      instance.SetNewArray(&newArray_TProofDrawProfile2D);
      instance.SetDelete(&delete_TProofDrawProfile2D);
      instance.SetDeleteArray(&deleteArray_TProofDrawProfile2D);
      instance.SetDestructor(&destruct_TProofDrawProfile2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawProfile2D*)
   {
      return GenerateInitInstanceLocal((::TProofDrawProfile2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawProfile2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDrawGraph(void *p = 0);
   static void *newArray_TProofDrawGraph(Long_t size, void *p);
   static void delete_TProofDrawGraph(void *p);
   static void deleteArray_TProofDrawGraph(void *p);
   static void destruct_TProofDrawGraph(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawGraph*)
   {
      ::TProofDrawGraph *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDrawGraph >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawGraph", ::TProofDrawGraph::Class_Version(), "TProofDraw.h", 203,
                  typeid(::TProofDrawGraph), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDrawGraph::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawGraph) );
      instance.SetNew(&new_TProofDrawGraph);
      instance.SetNewArray(&newArray_TProofDrawGraph);
      instance.SetDelete(&delete_TProofDrawGraph);
      instance.SetDeleteArray(&deleteArray_TProofDrawGraph);
      instance.SetDestructor(&destruct_TProofDrawGraph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawGraph*)
   {
      return GenerateInitInstanceLocal((::TProofDrawGraph*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawGraph*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDrawPolyMarker3D(void *p = 0);
   static void *newArray_TProofDrawPolyMarker3D(Long_t size, void *p);
   static void delete_TProofDrawPolyMarker3D(void *p);
   static void deleteArray_TProofDrawPolyMarker3D(void *p);
   static void destruct_TProofDrawPolyMarker3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawPolyMarker3D*)
   {
      ::TProofDrawPolyMarker3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDrawPolyMarker3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawPolyMarker3D", ::TProofDrawPolyMarker3D::Class_Version(), "TProofDraw.h", 221,
                  typeid(::TProofDrawPolyMarker3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDrawPolyMarker3D::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawPolyMarker3D) );
      instance.SetNew(&new_TProofDrawPolyMarker3D);
      instance.SetNewArray(&newArray_TProofDrawPolyMarker3D);
      instance.SetDelete(&delete_TProofDrawPolyMarker3D);
      instance.SetDeleteArray(&deleteArray_TProofDrawPolyMarker3D);
      instance.SetDestructor(&destruct_TProofDrawPolyMarker3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawPolyMarker3D*)
   {
      return GenerateInitInstanceLocal((::TProofDrawPolyMarker3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawPolyMarker3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR_Dictionary();
   static void TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR_TClassManip(TClass*);
   static void *new_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p = 0);
   static void *newArray_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(Long_t size, void *p);
   static void delete_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p);
   static void deleteArray_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p);
   static void destruct_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p);
   static Long64_t merge_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)
   {
      ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>", ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::Class_Version(), "TProofDraw.h", 239,
                  typeid(::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>) );
      instance.SetNew(&new_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.SetNewArray(&newArray_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.SetDelete(&delete_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.SetDeleteArray(&deleteArray_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.SetDestructor(&destruct_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.SetMerge(&merge_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)
   {
      return GenerateInitInstanceLocal((::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)0x0)->GetClass();
      TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR_TClassManip(theClass);
   return theClass;
   }

   static void TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_Dictionary();
   static void TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_TClassManip(TClass*);
   static void *new_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p = 0);
   static void *newArray_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(Long_t size, void *p);
   static void delete_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p);
   static void deleteArray_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p);
   static void destruct_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p);
   static Long64_t merge_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)
   {
      ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>", ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::Class_Version(), "TProofDraw.h", 239,
                  typeid(::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>) );
      instance.SetNew(&new_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.SetNewArray(&newArray_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.SetDelete(&delete_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.SetDeleteArray(&deleteArray_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.SetDestructor(&destruct_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.SetMerge(&merge_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)
   {
      return GenerateInitInstanceLocal((::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)0x0)->GetClass();
      TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_TClassManip(theClass);
   return theClass;
   }

   static void TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDrawListOfGraphs(void *p = 0);
   static void *newArray_TProofDrawListOfGraphs(Long_t size, void *p);
   static void delete_TProofDrawListOfGraphs(void *p);
   static void deleteArray_TProofDrawListOfGraphs(void *p);
   static void destruct_TProofDrawListOfGraphs(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawListOfGraphs*)
   {
      ::TProofDrawListOfGraphs *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDrawListOfGraphs >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawListOfGraphs", ::TProofDrawListOfGraphs::Class_Version(), "TProofDraw.h", 257,
                  typeid(::TProofDrawListOfGraphs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDrawListOfGraphs::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawListOfGraphs) );
      instance.SetNew(&new_TProofDrawListOfGraphs);
      instance.SetNewArray(&newArray_TProofDrawListOfGraphs);
      instance.SetDelete(&delete_TProofDrawListOfGraphs);
      instance.SetDeleteArray(&deleteArray_TProofDrawListOfGraphs);
      instance.SetDestructor(&destruct_TProofDrawListOfGraphs);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawListOfGraphs*)
   {
      return GenerateInitInstanceLocal((::TProofDrawListOfGraphs*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawListOfGraphs*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TProofDrawListOfGraphscLcLPoint3D_t_Dictionary();
   static void TProofDrawListOfGraphscLcLPoint3D_t_TClassManip(TClass*);
   static void *new_TProofDrawListOfGraphscLcLPoint3D_t(void *p = 0);
   static void *newArray_TProofDrawListOfGraphscLcLPoint3D_t(Long_t size, void *p);
   static void delete_TProofDrawListOfGraphscLcLPoint3D_t(void *p);
   static void deleteArray_TProofDrawListOfGraphscLcLPoint3D_t(void *p);
   static void destruct_TProofDrawListOfGraphscLcLPoint3D_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawListOfGraphs::Point3D_t*)
   {
      ::TProofDrawListOfGraphs::Point3D_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TProofDrawListOfGraphs::Point3D_t));
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawListOfGraphs::Point3D_t", "TProofDraw.h", 260,
                  typeid(::TProofDrawListOfGraphs::Point3D_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TProofDrawListOfGraphscLcLPoint3D_t_Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawListOfGraphs::Point3D_t) );
      instance.SetNew(&new_TProofDrawListOfGraphscLcLPoint3D_t);
      instance.SetNewArray(&newArray_TProofDrawListOfGraphscLcLPoint3D_t);
      instance.SetDelete(&delete_TProofDrawListOfGraphscLcLPoint3D_t);
      instance.SetDeleteArray(&deleteArray_TProofDrawListOfGraphscLcLPoint3D_t);
      instance.SetDestructor(&destruct_TProofDrawListOfGraphscLcLPoint3D_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawListOfGraphs::Point3D_t*)
   {
      return GenerateInitInstanceLocal((::TProofDrawListOfGraphs::Point3D_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawListOfGraphs::Point3D_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TProofDrawListOfGraphscLcLPoint3D_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfGraphs::Point3D_t*)0x0)->GetClass();
      TProofDrawListOfGraphscLcLPoint3D_t_TClassManip(theClass);
   return theClass;
   }

   static void TProofDrawListOfGraphscLcLPoint3D_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TProofDrawListOfPolyMarkers3D(void *p = 0);
   static void *newArray_TProofDrawListOfPolyMarkers3D(Long_t size, void *p);
   static void delete_TProofDrawListOfPolyMarkers3D(void *p);
   static void deleteArray_TProofDrawListOfPolyMarkers3D(void *p);
   static void destruct_TProofDrawListOfPolyMarkers3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawListOfPolyMarkers3D*)
   {
      ::TProofDrawListOfPolyMarkers3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProofDrawListOfPolyMarkers3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawListOfPolyMarkers3D", ::TProofDrawListOfPolyMarkers3D::Class_Version(), "TProofDraw.h", 281,
                  typeid(::TProofDrawListOfPolyMarkers3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProofDrawListOfPolyMarkers3D::Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawListOfPolyMarkers3D) );
      instance.SetNew(&new_TProofDrawListOfPolyMarkers3D);
      instance.SetNewArray(&newArray_TProofDrawListOfPolyMarkers3D);
      instance.SetDelete(&delete_TProofDrawListOfPolyMarkers3D);
      instance.SetDeleteArray(&deleteArray_TProofDrawListOfPolyMarkers3D);
      instance.SetDestructor(&destruct_TProofDrawListOfPolyMarkers3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawListOfPolyMarkers3D*)
   {
      return GenerateInitInstanceLocal((::TProofDrawListOfPolyMarkers3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawListOfPolyMarkers3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TProofDrawListOfPolyMarkers3DcLcLPoint4D_t_Dictionary();
   static void TProofDrawListOfPolyMarkers3DcLcLPoint4D_t_TClassManip(TClass*);
   static void *new_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(void *p = 0);
   static void *newArray_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(Long_t size, void *p);
   static void delete_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(void *p);
   static void deleteArray_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(void *p);
   static void destruct_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProofDrawListOfPolyMarkers3D::Point4D_t*)
   {
      ::TProofDrawListOfPolyMarkers3D::Point4D_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TProofDrawListOfPolyMarkers3D::Point4D_t));
      static ::ROOT::TGenericClassInfo 
         instance("TProofDrawListOfPolyMarkers3D::Point4D_t", "TProofDraw.h", 284,
                  typeid(::TProofDrawListOfPolyMarkers3D::Point4D_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TProofDrawListOfPolyMarkers3DcLcLPoint4D_t_Dictionary, isa_proxy, 4,
                  sizeof(::TProofDrawListOfPolyMarkers3D::Point4D_t) );
      instance.SetNew(&new_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t);
      instance.SetNewArray(&newArray_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t);
      instance.SetDelete(&delete_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t);
      instance.SetDeleteArray(&deleteArray_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t);
      instance.SetDestructor(&destruct_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProofDrawListOfPolyMarkers3D::Point4D_t*)
   {
      return GenerateInitInstanceLocal((::TProofDrawListOfPolyMarkers3D::Point4D_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TProofDrawListOfPolyMarkers3D::Point4D_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TProofDrawListOfPolyMarkers3DcLcLPoint4D_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfPolyMarkers3D::Point4D_t*)0x0)->GetClass();
      TProofDrawListOfPolyMarkers3DcLcLPoint4D_t_TClassManip(theClass);
   return theClass;
   }

   static void TProofDrawListOfPolyMarkers3DcLcLPoint4D_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TProofDraw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDraw::Class_Name()
{
   return "TProofDraw";
}

//______________________________________________________________________________
const char *TProofDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDraw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDraw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDraw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDraw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDrawHist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDrawHist::Class_Name()
{
   return "TProofDrawHist";
}

//______________________________________________________________________________
const char *TProofDrawHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawHist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDrawHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawHist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDrawHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawHist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDrawHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawHist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDrawEventList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDrawEventList::Class_Name()
{
   return "TProofDrawEventList";
}

//______________________________________________________________________________
const char *TProofDrawEventList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawEventList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDrawEventList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawEventList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDrawEventList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawEventList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDrawEventList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawEventList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDrawEntryList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDrawEntryList::Class_Name()
{
   return "TProofDrawEntryList";
}

//______________________________________________________________________________
const char *TProofDrawEntryList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawEntryList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDrawEntryList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawEntryList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDrawEntryList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawEntryList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDrawEntryList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawEntryList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDrawProfile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDrawProfile::Class_Name()
{
   return "TProofDrawProfile";
}

//______________________________________________________________________________
const char *TProofDrawProfile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawProfile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDrawProfile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawProfile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDrawProfile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawProfile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDrawProfile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawProfile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDrawProfile2D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDrawProfile2D::Class_Name()
{
   return "TProofDrawProfile2D";
}

//______________________________________________________________________________
const char *TProofDrawProfile2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawProfile2D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDrawProfile2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawProfile2D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDrawProfile2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawProfile2D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDrawProfile2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawProfile2D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDrawGraph::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDrawGraph::Class_Name()
{
   return "TProofDrawGraph";
}

//______________________________________________________________________________
const char *TProofDrawGraph::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawGraph*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDrawGraph::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawGraph*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDrawGraph::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawGraph*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDrawGraph::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawGraph*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDrawPolyMarker3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDrawPolyMarker3D::Class_Name()
{
   return "TProofDrawPolyMarker3D";
}

//______________________________________________________________________________
const char *TProofDrawPolyMarker3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawPolyMarker3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDrawPolyMarker3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawPolyMarker3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDrawPolyMarker3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawPolyMarker3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDrawPolyMarker3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawPolyMarker3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::Class_Name()
{
   return "TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>";
}

//______________________________________________________________________________
template <> const char *TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::Class_Name()
{
   return "TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>";
}

//______________________________________________________________________________
template <> const char *TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDrawListOfGraphs::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDrawListOfGraphs::Class_Name()
{
   return "TProofDrawListOfGraphs";
}

//______________________________________________________________________________
const char *TProofDrawListOfGraphs::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfGraphs*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDrawListOfGraphs::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfGraphs*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDrawListOfGraphs::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfGraphs*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDrawListOfGraphs::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfGraphs*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProofDrawListOfPolyMarkers3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProofDrawListOfPolyMarkers3D::Class_Name()
{
   return "TProofDrawListOfPolyMarkers3D";
}

//______________________________________________________________________________
const char *TProofDrawListOfPolyMarkers3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfPolyMarkers3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProofDrawListOfPolyMarkers3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfPolyMarkers3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProofDrawListOfPolyMarkers3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfPolyMarkers3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProofDrawListOfPolyMarkers3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProofDrawListOfPolyMarkers3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TProofDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDraw.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDraw::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDraw::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TProofDraw(void *p) {
      delete ((::TProofDraw*)p);
   }
   static void deleteArray_TProofDraw(void *p) {
      delete [] ((::TProofDraw*)p);
   }
   static void destruct_TProofDraw(void *p) {
      typedef ::TProofDraw current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDraw

//______________________________________________________________________________
void TProofDrawHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDrawHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDrawHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDrawHist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawHist(void *p) {
      return  p ? new(p) ::TProofDrawHist : new ::TProofDrawHist;
   }
   static void *newArray_TProofDrawHist(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawHist[nElements] : new ::TProofDrawHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawHist(void *p) {
      delete ((::TProofDrawHist*)p);
   }
   static void deleteArray_TProofDrawHist(void *p) {
      delete [] ((::TProofDrawHist*)p);
   }
   static void destruct_TProofDrawHist(void *p) {
      typedef ::TProofDrawHist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawHist

//______________________________________________________________________________
void TProofDrawEventList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDrawEventList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDrawEventList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDrawEventList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawEventList(void *p) {
      return  p ? new(p) ::TProofDrawEventList : new ::TProofDrawEventList;
   }
   static void *newArray_TProofDrawEventList(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawEventList[nElements] : new ::TProofDrawEventList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawEventList(void *p) {
      delete ((::TProofDrawEventList*)p);
   }
   static void deleteArray_TProofDrawEventList(void *p) {
      delete [] ((::TProofDrawEventList*)p);
   }
   static void destruct_TProofDrawEventList(void *p) {
      typedef ::TProofDrawEventList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawEventList

//______________________________________________________________________________
void TProofDrawEntryList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDrawEntryList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDrawEntryList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDrawEntryList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawEntryList(void *p) {
      return  p ? new(p) ::TProofDrawEntryList : new ::TProofDrawEntryList;
   }
   static void *newArray_TProofDrawEntryList(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawEntryList[nElements] : new ::TProofDrawEntryList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawEntryList(void *p) {
      delete ((::TProofDrawEntryList*)p);
   }
   static void deleteArray_TProofDrawEntryList(void *p) {
      delete [] ((::TProofDrawEntryList*)p);
   }
   static void destruct_TProofDrawEntryList(void *p) {
      typedef ::TProofDrawEntryList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawEntryList

//______________________________________________________________________________
void TProofDrawProfile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDrawProfile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDrawProfile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDrawProfile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawProfile(void *p) {
      return  p ? new(p) ::TProofDrawProfile : new ::TProofDrawProfile;
   }
   static void *newArray_TProofDrawProfile(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawProfile[nElements] : new ::TProofDrawProfile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawProfile(void *p) {
      delete ((::TProofDrawProfile*)p);
   }
   static void deleteArray_TProofDrawProfile(void *p) {
      delete [] ((::TProofDrawProfile*)p);
   }
   static void destruct_TProofDrawProfile(void *p) {
      typedef ::TProofDrawProfile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawProfile

//______________________________________________________________________________
void TProofDrawProfile2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDrawProfile2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDrawProfile2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDrawProfile2D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawProfile2D(void *p) {
      return  p ? new(p) ::TProofDrawProfile2D : new ::TProofDrawProfile2D;
   }
   static void *newArray_TProofDrawProfile2D(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawProfile2D[nElements] : new ::TProofDrawProfile2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawProfile2D(void *p) {
      delete ((::TProofDrawProfile2D*)p);
   }
   static void deleteArray_TProofDrawProfile2D(void *p) {
      delete [] ((::TProofDrawProfile2D*)p);
   }
   static void destruct_TProofDrawProfile2D(void *p) {
      typedef ::TProofDrawProfile2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawProfile2D

//______________________________________________________________________________
void TProofDrawGraph::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDrawGraph.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDrawGraph::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDrawGraph::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawGraph(void *p) {
      return  p ? new(p) ::TProofDrawGraph : new ::TProofDrawGraph;
   }
   static void *newArray_TProofDrawGraph(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawGraph[nElements] : new ::TProofDrawGraph[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawGraph(void *p) {
      delete ((::TProofDrawGraph*)p);
   }
   static void deleteArray_TProofDrawGraph(void *p) {
      delete [] ((::TProofDrawGraph*)p);
   }
   static void destruct_TProofDrawGraph(void *p) {
      typedef ::TProofDrawGraph current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawGraph

//______________________________________________________________________________
void TProofDrawPolyMarker3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDrawPolyMarker3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDrawPolyMarker3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDrawPolyMarker3D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawPolyMarker3D(void *p) {
      return  p ? new(p) ::TProofDrawPolyMarker3D : new ::TProofDrawPolyMarker3D;
   }
   static void *newArray_TProofDrawPolyMarker3D(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawPolyMarker3D[nElements] : new ::TProofDrawPolyMarker3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawPolyMarker3D(void *p) {
      delete ((::TProofDrawPolyMarker3D*)p);
   }
   static void deleteArray_TProofDrawPolyMarker3D(void *p) {
      delete [] ((::TProofDrawPolyMarker3D*)p);
   }
   static void destruct_TProofDrawPolyMarker3D(void *p) {
      typedef ::TProofDrawPolyMarker3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawPolyMarker3D

//______________________________________________________________________________
template <> void TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p) {
      return  p ? new(p) ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t> : new ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>;
   }
   static void *newArray_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(Long_t nElements, void *p) {
      return p ? new(p) ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>[nElements] : new ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p) {
      delete ((::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)p);
   }
   static void deleteArray_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p) {
      delete [] ((::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)p);
   }
   static void destruct_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p) {
      typedef ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>

//______________________________________________________________________________
template <> void TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p) {
      return  p ? new(p) ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t> : new ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>;
   }
   static void *newArray_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(Long_t nElements, void *p) {
      return p ? new(p) ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>[nElements] : new ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p) {
      delete ((::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)p);
   }
   static void deleteArray_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p) {
      delete [] ((::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)p);
   }
   static void destruct_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p) {
      typedef ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>

//______________________________________________________________________________
void TProofDrawListOfGraphs::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDrawListOfGraphs.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDrawListOfGraphs::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDrawListOfGraphs::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawListOfGraphs(void *p) {
      return  p ? new(p) ::TProofDrawListOfGraphs : new ::TProofDrawListOfGraphs;
   }
   static void *newArray_TProofDrawListOfGraphs(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawListOfGraphs[nElements] : new ::TProofDrawListOfGraphs[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawListOfGraphs(void *p) {
      delete ((::TProofDrawListOfGraphs*)p);
   }
   static void deleteArray_TProofDrawListOfGraphs(void *p) {
      delete [] ((::TProofDrawListOfGraphs*)p);
   }
   static void destruct_TProofDrawListOfGraphs(void *p) {
      typedef ::TProofDrawListOfGraphs current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawListOfGraphs

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawListOfGraphscLcLPoint3D_t(void *p) {
      return  p ? new(p) ::TProofDrawListOfGraphs::Point3D_t : new ::TProofDrawListOfGraphs::Point3D_t;
   }
   static void *newArray_TProofDrawListOfGraphscLcLPoint3D_t(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawListOfGraphs::Point3D_t[nElements] : new ::TProofDrawListOfGraphs::Point3D_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawListOfGraphscLcLPoint3D_t(void *p) {
      delete ((::TProofDrawListOfGraphs::Point3D_t*)p);
   }
   static void deleteArray_TProofDrawListOfGraphscLcLPoint3D_t(void *p) {
      delete [] ((::TProofDrawListOfGraphs::Point3D_t*)p);
   }
   static void destruct_TProofDrawListOfGraphscLcLPoint3D_t(void *p) {
      typedef ::TProofDrawListOfGraphs::Point3D_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawListOfGraphs::Point3D_t

//______________________________________________________________________________
void TProofDrawListOfPolyMarkers3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProofDrawListOfPolyMarkers3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProofDrawListOfPolyMarkers3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProofDrawListOfPolyMarkers3D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawListOfPolyMarkers3D(void *p) {
      return  p ? new(p) ::TProofDrawListOfPolyMarkers3D : new ::TProofDrawListOfPolyMarkers3D;
   }
   static void *newArray_TProofDrawListOfPolyMarkers3D(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawListOfPolyMarkers3D[nElements] : new ::TProofDrawListOfPolyMarkers3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawListOfPolyMarkers3D(void *p) {
      delete ((::TProofDrawListOfPolyMarkers3D*)p);
   }
   static void deleteArray_TProofDrawListOfPolyMarkers3D(void *p) {
      delete [] ((::TProofDrawListOfPolyMarkers3D*)p);
   }
   static void destruct_TProofDrawListOfPolyMarkers3D(void *p) {
      typedef ::TProofDrawListOfPolyMarkers3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawListOfPolyMarkers3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(void *p) {
      return  p ? new(p) ::TProofDrawListOfPolyMarkers3D::Point4D_t : new ::TProofDrawListOfPolyMarkers3D::Point4D_t;
   }
   static void *newArray_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(Long_t nElements, void *p) {
      return p ? new(p) ::TProofDrawListOfPolyMarkers3D::Point4D_t[nElements] : new ::TProofDrawListOfPolyMarkers3D::Point4D_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(void *p) {
      delete ((::TProofDrawListOfPolyMarkers3D::Point4D_t*)p);
   }
   static void deleteArray_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(void *p) {
      delete [] ((::TProofDrawListOfPolyMarkers3D::Point4D_t*)p);
   }
   static void destruct_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t(void *p) {
      typedef ::TProofDrawListOfPolyMarkers3D::Point4D_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TProofDrawListOfPolyMarkers3D::Point4D_t

namespace ROOT {
   static TClass *vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_Dictionary();
   static void vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_TClassManip(TClass*);
   static void *new_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p = 0);
   static void *newArray_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(Long_t size, void *p);
   static void delete_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p);
   static void deleteArray_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p);
   static void destruct_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TProofDrawListOfPolyMarkers3D::Point4D_t>*)
   {
      vector<TProofDrawListOfPolyMarkers3D::Point4D_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TProofDrawListOfPolyMarkers3D::Point4D_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TProofDrawListOfPolyMarkers3D::Point4D_t>", -2, "vector", 216,
                  typeid(vector<TProofDrawListOfPolyMarkers3D::Point4D_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TProofDrawListOfPolyMarkers3D::Point4D_t>) );
      instance.SetNew(&new_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.SetNewArray(&newArray_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.SetDelete(&delete_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.SetDestructor(&destruct_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TProofDrawListOfPolyMarkers3D::Point4D_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TProofDrawListOfPolyMarkers3D::Point4D_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TProofDrawListOfPolyMarkers3D::Point4D_t>*)0x0)->GetClass();
      vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TProofDrawListOfPolyMarkers3D::Point4D_t> : new vector<TProofDrawListOfPolyMarkers3D::Point4D_t>;
   }
   static void *newArray_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TProofDrawListOfPolyMarkers3D::Point4D_t>[nElements] : new vector<TProofDrawListOfPolyMarkers3D::Point4D_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p) {
      delete ((vector<TProofDrawListOfPolyMarkers3D::Point4D_t>*)p);
   }
   static void deleteArray_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p) {
      delete [] ((vector<TProofDrawListOfPolyMarkers3D::Point4D_t>*)p);
   }
   static void destruct_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR(void *p) {
      typedef vector<TProofDrawListOfPolyMarkers3D::Point4D_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TProofDrawListOfPolyMarkers3D::Point4D_t>

namespace ROOT {
   static TClass *vectorlETProofDrawListOfGraphscLcLPoint3D_tgR_Dictionary();
   static void vectorlETProofDrawListOfGraphscLcLPoint3D_tgR_TClassManip(TClass*);
   static void *new_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p = 0);
   static void *newArray_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(Long_t size, void *p);
   static void delete_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p);
   static void deleteArray_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p);
   static void destruct_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TProofDrawListOfGraphs::Point3D_t>*)
   {
      vector<TProofDrawListOfGraphs::Point3D_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TProofDrawListOfGraphs::Point3D_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TProofDrawListOfGraphs::Point3D_t>", -2, "vector", 216,
                  typeid(vector<TProofDrawListOfGraphs::Point3D_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETProofDrawListOfGraphscLcLPoint3D_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TProofDrawListOfGraphs::Point3D_t>) );
      instance.SetNew(&new_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.SetNewArray(&newArray_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.SetDelete(&delete_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.SetDestructor(&destruct_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TProofDrawListOfGraphs::Point3D_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TProofDrawListOfGraphs::Point3D_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETProofDrawListOfGraphscLcLPoint3D_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TProofDrawListOfGraphs::Point3D_t>*)0x0)->GetClass();
      vectorlETProofDrawListOfGraphscLcLPoint3D_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETProofDrawListOfGraphscLcLPoint3D_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TProofDrawListOfGraphs::Point3D_t> : new vector<TProofDrawListOfGraphs::Point3D_t>;
   }
   static void *newArray_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TProofDrawListOfGraphs::Point3D_t>[nElements] : new vector<TProofDrawListOfGraphs::Point3D_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p) {
      delete ((vector<TProofDrawListOfGraphs::Point3D_t>*)p);
   }
   static void deleteArray_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p) {
      delete [] ((vector<TProofDrawListOfGraphs::Point3D_t>*)p);
   }
   static void destruct_vectorlETProofDrawListOfGraphscLcLPoint3D_tgR(void *p) {
      typedef vector<TProofDrawListOfGraphs::Point3D_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TProofDrawListOfGraphs::Point3D_t>

namespace {
  void TriggerDictionaryInitialization_libProofDraw_Impl() {
    static const char* headers[] = {
"TProofDraw.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libProofDraw dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Tree drawing selector for PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDraw;
class __attribute__((annotate(R"ATTRDUMP(Tree drawing selector for PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDrawHist;
class __attribute__((annotate(R"ATTRDUMP(Tree drawing selector for PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDrawEventList;
class __attribute__((annotate(R"ATTRDUMP(A Selectoor to fill a TEntryList from TTree::Draw)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDrawEntryList;
class __attribute__((annotate(R"ATTRDUMP(Tree drawing selector for PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDrawProfile;
class __attribute__((annotate(R"ATTRDUMP(Tree drawing selector for PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDrawProfile2D;
class __attribute__((annotate(R"ATTRDUMP(Tree drawing selector for PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDrawGraph;
class __attribute__((annotate(R"ATTRDUMP(Tree drawing selector for PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDrawPolyMarker3D;
class __attribute__((annotate(R"ATTRDUMP(Tree drawing selector for PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDrawListOfGraphs;
class __attribute__((annotate(R"ATTRDUMP(Tree drawing selector for PROOF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TProofDraw.h")))  TProofDrawListOfPolyMarkers3D;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libProofDraw dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TProofDraw.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TProofDraw", payloadCode, "@",
"TProofDrawEntryList", payloadCode, "@",
"TProofDrawEventList", payloadCode, "@",
"TProofDrawGraph", payloadCode, "@",
"TProofDrawHist", payloadCode, "@",
"TProofDrawListOfGraphs", payloadCode, "@",
"TProofDrawListOfGraphs::Point3D_t", payloadCode, "@",
"TProofDrawListOfPolyMarkers3D", payloadCode, "@",
"TProofDrawListOfPolyMarkers3D::Point4D_t", payloadCode, "@",
"TProofDrawPolyMarker3D", payloadCode, "@",
"TProofDrawProfile", payloadCode, "@",
"TProofDrawProfile2D", payloadCode, "@",
"TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t>", payloadCode, "@",
"TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libProofDraw",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libProofDraw_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libProofDraw_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libProofDraw() {
  TriggerDictionaryInitialization_libProofDraw_Impl();
}
