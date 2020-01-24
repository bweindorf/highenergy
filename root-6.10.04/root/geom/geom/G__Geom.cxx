// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Geom

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
#include "TGeoAtt.h"
#include "TGeoStateInfo.h"
#include "TGeoBoolNode.h"
#include "TGeoMedium.h"
#include "TGeoMaterial.h"
#include "TGeoMatrix.h"
#include "TGeoVolume.h"
#include "TGeoNode.h"
#include "TGeoVoxelFinder.h"
#include "TGeoShape.h"
#include "TGeoBBox.h"
#include "TGeoPara.h"
#include "TGeoTube.h"
#include "TGeoTorus.h"
#include "TGeoSphere.h"
#include "TGeoEltu.h"
#include "TGeoHype.h"
#include "TGeoCone.h"
#include "TGeoPcon.h"
#include "TGeoPgon.h"
#include "TGeoArb8.h"
#include "TGeoTrd1.h"
#include "TGeoTrd2.h"
#include "TGeoManager.h"
#include "TGeoCompositeShape.h"
#include "TGeoShapeAssembly.h"
#include "TGeoScaledShape.h"
#include "TVirtualGeoPainter.h"
#include "TVirtualGeoTrack.h"
#include "TVirtualGeoConverter.h"
#include "TGeoPolygon.h"
#include "TGeoXtru.h"
#include "TGeoPhysicalNode.h"
#include "TGeoHelix.h"
#include "TGeoParaboloid.h"
#include "TGeoElement.h"
#include "TGeoHalfSpace.h"
#include "TGeoBuilder.h"
#include "TGeoNavigator.h"
#include "TGeoPatternFinder.h"
#include "TGeoCache.h"
#include "TVirtualMagField.h"
#include "TGeoUniformMagField.h"
#include "TGeoGlobalMagField.h"
#include "TGeoBranchArray.h"
#include "TGeoExtension.h"
#include "TGeoParallelWorld.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *pairlEthreadcLcLidcOintgR_Dictionary();
   static void pairlEthreadcLcLidcOintgR_TClassManip(TClass*);
   static void *new_pairlEthreadcLcLidcOintgR(void *p = 0);
   static void *newArray_pairlEthreadcLcLidcOintgR(Long_t size, void *p);
   static void delete_pairlEthreadcLcLidcOintgR(void *p);
   static void deleteArray_pairlEthreadcLcLidcOintgR(void *p);
   static void destruct_pairlEthreadcLcLidcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<thread::id,int>*)
   {
      pair<thread::id,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<thread::id,int>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<thread::id,int>", "string", 198,
                  typeid(pair<thread::id,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEthreadcLcLidcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<thread::id,int>) );
      instance.SetNew(&new_pairlEthreadcLcLidcOintgR);
      instance.SetNewArray(&newArray_pairlEthreadcLcLidcOintgR);
      instance.SetDelete(&delete_pairlEthreadcLcLidcOintgR);
      instance.SetDeleteArray(&deleteArray_pairlEthreadcLcLidcOintgR);
      instance.SetDestructor(&destruct_pairlEthreadcLcLidcOintgR);

      ::ROOT::AddClassAlternate("pair<thread::id,int>","pair<std::thread::id,Int_t>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<thread::id,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEthreadcLcLidcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<thread::id,int>*)0x0)->GetClass();
      pairlEthreadcLcLidcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEthreadcLcLidcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEthreadcLcLidcOTGeoNavigatorArraymUgR_Dictionary();
   static void pairlEthreadcLcLidcOTGeoNavigatorArraymUgR_TClassManip(TClass*);
   static void *new_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p = 0);
   static void *newArray_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(Long_t size, void *p);
   static void delete_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p);
   static void deleteArray_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p);
   static void destruct_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<thread::id,TGeoNavigatorArray*>*)
   {
      pair<thread::id,TGeoNavigatorArray*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<thread::id,TGeoNavigatorArray*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<thread::id,TGeoNavigatorArray*>", "string", 198,
                  typeid(pair<thread::id,TGeoNavigatorArray*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEthreadcLcLidcOTGeoNavigatorArraymUgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<thread::id,TGeoNavigatorArray*>) );
      instance.SetNew(&new_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR);
      instance.SetNewArray(&newArray_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR);
      instance.SetDelete(&delete_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR);
      instance.SetDeleteArray(&deleteArray_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR);
      instance.SetDestructor(&destruct_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR);

      ::ROOT::AddClassAlternate("pair<thread::id,TGeoNavigatorArray*>","pair<std::thread::id,TGeoNavigatorArray*>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<thread::id,TGeoNavigatorArray*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEthreadcLcLidcOTGeoNavigatorArraymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<thread::id,TGeoNavigatorArray*>*)0x0)->GetClass();
      pairlEthreadcLcLidcOTGeoNavigatorArraymUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEthreadcLcLidcOTGeoNavigatorArraymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoAtt(void *p = 0);
   static void *newArray_TGeoAtt(Long_t size, void *p);
   static void delete_TGeoAtt(void *p);
   static void deleteArray_TGeoAtt(void *p);
   static void destruct_TGeoAtt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoAtt*)
   {
      ::TGeoAtt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoAtt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoAtt", ::TGeoAtt::Class_Version(), "TGeoAtt.h", 17,
                  typeid(::TGeoAtt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoAtt::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoAtt) );
      instance.SetNew(&new_TGeoAtt);
      instance.SetNewArray(&newArray_TGeoAtt);
      instance.SetDelete(&delete_TGeoAtt);
      instance.SetDeleteArray(&deleteArray_TGeoAtt);
      instance.SetDestructor(&destruct_TGeoAtt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoAtt*)
   {
      return GenerateInitInstanceLocal((::TGeoAtt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoAtt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoMatrix(void *p);
   static void deleteArray_TGeoMatrix(void *p);
   static void destruct_TGeoMatrix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMatrix*)
   {
      ::TGeoMatrix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMatrix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMatrix", ::TGeoMatrix::Class_Version(), "TGeoMatrix.h", 38,
                  typeid(::TGeoMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMatrix::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoMatrix) );
      instance.SetDelete(&delete_TGeoMatrix);
      instance.SetDeleteArray(&deleteArray_TGeoMatrix);
      instance.SetDestructor(&destruct_TGeoMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMatrix*)
   {
      return GenerateInitInstanceLocal((::TGeoMatrix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMatrix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTranslation(void *p = 0);
   static void *newArray_TGeoTranslation(Long_t size, void *p);
   static void delete_TGeoTranslation(void *p);
   static void deleteArray_TGeoTranslation(void *p);
   static void destruct_TGeoTranslation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTranslation*)
   {
      ::TGeoTranslation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTranslation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTranslation", ::TGeoTranslation::Class_Version(), "TGeoMatrix.h", 129,
                  typeid(::TGeoTranslation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTranslation::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTranslation) );
      instance.SetNew(&new_TGeoTranslation);
      instance.SetNewArray(&newArray_TGeoTranslation);
      instance.SetDelete(&delete_TGeoTranslation);
      instance.SetDeleteArray(&deleteArray_TGeoTranslation);
      instance.SetDestructor(&destruct_TGeoTranslation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTranslation*)
   {
      return GenerateInitInstanceLocal((::TGeoTranslation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTranslation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoRotation(void *p = 0);
   static void *newArray_TGeoRotation(Long_t size, void *p);
   static void delete_TGeoRotation(void *p);
   static void deleteArray_TGeoRotation(void *p);
   static void destruct_TGeoRotation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoRotation*)
   {
      ::TGeoRotation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoRotation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoRotation", ::TGeoRotation::Class_Version(), "TGeoMatrix.h", 178,
                  typeid(::TGeoRotation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoRotation::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoRotation) );
      instance.SetNew(&new_TGeoRotation);
      instance.SetNewArray(&newArray_TGeoRotation);
      instance.SetDelete(&delete_TGeoRotation);
      instance.SetDeleteArray(&deleteArray_TGeoRotation);
      instance.SetDestructor(&destruct_TGeoRotation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoRotation*)
   {
      return GenerateInitInstanceLocal((::TGeoRotation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoRotation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoScale(void *p = 0);
   static void *newArray_TGeoScale(Long_t size, void *p);
   static void delete_TGeoScale(void *p);
   static void deleteArray_TGeoScale(void *p);
   static void destruct_TGeoScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoScale*)
   {
      ::TGeoScale *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoScale >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoScale", ::TGeoScale::Class_Version(), "TGeoMatrix.h", 244,
                  typeid(::TGeoScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoScale::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoScale) );
      instance.SetNew(&new_TGeoScale);
      instance.SetNewArray(&newArray_TGeoScale);
      instance.SetDelete(&delete_TGeoScale);
      instance.SetDeleteArray(&deleteArray_TGeoScale);
      instance.SetDestructor(&destruct_TGeoScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoScale*)
   {
      return GenerateInitInstanceLocal((::TGeoScale*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoScale*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCombiTrans(void *p = 0);
   static void *newArray_TGeoCombiTrans(Long_t size, void *p);
   static void delete_TGeoCombiTrans(void *p);
   static void deleteArray_TGeoCombiTrans(void *p);
   static void destruct_TGeoCombiTrans(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCombiTrans*)
   {
      ::TGeoCombiTrans *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCombiTrans >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCombiTrans", ::TGeoCombiTrans::Class_Version(), "TGeoMatrix.h", 283,
                  typeid(::TGeoCombiTrans), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCombiTrans::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCombiTrans) );
      instance.SetNew(&new_TGeoCombiTrans);
      instance.SetNewArray(&newArray_TGeoCombiTrans);
      instance.SetDelete(&delete_TGeoCombiTrans);
      instance.SetDeleteArray(&deleteArray_TGeoCombiTrans);
      instance.SetDestructor(&destruct_TGeoCombiTrans);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCombiTrans*)
   {
      return GenerateInitInstanceLocal((::TGeoCombiTrans*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoCombiTrans*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoGenTrans(void *p = 0);
   static void *newArray_TGeoGenTrans(Long_t size, void *p);
   static void delete_TGeoGenTrans(void *p);
   static void deleteArray_TGeoGenTrans(void *p);
   static void destruct_TGeoGenTrans(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoGenTrans*)
   {
      ::TGeoGenTrans *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoGenTrans >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoGenTrans", ::TGeoGenTrans::Class_Version(), "TGeoMatrix.h", 338,
                  typeid(::TGeoGenTrans), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoGenTrans::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoGenTrans) );
      instance.SetNew(&new_TGeoGenTrans);
      instance.SetNewArray(&newArray_TGeoGenTrans);
      instance.SetDelete(&delete_TGeoGenTrans);
      instance.SetDeleteArray(&deleteArray_TGeoGenTrans);
      instance.SetDestructor(&destruct_TGeoGenTrans);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoGenTrans*)
   {
      return GenerateInitInstanceLocal((::TGeoGenTrans*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoGenTrans*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoIdentity(void *p = 0);
   static void *newArray_TGeoIdentity(Long_t size, void *p);
   static void delete_TGeoIdentity(void *p);
   static void deleteArray_TGeoIdentity(void *p);
   static void destruct_TGeoIdentity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIdentity*)
   {
      ::TGeoIdentity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIdentity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIdentity", ::TGeoIdentity::Class_Version(), "TGeoMatrix.h", 371,
                  typeid(::TGeoIdentity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIdentity::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoIdentity) );
      instance.SetNew(&new_TGeoIdentity);
      instance.SetNewArray(&newArray_TGeoIdentity);
      instance.SetDelete(&delete_TGeoIdentity);
      instance.SetDeleteArray(&deleteArray_TGeoIdentity);
      instance.SetDestructor(&destruct_TGeoIdentity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIdentity*)
   {
      return GenerateInitInstanceLocal((::TGeoIdentity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoIdentity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoHMatrix(void *p = 0);
   static void *newArray_TGeoHMatrix(Long_t size, void *p);
   static void delete_TGeoHMatrix(void *p);
   static void deleteArray_TGeoHMatrix(void *p);
   static void destruct_TGeoHMatrix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoHMatrix*)
   {
      ::TGeoHMatrix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoHMatrix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoHMatrix", ::TGeoHMatrix::Class_Version(), "TGeoMatrix.h", 408,
                  typeid(::TGeoHMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoHMatrix::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoHMatrix) );
      instance.SetNew(&new_TGeoHMatrix);
      instance.SetNewArray(&newArray_TGeoHMatrix);
      instance.SetDelete(&delete_TGeoHMatrix);
      instance.SetDeleteArray(&deleteArray_TGeoHMatrix);
      instance.SetDestructor(&destruct_TGeoHMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoHMatrix*)
   {
      return GenerateInitInstanceLocal((::TGeoHMatrix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoHMatrix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoStateInfo(void *p = 0);
   static void *newArray_TGeoStateInfo(Long_t size, void *p);
   static void delete_TGeoStateInfo(void *p);
   static void deleteArray_TGeoStateInfo(void *p);
   static void destruct_TGeoStateInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoStateInfo*)
   {
      ::TGeoStateInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoStateInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoStateInfo", ::TGeoStateInfo::Class_Version(), "TGeoStateInfo.h", 21,
                  typeid(::TGeoStateInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoStateInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoStateInfo) );
      instance.SetNew(&new_TGeoStateInfo);
      instance.SetNewArray(&newArray_TGeoStateInfo);
      instance.SetDelete(&delete_TGeoStateInfo);
      instance.SetDeleteArray(&deleteArray_TGeoStateInfo);
      instance.SetDestructor(&destruct_TGeoStateInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoStateInfo*)
   {
      return GenerateInitInstanceLocal((::TGeoStateInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoStateInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoBoolNode(void *p);
   static void deleteArray_TGeoBoolNode(void *p);
   static void destruct_TGeoBoolNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBoolNode*)
   {
      ::TGeoBoolNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBoolNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBoolNode", ::TGeoBoolNode::Class_Version(), "TGeoBoolNode.h", 24,
                  typeid(::TGeoBoolNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBoolNode::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoBoolNode) );
      instance.SetDelete(&delete_TGeoBoolNode);
      instance.SetDeleteArray(&deleteArray_TGeoBoolNode);
      instance.SetDestructor(&destruct_TGeoBoolNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBoolNode*)
   {
      return GenerateInitInstanceLocal((::TGeoBoolNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoBoolNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoUnion(void *p = 0);
   static void *newArray_TGeoUnion(Long_t size, void *p);
   static void delete_TGeoUnion(void *p);
   static void deleteArray_TGeoUnion(void *p);
   static void destruct_TGeoUnion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoUnion*)
   {
      ::TGeoUnion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoUnion >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoUnion", ::TGeoUnion::Class_Version(), "TGeoBoolNode.h", 102,
                  typeid(::TGeoUnion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoUnion::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoUnion) );
      instance.SetNew(&new_TGeoUnion);
      instance.SetNewArray(&newArray_TGeoUnion);
      instance.SetDelete(&delete_TGeoUnion);
      instance.SetDeleteArray(&deleteArray_TGeoUnion);
      instance.SetDestructor(&destruct_TGeoUnion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoUnion*)
   {
      return GenerateInitInstanceLocal((::TGeoUnion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoUnion*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoIntersection(void *p = 0);
   static void *newArray_TGeoIntersection(Long_t size, void *p);
   static void delete_TGeoIntersection(void *p);
   static void deleteArray_TGeoIntersection(void *p);
   static void destruct_TGeoIntersection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIntersection*)
   {
      ::TGeoIntersection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIntersection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIntersection", ::TGeoIntersection::Class_Version(), "TGeoBoolNode.h", 141,
                  typeid(::TGeoIntersection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIntersection::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoIntersection) );
      instance.SetNew(&new_TGeoIntersection);
      instance.SetNewArray(&newArray_TGeoIntersection);
      instance.SetDelete(&delete_TGeoIntersection);
      instance.SetDeleteArray(&deleteArray_TGeoIntersection);
      instance.SetDestructor(&destruct_TGeoIntersection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIntersection*)
   {
      return GenerateInitInstanceLocal((::TGeoIntersection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoIntersection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoSubtraction(void *p = 0);
   static void *newArray_TGeoSubtraction(Long_t size, void *p);
   static void delete_TGeoSubtraction(void *p);
   static void deleteArray_TGeoSubtraction(void *p);
   static void destruct_TGeoSubtraction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoSubtraction*)
   {
      ::TGeoSubtraction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoSubtraction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoSubtraction", ::TGeoSubtraction::Class_Version(), "TGeoBoolNode.h", 179,
                  typeid(::TGeoSubtraction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoSubtraction::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoSubtraction) );
      instance.SetNew(&new_TGeoSubtraction);
      instance.SetNewArray(&newArray_TGeoSubtraction);
      instance.SetDelete(&delete_TGeoSubtraction);
      instance.SetDeleteArray(&deleteArray_TGeoSubtraction);
      instance.SetDestructor(&destruct_TGeoSubtraction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoSubtraction*)
   {
      return GenerateInitInstanceLocal((::TGeoSubtraction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoSubtraction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoElement(void *p = 0);
   static void *newArray_TGeoElement(Long_t size, void *p);
   static void delete_TGeoElement(void *p);
   static void deleteArray_TGeoElement(void *p);
   static void destruct_TGeoElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoElement*)
   {
      ::TGeoElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoElement", ::TGeoElement::Class_Version(), "TGeoElement.h", 36,
                  typeid(::TGeoElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoElement::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoElement) );
      instance.SetNew(&new_TGeoElement);
      instance.SetNewArray(&newArray_TGeoElement);
      instance.SetDelete(&delete_TGeoElement);
      instance.SetDeleteArray(&deleteArray_TGeoElement);
      instance.SetDestructor(&destruct_TGeoElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoElement*)
   {
      return GenerateInitInstanceLocal((::TGeoElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoIsotope(void *p = 0);
   static void *newArray_TGeoIsotope(Long_t size, void *p);
   static void delete_TGeoIsotope(void *p);
   static void deleteArray_TGeoIsotope(void *p);
   static void destruct_TGeoIsotope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIsotope*)
   {
      ::TGeoIsotope *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIsotope >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIsotope", ::TGeoIsotope::Class_Version(), "TGeoElement.h", 96,
                  typeid(::TGeoIsotope), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIsotope::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoIsotope) );
      instance.SetNew(&new_TGeoIsotope);
      instance.SetNewArray(&newArray_TGeoIsotope);
      instance.SetDelete(&delete_TGeoIsotope);
      instance.SetDeleteArray(&deleteArray_TGeoIsotope);
      instance.SetDestructor(&destruct_TGeoIsotope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIsotope*)
   {
      return GenerateInitInstanceLocal((::TGeoIsotope*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoIsotope*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoElementRN(void *p = 0);
   static void *newArray_TGeoElementRN(Long_t size, void *p);
   static void delete_TGeoElementRN(void *p);
   static void deleteArray_TGeoElementRN(void *p);
   static void destruct_TGeoElementRN(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoElementRN*)
   {
      ::TGeoElementRN *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoElementRN >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoElementRN", ::TGeoElementRN::Class_Version(), "TGeoElement.h", 126,
                  typeid(::TGeoElementRN), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoElementRN::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoElementRN) );
      instance.SetNew(&new_TGeoElementRN);
      instance.SetNewArray(&newArray_TGeoElementRN);
      instance.SetDelete(&delete_TGeoElementRN);
      instance.SetDeleteArray(&deleteArray_TGeoElementRN);
      instance.SetDestructor(&destruct_TGeoElementRN);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoElementRN*)
   {
      return GenerateInitInstanceLocal((::TGeoElementRN*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoElementRN*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoDecayChannel(void *p = 0);
   static void *newArray_TGeoDecayChannel(Long_t size, void *p);
   static void delete_TGeoDecayChannel(void *p);
   static void deleteArray_TGeoDecayChannel(void *p);
   static void destruct_TGeoDecayChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoDecayChannel*)
   {
      ::TGeoDecayChannel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoDecayChannel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoDecayChannel", ::TGeoDecayChannel::Class_Version(), "TGeoElement.h", 204,
                  typeid(::TGeoDecayChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoDecayChannel::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoDecayChannel) );
      instance.SetNew(&new_TGeoDecayChannel);
      instance.SetNewArray(&newArray_TGeoDecayChannel);
      instance.SetDelete(&delete_TGeoDecayChannel);
      instance.SetDeleteArray(&deleteArray_TGeoDecayChannel);
      instance.SetDestructor(&destruct_TGeoDecayChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoDecayChannel*)
   {
      return GenerateInitInstanceLocal((::TGeoDecayChannel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoDecayChannel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoBatemanSol(void *p = 0);
   static void *newArray_TGeoBatemanSol(Long_t size, void *p);
   static void delete_TGeoBatemanSol(void *p);
   static void deleteArray_TGeoBatemanSol(void *p);
   static void destruct_TGeoBatemanSol(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBatemanSol*)
   {
      ::TGeoBatemanSol *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBatemanSol >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBatemanSol", ::TGeoBatemanSol::Class_Version(), "TGeoElement.h", 269,
                  typeid(::TGeoBatemanSol), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBatemanSol::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoBatemanSol) );
      instance.SetNew(&new_TGeoBatemanSol);
      instance.SetNewArray(&newArray_TGeoBatemanSol);
      instance.SetDelete(&delete_TGeoBatemanSol);
      instance.SetDeleteArray(&deleteArray_TGeoBatemanSol);
      instance.SetDestructor(&destruct_TGeoBatemanSol);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBatemanSol*)
   {
      return GenerateInitInstanceLocal((::TGeoBatemanSol*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoBatemanSol*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoElemIter(void *p);
   static void deleteArray_TGeoElemIter(void *p);
   static void destruct_TGeoElemIter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoElemIter*)
   {
      ::TGeoElemIter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoElemIter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoElemIter", ::TGeoElemIter::Class_Version(), "TGeoElement.h", 316,
                  typeid(::TGeoElemIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoElemIter::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoElemIter) );
      instance.SetDelete(&delete_TGeoElemIter);
      instance.SetDeleteArray(&deleteArray_TGeoElemIter);
      instance.SetDestructor(&destruct_TGeoElemIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoElemIter*)
   {
      return GenerateInitInstanceLocal((::TGeoElemIter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoElemIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoElementTable(void *p = 0);
   static void *newArray_TGeoElementTable(Long_t size, void *p);
   static void delete_TGeoElementTable(void *p);
   static void deleteArray_TGeoElementTable(void *p);
   static void destruct_TGeoElementTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoElementTable*)
   {
      ::TGeoElementTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoElementTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoElementTable", ::TGeoElementTable::Class_Version(), "TGeoElement.h", 357,
                  typeid(::TGeoElementTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoElementTable::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoElementTable) );
      instance.SetNew(&new_TGeoElementTable);
      instance.SetNewArray(&newArray_TGeoElementTable);
      instance.SetDelete(&delete_TGeoElementTable);
      instance.SetDeleteArray(&deleteArray_TGeoElementTable);
      instance.SetDestructor(&destruct_TGeoElementTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoElementTable*)
   {
      return GenerateInitInstanceLocal((::TGeoElementTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoElementTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMaterial(void *p = 0);
   static void *newArray_TGeoMaterial(Long_t size, void *p);
   static void delete_TGeoMaterial(void *p);
   static void deleteArray_TGeoMaterial(void *p);
   static void destruct_TGeoMaterial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMaterial*)
   {
      ::TGeoMaterial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMaterial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMaterial", ::TGeoMaterial::Class_Version(), "TGeoMaterial.h", 29,
                  typeid(::TGeoMaterial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMaterial::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoMaterial) );
      instance.SetNew(&new_TGeoMaterial);
      instance.SetNewArray(&newArray_TGeoMaterial);
      instance.SetDelete(&delete_TGeoMaterial);
      instance.SetDeleteArray(&deleteArray_TGeoMaterial);
      instance.SetDestructor(&destruct_TGeoMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMaterial*)
   {
      return GenerateInitInstanceLocal((::TGeoMaterial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMaterial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMixture(void *p = 0);
   static void *newArray_TGeoMixture(Long_t size, void *p);
   static void delete_TGeoMixture(void *p);
   static void deleteArray_TGeoMixture(void *p);
   static void destruct_TGeoMixture(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMixture*)
   {
      ::TGeoMixture *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMixture >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMixture", ::TGeoMixture::Class_Version(), "TGeoMaterial.h", 139,
                  typeid(::TGeoMixture), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMixture::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoMixture) );
      instance.SetNew(&new_TGeoMixture);
      instance.SetNewArray(&newArray_TGeoMixture);
      instance.SetDelete(&delete_TGeoMixture);
      instance.SetDeleteArray(&deleteArray_TGeoMixture);
      instance.SetDestructor(&destruct_TGeoMixture);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMixture*)
   {
      return GenerateInitInstanceLocal((::TGeoMixture*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMixture*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMedium(void *p = 0);
   static void *newArray_TGeoMedium(Long_t size, void *p);
   static void delete_TGeoMedium(void *p);
   static void deleteArray_TGeoMedium(void *p);
   static void destruct_TGeoMedium(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMedium*)
   {
      ::TGeoMedium *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMedium >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMedium", ::TGeoMedium::Class_Version(), "TGeoMedium.h", 23,
                  typeid(::TGeoMedium), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMedium::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoMedium) );
      instance.SetNew(&new_TGeoMedium);
      instance.SetNewArray(&newArray_TGeoMedium);
      instance.SetDelete(&delete_TGeoMedium);
      instance.SetDeleteArray(&deleteArray_TGeoMedium);
      instance.SetDestructor(&destruct_TGeoMedium);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMedium*)
   {
      return GenerateInitInstanceLocal((::TGeoMedium*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMedium*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoShape(void *p);
   static void deleteArray_TGeoShape(void *p);
   static void destruct_TGeoShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoShape*)
   {
      ::TGeoShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoShape", ::TGeoShape::Class_Version(), "TGeoShape.h", 25,
                  typeid(::TGeoShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoShape::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoShape) );
      instance.SetDelete(&delete_TGeoShape);
      instance.SetDeleteArray(&deleteArray_TGeoShape);
      instance.SetDestructor(&destruct_TGeoShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoShape*)
   {
      return GenerateInitInstanceLocal((::TGeoShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoVolume(void *p = 0);
   static void *newArray_TGeoVolume(Long_t size, void *p);
   static void delete_TGeoVolume(void *p);
   static void deleteArray_TGeoVolume(void *p);
   static void destruct_TGeoVolume(void *p);
   static void streamer_TGeoVolume(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVolume*)
   {
      ::TGeoVolume *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVolume >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVolume", ::TGeoVolume::Class_Version(), "TGeoVolume.h", 48,
                  typeid(::TGeoVolume), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVolume::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoVolume) );
      instance.SetNew(&new_TGeoVolume);
      instance.SetNewArray(&newArray_TGeoVolume);
      instance.SetDelete(&delete_TGeoVolume);
      instance.SetDeleteArray(&deleteArray_TGeoVolume);
      instance.SetDestructor(&destruct_TGeoVolume);
      instance.SetStreamerFunc(&streamer_TGeoVolume);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVolume*)
   {
      return GenerateInitInstanceLocal((::TGeoVolume*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoVolume*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoVolumeMulti(void *p = 0);
   static void *newArray_TGeoVolumeMulti(Long_t size, void *p);
   static void delete_TGeoVolumeMulti(void *p);
   static void deleteArray_TGeoVolumeMulti(void *p);
   static void destruct_TGeoVolumeMulti(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVolumeMulti*)
   {
      ::TGeoVolumeMulti *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVolumeMulti >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVolumeMulti", ::TGeoVolumeMulti::Class_Version(), "TGeoVolume.h", 256,
                  typeid(::TGeoVolumeMulti), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVolumeMulti::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoVolumeMulti) );
      instance.SetNew(&new_TGeoVolumeMulti);
      instance.SetNewArray(&newArray_TGeoVolumeMulti);
      instance.SetDelete(&delete_TGeoVolumeMulti);
      instance.SetDeleteArray(&deleteArray_TGeoVolumeMulti);
      instance.SetDestructor(&destruct_TGeoVolumeMulti);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVolumeMulti*)
   {
      return GenerateInitInstanceLocal((::TGeoVolumeMulti*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoVolumeMulti*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoVolumeAssembly(void *p = 0);
   static void *newArray_TGeoVolumeAssembly(Long_t size, void *p);
   static void delete_TGeoVolumeAssembly(void *p);
   static void deleteArray_TGeoVolumeAssembly(void *p);
   static void destruct_TGeoVolumeAssembly(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVolumeAssembly*)
   {
      ::TGeoVolumeAssembly *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVolumeAssembly >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVolumeAssembly", ::TGeoVolumeAssembly::Class_Version(), "TGeoVolume.h", 307,
                  typeid(::TGeoVolumeAssembly), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVolumeAssembly::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoVolumeAssembly) );
      instance.SetNew(&new_TGeoVolumeAssembly);
      instance.SetNewArray(&newArray_TGeoVolumeAssembly);
      instance.SetDelete(&delete_TGeoVolumeAssembly);
      instance.SetDeleteArray(&deleteArray_TGeoVolumeAssembly);
      instance.SetDestructor(&destruct_TGeoVolumeAssembly);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVolumeAssembly*)
   {
      return GenerateInitInstanceLocal((::TGeoVolumeAssembly*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoVolumeAssembly*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoPatternFinder(void *p);
   static void deleteArray_TGeoPatternFinder(void *p);
   static void destruct_TGeoPatternFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternFinder*)
   {
      ::TGeoPatternFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternFinder", ::TGeoPatternFinder::Class_Version(), "TGeoPatternFinder.h", 31,
                  typeid(::TGeoPatternFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternFinder::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternFinder) );
      instance.SetDelete(&delete_TGeoPatternFinder);
      instance.SetDeleteArray(&deleteArray_TGeoPatternFinder);
      instance.SetDestructor(&destruct_TGeoPatternFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternFinder*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternX(void *p = 0);
   static void *newArray_TGeoPatternX(Long_t size, void *p);
   static void delete_TGeoPatternX(void *p);
   static void deleteArray_TGeoPatternX(void *p);
   static void destruct_TGeoPatternX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternX*)
   {
      ::TGeoPatternX *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternX >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternX", ::TGeoPatternX::Class_Version(), "TGeoPatternFinder.h", 117,
                  typeid(::TGeoPatternX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternX::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternX) );
      instance.SetNew(&new_TGeoPatternX);
      instance.SetNewArray(&newArray_TGeoPatternX);
      instance.SetDelete(&delete_TGeoPatternX);
      instance.SetDeleteArray(&deleteArray_TGeoPatternX);
      instance.SetDestructor(&destruct_TGeoPatternX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternX*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternX*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternX*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternY(void *p = 0);
   static void *newArray_TGeoPatternY(Long_t size, void *p);
   static void delete_TGeoPatternY(void *p);
   static void deleteArray_TGeoPatternY(void *p);
   static void destruct_TGeoPatternY(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternY*)
   {
      ::TGeoPatternY *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternY >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternY", ::TGeoPatternY::Class_Version(), "TGeoPatternFinder.h", 151,
                  typeid(::TGeoPatternY), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternY::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternY) );
      instance.SetNew(&new_TGeoPatternY);
      instance.SetNewArray(&newArray_TGeoPatternY);
      instance.SetDelete(&delete_TGeoPatternY);
      instance.SetDeleteArray(&deleteArray_TGeoPatternY);
      instance.SetDestructor(&destruct_TGeoPatternY);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternY*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternY*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternY*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternZ(void *p = 0);
   static void *newArray_TGeoPatternZ(Long_t size, void *p);
   static void delete_TGeoPatternZ(void *p);
   static void deleteArray_TGeoPatternZ(void *p);
   static void destruct_TGeoPatternZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternZ*)
   {
      ::TGeoPatternZ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternZ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternZ", ::TGeoPatternZ::Class_Version(), "TGeoPatternFinder.h", 184,
                  typeid(::TGeoPatternZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternZ::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternZ) );
      instance.SetNew(&new_TGeoPatternZ);
      instance.SetNewArray(&newArray_TGeoPatternZ);
      instance.SetDelete(&delete_TGeoPatternZ);
      instance.SetDeleteArray(&deleteArray_TGeoPatternZ);
      instance.SetDestructor(&destruct_TGeoPatternZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternZ*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternZ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternZ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternParaX(void *p = 0);
   static void *newArray_TGeoPatternParaX(Long_t size, void *p);
   static void delete_TGeoPatternParaX(void *p);
   static void deleteArray_TGeoPatternParaX(void *p);
   static void destruct_TGeoPatternParaX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternParaX*)
   {
      ::TGeoPatternParaX *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternParaX >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternParaX", ::TGeoPatternParaX::Class_Version(), "TGeoPatternFinder.h", 217,
                  typeid(::TGeoPatternParaX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternParaX::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternParaX) );
      instance.SetNew(&new_TGeoPatternParaX);
      instance.SetNewArray(&newArray_TGeoPatternParaX);
      instance.SetDelete(&delete_TGeoPatternParaX);
      instance.SetDeleteArray(&deleteArray_TGeoPatternParaX);
      instance.SetDestructor(&destruct_TGeoPatternParaX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternParaX*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternParaX*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternParaX*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternParaY(void *p = 0);
   static void *newArray_TGeoPatternParaY(Long_t size, void *p);
   static void delete_TGeoPatternParaY(void *p);
   static void deleteArray_TGeoPatternParaY(void *p);
   static void destruct_TGeoPatternParaY(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternParaY*)
   {
      ::TGeoPatternParaY *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternParaY >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternParaY", ::TGeoPatternParaY::Class_Version(), "TGeoPatternFinder.h", 250,
                  typeid(::TGeoPatternParaY), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternParaY::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternParaY) );
      instance.SetNew(&new_TGeoPatternParaY);
      instance.SetNewArray(&newArray_TGeoPatternParaY);
      instance.SetDelete(&delete_TGeoPatternParaY);
      instance.SetDeleteArray(&deleteArray_TGeoPatternParaY);
      instance.SetDestructor(&destruct_TGeoPatternParaY);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternParaY*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternParaY*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternParaY*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternParaZ(void *p = 0);
   static void *newArray_TGeoPatternParaZ(Long_t size, void *p);
   static void delete_TGeoPatternParaZ(void *p);
   static void deleteArray_TGeoPatternParaZ(void *p);
   static void destruct_TGeoPatternParaZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternParaZ*)
   {
      ::TGeoPatternParaZ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternParaZ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternParaZ", ::TGeoPatternParaZ::Class_Version(), "TGeoPatternFinder.h", 286,
                  typeid(::TGeoPatternParaZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternParaZ::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternParaZ) );
      instance.SetNew(&new_TGeoPatternParaZ);
      instance.SetNewArray(&newArray_TGeoPatternParaZ);
      instance.SetDelete(&delete_TGeoPatternParaZ);
      instance.SetDeleteArray(&deleteArray_TGeoPatternParaZ);
      instance.SetDestructor(&destruct_TGeoPatternParaZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternParaZ*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternParaZ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternParaZ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternTrapZ(void *p = 0);
   static void *newArray_TGeoPatternTrapZ(Long_t size, void *p);
   static void delete_TGeoPatternTrapZ(void *p);
   static void deleteArray_TGeoPatternTrapZ(void *p);
   static void destruct_TGeoPatternTrapZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternTrapZ*)
   {
      ::TGeoPatternTrapZ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternTrapZ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternTrapZ", ::TGeoPatternTrapZ::Class_Version(), "TGeoPatternFinder.h", 323,
                  typeid(::TGeoPatternTrapZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternTrapZ::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternTrapZ) );
      instance.SetNew(&new_TGeoPatternTrapZ);
      instance.SetNewArray(&newArray_TGeoPatternTrapZ);
      instance.SetDelete(&delete_TGeoPatternTrapZ);
      instance.SetDeleteArray(&deleteArray_TGeoPatternTrapZ);
      instance.SetDestructor(&destruct_TGeoPatternTrapZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternTrapZ*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternTrapZ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternTrapZ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternCylR(void *p = 0);
   static void *newArray_TGeoPatternCylR(Long_t size, void *p);
   static void delete_TGeoPatternCylR(void *p);
   static void deleteArray_TGeoPatternCylR(void *p);
   static void destruct_TGeoPatternCylR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternCylR*)
   {
      ::TGeoPatternCylR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternCylR >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternCylR", ::TGeoPatternCylR::Class_Version(), "TGeoPatternFinder.h", 363,
                  typeid(::TGeoPatternCylR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternCylR::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternCylR) );
      instance.SetNew(&new_TGeoPatternCylR);
      instance.SetNewArray(&newArray_TGeoPatternCylR);
      instance.SetDelete(&delete_TGeoPatternCylR);
      instance.SetDeleteArray(&deleteArray_TGeoPatternCylR);
      instance.SetDestructor(&destruct_TGeoPatternCylR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternCylR*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternCylR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternCylR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternCylPhi(void *p = 0);
   static void *newArray_TGeoPatternCylPhi(Long_t size, void *p);
   static void delete_TGeoPatternCylPhi(void *p);
   static void deleteArray_TGeoPatternCylPhi(void *p);
   static void destruct_TGeoPatternCylPhi(void *p);
   static void streamer_TGeoPatternCylPhi(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternCylPhi*)
   {
      ::TGeoPatternCylPhi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternCylPhi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternCylPhi", ::TGeoPatternCylPhi::Class_Version(), "TGeoPatternFinder.h", 395,
                  typeid(::TGeoPatternCylPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternCylPhi::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoPatternCylPhi) );
      instance.SetNew(&new_TGeoPatternCylPhi);
      instance.SetNewArray(&newArray_TGeoPatternCylPhi);
      instance.SetDelete(&delete_TGeoPatternCylPhi);
      instance.SetDeleteArray(&deleteArray_TGeoPatternCylPhi);
      instance.SetDestructor(&destruct_TGeoPatternCylPhi);
      instance.SetStreamerFunc(&streamer_TGeoPatternCylPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternCylPhi*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternCylPhi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternCylPhi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternSphR(void *p = 0);
   static void *newArray_TGeoPatternSphR(Long_t size, void *p);
   static void delete_TGeoPatternSphR(void *p);
   static void deleteArray_TGeoPatternSphR(void *p);
   static void destruct_TGeoPatternSphR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternSphR*)
   {
      ::TGeoPatternSphR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternSphR >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternSphR", ::TGeoPatternSphR::Class_Version(), "TGeoPatternFinder.h", 436,
                  typeid(::TGeoPatternSphR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternSphR::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternSphR) );
      instance.SetNew(&new_TGeoPatternSphR);
      instance.SetNewArray(&newArray_TGeoPatternSphR);
      instance.SetDelete(&delete_TGeoPatternSphR);
      instance.SetDeleteArray(&deleteArray_TGeoPatternSphR);
      instance.SetDestructor(&destruct_TGeoPatternSphR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternSphR*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternSphR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternSphR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternSphTheta(void *p = 0);
   static void *newArray_TGeoPatternSphTheta(Long_t size, void *p);
   static void delete_TGeoPatternSphTheta(void *p);
   static void deleteArray_TGeoPatternSphTheta(void *p);
   static void destruct_TGeoPatternSphTheta(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternSphTheta*)
   {
      ::TGeoPatternSphTheta *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternSphTheta >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternSphTheta", ::TGeoPatternSphTheta::Class_Version(), "TGeoPatternFinder.h", 467,
                  typeid(::TGeoPatternSphTheta), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternSphTheta::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternSphTheta) );
      instance.SetNew(&new_TGeoPatternSphTheta);
      instance.SetNewArray(&newArray_TGeoPatternSphTheta);
      instance.SetDelete(&delete_TGeoPatternSphTheta);
      instance.SetDeleteArray(&deleteArray_TGeoPatternSphTheta);
      instance.SetDestructor(&destruct_TGeoPatternSphTheta);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternSphTheta*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternSphTheta*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternSphTheta*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternSphPhi(void *p = 0);
   static void *newArray_TGeoPatternSphPhi(Long_t size, void *p);
   static void delete_TGeoPatternSphPhi(void *p);
   static void deleteArray_TGeoPatternSphPhi(void *p);
   static void destruct_TGeoPatternSphPhi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternSphPhi*)
   {
      ::TGeoPatternSphPhi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternSphPhi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternSphPhi", ::TGeoPatternSphPhi::Class_Version(), "TGeoPatternFinder.h", 498,
                  typeid(::TGeoPatternSphPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternSphPhi::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternSphPhi) );
      instance.SetNew(&new_TGeoPatternSphPhi);
      instance.SetNewArray(&newArray_TGeoPatternSphPhi);
      instance.SetDelete(&delete_TGeoPatternSphPhi);
      instance.SetDeleteArray(&deleteArray_TGeoPatternSphPhi);
      instance.SetDestructor(&destruct_TGeoPatternSphPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternSphPhi*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternSphPhi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternSphPhi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternHoneycomb(void *p = 0);
   static void *newArray_TGeoPatternHoneycomb(Long_t size, void *p);
   static void delete_TGeoPatternHoneycomb(void *p);
   static void deleteArray_TGeoPatternHoneycomb(void *p);
   static void destruct_TGeoPatternHoneycomb(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternHoneycomb*)
   {
      ::TGeoPatternHoneycomb *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternHoneycomb >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternHoneycomb", ::TGeoPatternHoneycomb::Class_Version(), "TGeoPatternFinder.h", 535,
                  typeid(::TGeoPatternHoneycomb), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternHoneycomb::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternHoneycomb) );
      instance.SetNew(&new_TGeoPatternHoneycomb);
      instance.SetNewArray(&newArray_TGeoPatternHoneycomb);
      instance.SetDelete(&delete_TGeoPatternHoneycomb);
      instance.SetDeleteArray(&deleteArray_TGeoPatternHoneycomb);
      instance.SetDestructor(&destruct_TGeoPatternHoneycomb);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternHoneycomb*)
   {
      return GenerateInitInstanceLocal((::TGeoPatternHoneycomb*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPatternHoneycomb*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoNode(void *p);
   static void deleteArray_TGeoNode(void *p);
   static void destruct_TGeoNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNode*)
   {
      ::TGeoNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNode", ::TGeoNode::Class_Version(), "TGeoNode.h", 39,
                  typeid(::TGeoNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNode::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNode) );
      instance.SetDelete(&delete_TGeoNode);
      instance.SetDeleteArray(&deleteArray_TGeoNode);
      instance.SetDestructor(&destruct_TGeoNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNode*)
   {
      return GenerateInitInstanceLocal((::TGeoNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNodeMatrix(void *p = 0);
   static void *newArray_TGeoNodeMatrix(Long_t size, void *p);
   static void delete_TGeoNodeMatrix(void *p);
   static void deleteArray_TGeoNodeMatrix(void *p);
   static void destruct_TGeoNodeMatrix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNodeMatrix*)
   {
      ::TGeoNodeMatrix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNodeMatrix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNodeMatrix", ::TGeoNodeMatrix::Class_Version(), "TGeoNode.h", 149,
                  typeid(::TGeoNodeMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNodeMatrix::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNodeMatrix) );
      instance.SetNew(&new_TGeoNodeMatrix);
      instance.SetNewArray(&newArray_TGeoNodeMatrix);
      instance.SetDelete(&delete_TGeoNodeMatrix);
      instance.SetDeleteArray(&deleteArray_TGeoNodeMatrix);
      instance.SetDestructor(&destruct_TGeoNodeMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNodeMatrix*)
   {
      return GenerateInitInstanceLocal((::TGeoNodeMatrix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoNodeMatrix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNodeOffset(void *p = 0);
   static void *newArray_TGeoNodeOffset(Long_t size, void *p);
   static void delete_TGeoNodeOffset(void *p);
   static void deleteArray_TGeoNodeOffset(void *p);
   static void destruct_TGeoNodeOffset(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNodeOffset*)
   {
      ::TGeoNodeOffset *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNodeOffset >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNodeOffset", ::TGeoNodeOffset::Class_Version(), "TGeoNode.h", 181,
                  typeid(::TGeoNodeOffset), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNodeOffset::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNodeOffset) );
      instance.SetNew(&new_TGeoNodeOffset);
      instance.SetNewArray(&newArray_TGeoNodeOffset);
      instance.SetDelete(&delete_TGeoNodeOffset);
      instance.SetDeleteArray(&deleteArray_TGeoNodeOffset);
      instance.SetDestructor(&destruct_TGeoNodeOffset);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNodeOffset*)
   {
      return GenerateInitInstanceLocal((::TGeoNodeOffset*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoNodeOffset*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoIteratorPlugin(void *p);
   static void deleteArray_TGeoIteratorPlugin(void *p);
   static void destruct_TGeoIteratorPlugin(void *p);
   static void streamer_TGeoIteratorPlugin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIteratorPlugin*)
   {
      ::TGeoIteratorPlugin *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIteratorPlugin >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIteratorPlugin", ::TGeoIteratorPlugin::Class_Version(), "TGeoNode.h", 219,
                  typeid(::TGeoIteratorPlugin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIteratorPlugin::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoIteratorPlugin) );
      instance.SetDelete(&delete_TGeoIteratorPlugin);
      instance.SetDeleteArray(&deleteArray_TGeoIteratorPlugin);
      instance.SetDestructor(&destruct_TGeoIteratorPlugin);
      instance.SetStreamerFunc(&streamer_TGeoIteratorPlugin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIteratorPlugin*)
   {
      return GenerateInitInstanceLocal((::TGeoIteratorPlugin*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoIteratorPlugin*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoIterator(void *p);
   static void deleteArray_TGeoIterator(void *p);
   static void destruct_TGeoIterator(void *p);
   static void streamer_TGeoIterator(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIterator*)
   {
      ::TGeoIterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIterator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIterator", ::TGeoIterator::Class_Version(), "TGeoNode.h", 243,
                  typeid(::TGeoIterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIterator::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoIterator) );
      instance.SetDelete(&delete_TGeoIterator);
      instance.SetDeleteArray(&deleteArray_TGeoIterator);
      instance.SetDestructor(&destruct_TGeoIterator);
      instance.SetStreamerFunc(&streamer_TGeoIterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIterator*)
   {
      return GenerateInitInstanceLocal((::TGeoIterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoIterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoVoxelFinder(void *p = 0);
   static void *newArray_TGeoVoxelFinder(Long_t size, void *p);
   static void delete_TGeoVoxelFinder(void *p);
   static void deleteArray_TGeoVoxelFinder(void *p);
   static void destruct_TGeoVoxelFinder(void *p);
   static void streamer_TGeoVoxelFinder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVoxelFinder*)
   {
      ::TGeoVoxelFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVoxelFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVoxelFinder", ::TGeoVoxelFinder::Class_Version(), "TGeoVoxelFinder.h", 20,
                  typeid(::TGeoVoxelFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVoxelFinder::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoVoxelFinder) );
      instance.SetNew(&new_TGeoVoxelFinder);
      instance.SetNewArray(&newArray_TGeoVoxelFinder);
      instance.SetDelete(&delete_TGeoVoxelFinder);
      instance.SetDeleteArray(&deleteArray_TGeoVoxelFinder);
      instance.SetDestructor(&destruct_TGeoVoxelFinder);
      instance.SetStreamerFunc(&streamer_TGeoVoxelFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVoxelFinder*)
   {
      return GenerateInitInstanceLocal((::TGeoVoxelFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoVoxelFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoBBox(void *p = 0);
   static void *newArray_TGeoBBox(Long_t size, void *p);
   static void delete_TGeoBBox(void *p);
   static void deleteArray_TGeoBBox(void *p);
   static void destruct_TGeoBBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBBox*)
   {
      ::TGeoBBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBBox", ::TGeoBBox::Class_Version(), "TGeoBBox.h", 17,
                  typeid(::TGeoBBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBBox::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoBBox) );
      instance.SetNew(&new_TGeoBBox);
      instance.SetNewArray(&newArray_TGeoBBox);
      instance.SetDelete(&delete_TGeoBBox);
      instance.SetDeleteArray(&deleteArray_TGeoBBox);
      instance.SetDestructor(&destruct_TGeoBBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBBox*)
   {
      return GenerateInitInstanceLocal((::TGeoBBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoBBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPara(void *p = 0);
   static void *newArray_TGeoPara(Long_t size, void *p);
   static void delete_TGeoPara(void *p);
   static void deleteArray_TGeoPara(void *p);
   static void destruct_TGeoPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPara*)
   {
      ::TGeoPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPara", ::TGeoPara::Class_Version(), "TGeoPara.h", 17,
                  typeid(::TGeoPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPara::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPara) );
      instance.SetNew(&new_TGeoPara);
      instance.SetNewArray(&newArray_TGeoPara);
      instance.SetDelete(&delete_TGeoPara);
      instance.SetDeleteArray(&deleteArray_TGeoPara);
      instance.SetDestructor(&destruct_TGeoPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPara*)
   {
      return GenerateInitInstanceLocal((::TGeoPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTube(void *p = 0);
   static void *newArray_TGeoTube(Long_t size, void *p);
   static void delete_TGeoTube(void *p);
   static void deleteArray_TGeoTube(void *p);
   static void destruct_TGeoTube(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTube*)
   {
      ::TGeoTube *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTube >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTube", ::TGeoTube::Class_Version(), "TGeoTube.h", 17,
                  typeid(::TGeoTube), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTube::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTube) );
      instance.SetNew(&new_TGeoTube);
      instance.SetNewArray(&newArray_TGeoTube);
      instance.SetDelete(&delete_TGeoTube);
      instance.SetDeleteArray(&deleteArray_TGeoTube);
      instance.SetDestructor(&destruct_TGeoTube);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTube*)
   {
      return GenerateInitInstanceLocal((::TGeoTube*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTube*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTubeSeg(void *p = 0);
   static void *newArray_TGeoTubeSeg(Long_t size, void *p);
   static void delete_TGeoTubeSeg(void *p);
   static void deleteArray_TGeoTubeSeg(void *p);
   static void destruct_TGeoTubeSeg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTubeSeg*)
   {
      ::TGeoTubeSeg *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTubeSeg >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTubeSeg", ::TGeoTubeSeg::Class_Version(), "TGeoTube.h", 88,
                  typeid(::TGeoTubeSeg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTubeSeg::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTubeSeg) );
      instance.SetNew(&new_TGeoTubeSeg);
      instance.SetNewArray(&newArray_TGeoTubeSeg);
      instance.SetDelete(&delete_TGeoTubeSeg);
      instance.SetDeleteArray(&deleteArray_TGeoTubeSeg);
      instance.SetDestructor(&destruct_TGeoTubeSeg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTubeSeg*)
   {
      return GenerateInitInstanceLocal((::TGeoTubeSeg*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTubeSeg*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCtub(void *p = 0);
   static void *newArray_TGeoCtub(Long_t size, void *p);
   static void delete_TGeoCtub(void *p);
   static void deleteArray_TGeoCtub(void *p);
   static void destruct_TGeoCtub(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCtub*)
   {
      ::TGeoCtub *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCtub >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCtub", ::TGeoCtub::Class_Version(), "TGeoTube.h", 168,
                  typeid(::TGeoCtub), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCtub::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCtub) );
      instance.SetNew(&new_TGeoCtub);
      instance.SetNewArray(&newArray_TGeoCtub);
      instance.SetDelete(&delete_TGeoCtub);
      instance.SetDeleteArray(&deleteArray_TGeoCtub);
      instance.SetDestructor(&destruct_TGeoCtub);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCtub*)
   {
      return GenerateInitInstanceLocal((::TGeoCtub*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoCtub*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTorus(void *p = 0);
   static void *newArray_TGeoTorus(Long_t size, void *p);
   static void delete_TGeoTorus(void *p);
   static void deleteArray_TGeoTorus(void *p);
   static void destruct_TGeoTorus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTorus*)
   {
      ::TGeoTorus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTorus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTorus", ::TGeoTorus::Class_Version(), "TGeoTorus.h", 17,
                  typeid(::TGeoTorus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTorus::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTorus) );
      instance.SetNew(&new_TGeoTorus);
      instance.SetNewArray(&newArray_TGeoTorus);
      instance.SetDelete(&delete_TGeoTorus);
      instance.SetDeleteArray(&deleteArray_TGeoTorus);
      instance.SetDestructor(&destruct_TGeoTorus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTorus*)
   {
      return GenerateInitInstanceLocal((::TGeoTorus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTorus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoSphere(void *p = 0);
   static void *newArray_TGeoSphere(Long_t size, void *p);
   static void delete_TGeoSphere(void *p);
   static void deleteArray_TGeoSphere(void *p);
   static void destruct_TGeoSphere(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoSphere*)
   {
      ::TGeoSphere *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoSphere >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoSphere", ::TGeoSphere::Class_Version(), "TGeoSphere.h", 17,
                  typeid(::TGeoSphere), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoSphere::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoSphere) );
      instance.SetNew(&new_TGeoSphere);
      instance.SetNewArray(&newArray_TGeoSphere);
      instance.SetDelete(&delete_TGeoSphere);
      instance.SetDeleteArray(&deleteArray_TGeoSphere);
      instance.SetDestructor(&destruct_TGeoSphere);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoSphere*)
   {
      return GenerateInitInstanceLocal((::TGeoSphere*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoSphere*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoEltu(void *p = 0);
   static void *newArray_TGeoEltu(Long_t size, void *p);
   static void delete_TGeoEltu(void *p);
   static void deleteArray_TGeoEltu(void *p);
   static void destruct_TGeoEltu(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoEltu*)
   {
      ::TGeoEltu *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoEltu >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoEltu", ::TGeoEltu::Class_Version(), "TGeoEltu.h", 17,
                  typeid(::TGeoEltu), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoEltu::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoEltu) );
      instance.SetNew(&new_TGeoEltu);
      instance.SetNewArray(&newArray_TGeoEltu);
      instance.SetDelete(&delete_TGeoEltu);
      instance.SetDeleteArray(&deleteArray_TGeoEltu);
      instance.SetDestructor(&destruct_TGeoEltu);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoEltu*)
   {
      return GenerateInitInstanceLocal((::TGeoEltu*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoEltu*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoHype(void *p = 0);
   static void *newArray_TGeoHype(Long_t size, void *p);
   static void delete_TGeoHype(void *p);
   static void deleteArray_TGeoHype(void *p);
   static void destruct_TGeoHype(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoHype*)
   {
      ::TGeoHype *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoHype >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoHype", ::TGeoHype::Class_Version(), "TGeoHype.h", 17,
                  typeid(::TGeoHype), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoHype::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoHype) );
      instance.SetNew(&new_TGeoHype);
      instance.SetNewArray(&newArray_TGeoHype);
      instance.SetDelete(&delete_TGeoHype);
      instance.SetDeleteArray(&deleteArray_TGeoHype);
      instance.SetDestructor(&destruct_TGeoHype);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoHype*)
   {
      return GenerateInitInstanceLocal((::TGeoHype*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoHype*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCone(void *p = 0);
   static void *newArray_TGeoCone(Long_t size, void *p);
   static void delete_TGeoCone(void *p);
   static void deleteArray_TGeoCone(void *p);
   static void destruct_TGeoCone(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCone*)
   {
      ::TGeoCone *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCone >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCone", ::TGeoCone::Class_Version(), "TGeoCone.h", 17,
                  typeid(::TGeoCone), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCone::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCone) );
      instance.SetNew(&new_TGeoCone);
      instance.SetNewArray(&newArray_TGeoCone);
      instance.SetDelete(&delete_TGeoCone);
      instance.SetDeleteArray(&deleteArray_TGeoCone);
      instance.SetDestructor(&destruct_TGeoCone);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCone*)
   {
      return GenerateInitInstanceLocal((::TGeoCone*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoCone*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoConeSeg(void *p = 0);
   static void *newArray_TGeoConeSeg(Long_t size, void *p);
   static void delete_TGeoConeSeg(void *p);
   static void deleteArray_TGeoConeSeg(void *p);
   static void destruct_TGeoConeSeg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoConeSeg*)
   {
      ::TGeoConeSeg *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoConeSeg >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoConeSeg", ::TGeoConeSeg::Class_Version(), "TGeoCone.h", 98,
                  typeid(::TGeoConeSeg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoConeSeg::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoConeSeg) );
      instance.SetNew(&new_TGeoConeSeg);
      instance.SetNewArray(&newArray_TGeoConeSeg);
      instance.SetDelete(&delete_TGeoConeSeg);
      instance.SetDeleteArray(&deleteArray_TGeoConeSeg);
      instance.SetDestructor(&destruct_TGeoConeSeg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoConeSeg*)
   {
      return GenerateInitInstanceLocal((::TGeoConeSeg*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoConeSeg*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPcon(void *p = 0);
   static void *newArray_TGeoPcon(Long_t size, void *p);
   static void delete_TGeoPcon(void *p);
   static void deleteArray_TGeoPcon(void *p);
   static void destruct_TGeoPcon(void *p);
   static void streamer_TGeoPcon(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPcon*)
   {
      ::TGeoPcon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPcon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPcon", ::TGeoPcon::Class_Version(), "TGeoPcon.h", 17,
                  typeid(::TGeoPcon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPcon::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoPcon) );
      instance.SetNew(&new_TGeoPcon);
      instance.SetNewArray(&newArray_TGeoPcon);
      instance.SetDelete(&delete_TGeoPcon);
      instance.SetDeleteArray(&deleteArray_TGeoPcon);
      instance.SetDestructor(&destruct_TGeoPcon);
      instance.SetStreamerFunc(&streamer_TGeoPcon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPcon*)
   {
      return GenerateInitInstanceLocal((::TGeoPcon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPcon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPgon(void *p = 0);
   static void *newArray_TGeoPgon(Long_t size, void *p);
   static void delete_TGeoPgon(void *p);
   static void deleteArray_TGeoPgon(void *p);
   static void destruct_TGeoPgon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPgon*)
   {
      ::TGeoPgon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPgon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPgon", ::TGeoPgon::Class_Version(), "TGeoPgon.h", 19,
                  typeid(::TGeoPgon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPgon::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPgon) );
      instance.SetNew(&new_TGeoPgon);
      instance.SetNewArray(&newArray_TGeoPgon);
      instance.SetDelete(&delete_TGeoPgon);
      instance.SetDeleteArray(&deleteArray_TGeoPgon);
      instance.SetDestructor(&destruct_TGeoPgon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPgon*)
   {
      return GenerateInitInstanceLocal((::TGeoPgon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPgon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoArb8(void *p = 0);
   static void *newArray_TGeoArb8(Long_t size, void *p);
   static void delete_TGeoArb8(void *p);
   static void deleteArray_TGeoArb8(void *p);
   static void destruct_TGeoArb8(void *p);
   static void streamer_TGeoArb8(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoArb8*)
   {
      ::TGeoArb8 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoArb8 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoArb8", ::TGeoArb8::Class_Version(), "TGeoArb8.h", 17,
                  typeid(::TGeoArb8), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoArb8::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoArb8) );
      instance.SetNew(&new_TGeoArb8);
      instance.SetNewArray(&newArray_TGeoArb8);
      instance.SetDelete(&delete_TGeoArb8);
      instance.SetDeleteArray(&deleteArray_TGeoArb8);
      instance.SetDestructor(&destruct_TGeoArb8);
      instance.SetStreamerFunc(&streamer_TGeoArb8);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoArb8*)
   {
      return GenerateInitInstanceLocal((::TGeoArb8*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoArb8*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrap(void *p = 0);
   static void *newArray_TGeoTrap(Long_t size, void *p);
   static void delete_TGeoTrap(void *p);
   static void deleteArray_TGeoTrap(void *p);
   static void destruct_TGeoTrap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrap*)
   {
      ::TGeoTrap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrap", ::TGeoTrap::Class_Version(), "TGeoArb8.h", 89,
                  typeid(::TGeoTrap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrap::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTrap) );
      instance.SetNew(&new_TGeoTrap);
      instance.SetNewArray(&newArray_TGeoTrap);
      instance.SetDelete(&delete_TGeoTrap);
      instance.SetDeleteArray(&deleteArray_TGeoTrap);
      instance.SetDestructor(&destruct_TGeoTrap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrap*)
   {
      return GenerateInitInstanceLocal((::TGeoTrap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTrap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoGtra(void *p = 0);
   static void *newArray_TGeoGtra(Long_t size, void *p);
   static void delete_TGeoGtra(void *p);
   static void deleteArray_TGeoGtra(void *p);
   static void destruct_TGeoGtra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoGtra*)
   {
      ::TGeoGtra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoGtra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoGtra", ::TGeoGtra::Class_Version(), "TGeoArb8.h", 143,
                  typeid(::TGeoGtra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoGtra::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoGtra) );
      instance.SetNew(&new_TGeoGtra);
      instance.SetNewArray(&newArray_TGeoGtra);
      instance.SetDelete(&delete_TGeoGtra);
      instance.SetDeleteArray(&deleteArray_TGeoGtra);
      instance.SetDestructor(&destruct_TGeoGtra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoGtra*)
   {
      return GenerateInitInstanceLocal((::TGeoGtra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoGtra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrd1(void *p = 0);
   static void *newArray_TGeoTrd1(Long_t size, void *p);
   static void delete_TGeoTrd1(void *p);
   static void deleteArray_TGeoTrd1(void *p);
   static void destruct_TGeoTrd1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrd1*)
   {
      ::TGeoTrd1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrd1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrd1", ::TGeoTrd1::Class_Version(), "TGeoTrd1.h", 17,
                  typeid(::TGeoTrd1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrd1::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTrd1) );
      instance.SetNew(&new_TGeoTrd1);
      instance.SetNewArray(&newArray_TGeoTrd1);
      instance.SetDelete(&delete_TGeoTrd1);
      instance.SetDeleteArray(&deleteArray_TGeoTrd1);
      instance.SetDestructor(&destruct_TGeoTrd1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrd1*)
   {
      return GenerateInitInstanceLocal((::TGeoTrd1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTrd1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrd2(void *p = 0);
   static void *newArray_TGeoTrd2(Long_t size, void *p);
   static void delete_TGeoTrd2(void *p);
   static void deleteArray_TGeoTrd2(void *p);
   static void destruct_TGeoTrd2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrd2*)
   {
      ::TGeoTrd2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrd2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrd2", ::TGeoTrd2::Class_Version(), "TGeoTrd2.h", 17,
                  typeid(::TGeoTrd2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrd2::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTrd2) );
      instance.SetNew(&new_TGeoTrd2);
      instance.SetNewArray(&newArray_TGeoTrd2);
      instance.SetDelete(&delete_TGeoTrd2);
      instance.SetDeleteArray(&deleteArray_TGeoTrd2);
      instance.SetDestructor(&destruct_TGeoTrd2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrd2*)
   {
      return GenerateInitInstanceLocal((::TGeoTrd2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTrd2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCacheState(void *p = 0);
   static void *newArray_TGeoCacheState(Long_t size, void *p);
   static void delete_TGeoCacheState(void *p);
   static void deleteArray_TGeoCacheState(void *p);
   static void destruct_TGeoCacheState(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCacheState*)
   {
      ::TGeoCacheState *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCacheState >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCacheState", ::TGeoCacheState::Class_Version(), "TGeoCache.h", 24,
                  typeid(::TGeoCacheState), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCacheState::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCacheState) );
      instance.SetNew(&new_TGeoCacheState);
      instance.SetNewArray(&newArray_TGeoCacheState);
      instance.SetDelete(&delete_TGeoCacheState);
      instance.SetDeleteArray(&deleteArray_TGeoCacheState);
      instance.SetDestructor(&destruct_TGeoCacheState);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCacheState*)
   {
      return GenerateInitInstanceLocal((::TGeoCacheState*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoCacheState*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNodeCache(void *p = 0);
   static void *newArray_TGeoNodeCache(Long_t size, void *p);
   static void delete_TGeoNodeCache(void *p);
   static void deleteArray_TGeoNodeCache(void *p);
   static void destruct_TGeoNodeCache(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNodeCache*)
   {
      ::TGeoNodeCache *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNodeCache >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNodeCache", ::TGeoNodeCache::Class_Version(), "TGeoCache.h", 53,
                  typeid(::TGeoNodeCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNodeCache::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNodeCache) );
      instance.SetNew(&new_TGeoNodeCache);
      instance.SetNewArray(&newArray_TGeoNodeCache);
      instance.SetDelete(&delete_TGeoNodeCache);
      instance.SetDeleteArray(&deleteArray_TGeoNodeCache);
      instance.SetDestructor(&destruct_TGeoNodeCache);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNodeCache*)
   {
      return GenerateInitInstanceLocal((::TGeoNodeCache*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoNodeCache*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNavigator(void *p = 0);
   static void *newArray_TGeoNavigator(Long_t size, void *p);
   static void delete_TGeoNavigator(void *p);
   static void deleteArray_TGeoNavigator(void *p);
   static void destruct_TGeoNavigator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNavigator*)
   {
      ::TGeoNavigator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNavigator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNavigator", ::TGeoNavigator::Class_Version(), "TGeoNavigator.h", 33,
                  typeid(::TGeoNavigator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNavigator::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNavigator) );
      instance.SetNew(&new_TGeoNavigator);
      instance.SetNewArray(&newArray_TGeoNavigator);
      instance.SetDelete(&delete_TGeoNavigator);
      instance.SetDeleteArray(&deleteArray_TGeoNavigator);
      instance.SetDestructor(&destruct_TGeoNavigator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNavigator*)
   {
      return GenerateInitInstanceLocal((::TGeoNavigator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoNavigator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNavigatorArray(void *p = 0);
   static void *newArray_TGeoNavigatorArray(Long_t size, void *p);
   static void delete_TGeoNavigatorArray(void *p);
   static void deleteArray_TGeoNavigatorArray(void *p);
   static void destruct_TGeoNavigatorArray(void *p);
   static void streamer_TGeoNavigatorArray(TBuffer &buf, void *obj);
   static Long64_t merge_TGeoNavigatorArray(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNavigatorArray*)
   {
      ::TGeoNavigatorArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNavigatorArray >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNavigatorArray", ::TGeoNavigatorArray::Class_Version(), "TGeoNavigator.h", 216,
                  typeid(::TGeoNavigatorArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNavigatorArray::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoNavigatorArray) );
      instance.SetNew(&new_TGeoNavigatorArray);
      instance.SetNewArray(&newArray_TGeoNavigatorArray);
      instance.SetDelete(&delete_TGeoNavigatorArray);
      instance.SetDeleteArray(&deleteArray_TGeoNavigatorArray);
      instance.SetDestructor(&destruct_TGeoNavigatorArray);
      instance.SetStreamerFunc(&streamer_TGeoNavigatorArray);
      instance.SetMerge(&merge_TGeoNavigatorArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNavigatorArray*)
   {
      return GenerateInitInstanceLocal((::TGeoNavigatorArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoNavigatorArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoManager(void *p = 0);
   static void *newArray_TGeoManager(Long_t size, void *p);
   static void delete_TGeoManager(void *p);
   static void deleteArray_TGeoManager(void *p);
   static void destruct_TGeoManager(void *p);
   static void streamer_TGeoManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoManager*)
   {
      ::TGeoManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoManager", ::TGeoManager::Class_Version(), "TGeoManager.h", 37,
                  typeid(::TGeoManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoManager::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoManager) );
      instance.SetNew(&new_TGeoManager);
      instance.SetNewArray(&newArray_TGeoManager);
      instance.SetDelete(&delete_TGeoManager);
      instance.SetDeleteArray(&deleteArray_TGeoManager);
      instance.SetDestructor(&destruct_TGeoManager);
      instance.SetStreamerFunc(&streamer_TGeoManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoManager*)
   {
      return GenerateInitInstanceLocal((::TGeoManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCompositeShape(void *p = 0);
   static void *newArray_TGeoCompositeShape(Long_t size, void *p);
   static void delete_TGeoCompositeShape(void *p);
   static void deleteArray_TGeoCompositeShape(void *p);
   static void destruct_TGeoCompositeShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCompositeShape*)
   {
      ::TGeoCompositeShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCompositeShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCompositeShape", ::TGeoCompositeShape::Class_Version(), "TGeoCompositeShape.h", 27,
                  typeid(::TGeoCompositeShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCompositeShape::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCompositeShape) );
      instance.SetNew(&new_TGeoCompositeShape);
      instance.SetNewArray(&newArray_TGeoCompositeShape);
      instance.SetDelete(&delete_TGeoCompositeShape);
      instance.SetDeleteArray(&deleteArray_TGeoCompositeShape);
      instance.SetDestructor(&destruct_TGeoCompositeShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCompositeShape*)
   {
      return GenerateInitInstanceLocal((::TGeoCompositeShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoCompositeShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoShapeAssembly(void *p = 0);
   static void *newArray_TGeoShapeAssembly(Long_t size, void *p);
   static void delete_TGeoShapeAssembly(void *p);
   static void deleteArray_TGeoShapeAssembly(void *p);
   static void destruct_TGeoShapeAssembly(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoShapeAssembly*)
   {
      ::TGeoShapeAssembly *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoShapeAssembly >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoShapeAssembly", ::TGeoShapeAssembly::Class_Version(), "TGeoShapeAssembly.h", 19,
                  typeid(::TGeoShapeAssembly), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoShapeAssembly::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoShapeAssembly) );
      instance.SetNew(&new_TGeoShapeAssembly);
      instance.SetNewArray(&newArray_TGeoShapeAssembly);
      instance.SetDelete(&delete_TGeoShapeAssembly);
      instance.SetDeleteArray(&deleteArray_TGeoShapeAssembly);
      instance.SetDestructor(&destruct_TGeoShapeAssembly);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoShapeAssembly*)
   {
      return GenerateInitInstanceLocal((::TGeoShapeAssembly*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoShapeAssembly*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoScaledShape(void *p = 0);
   static void *newArray_TGeoScaledShape(Long_t size, void *p);
   static void delete_TGeoScaledShape(void *p);
   static void deleteArray_TGeoScaledShape(void *p);
   static void destruct_TGeoScaledShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoScaledShape*)
   {
      ::TGeoScaledShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoScaledShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoScaledShape", ::TGeoScaledShape::Class_Version(), "TGeoScaledShape.h", 20,
                  typeid(::TGeoScaledShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoScaledShape::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoScaledShape) );
      instance.SetNew(&new_TGeoScaledShape);
      instance.SetNewArray(&newArray_TGeoScaledShape);
      instance.SetDelete(&delete_TGeoScaledShape);
      instance.SetDeleteArray(&deleteArray_TGeoScaledShape);
      instance.SetDestructor(&destruct_TGeoScaledShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoScaledShape*)
   {
      return GenerateInitInstanceLocal((::TGeoScaledShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoScaledShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualGeoPainter(void *p);
   static void deleteArray_TVirtualGeoPainter(void *p);
   static void destruct_TVirtualGeoPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualGeoPainter*)
   {
      ::TVirtualGeoPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualGeoPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualGeoPainter", ::TVirtualGeoPainter::Class_Version(), "TVirtualGeoPainter.h", 31,
                  typeid(::TVirtualGeoPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualGeoPainter::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualGeoPainter) );
      instance.SetDelete(&delete_TVirtualGeoPainter);
      instance.SetDeleteArray(&deleteArray_TVirtualGeoPainter);
      instance.SetDestructor(&destruct_TVirtualGeoPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualGeoPainter*)
   {
      return GenerateInitInstanceLocal((::TVirtualGeoPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualGeoPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualGeoTrack(void *p);
   static void deleteArray_TVirtualGeoTrack(void *p);
   static void destruct_TVirtualGeoTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualGeoTrack*)
   {
      ::TVirtualGeoTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualGeoTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualGeoTrack", ::TVirtualGeoTrack::Class_Version(), "TVirtualGeoTrack.h", 23,
                  typeid(::TVirtualGeoTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualGeoTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualGeoTrack) );
      instance.SetDelete(&delete_TVirtualGeoTrack);
      instance.SetDeleteArray(&deleteArray_TVirtualGeoTrack);
      instance.SetDestructor(&destruct_TVirtualGeoTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualGeoTrack*)
   {
      return GenerateInitInstanceLocal((::TVirtualGeoTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualGeoTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualGeoConverter(void *p);
   static void deleteArray_TVirtualGeoConverter(void *p);
   static void destruct_TVirtualGeoConverter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualGeoConverter*)
   {
      ::TVirtualGeoConverter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualGeoConverter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualGeoConverter", ::TVirtualGeoConverter::Class_Version(), "TVirtualGeoConverter.h", 18,
                  typeid(::TVirtualGeoConverter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualGeoConverter::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualGeoConverter) );
      instance.SetDelete(&delete_TVirtualGeoConverter);
      instance.SetDeleteArray(&deleteArray_TVirtualGeoConverter);
      instance.SetDestructor(&destruct_TVirtualGeoConverter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualGeoConverter*)
   {
      return GenerateInitInstanceLocal((::TVirtualGeoConverter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualGeoConverter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPolygon(void *p = 0);
   static void *newArray_TGeoPolygon(Long_t size, void *p);
   static void delete_TGeoPolygon(void *p);
   static void deleteArray_TGeoPolygon(void *p);
   static void destruct_TGeoPolygon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPolygon*)
   {
      ::TGeoPolygon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPolygon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPolygon", ::TGeoPolygon::Class_Version(), "TGeoPolygon.h", 19,
                  typeid(::TGeoPolygon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPolygon::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPolygon) );
      instance.SetNew(&new_TGeoPolygon);
      instance.SetNewArray(&newArray_TGeoPolygon);
      instance.SetDelete(&delete_TGeoPolygon);
      instance.SetDeleteArray(&deleteArray_TGeoPolygon);
      instance.SetDestructor(&destruct_TGeoPolygon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPolygon*)
   {
      return GenerateInitInstanceLocal((::TGeoPolygon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPolygon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoXtru(void *p = 0);
   static void *newArray_TGeoXtru(Long_t size, void *p);
   static void delete_TGeoXtru(void *p);
   static void deleteArray_TGeoXtru(void *p);
   static void destruct_TGeoXtru(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoXtru*)
   {
      ::TGeoXtru *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoXtru >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoXtru", ::TGeoXtru::Class_Version(), "TGeoXtru.h", 21,
                  typeid(::TGeoXtru), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoXtru::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoXtru) );
      instance.SetNew(&new_TGeoXtru);
      instance.SetNewArray(&newArray_TGeoXtru);
      instance.SetDelete(&delete_TGeoXtru);
      instance.SetDeleteArray(&deleteArray_TGeoXtru);
      instance.SetDestructor(&destruct_TGeoXtru);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoXtru*)
   {
      return GenerateInitInstanceLocal((::TGeoXtru*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoXtru*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPhysicalNode(void *p = 0);
   static void *newArray_TGeoPhysicalNode(Long_t size, void *p);
   static void delete_TGeoPhysicalNode(void *p);
   static void deleteArray_TGeoPhysicalNode(void *p);
   static void destruct_TGeoPhysicalNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPhysicalNode*)
   {
      ::TGeoPhysicalNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPhysicalNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPhysicalNode", ::TGeoPhysicalNode::Class_Version(), "TGeoPhysicalNode.h", 36,
                  typeid(::TGeoPhysicalNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPhysicalNode::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPhysicalNode) );
      instance.SetNew(&new_TGeoPhysicalNode);
      instance.SetNewArray(&newArray_TGeoPhysicalNode);
      instance.SetDelete(&delete_TGeoPhysicalNode);
      instance.SetDeleteArray(&deleteArray_TGeoPhysicalNode);
      instance.SetDestructor(&destruct_TGeoPhysicalNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPhysicalNode*)
   {
      return GenerateInitInstanceLocal((::TGeoPhysicalNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPhysicalNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPNEntry(void *p = 0);
   static void *newArray_TGeoPNEntry(Long_t size, void *p);
   static void delete_TGeoPNEntry(void *p);
   static void deleteArray_TGeoPNEntry(void *p);
   static void destruct_TGeoPNEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPNEntry*)
   {
      ::TGeoPNEntry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPNEntry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPNEntry", ::TGeoPNEntry::Class_Version(), "TGeoPhysicalNode.h", 104,
                  typeid(::TGeoPNEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPNEntry::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPNEntry) );
      instance.SetNew(&new_TGeoPNEntry);
      instance.SetNewArray(&newArray_TGeoPNEntry);
      instance.SetDelete(&delete_TGeoPNEntry);
      instance.SetDeleteArray(&deleteArray_TGeoPNEntry);
      instance.SetDestructor(&destruct_TGeoPNEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPNEntry*)
   {
      return GenerateInitInstanceLocal((::TGeoPNEntry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPNEntry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoHelix(void *p = 0);
   static void *newArray_TGeoHelix(Long_t size, void *p);
   static void delete_TGeoHelix(void *p);
   static void deleteArray_TGeoHelix(void *p);
   static void destruct_TGeoHelix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoHelix*)
   {
      ::TGeoHelix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoHelix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoHelix", ::TGeoHelix::Class_Version(), "TGeoHelix.h", 20,
                  typeid(::TGeoHelix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoHelix::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoHelix) );
      instance.SetNew(&new_TGeoHelix);
      instance.SetNewArray(&newArray_TGeoHelix);
      instance.SetDelete(&delete_TGeoHelix);
      instance.SetDeleteArray(&deleteArray_TGeoHelix);
      instance.SetDestructor(&destruct_TGeoHelix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoHelix*)
   {
      return GenerateInitInstanceLocal((::TGeoHelix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoHelix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoParaboloid(void *p = 0);
   static void *newArray_TGeoParaboloid(Long_t size, void *p);
   static void delete_TGeoParaboloid(void *p);
   static void deleteArray_TGeoParaboloid(void *p);
   static void destruct_TGeoParaboloid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoParaboloid*)
   {
      ::TGeoParaboloid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoParaboloid >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoParaboloid", ::TGeoParaboloid::Class_Version(), "TGeoParaboloid.h", 17,
                  typeid(::TGeoParaboloid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoParaboloid::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoParaboloid) );
      instance.SetNew(&new_TGeoParaboloid);
      instance.SetNewArray(&newArray_TGeoParaboloid);
      instance.SetDelete(&delete_TGeoParaboloid);
      instance.SetDeleteArray(&deleteArray_TGeoParaboloid);
      instance.SetDestructor(&destruct_TGeoParaboloid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoParaboloid*)
   {
      return GenerateInitInstanceLocal((::TGeoParaboloid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoParaboloid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoHalfSpace(void *p = 0);
   static void *newArray_TGeoHalfSpace(Long_t size, void *p);
   static void delete_TGeoHalfSpace(void *p);
   static void deleteArray_TGeoHalfSpace(void *p);
   static void destruct_TGeoHalfSpace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoHalfSpace*)
   {
      ::TGeoHalfSpace *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoHalfSpace >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoHalfSpace", ::TGeoHalfSpace::Class_Version(), "TGeoHalfSpace.h", 17,
                  typeid(::TGeoHalfSpace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoHalfSpace::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoHalfSpace) );
      instance.SetNew(&new_TGeoHalfSpace);
      instance.SetNewArray(&newArray_TGeoHalfSpace);
      instance.SetDelete(&delete_TGeoHalfSpace);
      instance.SetDeleteArray(&deleteArray_TGeoHalfSpace);
      instance.SetDestructor(&destruct_TGeoHalfSpace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoHalfSpace*)
   {
      return GenerateInitInstanceLocal((::TGeoHalfSpace*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoHalfSpace*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoBuilder(void *p);
   static void deleteArray_TGeoBuilder(void *p);
   static void destruct_TGeoBuilder(void *p);
   static void streamer_TGeoBuilder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBuilder*)
   {
      ::TGeoBuilder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBuilder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBuilder", ::TGeoBuilder::Class_Version(), "TGeoBuilder.h", 26,
                  typeid(::TGeoBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBuilder::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoBuilder) );
      instance.SetDelete(&delete_TGeoBuilder);
      instance.SetDeleteArray(&deleteArray_TGeoBuilder);
      instance.SetDestructor(&destruct_TGeoBuilder);
      instance.SetStreamerFunc(&streamer_TGeoBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBuilder*)
   {
      return GenerateInitInstanceLocal((::TGeoBuilder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoBuilder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualMagField(void *p);
   static void deleteArray_TVirtualMagField(void *p);
   static void destruct_TVirtualMagField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualMagField*)
   {
      ::TVirtualMagField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualMagField >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualMagField", ::TVirtualMagField::Class_Version(), "TVirtualMagField.h", 16,
                  typeid(::TVirtualMagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualMagField::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualMagField) );
      instance.SetDelete(&delete_TVirtualMagField);
      instance.SetDeleteArray(&deleteArray_TVirtualMagField);
      instance.SetDestructor(&destruct_TVirtualMagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualMagField*)
   {
      return GenerateInitInstanceLocal((::TVirtualMagField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualMagField*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoUniformMagField(void *p = 0);
   static void *newArray_TGeoUniformMagField(Long_t size, void *p);
   static void delete_TGeoUniformMagField(void *p);
   static void deleteArray_TGeoUniformMagField(void *p);
   static void destruct_TGeoUniformMagField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoUniformMagField*)
   {
      ::TGeoUniformMagField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoUniformMagField >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoUniformMagField", ::TGeoUniformMagField::Class_Version(), "TVirtualMagField.h", 35,
                  typeid(::TGeoUniformMagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoUniformMagField::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoUniformMagField) );
      instance.SetNew(&new_TGeoUniformMagField);
      instance.SetNewArray(&newArray_TGeoUniformMagField);
      instance.SetDelete(&delete_TGeoUniformMagField);
      instance.SetDeleteArray(&deleteArray_TGeoUniformMagField);
      instance.SetDestructor(&destruct_TGeoUniformMagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoUniformMagField*)
   {
      return GenerateInitInstanceLocal((::TGeoUniformMagField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoUniformMagField*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoGlobalMagField(void *p = 0);
   static void *newArray_TGeoGlobalMagField(Long_t size, void *p);
   static void delete_TGeoGlobalMagField(void *p);
   static void deleteArray_TGeoGlobalMagField(void *p);
   static void destruct_TGeoGlobalMagField(void *p);
   static void streamer_TGeoGlobalMagField(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoGlobalMagField*)
   {
      ::TGeoGlobalMagField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoGlobalMagField >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoGlobalMagField", ::TGeoGlobalMagField::Class_Version(), "TGeoGlobalMagField.h", 18,
                  typeid(::TGeoGlobalMagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoGlobalMagField::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoGlobalMagField) );
      instance.SetNew(&new_TGeoGlobalMagField);
      instance.SetNewArray(&newArray_TGeoGlobalMagField);
      instance.SetDelete(&delete_TGeoGlobalMagField);
      instance.SetDeleteArray(&deleteArray_TGeoGlobalMagField);
      instance.SetDestructor(&destruct_TGeoGlobalMagField);
      instance.SetStreamerFunc(&streamer_TGeoGlobalMagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoGlobalMagField*)
   {
      return GenerateInitInstanceLocal((::TGeoGlobalMagField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoGlobalMagField*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoBranchArray(void *p = 0);
   static void delete_TGeoBranchArray(void *p);
   static void deleteArray_TGeoBranchArray(void *p);
   static void destruct_TGeoBranchArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBranchArray*)
   {
      ::TGeoBranchArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBranchArray >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBranchArray", ::TGeoBranchArray::Class_Version(), "TGeoBranchArray.h", 22,
                  typeid(::TGeoBranchArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBranchArray::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoBranchArray) );
      instance.SetNew(&new_TGeoBranchArray);
      instance.SetDelete(&delete_TGeoBranchArray);
      instance.SetDeleteArray(&deleteArray_TGeoBranchArray);
      instance.SetDestructor(&destruct_TGeoBranchArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBranchArray*)
   {
      return GenerateInitInstanceLocal((::TGeoBranchArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoBranchArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoExtension*)
   {
      ::TGeoExtension *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoExtension >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoExtension", ::TGeoExtension::Class_Version(), "TGeoExtension.h", 19,
                  typeid(::TGeoExtension), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoExtension::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoExtension) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoExtension*)
   {
      return GenerateInitInstanceLocal((::TGeoExtension*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoExtension*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoRCExtension(void *p = 0);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoRCExtension*)
   {
      ::TGeoRCExtension *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoRCExtension >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoRCExtension", ::TGeoRCExtension::Class_Version(), "TGeoExtension.h", 36,
                  typeid(::TGeoRCExtension), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoRCExtension::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoRCExtension) );
      instance.SetNew(&new_TGeoRCExtension);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoRCExtension*)
   {
      return GenerateInitInstanceLocal((::TGeoRCExtension*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoRCExtension*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoParallelWorld(void *p = 0);
   static void *newArray_TGeoParallelWorld(Long_t size, void *p);
   static void delete_TGeoParallelWorld(void *p);
   static void deleteArray_TGeoParallelWorld(void *p);
   static void destruct_TGeoParallelWorld(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoParallelWorld*)
   {
      ::TGeoParallelWorld *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoParallelWorld >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoParallelWorld", ::TGeoParallelWorld::Class_Version(), "TGeoParallelWorld.h", 22,
                  typeid(::TGeoParallelWorld), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoParallelWorld::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoParallelWorld) );
      instance.SetNew(&new_TGeoParallelWorld);
      instance.SetNewArray(&newArray_TGeoParallelWorld);
      instance.SetDelete(&delete_TGeoParallelWorld);
      instance.SetDeleteArray(&deleteArray_TGeoParallelWorld);
      instance.SetDestructor(&destruct_TGeoParallelWorld);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoParallelWorld*)
   {
      return GenerateInitInstanceLocal((::TGeoParallelWorld*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoParallelWorld*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGeoAtt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoAtt::Class_Name()
{
   return "TGeoAtt";
}

//______________________________________________________________________________
const char *TGeoAtt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoAtt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoAtt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoAtt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoAtt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoAtt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoAtt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoAtt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMatrix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMatrix::Class_Name()
{
   return "TGeoMatrix";
}

//______________________________________________________________________________
const char *TGeoMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTranslation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTranslation::Class_Name()
{
   return "TGeoTranslation";
}

//______________________________________________________________________________
const char *TGeoTranslation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTranslation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTranslation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTranslation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoRotation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoRotation::Class_Name()
{
   return "TGeoRotation";
}

//______________________________________________________________________________
const char *TGeoRotation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoRotation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoRotation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoRotation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoScale::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoScale::Class_Name()
{
   return "TGeoScale";
}

//______________________________________________________________________________
const char *TGeoScale::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoScale*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoScale::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoScale*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoScale::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoScale*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoScale::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoScale*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCombiTrans::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCombiTrans::Class_Name()
{
   return "TGeoCombiTrans";
}

//______________________________________________________________________________
const char *TGeoCombiTrans::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTrans*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCombiTrans::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTrans*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCombiTrans::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTrans*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCombiTrans::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTrans*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoGenTrans::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoGenTrans::Class_Name()
{
   return "TGeoGenTrans";
}

//______________________________________________________________________________
const char *TGeoGenTrans::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGenTrans*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoGenTrans::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGenTrans*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoGenTrans::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGenTrans*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoGenTrans::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGenTrans*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIdentity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIdentity::Class_Name()
{
   return "TGeoIdentity";
}

//______________________________________________________________________________
const char *TGeoIdentity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIdentity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIdentity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIdentity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIdentity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIdentity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIdentity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIdentity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoHMatrix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoHMatrix::Class_Name()
{
   return "TGeoHMatrix";
}

//______________________________________________________________________________
const char *TGeoHMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHMatrix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoHMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHMatrix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoHMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHMatrix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoHMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHMatrix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoStateInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoStateInfo::Class_Name()
{
   return "TGeoStateInfo";
}

//______________________________________________________________________________
const char *TGeoStateInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoStateInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoStateInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoStateInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoStateInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoStateInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoStateInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoStateInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBoolNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBoolNode::Class_Name()
{
   return "TGeoBoolNode";
}

//______________________________________________________________________________
const char *TGeoBoolNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBoolNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBoolNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBoolNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBoolNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBoolNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBoolNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBoolNode*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoUnion::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoUnion::Class_Name()
{
   return "TGeoUnion";
}

//______________________________________________________________________________
const char *TGeoUnion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoUnion*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoUnion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoUnion*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoUnion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoUnion*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoUnion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoUnion*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIntersection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIntersection::Class_Name()
{
   return "TGeoIntersection";
}

//______________________________________________________________________________
const char *TGeoIntersection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIntersection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIntersection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIntersection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIntersection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIntersection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIntersection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIntersection*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoSubtraction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoSubtraction::Class_Name()
{
   return "TGeoSubtraction";
}

//______________________________________________________________________________
const char *TGeoSubtraction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSubtraction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoSubtraction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSubtraction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoSubtraction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSubtraction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoSubtraction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSubtraction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoElement::Class_Name()
{
   return "TGeoElement";
}

//______________________________________________________________________________
const char *TGeoElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIsotope::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIsotope::Class_Name()
{
   return "TGeoIsotope";
}

//______________________________________________________________________________
const char *TGeoIsotope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIsotope*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIsotope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIsotope*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIsotope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIsotope*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIsotope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIsotope*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoElementRN::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoElementRN::Class_Name()
{
   return "TGeoElementRN";
}

//______________________________________________________________________________
const char *TGeoElementRN::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementRN*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoElementRN::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementRN*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoElementRN::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementRN*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoElementRN::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementRN*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoDecayChannel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoDecayChannel::Class_Name()
{
   return "TGeoDecayChannel";
}

//______________________________________________________________________________
const char *TGeoDecayChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoDecayChannel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoDecayChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoDecayChannel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoDecayChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoDecayChannel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoDecayChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoDecayChannel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBatemanSol::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBatemanSol::Class_Name()
{
   return "TGeoBatemanSol";
}

//______________________________________________________________________________
const char *TGeoBatemanSol::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBatemanSol*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBatemanSol::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBatemanSol*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBatemanSol::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBatemanSol*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBatemanSol::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBatemanSol*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoElemIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoElemIter::Class_Name()
{
   return "TGeoElemIter";
}

//______________________________________________________________________________
const char *TGeoElemIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElemIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoElemIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElemIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoElemIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElemIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoElemIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElemIter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoElementTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoElementTable::Class_Name()
{
   return "TGeoElementTable";
}

//______________________________________________________________________________
const char *TGeoElementTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoElementTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoElementTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoElementTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMaterial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMaterial::Class_Name()
{
   return "TGeoMaterial";
}

//______________________________________________________________________________
const char *TGeoMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMixture::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMixture::Class_Name()
{
   return "TGeoMixture";
}

//______________________________________________________________________________
const char *TGeoMixture::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixture*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMixture::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixture*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMixture::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixture*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMixture::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixture*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMedium::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMedium::Class_Name()
{
   return "TGeoMedium";
}

//______________________________________________________________________________
const char *TGeoMedium::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMedium*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMedium::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMedium*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMedium::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMedium*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMedium::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMedium*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoShape::Class_Name()
{
   return "TGeoShape";
}

//______________________________________________________________________________
const char *TGeoShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVolume::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVolume::Class_Name()
{
   return "TGeoVolume";
}

//______________________________________________________________________________
const char *TGeoVolume::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolume*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVolume::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolume*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVolume::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolume*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVolume::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolume*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVolumeMulti::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVolumeMulti::Class_Name()
{
   return "TGeoVolumeMulti";
}

//______________________________________________________________________________
const char *TGeoVolumeMulti::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeMulti*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVolumeMulti::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeMulti*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVolumeMulti::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeMulti*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVolumeMulti::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeMulti*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVolumeAssembly::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVolumeAssembly::Class_Name()
{
   return "TGeoVolumeAssembly";
}

//______________________________________________________________________________
const char *TGeoVolumeAssembly::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeAssembly*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVolumeAssembly::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeAssembly*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVolumeAssembly::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeAssembly*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVolumeAssembly::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeAssembly*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternFinder::Class_Name()
{
   return "TGeoPatternFinder";
}

//______________________________________________________________________________
const char *TGeoPatternFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternX::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternX::Class_Name()
{
   return "TGeoPatternX";
}

//______________________________________________________________________________
const char *TGeoPatternX::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternX*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternX::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternX*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternX::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternX*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternX::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternX*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternY::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternY::Class_Name()
{
   return "TGeoPatternY";
}

//______________________________________________________________________________
const char *TGeoPatternY::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternY*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternY::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternY*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternY::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternY*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternY::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternY*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternZ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternZ::Class_Name()
{
   return "TGeoPatternZ";
}

//______________________________________________________________________________
const char *TGeoPatternZ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternZ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternZ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternZ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternZ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternZ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternZ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternZ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternParaX::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternParaX::Class_Name()
{
   return "TGeoPatternParaX";
}

//______________________________________________________________________________
const char *TGeoPatternParaX::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaX*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternParaX::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaX*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternParaX::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaX*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternParaX::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaX*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternParaY::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternParaY::Class_Name()
{
   return "TGeoPatternParaY";
}

//______________________________________________________________________________
const char *TGeoPatternParaY::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaY*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternParaY::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaY*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternParaY::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaY*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternParaY::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaY*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternParaZ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternParaZ::Class_Name()
{
   return "TGeoPatternParaZ";
}

//______________________________________________________________________________
const char *TGeoPatternParaZ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaZ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternParaZ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaZ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternParaZ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaZ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternParaZ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaZ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternTrapZ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternTrapZ::Class_Name()
{
   return "TGeoPatternTrapZ";
}

//______________________________________________________________________________
const char *TGeoPatternTrapZ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternTrapZ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternTrapZ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternTrapZ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternTrapZ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternTrapZ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternTrapZ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternTrapZ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternCylR::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternCylR::Class_Name()
{
   return "TGeoPatternCylR";
}

//______________________________________________________________________________
const char *TGeoPatternCylR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylR*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternCylR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylR*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternCylR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylR*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternCylR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylR*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternCylPhi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternCylPhi::Class_Name()
{
   return "TGeoPatternCylPhi";
}

//______________________________________________________________________________
const char *TGeoPatternCylPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylPhi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternCylPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylPhi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternCylPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylPhi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternCylPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylPhi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternSphR::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternSphR::Class_Name()
{
   return "TGeoPatternSphR";
}

//______________________________________________________________________________
const char *TGeoPatternSphR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphR*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternSphR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphR*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternSphR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphR*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternSphR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphR*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternSphTheta::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternSphTheta::Class_Name()
{
   return "TGeoPatternSphTheta";
}

//______________________________________________________________________________
const char *TGeoPatternSphTheta::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphTheta*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternSphTheta::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphTheta*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternSphTheta::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphTheta*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternSphTheta::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphTheta*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternSphPhi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternSphPhi::Class_Name()
{
   return "TGeoPatternSphPhi";
}

//______________________________________________________________________________
const char *TGeoPatternSphPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphPhi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternSphPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphPhi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternSphPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphPhi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternSphPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphPhi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternHoneycomb::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternHoneycomb::Class_Name()
{
   return "TGeoPatternHoneycomb";
}

//______________________________________________________________________________
const char *TGeoPatternHoneycomb::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternHoneycomb*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternHoneycomb::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternHoneycomb*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternHoneycomb::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternHoneycomb*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternHoneycomb::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternHoneycomb*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNode::Class_Name()
{
   return "TGeoNode";
}

//______________________________________________________________________________
const char *TGeoNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNode*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNodeMatrix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNodeMatrix::Class_Name()
{
   return "TGeoNodeMatrix";
}

//______________________________________________________________________________
const char *TGeoNodeMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeMatrix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNodeMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeMatrix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNodeMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeMatrix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNodeMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeMatrix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNodeOffset::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNodeOffset::Class_Name()
{
   return "TGeoNodeOffset";
}

//______________________________________________________________________________
const char *TGeoNodeOffset::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeOffset*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNodeOffset::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeOffset*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNodeOffset::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeOffset*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNodeOffset::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeOffset*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIteratorPlugin::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIteratorPlugin::Class_Name()
{
   return "TGeoIteratorPlugin";
}

//______________________________________________________________________________
const char *TGeoIteratorPlugin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIteratorPlugin*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIteratorPlugin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIteratorPlugin*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIteratorPlugin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIteratorPlugin*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIteratorPlugin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIteratorPlugin*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIterator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIterator::Class_Name()
{
   return "TGeoIterator";
}

//______________________________________________________________________________
const char *TGeoIterator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIterator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIterator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIterator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIterator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIterator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIterator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIterator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVoxelFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVoxelFinder::Class_Name()
{
   return "TGeoVoxelFinder";
}

//______________________________________________________________________________
const char *TGeoVoxelFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVoxelFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVoxelFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVoxelFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVoxelFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVoxelFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVoxelFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVoxelFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBBox::Class_Name()
{
   return "TGeoBBox";
}

//______________________________________________________________________________
const char *TGeoBBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPara::Class_Name()
{
   return "TGeoPara";
}

//______________________________________________________________________________
const char *TGeoPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTube::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTube::Class_Name()
{
   return "TGeoTube";
}

//______________________________________________________________________________
const char *TGeoTube::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTube*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTube::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTube*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTube::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTube*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTube::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTube*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTubeSeg::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTubeSeg::Class_Name()
{
   return "TGeoTubeSeg";
}

//______________________________________________________________________________
const char *TGeoTubeSeg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSeg*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTubeSeg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSeg*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTubeSeg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSeg*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTubeSeg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSeg*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCtub::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCtub::Class_Name()
{
   return "TGeoCtub";
}

//______________________________________________________________________________
const char *TGeoCtub::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtub*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCtub::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtub*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCtub::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtub*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCtub::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtub*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTorus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTorus::Class_Name()
{
   return "TGeoTorus";
}

//______________________________________________________________________________
const char *TGeoTorus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTorus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTorus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTorus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorus*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoSphere::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoSphere::Class_Name()
{
   return "TGeoSphere";
}

//______________________________________________________________________________
const char *TGeoSphere::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphere*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoSphere::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphere*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoSphere::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphere*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoSphere::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphere*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoEltu::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoEltu::Class_Name()
{
   return "TGeoEltu";
}

//______________________________________________________________________________
const char *TGeoEltu::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltu*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoEltu::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltu*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoEltu::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltu*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoEltu::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltu*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoHype::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoHype::Class_Name()
{
   return "TGeoHype";
}

//______________________________________________________________________________
const char *TGeoHype::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHype*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoHype::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHype*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoHype::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHype*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoHype::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHype*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCone::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCone::Class_Name()
{
   return "TGeoCone";
}

//______________________________________________________________________________
const char *TGeoCone::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCone*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCone::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCone*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCone::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCone*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCone::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCone*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoConeSeg::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoConeSeg::Class_Name()
{
   return "TGeoConeSeg";
}

//______________________________________________________________________________
const char *TGeoConeSeg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSeg*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoConeSeg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSeg*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoConeSeg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSeg*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoConeSeg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSeg*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPcon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPcon::Class_Name()
{
   return "TGeoPcon";
}

//______________________________________________________________________________
const char *TGeoPcon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPcon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPcon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPcon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPcon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPcon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPcon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPcon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPgon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPgon::Class_Name()
{
   return "TGeoPgon";
}

//______________________________________________________________________________
const char *TGeoPgon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPgon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPgon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPgon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoArb8::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoArb8::Class_Name()
{
   return "TGeoArb8";
}

//______________________________________________________________________________
const char *TGeoArb8::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoArb8*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoArb8::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoArb8*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoArb8::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoArb8*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoArb8::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoArb8*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrap::Class_Name()
{
   return "TGeoTrap";
}

//______________________________________________________________________________
const char *TGeoTrap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoGtra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoGtra::Class_Name()
{
   return "TGeoGtra";
}

//______________________________________________________________________________
const char *TGeoGtra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoGtra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoGtra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoGtra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrd1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrd1::Class_Name()
{
   return "TGeoTrd1";
}

//______________________________________________________________________________
const char *TGeoTrd1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrd1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrd1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrd1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrd2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrd2::Class_Name()
{
   return "TGeoTrd2";
}

//______________________________________________________________________________
const char *TGeoTrd2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrd2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrd2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrd2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCacheState::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCacheState::Class_Name()
{
   return "TGeoCacheState";
}

//______________________________________________________________________________
const char *TGeoCacheState::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCacheState*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCacheState::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCacheState*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCacheState::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCacheState*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCacheState::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCacheState*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNodeCache::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNodeCache::Class_Name()
{
   return "TGeoNodeCache";
}

//______________________________________________________________________________
const char *TGeoNodeCache::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeCache*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNodeCache::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeCache*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNodeCache::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeCache*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNodeCache::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeCache*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNavigator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNavigator::Class_Name()
{
   return "TGeoNavigator";
}

//______________________________________________________________________________
const char *TGeoNavigator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNavigator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNavigator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNavigator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNavigatorArray::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNavigatorArray::Class_Name()
{
   return "TGeoNavigatorArray";
}

//______________________________________________________________________________
const char *TGeoNavigatorArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigatorArray*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNavigatorArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigatorArray*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNavigatorArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigatorArray*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNavigatorArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigatorArray*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoManager::Class_Name()
{
   return "TGeoManager";
}

//______________________________________________________________________________
const char *TGeoManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCompositeShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCompositeShape::Class_Name()
{
   return "TGeoCompositeShape";
}

//______________________________________________________________________________
const char *TGeoCompositeShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCompositeShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCompositeShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCompositeShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCompositeShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCompositeShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCompositeShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCompositeShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoShapeAssembly::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoShapeAssembly::Class_Name()
{
   return "TGeoShapeAssembly";
}

//______________________________________________________________________________
const char *TGeoShapeAssembly::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeAssembly*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoShapeAssembly::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeAssembly*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoShapeAssembly::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeAssembly*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoShapeAssembly::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeAssembly*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoScaledShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoScaledShape::Class_Name()
{
   return "TGeoScaledShape";
}

//______________________________________________________________________________
const char *TGeoScaledShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoScaledShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoScaledShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoScaledShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoScaledShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoScaledShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoScaledShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoScaledShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualGeoPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualGeoPainter::Class_Name()
{
   return "TVirtualGeoPainter";
}

//______________________________________________________________________________
const char *TVirtualGeoPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualGeoPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualGeoPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualGeoPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualGeoTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualGeoTrack::Class_Name()
{
   return "TVirtualGeoTrack";
}

//______________________________________________________________________________
const char *TVirtualGeoTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualGeoTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualGeoTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualGeoTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualGeoConverter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualGeoConverter::Class_Name()
{
   return "TVirtualGeoConverter";
}

//______________________________________________________________________________
const char *TVirtualGeoConverter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoConverter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualGeoConverter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoConverter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualGeoConverter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoConverter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualGeoConverter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoConverter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPolygon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPolygon::Class_Name()
{
   return "TGeoPolygon";
}

//______________________________________________________________________________
const char *TGeoPolygon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPolygon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPolygon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPolygon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPolygon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPolygon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPolygon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPolygon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoXtru::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoXtru::Class_Name()
{
   return "TGeoXtru";
}

//______________________________________________________________________________
const char *TGeoXtru::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoXtru*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoXtru::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoXtru*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoXtru::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoXtru*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoXtru::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoXtru*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPhysicalNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPhysicalNode::Class_Name()
{
   return "TGeoPhysicalNode";
}

//______________________________________________________________________________
const char *TGeoPhysicalNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPhysicalNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPhysicalNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPhysicalNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPhysicalNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPhysicalNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPhysicalNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPhysicalNode*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPNEntry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPNEntry::Class_Name()
{
   return "TGeoPNEntry";
}

//______________________________________________________________________________
const char *TGeoPNEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPNEntry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPNEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPNEntry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPNEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPNEntry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPNEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPNEntry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoHelix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoHelix::Class_Name()
{
   return "TGeoHelix";
}

//______________________________________________________________________________
const char *TGeoHelix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHelix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoHelix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHelix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoHelix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHelix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoHelix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHelix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoParaboloid::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoParaboloid::Class_Name()
{
   return "TGeoParaboloid";
}

//______________________________________________________________________________
const char *TGeoParaboloid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaboloid*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoParaboloid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaboloid*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoParaboloid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaboloid*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoParaboloid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaboloid*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoHalfSpace::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoHalfSpace::Class_Name()
{
   return "TGeoHalfSpace";
}

//______________________________________________________________________________
const char *TGeoHalfSpace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHalfSpace*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoHalfSpace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHalfSpace*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoHalfSpace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHalfSpace*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoHalfSpace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHalfSpace*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBuilder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBuilder::Class_Name()
{
   return "TGeoBuilder";
}

//______________________________________________________________________________
const char *TGeoBuilder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBuilder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBuilder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBuilder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBuilder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBuilder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBuilder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBuilder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualMagField::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualMagField::Class_Name()
{
   return "TVirtualMagField";
}

//______________________________________________________________________________
const char *TVirtualMagField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMagField*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualMagField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMagField*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualMagField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMagField*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualMagField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMagField*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoUniformMagField::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoUniformMagField::Class_Name()
{
   return "TGeoUniformMagField";
}

//______________________________________________________________________________
const char *TGeoUniformMagField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoUniformMagField*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoUniformMagField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoUniformMagField*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoUniformMagField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoUniformMagField*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoUniformMagField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoUniformMagField*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoGlobalMagField::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoGlobalMagField::Class_Name()
{
   return "TGeoGlobalMagField";
}

//______________________________________________________________________________
const char *TGeoGlobalMagField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGlobalMagField*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoGlobalMagField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGlobalMagField*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoGlobalMagField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGlobalMagField*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoGlobalMagField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGlobalMagField*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBranchArray::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBranchArray::Class_Name()
{
   return "TGeoBranchArray";
}

//______________________________________________________________________________
const char *TGeoBranchArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBranchArray*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBranchArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBranchArray*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBranchArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBranchArray*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBranchArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBranchArray*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoExtension::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoExtension::Class_Name()
{
   return "TGeoExtension";
}

//______________________________________________________________________________
const char *TGeoExtension::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoExtension*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoExtension::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoExtension*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoExtension::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoExtension*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoExtension::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoExtension*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoRCExtension::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoRCExtension::Class_Name()
{
   return "TGeoRCExtension";
}

//______________________________________________________________________________
const char *TGeoRCExtension::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRCExtension*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoRCExtension::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRCExtension*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoRCExtension::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRCExtension*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoRCExtension::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRCExtension*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoParallelWorld::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoParallelWorld::Class_Name()
{
   return "TGeoParallelWorld";
}

//______________________________________________________________________________
const char *TGeoParallelWorld::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParallelWorld*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoParallelWorld::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParallelWorld*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoParallelWorld::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParallelWorld*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoParallelWorld::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParallelWorld*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEthreadcLcLidcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<thread::id,int> : new pair<thread::id,int>;
   }
   static void *newArray_pairlEthreadcLcLidcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<thread::id,int>[nElements] : new pair<thread::id,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEthreadcLcLidcOintgR(void *p) {
      delete ((pair<thread::id,int>*)p);
   }
   static void deleteArray_pairlEthreadcLcLidcOintgR(void *p) {
      delete [] ((pair<thread::id,int>*)p);
   }
   static void destruct_pairlEthreadcLcLidcOintgR(void *p) {
      typedef pair<thread::id,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<thread::id,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<thread::id,TGeoNavigatorArray*> : new pair<thread::id,TGeoNavigatorArray*>;
   }
   static void *newArray_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<thread::id,TGeoNavigatorArray*>[nElements] : new pair<thread::id,TGeoNavigatorArray*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p) {
      delete ((pair<thread::id,TGeoNavigatorArray*>*)p);
   }
   static void deleteArray_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p) {
      delete [] ((pair<thread::id,TGeoNavigatorArray*>*)p);
   }
   static void destruct_pairlEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p) {
      typedef pair<thread::id,TGeoNavigatorArray*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<thread::id,TGeoNavigatorArray*>

//______________________________________________________________________________
void TGeoAtt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoAtt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoAtt::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoAtt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoAtt(void *p) {
      return  p ? new(p) ::TGeoAtt : new ::TGeoAtt;
   }
   static void *newArray_TGeoAtt(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoAtt[nElements] : new ::TGeoAtt[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoAtt(void *p) {
      delete ((::TGeoAtt*)p);
   }
   static void deleteArray_TGeoAtt(void *p) {
      delete [] ((::TGeoAtt*)p);
   }
   static void destruct_TGeoAtt(void *p) {
      typedef ::TGeoAtt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoAtt

//______________________________________________________________________________
void TGeoMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMatrix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoMatrix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoMatrix::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoMatrix(void *p) {
      delete ((::TGeoMatrix*)p);
   }
   static void deleteArray_TGeoMatrix(void *p) {
      delete [] ((::TGeoMatrix*)p);
   }
   static void destruct_TGeoMatrix(void *p) {
      typedef ::TGeoMatrix current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoMatrix

//______________________________________________________________________________
void TGeoTranslation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTranslation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTranslation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTranslation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTranslation(void *p) {
      return  p ? new(p) ::TGeoTranslation : new ::TGeoTranslation;
   }
   static void *newArray_TGeoTranslation(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTranslation[nElements] : new ::TGeoTranslation[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTranslation(void *p) {
      delete ((::TGeoTranslation*)p);
   }
   static void deleteArray_TGeoTranslation(void *p) {
      delete [] ((::TGeoTranslation*)p);
   }
   static void destruct_TGeoTranslation(void *p) {
      typedef ::TGeoTranslation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTranslation

//______________________________________________________________________________
void TGeoRotation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoRotation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoRotation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoRotation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoRotation(void *p) {
      return  p ? new(p) ::TGeoRotation : new ::TGeoRotation;
   }
   static void *newArray_TGeoRotation(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoRotation[nElements] : new ::TGeoRotation[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoRotation(void *p) {
      delete ((::TGeoRotation*)p);
   }
   static void deleteArray_TGeoRotation(void *p) {
      delete [] ((::TGeoRotation*)p);
   }
   static void destruct_TGeoRotation(void *p) {
      typedef ::TGeoRotation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoRotation

//______________________________________________________________________________
void TGeoScale::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoScale.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoScale::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoScale::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoScale(void *p) {
      return  p ? new(p) ::TGeoScale : new ::TGeoScale;
   }
   static void *newArray_TGeoScale(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoScale[nElements] : new ::TGeoScale[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoScale(void *p) {
      delete ((::TGeoScale*)p);
   }
   static void deleteArray_TGeoScale(void *p) {
      delete [] ((::TGeoScale*)p);
   }
   static void destruct_TGeoScale(void *p) {
      typedef ::TGeoScale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoScale

//______________________________________________________________________________
void TGeoCombiTrans::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCombiTrans.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCombiTrans::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCombiTrans::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCombiTrans(void *p) {
      return  p ? new(p) ::TGeoCombiTrans : new ::TGeoCombiTrans;
   }
   static void *newArray_TGeoCombiTrans(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCombiTrans[nElements] : new ::TGeoCombiTrans[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCombiTrans(void *p) {
      delete ((::TGeoCombiTrans*)p);
   }
   static void deleteArray_TGeoCombiTrans(void *p) {
      delete [] ((::TGeoCombiTrans*)p);
   }
   static void destruct_TGeoCombiTrans(void *p) {
      typedef ::TGeoCombiTrans current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCombiTrans

//______________________________________________________________________________
void TGeoGenTrans::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoGenTrans.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoGenTrans::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoGenTrans::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoGenTrans(void *p) {
      return  p ? new(p) ::TGeoGenTrans : new ::TGeoGenTrans;
   }
   static void *newArray_TGeoGenTrans(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoGenTrans[nElements] : new ::TGeoGenTrans[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoGenTrans(void *p) {
      delete ((::TGeoGenTrans*)p);
   }
   static void deleteArray_TGeoGenTrans(void *p) {
      delete [] ((::TGeoGenTrans*)p);
   }
   static void destruct_TGeoGenTrans(void *p) {
      typedef ::TGeoGenTrans current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoGenTrans

//______________________________________________________________________________
void TGeoIdentity::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIdentity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoIdentity::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoIdentity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoIdentity(void *p) {
      return  p ? new(p) ::TGeoIdentity : new ::TGeoIdentity;
   }
   static void *newArray_TGeoIdentity(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoIdentity[nElements] : new ::TGeoIdentity[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoIdentity(void *p) {
      delete ((::TGeoIdentity*)p);
   }
   static void deleteArray_TGeoIdentity(void *p) {
      delete [] ((::TGeoIdentity*)p);
   }
   static void destruct_TGeoIdentity(void *p) {
      typedef ::TGeoIdentity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoIdentity

//______________________________________________________________________________
void TGeoHMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoHMatrix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoHMatrix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoHMatrix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoHMatrix(void *p) {
      return  p ? new(p) ::TGeoHMatrix : new ::TGeoHMatrix;
   }
   static void *newArray_TGeoHMatrix(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoHMatrix[nElements] : new ::TGeoHMatrix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoHMatrix(void *p) {
      delete ((::TGeoHMatrix*)p);
   }
   static void deleteArray_TGeoHMatrix(void *p) {
      delete [] ((::TGeoHMatrix*)p);
   }
   static void destruct_TGeoHMatrix(void *p) {
      typedef ::TGeoHMatrix current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoHMatrix

//______________________________________________________________________________
void TGeoStateInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoStateInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoStateInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoStateInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoStateInfo(void *p) {
      return  p ? new(p) ::TGeoStateInfo : new ::TGeoStateInfo;
   }
   static void *newArray_TGeoStateInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoStateInfo[nElements] : new ::TGeoStateInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoStateInfo(void *p) {
      delete ((::TGeoStateInfo*)p);
   }
   static void deleteArray_TGeoStateInfo(void *p) {
      delete [] ((::TGeoStateInfo*)p);
   }
   static void destruct_TGeoStateInfo(void *p) {
      typedef ::TGeoStateInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoStateInfo

//______________________________________________________________________________
void TGeoBoolNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBoolNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoBoolNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoBoolNode::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoBoolNode(void *p) {
      delete ((::TGeoBoolNode*)p);
   }
   static void deleteArray_TGeoBoolNode(void *p) {
      delete [] ((::TGeoBoolNode*)p);
   }
   static void destruct_TGeoBoolNode(void *p) {
      typedef ::TGeoBoolNode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoBoolNode

//______________________________________________________________________________
void TGeoUnion::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoUnion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoUnion::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoUnion::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoUnion(void *p) {
      return  p ? new(p) ::TGeoUnion : new ::TGeoUnion;
   }
   static void *newArray_TGeoUnion(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoUnion[nElements] : new ::TGeoUnion[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoUnion(void *p) {
      delete ((::TGeoUnion*)p);
   }
   static void deleteArray_TGeoUnion(void *p) {
      delete [] ((::TGeoUnion*)p);
   }
   static void destruct_TGeoUnion(void *p) {
      typedef ::TGeoUnion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoUnion

//______________________________________________________________________________
void TGeoIntersection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIntersection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoIntersection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoIntersection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoIntersection(void *p) {
      return  p ? new(p) ::TGeoIntersection : new ::TGeoIntersection;
   }
   static void *newArray_TGeoIntersection(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoIntersection[nElements] : new ::TGeoIntersection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoIntersection(void *p) {
      delete ((::TGeoIntersection*)p);
   }
   static void deleteArray_TGeoIntersection(void *p) {
      delete [] ((::TGeoIntersection*)p);
   }
   static void destruct_TGeoIntersection(void *p) {
      typedef ::TGeoIntersection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoIntersection

//______________________________________________________________________________
void TGeoSubtraction::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoSubtraction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoSubtraction::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoSubtraction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoSubtraction(void *p) {
      return  p ? new(p) ::TGeoSubtraction : new ::TGeoSubtraction;
   }
   static void *newArray_TGeoSubtraction(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoSubtraction[nElements] : new ::TGeoSubtraction[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoSubtraction(void *p) {
      delete ((::TGeoSubtraction*)p);
   }
   static void deleteArray_TGeoSubtraction(void *p) {
      delete [] ((::TGeoSubtraction*)p);
   }
   static void destruct_TGeoSubtraction(void *p) {
      typedef ::TGeoSubtraction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoSubtraction

//______________________________________________________________________________
void TGeoElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoElement(void *p) {
      return  p ? new(p) ::TGeoElement : new ::TGeoElement;
   }
   static void *newArray_TGeoElement(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoElement[nElements] : new ::TGeoElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoElement(void *p) {
      delete ((::TGeoElement*)p);
   }
   static void deleteArray_TGeoElement(void *p) {
      delete [] ((::TGeoElement*)p);
   }
   static void destruct_TGeoElement(void *p) {
      typedef ::TGeoElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoElement

//______________________________________________________________________________
void TGeoIsotope::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIsotope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoIsotope::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoIsotope::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoIsotope(void *p) {
      return  p ? new(p) ::TGeoIsotope : new ::TGeoIsotope;
   }
   static void *newArray_TGeoIsotope(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoIsotope[nElements] : new ::TGeoIsotope[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoIsotope(void *p) {
      delete ((::TGeoIsotope*)p);
   }
   static void deleteArray_TGeoIsotope(void *p) {
      delete [] ((::TGeoIsotope*)p);
   }
   static void destruct_TGeoIsotope(void *p) {
      typedef ::TGeoIsotope current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoIsotope

//______________________________________________________________________________
void TGeoElementRN::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoElementRN.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoElementRN::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoElementRN::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoElementRN(void *p) {
      return  p ? new(p) ::TGeoElementRN : new ::TGeoElementRN;
   }
   static void *newArray_TGeoElementRN(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoElementRN[nElements] : new ::TGeoElementRN[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoElementRN(void *p) {
      delete ((::TGeoElementRN*)p);
   }
   static void deleteArray_TGeoElementRN(void *p) {
      delete [] ((::TGeoElementRN*)p);
   }
   static void destruct_TGeoElementRN(void *p) {
      typedef ::TGeoElementRN current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoElementRN

//______________________________________________________________________________
void TGeoDecayChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoDecayChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoDecayChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoDecayChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoDecayChannel(void *p) {
      return  p ? new(p) ::TGeoDecayChannel : new ::TGeoDecayChannel;
   }
   static void *newArray_TGeoDecayChannel(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoDecayChannel[nElements] : new ::TGeoDecayChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoDecayChannel(void *p) {
      delete ((::TGeoDecayChannel*)p);
   }
   static void deleteArray_TGeoDecayChannel(void *p) {
      delete [] ((::TGeoDecayChannel*)p);
   }
   static void destruct_TGeoDecayChannel(void *p) {
      typedef ::TGeoDecayChannel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoDecayChannel

//______________________________________________________________________________
void TGeoBatemanSol::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBatemanSol.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoBatemanSol::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoBatemanSol::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoBatemanSol(void *p) {
      return  p ? new(p) ::TGeoBatemanSol : new ::TGeoBatemanSol;
   }
   static void *newArray_TGeoBatemanSol(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoBatemanSol[nElements] : new ::TGeoBatemanSol[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoBatemanSol(void *p) {
      delete ((::TGeoBatemanSol*)p);
   }
   static void deleteArray_TGeoBatemanSol(void *p) {
      delete [] ((::TGeoBatemanSol*)p);
   }
   static void destruct_TGeoBatemanSol(void *p) {
      typedef ::TGeoBatemanSol current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoBatemanSol

//______________________________________________________________________________
void TGeoElemIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoElemIter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoElemIter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoElemIter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoElemIter(void *p) {
      delete ((::TGeoElemIter*)p);
   }
   static void deleteArray_TGeoElemIter(void *p) {
      delete [] ((::TGeoElemIter*)p);
   }
   static void destruct_TGeoElemIter(void *p) {
      typedef ::TGeoElemIter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoElemIter

//______________________________________________________________________________
void TGeoElementTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoElementTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoElementTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoElementTable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoElementTable(void *p) {
      return  p ? new(p) ::TGeoElementTable : new ::TGeoElementTable;
   }
   static void *newArray_TGeoElementTable(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoElementTable[nElements] : new ::TGeoElementTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoElementTable(void *p) {
      delete ((::TGeoElementTable*)p);
   }
   static void deleteArray_TGeoElementTable(void *p) {
      delete [] ((::TGeoElementTable*)p);
   }
   static void destruct_TGeoElementTable(void *p) {
      typedef ::TGeoElementTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoElementTable

//______________________________________________________________________________
void TGeoMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMaterial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoMaterial::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoMaterial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMaterial(void *p) {
      return  p ? new(p) ::TGeoMaterial : new ::TGeoMaterial;
   }
   static void *newArray_TGeoMaterial(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMaterial[nElements] : new ::TGeoMaterial[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMaterial(void *p) {
      delete ((::TGeoMaterial*)p);
   }
   static void deleteArray_TGeoMaterial(void *p) {
      delete [] ((::TGeoMaterial*)p);
   }
   static void destruct_TGeoMaterial(void *p) {
      typedef ::TGeoMaterial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoMaterial

//______________________________________________________________________________
void TGeoMixture::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMixture.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoMixture::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoMixture::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMixture(void *p) {
      return  p ? new(p) ::TGeoMixture : new ::TGeoMixture;
   }
   static void *newArray_TGeoMixture(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMixture[nElements] : new ::TGeoMixture[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMixture(void *p) {
      delete ((::TGeoMixture*)p);
   }
   static void deleteArray_TGeoMixture(void *p) {
      delete [] ((::TGeoMixture*)p);
   }
   static void destruct_TGeoMixture(void *p) {
      typedef ::TGeoMixture current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoMixture

//______________________________________________________________________________
void TGeoMedium::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMedium.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoMedium::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoMedium::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMedium(void *p) {
      return  p ? new(p) ::TGeoMedium : new ::TGeoMedium;
   }
   static void *newArray_TGeoMedium(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMedium[nElements] : new ::TGeoMedium[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMedium(void *p) {
      delete ((::TGeoMedium*)p);
   }
   static void deleteArray_TGeoMedium(void *p) {
      delete [] ((::TGeoMedium*)p);
   }
   static void destruct_TGeoMedium(void *p) {
      typedef ::TGeoMedium current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoMedium

//______________________________________________________________________________
void TGeoShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoShape::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoShape(void *p) {
      delete ((::TGeoShape*)p);
   }
   static void deleteArray_TGeoShape(void *p) {
      delete [] ((::TGeoShape*)p);
   }
   static void destruct_TGeoShape(void *p) {
      typedef ::TGeoShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoShape

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoVolume(void *p) {
      return  p ? new(p) ::TGeoVolume : new ::TGeoVolume;
   }
   static void *newArray_TGeoVolume(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoVolume[nElements] : new ::TGeoVolume[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoVolume(void *p) {
      delete ((::TGeoVolume*)p);
   }
   static void deleteArray_TGeoVolume(void *p) {
      delete [] ((::TGeoVolume*)p);
   }
   static void destruct_TGeoVolume(void *p) {
      typedef ::TGeoVolume current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoVolume(TBuffer &buf, void *obj) {
      ((::TGeoVolume*)obj)->::TGeoVolume::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoVolume

//______________________________________________________________________________
void TGeoVolumeMulti::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoVolumeMulti.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoVolumeMulti::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoVolumeMulti::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoVolumeMulti(void *p) {
      return  p ? new(p) ::TGeoVolumeMulti : new ::TGeoVolumeMulti;
   }
   static void *newArray_TGeoVolumeMulti(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoVolumeMulti[nElements] : new ::TGeoVolumeMulti[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoVolumeMulti(void *p) {
      delete ((::TGeoVolumeMulti*)p);
   }
   static void deleteArray_TGeoVolumeMulti(void *p) {
      delete [] ((::TGeoVolumeMulti*)p);
   }
   static void destruct_TGeoVolumeMulti(void *p) {
      typedef ::TGeoVolumeMulti current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoVolumeMulti

//______________________________________________________________________________
void TGeoVolumeAssembly::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoVolumeAssembly.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoVolumeAssembly::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoVolumeAssembly::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoVolumeAssembly(void *p) {
      return  p ? new(p) ::TGeoVolumeAssembly : new ::TGeoVolumeAssembly;
   }
   static void *newArray_TGeoVolumeAssembly(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoVolumeAssembly[nElements] : new ::TGeoVolumeAssembly[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoVolumeAssembly(void *p) {
      delete ((::TGeoVolumeAssembly*)p);
   }
   static void deleteArray_TGeoVolumeAssembly(void *p) {
      delete [] ((::TGeoVolumeAssembly*)p);
   }
   static void destruct_TGeoVolumeAssembly(void *p) {
      typedef ::TGeoVolumeAssembly current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoVolumeAssembly

//______________________________________________________________________________
void TGeoPatternFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoPatternFinder(void *p) {
      delete ((::TGeoPatternFinder*)p);
   }
   static void deleteArray_TGeoPatternFinder(void *p) {
      delete [] ((::TGeoPatternFinder*)p);
   }
   static void destruct_TGeoPatternFinder(void *p) {
      typedef ::TGeoPatternFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternFinder

//______________________________________________________________________________
void TGeoPatternX::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternX.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternX::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternX::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternX(void *p) {
      return  p ? new(p) ::TGeoPatternX : new ::TGeoPatternX;
   }
   static void *newArray_TGeoPatternX(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternX[nElements] : new ::TGeoPatternX[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternX(void *p) {
      delete ((::TGeoPatternX*)p);
   }
   static void deleteArray_TGeoPatternX(void *p) {
      delete [] ((::TGeoPatternX*)p);
   }
   static void destruct_TGeoPatternX(void *p) {
      typedef ::TGeoPatternX current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternX

//______________________________________________________________________________
void TGeoPatternY::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternY.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternY::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternY::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternY(void *p) {
      return  p ? new(p) ::TGeoPatternY : new ::TGeoPatternY;
   }
   static void *newArray_TGeoPatternY(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternY[nElements] : new ::TGeoPatternY[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternY(void *p) {
      delete ((::TGeoPatternY*)p);
   }
   static void deleteArray_TGeoPatternY(void *p) {
      delete [] ((::TGeoPatternY*)p);
   }
   static void destruct_TGeoPatternY(void *p) {
      typedef ::TGeoPatternY current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternY

//______________________________________________________________________________
void TGeoPatternZ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternZ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternZ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternZ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternZ(void *p) {
      return  p ? new(p) ::TGeoPatternZ : new ::TGeoPatternZ;
   }
   static void *newArray_TGeoPatternZ(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternZ[nElements] : new ::TGeoPatternZ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternZ(void *p) {
      delete ((::TGeoPatternZ*)p);
   }
   static void deleteArray_TGeoPatternZ(void *p) {
      delete [] ((::TGeoPatternZ*)p);
   }
   static void destruct_TGeoPatternZ(void *p) {
      typedef ::TGeoPatternZ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternZ

//______________________________________________________________________________
void TGeoPatternParaX::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternParaX.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternParaX::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternParaX::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternParaX(void *p) {
      return  p ? new(p) ::TGeoPatternParaX : new ::TGeoPatternParaX;
   }
   static void *newArray_TGeoPatternParaX(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternParaX[nElements] : new ::TGeoPatternParaX[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternParaX(void *p) {
      delete ((::TGeoPatternParaX*)p);
   }
   static void deleteArray_TGeoPatternParaX(void *p) {
      delete [] ((::TGeoPatternParaX*)p);
   }
   static void destruct_TGeoPatternParaX(void *p) {
      typedef ::TGeoPatternParaX current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternParaX

//______________________________________________________________________________
void TGeoPatternParaY::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternParaY.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternParaY::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternParaY::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternParaY(void *p) {
      return  p ? new(p) ::TGeoPatternParaY : new ::TGeoPatternParaY;
   }
   static void *newArray_TGeoPatternParaY(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternParaY[nElements] : new ::TGeoPatternParaY[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternParaY(void *p) {
      delete ((::TGeoPatternParaY*)p);
   }
   static void deleteArray_TGeoPatternParaY(void *p) {
      delete [] ((::TGeoPatternParaY*)p);
   }
   static void destruct_TGeoPatternParaY(void *p) {
      typedef ::TGeoPatternParaY current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternParaY

//______________________________________________________________________________
void TGeoPatternParaZ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternParaZ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternParaZ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternParaZ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternParaZ(void *p) {
      return  p ? new(p) ::TGeoPatternParaZ : new ::TGeoPatternParaZ;
   }
   static void *newArray_TGeoPatternParaZ(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternParaZ[nElements] : new ::TGeoPatternParaZ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternParaZ(void *p) {
      delete ((::TGeoPatternParaZ*)p);
   }
   static void deleteArray_TGeoPatternParaZ(void *p) {
      delete [] ((::TGeoPatternParaZ*)p);
   }
   static void destruct_TGeoPatternParaZ(void *p) {
      typedef ::TGeoPatternParaZ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternParaZ

//______________________________________________________________________________
void TGeoPatternTrapZ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternTrapZ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternTrapZ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternTrapZ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternTrapZ(void *p) {
      return  p ? new(p) ::TGeoPatternTrapZ : new ::TGeoPatternTrapZ;
   }
   static void *newArray_TGeoPatternTrapZ(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternTrapZ[nElements] : new ::TGeoPatternTrapZ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternTrapZ(void *p) {
      delete ((::TGeoPatternTrapZ*)p);
   }
   static void deleteArray_TGeoPatternTrapZ(void *p) {
      delete [] ((::TGeoPatternTrapZ*)p);
   }
   static void destruct_TGeoPatternTrapZ(void *p) {
      typedef ::TGeoPatternTrapZ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternTrapZ

//______________________________________________________________________________
void TGeoPatternCylR::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternCylR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternCylR::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternCylR::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternCylR(void *p) {
      return  p ? new(p) ::TGeoPatternCylR : new ::TGeoPatternCylR;
   }
   static void *newArray_TGeoPatternCylR(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternCylR[nElements] : new ::TGeoPatternCylR[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternCylR(void *p) {
      delete ((::TGeoPatternCylR*)p);
   }
   static void deleteArray_TGeoPatternCylR(void *p) {
      delete [] ((::TGeoPatternCylR*)p);
   }
   static void destruct_TGeoPatternCylR(void *p) {
      typedef ::TGeoPatternCylR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternCylR

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternCylPhi(void *p) {
      return  p ? new(p) ::TGeoPatternCylPhi : new ::TGeoPatternCylPhi;
   }
   static void *newArray_TGeoPatternCylPhi(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternCylPhi[nElements] : new ::TGeoPatternCylPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternCylPhi(void *p) {
      delete ((::TGeoPatternCylPhi*)p);
   }
   static void deleteArray_TGeoPatternCylPhi(void *p) {
      delete [] ((::TGeoPatternCylPhi*)p);
   }
   static void destruct_TGeoPatternCylPhi(void *p) {
      typedef ::TGeoPatternCylPhi current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoPatternCylPhi(TBuffer &buf, void *obj) {
      ((::TGeoPatternCylPhi*)obj)->::TGeoPatternCylPhi::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoPatternCylPhi

//______________________________________________________________________________
void TGeoPatternSphR::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternSphR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternSphR::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternSphR::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternSphR(void *p) {
      return  p ? new(p) ::TGeoPatternSphR : new ::TGeoPatternSphR;
   }
   static void *newArray_TGeoPatternSphR(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternSphR[nElements] : new ::TGeoPatternSphR[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternSphR(void *p) {
      delete ((::TGeoPatternSphR*)p);
   }
   static void deleteArray_TGeoPatternSphR(void *p) {
      delete [] ((::TGeoPatternSphR*)p);
   }
   static void destruct_TGeoPatternSphR(void *p) {
      typedef ::TGeoPatternSphR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternSphR

//______________________________________________________________________________
void TGeoPatternSphTheta::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternSphTheta.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternSphTheta::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternSphTheta::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternSphTheta(void *p) {
      return  p ? new(p) ::TGeoPatternSphTheta : new ::TGeoPatternSphTheta;
   }
   static void *newArray_TGeoPatternSphTheta(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternSphTheta[nElements] : new ::TGeoPatternSphTheta[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternSphTheta(void *p) {
      delete ((::TGeoPatternSphTheta*)p);
   }
   static void deleteArray_TGeoPatternSphTheta(void *p) {
      delete [] ((::TGeoPatternSphTheta*)p);
   }
   static void destruct_TGeoPatternSphTheta(void *p) {
      typedef ::TGeoPatternSphTheta current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternSphTheta

//______________________________________________________________________________
void TGeoPatternSphPhi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternSphPhi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternSphPhi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternSphPhi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternSphPhi(void *p) {
      return  p ? new(p) ::TGeoPatternSphPhi : new ::TGeoPatternSphPhi;
   }
   static void *newArray_TGeoPatternSphPhi(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternSphPhi[nElements] : new ::TGeoPatternSphPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternSphPhi(void *p) {
      delete ((::TGeoPatternSphPhi*)p);
   }
   static void deleteArray_TGeoPatternSphPhi(void *p) {
      delete [] ((::TGeoPatternSphPhi*)p);
   }
   static void destruct_TGeoPatternSphPhi(void *p) {
      typedef ::TGeoPatternSphPhi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternSphPhi

//______________________________________________________________________________
void TGeoPatternHoneycomb::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternHoneycomb.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternHoneycomb::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternHoneycomb::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternHoneycomb(void *p) {
      return  p ? new(p) ::TGeoPatternHoneycomb : new ::TGeoPatternHoneycomb;
   }
   static void *newArray_TGeoPatternHoneycomb(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternHoneycomb[nElements] : new ::TGeoPatternHoneycomb[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternHoneycomb(void *p) {
      delete ((::TGeoPatternHoneycomb*)p);
   }
   static void deleteArray_TGeoPatternHoneycomb(void *p) {
      delete [] ((::TGeoPatternHoneycomb*)p);
   }
   static void destruct_TGeoPatternHoneycomb(void *p) {
      typedef ::TGeoPatternHoneycomb current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternHoneycomb

//______________________________________________________________________________
void TGeoNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNode::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoNode(void *p) {
      delete ((::TGeoNode*)p);
   }
   static void deleteArray_TGeoNode(void *p) {
      delete [] ((::TGeoNode*)p);
   }
   static void destruct_TGeoNode(void *p) {
      typedef ::TGeoNode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNode

//______________________________________________________________________________
void TGeoNodeMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNodeMatrix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNodeMatrix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNodeMatrix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNodeMatrix(void *p) {
      return  p ? new(p) ::TGeoNodeMatrix : new ::TGeoNodeMatrix;
   }
   static void *newArray_TGeoNodeMatrix(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNodeMatrix[nElements] : new ::TGeoNodeMatrix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNodeMatrix(void *p) {
      delete ((::TGeoNodeMatrix*)p);
   }
   static void deleteArray_TGeoNodeMatrix(void *p) {
      delete [] ((::TGeoNodeMatrix*)p);
   }
   static void destruct_TGeoNodeMatrix(void *p) {
      typedef ::TGeoNodeMatrix current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNodeMatrix

//______________________________________________________________________________
void TGeoNodeOffset::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNodeOffset.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNodeOffset::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNodeOffset::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNodeOffset(void *p) {
      return  p ? new(p) ::TGeoNodeOffset : new ::TGeoNodeOffset;
   }
   static void *newArray_TGeoNodeOffset(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNodeOffset[nElements] : new ::TGeoNodeOffset[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNodeOffset(void *p) {
      delete ((::TGeoNodeOffset*)p);
   }
   static void deleteArray_TGeoNodeOffset(void *p) {
      delete [] ((::TGeoNodeOffset*)p);
   }
   static void destruct_TGeoNodeOffset(void *p) {
      typedef ::TGeoNodeOffset current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNodeOffset

//______________________________________________________________________________
void TGeoIteratorPlugin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIteratorPlugin.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoIteratorPlugin(void *p) {
      delete ((::TGeoIteratorPlugin*)p);
   }
   static void deleteArray_TGeoIteratorPlugin(void *p) {
      delete [] ((::TGeoIteratorPlugin*)p);
   }
   static void destruct_TGeoIteratorPlugin(void *p) {
      typedef ::TGeoIteratorPlugin current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoIteratorPlugin(TBuffer &buf, void *obj) {
      ((::TGeoIteratorPlugin*)obj)->::TGeoIteratorPlugin::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoIteratorPlugin

//______________________________________________________________________________
void TGeoIterator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIterator.

   ::Error("TGeoIterator::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoIterator(void *p) {
      delete ((::TGeoIterator*)p);
   }
   static void deleteArray_TGeoIterator(void *p) {
      delete [] ((::TGeoIterator*)p);
   }
   static void destruct_TGeoIterator(void *p) {
      typedef ::TGeoIterator current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoIterator(TBuffer &buf, void *obj) {
      ((::TGeoIterator*)obj)->::TGeoIterator::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoIterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoVoxelFinder(void *p) {
      return  p ? new(p) ::TGeoVoxelFinder : new ::TGeoVoxelFinder;
   }
   static void *newArray_TGeoVoxelFinder(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoVoxelFinder[nElements] : new ::TGeoVoxelFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoVoxelFinder(void *p) {
      delete ((::TGeoVoxelFinder*)p);
   }
   static void deleteArray_TGeoVoxelFinder(void *p) {
      delete [] ((::TGeoVoxelFinder*)p);
   }
   static void destruct_TGeoVoxelFinder(void *p) {
      typedef ::TGeoVoxelFinder current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoVoxelFinder(TBuffer &buf, void *obj) {
      ((::TGeoVoxelFinder*)obj)->::TGeoVoxelFinder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoVoxelFinder

//______________________________________________________________________________
void TGeoBBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoBBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoBBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoBBox(void *p) {
      return  p ? new(p) ::TGeoBBox : new ::TGeoBBox;
   }
   static void *newArray_TGeoBBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoBBox[nElements] : new ::TGeoBBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoBBox(void *p) {
      delete ((::TGeoBBox*)p);
   }
   static void deleteArray_TGeoBBox(void *p) {
      delete [] ((::TGeoBBox*)p);
   }
   static void destruct_TGeoBBox(void *p) {
      typedef ::TGeoBBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoBBox

//______________________________________________________________________________
void TGeoPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPara(void *p) {
      return  p ? new(p) ::TGeoPara : new ::TGeoPara;
   }
   static void *newArray_TGeoPara(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPara[nElements] : new ::TGeoPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPara(void *p) {
      delete ((::TGeoPara*)p);
   }
   static void deleteArray_TGeoPara(void *p) {
      delete [] ((::TGeoPara*)p);
   }
   static void destruct_TGeoPara(void *p) {
      typedef ::TGeoPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPara

//______________________________________________________________________________
void TGeoTube::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTube.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTube::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTube::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTube(void *p) {
      return  p ? new(p) ::TGeoTube : new ::TGeoTube;
   }
   static void *newArray_TGeoTube(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTube[nElements] : new ::TGeoTube[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTube(void *p) {
      delete ((::TGeoTube*)p);
   }
   static void deleteArray_TGeoTube(void *p) {
      delete [] ((::TGeoTube*)p);
   }
   static void destruct_TGeoTube(void *p) {
      typedef ::TGeoTube current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTube

//______________________________________________________________________________
void TGeoTubeSeg::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTubeSeg.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTubeSeg::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTubeSeg::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTubeSeg(void *p) {
      return  p ? new(p) ::TGeoTubeSeg : new ::TGeoTubeSeg;
   }
   static void *newArray_TGeoTubeSeg(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTubeSeg[nElements] : new ::TGeoTubeSeg[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTubeSeg(void *p) {
      delete ((::TGeoTubeSeg*)p);
   }
   static void deleteArray_TGeoTubeSeg(void *p) {
      delete [] ((::TGeoTubeSeg*)p);
   }
   static void destruct_TGeoTubeSeg(void *p) {
      typedef ::TGeoTubeSeg current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTubeSeg

//______________________________________________________________________________
void TGeoCtub::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCtub.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCtub::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCtub::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCtub(void *p) {
      return  p ? new(p) ::TGeoCtub : new ::TGeoCtub;
   }
   static void *newArray_TGeoCtub(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCtub[nElements] : new ::TGeoCtub[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCtub(void *p) {
      delete ((::TGeoCtub*)p);
   }
   static void deleteArray_TGeoCtub(void *p) {
      delete [] ((::TGeoCtub*)p);
   }
   static void destruct_TGeoCtub(void *p) {
      typedef ::TGeoCtub current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCtub

//______________________________________________________________________________
void TGeoTorus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTorus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTorus::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTorus::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTorus(void *p) {
      return  p ? new(p) ::TGeoTorus : new ::TGeoTorus;
   }
   static void *newArray_TGeoTorus(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTorus[nElements] : new ::TGeoTorus[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTorus(void *p) {
      delete ((::TGeoTorus*)p);
   }
   static void deleteArray_TGeoTorus(void *p) {
      delete [] ((::TGeoTorus*)p);
   }
   static void destruct_TGeoTorus(void *p) {
      typedef ::TGeoTorus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTorus

//______________________________________________________________________________
void TGeoSphere::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoSphere.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoSphere::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoSphere::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoSphere(void *p) {
      return  p ? new(p) ::TGeoSphere : new ::TGeoSphere;
   }
   static void *newArray_TGeoSphere(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoSphere[nElements] : new ::TGeoSphere[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoSphere(void *p) {
      delete ((::TGeoSphere*)p);
   }
   static void deleteArray_TGeoSphere(void *p) {
      delete [] ((::TGeoSphere*)p);
   }
   static void destruct_TGeoSphere(void *p) {
      typedef ::TGeoSphere current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoSphere

//______________________________________________________________________________
void TGeoEltu::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoEltu.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoEltu::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoEltu::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoEltu(void *p) {
      return  p ? new(p) ::TGeoEltu : new ::TGeoEltu;
   }
   static void *newArray_TGeoEltu(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoEltu[nElements] : new ::TGeoEltu[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoEltu(void *p) {
      delete ((::TGeoEltu*)p);
   }
   static void deleteArray_TGeoEltu(void *p) {
      delete [] ((::TGeoEltu*)p);
   }
   static void destruct_TGeoEltu(void *p) {
      typedef ::TGeoEltu current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoEltu

//______________________________________________________________________________
void TGeoHype::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoHype.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoHype::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoHype::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoHype(void *p) {
      return  p ? new(p) ::TGeoHype : new ::TGeoHype;
   }
   static void *newArray_TGeoHype(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoHype[nElements] : new ::TGeoHype[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoHype(void *p) {
      delete ((::TGeoHype*)p);
   }
   static void deleteArray_TGeoHype(void *p) {
      delete [] ((::TGeoHype*)p);
   }
   static void destruct_TGeoHype(void *p) {
      typedef ::TGeoHype current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoHype

//______________________________________________________________________________
void TGeoCone::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCone.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCone::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCone::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCone(void *p) {
      return  p ? new(p) ::TGeoCone : new ::TGeoCone;
   }
   static void *newArray_TGeoCone(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCone[nElements] : new ::TGeoCone[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCone(void *p) {
      delete ((::TGeoCone*)p);
   }
   static void deleteArray_TGeoCone(void *p) {
      delete [] ((::TGeoCone*)p);
   }
   static void destruct_TGeoCone(void *p) {
      typedef ::TGeoCone current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCone

//______________________________________________________________________________
void TGeoConeSeg::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoConeSeg.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoConeSeg::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoConeSeg::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoConeSeg(void *p) {
      return  p ? new(p) ::TGeoConeSeg : new ::TGeoConeSeg;
   }
   static void *newArray_TGeoConeSeg(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoConeSeg[nElements] : new ::TGeoConeSeg[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoConeSeg(void *p) {
      delete ((::TGeoConeSeg*)p);
   }
   static void deleteArray_TGeoConeSeg(void *p) {
      delete [] ((::TGeoConeSeg*)p);
   }
   static void destruct_TGeoConeSeg(void *p) {
      typedef ::TGeoConeSeg current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoConeSeg

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPcon(void *p) {
      return  p ? new(p) ::TGeoPcon : new ::TGeoPcon;
   }
   static void *newArray_TGeoPcon(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPcon[nElements] : new ::TGeoPcon[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPcon(void *p) {
      delete ((::TGeoPcon*)p);
   }
   static void deleteArray_TGeoPcon(void *p) {
      delete [] ((::TGeoPcon*)p);
   }
   static void destruct_TGeoPcon(void *p) {
      typedef ::TGeoPcon current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoPcon(TBuffer &buf, void *obj) {
      ((::TGeoPcon*)obj)->::TGeoPcon::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoPcon

//______________________________________________________________________________
void TGeoPgon::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPgon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPgon::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPgon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPgon(void *p) {
      return  p ? new(p) ::TGeoPgon : new ::TGeoPgon;
   }
   static void *newArray_TGeoPgon(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPgon[nElements] : new ::TGeoPgon[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPgon(void *p) {
      delete ((::TGeoPgon*)p);
   }
   static void deleteArray_TGeoPgon(void *p) {
      delete [] ((::TGeoPgon*)p);
   }
   static void destruct_TGeoPgon(void *p) {
      typedef ::TGeoPgon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPgon

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoArb8(void *p) {
      return  p ? new(p) ::TGeoArb8 : new ::TGeoArb8;
   }
   static void *newArray_TGeoArb8(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoArb8[nElements] : new ::TGeoArb8[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoArb8(void *p) {
      delete ((::TGeoArb8*)p);
   }
   static void deleteArray_TGeoArb8(void *p) {
      delete [] ((::TGeoArb8*)p);
   }
   static void destruct_TGeoArb8(void *p) {
      typedef ::TGeoArb8 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoArb8(TBuffer &buf, void *obj) {
      ((::TGeoArb8*)obj)->::TGeoArb8::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoArb8

//______________________________________________________________________________
void TGeoTrap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTrap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTrap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrap(void *p) {
      return  p ? new(p) ::TGeoTrap : new ::TGeoTrap;
   }
   static void *newArray_TGeoTrap(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrap[nElements] : new ::TGeoTrap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrap(void *p) {
      delete ((::TGeoTrap*)p);
   }
   static void deleteArray_TGeoTrap(void *p) {
      delete [] ((::TGeoTrap*)p);
   }
   static void destruct_TGeoTrap(void *p) {
      typedef ::TGeoTrap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTrap

//______________________________________________________________________________
void TGeoGtra::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoGtra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoGtra::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoGtra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoGtra(void *p) {
      return  p ? new(p) ::TGeoGtra : new ::TGeoGtra;
   }
   static void *newArray_TGeoGtra(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoGtra[nElements] : new ::TGeoGtra[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoGtra(void *p) {
      delete ((::TGeoGtra*)p);
   }
   static void deleteArray_TGeoGtra(void *p) {
      delete [] ((::TGeoGtra*)p);
   }
   static void destruct_TGeoGtra(void *p) {
      typedef ::TGeoGtra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoGtra

//______________________________________________________________________________
void TGeoTrd1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrd1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTrd1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTrd1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrd1(void *p) {
      return  p ? new(p) ::TGeoTrd1 : new ::TGeoTrd1;
   }
   static void *newArray_TGeoTrd1(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrd1[nElements] : new ::TGeoTrd1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrd1(void *p) {
      delete ((::TGeoTrd1*)p);
   }
   static void deleteArray_TGeoTrd1(void *p) {
      delete [] ((::TGeoTrd1*)p);
   }
   static void destruct_TGeoTrd1(void *p) {
      typedef ::TGeoTrd1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTrd1

//______________________________________________________________________________
void TGeoTrd2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrd2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTrd2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTrd2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrd2(void *p) {
      return  p ? new(p) ::TGeoTrd2 : new ::TGeoTrd2;
   }
   static void *newArray_TGeoTrd2(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrd2[nElements] : new ::TGeoTrd2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrd2(void *p) {
      delete ((::TGeoTrd2*)p);
   }
   static void deleteArray_TGeoTrd2(void *p) {
      delete [] ((::TGeoTrd2*)p);
   }
   static void destruct_TGeoTrd2(void *p) {
      typedef ::TGeoTrd2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTrd2

//______________________________________________________________________________
void TGeoCacheState::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCacheState.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCacheState::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCacheState::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCacheState(void *p) {
      return  p ? new(p) ::TGeoCacheState : new ::TGeoCacheState;
   }
   static void *newArray_TGeoCacheState(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCacheState[nElements] : new ::TGeoCacheState[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCacheState(void *p) {
      delete ((::TGeoCacheState*)p);
   }
   static void deleteArray_TGeoCacheState(void *p) {
      delete [] ((::TGeoCacheState*)p);
   }
   static void destruct_TGeoCacheState(void *p) {
      typedef ::TGeoCacheState current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCacheState

//______________________________________________________________________________
void TGeoNodeCache::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNodeCache.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNodeCache::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNodeCache::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNodeCache(void *p) {
      return  p ? new(p) ::TGeoNodeCache : new ::TGeoNodeCache;
   }
   static void *newArray_TGeoNodeCache(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNodeCache[nElements] : new ::TGeoNodeCache[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNodeCache(void *p) {
      delete ((::TGeoNodeCache*)p);
   }
   static void deleteArray_TGeoNodeCache(void *p) {
      delete [] ((::TGeoNodeCache*)p);
   }
   static void destruct_TGeoNodeCache(void *p) {
      typedef ::TGeoNodeCache current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNodeCache

//______________________________________________________________________________
void TGeoNavigator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNavigator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNavigator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNavigator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNavigator(void *p) {
      return  p ? new(p) ::TGeoNavigator : new ::TGeoNavigator;
   }
   static void *newArray_TGeoNavigator(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNavigator[nElements] : new ::TGeoNavigator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNavigator(void *p) {
      delete ((::TGeoNavigator*)p);
   }
   static void deleteArray_TGeoNavigator(void *p) {
      delete [] ((::TGeoNavigator*)p);
   }
   static void destruct_TGeoNavigator(void *p) {
      typedef ::TGeoNavigator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNavigator

//______________________________________________________________________________
void TGeoNavigatorArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNavigatorArray.

   TObjArray::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNavigatorArray(void *p) {
      return  p ? new(p) ::TGeoNavigatorArray : new ::TGeoNavigatorArray;
   }
   static void *newArray_TGeoNavigatorArray(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNavigatorArray[nElements] : new ::TGeoNavigatorArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNavigatorArray(void *p) {
      delete ((::TGeoNavigatorArray*)p);
   }
   static void deleteArray_TGeoNavigatorArray(void *p) {
      delete [] ((::TGeoNavigatorArray*)p);
   }
   static void destruct_TGeoNavigatorArray(void *p) {
      typedef ::TGeoNavigatorArray current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoNavigatorArray(TBuffer &buf, void *obj) {
      ((::TGeoNavigatorArray*)obj)->::TGeoNavigatorArray::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGeoNavigatorArray(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGeoNavigatorArray*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGeoNavigatorArray

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoManager(void *p) {
      return  p ? new(p) ::TGeoManager : new ::TGeoManager;
   }
   static void *newArray_TGeoManager(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoManager[nElements] : new ::TGeoManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoManager(void *p) {
      delete ((::TGeoManager*)p);
   }
   static void deleteArray_TGeoManager(void *p) {
      delete [] ((::TGeoManager*)p);
   }
   static void destruct_TGeoManager(void *p) {
      typedef ::TGeoManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoManager(TBuffer &buf, void *obj) {
      ((::TGeoManager*)obj)->::TGeoManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoManager

//______________________________________________________________________________
void TGeoCompositeShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCompositeShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCompositeShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCompositeShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCompositeShape(void *p) {
      return  p ? new(p) ::TGeoCompositeShape : new ::TGeoCompositeShape;
   }
   static void *newArray_TGeoCompositeShape(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCompositeShape[nElements] : new ::TGeoCompositeShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCompositeShape(void *p) {
      delete ((::TGeoCompositeShape*)p);
   }
   static void deleteArray_TGeoCompositeShape(void *p) {
      delete [] ((::TGeoCompositeShape*)p);
   }
   static void destruct_TGeoCompositeShape(void *p) {
      typedef ::TGeoCompositeShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCompositeShape

//______________________________________________________________________________
void TGeoShapeAssembly::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoShapeAssembly.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoShapeAssembly::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoShapeAssembly::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoShapeAssembly(void *p) {
      return  p ? new(p) ::TGeoShapeAssembly : new ::TGeoShapeAssembly;
   }
   static void *newArray_TGeoShapeAssembly(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoShapeAssembly[nElements] : new ::TGeoShapeAssembly[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoShapeAssembly(void *p) {
      delete ((::TGeoShapeAssembly*)p);
   }
   static void deleteArray_TGeoShapeAssembly(void *p) {
      delete [] ((::TGeoShapeAssembly*)p);
   }
   static void destruct_TGeoShapeAssembly(void *p) {
      typedef ::TGeoShapeAssembly current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoShapeAssembly

//______________________________________________________________________________
void TGeoScaledShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoScaledShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoScaledShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoScaledShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoScaledShape(void *p) {
      return  p ? new(p) ::TGeoScaledShape : new ::TGeoScaledShape;
   }
   static void *newArray_TGeoScaledShape(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoScaledShape[nElements] : new ::TGeoScaledShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoScaledShape(void *p) {
      delete ((::TGeoScaledShape*)p);
   }
   static void deleteArray_TGeoScaledShape(void *p) {
      delete [] ((::TGeoScaledShape*)p);
   }
   static void destruct_TGeoScaledShape(void *p) {
      typedef ::TGeoScaledShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoScaledShape

//______________________________________________________________________________
void TVirtualGeoPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualGeoPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualGeoPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualGeoPainter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualGeoPainter(void *p) {
      delete ((::TVirtualGeoPainter*)p);
   }
   static void deleteArray_TVirtualGeoPainter(void *p) {
      delete [] ((::TVirtualGeoPainter*)p);
   }
   static void destruct_TVirtualGeoPainter(void *p) {
      typedef ::TVirtualGeoPainter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualGeoPainter

//______________________________________________________________________________
void TVirtualGeoTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualGeoTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualGeoTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualGeoTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualGeoTrack(void *p) {
      delete ((::TVirtualGeoTrack*)p);
   }
   static void deleteArray_TVirtualGeoTrack(void *p) {
      delete [] ((::TVirtualGeoTrack*)p);
   }
   static void destruct_TVirtualGeoTrack(void *p) {
      typedef ::TVirtualGeoTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualGeoTrack

//______________________________________________________________________________
void TVirtualGeoConverter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualGeoConverter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualGeoConverter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualGeoConverter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualGeoConverter(void *p) {
      delete ((::TVirtualGeoConverter*)p);
   }
   static void deleteArray_TVirtualGeoConverter(void *p) {
      delete [] ((::TVirtualGeoConverter*)p);
   }
   static void destruct_TVirtualGeoConverter(void *p) {
      typedef ::TVirtualGeoConverter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualGeoConverter

//______________________________________________________________________________
void TGeoPolygon::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPolygon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPolygon::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPolygon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPolygon(void *p) {
      return  p ? new(p) ::TGeoPolygon : new ::TGeoPolygon;
   }
   static void *newArray_TGeoPolygon(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPolygon[nElements] : new ::TGeoPolygon[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPolygon(void *p) {
      delete ((::TGeoPolygon*)p);
   }
   static void deleteArray_TGeoPolygon(void *p) {
      delete [] ((::TGeoPolygon*)p);
   }
   static void destruct_TGeoPolygon(void *p) {
      typedef ::TGeoPolygon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPolygon

//______________________________________________________________________________
void TGeoXtru::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoXtru.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoXtru::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoXtru::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoXtru(void *p) {
      return  p ? new(p) ::TGeoXtru : new ::TGeoXtru;
   }
   static void *newArray_TGeoXtru(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoXtru[nElements] : new ::TGeoXtru[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoXtru(void *p) {
      delete ((::TGeoXtru*)p);
   }
   static void deleteArray_TGeoXtru(void *p) {
      delete [] ((::TGeoXtru*)p);
   }
   static void destruct_TGeoXtru(void *p) {
      typedef ::TGeoXtru current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoXtru

//______________________________________________________________________________
void TGeoPhysicalNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPhysicalNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPhysicalNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPhysicalNode::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPhysicalNode(void *p) {
      return  p ? new(p) ::TGeoPhysicalNode : new ::TGeoPhysicalNode;
   }
   static void *newArray_TGeoPhysicalNode(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPhysicalNode[nElements] : new ::TGeoPhysicalNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPhysicalNode(void *p) {
      delete ((::TGeoPhysicalNode*)p);
   }
   static void deleteArray_TGeoPhysicalNode(void *p) {
      delete [] ((::TGeoPhysicalNode*)p);
   }
   static void destruct_TGeoPhysicalNode(void *p) {
      typedef ::TGeoPhysicalNode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPhysicalNode

//______________________________________________________________________________
void TGeoPNEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPNEntry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPNEntry::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPNEntry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPNEntry(void *p) {
      return  p ? new(p) ::TGeoPNEntry : new ::TGeoPNEntry;
   }
   static void *newArray_TGeoPNEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPNEntry[nElements] : new ::TGeoPNEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPNEntry(void *p) {
      delete ((::TGeoPNEntry*)p);
   }
   static void deleteArray_TGeoPNEntry(void *p) {
      delete [] ((::TGeoPNEntry*)p);
   }
   static void destruct_TGeoPNEntry(void *p) {
      typedef ::TGeoPNEntry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPNEntry

//______________________________________________________________________________
void TGeoHelix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoHelix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoHelix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoHelix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoHelix(void *p) {
      return  p ? new(p) ::TGeoHelix : new ::TGeoHelix;
   }
   static void *newArray_TGeoHelix(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoHelix[nElements] : new ::TGeoHelix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoHelix(void *p) {
      delete ((::TGeoHelix*)p);
   }
   static void deleteArray_TGeoHelix(void *p) {
      delete [] ((::TGeoHelix*)p);
   }
   static void destruct_TGeoHelix(void *p) {
      typedef ::TGeoHelix current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoHelix

//______________________________________________________________________________
void TGeoParaboloid::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoParaboloid.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoParaboloid::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoParaboloid::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoParaboloid(void *p) {
      return  p ? new(p) ::TGeoParaboloid : new ::TGeoParaboloid;
   }
   static void *newArray_TGeoParaboloid(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoParaboloid[nElements] : new ::TGeoParaboloid[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoParaboloid(void *p) {
      delete ((::TGeoParaboloid*)p);
   }
   static void deleteArray_TGeoParaboloid(void *p) {
      delete [] ((::TGeoParaboloid*)p);
   }
   static void destruct_TGeoParaboloid(void *p) {
      typedef ::TGeoParaboloid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoParaboloid

//______________________________________________________________________________
void TGeoHalfSpace::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoHalfSpace.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoHalfSpace::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoHalfSpace::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoHalfSpace(void *p) {
      return  p ? new(p) ::TGeoHalfSpace : new ::TGeoHalfSpace;
   }
   static void *newArray_TGeoHalfSpace(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoHalfSpace[nElements] : new ::TGeoHalfSpace[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoHalfSpace(void *p) {
      delete ((::TGeoHalfSpace*)p);
   }
   static void deleteArray_TGeoHalfSpace(void *p) {
      delete [] ((::TGeoHalfSpace*)p);
   }
   static void destruct_TGeoHalfSpace(void *p) {
      typedef ::TGeoHalfSpace current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoHalfSpace

//______________________________________________________________________________
void TGeoBuilder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBuilder.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoBuilder(void *p) {
      delete ((::TGeoBuilder*)p);
   }
   static void deleteArray_TGeoBuilder(void *p) {
      delete [] ((::TGeoBuilder*)p);
   }
   static void destruct_TGeoBuilder(void *p) {
      typedef ::TGeoBuilder current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoBuilder(TBuffer &buf, void *obj) {
      ((::TGeoBuilder*)obj)->::TGeoBuilder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoBuilder

//______________________________________________________________________________
void TVirtualMagField::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualMagField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualMagField::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualMagField::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualMagField(void *p) {
      delete ((::TVirtualMagField*)p);
   }
   static void deleteArray_TVirtualMagField(void *p) {
      delete [] ((::TVirtualMagField*)p);
   }
   static void destruct_TVirtualMagField(void *p) {
      typedef ::TVirtualMagField current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualMagField

//______________________________________________________________________________
void TGeoUniformMagField::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoUniformMagField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoUniformMagField::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoUniformMagField::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoUniformMagField(void *p) {
      return  p ? new(p) ::TGeoUniformMagField : new ::TGeoUniformMagField;
   }
   static void *newArray_TGeoUniformMagField(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoUniformMagField[nElements] : new ::TGeoUniformMagField[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoUniformMagField(void *p) {
      delete ((::TGeoUniformMagField*)p);
   }
   static void deleteArray_TGeoUniformMagField(void *p) {
      delete [] ((::TGeoUniformMagField*)p);
   }
   static void destruct_TGeoUniformMagField(void *p) {
      typedef ::TGeoUniformMagField current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoUniformMagField

//______________________________________________________________________________
void TGeoGlobalMagField::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoGlobalMagField.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoGlobalMagField(void *p) {
      return  p ? new(p) ::TGeoGlobalMagField : new ::TGeoGlobalMagField;
   }
   static void *newArray_TGeoGlobalMagField(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoGlobalMagField[nElements] : new ::TGeoGlobalMagField[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoGlobalMagField(void *p) {
      delete ((::TGeoGlobalMagField*)p);
   }
   static void deleteArray_TGeoGlobalMagField(void *p) {
      delete [] ((::TGeoGlobalMagField*)p);
   }
   static void destruct_TGeoGlobalMagField(void *p) {
      typedef ::TGeoGlobalMagField current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoGlobalMagField(TBuffer &buf, void *obj) {
      ((::TGeoGlobalMagField*)obj)->::TGeoGlobalMagField::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoGlobalMagField

//______________________________________________________________________________
void TGeoBranchArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBranchArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoBranchArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoBranchArray::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoBranchArray(void *p) {
      return  p ? new(p) ::TGeoBranchArray( (TRootIOCtor *)nullptr ) : new ::TGeoBranchArray( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_TGeoBranchArray(void *p) {
      delete ((::TGeoBranchArray*)p);
   }
   static void deleteArray_TGeoBranchArray(void *p) {
      delete [] ((::TGeoBranchArray*)p);
   }
   static void destruct_TGeoBranchArray(void *p) {
      typedef ::TGeoBranchArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoBranchArray

//______________________________________________________________________________
void TGeoExtension::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoExtension.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoExtension::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoExtension::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::TGeoExtension

//______________________________________________________________________________
void TGeoRCExtension::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoRCExtension.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoRCExtension::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoRCExtension::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoRCExtension(void *p) {
      return  p ? new(p) ::TGeoRCExtension : new ::TGeoRCExtension;
   }
} // end of namespace ROOT for class ::TGeoRCExtension

//______________________________________________________________________________
void TGeoParallelWorld::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoParallelWorld.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoParallelWorld::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoParallelWorld::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoParallelWorld(void *p) {
      return  p ? new(p) ::TGeoParallelWorld : new ::TGeoParallelWorld;
   }
   static void *newArray_TGeoParallelWorld(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoParallelWorld[nElements] : new ::TGeoParallelWorld[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoParallelWorld(void *p) {
      delete ((::TGeoParallelWorld*)p);
   }
   static void deleteArray_TGeoParallelWorld(void *p) {
      delete [] ((::TGeoParallelWorld*)p);
   }
   static void destruct_TGeoParallelWorld(void *p) {
      typedef ::TGeoParallelWorld current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGeoParallelWorld

namespace ROOT {
   static TClass *maplEthreadcLcLidcOintgR_Dictionary();
   static void maplEthreadcLcLidcOintgR_TClassManip(TClass*);
   static void *new_maplEthreadcLcLidcOintgR(void *p = 0);
   static void *newArray_maplEthreadcLcLidcOintgR(Long_t size, void *p);
   static void delete_maplEthreadcLcLidcOintgR(void *p);
   static void deleteArray_maplEthreadcLcLidcOintgR(void *p);
   static void destruct_maplEthreadcLcLidcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<thread::id,int>*)
   {
      map<thread::id,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<thread::id,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<thread::id,int>", -2, "map", 99,
                  typeid(map<thread::id,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEthreadcLcLidcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(map<thread::id,int>) );
      instance.SetNew(&new_maplEthreadcLcLidcOintgR);
      instance.SetNewArray(&newArray_maplEthreadcLcLidcOintgR);
      instance.SetDelete(&delete_maplEthreadcLcLidcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEthreadcLcLidcOintgR);
      instance.SetDestructor(&destruct_maplEthreadcLcLidcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<thread::id,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<thread::id,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEthreadcLcLidcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<thread::id,int>*)0x0)->GetClass();
      maplEthreadcLcLidcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEthreadcLcLidcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEthreadcLcLidcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<thread::id,int> : new map<thread::id,int>;
   }
   static void *newArray_maplEthreadcLcLidcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<thread::id,int>[nElements] : new map<thread::id,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEthreadcLcLidcOintgR(void *p) {
      delete ((map<thread::id,int>*)p);
   }
   static void deleteArray_maplEthreadcLcLidcOintgR(void *p) {
      delete [] ((map<thread::id,int>*)p);
   }
   static void destruct_maplEthreadcLcLidcOintgR(void *p) {
      typedef map<thread::id,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<thread::id,int>

namespace ROOT {
   static TClass *maplEthreadcLcLidcOTGeoNavigatorArraymUgR_Dictionary();
   static void maplEthreadcLcLidcOTGeoNavigatorArraymUgR_TClassManip(TClass*);
   static void *new_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p = 0);
   static void *newArray_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(Long_t size, void *p);
   static void delete_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p);
   static void deleteArray_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p);
   static void destruct_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<thread::id,TGeoNavigatorArray*>*)
   {
      map<thread::id,TGeoNavigatorArray*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<thread::id,TGeoNavigatorArray*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<thread::id,TGeoNavigatorArray*>", -2, "map", 99,
                  typeid(map<thread::id,TGeoNavigatorArray*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEthreadcLcLidcOTGeoNavigatorArraymUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<thread::id,TGeoNavigatorArray*>) );
      instance.SetNew(&new_maplEthreadcLcLidcOTGeoNavigatorArraymUgR);
      instance.SetNewArray(&newArray_maplEthreadcLcLidcOTGeoNavigatorArraymUgR);
      instance.SetDelete(&delete_maplEthreadcLcLidcOTGeoNavigatorArraymUgR);
      instance.SetDeleteArray(&deleteArray_maplEthreadcLcLidcOTGeoNavigatorArraymUgR);
      instance.SetDestructor(&destruct_maplEthreadcLcLidcOTGeoNavigatorArraymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<thread::id,TGeoNavigatorArray*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<thread::id,TGeoNavigatorArray*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEthreadcLcLidcOTGeoNavigatorArraymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<thread::id,TGeoNavigatorArray*>*)0x0)->GetClass();
      maplEthreadcLcLidcOTGeoNavigatorArraymUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEthreadcLcLidcOTGeoNavigatorArraymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<thread::id,TGeoNavigatorArray*> : new map<thread::id,TGeoNavigatorArray*>;
   }
   static void *newArray_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<thread::id,TGeoNavigatorArray*>[nElements] : new map<thread::id,TGeoNavigatorArray*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p) {
      delete ((map<thread::id,TGeoNavigatorArray*>*)p);
   }
   static void deleteArray_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p) {
      delete [] ((map<thread::id,TGeoNavigatorArray*>*)p);
   }
   static void destruct_maplEthreadcLcLidcOTGeoNavigatorArraymUgR(void *p) {
      typedef map<thread::id,TGeoNavigatorArray*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<thread::id,TGeoNavigatorArray*>

namespace {
  void TriggerDictionaryInitialization_libGeom_Impl() {
    static const char* headers[] = {
"TGeoAtt.h",
"TGeoStateInfo.h",
"TGeoBoolNode.h",
"TGeoMedium.h",
"TGeoMaterial.h",
"TGeoMatrix.h",
"TGeoVolume.h",
"TGeoNode.h",
"TGeoVoxelFinder.h",
"TGeoShape.h",
"TGeoBBox.h",
"TGeoPara.h",
"TGeoTube.h",
"TGeoTorus.h",
"TGeoSphere.h",
"TGeoEltu.h",
"TGeoHype.h",
"TGeoCone.h",
"TGeoPcon.h",
"TGeoPgon.h",
"TGeoArb8.h",
"TGeoTrd1.h",
"TGeoTrd2.h",
"TGeoManager.h",
"TGeoCompositeShape.h",
"TGeoShapeAssembly.h",
"TGeoScaledShape.h",
"TVirtualGeoPainter.h",
"TVirtualGeoTrack.h",
"TVirtualGeoConverter.h",
"TGeoPolygon.h",
"TGeoXtru.h",
"TGeoPhysicalNode.h",
"TGeoHelix.h",
"TGeoParaboloid.h",
"TGeoElement.h",
"TGeoHalfSpace.h",
"TGeoBuilder.h",
"TGeoNavigator.h",
"TGeoPatternFinder.h",
"TGeoCache.h",
"TVirtualMagField.h",
"TGeoUniformMagField.h",
"TGeoGlobalMagField.h",
"TGeoBranchArray.h",
"TGeoExtension.h",
"TGeoParallelWorld.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGeom dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(class for visibility, activity and optimization attributes for volumes/nodes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoAtt.h")))  TGeoAtt;
class __attribute__((annotate(R"ATTRDUMP(base geometrical transformation class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrix.h")))  __attribute__((annotate("$clingAutoload$TGeoStateInfo.h")))  TGeoMatrix;
class __attribute__((annotate(R"ATTRDUMP(translation class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrix.h")))  __attribute__((annotate("$clingAutoload$TGeoStateInfo.h")))  TGeoTranslation;
class __attribute__((annotate(R"ATTRDUMP(rotation class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrix.h")))  __attribute__((annotate("$clingAutoload$TGeoStateInfo.h")))  TGeoRotation;
class __attribute__((annotate(R"ATTRDUMP(scaling class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrix.h")))  __attribute__((annotate("$clingAutoload$TGeoStateInfo.h")))  TGeoScale;
class __attribute__((annotate(R"ATTRDUMP(rotation + translation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrix.h")))  __attribute__((annotate("$clingAutoload$TGeoStateInfo.h")))  TGeoCombiTrans;
class __attribute__((annotate(R"ATTRDUMP(rotation + translation + scale)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrix.h")))  __attribute__((annotate("$clingAutoload$TGeoStateInfo.h")))  TGeoGenTrans;
class __attribute__((annotate(R"ATTRDUMP(identity transformation class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrix.h")))  __attribute__((annotate("$clingAutoload$TGeoStateInfo.h")))  TGeoIdentity;
class __attribute__((annotate(R"ATTRDUMP(global matrix class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrix.h")))  __attribute__((annotate("$clingAutoload$TGeoStateInfo.h")))  TGeoHMatrix;
struct __attribute__((annotate(R"ATTRDUMP(No I/O for this structure)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoStateInfo.h")))  TGeoStateInfo;
class __attribute__((annotate(R"ATTRDUMP(a boolean node)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoBoolNode.h")))  TGeoBoolNode;
class __attribute__((annotate(R"ATTRDUMP(union node)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoBoolNode.h")))  TGeoUnion;
class __attribute__((annotate(R"ATTRDUMP(intersection node)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoBoolNode.h")))  TGeoIntersection;
class __attribute__((annotate(R"ATTRDUMP(subtraction node)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoBoolNode.h")))  TGeoSubtraction;
class __attribute__((annotate(R"ATTRDUMP(base element class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoElement.h")))  __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoElement;
class __attribute__((annotate(R"ATTRDUMP(Isotope class defined by Z,N,A)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoElement.h")))  __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoIsotope;
class __attribute__((annotate(R"ATTRDUMP(radionuclides class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoElement.h")))  __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoElementRN;
class __attribute__((annotate(R"ATTRDUMP(Decay channel for Elements)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoElement.h")))  __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoDecayChannel;
class __attribute__((annotate(R"ATTRDUMP(Solution for the Bateman equation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoElement.h")))  __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoBatemanSol;
class __attribute__((annotate(R"ATTRDUMP(Iterator for radionuclide chains.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoElement.h")))  __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoElemIter;
class __attribute__((annotate(R"ATTRDUMP(table of elements)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoElement.h")))  __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoElementTable;
class __attribute__((annotate(R"ATTRDUMP(base material class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMaterial.h")))  __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoMaterial;
class __attribute__((annotate(R"ATTRDUMP(material mixtures)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMaterial.h")))  __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoMixture;
class __attribute__((annotate(R"ATTRDUMP(tracking medium)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMedium.h")))  TGeoMedium;
class __attribute__((annotate(R"ATTRDUMP(base class for shapes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoShape.h")))  __attribute__((annotate("$clingAutoload$TGeoVolume.h")))  TGeoShape;
class __attribute__((annotate(R"ATTRDUMP(geometry volume descriptor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoVolume.h")))  TGeoVolume;
class __attribute__((annotate(R"ATTRDUMP(class to handle multiple volumes in one step)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoVolume.h")))  TGeoVolumeMulti;
class __attribute__((annotate(R"ATTRDUMP(an assembly of volumes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoVolume.h")))  TGeoVolumeAssembly;
class __attribute__((annotate(R"ATTRDUMP(patterns to divide volumes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternFinder;
class __attribute__((annotate(R"ATTRDUMP(X division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternX;
class __attribute__((annotate(R"ATTRDUMP(Y division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternY;
class __attribute__((annotate(R"ATTRDUMP(Z division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternZ;
class __attribute__((annotate(R"ATTRDUMP(Para X division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternParaX;
class __attribute__((annotate(R"ATTRDUMP(Para Y division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternParaY;
class __attribute__((annotate(R"ATTRDUMP(Para Z division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternParaZ;
class __attribute__((annotate(R"ATTRDUMP(Trap od Gtra Z division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternTrapZ;
class __attribute__((annotate(R"ATTRDUMP(Cylindrical R division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternCylR;
class __attribute__((annotate(R"ATTRDUMP(Cylindrical phi division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternCylPhi;
class __attribute__((annotate(R"ATTRDUMP(spherical R division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternSphR;
class __attribute__((annotate(R"ATTRDUMP(spherical theta division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternSphTheta;
class __attribute__((annotate(R"ATTRDUMP(Spherical phi division pattern)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternSphPhi;
class __attribute__((annotate(R"ATTRDUMP(pattern for honeycomb divisions)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPatternFinder.h")))  __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoPatternHoneycomb;
class __attribute__((annotate(R"ATTRDUMP(base class for all geometry nodes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoNode;
class __attribute__((annotate(R"ATTRDUMP(a geometry node in the general case)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoNodeMatrix;
class __attribute__((annotate(R"ATTRDUMP(a geometry node with just an offset)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoNodeOffset;
class __attribute__((annotate(R"ATTRDUMP(ABC for user plugins connecter to a geometry iterator.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoIteratorPlugin;
class __attribute__((annotate(R"ATTRDUMP(Iterator for geometry.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoNode.h")))  TGeoIterator;
class __attribute__((annotate(R"ATTRDUMP(voxel finder class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoVoxelFinder.h")))  TGeoVoxelFinder;
class __attribute__((annotate(R"ATTRDUMP(box primitive)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoBBox.h")))  TGeoBBox;
class __attribute__((annotate(R"ATTRDUMP(box primitive)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPara.h")))  TGeoPara;
class __attribute__((annotate(R"ATTRDUMP(cylindrical tube class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTube.h")))  TGeoTube;
class __attribute__((annotate(R"ATTRDUMP(cylindrical tube segment class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTube.h")))  TGeoTubeSeg;
class __attribute__((annotate(R"ATTRDUMP(cut tube segment class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTube.h")))  TGeoCtub;
class __attribute__((annotate(R"ATTRDUMP(torus class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTorus.h")))  TGeoTorus;
class __attribute__((annotate(R"ATTRDUMP(sphere class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoSphere.h")))  TGeoSphere;
class __attribute__((annotate(R"ATTRDUMP(elliptical tube class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoEltu.h")))  TGeoEltu;
class __attribute__((annotate(R"ATTRDUMP(hyperboloid class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoHype.h")))  TGeoHype;
class __attribute__((annotate(R"ATTRDUMP(conical tube class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoCone.h")))  TGeoCone;
class __attribute__((annotate(R"ATTRDUMP(conical tube segment class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoCone.h")))  TGeoConeSeg;
class __attribute__((annotate(R"ATTRDUMP(polycone class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPcon.h")))  TGeoPcon;
class __attribute__((annotate(R"ATTRDUMP(polygone class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPgon.h")))  TGeoPgon;
class __attribute__((annotate(R"ATTRDUMP(arbitrary trapezoid with 8 vertices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoArb8.h")))  TGeoArb8;
class __attribute__((annotate(R"ATTRDUMP(G3 TRAP shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoArb8.h")))  TGeoTrap;
class __attribute__((annotate(R"ATTRDUMP(G3 GTRA shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoArb8.h")))  TGeoGtra;
class __attribute__((annotate(R"ATTRDUMP(TRD1 shape class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTrd1.h")))  TGeoTrd1;
class __attribute__((annotate(R"ATTRDUMP(TRD2 shape class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTrd2.h")))  TGeoTrd2;
class __attribute__((annotate(R"ATTRDUMP(class storing the cache state)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoCache.h")))  __attribute__((annotate("$clingAutoload$TGeoManager.h")))  TGeoCacheState;
class __attribute__((annotate(R"ATTRDUMP(cache of reusable physical nodes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoCache.h")))  __attribute__((annotate("$clingAutoload$TGeoManager.h")))  TGeoNodeCache;
class __attribute__((annotate(R"ATTRDUMP(geometry navigator class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoNavigator.h")))  __attribute__((annotate("$clingAutoload$TGeoManager.h")))  TGeoNavigator;
class __attribute__((annotate(R"ATTRDUMP(geometry manager)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoManager.h")))  TGeoManager;
class __attribute__((annotate(R"ATTRDUMP(boolean composite shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoCompositeShape.h")))  TGeoCompositeShape;
class __attribute__((annotate(R"ATTRDUMP(assembly shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoShapeAssembly.h")))  TGeoShapeAssembly;
class __attribute__((annotate(R"ATTRDUMP(a scaled shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoScaledShape.h")))  TGeoScaledShape;
class __attribute__((annotate(R"ATTRDUMP(Abstract interface for geometry painters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualGeoPainter.h")))  TVirtualGeoPainter;
class __attribute__((annotate(R"ATTRDUMP(virtual geometry tracks)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualGeoTrack.h")))  TVirtualGeoTrack;
class __attribute__((annotate(R"ATTRDUMP(Abstract interface for geometry converters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualGeoConverter.h")))  TVirtualGeoConverter;
class __attribute__((annotate(R"ATTRDUMP(class for handling arbitrary polygons)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPolygon.h")))  TGeoPolygon;
class __attribute__((annotate(R"ATTRDUMP(extruded polygon class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoXtru.h")))  TGeoXtru;
class __attribute__((annotate(R"ATTRDUMP(base class for physical nodes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPhysicalNode.h")))  TGeoPhysicalNode;
class __attribute__((annotate(R"ATTRDUMP(a physical node entry with unique name)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPhysicalNode.h")))  TGeoPNEntry;
class __attribute__((annotate(R"ATTRDUMP(helix class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoHelix.h")))  TGeoHelix;
class __attribute__((annotate(R"ATTRDUMP(paraboloid class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoParaboloid.h")))  TGeoParaboloid;
class __attribute__((annotate(R"ATTRDUMP(half-space class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoHalfSpace.h")))  TGeoHalfSpace;
class __attribute__((annotate(R"ATTRDUMP(geometry builder singleton)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoBuilder.h")))  TGeoBuilder;
class __attribute__((annotate(R"ATTRDUMP(Abstract base field class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualMagField.h")))  TVirtualMagField;
class __attribute__((annotate(R"ATTRDUMP(Uniform magnetic field)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVirtualMagField.h")))  TGeoUniformMagField;
class __attribute__((annotate(R"ATTRDUMP(Global field manager)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoGlobalMagField.h")))  TGeoGlobalMagField;
class __attribute__((annotate("$clingAutoload$TGeoBranchArray.h")))  TGeoBranchArray;
class __attribute__((annotate(R"ATTRDUMP(User extension for volumes and nodes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoExtension.h")))  TGeoExtension;
class __attribute__((annotate(R"ATTRDUMP(Reference counted extension for volumes and nodes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoExtension.h")))  TGeoRCExtension;
class __attribute__((annotate(R"ATTRDUMP(parallel world base class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoParallelWorld.h")))  TGeoParallelWorld;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGeom dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGeoAtt.h"
#include "TGeoStateInfo.h"
#include "TGeoBoolNode.h"
#include "TGeoMedium.h"
#include "TGeoMaterial.h"
#include "TGeoMatrix.h"
#include "TGeoVolume.h"
#include "TGeoNode.h"
#include "TGeoVoxelFinder.h"
#include "TGeoShape.h"
#include "TGeoBBox.h"
#include "TGeoPara.h"
#include "TGeoTube.h"
#include "TGeoTorus.h"
#include "TGeoSphere.h"
#include "TGeoEltu.h"
#include "TGeoHype.h"
#include "TGeoCone.h"
#include "TGeoPcon.h"
#include "TGeoPgon.h"
#include "TGeoArb8.h"
#include "TGeoTrd1.h"
#include "TGeoTrd2.h"
#include "TGeoManager.h"
#include "TGeoCompositeShape.h"
#include "TGeoShapeAssembly.h"
#include "TGeoScaledShape.h"
#include "TVirtualGeoPainter.h"
#include "TVirtualGeoTrack.h"
#include "TVirtualGeoConverter.h"
#include "TGeoPolygon.h"
#include "TGeoXtru.h"
#include "TGeoPhysicalNode.h"
#include "TGeoHelix.h"
#include "TGeoParaboloid.h"
#include "TGeoElement.h"
#include "TGeoHalfSpace.h"
#include "TGeoBuilder.h"
#include "TGeoNavigator.h"
#include "TGeoPatternFinder.h"
#include "TGeoCache.h"
#include "TVirtualMagField.h"
#include "TGeoUniformMagField.h"
#include "TGeoGlobalMagField.h"
#include "TGeoBranchArray.h"
#include "TGeoExtension.h"
#include "TGeoParallelWorld.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TGeoArb8", payloadCode, "@",
"TGeoAtt", payloadCode, "@",
"TGeoBBox", payloadCode, "@",
"TGeoBatemanSol", payloadCode, "@",
"TGeoBoolNode", payloadCode, "@",
"TGeoBranchArray", payloadCode, "@",
"TGeoBuilder", payloadCode, "@",
"TGeoCacheState", payloadCode, "@",
"TGeoCombiTrans", payloadCode, "@",
"TGeoCompositeShape", payloadCode, "@",
"TGeoCone", payloadCode, "@",
"TGeoConeSeg", payloadCode, "@",
"TGeoCtub", payloadCode, "@",
"TGeoDecayChannel", payloadCode, "@",
"TGeoElemIter", payloadCode, "@",
"TGeoElement", payloadCode, "@",
"TGeoElementRN", payloadCode, "@",
"TGeoElementTable", payloadCode, "@",
"TGeoEltu", payloadCode, "@",
"TGeoExtension", payloadCode, "@",
"TGeoGenTrans", payloadCode, "@",
"TGeoGlobalMagField", payloadCode, "@",
"TGeoGtra", payloadCode, "@",
"TGeoHMatrix", payloadCode, "@",
"TGeoHalfSpace", payloadCode, "@",
"TGeoHelix", payloadCode, "@",
"TGeoHype", payloadCode, "@",
"TGeoIdentity", payloadCode, "@",
"TGeoIntersection", payloadCode, "@",
"TGeoIsotope", payloadCode, "@",
"TGeoIterator", payloadCode, "@",
"TGeoIteratorPlugin", payloadCode, "@",
"TGeoManager", payloadCode, "@",
"TGeoMaterial", payloadCode, "@",
"TGeoMatrix", payloadCode, "@",
"TGeoMedium", payloadCode, "@",
"TGeoMixture", payloadCode, "@",
"TGeoNavigator", payloadCode, "@",
"TGeoNavigatorArray", payloadCode, "@",
"TGeoNode", payloadCode, "@",
"TGeoNodeCache", payloadCode, "@",
"TGeoNodeMatrix", payloadCode, "@",
"TGeoNodeOffset", payloadCode, "@",
"TGeoPNEntry", payloadCode, "@",
"TGeoPara", payloadCode, "@",
"TGeoParaboloid", payloadCode, "@",
"TGeoParallelWorld", payloadCode, "@",
"TGeoPatternCylPhi", payloadCode, "@",
"TGeoPatternCylR", payloadCode, "@",
"TGeoPatternFinder", payloadCode, "@",
"TGeoPatternHoneycomb", payloadCode, "@",
"TGeoPatternParaX", payloadCode, "@",
"TGeoPatternParaY", payloadCode, "@",
"TGeoPatternParaZ", payloadCode, "@",
"TGeoPatternSphPhi", payloadCode, "@",
"TGeoPatternSphR", payloadCode, "@",
"TGeoPatternSphTheta", payloadCode, "@",
"TGeoPatternTrapZ", payloadCode, "@",
"TGeoPatternX", payloadCode, "@",
"TGeoPatternY", payloadCode, "@",
"TGeoPatternZ", payloadCode, "@",
"TGeoPcon", payloadCode, "@",
"TGeoPgon", payloadCode, "@",
"TGeoPhysicalNode", payloadCode, "@",
"TGeoPolygon", payloadCode, "@",
"TGeoRCExtension", payloadCode, "@",
"TGeoRotation", payloadCode, "@",
"TGeoScale", payloadCode, "@",
"TGeoScaledShape", payloadCode, "@",
"TGeoShape", payloadCode, "@",
"TGeoShapeAssembly", payloadCode, "@",
"TGeoSphere", payloadCode, "@",
"TGeoStateInfo", payloadCode, "@",
"TGeoSubtraction", payloadCode, "@",
"TGeoTorus", payloadCode, "@",
"TGeoTranslation", payloadCode, "@",
"TGeoTrap", payloadCode, "@",
"TGeoTrd1", payloadCode, "@",
"TGeoTrd2", payloadCode, "@",
"TGeoTube", payloadCode, "@",
"TGeoTubeSeg", payloadCode, "@",
"TGeoUniformMagField", payloadCode, "@",
"TGeoUnion", payloadCode, "@",
"TGeoVolume", payloadCode, "@",
"TGeoVolumeAssembly", payloadCode, "@",
"TGeoVolumeMulti", payloadCode, "@",
"TGeoVoxelFinder", payloadCode, "@",
"TGeoXtru", payloadCode, "@",
"TVirtualGeoConverter", payloadCode, "@",
"TVirtualGeoPainter", payloadCode, "@",
"TVirtualGeoTrack", payloadCode, "@",
"TVirtualMagField", payloadCode, "@",
"gGeoIdentity", payloadCode, "@",
"gGeoManager", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGeom",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGeom_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGeom_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGeom() {
  TriggerDictionaryInitialization_libGeom_Impl();
}
