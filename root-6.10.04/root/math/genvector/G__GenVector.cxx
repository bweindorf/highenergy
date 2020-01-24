// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GenVector

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
#include "Math/Rotation3D.h"
#include "Math/RotationZYX.h"
#include "Math/RotationX.h"
#include "Math/RotationY.h"
#include "Math/RotationZ.h"
#include "Math/LorentzRotation.h"
#include "Math/Boost.h"
#include "Math/BoostX.h"
#include "Math/BoostY.h"
#include "Math/BoostZ.h"
#include "Math/EulerAngles.h"
#include "Math/AxisAngle.h"
#include "Math/Quaternion.h"
#include "Math/Transform3D.h"
#include "Math/Translation3D.h"
#include "Math/Plane3D.h"
#include "Math/VectorUtil.h"

// Header files passed via #pragma extra_include
#include "vector"

   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOT_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT", 0 /*version*/, "Rtypes.h", 99,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOT_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOT_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }

namespace ROOT {
   namespace Math {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLMath_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Math", 0 /*version*/, "Math/Vector2Dfwd.h", 23,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLMath_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLMath_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   namespace Math {
      namespace VectorUtil {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLMathcLcLVectorUtil_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Math::VectorUtil", 0 /*version*/, "Math/GenVector/VectorUtil.h", 45,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLMathcLcLVectorUtil_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLMathcLcLVectorUtil_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector2D.h", 56,
                  typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector2D.h", 56,
                  typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector2D.h", 56,
                  typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector2D.h", 56,
                  typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCartesian2DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLCartesian2DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCartesian2DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCartesian2DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCartesian2DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCartesian2DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLCartesian2DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cartesian2D<double>*)
   {
      ::ROOT::Math::Cartesian2D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cartesian2D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cartesian2D<double>", "Math/GenVector/Cartesian2D.h", 37,
                  typeid(::ROOT::Math::Cartesian2D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCartesian2DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cartesian2D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCartesian2DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCartesian2DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCartesian2DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCartesian2DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCartesian2DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Cartesian2D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Cartesian2D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian2D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCartesian2DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian2D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCartesian2DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCartesian2DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCartesian2DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLCartesian2DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCartesian2DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCartesian2DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCartesian2DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCartesian2DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLCartesian2DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cartesian2D<float>*)
   {
      ::ROOT::Math::Cartesian2D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cartesian2D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cartesian2D<float>", "Math/GenVector/Cartesian2D.h", 37,
                  typeid(::ROOT::Math::Cartesian2D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCartesian2DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cartesian2D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCartesian2DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCartesian2DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCartesian2DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCartesian2DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCartesian2DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Cartesian2D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Cartesian2D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian2D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCartesian2DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian2D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCartesian2DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCartesian2DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPolar2DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLPolar2DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPolar2DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPolar2DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPolar2DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPolar2DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLPolar2DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Polar2D<double>*)
   {
      ::ROOT::Math::Polar2D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Polar2D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Polar2D<double>", "Math/GenVector/Polar2D.h", 43,
                  typeid(::ROOT::Math::Polar2D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPolar2DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Polar2D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPolar2DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPolar2DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPolar2DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPolar2DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPolar2DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Polar2D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Polar2D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Polar2D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPolar2DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Polar2D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPolar2DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPolar2DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPolar2DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLPolar2DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPolar2DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPolar2DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPolar2DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPolar2DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPolar2DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Polar2D<float>*)
   {
      ::ROOT::Math::Polar2D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Polar2D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Polar2D<float>", "Math/GenVector/Polar2D.h", 43,
                  typeid(::ROOT::Math::Polar2D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPolar2DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Polar2D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPolar2DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPolar2DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPolar2DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPolar2DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPolar2DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Polar2D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Polar2D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Polar2D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPolar2DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Polar2D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPolar2DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPolar2DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector2D.h", 48,
                  typeid(::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector2D.h", 48,
                  typeid(::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector2D.h", 48,
                  typeid(::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector2D.h", 48,
                  typeid(::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDefaultCoordinateSystemTag_Dictionary();
   static void ROOTcLcLMathcLcLDefaultCoordinateSystemTag_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(void *p);
   static void destruct_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DefaultCoordinateSystemTag*)
   {
      ::ROOT::Math::DefaultCoordinateSystemTag *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DefaultCoordinateSystemTag));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DefaultCoordinateSystemTag", "Math/GenVector/CoordinateSystemTags.h", 36,
                  typeid(::ROOT::Math::DefaultCoordinateSystemTag), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDefaultCoordinateSystemTag_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DefaultCoordinateSystemTag) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDefaultCoordinateSystemTag);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDefaultCoordinateSystemTag);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDefaultCoordinateSystemTag);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDefaultCoordinateSystemTag);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDefaultCoordinateSystemTag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DefaultCoordinateSystemTag*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DefaultCoordinateSystemTag*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DefaultCoordinateSystemTag*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDefaultCoordinateSystemTag_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DefaultCoordinateSystemTag*)0x0)->GetClass();
      ROOTcLcLMathcLcLDefaultCoordinateSystemTag_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDefaultCoordinateSystemTag_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGlobalCoordinateSystemTag_Dictionary();
   static void ROOTcLcLMathcLcLGlobalCoordinateSystemTag_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(void *p);
   static void destruct_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GlobalCoordinateSystemTag*)
   {
      ::ROOT::Math::GlobalCoordinateSystemTag *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GlobalCoordinateSystemTag));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GlobalCoordinateSystemTag", "Math/GenVector/CoordinateSystemTags.h", 45,
                  typeid(::ROOT::Math::GlobalCoordinateSystemTag), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGlobalCoordinateSystemTag_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GlobalCoordinateSystemTag) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGlobalCoordinateSystemTag);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGlobalCoordinateSystemTag);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGlobalCoordinateSystemTag);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGlobalCoordinateSystemTag);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGlobalCoordinateSystemTag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GlobalCoordinateSystemTag*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GlobalCoordinateSystemTag*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GlobalCoordinateSystemTag*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGlobalCoordinateSystemTag_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GlobalCoordinateSystemTag*)0x0)->GetClass();
      ROOTcLcLMathcLcLGlobalCoordinateSystemTag_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGlobalCoordinateSystemTag_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLocalCoordinateSystemTag_Dictionary();
   static void ROOTcLcLMathcLcLLocalCoordinateSystemTag_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLocalCoordinateSystemTag(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLocalCoordinateSystemTag(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLocalCoordinateSystemTag(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLocalCoordinateSystemTag(void *p);
   static void destruct_ROOTcLcLMathcLcLLocalCoordinateSystemTag(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LocalCoordinateSystemTag*)
   {
      ::ROOT::Math::LocalCoordinateSystemTag *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LocalCoordinateSystemTag));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LocalCoordinateSystemTag", "Math/GenVector/CoordinateSystemTags.h", 53,
                  typeid(::ROOT::Math::LocalCoordinateSystemTag), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLocalCoordinateSystemTag_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LocalCoordinateSystemTag) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLocalCoordinateSystemTag);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLocalCoordinateSystemTag);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLocalCoordinateSystemTag);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLocalCoordinateSystemTag);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLocalCoordinateSystemTag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LocalCoordinateSystemTag*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LocalCoordinateSystemTag*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LocalCoordinateSystemTag*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLocalCoordinateSystemTag_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LocalCoordinateSystemTag*)0x0)->GetClass();
      ROOTcLcLMathcLcLLocalCoordinateSystemTag_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLocalCoordinateSystemTag_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector3D.h", 67,
                  typeid(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCartesian3DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLCartesian3DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCartesian3DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCartesian3DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCartesian3DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCartesian3DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLCartesian3DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cartesian3D<double>*)
   {
      ::ROOT::Math::Cartesian3D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cartesian3D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cartesian3D<double>", "Math/GenVector/Cartesian3D.h", 44,
                  typeid(::ROOT::Math::Cartesian3D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCartesian3DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cartesian3D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCartesian3DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCartesian3DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCartesian3DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCartesian3DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCartesian3DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Cartesian3D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Cartesian3D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian3D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCartesian3DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian3D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCartesian3DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCartesian3DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCartesian3DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLCartesian3DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCartesian3DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCartesian3DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCartesian3DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCartesian3DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLCartesian3DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cartesian3D<float>*)
   {
      ::ROOT::Math::Cartesian3D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cartesian3D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cartesian3D<float>", "Math/GenVector/Cartesian3D.h", 44,
                  typeid(::ROOT::Math::Cartesian3D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCartesian3DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cartesian3D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCartesian3DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCartesian3DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCartesian3DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCartesian3DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCartesian3DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Cartesian3D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Cartesian3D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian3D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCartesian3DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian3D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCartesian3DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCartesian3DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::CylindricalEta3D<double>*)
   {
      ::ROOT::Math::CylindricalEta3D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::CylindricalEta3D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::CylindricalEta3D<double>", "Math/GenVector/CylindricalEta3D.h", 48,
                  typeid(::ROOT::Math::CylindricalEta3D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::CylindricalEta3D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::CylindricalEta3D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::CylindricalEta3D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::CylindricalEta3D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::CylindricalEta3D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::CylindricalEta3D<float>*)
   {
      ::ROOT::Math::CylindricalEta3D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::CylindricalEta3D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::CylindricalEta3D<float>", "Math/GenVector/CylindricalEta3D.h", 48,
                  typeid(::ROOT::Math::CylindricalEta3D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::CylindricalEta3D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::CylindricalEta3D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::CylindricalEta3D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::CylindricalEta3D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::CylindricalEta3D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPolar3DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLPolar3DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPolar3DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPolar3DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPolar3DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPolar3DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLPolar3DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Polar3D<double>*)
   {
      ::ROOT::Math::Polar3D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Polar3D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Polar3D<double>", "Math/GenVector/Polar3D.h", 43,
                  typeid(::ROOT::Math::Polar3D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPolar3DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Polar3D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPolar3DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPolar3DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPolar3DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPolar3DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPolar3DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Polar3D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Polar3D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Polar3D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPolar3DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Polar3D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPolar3DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPolar3DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPolar3DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLPolar3DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPolar3DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPolar3DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPolar3DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPolar3DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPolar3DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Polar3D<float>*)
   {
      ::ROOT::Math::Polar3D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Polar3D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Polar3D<float>", "Math/GenVector/Polar3D.h", 43,
                  typeid(::ROOT::Math::Polar3D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPolar3DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Polar3D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPolar3DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPolar3DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPolar3DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPolar3DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPolar3DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Polar3D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Polar3D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Polar3D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPolar3DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Polar3D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPolar3DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPolar3DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCylindrical3DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLCylindrical3DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cylindrical3D<double>*)
   {
      ::ROOT::Math::Cylindrical3D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cylindrical3D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cylindrical3D<double>", "Math/GenVector/Cylindrical3D.h", 40,
                  typeid(::ROOT::Math::Cylindrical3D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCylindrical3DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cylindrical3D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCylindrical3DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCylindrical3DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCylindrical3DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCylindrical3DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCylindrical3DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Cylindrical3D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Cylindrical3D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cylindrical3D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCylindrical3DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cylindrical3D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCylindrical3DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCylindrical3DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCylindrical3DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLCylindrical3DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cylindrical3D<float>*)
   {
      ::ROOT::Math::Cylindrical3D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cylindrical3D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cylindrical3D<float>", "Math/GenVector/Cylindrical3D.h", 40,
                  typeid(::ROOT::Math::Cylindrical3D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCylindrical3DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cylindrical3D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCylindrical3DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCylindrical3DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCylindrical3DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCylindrical3DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCylindrical3DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Cylindrical3D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Cylindrical3D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cylindrical3D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCylindrical3DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cylindrical3D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCylindrical3DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCylindrical3DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/PositionVector3D.h", 53,
                  typeid(::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >*)
   {
      ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >", "Math/GenVector/LorentzVector.h", 48,
                  typeid(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PxPyPzE4D<double>*)
   {
      ::ROOT::Math::PxPyPzE4D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PxPyPzE4D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PxPyPzE4D<double>", "Math/GenVector/PxPyPzE4D.h", 42,
                  typeid(::ROOT::Math::PxPyPzE4D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PxPyPzE4D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PxPyPzE4D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PxPyPzE4D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzE4D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzE4D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PxPyPzE4D<float>*)
   {
      ::ROOT::Math::PxPyPzE4D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PxPyPzE4D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PxPyPzE4D<float>", "Math/GenVector/PxPyPzE4D.h", 42,
                  typeid(::ROOT::Math::PxPyPzE4D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PxPyPzE4D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PxPyPzE4D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PxPyPzE4D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzE4D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzE4D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PtEtaPhiE4D<double>*)
   {
      ::ROOT::Math::PtEtaPhiE4D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PtEtaPhiE4D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PtEtaPhiE4D<double>", "Math/GenVector/PtEtaPhiE4D.h", 52,
                  typeid(::ROOT::Math::PtEtaPhiE4D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PtEtaPhiE4D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PtEtaPhiE4D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PtEtaPhiE4D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiE4D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiE4D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PtEtaPhiE4D<float>*)
   {
      ::ROOT::Math::PtEtaPhiE4D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PtEtaPhiE4D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PtEtaPhiE4D<float>", "Math/GenVector/PtEtaPhiE4D.h", 52,
                  typeid(::ROOT::Math::PtEtaPhiE4D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PtEtaPhiE4D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PtEtaPhiE4D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PtEtaPhiE4D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiE4D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiE4D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PxPyPzM4D<double>*)
   {
      ::ROOT::Math::PxPyPzM4D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PxPyPzM4D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PxPyPzM4D<double>", "Math/GenVector/PxPyPzM4D.h", 47,
                  typeid(::ROOT::Math::PxPyPzM4D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PxPyPzM4D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PxPyPzM4D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PxPyPzM4D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzM4D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzM4D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PxPyPzM4D<float>*)
   {
      ::ROOT::Math::PxPyPzM4D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PxPyPzM4D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PxPyPzM4D<float>", "Math/GenVector/PxPyPzM4D.h", 47,
                  typeid(::ROOT::Math::PxPyPzM4D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PxPyPzM4D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PxPyPzM4D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PxPyPzM4D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzM4D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PxPyPzM4D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PtEtaPhiM4D<double>*)
   {
      ::ROOT::Math::PtEtaPhiM4D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PtEtaPhiM4D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PtEtaPhiM4D<double>", "Math/GenVector/PtEtaPhiM4D.h", 52,
                  typeid(::ROOT::Math::PtEtaPhiM4D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PtEtaPhiM4D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PtEtaPhiM4D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PtEtaPhiM4D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiM4D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiM4D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::PtEtaPhiM4D<float>*)
   {
      ::ROOT::Math::PtEtaPhiM4D<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::PtEtaPhiM4D<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::PtEtaPhiM4D<float>", "Math/GenVector/PtEtaPhiM4D.h", 52,
                  typeid(::ROOT::Math::PtEtaPhiM4D<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::PtEtaPhiM4D<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::PtEtaPhiM4D<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::PtEtaPhiM4D<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiM4D<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::PtEtaPhiM4D<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRotation3D_Dictionary();
   static void ROOTcLcLMathcLcLRotation3D_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRotation3D(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRotation3D(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRotation3D(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRotation3D(void *p);
   static void destruct_ROOTcLcLMathcLcLRotation3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Rotation3D*)
   {
      ::ROOT::Math::Rotation3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Rotation3D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Rotation3D", "Math/GenVector/Rotation3D.h", 65,
                  typeid(::ROOT::Math::Rotation3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRotation3D_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Rotation3D) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRotation3D);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRotation3D);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRotation3D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRotation3D);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRotation3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Rotation3D*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Rotation3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Rotation3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRotation3D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Rotation3D*)0x0)->GetClass();
      ROOTcLcLMathcLcLRotation3D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRotation3D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRotationZYX_Dictionary();
   static void ROOTcLcLMathcLcLRotationZYX_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRotationZYX(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRotationZYX(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRotationZYX(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRotationZYX(void *p);
   static void destruct_ROOTcLcLMathcLcLRotationZYX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RotationZYX*)
   {
      ::ROOT::Math::RotationZYX *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RotationZYX));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RotationZYX", "Math/GenVector/RotationZYX.h", 59,
                  typeid(::ROOT::Math::RotationZYX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRotationZYX_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::RotationZYX) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRotationZYX);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRotationZYX);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRotationZYX);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRotationZYX);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRotationZYX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RotationZYX*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RotationZYX*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RotationZYX*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRotationZYX_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RotationZYX*)0x0)->GetClass();
      ROOTcLcLMathcLcLRotationZYX_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRotationZYX_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRotationX_Dictionary();
   static void ROOTcLcLMathcLcLRotationX_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRotationX(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRotationX(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRotationX(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRotationX(void *p);
   static void destruct_ROOTcLcLMathcLcLRotationX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RotationX*)
   {
      ::ROOT::Math::RotationX *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RotationX));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RotationX", "Math/GenVector/RotationX.h", 43,
                  typeid(::ROOT::Math::RotationX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRotationX_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::RotationX) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRotationX);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRotationX);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRotationX);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRotationX);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRotationX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RotationX*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RotationX*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RotationX*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRotationX_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RotationX*)0x0)->GetClass();
      ROOTcLcLMathcLcLRotationX_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRotationX_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRotationY_Dictionary();
   static void ROOTcLcLMathcLcLRotationY_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRotationY(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRotationY(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRotationY(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRotationY(void *p);
   static void destruct_ROOTcLcLMathcLcLRotationY(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RotationY*)
   {
      ::ROOT::Math::RotationY *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RotationY));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RotationY", "Math/GenVector/RotationY.h", 43,
                  typeid(::ROOT::Math::RotationY), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRotationY_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::RotationY) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRotationY);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRotationY);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRotationY);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRotationY);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRotationY);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RotationY*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RotationY*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RotationY*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRotationY_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RotationY*)0x0)->GetClass();
      ROOTcLcLMathcLcLRotationY_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRotationY_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRotationZ_Dictionary();
   static void ROOTcLcLMathcLcLRotationZ_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRotationZ(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRotationZ(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRotationZ(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRotationZ(void *p);
   static void destruct_ROOTcLcLMathcLcLRotationZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RotationZ*)
   {
      ::ROOT::Math::RotationZ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RotationZ));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RotationZ", "Math/GenVector/RotationZ.h", 43,
                  typeid(::ROOT::Math::RotationZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRotationZ_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::RotationZ) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRotationZ);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRotationZ);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRotationZ);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRotationZ);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRotationZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RotationZ*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RotationZ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RotationZ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRotationZ_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RotationZ*)0x0)->GetClass();
      ROOTcLcLMathcLcLRotationZ_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRotationZ_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBoostX_Dictionary();
   static void ROOTcLcLMathcLcLBoostX_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLBoostX(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLBoostX(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLBoostX(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBoostX(void *p);
   static void destruct_ROOTcLcLMathcLcLBoostX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::BoostX*)
   {
      ::ROOT::Math::BoostX *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::BoostX));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::BoostX", "Math/GenVector/BoostX.h", 37,
                  typeid(::ROOT::Math::BoostX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBoostX_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::BoostX) );
      instance.SetNew(&new_ROOTcLcLMathcLcLBoostX);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLBoostX);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBoostX);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBoostX);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBoostX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::BoostX*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::BoostX*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::BoostX*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBoostX_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::BoostX*)0x0)->GetClass();
      ROOTcLcLMathcLcLBoostX_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBoostX_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBoostY_Dictionary();
   static void ROOTcLcLMathcLcLBoostY_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLBoostY(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLBoostY(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLBoostY(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBoostY(void *p);
   static void destruct_ROOTcLcLMathcLcLBoostY(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::BoostY*)
   {
      ::ROOT::Math::BoostY *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::BoostY));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::BoostY", "Math/GenVector/BoostY.h", 37,
                  typeid(::ROOT::Math::BoostY), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBoostY_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::BoostY) );
      instance.SetNew(&new_ROOTcLcLMathcLcLBoostY);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLBoostY);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBoostY);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBoostY);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBoostY);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::BoostY*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::BoostY*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::BoostY*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBoostY_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::BoostY*)0x0)->GetClass();
      ROOTcLcLMathcLcLBoostY_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBoostY_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBoostZ_Dictionary();
   static void ROOTcLcLMathcLcLBoostZ_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLBoostZ(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLBoostZ(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLBoostZ(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBoostZ(void *p);
   static void destruct_ROOTcLcLMathcLcLBoostZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::BoostZ*)
   {
      ::ROOT::Math::BoostZ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::BoostZ));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::BoostZ", "Math/GenVector/BoostZ.h", 37,
                  typeid(::ROOT::Math::BoostZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBoostZ_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::BoostZ) );
      instance.SetNew(&new_ROOTcLcLMathcLcLBoostZ);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLBoostZ);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBoostZ);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBoostZ);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBoostZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::BoostZ*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::BoostZ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::BoostZ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBoostZ_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::BoostZ*)0x0)->GetClass();
      ROOTcLcLMathcLcLBoostZ_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBoostZ_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBoost_Dictionary();
   static void ROOTcLcLMathcLcLBoost_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLBoost(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLBoost(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLBoost(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBoost(void *p);
   static void destruct_ROOTcLcLMathcLcLBoost(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Boost*)
   {
      ::ROOT::Math::Boost *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Boost));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Boost", "Math/GenVector/Boost.h", 46,
                  typeid(::ROOT::Math::Boost), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBoost_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Boost) );
      instance.SetNew(&new_ROOTcLcLMathcLcLBoost);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLBoost);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBoost);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBoost);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBoost);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Boost*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Boost*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Boost*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBoost_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Boost*)0x0)->GetClass();
      ROOTcLcLMathcLcLBoost_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBoost_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLorentzRotation_Dictionary();
   static void ROOTcLcLMathcLcLLorentzRotation_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLorentzRotation(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLorentzRotation(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLorentzRotation(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLorentzRotation(void *p);
   static void destruct_ROOTcLcLMathcLcLLorentzRotation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LorentzRotation*)
   {
      ::ROOT::Math::LorentzRotation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LorentzRotation));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LorentzRotation", "Math/GenVector/LorentzRotation.h", 54,
                  typeid(::ROOT::Math::LorentzRotation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLorentzRotation_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LorentzRotation) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLorentzRotation);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLorentzRotation);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLorentzRotation);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLorentzRotation);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLorentzRotation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LorentzRotation*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LorentzRotation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LorentzRotation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLorentzRotation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LorentzRotation*)0x0)->GetClass();
      ROOTcLcLMathcLcLLorentzRotation_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLorentzRotation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLEulerAngles_Dictionary();
   static void ROOTcLcLMathcLcLEulerAngles_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLEulerAngles(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLEulerAngles(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLEulerAngles(void *p);
   static void deleteArray_ROOTcLcLMathcLcLEulerAngles(void *p);
   static void destruct_ROOTcLcLMathcLcLEulerAngles(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::EulerAngles*)
   {
      ::ROOT::Math::EulerAngles *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::EulerAngles));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::EulerAngles", "Math/GenVector/EulerAngles.h", 43,
                  typeid(::ROOT::Math::EulerAngles), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLEulerAngles_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::EulerAngles) );
      instance.SetNew(&new_ROOTcLcLMathcLcLEulerAngles);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLEulerAngles);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLEulerAngles);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLEulerAngles);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLEulerAngles);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::EulerAngles*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::EulerAngles*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::EulerAngles*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLEulerAngles_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::EulerAngles*)0x0)->GetClass();
      ROOTcLcLMathcLcLEulerAngles_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLEulerAngles_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLAxisAngle_Dictionary();
   static void ROOTcLcLMathcLcLAxisAngle_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLAxisAngle(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLAxisAngle(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLAxisAngle(void *p);
   static void deleteArray_ROOTcLcLMathcLcLAxisAngle(void *p);
   static void destruct_ROOTcLcLMathcLcLAxisAngle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::AxisAngle*)
   {
      ::ROOT::Math::AxisAngle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::AxisAngle));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::AxisAngle", "Math/GenVector/AxisAngle.h", 41,
                  typeid(::ROOT::Math::AxisAngle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLAxisAngle_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::AxisAngle) );
      instance.SetNew(&new_ROOTcLcLMathcLcLAxisAngle);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLAxisAngle);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLAxisAngle);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLAxisAngle);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLAxisAngle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::AxisAngle*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::AxisAngle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::AxisAngle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLAxisAngle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::AxisAngle*)0x0)->GetClass();
      ROOTcLcLMathcLcLAxisAngle_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLAxisAngle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLQuaternion_Dictionary();
   static void ROOTcLcLMathcLcLQuaternion_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLQuaternion(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLQuaternion(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLQuaternion(void *p);
   static void deleteArray_ROOTcLcLMathcLcLQuaternion(void *p);
   static void destruct_ROOTcLcLMathcLcLQuaternion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Quaternion*)
   {
      ::ROOT::Math::Quaternion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Quaternion));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Quaternion", "Math/GenVector/Quaternion.h", 47,
                  typeid(::ROOT::Math::Quaternion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLQuaternion_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Quaternion) );
      instance.SetNew(&new_ROOTcLcLMathcLcLQuaternion);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLQuaternion);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLQuaternion);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLQuaternion);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLQuaternion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Quaternion*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Quaternion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Quaternion*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLQuaternion_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Quaternion*)0x0)->GetClass();
      ROOTcLcLMathcLcLQuaternion_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLQuaternion_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Impl::Plane3D<double>*)
   {
      ::ROOT::Math::Impl::Plane3D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Impl::Plane3D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Impl::Plane3D<double>", "Math/GenVector/Plane3D.h", 51,
                  typeid(::ROOT::Math::Impl::Plane3D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Impl::Plane3D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Math::Impl::Plane3D<double>","ROOT::Math::Plane3D");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Impl::Plane3D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Impl::Plane3D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Impl::Plane3D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Impl::Plane3D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Impl::Translation3D<double>*)
   {
      ::ROOT::Math::Impl::Translation3D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Impl::Translation3D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Impl::Translation3D<double>", "Math/GenVector/Translation3D.h", 51,
                  typeid(::ROOT::Math::Impl::Translation3D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Impl::Translation3D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Math::Impl::Translation3D<double>","ROOT::Math::Translation3D");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Impl::Translation3D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Impl::Translation3D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Impl::Translation3D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Impl::Translation3D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Impl::Transform3D<double>*)
   {
      ::ROOT::Math::Impl::Transform3D<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Impl::Transform3D<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Impl::Transform3D<double>", "Math/GenVector/Transform3D.h", 78,
                  typeid(::ROOT::Math::Impl::Transform3D<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Impl::Transform3D<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Math::Impl::Transform3D<double>","ROOT::Math::Transform3D");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Impl::Transform3D<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Impl::Transform3D<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Impl::Transform3D<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Impl::Transform3D<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCartesian2DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian2D<double> : new ::ROOT::Math::Cartesian2D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLCartesian2DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian2D<double>[nElements] : new ::ROOT::Math::Cartesian2D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCartesian2DlEdoublegR(void *p) {
      delete ((::ROOT::Math::Cartesian2D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCartesian2DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::Cartesian2D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCartesian2DlEdoublegR(void *p) {
      typedef ::ROOT::Math::Cartesian2D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cartesian2D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCartesian2DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian2D<float> : new ::ROOT::Math::Cartesian2D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLCartesian2DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian2D<float>[nElements] : new ::ROOT::Math::Cartesian2D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCartesian2DlEfloatgR(void *p) {
      delete ((::ROOT::Math::Cartesian2D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCartesian2DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::Cartesian2D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCartesian2DlEfloatgR(void *p) {
      typedef ::ROOT::Math::Cartesian2D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cartesian2D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPolar2DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar2D<double> : new ::ROOT::Math::Polar2D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLPolar2DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar2D<double>[nElements] : new ::ROOT::Math::Polar2D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPolar2DlEdoublegR(void *p) {
      delete ((::ROOT::Math::Polar2D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPolar2DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::Polar2D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPolar2DlEdoublegR(void *p) {
      typedef ::ROOT::Math::Polar2D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Polar2D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPolar2DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar2D<float> : new ::ROOT::Math::Polar2D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLPolar2DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar2D<float>[nElements] : new ::ROOT::Math::Polar2D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPolar2DlEfloatgR(void *p) {
      delete ((::ROOT::Math::Polar2D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPolar2DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::Polar2D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPolar2DlEfloatgR(void *p) {
      typedef ::ROOT::Math::Polar2D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Polar2D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLCartesian2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector2D<ROOT::Math::Cartesian2D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector2DlEROOTcLcLMathcLcLPolar2DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector2D<ROOT::Math::Polar2D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DefaultCoordinateSystemTag : new ::ROOT::Math::DefaultCoordinateSystemTag;
   }
   static void *newArray_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DefaultCoordinateSystemTag[nElements] : new ::ROOT::Math::DefaultCoordinateSystemTag[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(void *p) {
      delete ((::ROOT::Math::DefaultCoordinateSystemTag*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(void *p) {
      delete [] ((::ROOT::Math::DefaultCoordinateSystemTag*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDefaultCoordinateSystemTag(void *p) {
      typedef ::ROOT::Math::DefaultCoordinateSystemTag current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DefaultCoordinateSystemTag

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GlobalCoordinateSystemTag : new ::ROOT::Math::GlobalCoordinateSystemTag;
   }
   static void *newArray_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GlobalCoordinateSystemTag[nElements] : new ::ROOT::Math::GlobalCoordinateSystemTag[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(void *p) {
      delete ((::ROOT::Math::GlobalCoordinateSystemTag*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(void *p) {
      delete [] ((::ROOT::Math::GlobalCoordinateSystemTag*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGlobalCoordinateSystemTag(void *p) {
      typedef ::ROOT::Math::GlobalCoordinateSystemTag current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GlobalCoordinateSystemTag

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLocalCoordinateSystemTag(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LocalCoordinateSystemTag : new ::ROOT::Math::LocalCoordinateSystemTag;
   }
   static void *newArray_ROOTcLcLMathcLcLLocalCoordinateSystemTag(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LocalCoordinateSystemTag[nElements] : new ::ROOT::Math::LocalCoordinateSystemTag[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLocalCoordinateSystemTag(void *p) {
      delete ((::ROOT::Math::LocalCoordinateSystemTag*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLocalCoordinateSystemTag(void *p) {
      delete [] ((::ROOT::Math::LocalCoordinateSystemTag*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLocalCoordinateSystemTag(void *p) {
      typedef ::ROOT::Math::LocalCoordinateSystemTag current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LocalCoordinateSystemTag

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCartesian3DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian3D<double> : new ::ROOT::Math::Cartesian3D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLCartesian3DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian3D<double>[nElements] : new ::ROOT::Math::Cartesian3D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCartesian3DlEdoublegR(void *p) {
      delete ((::ROOT::Math::Cartesian3D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCartesian3DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::Cartesian3D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCartesian3DlEdoublegR(void *p) {
      typedef ::ROOT::Math::Cartesian3D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cartesian3D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCartesian3DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian3D<float> : new ::ROOT::Math::Cartesian3D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLCartesian3DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian3D<float>[nElements] : new ::ROOT::Math::Cartesian3D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCartesian3DlEfloatgR(void *p) {
      delete ((::ROOT::Math::Cartesian3D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCartesian3DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::Cartesian3D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCartesian3DlEfloatgR(void *p) {
      typedef ::ROOT::Math::Cartesian3D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cartesian3D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::CylindricalEta3D<double> : new ::ROOT::Math::CylindricalEta3D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::CylindricalEta3D<double>[nElements] : new ::ROOT::Math::CylindricalEta3D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(void *p) {
      delete ((::ROOT::Math::CylindricalEta3D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::CylindricalEta3D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCylindricalEta3DlEdoublegR(void *p) {
      typedef ::ROOT::Math::CylindricalEta3D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::CylindricalEta3D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::CylindricalEta3D<float> : new ::ROOT::Math::CylindricalEta3D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::CylindricalEta3D<float>[nElements] : new ::ROOT::Math::CylindricalEta3D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(void *p) {
      delete ((::ROOT::Math::CylindricalEta3D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::CylindricalEta3D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCylindricalEta3DlEfloatgR(void *p) {
      typedef ::ROOT::Math::CylindricalEta3D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::CylindricalEta3D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPolar3DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar3D<double> : new ::ROOT::Math::Polar3D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLPolar3DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar3D<double>[nElements] : new ::ROOT::Math::Polar3D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPolar3DlEdoublegR(void *p) {
      delete ((::ROOT::Math::Polar3D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPolar3DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::Polar3D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPolar3DlEdoublegR(void *p) {
      typedef ::ROOT::Math::Polar3D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Polar3D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPolar3DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar3D<float> : new ::ROOT::Math::Polar3D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLPolar3DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polar3D<float>[nElements] : new ::ROOT::Math::Polar3D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPolar3DlEfloatgR(void *p) {
      delete ((::ROOT::Math::Polar3D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPolar3DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::Polar3D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPolar3DlEfloatgR(void *p) {
      typedef ::ROOT::Math::Polar3D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Polar3D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cylindrical3D<double> : new ::ROOT::Math::Cylindrical3D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cylindrical3D<double>[nElements] : new ::ROOT::Math::Cylindrical3D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(void *p) {
      delete ((::ROOT::Math::Cylindrical3D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::Cylindrical3D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCylindrical3DlEdoublegR(void *p) {
      typedef ::ROOT::Math::Cylindrical3D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cylindrical3D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cylindrical3D<float> : new ::ROOT::Math::Cylindrical3D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cylindrical3D<float>[nElements] : new ::ROOT::Math::Cylindrical3D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(void *p) {
      delete ((::ROOT::Math::Cylindrical3D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::Cylindrical3D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCylindrical3DlEfloatgR(void *p) {
      typedef ::ROOT::Math::Cylindrical3D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cylindrical3D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLPolar3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Polar3D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<double>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindrical3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PositionVector3D<ROOT::Math::Cylindrical3D<float>,ROOT::Math::DefaultCoordinateSystemTag>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEdoublegRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<double> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzM4DlEfloatgRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PxPyPzM4D<float> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> > : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >[nElements] : new ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(void *p) {
      delete ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(void *p) {
      delete [] ((::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgRsPgR(void *p) {
      typedef ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<float> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzE4D<double> : new ::ROOT::Math::PxPyPzE4D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzE4D<double>[nElements] : new ::ROOT::Math::PxPyPzE4D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(void *p) {
      delete ((::ROOT::Math::PxPyPzE4D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::PxPyPzE4D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPxPyPzE4DlEdoublegR(void *p) {
      typedef ::ROOT::Math::PxPyPzE4D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PxPyPzE4D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzE4D<float> : new ::ROOT::Math::PxPyPzE4D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzE4D<float>[nElements] : new ::ROOT::Math::PxPyPzE4D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(void *p) {
      delete ((::ROOT::Math::PxPyPzE4D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::PxPyPzE4D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPxPyPzE4DlEfloatgR(void *p) {
      typedef ::ROOT::Math::PxPyPzE4D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PxPyPzE4D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiE4D<double> : new ::ROOT::Math::PtEtaPhiE4D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiE4D<double>[nElements] : new ::ROOT::Math::PtEtaPhiE4D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(void *p) {
      delete ((::ROOT::Math::PtEtaPhiE4D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::PtEtaPhiE4D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegR(void *p) {
      typedef ::ROOT::Math::PtEtaPhiE4D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PtEtaPhiE4D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiE4D<float> : new ::ROOT::Math::PtEtaPhiE4D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiE4D<float>[nElements] : new ::ROOT::Math::PtEtaPhiE4D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(void *p) {
      delete ((::ROOT::Math::PtEtaPhiE4D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::PtEtaPhiE4D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiE4DlEfloatgR(void *p) {
      typedef ::ROOT::Math::PtEtaPhiE4D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PtEtaPhiE4D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzM4D<double> : new ::ROOT::Math::PxPyPzM4D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzM4D<double>[nElements] : new ::ROOT::Math::PxPyPzM4D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(void *p) {
      delete ((::ROOT::Math::PxPyPzM4D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::PxPyPzM4D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPxPyPzM4DlEdoublegR(void *p) {
      typedef ::ROOT::Math::PxPyPzM4D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PxPyPzM4D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzM4D<float> : new ::ROOT::Math::PxPyPzM4D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PxPyPzM4D<float>[nElements] : new ::ROOT::Math::PxPyPzM4D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(void *p) {
      delete ((::ROOT::Math::PxPyPzM4D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::PxPyPzM4D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPxPyPzM4DlEfloatgR(void *p) {
      typedef ::ROOT::Math::PxPyPzM4D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PxPyPzM4D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiM4D<double> : new ::ROOT::Math::PtEtaPhiM4D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiM4D<double>[nElements] : new ::ROOT::Math::PtEtaPhiM4D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(void *p) {
      delete ((::ROOT::Math::PtEtaPhiM4D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::PtEtaPhiM4D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegR(void *p) {
      typedef ::ROOT::Math::PtEtaPhiM4D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PtEtaPhiM4D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiM4D<float> : new ::ROOT::Math::PtEtaPhiM4D<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::PtEtaPhiM4D<float>[nElements] : new ::ROOT::Math::PtEtaPhiM4D<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(void *p) {
      delete ((::ROOT::Math::PtEtaPhiM4D<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::PtEtaPhiM4D<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPtEtaPhiM4DlEfloatgR(void *p) {
      typedef ::ROOT::Math::PtEtaPhiM4D<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::PtEtaPhiM4D<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRotation3D(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Rotation3D : new ::ROOT::Math::Rotation3D;
   }
   static void *newArray_ROOTcLcLMathcLcLRotation3D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Rotation3D[nElements] : new ::ROOT::Math::Rotation3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRotation3D(void *p) {
      delete ((::ROOT::Math::Rotation3D*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRotation3D(void *p) {
      delete [] ((::ROOT::Math::Rotation3D*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRotation3D(void *p) {
      typedef ::ROOT::Math::Rotation3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Rotation3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRotationZYX(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RotationZYX : new ::ROOT::Math::RotationZYX;
   }
   static void *newArray_ROOTcLcLMathcLcLRotationZYX(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RotationZYX[nElements] : new ::ROOT::Math::RotationZYX[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRotationZYX(void *p) {
      delete ((::ROOT::Math::RotationZYX*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRotationZYX(void *p) {
      delete [] ((::ROOT::Math::RotationZYX*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRotationZYX(void *p) {
      typedef ::ROOT::Math::RotationZYX current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RotationZYX

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRotationX(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RotationX : new ::ROOT::Math::RotationX;
   }
   static void *newArray_ROOTcLcLMathcLcLRotationX(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RotationX[nElements] : new ::ROOT::Math::RotationX[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRotationX(void *p) {
      delete ((::ROOT::Math::RotationX*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRotationX(void *p) {
      delete [] ((::ROOT::Math::RotationX*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRotationX(void *p) {
      typedef ::ROOT::Math::RotationX current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RotationX

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRotationY(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RotationY : new ::ROOT::Math::RotationY;
   }
   static void *newArray_ROOTcLcLMathcLcLRotationY(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RotationY[nElements] : new ::ROOT::Math::RotationY[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRotationY(void *p) {
      delete ((::ROOT::Math::RotationY*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRotationY(void *p) {
      delete [] ((::ROOT::Math::RotationY*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRotationY(void *p) {
      typedef ::ROOT::Math::RotationY current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RotationY

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRotationZ(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RotationZ : new ::ROOT::Math::RotationZ;
   }
   static void *newArray_ROOTcLcLMathcLcLRotationZ(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RotationZ[nElements] : new ::ROOT::Math::RotationZ[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRotationZ(void *p) {
      delete ((::ROOT::Math::RotationZ*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRotationZ(void *p) {
      delete [] ((::ROOT::Math::RotationZ*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRotationZ(void *p) {
      typedef ::ROOT::Math::RotationZ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RotationZ

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLBoostX(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BoostX : new ::ROOT::Math::BoostX;
   }
   static void *newArray_ROOTcLcLMathcLcLBoostX(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BoostX[nElements] : new ::ROOT::Math::BoostX[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBoostX(void *p) {
      delete ((::ROOT::Math::BoostX*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBoostX(void *p) {
      delete [] ((::ROOT::Math::BoostX*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBoostX(void *p) {
      typedef ::ROOT::Math::BoostX current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::BoostX

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLBoostY(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BoostY : new ::ROOT::Math::BoostY;
   }
   static void *newArray_ROOTcLcLMathcLcLBoostY(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BoostY[nElements] : new ::ROOT::Math::BoostY[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBoostY(void *p) {
      delete ((::ROOT::Math::BoostY*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBoostY(void *p) {
      delete [] ((::ROOT::Math::BoostY*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBoostY(void *p) {
      typedef ::ROOT::Math::BoostY current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::BoostY

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLBoostZ(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BoostZ : new ::ROOT::Math::BoostZ;
   }
   static void *newArray_ROOTcLcLMathcLcLBoostZ(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BoostZ[nElements] : new ::ROOT::Math::BoostZ[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBoostZ(void *p) {
      delete ((::ROOT::Math::BoostZ*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBoostZ(void *p) {
      delete [] ((::ROOT::Math::BoostZ*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBoostZ(void *p) {
      typedef ::ROOT::Math::BoostZ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::BoostZ

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLBoost(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Boost : new ::ROOT::Math::Boost;
   }
   static void *newArray_ROOTcLcLMathcLcLBoost(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Boost[nElements] : new ::ROOT::Math::Boost[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBoost(void *p) {
      delete ((::ROOT::Math::Boost*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBoost(void *p) {
      delete [] ((::ROOT::Math::Boost*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBoost(void *p) {
      typedef ::ROOT::Math::Boost current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Boost

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLorentzRotation(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzRotation : new ::ROOT::Math::LorentzRotation;
   }
   static void *newArray_ROOTcLcLMathcLcLLorentzRotation(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LorentzRotation[nElements] : new ::ROOT::Math::LorentzRotation[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLorentzRotation(void *p) {
      delete ((::ROOT::Math::LorentzRotation*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLorentzRotation(void *p) {
      delete [] ((::ROOT::Math::LorentzRotation*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLorentzRotation(void *p) {
      typedef ::ROOT::Math::LorentzRotation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LorentzRotation

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLEulerAngles(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::EulerAngles : new ::ROOT::Math::EulerAngles;
   }
   static void *newArray_ROOTcLcLMathcLcLEulerAngles(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::EulerAngles[nElements] : new ::ROOT::Math::EulerAngles[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLEulerAngles(void *p) {
      delete ((::ROOT::Math::EulerAngles*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLEulerAngles(void *p) {
      delete [] ((::ROOT::Math::EulerAngles*)p);
   }
   static void destruct_ROOTcLcLMathcLcLEulerAngles(void *p) {
      typedef ::ROOT::Math::EulerAngles current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::EulerAngles

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLAxisAngle(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::AxisAngle : new ::ROOT::Math::AxisAngle;
   }
   static void *newArray_ROOTcLcLMathcLcLAxisAngle(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::AxisAngle[nElements] : new ::ROOT::Math::AxisAngle[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLAxisAngle(void *p) {
      delete ((::ROOT::Math::AxisAngle*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLAxisAngle(void *p) {
      delete [] ((::ROOT::Math::AxisAngle*)p);
   }
   static void destruct_ROOTcLcLMathcLcLAxisAngle(void *p) {
      typedef ::ROOT::Math::AxisAngle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::AxisAngle

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLQuaternion(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Quaternion : new ::ROOT::Math::Quaternion;
   }
   static void *newArray_ROOTcLcLMathcLcLQuaternion(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Quaternion[nElements] : new ::ROOT::Math::Quaternion[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLQuaternion(void *p) {
      delete ((::ROOT::Math::Quaternion*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLQuaternion(void *p) {
      delete [] ((::ROOT::Math::Quaternion*)p);
   }
   static void destruct_ROOTcLcLMathcLcLQuaternion(void *p) {
      typedef ::ROOT::Math::Quaternion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Quaternion

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Impl::Plane3D<double> : new ::ROOT::Math::Impl::Plane3D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Impl::Plane3D<double>[nElements] : new ::ROOT::Math::Impl::Plane3D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(void *p) {
      delete ((::ROOT::Math::Impl::Plane3D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::Impl::Plane3D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLImplcLcLPlane3DlEdoublegR(void *p) {
      typedef ::ROOT::Math::Impl::Plane3D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Impl::Plane3D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Impl::Translation3D<double> : new ::ROOT::Math::Impl::Translation3D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Impl::Translation3D<double>[nElements] : new ::ROOT::Math::Impl::Translation3D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(void *p) {
      delete ((::ROOT::Math::Impl::Translation3D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::Impl::Translation3D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLImplcLcLTranslation3DlEdoublegR(void *p) {
      typedef ::ROOT::Math::Impl::Translation3D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Impl::Translation3D<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Impl::Transform3D<double> : new ::ROOT::Math::Impl::Transform3D<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Impl::Transform3D<double>[nElements] : new ::ROOT::Math::Impl::Transform3D<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(void *p) {
      delete ((::ROOT::Math::Impl::Transform3D<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::Impl::Transform3D<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegR(void *p) {
      typedef ::ROOT::Math::Impl::Transform3D<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Impl::Transform3D<double>

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >", -2, "vector", 216,
                  typeid(vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > : new vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements] : new vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete ((vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      typedef vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::PositionVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >", -2, "vector", 216,
                  typeid(vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > : new vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements] : new vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete ((vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      typedef vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >", -2, "vector", 216,
                  typeid(vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > : new vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements] : new vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete ((vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      typedef vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >*)
   {
      vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >", -2, "vector", 216,
                  typeid(vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > : new vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >[nElements] : new vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(void *p) {
      delete ((vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEfloatgRsPgRsPgR(void *p) {
      typedef vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > >

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)
   {
      vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >", -2, "vector", 216,
                  typeid(vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > : new vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >[nElements] : new vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p) {
      delete ((vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p) {
      typedef vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >*)
   {
      vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >", -2, "vector", 216,
                  typeid(vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > > : new vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >[nElements] : new vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(void *p) {
      delete ((vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiE4DlEdoublegRsPgRsPgR(void *p) {
      typedef vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<double> > >

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >", -2, "vector", 216,
                  typeid(vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > : new vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements] : new vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete ((vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCylindricalEta3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      typedef vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >", -2, "vector", 216,
                  typeid(vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > : new vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements] : new vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete ((vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEfloatgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      typedef vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >", -2, "vector", 216,
                  typeid(vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > : new vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements] : new vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete ((vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      typedef vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >

namespace {
  void TriggerDictionaryInitialization_libGenVector_Impl() {
    static const char* headers[] = {
"Math/Vector2D.h",
"Math/Point2D.h",
"Math/Vector3D.h",
"Math/Point3D.h",
"Math/Vector4D.h",
"Math/Rotation3D.h",
"Math/RotationZYX.h",
"Math/RotationX.h",
"Math/RotationY.h",
"Math/RotationZ.h",
"Math/LorentzRotation.h",
"Math/Boost.h",
"Math/BoostX.h",
"Math/BoostY.h",
"Math/BoostZ.h",
"Math/EulerAngles.h",
"Math/AxisAngle.h",
"Math/Quaternion.h",
"Math/Transform3D.h",
"Math/Translation3D.h",
"Math/Plane3D.h",
"Math/VectorUtil.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGenVector dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Math/Vector2D.h"
#include "Math/Point2D.h"
#include "Math/Vector3D.h"
#include "Math/Point3D.h"
#include "Math/Vector4D.h"
#include "Math/Rotation3D.h"
#include "Math/RotationZYX.h"
#include "Math/RotationX.h"
#include "Math/RotationY.h"
#include "Math/RotationZ.h"
#include "Math/LorentzRotation.h"
#include "Math/Boost.h"
#include "Math/BoostX.h"
#include "Math/BoostY.h"
#include "Math/BoostZ.h"
#include "Math/EulerAngles.h"
#include "Math/AxisAngle.h"
#include "Math/Quaternion.h"
#include "Math/Transform3D.h"
#include "Math/Translation3D.h"
#include "Math/Plane3D.h"
#include "Math/VectorUtil.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGenVector",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGenVector_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGenVector_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGenVector() {
  TriggerDictionaryInitialization_libGenVector_Impl();
}
