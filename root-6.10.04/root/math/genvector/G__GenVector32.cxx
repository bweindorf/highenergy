// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GenVector32

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
#include "Math/Vector2D.h"
#include "Math/Point2D.h"
#include "Math/Vector3D.h"
#include "Math/Point3D.h"
#include "Math/Vector4D.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector2D.h", 56,
                  typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector2D.h", 56,
                  typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cartesian2D<Double32_t>*)
   {
      ::ROOT::Math::Cartesian2D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cartesian2D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cartesian2D<Double32_t>", "Math/GenVector/Cartesian2D.h", 37,
                  typeid(::ROOT::Math::Cartesian2D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cartesian2D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian2D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian2D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPolar2DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLPolar2DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Polar2D<Double32_t>*)
   {
      ::ROOT::Math::Polar2D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Polar2D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Polar2D<Double32_t>", "Math/GenVector/Polar2D.h", 43,
                  typeid(::ROOT::Math::Polar2D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPolar2DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Polar2D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Polar2D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPolar2DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Polar2D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPolar2DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPolar2DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cartesian3D<Double32_t>*)
   {
      ::ROOT::Math::Cartesian3D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cartesian3D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cartesian3D<Double32_t>", "Math/GenVector/Cartesian3D.h", 44,
                  typeid(::ROOT::Math::Cartesian3D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cartesian3D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian3D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian3D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::CylindricalEta3D<Double32_t>*)
   {
      ::ROOT::Math::CylindricalEta3D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::CylindricalEta3D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::CylindricalEta3D<Double32_t>", "Math/GenVector/CylindricalEta3D.h", 48,
                  typeid(::ROOT::Math::CylindricalEta3D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::CylindricalEta3D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::CylindricalEta3D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::CylindricalEta3D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPolar3DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLPolar3DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Polar3D<Double32_t>*)
   {
      ::ROOT::Math::Polar3D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Polar3D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Polar3D<Double32_t>", "Math/GenVector/Polar3D.h", 43,
                  typeid(::ROOT::Math::Polar3D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPolar3DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Polar3D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Polar3D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPolar3DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Polar3D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPolar3DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPolar3DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cylindrical3D<Double32_t>*)
   {
      ::ROOT::Math::Cylindrical3D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cylindrical3D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cylindrical3D<Double32_t>", "Math/GenVector/Cylindrical3D.h", 40,
                  typeid(::ROOT::Math::Cylindrical3D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cylindrical3D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cylindrical3D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cylindrical3D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PxPyPzE4D<Double32_t>*)
   {
      ::ROOT::Math::PxPyPzE4D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PxPyPzE4D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PxPyPzE4D<Double32_t>", "Math/GenVector/PxPyPzE4D.h", 42,
                  typeid(::ROOT::Math::PxPyPzE4D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PxPyPzE4D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzE4D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzE4D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PtEtaPhiE4D<Double32_t>*)
   {
      ::ROOT::Math::PtEtaPhiE4D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PtEtaPhiE4D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PtEtaPhiE4D<Double32_t>", "Math/GenVector/PtEtaPhiE4D.h", 52,
                  typeid(::ROOT::Math::PtEtaPhiE4D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PtEtaPhiE4D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiE4D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiE4D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PxPyPzM4D<Double32_t>*)
   {
      ::ROOT::Math::PxPyPzM4D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PxPyPzM4D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PxPyPzM4D<Double32_t>", "Math/GenVector/PxPyPzM4D.h", 47,
                  typeid(::ROOT::Math::PxPyPzM4D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PxPyPzM4D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzM4D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzM4D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR_Dictionary();
   static void ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PtEtaPhiM4D<Double32_t>*)
   {
      ::ROOT::Math::PtEtaPhiM4D<Double32_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PtEtaPhiM4D<Double32_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PtEtaPhiM4D<Double32_t>", "Math/GenVector/PtEtaPhiM4D.h", 52,
                  typeid(::ROOT::Math::PtEtaPhiM4D<Double32_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PtEtaPhiM4D<Double32_t>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiM4D<Double32_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiM4D<Double32_t>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian2D<Double32_t> : new ::ROOT::Math::Cartesian2D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian2D<Double32_t>[nElements] : new ::ROOT::Math::Cartesian2D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::Cartesian2D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::Cartesian2D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCartesian2DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::Cartesian2D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cartesian2D<Double32_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar2D<Double32_t> : new ::ROOT::Math::Polar2D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar2D<Double32_t>[nElements] : new ::ROOT::Math::Polar2D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::Polar2D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::Polar2D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPolar2DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::Polar2D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Polar2D<Double32_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian3D<Double32_t> : new ::ROOT::Math::Cartesian3D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian3D<Double32_t>[nElements] : new ::ROOT::Math::Cartesian3D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::Cartesian3D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::Cartesian3D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCartesian3DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::Cartesian3D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cartesian3D<Double32_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::CylindricalEta3D<Double32_t> : new ::ROOT::Math::CylindricalEta3D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::CylindricalEta3D<Double32_t>[nElements] : new ::ROOT::Math::CylindricalEta3D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::CylindricalEta3D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::CylindricalEta3D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::CylindricalEta3D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::CylindricalEta3D<Double32_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar3D<Double32_t> : new ::ROOT::Math::Polar3D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar3D<Double32_t>[nElements] : new ::ROOT::Math::Polar3D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::Polar3D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::Polar3D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPolar3DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::Polar3D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Polar3D<Double32_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cylindrical3D<Double32_t> : new ::ROOT::Math::Cylindrical3D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cylindrical3D<Double32_t>[nElements] : new ::ROOT::Math::Cylindrical3D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::Cylindrical3D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::Cylindrical3D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCylindrical3DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::Cylindrical3D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cylindrical3D<Double32_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEDouble32_tgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<Double32_t>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLGlobalCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEDouble32_tgRcOROOTcLcLMathcLcLLocalCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::LocalCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<Double32_t> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzE4D<Double32_t> : new ::ROOT::Math::PxPyPzE4D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzE4D<Double32_t>[nElements] : new ::ROOT::Math::PxPyPzE4D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::PxPyPzE4D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::PxPyPzE4D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPxPyPzE4DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::PxPyPzE4D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PxPyPzE4D<Double32_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiE4D<Double32_t> : new ::ROOT::Math::PtEtaPhiE4D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiE4D<Double32_t>[nElements] : new ::ROOT::Math::PtEtaPhiE4D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::PtEtaPhiE4D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::PtEtaPhiE4D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiE4DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::PtEtaPhiE4D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PtEtaPhiE4D<Double32_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzM4D<Double32_t> : new ::ROOT::Math::PxPyPzM4D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzM4D<Double32_t>[nElements] : new ::ROOT::Math::PxPyPzM4D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::PxPyPzM4D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::PxPyPzM4D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPxPyPzM4DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::PxPyPzM4D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PxPyPzM4D<Double32_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiM4D<Double32_t> : new ::ROOT::Math::PtEtaPhiM4D<Double32_t>;
   }
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiM4D<Double32_t>[nElements] : new ::ROOT::Math::PtEtaPhiM4D<Double32_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(void *p) {
      delete ((::ROOT::Math::PtEtaPhiM4D<Double32_t>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(void *p) {
      delete [] ((::ROOT::Math::PtEtaPhiM4D<Double32_t>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiM4DlEDouble32_tgR(void *p) {
      typedef ::ROOT::Math::PtEtaPhiM4D<Double32_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PtEtaPhiM4D<Double32_t>

namespace {
  void TriggerDictionaryInitialization_libGenVector_G__GenVector32_Impl() {
    static const char* headers[] = {
"Math/Vector2D.h",
"Math/Point2D.h",
"Math/Vector3D.h",
"Math/Point3D.h",
"Math/Vector4D.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGenVector_G__GenVector32 dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Math/Vector2D.h"
#include "Math/Point2D.h"
#include "Math/Vector3D.h"
#include "Math/Point3D.h"
#include "Math/Vector4D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGenVector_G__GenVector32",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGenVector_G__GenVector32_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGenVector_G__GenVector32_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGenVector_G__GenVector32() {
  TriggerDictionaryInitialization_libGenVector_G__GenVector32_Impl();
}
