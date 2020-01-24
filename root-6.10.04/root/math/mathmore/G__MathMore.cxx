// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__MathMore

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
#include "Math/DistFuncMathMore.h"
#include "Math/SpecFuncMathMore.h"
#include "Math/PdfFuncMathMore.h"
#include "Math/Polynomial.h"
#include "Math/Derivator.h"
#include "Math/Interpolator.h"
#include "Math/InterpolationTypes.h"
#include "Math/GSLRootFinder.h"
#include "Math/GSLRootFinderDeriv.h"
#include "Math/RootFinderAlgorithms.h"
#include "Math/GSLIntegrator.h"
#include "Math/GSLMCIntegrator.h"
#include "Math/MCParameters.h"
#include "Math/GSLMinimizer1D.h"
#include "Math/ChebyshevApprox.h"
#include "Math/GSLRndmEngines.h"
#include "Math/QuasiRandom.h"
#include "Math/GSLQuasiRandom.h"
#include "Math/KelvinFunctions.h"
#include "Math/GSLRandom.h"
#include "Math/GSLMinimizer.h"
#include "Math/GSLNLSMinimizer.h"
#include "Math/GSLSimAnMinimizer.h"
#include "Math/GSLMultiRootFinder.h"
#include "Math/GSLRandomFunctions.h"
#include "Math/Vavilov.h"
#include "Math/VavilovAccurate.h"
#include "Math/VavilovAccuratePdf.h"
#include "Math/VavilovAccurateCdf.h"
#include "Math/VavilovAccurateQuantile.h"
#include "Math/VavilovFast.h"

// Header files passed via #pragma extra_include
#include "Math/IFunctionfwd.h"
#include "Math/IFunction.h"
#include "math/mathmore/src/GSLError.h"

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
            instance("ROOT::Math", 0 /*version*/, "Math/PdfFuncMathMore.h", 30,
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
   namespace MathMore {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLMathMore_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::MathMore", 0 /*version*/, "Math/QuantFuncMathMore.h", 137,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLMathMore_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLMathMore_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   namespace Math {
      namespace Roots {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLMathcLcLRoots_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Math::Roots", 0 /*version*/, "Math/RootFinderAlgorithms.h", 47,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLMathcLcLRoots_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLMathcLcLRoots_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   namespace Math {
      namespace Integration {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLMathcLcLIntegration_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Math::Integration", 0 /*version*/, "Math/IntegrationTypes.h", 42,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLMathcLcLIntegration_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLMathcLcLIntegration_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   namespace Math {
      namespace Minim1D {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLMathcLcLMinim1D_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Math::Minim1D", 0 /*version*/, "Math/GSLMinimizer1D.h", 41,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLMathcLcLMinim1D_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLMathcLcLMinim1D_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMathMoreLib_Dictionary();
   static void ROOTcLcLMathcLcLMathMoreLib_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMathMoreLib(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMathMoreLib(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMathMoreLib(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMathMoreLib(void *p);
   static void destruct_ROOTcLcLMathcLcLMathMoreLib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MathMoreLib*)
   {
      ::ROOT::Math::MathMoreLib *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MathMoreLib));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MathMoreLib", "Math/PdfFuncMathMore.h", 60,
                  typeid(::ROOT::Math::MathMoreLib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMathMoreLib_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MathMoreLib) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMathMoreLib);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMathMoreLib);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMathMoreLib);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMathMoreLib);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMathMoreLib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MathMoreLib*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MathMoreLib*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MathMoreLib*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMathMoreLib_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MathMoreLib*)0x0)->GetClass();
      ROOTcLcLMathcLcLMathMoreLib_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMathMoreLib_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR_Dictionary();
   static void ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR(void *p);
   static void destruct_ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>*)
   {
      ::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>", "Math/ParamFunction.h", 67,
                  typeid(::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>*)0x0)->GetClass();
      ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLPolynomial_Dictionary();
   static void ROOTcLcLMathcLcLPolynomial_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLPolynomial(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLPolynomial(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLPolynomial(void *p);
   static void deleteArray_ROOTcLcLMathcLcLPolynomial(void *p);
   static void destruct_ROOTcLcLMathcLcLPolynomial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Polynomial*)
   {
      ::ROOT::Math::Polynomial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Polynomial));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Polynomial", "Math/Polynomial.h", 63,
                  typeid(::ROOT::Math::Polynomial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLPolynomial_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Polynomial) );
      instance.SetNew(&new_ROOTcLcLMathcLcLPolynomial);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLPolynomial);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLPolynomial);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLPolynomial);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLPolynomial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Polynomial*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Polynomial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Polynomial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLPolynomial_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Polynomial*)0x0)->GetClass();
      ROOTcLcLMathcLcLPolynomial_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLPolynomial_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDerivator_Dictionary();
   static void ROOTcLcLMathcLcLDerivator_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDerivator(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDerivator(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDerivator(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDerivator(void *p);
   static void destruct_ROOTcLcLMathcLcLDerivator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Derivator*)
   {
      ::ROOT::Math::Derivator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Derivator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Derivator", "Math/Derivator.h", 61,
                  typeid(::ROOT::Math::Derivator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDerivator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Derivator) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDerivator);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDerivator);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDerivator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDerivator);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDerivator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Derivator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Derivator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Derivator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDerivator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Derivator*)0x0)->GetClass();
      ROOTcLcLMathcLcLDerivator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDerivator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLInterpolator_Dictionary();
   static void ROOTcLcLMathcLcLInterpolator_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLInterpolator(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLInterpolator(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLInterpolator(void *p);
   static void deleteArray_ROOTcLcLMathcLcLInterpolator(void *p);
   static void destruct_ROOTcLcLMathcLcLInterpolator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Interpolator*)
   {
      ::ROOT::Math::Interpolator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Interpolator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Interpolator", "Math/Interpolator.h", 66,
                  typeid(::ROOT::Math::Interpolator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLInterpolator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Interpolator) );
      instance.SetNew(&new_ROOTcLcLMathcLcLInterpolator);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLInterpolator);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLInterpolator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLInterpolator);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLInterpolator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Interpolator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Interpolator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Interpolator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLInterpolator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Interpolator*)0x0)->GetClass();
      ROOTcLcLMathcLcLInterpolator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLInterpolator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRootFinder_Dictionary();
   static void ROOTcLcLMathcLcLGSLRootFinder_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRootFinder(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRootFinder(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRootFinder(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRootFinder(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRootFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRootFinder*)
   {
      ::ROOT::Math::GSLRootFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRootFinder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRootFinder", "Math/GSLRootFinder.h", 73,
                  typeid(::ROOT::Math::GSLRootFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRootFinder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRootFinder) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRootFinder);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRootFinder);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRootFinder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRootFinder);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRootFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRootFinder*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRootFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRootFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRootFinder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRootFinder*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRootFinder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRootFinder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRootFinderDeriv_Dictionary();
   static void ROOTcLcLMathcLcLGSLRootFinderDeriv_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRootFinderDeriv(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRootFinderDeriv(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRootFinderDeriv(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRootFinderDeriv(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRootFinderDeriv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRootFinderDeriv*)
   {
      ::ROOT::Math::GSLRootFinderDeriv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRootFinderDeriv));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRootFinderDeriv", "Math/GSLRootFinderDeriv.h", 74,
                  typeid(::ROOT::Math::GSLRootFinderDeriv), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRootFinderDeriv_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRootFinderDeriv) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRootFinderDeriv);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRootFinderDeriv);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRootFinderDeriv);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRootFinderDeriv);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRootFinderDeriv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRootFinderDeriv*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRootFinderDeriv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRootFinderDeriv*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRootFinderDeriv_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRootFinderDeriv*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRootFinderDeriv_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRootFinderDeriv_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRootscLcLBisection_Dictionary();
   static void ROOTcLcLMathcLcLRootscLcLBisection_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRootscLcLBisection(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRootscLcLBisection(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRootscLcLBisection(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLBisection(void *p);
   static void destruct_ROOTcLcLMathcLcLRootscLcLBisection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Roots::Bisection*)
   {
      ::ROOT::Math::Roots::Bisection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Roots::Bisection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Roots::Bisection", "Math/RootFinderAlgorithms.h", 57,
                  typeid(::ROOT::Math::Roots::Bisection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRootscLcLBisection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Roots::Bisection) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRootscLcLBisection);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRootscLcLBisection);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRootscLcLBisection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRootscLcLBisection);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRootscLcLBisection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Roots::Bisection*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Roots::Bisection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Bisection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRootscLcLBisection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Bisection*)0x0)->GetClass();
      ROOTcLcLMathcLcLRootscLcLBisection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRootscLcLBisection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRootscLcLFalsePos_Dictionary();
   static void ROOTcLcLMathcLcLRootscLcLFalsePos_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRootscLcLFalsePos(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRootscLcLFalsePos(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRootscLcLFalsePos(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLFalsePos(void *p);
   static void destruct_ROOTcLcLMathcLcLRootscLcLFalsePos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Roots::FalsePos*)
   {
      ::ROOT::Math::Roots::FalsePos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Roots::FalsePos));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Roots::FalsePos", "Math/RootFinderAlgorithms.h", 79,
                  typeid(::ROOT::Math::Roots::FalsePos), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRootscLcLFalsePos_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Roots::FalsePos) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRootscLcLFalsePos);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRootscLcLFalsePos);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRootscLcLFalsePos);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRootscLcLFalsePos);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRootscLcLFalsePos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Roots::FalsePos*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Roots::FalsePos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Roots::FalsePos*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRootscLcLFalsePos_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Roots::FalsePos*)0x0)->GetClass();
      ROOTcLcLMathcLcLRootscLcLFalsePos_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRootscLcLFalsePos_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRootscLcLBrent_Dictionary();
   static void ROOTcLcLMathcLcLRootscLcLBrent_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRootscLcLBrent(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRootscLcLBrent(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRootscLcLBrent(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLBrent(void *p);
   static void destruct_ROOTcLcLMathcLcLRootscLcLBrent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Roots::Brent*)
   {
      ::ROOT::Math::Roots::Brent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Roots::Brent));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Roots::Brent", "Math/RootFinderAlgorithms.h", 104,
                  typeid(::ROOT::Math::Roots::Brent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRootscLcLBrent_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Roots::Brent) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRootscLcLBrent);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRootscLcLBrent);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRootscLcLBrent);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRootscLcLBrent);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRootscLcLBrent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Roots::Brent*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Roots::Brent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Brent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRootscLcLBrent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Brent*)0x0)->GetClass();
      ROOTcLcLMathcLcLRootscLcLBrent_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRootscLcLBrent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRootscLcLNewton_Dictionary();
   static void ROOTcLcLMathcLcLRootscLcLNewton_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRootscLcLNewton(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRootscLcLNewton(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRootscLcLNewton(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLNewton(void *p);
   static void destruct_ROOTcLcLMathcLcLRootscLcLNewton(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Roots::Newton*)
   {
      ::ROOT::Math::Roots::Newton *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Roots::Newton));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Roots::Newton", "Math/RootFinderAlgorithms.h", 132,
                  typeid(::ROOT::Math::Roots::Newton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRootscLcLNewton_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Roots::Newton) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRootscLcLNewton);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRootscLcLNewton);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRootscLcLNewton);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRootscLcLNewton);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRootscLcLNewton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Roots::Newton*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Roots::Newton*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Newton*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRootscLcLNewton_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Newton*)0x0)->GetClass();
      ROOTcLcLMathcLcLRootscLcLNewton_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRootscLcLNewton_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRootscLcLSecant_Dictionary();
   static void ROOTcLcLMathcLcLRootscLcLSecant_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRootscLcLSecant(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRootscLcLSecant(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRootscLcLSecant(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLSecant(void *p);
   static void destruct_ROOTcLcLMathcLcLRootscLcLSecant(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Roots::Secant*)
   {
      ::ROOT::Math::Roots::Secant *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Roots::Secant));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Roots::Secant", "Math/RootFinderAlgorithms.h", 155,
                  typeid(::ROOT::Math::Roots::Secant), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRootscLcLSecant_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Roots::Secant) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRootscLcLSecant);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRootscLcLSecant);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRootscLcLSecant);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRootscLcLSecant);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRootscLcLSecant);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Roots::Secant*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Roots::Secant*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Secant*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRootscLcLSecant_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Secant*)0x0)->GetClass();
      ROOTcLcLMathcLcLRootscLcLSecant_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRootscLcLSecant_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRootscLcLSteffenson_Dictionary();
   static void ROOTcLcLMathcLcLRootscLcLSteffenson_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRootscLcLSteffenson(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRootscLcLSteffenson(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRootscLcLSteffenson(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLSteffenson(void *p);
   static void destruct_ROOTcLcLMathcLcLRootscLcLSteffenson(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Roots::Steffenson*)
   {
      ::ROOT::Math::Roots::Steffenson *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Roots::Steffenson));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Roots::Steffenson", "Math/RootFinderAlgorithms.h", 178,
                  typeid(::ROOT::Math::Roots::Steffenson), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRootscLcLSteffenson_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Roots::Steffenson) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRootscLcLSteffenson);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRootscLcLSteffenson);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRootscLcLSteffenson);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRootscLcLSteffenson);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRootscLcLSteffenson);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Roots::Steffenson*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Roots::Steffenson*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Steffenson*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRootscLcLSteffenson_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Roots::Steffenson*)0x0)->GetClass();
      ROOTcLcLMathcLcLRootscLcLSteffenson_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRootscLcLSteffenson_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLIntegrator_Dictionary();
   static void ROOTcLcLMathcLcLGSLIntegrator_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLIntegrator(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLIntegrator(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLIntegrator(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLIntegrator(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLIntegrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLIntegrator*)
   {
      ::ROOT::Math::GSLIntegrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLIntegrator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLIntegrator", "Math/GSLIntegrator.h", 90,
                  typeid(::ROOT::Math::GSLIntegrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLIntegrator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLIntegrator) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLIntegrator);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLIntegrator);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLIntegrator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLIntegrator);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLIntegrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLIntegrator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLIntegrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLIntegrator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLIntegrator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLIntegrator*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLIntegrator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLIntegrator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVegasParameters_Dictionary();
   static void ROOTcLcLMathcLcLVegasParameters_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLVegasParameters(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLVegasParameters(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLVegasParameters(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVegasParameters(void *p);
   static void destruct_ROOTcLcLMathcLcLVegasParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::VegasParameters*)
   {
      ::ROOT::Math::VegasParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::VegasParameters));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::VegasParameters", "Math/MCParameters.h", 45,
                  typeid(::ROOT::Math::VegasParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVegasParameters_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::VegasParameters) );
      instance.SetNew(&new_ROOTcLcLMathcLcLVegasParameters);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLVegasParameters);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVegasParameters);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVegasParameters);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVegasParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::VegasParameters*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::VegasParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::VegasParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVegasParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::VegasParameters*)0x0)->GetClass();
      ROOTcLcLMathcLcLVegasParameters_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVegasParameters_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMiserParameters_Dictionary();
   static void ROOTcLcLMathcLcLMiserParameters_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMiserParameters(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMiserParameters(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMiserParameters(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMiserParameters(void *p);
   static void destruct_ROOTcLcLMathcLcLMiserParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MiserParameters*)
   {
      ::ROOT::Math::MiserParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MiserParameters));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MiserParameters", "Math/MCParameters.h", 76,
                  typeid(::ROOT::Math::MiserParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMiserParameters_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MiserParameters) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMiserParameters);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMiserParameters);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMiserParameters);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMiserParameters);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMiserParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MiserParameters*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MiserParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MiserParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMiserParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MiserParameters*)0x0)->GetClass();
      ROOTcLcLMathcLcLMiserParameters_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMiserParameters_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLMCIntegrator_Dictionary();
   static void ROOTcLcLMathcLcLGSLMCIntegrator_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLMCIntegrator(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLMCIntegrator(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLMCIntegrator(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLMCIntegrator(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLMCIntegrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLMCIntegrator*)
   {
      ::ROOT::Math::GSLMCIntegrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLMCIntegrator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLMCIntegrator", "Math/GSLMCIntegrator.h", 78,
                  typeid(::ROOT::Math::GSLMCIntegrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLMCIntegrator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLMCIntegrator) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLMCIntegrator);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLMCIntegrator);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLMCIntegrator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLMCIntegrator);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLMCIntegrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLMCIntegrator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLMCIntegrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLMCIntegrator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLMCIntegrator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLMCIntegrator*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLMCIntegrator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLMCIntegrator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLMinimizer1D_Dictionary();
   static void ROOTcLcLMathcLcLGSLMinimizer1D_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLMinimizer1D(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLMinimizer1D(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLMinimizer1D(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLMinimizer1D(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLMinimizer1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLMinimizer1D*)
   {
      ::ROOT::Math::GSLMinimizer1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLMinimizer1D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLMinimizer1D", "Math/GSLMinimizer1D.h", 81,
                  typeid(::ROOT::Math::GSLMinimizer1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLMinimizer1D_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLMinimizer1D) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLMinimizer1D);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLMinimizer1D);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLMinimizer1D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLMinimizer1D);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLMinimizer1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLMinimizer1D*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLMinimizer1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLMinimizer1D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLMinimizer1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLMinimizer1D*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLMinimizer1D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLMinimizer1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLChebyshevApprox_Dictionary();
   static void ROOTcLcLMathcLcLChebyshevApprox_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLChebyshevApprox(void *p);
   static void deleteArray_ROOTcLcLMathcLcLChebyshevApprox(void *p);
   static void destruct_ROOTcLcLMathcLcLChebyshevApprox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::ChebyshevApprox*)
   {
      ::ROOT::Math::ChebyshevApprox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::ChebyshevApprox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::ChebyshevApprox", "Math/ChebyshevApprox.h", 71,
                  typeid(::ROOT::Math::ChebyshevApprox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLChebyshevApprox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::ChebyshevApprox) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLChebyshevApprox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLChebyshevApprox);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLChebyshevApprox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::ChebyshevApprox*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::ChebyshevApprox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::ChebyshevApprox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLChebyshevApprox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::ChebyshevApprox*)0x0)->GetClass();
      ROOTcLcLMathcLcLChebyshevApprox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLChebyshevApprox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRandomEngine_Dictionary();
   static void ROOTcLcLMathcLcLGSLRandomEngine_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRandomEngine(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRandomEngine(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRandomEngine(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRandomEngine(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRandomEngine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRandomEngine*)
   {
      ::ROOT::Math::GSLRandomEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRandomEngine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRandomEngine", "Math/GSLRndmEngines.h", 65,
                  typeid(::ROOT::Math::GSLRandomEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRandomEngine_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRandomEngine) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRandomEngine);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRandomEngine);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRandomEngine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRandomEngine);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRandomEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRandomEngine*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRandomEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRandomEngine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRandomEngine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRandomEngine*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRandomEngine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRandomEngine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRngMT_Dictionary();
   static void ROOTcLcLMathcLcLGSLRngMT_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRngMT(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRngMT(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRngMT(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRngMT(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRngMT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRngMT*)
   {
      ::ROOT::Math::GSLRngMT *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRngMT));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRngMT", "Math/GSLRndmEngines.h", 336,
                  typeid(::ROOT::Math::GSLRngMT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRngMT_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRngMT) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRngMT);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRngMT);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRngMT);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRngMT);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRngMT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRngMT*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRngMT*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngMT*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRngMT_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngMT*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRngMT_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRngMT_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRngRanLux_Dictionary();
   static void ROOTcLcLMathcLcLGSLRngRanLux_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRngRanLux(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLux(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRngRanLux(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLux(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRngRanLux*)
   {
      ::ROOT::Math::GSLRngRanLux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRngRanLux));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRngRanLux", "Math/GSLRndmEngines.h", 350,
                  typeid(::ROOT::Math::GSLRngRanLux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRngRanLux_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRngRanLux) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRngRanLux);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRngRanLux);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRngRanLux);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRngRanLux);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRngRanLux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRngRanLux*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRngRanLux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLux*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRngRanLux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLux*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRngRanLux_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRngRanLux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRngRanLuxS1_Dictionary();
   static void ROOTcLcLMathcLcLGSLRngRanLuxS1_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRngRanLuxS1(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLuxS1(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRngRanLuxS1(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxS1(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLuxS1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRngRanLuxS1*)
   {
      ::ROOT::Math::GSLRngRanLuxS1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRngRanLuxS1));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRngRanLuxS1", "Math/GSLRndmEngines.h", 364,
                  typeid(::ROOT::Math::GSLRngRanLuxS1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRngRanLuxS1_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRngRanLuxS1) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRngRanLuxS1);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRngRanLuxS1);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRngRanLuxS1);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxS1);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRngRanLuxS1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRngRanLuxS1*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRngRanLuxS1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLuxS1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRngRanLuxS1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLuxS1*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRngRanLuxS1_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRngRanLuxS1_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRngRanLuxS2_Dictionary();
   static void ROOTcLcLMathcLcLGSLRngRanLuxS2_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRngRanLuxS2(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLuxS2(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRngRanLuxS2(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxS2(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLuxS2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRngRanLuxS2*)
   {
      ::ROOT::Math::GSLRngRanLuxS2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRngRanLuxS2));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRngRanLuxS2", "Math/GSLRndmEngines.h", 379,
                  typeid(::ROOT::Math::GSLRngRanLuxS2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRngRanLuxS2_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRngRanLuxS2) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRngRanLuxS2);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRngRanLuxS2);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRngRanLuxS2);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxS2);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRngRanLuxS2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRngRanLuxS2*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRngRanLuxS2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLuxS2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRngRanLuxS2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLuxS2*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRngRanLuxS2_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRngRanLuxS2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRngRanLuxD1_Dictionary();
   static void ROOTcLcLMathcLcLGSLRngRanLuxD1_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRngRanLuxD1(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLuxD1(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRngRanLuxD1(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxD1(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLuxD1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRngRanLuxD1*)
   {
      ::ROOT::Math::GSLRngRanLuxD1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRngRanLuxD1));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRngRanLuxD1", "Math/GSLRndmEngines.h", 394,
                  typeid(::ROOT::Math::GSLRngRanLuxD1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRngRanLuxD1_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRngRanLuxD1) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRngRanLuxD1);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRngRanLuxD1);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRngRanLuxD1);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxD1);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRngRanLuxD1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRngRanLuxD1*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRngRanLuxD1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLuxD1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRngRanLuxD1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLuxD1*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRngRanLuxD1_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRngRanLuxD1_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRngRanLuxD2_Dictionary();
   static void ROOTcLcLMathcLcLGSLRngRanLuxD2_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRngRanLuxD2(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLuxD2(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRngRanLuxD2(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxD2(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLuxD2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRngRanLuxD2*)
   {
      ::ROOT::Math::GSLRngRanLuxD2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRngRanLuxD2));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRngRanLuxD2", "Math/GSLRndmEngines.h", 408,
                  typeid(::ROOT::Math::GSLRngRanLuxD2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRngRanLuxD2_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRngRanLuxD2) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRngRanLuxD2);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRngRanLuxD2);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRngRanLuxD2);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxD2);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRngRanLuxD2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRngRanLuxD2*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRngRanLuxD2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLuxD2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRngRanLuxD2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngRanLuxD2*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRngRanLuxD2_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRngRanLuxD2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRngTaus_Dictionary();
   static void ROOTcLcLMathcLcLGSLRngTaus_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRngTaus(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRngTaus(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRngTaus(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRngTaus(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRngTaus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRngTaus*)
   {
      ::ROOT::Math::GSLRngTaus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRngTaus));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRngTaus", "Math/GSLRndmEngines.h", 423,
                  typeid(::ROOT::Math::GSLRngTaus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRngTaus_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRngTaus) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRngTaus);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRngTaus);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRngTaus);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRngTaus);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRngTaus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRngTaus*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRngTaus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngTaus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRngTaus_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngTaus*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRngTaus_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRngTaus_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLRngGFSR4_Dictionary();
   static void ROOTcLcLMathcLcLGSLRngGFSR4_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLRngGFSR4(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLRngGFSR4(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLRngGFSR4(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLRngGFSR4(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLRngGFSR4(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLRngGFSR4*)
   {
      ::ROOT::Math::GSLRngGFSR4 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLRngGFSR4));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLRngGFSR4", "Math/GSLRndmEngines.h", 436,
                  typeid(::ROOT::Math::GSLRngGFSR4), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLRngGFSR4_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLRngGFSR4) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLRngGFSR4);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLRngGFSR4);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLRngGFSR4);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLRngGFSR4);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLRngGFSR4);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLRngGFSR4*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLRngGFSR4*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngGFSR4*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLRngGFSR4_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLRngGFSR4*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLRngGFSR4_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLRngGFSR4_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR_Dictionary();
   static void ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(void *p);
   static void destruct_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>*)
   {
      ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>", "Math/QuasiRandom.h", 60,
                  typeid(::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>*)0x0)->GetClass();
      ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR_Dictionary();
   static void ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>*)
   {
      ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>", "Math/QuasiRandom.h", 60,
                  typeid(::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLQRngSobol_Dictionary();
   static void ROOTcLcLMathcLcLGSLQRngSobol_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLQRngSobol(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLQRngSobol(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLQRngSobol(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLQRngSobol(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLQRngSobol(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLQRngSobol*)
   {
      ::ROOT::Math::GSLQRngSobol *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLQRngSobol));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLQRngSobol", "Math/GSLQuasiRandom.h", 156,
                  typeid(::ROOT::Math::GSLQRngSobol), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLQRngSobol_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLQRngSobol) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLQRngSobol);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLQRngSobol);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLQRngSobol);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLQRngSobol);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLQRngSobol);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLQRngSobol*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLQRngSobol*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLQRngSobol*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLQRngSobol_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLQRngSobol*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLQRngSobol_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLQRngSobol_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLQRngNiederreiter2_Dictionary();
   static void ROOTcLcLMathcLcLGSLQRngNiederreiter2_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLQRngNiederreiter2(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLQRngNiederreiter2(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLQRngNiederreiter2(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLQRngNiederreiter2(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLQRngNiederreiter2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLQRngNiederreiter2*)
   {
      ::ROOT::Math::GSLQRngNiederreiter2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLQRngNiederreiter2));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLQRngNiederreiter2", "Math/GSLQuasiRandom.h", 169,
                  typeid(::ROOT::Math::GSLQRngNiederreiter2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLQRngNiederreiter2_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLQRngNiederreiter2) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLQRngNiederreiter2);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLQRngNiederreiter2);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLQRngNiederreiter2);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLQRngNiederreiter2);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLQRngNiederreiter2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLQRngNiederreiter2*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLQRngNiederreiter2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLQRngNiederreiter2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLQRngNiederreiter2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLQRngNiederreiter2*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLQRngNiederreiter2_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLQRngNiederreiter2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLKelvinFunctions_Dictionary();
   static void ROOTcLcLMathcLcLKelvinFunctions_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLKelvinFunctions(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLKelvinFunctions(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLKelvinFunctions(void *p);
   static void deleteArray_ROOTcLcLMathcLcLKelvinFunctions(void *p);
   static void destruct_ROOTcLcLMathcLcLKelvinFunctions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::KelvinFunctions*)
   {
      ::ROOT::Math::KelvinFunctions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::KelvinFunctions));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::KelvinFunctions", "Math/KelvinFunctions.h", 38,
                  typeid(::ROOT::Math::KelvinFunctions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLKelvinFunctions_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::KelvinFunctions) );
      instance.SetNew(&new_ROOTcLcLMathcLcLKelvinFunctions);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLKelvinFunctions);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLKelvinFunctions);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLKelvinFunctions);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLKelvinFunctions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::KelvinFunctions*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::KelvinFunctions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::KelvinFunctions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLKelvinFunctions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::KelvinFunctions*)0x0)->GetClass();
      ROOTcLcLMathcLcLKelvinFunctions_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLKelvinFunctions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::GSLRngMT>*)
   {
      ::ROOT::Math::Random<ROOT::Math::GSLRngMT> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::GSLRngMT>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::GSLRngMT>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::GSLRngMT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::GSLRngMT>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::GSLRngMT>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::GSLRngMT>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngMT>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngMT>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::GSLRngTaus>*)
   {
      ::ROOT::Math::Random<ROOT::Math::GSLRngTaus> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::GSLRngTaus>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::GSLRngTaus>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::GSLRngTaus>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::GSLRngTaus>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::GSLRngTaus>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::GSLRngTaus>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngTaus>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngTaus>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>*)
   {
      ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::GSLRngRanLux>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>*)
   {
      ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>*)
   {
      ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>*)
   {
      ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>*)
   {
      ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>*)
   {
      ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLMinimizer_Dictionary();
   static void ROOTcLcLMathcLcLGSLMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLMinimizer(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLMinimizer(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLMinimizer*)
   {
      ::ROOT::Math::GSLMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLMinimizer", "Math/GSLMinimizer.h", 86,
                  typeid(::ROOT::Math::GSLMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLMinimizer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLMinimizer) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLMinimizer*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLSResidualFunc_Dictionary();
   static void ROOTcLcLMathcLcLLSResidualFunc_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLSResidualFunc(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLSResidualFunc(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLSResidualFunc(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLSResidualFunc(void *p);
   static void destruct_ROOTcLcLMathcLcLLSResidualFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LSResidualFunc*)
   {
      ::ROOT::Math::LSResidualFunc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LSResidualFunc));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LSResidualFunc", "Math/GSLNLSMinimizer.h", 67,
                  typeid(::ROOT::Math::LSResidualFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLSResidualFunc_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Math::LSResidualFunc) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLSResidualFunc);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLSResidualFunc);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLSResidualFunc);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLSResidualFunc);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLSResidualFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LSResidualFunc*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LSResidualFunc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LSResidualFunc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLSResidualFunc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LSResidualFunc*)0x0)->GetClass();
      ROOTcLcLMathcLcLLSResidualFunc_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLSResidualFunc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLNLSMinimizer_Dictionary();
   static void ROOTcLcLMathcLcLGSLNLSMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLNLSMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLNLSMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLNLSMinimizer(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLNLSMinimizer(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLNLSMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLNLSMinimizer*)
   {
      ::ROOT::Math::GSLNLSMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLNLSMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLNLSMinimizer", "Math/GSLNLSMinimizer.h", 152,
                  typeid(::ROOT::Math::GSLNLSMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLNLSMinimizer_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Math::GSLNLSMinimizer) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLNLSMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLNLSMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLNLSMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLNLSMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLNLSMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLNLSMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLNLSMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLNLSMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLNLSMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLNLSMinimizer*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLNLSMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLNLSMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLSimAnFunc_Dictionary();
   static void ROOTcLcLMathcLcLGSLSimAnFunc_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLGSLSimAnFunc(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLSimAnFunc(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLSimAnFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLSimAnFunc*)
   {
      ::ROOT::Math::GSLSimAnFunc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLSimAnFunc));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLSimAnFunc", "Math/GSLSimAnnealing.h", 50,
                  typeid(::ROOT::Math::GSLSimAnFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLSimAnFunc_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLSimAnFunc) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLSimAnFunc);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLSimAnFunc);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLSimAnFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLSimAnFunc*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLSimAnFunc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLSimAnFunc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLSimAnFunc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLSimAnFunc*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLSimAnFunc_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLSimAnFunc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLSimAnParams_Dictionary();
   static void ROOTcLcLMathcLcLGSLSimAnParams_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLSimAnParams(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLSimAnParams(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLSimAnParams(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLSimAnParams(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLSimAnParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLSimAnParams*)
   {
      ::ROOT::Math::GSLSimAnParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLSimAnParams));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLSimAnParams", "Math/GSLSimAnnealing.h", 161,
                  typeid(::ROOT::Math::GSLSimAnParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLSimAnParams_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLSimAnParams) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLSimAnParams);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLSimAnParams);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLSimAnParams);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLSimAnParams);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLSimAnParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLSimAnParams*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLSimAnParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLSimAnParams*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLSimAnParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLSimAnParams*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLSimAnParams_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLSimAnParams_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLSimAnnealing_Dictionary();
   static void ROOTcLcLMathcLcLGSLSimAnnealing_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLSimAnnealing(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLSimAnnealing(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLSimAnnealing(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLSimAnnealing(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLSimAnnealing(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLSimAnnealing*)
   {
      ::ROOT::Math::GSLSimAnnealing *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLSimAnnealing));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLSimAnnealing", "Math/GSLSimAnnealing.h", 193,
                  typeid(::ROOT::Math::GSLSimAnnealing), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLSimAnnealing_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLSimAnnealing) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLSimAnnealing);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLSimAnnealing);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLSimAnnealing);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLSimAnnealing);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLSimAnnealing);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLSimAnnealing*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLSimAnnealing*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLSimAnnealing*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLSimAnnealing_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLSimAnnealing*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLSimAnnealing_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLSimAnnealing_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLSimAnMinimizer_Dictionary();
   static void ROOTcLcLMathcLcLGSLSimAnMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLSimAnMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLSimAnMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLSimAnMinimizer(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLSimAnMinimizer(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLSimAnMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLSimAnMinimizer*)
   {
      ::ROOT::Math::GSLSimAnMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLSimAnMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLSimAnMinimizer", "Math/GSLSimAnMinimizer.h", 63,
                  typeid(::ROOT::Math::GSLSimAnMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLSimAnMinimizer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLSimAnMinimizer) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLSimAnMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLSimAnMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLSimAnMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLSimAnMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLSimAnMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLSimAnMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLSimAnMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLSimAnMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLSimAnMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLSimAnMinimizer*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLSimAnMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLSimAnMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGSLMultiRootFinder_Dictionary();
   static void ROOTcLcLMathcLcLGSLMultiRootFinder_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGSLMultiRootFinder(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGSLMultiRootFinder(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGSLMultiRootFinder(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGSLMultiRootFinder(void *p);
   static void destruct_ROOTcLcLMathcLcLGSLMultiRootFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GSLMultiRootFinder*)
   {
      ::ROOT::Math::GSLMultiRootFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GSLMultiRootFinder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GSLMultiRootFinder", "Math/GSLMultiRootFinder.h", 95,
                  typeid(::ROOT::Math::GSLMultiRootFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGSLMultiRootFinder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GSLMultiRootFinder) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGSLMultiRootFinder);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGSLMultiRootFinder);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGSLMultiRootFinder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGSLMultiRootFinder);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGSLMultiRootFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GSLMultiRootFinder*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GSLMultiRootFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GSLMultiRootFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGSLMultiRootFinder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GSLMultiRootFinder*)0x0)->GetClass();
      ROOTcLcLMathcLcLGSLMultiRootFinder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGSLMultiRootFinder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVavilov_Dictionary();
   static void ROOTcLcLMathcLcLVavilov_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLVavilov(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVavilov(void *p);
   static void destruct_ROOTcLcLMathcLcLVavilov(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Vavilov*)
   {
      ::ROOT::Math::Vavilov *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Vavilov));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Vavilov", "Math/Vavilov.h", 120,
                  typeid(::ROOT::Math::Vavilov), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVavilov_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Vavilov) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVavilov);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVavilov);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVavilov);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Vavilov*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Vavilov*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Vavilov*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVavilov_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Vavilov*)0x0)->GetClass();
      ROOTcLcLMathcLcLVavilov_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVavilov_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVavilovAccurate_Dictionary();
   static void ROOTcLcLMathcLcLVavilovAccurate_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLVavilovAccurate(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLVavilovAccurate(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLVavilovAccurate(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVavilovAccurate(void *p);
   static void destruct_ROOTcLcLMathcLcLVavilovAccurate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::VavilovAccurate*)
   {
      ::ROOT::Math::VavilovAccurate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::VavilovAccurate));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::VavilovAccurate", "Math/VavilovAccurate.h", 131,
                  typeid(::ROOT::Math::VavilovAccurate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVavilovAccurate_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::VavilovAccurate) );
      instance.SetNew(&new_ROOTcLcLMathcLcLVavilovAccurate);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLVavilovAccurate);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVavilovAccurate);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVavilovAccurate);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVavilovAccurate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::VavilovAccurate*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::VavilovAccurate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::VavilovAccurate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVavilovAccurate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::VavilovAccurate*)0x0)->GetClass();
      ROOTcLcLMathcLcLVavilovAccurate_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVavilovAccurate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVavilovAccuratePdf_Dictionary();
   static void ROOTcLcLMathcLcLVavilovAccuratePdf_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLVavilovAccuratePdf(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLVavilovAccuratePdf(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLVavilovAccuratePdf(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVavilovAccuratePdf(void *p);
   static void destruct_ROOTcLcLMathcLcLVavilovAccuratePdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::VavilovAccuratePdf*)
   {
      ::ROOT::Math::VavilovAccuratePdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::VavilovAccuratePdf));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::VavilovAccuratePdf", "Math/VavilovAccuratePdf.h", 70,
                  typeid(::ROOT::Math::VavilovAccuratePdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVavilovAccuratePdf_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::VavilovAccuratePdf) );
      instance.SetNew(&new_ROOTcLcLMathcLcLVavilovAccuratePdf);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLVavilovAccuratePdf);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVavilovAccuratePdf);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVavilovAccuratePdf);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVavilovAccuratePdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::VavilovAccuratePdf*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::VavilovAccuratePdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::VavilovAccuratePdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVavilovAccuratePdf_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::VavilovAccuratePdf*)0x0)->GetClass();
      ROOTcLcLMathcLcLVavilovAccuratePdf_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVavilovAccuratePdf_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVavilovAccurateCdf_Dictionary();
   static void ROOTcLcLMathcLcLVavilovAccurateCdf_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLVavilovAccurateCdf(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLVavilovAccurateCdf(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLVavilovAccurateCdf(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVavilovAccurateCdf(void *p);
   static void destruct_ROOTcLcLMathcLcLVavilovAccurateCdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::VavilovAccurateCdf*)
   {
      ::ROOT::Math::VavilovAccurateCdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::VavilovAccurateCdf));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::VavilovAccurateCdf", "Math/VavilovAccurateCdf.h", 71,
                  typeid(::ROOT::Math::VavilovAccurateCdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVavilovAccurateCdf_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::VavilovAccurateCdf) );
      instance.SetNew(&new_ROOTcLcLMathcLcLVavilovAccurateCdf);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLVavilovAccurateCdf);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVavilovAccurateCdf);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVavilovAccurateCdf);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVavilovAccurateCdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::VavilovAccurateCdf*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::VavilovAccurateCdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::VavilovAccurateCdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVavilovAccurateCdf_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::VavilovAccurateCdf*)0x0)->GetClass();
      ROOTcLcLMathcLcLVavilovAccurateCdf_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVavilovAccurateCdf_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVavilovAccurateQuantile_Dictionary();
   static void ROOTcLcLMathcLcLVavilovAccurateQuantile_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLVavilovAccurateQuantile(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLVavilovAccurateQuantile(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLVavilovAccurateQuantile(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVavilovAccurateQuantile(void *p);
   static void destruct_ROOTcLcLMathcLcLVavilovAccurateQuantile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::VavilovAccurateQuantile*)
   {
      ::ROOT::Math::VavilovAccurateQuantile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::VavilovAccurateQuantile));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::VavilovAccurateQuantile", "Math/VavilovAccurateQuantile.h", 71,
                  typeid(::ROOT::Math::VavilovAccurateQuantile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVavilovAccurateQuantile_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::VavilovAccurateQuantile) );
      instance.SetNew(&new_ROOTcLcLMathcLcLVavilovAccurateQuantile);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLVavilovAccurateQuantile);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVavilovAccurateQuantile);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVavilovAccurateQuantile);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVavilovAccurateQuantile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::VavilovAccurateQuantile*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::VavilovAccurateQuantile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::VavilovAccurateQuantile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVavilovAccurateQuantile_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::VavilovAccurateQuantile*)0x0)->GetClass();
      ROOTcLcLMathcLcLVavilovAccurateQuantile_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVavilovAccurateQuantile_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVavilovFast_Dictionary();
   static void ROOTcLcLMathcLcLVavilovFast_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLVavilovFast(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLVavilovFast(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLVavilovFast(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVavilovFast(void *p);
   static void destruct_ROOTcLcLMathcLcLVavilovFast(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::VavilovFast*)
   {
      ::ROOT::Math::VavilovFast *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::VavilovFast));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::VavilovFast", "Math/VavilovFast.h", 116,
                  typeid(::ROOT::Math::VavilovFast), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVavilovFast_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::VavilovFast) );
      instance.SetNew(&new_ROOTcLcLMathcLcLVavilovFast);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLVavilovFast);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVavilovFast);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVavilovFast);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVavilovFast);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::VavilovFast*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::VavilovFast*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::VavilovFast*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVavilovFast_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::VavilovFast*)0x0)->GetClass();
      ROOTcLcLMathcLcLVavilovFast_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVavilovFast_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMathMoreLib(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MathMoreLib : new ::ROOT::Math::MathMoreLib;
   }
   static void *newArray_ROOTcLcLMathcLcLMathMoreLib(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MathMoreLib[nElements] : new ::ROOT::Math::MathMoreLib[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMathMoreLib(void *p) {
      delete ((::ROOT::Math::MathMoreLib*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMathMoreLib(void *p) {
      delete [] ((::ROOT::Math::MathMoreLib*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMathMoreLib(void *p) {
      typedef ::ROOT::Math::MathMoreLib current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MathMoreLib

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR(void *p) {
      delete ((::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR(void *p) {
      delete [] ((::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLParamFunctionlEROOTcLcLMathcLcLIParametricGradFunctionOneDimgR(void *p) {
      typedef ::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::ParamFunction<ROOT::Math::IParametricGradFunctionOneDim>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLPolynomial(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polynomial : new ::ROOT::Math::Polynomial;
   }
   static void *newArray_ROOTcLcLMathcLcLPolynomial(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Polynomial[nElements] : new ::ROOT::Math::Polynomial[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLPolynomial(void *p) {
      delete ((::ROOT::Math::Polynomial*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLPolynomial(void *p) {
      delete [] ((::ROOT::Math::Polynomial*)p);
   }
   static void destruct_ROOTcLcLMathcLcLPolynomial(void *p) {
      typedef ::ROOT::Math::Polynomial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Polynomial

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDerivator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Derivator : new ::ROOT::Math::Derivator;
   }
   static void *newArray_ROOTcLcLMathcLcLDerivator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Derivator[nElements] : new ::ROOT::Math::Derivator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDerivator(void *p) {
      delete ((::ROOT::Math::Derivator*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDerivator(void *p) {
      delete [] ((::ROOT::Math::Derivator*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDerivator(void *p) {
      typedef ::ROOT::Math::Derivator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Derivator

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLInterpolator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Interpolator : new ::ROOT::Math::Interpolator;
   }
   static void *newArray_ROOTcLcLMathcLcLInterpolator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Interpolator[nElements] : new ::ROOT::Math::Interpolator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLInterpolator(void *p) {
      delete ((::ROOT::Math::Interpolator*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLInterpolator(void *p) {
      delete [] ((::ROOT::Math::Interpolator*)p);
   }
   static void destruct_ROOTcLcLMathcLcLInterpolator(void *p) {
      typedef ::ROOT::Math::Interpolator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Interpolator

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRootFinder(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRootFinder : new ::ROOT::Math::GSLRootFinder;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRootFinder(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRootFinder[nElements] : new ::ROOT::Math::GSLRootFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRootFinder(void *p) {
      delete ((::ROOT::Math::GSLRootFinder*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRootFinder(void *p) {
      delete [] ((::ROOT::Math::GSLRootFinder*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRootFinder(void *p) {
      typedef ::ROOT::Math::GSLRootFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRootFinder

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRootFinderDeriv(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRootFinderDeriv : new ::ROOT::Math::GSLRootFinderDeriv;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRootFinderDeriv(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRootFinderDeriv[nElements] : new ::ROOT::Math::GSLRootFinderDeriv[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRootFinderDeriv(void *p) {
      delete ((::ROOT::Math::GSLRootFinderDeriv*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRootFinderDeriv(void *p) {
      delete [] ((::ROOT::Math::GSLRootFinderDeriv*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRootFinderDeriv(void *p) {
      typedef ::ROOT::Math::GSLRootFinderDeriv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRootFinderDeriv

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRootscLcLBisection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Bisection : new ::ROOT::Math::Roots::Bisection;
   }
   static void *newArray_ROOTcLcLMathcLcLRootscLcLBisection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Bisection[nElements] : new ::ROOT::Math::Roots::Bisection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRootscLcLBisection(void *p) {
      delete ((::ROOT::Math::Roots::Bisection*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLBisection(void *p) {
      delete [] ((::ROOT::Math::Roots::Bisection*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRootscLcLBisection(void *p) {
      typedef ::ROOT::Math::Roots::Bisection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Roots::Bisection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRootscLcLFalsePos(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::FalsePos : new ::ROOT::Math::Roots::FalsePos;
   }
   static void *newArray_ROOTcLcLMathcLcLRootscLcLFalsePos(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::FalsePos[nElements] : new ::ROOT::Math::Roots::FalsePos[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRootscLcLFalsePos(void *p) {
      delete ((::ROOT::Math::Roots::FalsePos*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLFalsePos(void *p) {
      delete [] ((::ROOT::Math::Roots::FalsePos*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRootscLcLFalsePos(void *p) {
      typedef ::ROOT::Math::Roots::FalsePos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Roots::FalsePos

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRootscLcLBrent(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Brent : new ::ROOT::Math::Roots::Brent;
   }
   static void *newArray_ROOTcLcLMathcLcLRootscLcLBrent(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Brent[nElements] : new ::ROOT::Math::Roots::Brent[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRootscLcLBrent(void *p) {
      delete ((::ROOT::Math::Roots::Brent*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLBrent(void *p) {
      delete [] ((::ROOT::Math::Roots::Brent*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRootscLcLBrent(void *p) {
      typedef ::ROOT::Math::Roots::Brent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Roots::Brent

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRootscLcLNewton(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Newton : new ::ROOT::Math::Roots::Newton;
   }
   static void *newArray_ROOTcLcLMathcLcLRootscLcLNewton(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Newton[nElements] : new ::ROOT::Math::Roots::Newton[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRootscLcLNewton(void *p) {
      delete ((::ROOT::Math::Roots::Newton*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLNewton(void *p) {
      delete [] ((::ROOT::Math::Roots::Newton*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRootscLcLNewton(void *p) {
      typedef ::ROOT::Math::Roots::Newton current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Roots::Newton

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRootscLcLSecant(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Secant : new ::ROOT::Math::Roots::Secant;
   }
   static void *newArray_ROOTcLcLMathcLcLRootscLcLSecant(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Secant[nElements] : new ::ROOT::Math::Roots::Secant[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRootscLcLSecant(void *p) {
      delete ((::ROOT::Math::Roots::Secant*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLSecant(void *p) {
      delete [] ((::ROOT::Math::Roots::Secant*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRootscLcLSecant(void *p) {
      typedef ::ROOT::Math::Roots::Secant current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Roots::Secant

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRootscLcLSteffenson(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Steffenson : new ::ROOT::Math::Roots::Steffenson;
   }
   static void *newArray_ROOTcLcLMathcLcLRootscLcLSteffenson(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Roots::Steffenson[nElements] : new ::ROOT::Math::Roots::Steffenson[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRootscLcLSteffenson(void *p) {
      delete ((::ROOT::Math::Roots::Steffenson*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRootscLcLSteffenson(void *p) {
      delete [] ((::ROOT::Math::Roots::Steffenson*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRootscLcLSteffenson(void *p) {
      typedef ::ROOT::Math::Roots::Steffenson current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Roots::Steffenson

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLIntegrator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLIntegrator : new ::ROOT::Math::GSLIntegrator;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLIntegrator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLIntegrator[nElements] : new ::ROOT::Math::GSLIntegrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLIntegrator(void *p) {
      delete ((::ROOT::Math::GSLIntegrator*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLIntegrator(void *p) {
      delete [] ((::ROOT::Math::GSLIntegrator*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLIntegrator(void *p) {
      typedef ::ROOT::Math::GSLIntegrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLIntegrator

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLVegasParameters(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VegasParameters : new ::ROOT::Math::VegasParameters;
   }
   static void *newArray_ROOTcLcLMathcLcLVegasParameters(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VegasParameters[nElements] : new ::ROOT::Math::VegasParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVegasParameters(void *p) {
      delete ((::ROOT::Math::VegasParameters*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVegasParameters(void *p) {
      delete [] ((::ROOT::Math::VegasParameters*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVegasParameters(void *p) {
      typedef ::ROOT::Math::VegasParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::VegasParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMiserParameters(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MiserParameters : new ::ROOT::Math::MiserParameters;
   }
   static void *newArray_ROOTcLcLMathcLcLMiserParameters(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MiserParameters[nElements] : new ::ROOT::Math::MiserParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMiserParameters(void *p) {
      delete ((::ROOT::Math::MiserParameters*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMiserParameters(void *p) {
      delete [] ((::ROOT::Math::MiserParameters*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMiserParameters(void *p) {
      typedef ::ROOT::Math::MiserParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MiserParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLMCIntegrator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLMCIntegrator : new ::ROOT::Math::GSLMCIntegrator;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLMCIntegrator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLMCIntegrator[nElements] : new ::ROOT::Math::GSLMCIntegrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLMCIntegrator(void *p) {
      delete ((::ROOT::Math::GSLMCIntegrator*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLMCIntegrator(void *p) {
      delete [] ((::ROOT::Math::GSLMCIntegrator*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLMCIntegrator(void *p) {
      typedef ::ROOT::Math::GSLMCIntegrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLMCIntegrator

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLMinimizer1D(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLMinimizer1D : new ::ROOT::Math::GSLMinimizer1D;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLMinimizer1D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLMinimizer1D[nElements] : new ::ROOT::Math::GSLMinimizer1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLMinimizer1D(void *p) {
      delete ((::ROOT::Math::GSLMinimizer1D*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLMinimizer1D(void *p) {
      delete [] ((::ROOT::Math::GSLMinimizer1D*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLMinimizer1D(void *p) {
      typedef ::ROOT::Math::GSLMinimizer1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLMinimizer1D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLChebyshevApprox(void *p) {
      delete ((::ROOT::Math::ChebyshevApprox*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLChebyshevApprox(void *p) {
      delete [] ((::ROOT::Math::ChebyshevApprox*)p);
   }
   static void destruct_ROOTcLcLMathcLcLChebyshevApprox(void *p) {
      typedef ::ROOT::Math::ChebyshevApprox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::ChebyshevApprox

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRandomEngine(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRandomEngine : new ::ROOT::Math::GSLRandomEngine;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRandomEngine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRandomEngine[nElements] : new ::ROOT::Math::GSLRandomEngine[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRandomEngine(void *p) {
      delete ((::ROOT::Math::GSLRandomEngine*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRandomEngine(void *p) {
      delete [] ((::ROOT::Math::GSLRandomEngine*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRandomEngine(void *p) {
      typedef ::ROOT::Math::GSLRandomEngine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRandomEngine

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRngMT(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngMT : new ::ROOT::Math::GSLRngMT;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRngMT(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngMT[nElements] : new ::ROOT::Math::GSLRngMT[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRngMT(void *p) {
      delete ((::ROOT::Math::GSLRngMT*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRngMT(void *p) {
      delete [] ((::ROOT::Math::GSLRngMT*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRngMT(void *p) {
      typedef ::ROOT::Math::GSLRngMT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRngMT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRngRanLux(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLux : new ::ROOT::Math::GSLRngRanLux;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLux[nElements] : new ::ROOT::Math::GSLRngRanLux[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRngRanLux(void *p) {
      delete ((::ROOT::Math::GSLRngRanLux*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLux(void *p) {
      delete [] ((::ROOT::Math::GSLRngRanLux*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLux(void *p) {
      typedef ::ROOT::Math::GSLRngRanLux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRngRanLux

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRngRanLuxS1(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLuxS1 : new ::ROOT::Math::GSLRngRanLuxS1;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLuxS1(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLuxS1[nElements] : new ::ROOT::Math::GSLRngRanLuxS1[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRngRanLuxS1(void *p) {
      delete ((::ROOT::Math::GSLRngRanLuxS1*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxS1(void *p) {
      delete [] ((::ROOT::Math::GSLRngRanLuxS1*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLuxS1(void *p) {
      typedef ::ROOT::Math::GSLRngRanLuxS1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRngRanLuxS1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRngRanLuxS2(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLuxS2 : new ::ROOT::Math::GSLRngRanLuxS2;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLuxS2(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLuxS2[nElements] : new ::ROOT::Math::GSLRngRanLuxS2[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRngRanLuxS2(void *p) {
      delete ((::ROOT::Math::GSLRngRanLuxS2*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxS2(void *p) {
      delete [] ((::ROOT::Math::GSLRngRanLuxS2*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLuxS2(void *p) {
      typedef ::ROOT::Math::GSLRngRanLuxS2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRngRanLuxS2

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRngRanLuxD1(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLuxD1 : new ::ROOT::Math::GSLRngRanLuxD1;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLuxD1(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLuxD1[nElements] : new ::ROOT::Math::GSLRngRanLuxD1[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRngRanLuxD1(void *p) {
      delete ((::ROOT::Math::GSLRngRanLuxD1*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxD1(void *p) {
      delete [] ((::ROOT::Math::GSLRngRanLuxD1*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLuxD1(void *p) {
      typedef ::ROOT::Math::GSLRngRanLuxD1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRngRanLuxD1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRngRanLuxD2(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLuxD2 : new ::ROOT::Math::GSLRngRanLuxD2;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRngRanLuxD2(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngRanLuxD2[nElements] : new ::ROOT::Math::GSLRngRanLuxD2[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRngRanLuxD2(void *p) {
      delete ((::ROOT::Math::GSLRngRanLuxD2*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRngRanLuxD2(void *p) {
      delete [] ((::ROOT::Math::GSLRngRanLuxD2*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRngRanLuxD2(void *p) {
      typedef ::ROOT::Math::GSLRngRanLuxD2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRngRanLuxD2

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRngTaus(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngTaus : new ::ROOT::Math::GSLRngTaus;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRngTaus(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngTaus[nElements] : new ::ROOT::Math::GSLRngTaus[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRngTaus(void *p) {
      delete ((::ROOT::Math::GSLRngTaus*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRngTaus(void *p) {
      delete [] ((::ROOT::Math::GSLRngTaus*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRngTaus(void *p) {
      typedef ::ROOT::Math::GSLRngTaus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRngTaus

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLRngGFSR4(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngGFSR4 : new ::ROOT::Math::GSLRngGFSR4;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLRngGFSR4(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLRngGFSR4[nElements] : new ::ROOT::Math::GSLRngGFSR4[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLRngGFSR4(void *p) {
      delete ((::ROOT::Math::GSLRngGFSR4*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLRngGFSR4(void *p) {
      delete [] ((::ROOT::Math::GSLRngGFSR4*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLRngGFSR4(void *p) {
      typedef ::ROOT::Math::GSLRngGFSR4 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLRngGFSR4

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol> : new ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>;
   }
   static void *newArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>[nElements] : new ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(void *p) {
      delete ((::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(void *p) {
      delete [] ((::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngSobolgR(void *p) {
      typedef ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngSobol>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2> : new ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>;
   }
   static void *newArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>[nElements] : new ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(void *p) {
      delete ((::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(void *p) {
      delete [] ((::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLQuasiRandomlEROOTcLcLMathcLcLGSLQRngNiederreiter2gR(void *p) {
      typedef ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::QuasiRandom<ROOT::Math::GSLQRngNiederreiter2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLQRngSobol(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLQRngSobol : new ::ROOT::Math::GSLQRngSobol;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLQRngSobol(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLQRngSobol[nElements] : new ::ROOT::Math::GSLQRngSobol[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLQRngSobol(void *p) {
      delete ((::ROOT::Math::GSLQRngSobol*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLQRngSobol(void *p) {
      delete [] ((::ROOT::Math::GSLQRngSobol*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLQRngSobol(void *p) {
      typedef ::ROOT::Math::GSLQRngSobol current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLQRngSobol

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLQRngNiederreiter2(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLQRngNiederreiter2 : new ::ROOT::Math::GSLQRngNiederreiter2;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLQRngNiederreiter2(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLQRngNiederreiter2[nElements] : new ::ROOT::Math::GSLQRngNiederreiter2[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLQRngNiederreiter2(void *p) {
      delete ((::ROOT::Math::GSLQRngNiederreiter2*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLQRngNiederreiter2(void *p) {
      delete [] ((::ROOT::Math::GSLQRngNiederreiter2*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLQRngNiederreiter2(void *p) {
      typedef ::ROOT::Math::GSLQRngNiederreiter2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLQRngNiederreiter2

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLKelvinFunctions(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::KelvinFunctions : new ::ROOT::Math::KelvinFunctions;
   }
   static void *newArray_ROOTcLcLMathcLcLKelvinFunctions(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::KelvinFunctions[nElements] : new ::ROOT::Math::KelvinFunctions[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLKelvinFunctions(void *p) {
      delete ((::ROOT::Math::KelvinFunctions*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLKelvinFunctions(void *p) {
      delete [] ((::ROOT::Math::KelvinFunctions*)p);
   }
   static void destruct_ROOTcLcLMathcLcLKelvinFunctions(void *p) {
      typedef ::ROOT::Math::KelvinFunctions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::KelvinFunctions

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngMT> : new ::ROOT::Math::Random<ROOT::Math::GSLRngMT>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngMT>[nElements] : new ::ROOT::Math::Random<ROOT::Math::GSLRngMT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::GSLRngMT>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::GSLRngMT>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngMTgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::GSLRngMT> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::GSLRngMT>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngTaus> : new ::ROOT::Math::Random<ROOT::Math::GSLRngTaus>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngTaus>[nElements] : new ::ROOT::Math::Random<ROOT::Math::GSLRngTaus>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::GSLRngTaus>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::GSLRngTaus>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngTausgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::GSLRngTaus> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::GSLRngTaus>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux> : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>[nElements] : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::GSLRngRanLux>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4> : new ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>[nElements] : new ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngGFSR4gR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::GSLRngGFSR4>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2> : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>[nElements] : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD2gR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1> : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>[nElements] : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxD1gR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxD1>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2> : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>[nElements] : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS2gR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1> : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>[nElements] : new ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLGSLRngRanLuxS1gR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::GSLRngRanLuxS1>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLMinimizer : new ::ROOT::Math::GSLMinimizer;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLMinimizer[nElements] : new ::ROOT::Math::GSLMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLMinimizer(void *p) {
      delete ((::ROOT::Math::GSLMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLMinimizer(void *p) {
      delete [] ((::ROOT::Math::GSLMinimizer*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLMinimizer(void *p) {
      typedef ::ROOT::Math::GSLMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLSResidualFunc(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LSResidualFunc : new ::ROOT::Math::LSResidualFunc;
   }
   static void *newArray_ROOTcLcLMathcLcLLSResidualFunc(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LSResidualFunc[nElements] : new ::ROOT::Math::LSResidualFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLSResidualFunc(void *p) {
      delete ((::ROOT::Math::LSResidualFunc*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLSResidualFunc(void *p) {
      delete [] ((::ROOT::Math::LSResidualFunc*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLSResidualFunc(void *p) {
      typedef ::ROOT::Math::LSResidualFunc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LSResidualFunc

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLNLSMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLNLSMinimizer : new ::ROOT::Math::GSLNLSMinimizer;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLNLSMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLNLSMinimizer[nElements] : new ::ROOT::Math::GSLNLSMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLNLSMinimizer(void *p) {
      delete ((::ROOT::Math::GSLNLSMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLNLSMinimizer(void *p) {
      delete [] ((::ROOT::Math::GSLNLSMinimizer*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLNLSMinimizer(void *p) {
      typedef ::ROOT::Math::GSLNLSMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLNLSMinimizer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLSimAnFunc(void *p) {
      delete ((::ROOT::Math::GSLSimAnFunc*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLSimAnFunc(void *p) {
      delete [] ((::ROOT::Math::GSLSimAnFunc*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLSimAnFunc(void *p) {
      typedef ::ROOT::Math::GSLSimAnFunc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLSimAnFunc

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLSimAnParams(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLSimAnParams : new ::ROOT::Math::GSLSimAnParams;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLSimAnParams(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLSimAnParams[nElements] : new ::ROOT::Math::GSLSimAnParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLSimAnParams(void *p) {
      delete ((::ROOT::Math::GSLSimAnParams*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLSimAnParams(void *p) {
      delete [] ((::ROOT::Math::GSLSimAnParams*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLSimAnParams(void *p) {
      typedef ::ROOT::Math::GSLSimAnParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLSimAnParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLSimAnnealing(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLSimAnnealing : new ::ROOT::Math::GSLSimAnnealing;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLSimAnnealing(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLSimAnnealing[nElements] : new ::ROOT::Math::GSLSimAnnealing[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLSimAnnealing(void *p) {
      delete ((::ROOT::Math::GSLSimAnnealing*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLSimAnnealing(void *p) {
      delete [] ((::ROOT::Math::GSLSimAnnealing*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLSimAnnealing(void *p) {
      typedef ::ROOT::Math::GSLSimAnnealing current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLSimAnnealing

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLSimAnMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLSimAnMinimizer : new ::ROOT::Math::GSLSimAnMinimizer;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLSimAnMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLSimAnMinimizer[nElements] : new ::ROOT::Math::GSLSimAnMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLSimAnMinimizer(void *p) {
      delete ((::ROOT::Math::GSLSimAnMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLSimAnMinimizer(void *p) {
      delete [] ((::ROOT::Math::GSLSimAnMinimizer*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLSimAnMinimizer(void *p) {
      typedef ::ROOT::Math::GSLSimAnMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLSimAnMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGSLMultiRootFinder(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLMultiRootFinder : new ::ROOT::Math::GSLMultiRootFinder;
   }
   static void *newArray_ROOTcLcLMathcLcLGSLMultiRootFinder(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GSLMultiRootFinder[nElements] : new ::ROOT::Math::GSLMultiRootFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGSLMultiRootFinder(void *p) {
      delete ((::ROOT::Math::GSLMultiRootFinder*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGSLMultiRootFinder(void *p) {
      delete [] ((::ROOT::Math::GSLMultiRootFinder*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGSLMultiRootFinder(void *p) {
      typedef ::ROOT::Math::GSLMultiRootFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GSLMultiRootFinder

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVavilov(void *p) {
      delete ((::ROOT::Math::Vavilov*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVavilov(void *p) {
      delete [] ((::ROOT::Math::Vavilov*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVavilov(void *p) {
      typedef ::ROOT::Math::Vavilov current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Vavilov

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLVavilovAccurate(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovAccurate : new ::ROOT::Math::VavilovAccurate;
   }
   static void *newArray_ROOTcLcLMathcLcLVavilovAccurate(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovAccurate[nElements] : new ::ROOT::Math::VavilovAccurate[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVavilovAccurate(void *p) {
      delete ((::ROOT::Math::VavilovAccurate*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVavilovAccurate(void *p) {
      delete [] ((::ROOT::Math::VavilovAccurate*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVavilovAccurate(void *p) {
      typedef ::ROOT::Math::VavilovAccurate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::VavilovAccurate

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLVavilovAccuratePdf(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovAccuratePdf : new ::ROOT::Math::VavilovAccuratePdf;
   }
   static void *newArray_ROOTcLcLMathcLcLVavilovAccuratePdf(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovAccuratePdf[nElements] : new ::ROOT::Math::VavilovAccuratePdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVavilovAccuratePdf(void *p) {
      delete ((::ROOT::Math::VavilovAccuratePdf*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVavilovAccuratePdf(void *p) {
      delete [] ((::ROOT::Math::VavilovAccuratePdf*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVavilovAccuratePdf(void *p) {
      typedef ::ROOT::Math::VavilovAccuratePdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::VavilovAccuratePdf

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLVavilovAccurateCdf(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovAccurateCdf : new ::ROOT::Math::VavilovAccurateCdf;
   }
   static void *newArray_ROOTcLcLMathcLcLVavilovAccurateCdf(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovAccurateCdf[nElements] : new ::ROOT::Math::VavilovAccurateCdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVavilovAccurateCdf(void *p) {
      delete ((::ROOT::Math::VavilovAccurateCdf*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVavilovAccurateCdf(void *p) {
      delete [] ((::ROOT::Math::VavilovAccurateCdf*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVavilovAccurateCdf(void *p) {
      typedef ::ROOT::Math::VavilovAccurateCdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::VavilovAccurateCdf

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLVavilovAccurateQuantile(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovAccurateQuantile : new ::ROOT::Math::VavilovAccurateQuantile;
   }
   static void *newArray_ROOTcLcLMathcLcLVavilovAccurateQuantile(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovAccurateQuantile[nElements] : new ::ROOT::Math::VavilovAccurateQuantile[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVavilovAccurateQuantile(void *p) {
      delete ((::ROOT::Math::VavilovAccurateQuantile*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVavilovAccurateQuantile(void *p) {
      delete [] ((::ROOT::Math::VavilovAccurateQuantile*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVavilovAccurateQuantile(void *p) {
      typedef ::ROOT::Math::VavilovAccurateQuantile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::VavilovAccurateQuantile

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLVavilovFast(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovFast : new ::ROOT::Math::VavilovFast;
   }
   static void *newArray_ROOTcLcLMathcLcLVavilovFast(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::VavilovFast[nElements] : new ::ROOT::Math::VavilovFast[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVavilovFast(void *p) {
      delete ((::ROOT::Math::VavilovFast*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVavilovFast(void *p) {
      delete [] ((::ROOT::Math::VavilovFast*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVavilovFast(void *p) {
      typedef ::ROOT::Math::VavilovFast current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::VavilovFast

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEcomplexlEdoublegRsPgR_Dictionary();
   static void vectorlEcomplexlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEcomplexlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEcomplexlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEcomplexlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEcomplexlEdoublegRsPgR(void *p);
   static void destruct_vectorlEcomplexlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<complex<double> >*)
   {
      vector<complex<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<complex<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<complex<double> >", -2, "vector", 216,
                  typeid(vector<complex<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEcomplexlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<complex<double> >) );
      instance.SetNew(&new_vectorlEcomplexlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEcomplexlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEcomplexlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEcomplexlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEcomplexlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<complex<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<complex<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEcomplexlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<complex<double> >*)0x0)->GetClass();
      vectorlEcomplexlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEcomplexlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEcomplexlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<complex<double> > : new vector<complex<double> >;
   }
   static void *newArray_vectorlEcomplexlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<complex<double> >[nElements] : new vector<complex<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEcomplexlEdoublegRsPgR(void *p) {
      delete ((vector<complex<double> >*)p);
   }
   static void deleteArray_vectorlEcomplexlEdoublegRsPgR(void *p) {
      delete [] ((vector<complex<double> >*)p);
   }
   static void destruct_vectorlEcomplexlEdoublegRsPgR(void *p) {
      typedef vector<complex<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<complex<double> >

namespace {
  void TriggerDictionaryInitialization_libMathMore_Impl() {
    static const char* headers[] = {
"Math/DistFuncMathMore.h",
"Math/SpecFuncMathMore.h",
"Math/PdfFuncMathMore.h",
"Math/Polynomial.h",
"Math/Derivator.h",
"Math/Interpolator.h",
"Math/InterpolationTypes.h",
"Math/GSLRootFinder.h",
"Math/GSLRootFinderDeriv.h",
"Math/RootFinderAlgorithms.h",
"Math/GSLIntegrator.h",
"Math/GSLMCIntegrator.h",
"Math/MCParameters.h",
"Math/GSLMinimizer1D.h",
"Math/ChebyshevApprox.h",
"Math/GSLRndmEngines.h",
"Math/QuasiRandom.h",
"Math/GSLQuasiRandom.h",
"Math/KelvinFunctions.h",
"Math/GSLRandom.h",
"Math/GSLMinimizer.h",
"Math/GSLNLSMinimizer.h",
"Math/GSLSimAnMinimizer.h",
"Math/GSLMultiRootFinder.h",
"Math/GSLRandomFunctions.h",
"Math/Vavilov.h",
"Math/VavilovAccurate.h",
"Math/VavilovAccuratePdf.h",
"Math/VavilovAccurateCdf.h",
"Math/VavilovAccurateQuantile.h",
"Math/VavilovFast.h",
0
    };
    static const char* includePaths[] = {
"/usr/include",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMathMore dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef USE_ROOT_ERROR
  #define USE_ROOT_ERROR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Math/DistFuncMathMore.h"
#include "Math/SpecFuncMathMore.h"
#include "Math/PdfFuncMathMore.h"
#include "Math/Polynomial.h"
#include "Math/Derivator.h"
#include "Math/Interpolator.h"
#include "Math/InterpolationTypes.h"
#include "Math/GSLRootFinder.h"
#include "Math/GSLRootFinderDeriv.h"
#include "Math/RootFinderAlgorithms.h"
#include "Math/GSLIntegrator.h"
#include "Math/GSLMCIntegrator.h"
#include "Math/MCParameters.h"
#include "Math/GSLMinimizer1D.h"
#include "Math/ChebyshevApprox.h"
#include "Math/GSLRndmEngines.h"
#include "Math/QuasiRandom.h"
#include "Math/GSLQuasiRandom.h"
#include "Math/KelvinFunctions.h"
#include "Math/GSLRandom.h"
#include "Math/GSLMinimizer.h"
#include "Math/GSLNLSMinimizer.h"
#include "Math/GSLSimAnMinimizer.h"
#include "Math/GSLMultiRootFinder.h"
#include "Math/GSLRandomFunctions.h"
#include "Math/Vavilov.h"
#include "Math/VavilovAccurate.h"
#include "Math/VavilovAccuratePdf.h"
#include "Math/VavilovAccurateCdf.h"
#include "Math/VavilovAccurateQuantile.h"
#include "Math/VavilovFast.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMathMore",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMathMore_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMathMore_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMathMore() {
  TriggerDictionaryInitialization_libMathMore_Impl();
}
