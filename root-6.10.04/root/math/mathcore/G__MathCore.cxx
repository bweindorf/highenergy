// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__MathCore

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
#include "TComplex.h"
#include "TMath.h"
#include "TRandom.h"
#include "TRandom1.h"
#include "TRandom2.h"
#include "TRandom3.h"
#include "TKDTree.h"
#include "TKDTreeBinning.h"
#include "TStatistic.h"
#include "Math/Error.h"
#include "Math/IParamFunction.h"
#include "Math/IFunction.h"
#include "Math/ParamFunctor.h"
#include "Math/Functor.h"
#include "Math/Minimizer.h"
#include "Math/MinimizerOptions.h"
#include "Math/IntegratorOptions.h"
#include "Math/IOptions.h"
#include "Math/GenAlgoOptions.h"
#include "Math/BasicMinimizer.h"
#include "Math/MinimTransformFunction.h"
#include "Math/MinimTransformVariable.h"
#include "Math/Integrator.h"
#include "Math/VirtualIntegrator.h"
#include "Math/AllIntegrationTypes.h"
#include "Math/AdaptiveIntegratorMultiDim.h"
#include "Math/IntegratorMultiDim.h"
#include "Math/Factory.h"
#include "Math/FitMethodFunction.h"
#include "Math/GaussIntegrator.h"
#include "Math/GaussLegendreIntegrator.h"
#include "Math/RootFinder.h"
#include "Math/IRootFinderMethod.h"
#include "Math/RichardsonDerivator.h"
#include "Math/BrentMethods.h"
#include "Math/BrentMinimizer1D.h"
#include "Math/BrentRootFinder.h"
#include "Math/DistSampler.h"
#include "Math/DistSamplerOptions.h"
#include "Math/GoFTest.h"
#include "Math/SpecFuncMathCore.h"
#include "Math/DistFuncMathCore.h"
#include "Math/ChebyshevPol.h"
#include "Math/KDTree.h"
#include "Math/TDataPoint.h"
#include "Math/TDataPointN.h"
#include "Math/Delaunay2D.h"
#include "Math/Random.h"
#include "Math/TRandomEngine.h"
#include "Math/RandomFunctions.h"
#include "Math/StdEngine.h"
#include "Math/MersenneTwisterEngine.h"
#include "Math/MixMaxEngine.h"
#include "TRandomGen.h"
#include "Math/LCGEngine.h"
#include "Fit/BasicFCN.h"
#include "Fit/BinData.h"
#include "Fit/Chi2FCN.h"
#include "Fit/DataOptions.h"
#include "Fit/DataRange.h"
#include "Fit/DataVectorfwd.h"
#include "Fit/FcnAdapter.h"
#include "Fit/FitConfig.h"
#include "Fit/FitData.h"
#include "Fit/FitResult.h"
#include "Fit/FitUtil.h"
#include "Fit/FitUtilParallel.h"
#include "Fit/Fitter.h"
#include "Fit/LogLikelihoodFCN.h"
#include "Fit/ParameterSettings.h"
#include "Fit/PoissonLikelihoodFCN.h"
#include "Fit/SparseData.h"
#include "Fit/UnBinData.h"

// Header files passed via #pragma extra_include

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

namespace TMath {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TMath_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TMath", 0 /*version*/, "TMathBase.h", 34,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &TMath_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TMath_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

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
            instance("ROOT::Math", 0 /*version*/, "Math/TRandomEngine.h", 17,
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
   namespace Fit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLFit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Fit", 0 /*version*/, "TKDTreeBinning.h", 24,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLFit_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLFit_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   namespace Math {
      namespace IntegrationOneDim {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLMathcLcLIntegrationOneDim_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Math::IntegrationOneDim", 0 /*version*/, "Math/AllIntegrationTypes.h", 30,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLMathcLcLIntegrationOneDim_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLMathcLcLIntegrationOneDim_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   namespace Math {
      namespace IntegrationMultiDim {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLMathcLcLIntegrationMultiDim_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Math::IntegrationMultiDim", 0 /*version*/, "Math/AllIntegrationTypes.h", 50,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLMathcLcLIntegrationMultiDim_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLMathcLcLIntegrationMultiDim_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR_Dictionary();
   static void reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(void *p = 0);
   static void *newArray_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(void *p);
   static void destruct_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >*)
   {
      ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >", "string", 101,
                  typeid(::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >) );
      instance.SetNew(&new_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR);

      ::ROOT::AddClassAlternate("reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >","vector<Double_t>::reverse_iterator");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >*)0x0)->GetClass();
      reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<double*,vector<double> >*)
   {
      ::__gnu_cxx::__normal_iterator<double*,vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<double*,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<double*,vector<double> >", "string", 760,
                  typeid(::__gnu_cxx::__normal_iterator<double*,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<double*,vector<double> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<double*,vector<double> >","vector<Double_t>::iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<double*,vector<double> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<double*,vector<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<double*,vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<double*,vector<double> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const double*,vector<double> >*)
   {
      ::__gnu_cxx::__normal_iterator<const double*,vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const double*,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const double*,vector<double> >", "string", 760,
                  typeid(::__gnu_cxx::__normal_iterator<const double*,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const double*,vector<double> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const double*,vector<double> >","vector<Double_t>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const double*,vector<double> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const double*,vector<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const double*,vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const double*,vector<double> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TComplex(void *p = 0);
   static void *newArray_TComplex(Long_t size, void *p);
   static void delete_TComplex(void *p);
   static void deleteArray_TComplex(void *p);
   static void destruct_TComplex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TComplex*)
   {
      ::TComplex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TComplex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TComplex", ::TComplex::Class_Version(), "TComplex.h", 26,
                  typeid(::TComplex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TComplex::Dictionary, isa_proxy, 4,
                  sizeof(::TComplex) );
      instance.SetNew(&new_TComplex);
      instance.SetNewArray(&newArray_TComplex);
      instance.SetDelete(&delete_TComplex);
      instance.SetDeleteArray(&deleteArray_TComplex);
      instance.SetDestructor(&destruct_TComplex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TComplex*)
   {
      return GenerateInitInstanceLocal((::TComplex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TComplex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLTRandomEngine_Dictionary();
   static void ROOTcLcLMathcLcLTRandomEngine_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLTRandomEngine(void *p);
   static void deleteArray_ROOTcLcLMathcLcLTRandomEngine(void *p);
   static void destruct_ROOTcLcLMathcLcLTRandomEngine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::TRandomEngine*)
   {
      ::ROOT::Math::TRandomEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::TRandomEngine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::TRandomEngine", "Math/TRandomEngine.h", 19,
                  typeid(::ROOT::Math::TRandomEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLTRandomEngine_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::TRandomEngine) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLTRandomEngine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLTRandomEngine);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLTRandomEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::TRandomEngine*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::TRandomEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::TRandomEngine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLTRandomEngine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::TRandomEngine*)0x0)->GetClass();
      ROOTcLcLMathcLcLTRandomEngine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLTRandomEngine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TRandom(void *p = 0);
   static void *newArray_TRandom(Long_t size, void *p);
   static void delete_TRandom(void *p);
   static void deleteArray_TRandom(void *p);
   static void destruct_TRandom(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandom*)
   {
      ::TRandom *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandom >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandom", ::TRandom::Class_Version(), "TRandom.h", 27,
                  typeid(::TRandom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRandom::Dictionary, isa_proxy, 4,
                  sizeof(::TRandom) );
      instance.SetNew(&new_TRandom);
      instance.SetNewArray(&newArray_TRandom);
      instance.SetDelete(&delete_TRandom);
      instance.SetDeleteArray(&deleteArray_TRandom);
      instance.SetDestructor(&destruct_TRandom);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandom*)
   {
      return GenerateInitInstanceLocal((::TRandom*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandom*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRandom1(void *p = 0);
   static void *newArray_TRandom1(Long_t size, void *p);
   static void delete_TRandom1(void *p);
   static void deleteArray_TRandom1(void *p);
   static void destruct_TRandom1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandom1*)
   {
      ::TRandom1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandom1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandom1", ::TRandom1::Class_Version(), "TRandom1.h", 27,
                  typeid(::TRandom1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRandom1::Dictionary, isa_proxy, 4,
                  sizeof(::TRandom1) );
      instance.SetNew(&new_TRandom1);
      instance.SetNewArray(&newArray_TRandom1);
      instance.SetDelete(&delete_TRandom1);
      instance.SetDeleteArray(&deleteArray_TRandom1);
      instance.SetDestructor(&destruct_TRandom1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandom1*)
   {
      return GenerateInitInstanceLocal((::TRandom1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandom1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRandom2(void *p = 0);
   static void *newArray_TRandom2(Long_t size, void *p);
   static void delete_TRandom2(void *p);
   static void deleteArray_TRandom2(void *p);
   static void destruct_TRandom2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandom2*)
   {
      ::TRandom2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandom2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandom2", ::TRandom2::Class_Version(), "TRandom2.h", 27,
                  typeid(::TRandom2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRandom2::Dictionary, isa_proxy, 4,
                  sizeof(::TRandom2) );
      instance.SetNew(&new_TRandom2);
      instance.SetNewArray(&newArray_TRandom2);
      instance.SetDelete(&delete_TRandom2);
      instance.SetDeleteArray(&deleteArray_TRandom2);
      instance.SetDestructor(&destruct_TRandom2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandom2*)
   {
      return GenerateInitInstanceLocal((::TRandom2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandom2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRandom3(void *p = 0);
   static void *newArray_TRandom3(Long_t size, void *p);
   static void delete_TRandom3(void *p);
   static void deleteArray_TRandom3(void *p);
   static void destruct_TRandom3(void *p);
   static void streamer_TRandom3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandom3*)
   {
      ::TRandom3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandom3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandom3", ::TRandom3::Class_Version(), "TRandom3.h", 27,
                  typeid(::TRandom3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRandom3::Dictionary, isa_proxy, 17,
                  sizeof(::TRandom3) );
      instance.SetNew(&new_TRandom3);
      instance.SetNewArray(&newArray_TRandom3);
      instance.SetDelete(&delete_TRandom3);
      instance.SetDeleteArray(&deleteArray_TRandom3);
      instance.SetDestructor(&destruct_TRandom3);
      instance.SetStreamerFunc(&streamer_TRandom3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandom3*)
   {
      return GenerateInitInstanceLocal((::TRandom3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandom3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TKDTreelEintcOdoublegR_Dictionary();
   static void TKDTreelEintcOdoublegR_TClassManip(TClass*);
   static void *new_TKDTreelEintcOdoublegR(void *p = 0);
   static void *newArray_TKDTreelEintcOdoublegR(Long_t size, void *p);
   static void delete_TKDTreelEintcOdoublegR(void *p);
   static void deleteArray_TKDTreelEintcOdoublegR(void *p);
   static void destruct_TKDTreelEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKDTree<int,double>*)
   {
      ::TKDTree<int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKDTree<int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TKDTree<int,double>", ::TKDTree<int,double>::Class_Version(), "TKDTree.h", 9,
                  typeid(::TKDTree<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TKDTreelEintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TKDTree<int,double>) );
      instance.SetNew(&new_TKDTreelEintcOdoublegR);
      instance.SetNewArray(&newArray_TKDTreelEintcOdoublegR);
      instance.SetDelete(&delete_TKDTreelEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_TKDTreelEintcOdoublegR);
      instance.SetDestructor(&destruct_TKDTreelEintcOdoublegR);

      ::ROOT::AddClassAlternate("TKDTree<int,double>","TKDTree<Int_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKDTree<int,double>*)
   {
      return GenerateInitInstanceLocal((::TKDTree<int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TKDTree<int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TKDTreelEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,double>*)0x0)->GetClass();
      TKDTreelEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TKDTreelEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TKDTreelEintcOfloatgR_Dictionary();
   static void TKDTreelEintcOfloatgR_TClassManip(TClass*);
   static void *new_TKDTreelEintcOfloatgR(void *p = 0);
   static void *newArray_TKDTreelEintcOfloatgR(Long_t size, void *p);
   static void delete_TKDTreelEintcOfloatgR(void *p);
   static void deleteArray_TKDTreelEintcOfloatgR(void *p);
   static void destruct_TKDTreelEintcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKDTree<int,float>*)
   {
      ::TKDTree<int,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKDTree<int,float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TKDTree<int,float>", ::TKDTree<int,float>::Class_Version(), "TKDTree.h", 9,
                  typeid(::TKDTree<int,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TKDTreelEintcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TKDTree<int,float>) );
      instance.SetNew(&new_TKDTreelEintcOfloatgR);
      instance.SetNewArray(&newArray_TKDTreelEintcOfloatgR);
      instance.SetDelete(&delete_TKDTreelEintcOfloatgR);
      instance.SetDeleteArray(&deleteArray_TKDTreelEintcOfloatgR);
      instance.SetDestructor(&destruct_TKDTreelEintcOfloatgR);

      ::ROOT::AddClassAlternate("TKDTree<int,float>","TKDTree<Int_t,Float_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKDTree<int,float>*)
   {
      return GenerateInitInstanceLocal((::TKDTree<int,float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TKDTree<int,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TKDTreelEintcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,float>*)0x0)->GetClass();
      TKDTreelEintcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TKDTreelEintcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TKDTreeBinning(void *p = 0);
   static void *newArray_TKDTreeBinning(Long_t size, void *p);
   static void delete_TKDTreeBinning(void *p);
   static void deleteArray_TKDTreeBinning(void *p);
   static void destruct_TKDTreeBinning(void *p);
   static void streamer_TKDTreeBinning(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKDTreeBinning*)
   {
      ::TKDTreeBinning *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKDTreeBinning >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TKDTreeBinning", ::TKDTreeBinning::Class_Version(), "TKDTreeBinning.h", 29,
                  typeid(::TKDTreeBinning), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKDTreeBinning::Dictionary, isa_proxy, 17,
                  sizeof(::TKDTreeBinning) );
      instance.SetNew(&new_TKDTreeBinning);
      instance.SetNewArray(&newArray_TKDTreeBinning);
      instance.SetDelete(&delete_TKDTreeBinning);
      instance.SetDeleteArray(&deleteArray_TKDTreeBinning);
      instance.SetDestructor(&destruct_TKDTreeBinning);
      instance.SetStreamerFunc(&streamer_TKDTreeBinning);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKDTreeBinning*)
   {
      return GenerateInitInstanceLocal((::TKDTreeBinning*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TKDTreeBinning*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TStatistic(void *p = 0);
   static void *newArray_TStatistic(Long_t size, void *p);
   static void delete_TStatistic(void *p);
   static void deleteArray_TStatistic(void *p);
   static void destruct_TStatistic(void *p);
   static Long64_t merge_TStatistic(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStatistic*)
   {
      ::TStatistic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStatistic >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStatistic", ::TStatistic::Class_Version(), "TStatistic.h", 35,
                  typeid(::TStatistic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStatistic::Dictionary, isa_proxy, 4,
                  sizeof(::TStatistic) );
      instance.SetNew(&new_TStatistic);
      instance.SetNewArray(&newArray_TStatistic);
      instance.SetDelete(&delete_TStatistic);
      instance.SetDeleteArray(&deleteArray_TStatistic);
      instance.SetDestructor(&destruct_TStatistic);
      instance.SetMerge(&merge_TStatistic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStatistic*)
   {
      return GenerateInitInstanceLocal((::TStatistic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStatistic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IBaseFunctionMultiDimTempl<double>*)
   {
      ::ROOT::Math::IBaseFunctionMultiDimTempl<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IBaseFunctionMultiDimTempl<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IBaseFunctionMultiDimTempl<double>", "Math/IFunction.h", 62,
                  typeid(::ROOT::Math::IBaseFunctionMultiDimTempl<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IBaseFunctionMultiDimTempl<double>) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Math::IBaseFunctionMultiDimTempl<double>","ROOT::Math::IBaseFunctionMultiDim");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IBaseFunctionMultiDimTempl<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IBaseFunctionMultiDimTempl<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IBaseFunctionMultiDimTempl<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IBaseFunctionMultiDimTempl<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIBaseFunctionOneDim_Dictionary();
   static void ROOTcLcLMathcLcLIBaseFunctionOneDim_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIBaseFunctionOneDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIBaseFunctionOneDim(void *p);
   static void destruct_ROOTcLcLMathcLcLIBaseFunctionOneDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IBaseFunctionOneDim*)
   {
      ::ROOT::Math::IBaseFunctionOneDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IBaseFunctionOneDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IBaseFunctionOneDim", "Math/IFunction.h", 134,
                  typeid(::ROOT::Math::IBaseFunctionOneDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIBaseFunctionOneDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IBaseFunctionOneDim) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIBaseFunctionOneDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIBaseFunctionOneDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIBaseFunctionOneDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IBaseFunctionOneDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IBaseFunctionOneDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IBaseFunctionOneDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIBaseFunctionOneDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IBaseFunctionOneDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLIBaseFunctionOneDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIBaseFunctionOneDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIGradientMultiDim_Dictionary();
   static void ROOTcLcLMathcLcLIGradientMultiDim_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIGradientMultiDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIGradientMultiDim(void *p);
   static void destruct_ROOTcLcLMathcLcLIGradientMultiDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IGradientMultiDim*)
   {
      ::ROOT::Math::IGradientMultiDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IGradientMultiDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IGradientMultiDim", "Math/IFunction.h", 199,
                  typeid(::ROOT::Math::IGradientMultiDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIGradientMultiDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IGradientMultiDim) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIGradientMultiDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIGradientMultiDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIGradientMultiDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IGradientMultiDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IGradientMultiDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IGradientMultiDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIGradientMultiDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IGradientMultiDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLIGradientMultiDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIGradientMultiDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIGradientOneDim_Dictionary();
   static void ROOTcLcLMathcLcLIGradientOneDim_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIGradientOneDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIGradientOneDim(void *p);
   static void destruct_ROOTcLcLMathcLcLIGradientOneDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IGradientOneDim*)
   {
      ::ROOT::Math::IGradientOneDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IGradientOneDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IGradientOneDim", "Math/IFunction.h", 251,
                  typeid(::ROOT::Math::IGradientOneDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIGradientOneDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IGradientOneDim) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIGradientOneDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIGradientOneDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIGradientOneDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IGradientOneDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IGradientOneDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IGradientOneDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIGradientOneDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IGradientOneDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLIGradientOneDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIGradientOneDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIGradientFunctionMultiDim_Dictionary();
   static void ROOTcLcLMathcLcLIGradientFunctionMultiDim_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIGradientFunctionMultiDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIGradientFunctionMultiDim(void *p);
   static void destruct_ROOTcLcLMathcLcLIGradientFunctionMultiDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IGradientFunctionMultiDim*)
   {
      ::ROOT::Math::IGradientFunctionMultiDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IGradientFunctionMultiDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IGradientFunctionMultiDim", "Math/IFunction.h", 330,
                  typeid(::ROOT::Math::IGradientFunctionMultiDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIGradientFunctionMultiDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IGradientFunctionMultiDim) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIGradientFunctionMultiDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIGradientFunctionMultiDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIGradientFunctionMultiDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IGradientFunctionMultiDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IGradientFunctionMultiDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IGradientFunctionMultiDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIGradientFunctionMultiDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IGradientFunctionMultiDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLIGradientFunctionMultiDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIGradientFunctionMultiDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIGradientFunctionOneDim_Dictionary();
   static void ROOTcLcLMathcLcLIGradientFunctionOneDim_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIGradientFunctionOneDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIGradientFunctionOneDim(void *p);
   static void destruct_ROOTcLcLMathcLcLIGradientFunctionOneDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IGradientFunctionOneDim*)
   {
      ::ROOT::Math::IGradientFunctionOneDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IGradientFunctionOneDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IGradientFunctionOneDim", "Math/IFunction.h", 392,
                  typeid(::ROOT::Math::IGradientFunctionOneDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIGradientFunctionOneDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IGradientFunctionOneDim) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIGradientFunctionOneDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIGradientFunctionOneDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIGradientFunctionOneDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IGradientFunctionOneDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IGradientFunctionOneDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IGradientFunctionOneDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIGradientFunctionOneDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IGradientFunctionOneDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLIGradientFunctionOneDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIGradientFunctionOneDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IParametricFunctionMultiDimTempl<double>*)
   {
      ::ROOT::Math::IParametricFunctionMultiDimTempl<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IParametricFunctionMultiDimTempl<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IParametricFunctionMultiDimTempl<double>", "Math/IParamFunction.h", 104,
                  typeid(::ROOT::Math::IParametricFunctionMultiDimTempl<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IParametricFunctionMultiDimTempl<double>) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Math::IParametricFunctionMultiDimTempl<double>","ROOT::Math::IParametricFunctionMultiDim");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IParametricFunctionMultiDimTempl<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IParametricFunctionMultiDimTempl<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IParametricFunctionMultiDimTempl<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IParametricFunctionMultiDimTempl<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>*)
   {
      ::ROOT::Math::IParametricGradFunctionMultiDimTempl<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IParametricGradFunctionMultiDimTempl<double>", "Math/IParamFunction.h", 219,
                  typeid(::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Math::IParametricGradFunctionMultiDimTempl<double>","ROOT::Math::IParametricGradFunctionMultiDim");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIBaseParam_Dictionary();
   static void ROOTcLcLMathcLcLIBaseParam_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIBaseParam(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIBaseParam(void *p);
   static void destruct_ROOTcLcLMathcLcLIBaseParam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IBaseParam*)
   {
      ::ROOT::Math::IBaseParam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IBaseParam));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IBaseParam", "Math/IParamFunction.h", 48,
                  typeid(::ROOT::Math::IBaseParam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIBaseParam_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IBaseParam) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIBaseParam);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIBaseParam);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIBaseParam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IBaseParam*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IBaseParam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IBaseParam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIBaseParam_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IBaseParam*)0x0)->GetClass();
      ROOTcLcLMathcLcLIBaseParam_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIBaseParam_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIParametricFunctionOneDim_Dictionary();
   static void ROOTcLcLMathcLcLIParametricFunctionOneDim_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIParametricFunctionOneDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIParametricFunctionOneDim(void *p);
   static void destruct_ROOTcLcLMathcLcLIParametricFunctionOneDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IParametricFunctionOneDim*)
   {
      ::ROOT::Math::IParametricFunctionOneDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IParametricFunctionOneDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IParametricFunctionOneDim", "Math/IParamFunction.h", 151,
                  typeid(::ROOT::Math::IParametricFunctionOneDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIParametricFunctionOneDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IParametricFunctionOneDim) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIParametricFunctionOneDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIParametricFunctionOneDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIParametricFunctionOneDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IParametricFunctionOneDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IParametricFunctionOneDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IParametricFunctionOneDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIParametricFunctionOneDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IParametricFunctionOneDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLIParametricFunctionOneDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIParametricFunctionOneDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIParametricGradFunctionOneDim_Dictionary();
   static void ROOTcLcLMathcLcLIParametricGradFunctionOneDim_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIParametricGradFunctionOneDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIParametricGradFunctionOneDim(void *p);
   static void destruct_ROOTcLcLMathcLcLIParametricGradFunctionOneDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IParametricGradFunctionOneDim*)
   {
      ::ROOT::Math::IParametricGradFunctionOneDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IParametricGradFunctionOneDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IParametricGradFunctionOneDim", "Math/IParamFunction.h", 293,
                  typeid(::ROOT::Math::IParametricGradFunctionOneDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIParametricGradFunctionOneDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IParametricGradFunctionOneDim) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIParametricGradFunctionOneDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIParametricGradFunctionOneDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIParametricGradFunctionOneDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IParametricGradFunctionOneDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IParametricGradFunctionOneDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IParametricGradFunctionOneDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIParametricGradFunctionOneDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IParametricGradFunctionOneDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLIParametricGradFunctionOneDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIParametricGradFunctionOneDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLParamFunctor_Dictionary();
   static void ROOTcLcLMathcLcLParamFunctor_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLParamFunctor(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLParamFunctor(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLParamFunctor(void *p);
   static void deleteArray_ROOTcLcLMathcLcLParamFunctor(void *p);
   static void destruct_ROOTcLcLMathcLcLParamFunctor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::ParamFunctor*)
   {
      ::ROOT::Math::ParamFunctor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::ParamFunctor));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::ParamFunctor", "Math/ParamFunctor.h", 209,
                  typeid(::ROOT::Math::ParamFunctor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLParamFunctor_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::ParamFunctor) );
      instance.SetNew(&new_ROOTcLcLMathcLcLParamFunctor);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLParamFunctor);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLParamFunctor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLParamFunctor);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLParamFunctor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::ParamFunctor*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::ParamFunctor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::ParamFunctor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLParamFunctor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::ParamFunctor*)0x0)->GetClass();
      ROOTcLcLMathcLcLParamFunctor_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLParamFunctor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLFunctor_Dictionary();
   static void ROOTcLcLMathcLcLFunctor_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLFunctor(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLFunctor(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLFunctor(void *p);
   static void deleteArray_ROOTcLcLMathcLcLFunctor(void *p);
   static void destruct_ROOTcLcLMathcLcLFunctor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Functor*)
   {
      ::ROOT::Math::Functor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Functor));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Functor", "Math/Functor.h", 392,
                  typeid(::ROOT::Math::Functor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLFunctor_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Math::Functor) );
      instance.SetNew(&new_ROOTcLcLMathcLcLFunctor);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLFunctor);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLFunctor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLFunctor);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLFunctor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Functor*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Functor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Functor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLFunctor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Functor*)0x0)->GetClass();
      ROOTcLcLMathcLcLFunctor_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLFunctor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLFunctor1D_Dictionary();
   static void ROOTcLcLMathcLcLFunctor1D_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLFunctor1D(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLFunctor1D(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLFunctor1D(void *p);
   static void deleteArray_ROOTcLcLMathcLcLFunctor1D(void *p);
   static void destruct_ROOTcLcLMathcLcLFunctor1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Functor1D*)
   {
      ::ROOT::Math::Functor1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Functor1D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Functor1D", "Math/Functor.h", 487,
                  typeid(::ROOT::Math::Functor1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLFunctor1D_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Math::Functor1D) );
      instance.SetNew(&new_ROOTcLcLMathcLcLFunctor1D);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLFunctor1D);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLFunctor1D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLFunctor1D);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLFunctor1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Functor1D*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Functor1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Functor1D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLFunctor1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Functor1D*)0x0)->GetClass();
      ROOTcLcLMathcLcLFunctor1D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLFunctor1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGradFunctor_Dictionary();
   static void ROOTcLcLMathcLcLGradFunctor_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGradFunctor(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGradFunctor(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGradFunctor(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGradFunctor(void *p);
   static void destruct_ROOTcLcLMathcLcLGradFunctor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GradFunctor*)
   {
      ::ROOT::Math::GradFunctor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GradFunctor));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GradFunctor", "Math/Functor.h", 577,
                  typeid(::ROOT::Math::GradFunctor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGradFunctor_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Math::GradFunctor) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGradFunctor);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGradFunctor);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGradFunctor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGradFunctor);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGradFunctor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GradFunctor*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GradFunctor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GradFunctor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGradFunctor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GradFunctor*)0x0)->GetClass();
      ROOTcLcLMathcLcLGradFunctor_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGradFunctor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGradFunctor1D_Dictionary();
   static void ROOTcLcLMathcLcLGradFunctor1D_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGradFunctor1D(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGradFunctor1D(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGradFunctor1D(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGradFunctor1D(void *p);
   static void destruct_ROOTcLcLMathcLcLGradFunctor1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GradFunctor1D*)
   {
      ::ROOT::Math::GradFunctor1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GradFunctor1D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GradFunctor1D", "Math/Functor.h", 689,
                  typeid(::ROOT::Math::GradFunctor1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGradFunctor1D_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Math::GradFunctor1D) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGradFunctor1D);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGradFunctor1D);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGradFunctor1D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGradFunctor1D);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGradFunctor1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GradFunctor1D*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GradFunctor1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GradFunctor1D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGradFunctor1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GradFunctor1D*)0x0)->GetClass();
      ROOTcLcLMathcLcLGradFunctor1D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGradFunctor1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMinimizerOptions_Dictionary();
   static void ROOTcLcLMathcLcLMinimizerOptions_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMinimizerOptions(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMinimizerOptions(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMinimizerOptions(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMinimizerOptions(void *p);
   static void destruct_ROOTcLcLMathcLcLMinimizerOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MinimizerOptions*)
   {
      ::ROOT::Math::MinimizerOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MinimizerOptions));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MinimizerOptions", "Math/MinimizerOptions.h", 32,
                  typeid(::ROOT::Math::MinimizerOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMinimizerOptions_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MinimizerOptions) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMinimizerOptions);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMinimizerOptions);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMinimizerOptions);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMinimizerOptions);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMinimizerOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MinimizerOptions*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MinimizerOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MinimizerOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMinimizerOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MinimizerOptions*)0x0)->GetClass();
      ROOTcLcLMathcLcLMinimizerOptions_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMinimizerOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMinimizer_Dictionary();
   static void ROOTcLcLMathcLcLMinimizer_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLMinimizer(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMinimizer(void *p);
   static void destruct_ROOTcLcLMathcLcLMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Minimizer*)
   {
      ::ROOT::Math::Minimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Minimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Minimizer", "Math/Minimizer.h", 78,
                  typeid(::ROOT::Math::Minimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMinimizer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Minimizer) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Minimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Minimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Minimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Minimizer*)0x0)->GetClass();
      ROOTcLcLMathcLcLMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBaseIntegratorOptions_Dictionary();
   static void ROOTcLcLMathcLcLBaseIntegratorOptions_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLBaseIntegratorOptions(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBaseIntegratorOptions(void *p);
   static void destruct_ROOTcLcLMathcLcLBaseIntegratorOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::BaseIntegratorOptions*)
   {
      ::ROOT::Math::BaseIntegratorOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::BaseIntegratorOptions));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::BaseIntegratorOptions", "Math/IntegratorOptions.h", 35,
                  typeid(::ROOT::Math::BaseIntegratorOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBaseIntegratorOptions_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::BaseIntegratorOptions) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBaseIntegratorOptions);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBaseIntegratorOptions);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBaseIntegratorOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::BaseIntegratorOptions*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::BaseIntegratorOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::BaseIntegratorOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBaseIntegratorOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::BaseIntegratorOptions*)0x0)->GetClass();
      ROOTcLcLMathcLcLBaseIntegratorOptions_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBaseIntegratorOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIntegratorOneDimOptions_Dictionary();
   static void ROOTcLcLMathcLcLIntegratorOneDimOptions_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLIntegratorOneDimOptions(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLIntegratorOneDimOptions(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLIntegratorOneDimOptions(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIntegratorOneDimOptions(void *p);
   static void destruct_ROOTcLcLMathcLcLIntegratorOneDimOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IntegratorOneDimOptions*)
   {
      ::ROOT::Math::IntegratorOneDimOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IntegratorOneDimOptions));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IntegratorOneDimOptions", "Math/IntegratorOptions.h", 113,
                  typeid(::ROOT::Math::IntegratorOneDimOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIntegratorOneDimOptions_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IntegratorOneDimOptions) );
      instance.SetNew(&new_ROOTcLcLMathcLcLIntegratorOneDimOptions);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLIntegratorOneDimOptions);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIntegratorOneDimOptions);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIntegratorOneDimOptions);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIntegratorOneDimOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IntegratorOneDimOptions*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IntegratorOneDimOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IntegratorOneDimOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIntegratorOneDimOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IntegratorOneDimOptions*)0x0)->GetClass();
      ROOTcLcLMathcLcLIntegratorOneDimOptions_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIntegratorOneDimOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIntegratorMultiDimOptions_Dictionary();
   static void ROOTcLcLMathcLcLIntegratorMultiDimOptions_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLIntegratorMultiDimOptions(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLIntegratorMultiDimOptions(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLIntegratorMultiDimOptions(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIntegratorMultiDimOptions(void *p);
   static void destruct_ROOTcLcLMathcLcLIntegratorMultiDimOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IntegratorMultiDimOptions*)
   {
      ::ROOT::Math::IntegratorMultiDimOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IntegratorMultiDimOptions));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IntegratorMultiDimOptions", "Math/IntegratorOptions.h", 194,
                  typeid(::ROOT::Math::IntegratorMultiDimOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIntegratorMultiDimOptions_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IntegratorMultiDimOptions) );
      instance.SetNew(&new_ROOTcLcLMathcLcLIntegratorMultiDimOptions);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLIntegratorMultiDimOptions);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIntegratorMultiDimOptions);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIntegratorMultiDimOptions);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIntegratorMultiDimOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IntegratorMultiDimOptions*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IntegratorMultiDimOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IntegratorMultiDimOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIntegratorMultiDimOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IntegratorMultiDimOptions*)0x0)->GetClass();
      ROOTcLcLMathcLcLIntegratorMultiDimOptions_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIntegratorMultiDimOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIOptions_Dictionary();
   static void ROOTcLcLMathcLcLIOptions_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIOptions(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIOptions(void *p);
   static void destruct_ROOTcLcLMathcLcLIOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IOptions*)
   {
      ::ROOT::Math::IOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IOptions));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IOptions", "Math/IOptions.h", 30,
                  typeid(::ROOT::Math::IOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIOptions_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IOptions) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIOptions);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIOptions);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IOptions*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IOptions*)0x0)->GetClass();
      ROOTcLcLMathcLcLIOptions_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGenAlgoOptions_Dictionary();
   static void ROOTcLcLMathcLcLGenAlgoOptions_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGenAlgoOptions(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGenAlgoOptions(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGenAlgoOptions(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGenAlgoOptions(void *p);
   static void destruct_ROOTcLcLMathcLcLGenAlgoOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GenAlgoOptions*)
   {
      ::ROOT::Math::GenAlgoOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GenAlgoOptions));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GenAlgoOptions", "Math/GenAlgoOptions.h", 30,
                  typeid(::ROOT::Math::GenAlgoOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGenAlgoOptions_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GenAlgoOptions) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGenAlgoOptions);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGenAlgoOptions);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGenAlgoOptions);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGenAlgoOptions);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGenAlgoOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GenAlgoOptions*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GenAlgoOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GenAlgoOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGenAlgoOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GenAlgoOptions*)0x0)->GetClass();
      ROOTcLcLMathcLcLGenAlgoOptions_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGenAlgoOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMinimTransformVariable_Dictionary();
   static void ROOTcLcLMathcLcLMinimTransformVariable_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMinimTransformVariable(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMinimTransformVariable(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMinimTransformVariable(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMinimTransformVariable(void *p);
   static void destruct_ROOTcLcLMathcLcLMinimTransformVariable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MinimTransformVariable*)
   {
      ::ROOT::Math::MinimTransformVariable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MinimTransformVariable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MinimTransformVariable", "Math/MinimTransformVariable.h", 48,
                  typeid(::ROOT::Math::MinimTransformVariable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMinimTransformVariable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MinimTransformVariable) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMinimTransformVariable);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMinimTransformVariable);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMinimTransformVariable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMinimTransformVariable);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMinimTransformVariable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MinimTransformVariable*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MinimTransformVariable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MinimTransformVariable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMinimTransformVariable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MinimTransformVariable*)0x0)->GetClass();
      ROOTcLcLMathcLcLMinimTransformVariable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMinimTransformVariable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBasicMinimizer_Dictionary();
   static void ROOTcLcLMathcLcLBasicMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLBasicMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLBasicMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLBasicMinimizer(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBasicMinimizer(void *p);
   static void destruct_ROOTcLcLMathcLcLBasicMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::BasicMinimizer*)
   {
      ::ROOT::Math::BasicMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::BasicMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::BasicMinimizer", "Math/BasicMinimizer.h", 54,
                  typeid(::ROOT::Math::BasicMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBasicMinimizer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::BasicMinimizer) );
      instance.SetNew(&new_ROOTcLcLMathcLcLBasicMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLBasicMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBasicMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBasicMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBasicMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::BasicMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::BasicMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::BasicMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBasicMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::BasicMinimizer*)0x0)->GetClass();
      ROOTcLcLMathcLcLBasicMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBasicMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMinimTransformFunction_Dictionary();
   static void ROOTcLcLMathcLcLMinimTransformFunction_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLMinimTransformFunction(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMinimTransformFunction(void *p);
   static void destruct_ROOTcLcLMathcLcLMinimTransformFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MinimTransformFunction*)
   {
      ::ROOT::Math::MinimTransformFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MinimTransformFunction));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MinimTransformFunction", "Math/MinimTransformFunction.h", 39,
                  typeid(::ROOT::Math::MinimTransformFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMinimTransformFunction_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Math::MinimTransformFunction) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMinimTransformFunction);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMinimTransformFunction);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMinimTransformFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MinimTransformFunction*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MinimTransformFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MinimTransformFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMinimTransformFunction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MinimTransformFunction*)0x0)->GetClass();
      ROOTcLcLMathcLcLMinimTransformFunction_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMinimTransformFunction_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVirtualIntegrator_Dictionary();
   static void ROOTcLcLMathcLcLVirtualIntegrator_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLVirtualIntegrator(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVirtualIntegrator(void *p);
   static void destruct_ROOTcLcLMathcLcLVirtualIntegrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::VirtualIntegrator*)
   {
      ::ROOT::Math::VirtualIntegrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::VirtualIntegrator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::VirtualIntegrator", "Math/VirtualIntegrator.h", 49,
                  typeid(::ROOT::Math::VirtualIntegrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVirtualIntegrator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::VirtualIntegrator) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVirtualIntegrator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVirtualIntegrator);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVirtualIntegrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::VirtualIntegrator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::VirtualIntegrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::VirtualIntegrator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVirtualIntegrator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::VirtualIntegrator*)0x0)->GetClass();
      ROOTcLcLMathcLcLVirtualIntegrator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVirtualIntegrator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVirtualIntegratorOneDim_Dictionary();
   static void ROOTcLcLMathcLcLVirtualIntegratorOneDim_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLVirtualIntegratorOneDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVirtualIntegratorOneDim(void *p);
   static void destruct_ROOTcLcLMathcLcLVirtualIntegratorOneDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::VirtualIntegratorOneDim*)
   {
      ::ROOT::Math::VirtualIntegratorOneDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::VirtualIntegratorOneDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::VirtualIntegratorOneDim", "Math/VirtualIntegrator.h", 105,
                  typeid(::ROOT::Math::VirtualIntegratorOneDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVirtualIntegratorOneDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::VirtualIntegratorOneDim) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVirtualIntegratorOneDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVirtualIntegratorOneDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVirtualIntegratorOneDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::VirtualIntegratorOneDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::VirtualIntegratorOneDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::VirtualIntegratorOneDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVirtualIntegratorOneDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::VirtualIntegratorOneDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLVirtualIntegratorOneDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVirtualIntegratorOneDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLVirtualIntegratorMultiDim_Dictionary();
   static void ROOTcLcLMathcLcLVirtualIntegratorMultiDim_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLVirtualIntegratorMultiDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLVirtualIntegratorMultiDim(void *p);
   static void destruct_ROOTcLcLMathcLcLVirtualIntegratorMultiDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::VirtualIntegratorMultiDim*)
   {
      ::ROOT::Math::VirtualIntegratorMultiDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::VirtualIntegratorMultiDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::VirtualIntegratorMultiDim", "Math/VirtualIntegrator.h", 166,
                  typeid(::ROOT::Math::VirtualIntegratorMultiDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLVirtualIntegratorMultiDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::VirtualIntegratorMultiDim) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLVirtualIntegratorMultiDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLVirtualIntegratorMultiDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLVirtualIntegratorMultiDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::VirtualIntegratorMultiDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::VirtualIntegratorMultiDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::VirtualIntegratorMultiDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLVirtualIntegratorMultiDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::VirtualIntegratorMultiDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLVirtualIntegratorMultiDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLVirtualIntegratorMultiDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIntegratorOneDim_Dictionary();
   static void ROOTcLcLMathcLcLIntegratorOneDim_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLIntegratorOneDim(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLIntegratorOneDim(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLIntegratorOneDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIntegratorOneDim(void *p);
   static void destruct_ROOTcLcLMathcLcLIntegratorOneDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IntegratorOneDim*)
   {
      ::ROOT::Math::IntegratorOneDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IntegratorOneDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IntegratorOneDim", "Math/Integrator.h", 94,
                  typeid(::ROOT::Math::IntegratorOneDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIntegratorOneDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IntegratorOneDim) );
      instance.SetNew(&new_ROOTcLcLMathcLcLIntegratorOneDim);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLIntegratorOneDim);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIntegratorOneDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIntegratorOneDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIntegratorOneDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IntegratorOneDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IntegratorOneDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IntegratorOneDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIntegratorOneDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IntegratorOneDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLIntegratorOneDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIntegratorOneDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim_Dictionary();
   static void ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(void *p);
   static void destruct_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::AdaptiveIntegratorMultiDim*)
   {
      ::ROOT::Math::AdaptiveIntegratorMultiDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::AdaptiveIntegratorMultiDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::AdaptiveIntegratorMultiDim", "Math/AdaptiveIntegratorMultiDim.h", 84,
                  typeid(::ROOT::Math::AdaptiveIntegratorMultiDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::AdaptiveIntegratorMultiDim) );
      instance.SetNew(&new_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::AdaptiveIntegratorMultiDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::AdaptiveIntegratorMultiDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::AdaptiveIntegratorMultiDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::AdaptiveIntegratorMultiDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIntegratorMultiDim_Dictionary();
   static void ROOTcLcLMathcLcLIntegratorMultiDim_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLIntegratorMultiDim(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLIntegratorMultiDim(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLIntegratorMultiDim(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIntegratorMultiDim(void *p);
   static void destruct_ROOTcLcLMathcLcLIntegratorMultiDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IntegratorMultiDim*)
   {
      ::ROOT::Math::IntegratorMultiDim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IntegratorMultiDim));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IntegratorMultiDim", "Math/IntegratorMultiDim.h", 50,
                  typeid(::ROOT::Math::IntegratorMultiDim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIntegratorMultiDim_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IntegratorMultiDim) );
      instance.SetNew(&new_ROOTcLcLMathcLcLIntegratorMultiDim);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLIntegratorMultiDim);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIntegratorMultiDim);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIntegratorMultiDim);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIntegratorMultiDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IntegratorMultiDim*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IntegratorMultiDim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IntegratorMultiDim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIntegratorMultiDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IntegratorMultiDim*)0x0)->GetClass();
      ROOTcLcLMathcLcLIntegratorMultiDim_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIntegratorMultiDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLFactory_Dictionary();
   static void ROOTcLcLMathcLcLFactory_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLFactory(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLFactory(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLFactory(void *p);
   static void deleteArray_ROOTcLcLMathcLcLFactory(void *p);
   static void destruct_ROOTcLcLMathcLcLFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Factory*)
   {
      ::ROOT::Math::Factory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Factory));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Factory", "Math/Factory.h", 31,
                  typeid(::ROOT::Math::Factory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLFactory_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Factory) );
      instance.SetNew(&new_ROOTcLcLMathcLcLFactory);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLFactory);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLFactory);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLFactory);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Factory*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Factory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Factory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Factory*)0x0)->GetClass();
      ROOTcLcLMathcLcLFactory_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)
   {
      ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >", "Math/FitMethodFunction.h", 36,
                  typeid(::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >","ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDim>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary();
   static void ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);
   static void destruct_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>*)
   {
      ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>", "Math/FitMethodFunction.h", 36,
                  typeid(::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>*)0x0)->GetClass();
      ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGaussIntegrator_Dictionary();
   static void ROOTcLcLMathcLcLGaussIntegrator_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGaussIntegrator(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGaussIntegrator(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGaussIntegrator(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGaussIntegrator(void *p);
   static void destruct_ROOTcLcLMathcLcLGaussIntegrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GaussIntegrator*)
   {
      ::ROOT::Math::GaussIntegrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GaussIntegrator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GaussIntegrator", "Math/GaussIntegrator.h", 39,
                  typeid(::ROOT::Math::GaussIntegrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGaussIntegrator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GaussIntegrator) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGaussIntegrator);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGaussIntegrator);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGaussIntegrator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGaussIntegrator);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGaussIntegrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GaussIntegrator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GaussIntegrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GaussIntegrator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGaussIntegrator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GaussIntegrator*)0x0)->GetClass();
      ROOTcLcLMathcLcLGaussIntegrator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGaussIntegrator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGaussLegendreIntegrator_Dictionary();
   static void ROOTcLcLMathcLcLGaussLegendreIntegrator_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGaussLegendreIntegrator(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLGaussLegendreIntegrator(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGaussLegendreIntegrator(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGaussLegendreIntegrator(void *p);
   static void destruct_ROOTcLcLMathcLcLGaussLegendreIntegrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GaussLegendreIntegrator*)
   {
      ::ROOT::Math::GaussLegendreIntegrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GaussLegendreIntegrator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GaussLegendreIntegrator", "Math/GaussLegendreIntegrator.h", 37,
                  typeid(::ROOT::Math::GaussLegendreIntegrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGaussLegendreIntegrator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GaussLegendreIntegrator) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGaussLegendreIntegrator);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGaussLegendreIntegrator);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGaussLegendreIntegrator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGaussLegendreIntegrator);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGaussLegendreIntegrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GaussLegendreIntegrator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GaussLegendreIntegrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GaussLegendreIntegrator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGaussLegendreIntegrator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GaussLegendreIntegrator*)0x0)->GetClass();
      ROOTcLcLMathcLcLGaussLegendreIntegrator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGaussLegendreIntegrator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIRootFinderMethod_Dictionary();
   static void ROOTcLcLMathcLcLIRootFinderMethod_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIRootFinderMethod(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIRootFinderMethod(void *p);
   static void destruct_ROOTcLcLMathcLcLIRootFinderMethod(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IRootFinderMethod*)
   {
      ::ROOT::Math::IRootFinderMethod *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IRootFinderMethod));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IRootFinderMethod", "Math/IRootFinderMethod.h", 34,
                  typeid(::ROOT::Math::IRootFinderMethod), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIRootFinderMethod_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IRootFinderMethod) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIRootFinderMethod);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIRootFinderMethod);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIRootFinderMethod);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IRootFinderMethod*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IRootFinderMethod*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IRootFinderMethod*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIRootFinderMethod_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IRootFinderMethod*)0x0)->GetClass();
      ROOTcLcLMathcLcLIRootFinderMethod_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIRootFinderMethod_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRootFinder_Dictionary();
   static void ROOTcLcLMathcLcLRootFinder_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRootFinder(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRootFinder(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRootFinder(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRootFinder(void *p);
   static void destruct_ROOTcLcLMathcLcLRootFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RootFinder*)
   {
      ::ROOT::Math::RootFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RootFinder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RootFinder", "Math/RootFinder.h", 84,
                  typeid(::ROOT::Math::RootFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRootFinder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::RootFinder) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRootFinder);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRootFinder);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRootFinder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRootFinder);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRootFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RootFinder*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RootFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RootFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRootFinder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RootFinder*)0x0)->GetClass();
      ROOTcLcLMathcLcLRootFinder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRootFinder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRichardsonDerivator_Dictionary();
   static void ROOTcLcLMathcLcLRichardsonDerivator_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRichardsonDerivator(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRichardsonDerivator(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRichardsonDerivator(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRichardsonDerivator(void *p);
   static void destruct_ROOTcLcLMathcLcLRichardsonDerivator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::RichardsonDerivator*)
   {
      ::ROOT::Math::RichardsonDerivator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::RichardsonDerivator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::RichardsonDerivator", "Math/RichardsonDerivator.h", 55,
                  typeid(::ROOT::Math::RichardsonDerivator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRichardsonDerivator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::RichardsonDerivator) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRichardsonDerivator);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRichardsonDerivator);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRichardsonDerivator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRichardsonDerivator);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRichardsonDerivator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::RichardsonDerivator*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::RichardsonDerivator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::RichardsonDerivator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRichardsonDerivator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::RichardsonDerivator*)0x0)->GetClass();
      ROOTcLcLMathcLcLRichardsonDerivator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRichardsonDerivator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLIMinimizer1D_Dictionary();
   static void ROOTcLcLMathcLcLIMinimizer1D_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLIMinimizer1D(void *p);
   static void deleteArray_ROOTcLcLMathcLcLIMinimizer1D(void *p);
   static void destruct_ROOTcLcLMathcLcLIMinimizer1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::IMinimizer1D*)
   {
      ::ROOT::Math::IMinimizer1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::IMinimizer1D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::IMinimizer1D", "Math/IMinimizer1D.h", 50,
                  typeid(::ROOT::Math::IMinimizer1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLIMinimizer1D_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::IMinimizer1D) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLIMinimizer1D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLIMinimizer1D);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLIMinimizer1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::IMinimizer1D*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::IMinimizer1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::IMinimizer1D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLIMinimizer1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::IMinimizer1D*)0x0)->GetClass();
      ROOTcLcLMathcLcLIMinimizer1D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLIMinimizer1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBrentMinimizer1D_Dictionary();
   static void ROOTcLcLMathcLcLBrentMinimizer1D_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLBrentMinimizer1D(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLBrentMinimizer1D(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLBrentMinimizer1D(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBrentMinimizer1D(void *p);
   static void destruct_ROOTcLcLMathcLcLBrentMinimizer1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::BrentMinimizer1D*)
   {
      ::ROOT::Math::BrentMinimizer1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::BrentMinimizer1D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::BrentMinimizer1D", "Math/BrentMinimizer1D.h", 73,
                  typeid(::ROOT::Math::BrentMinimizer1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBrentMinimizer1D_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::BrentMinimizer1D) );
      instance.SetNew(&new_ROOTcLcLMathcLcLBrentMinimizer1D);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLBrentMinimizer1D);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBrentMinimizer1D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBrentMinimizer1D);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBrentMinimizer1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::BrentMinimizer1D*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::BrentMinimizer1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::BrentMinimizer1D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBrentMinimizer1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::BrentMinimizer1D*)0x0)->GetClass();
      ROOTcLcLMathcLcLBrentMinimizer1D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBrentMinimizer1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLBrentRootFinder_Dictionary();
   static void ROOTcLcLMathcLcLBrentRootFinder_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLBrentRootFinder(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLBrentRootFinder(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLBrentRootFinder(void *p);
   static void deleteArray_ROOTcLcLMathcLcLBrentRootFinder(void *p);
   static void destruct_ROOTcLcLMathcLcLBrentRootFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::BrentRootFinder*)
   {
      ::ROOT::Math::BrentRootFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::BrentRootFinder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::BrentRootFinder", "Math/BrentRootFinder.h", 62,
                  typeid(::ROOT::Math::BrentRootFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLBrentRootFinder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::BrentRootFinder) );
      instance.SetNew(&new_ROOTcLcLMathcLcLBrentRootFinder);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLBrentRootFinder);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLBrentRootFinder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLBrentRootFinder);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLBrentRootFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::BrentRootFinder*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::BrentRootFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::BrentRootFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLBrentRootFinder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::BrentRootFinder*)0x0)->GetClass();
      ROOTcLcLMathcLcLBrentRootFinder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLBrentRootFinder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDistSampler_Dictionary();
   static void ROOTcLcLMathcLcLDistSampler_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLDistSampler(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDistSampler(void *p);
   static void destruct_ROOTcLcLMathcLcLDistSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DistSampler*)
   {
      ::ROOT::Math::DistSampler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DistSampler));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DistSampler", "Math/DistSampler.h", 57,
                  typeid(::ROOT::Math::DistSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDistSampler_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DistSampler) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDistSampler);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDistSampler);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDistSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DistSampler*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DistSampler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DistSampler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDistSampler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DistSampler*)0x0)->GetClass();
      ROOTcLcLMathcLcLDistSampler_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDistSampler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDistSamplerOptions_Dictionary();
   static void ROOTcLcLMathcLcLDistSamplerOptions_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDistSamplerOptions(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDistSamplerOptions(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDistSamplerOptions(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDistSamplerOptions(void *p);
   static void destruct_ROOTcLcLMathcLcLDistSamplerOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DistSamplerOptions*)
   {
      ::ROOT::Math::DistSamplerOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DistSamplerOptions));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DistSamplerOptions", "Math/DistSamplerOptions.h", 32,
                  typeid(::ROOT::Math::DistSamplerOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDistSamplerOptions_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DistSamplerOptions) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDistSamplerOptions);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDistSamplerOptions);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDistSamplerOptions);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDistSamplerOptions);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDistSamplerOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DistSamplerOptions*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DistSamplerOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DistSamplerOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDistSamplerOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DistSamplerOptions*)0x0)->GetClass();
      ROOTcLcLMathcLcLDistSamplerOptions_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDistSamplerOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGoFTest_Dictionary();
   static void ROOTcLcLMathcLcLGoFTest_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLGoFTest(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGoFTest(void *p);
   static void destruct_ROOTcLcLMathcLcLGoFTest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GoFTest*)
   {
      ::ROOT::Math::GoFTest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GoFTest));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GoFTest", "Math/GoFTest.h", 38,
                  typeid(::ROOT::Math::GoFTest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGoFTest_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GoFTest) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGoFTest);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGoFTest);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGoFTest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GoFTest*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::GoFTest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::GoFTest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGoFTest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::GoFTest*)0x0)->GetClass();
      ROOTcLcLMathcLcLGoFTest_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGoFTest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLChebyshevPol_Dictionary();
   static void ROOTcLcLMathcLcLChebyshevPol_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLChebyshevPol(void *p);
   static void deleteArray_ROOTcLcLMathcLcLChebyshevPol(void *p);
   static void destruct_ROOTcLcLMathcLcLChebyshevPol(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::ChebyshevPol*)
   {
      ::ROOT::Math::ChebyshevPol *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::ChebyshevPol));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::ChebyshevPol", "Math/ChebyshevPol.h", 129,
                  typeid(::ROOT::Math::ChebyshevPol), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLChebyshevPol_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::ChebyshevPol) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLChebyshevPol);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLChebyshevPol);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLChebyshevPol);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::ChebyshevPol*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::ChebyshevPol*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::ChebyshevPol*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLChebyshevPol_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::ChebyshevPol*)0x0)->GetClass();
      ROOTcLcLMathcLcLChebyshevPol_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLChebyshevPol_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >*)
   {
      ::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >", "Math/KDTree.h", 34,
                  typeid(::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >","ROOT::Math::KDTree<ROOT::Math::TDataPoint1D>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLTDataPointlE1cOfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLTDataPointlE1cOfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::TDataPoint<1,float>*)
   {
      ::ROOT::Math::TDataPoint<1,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::TDataPoint<1,float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::TDataPoint<1,float>", "Math/TDataPoint.h", 27,
                  typeid(::ROOT::Math::TDataPoint<1,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLTDataPointlE1cOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::TDataPoint<1,float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR);

      ::ROOT::AddClassAlternate("ROOT::Math::TDataPoint<1,float>","ROOT::Math::TDataPoint<1,Float_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::TDataPoint<1,float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::TDataPoint<1,float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::TDataPoint<1,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLTDataPointlE1cOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::TDataPoint<1,float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLTDataPointlE1cOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLTDataPointlE1cOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLTDataPointlE1cOdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLTDataPointlE1cOdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::TDataPoint<1,double>*)
   {
      ::ROOT::Math::TDataPoint<1,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::TDataPoint<1,double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::TDataPoint<1,double>", "Math/TDataPoint.h", 27,
                  typeid(::ROOT::Math::TDataPoint<1,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLTDataPointlE1cOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::TDataPoint<1,double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Math::TDataPoint<1,double>","ROOT::Math::TDataPoint<1,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::TDataPoint<1,double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::TDataPoint<1,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::TDataPoint<1,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLTDataPointlE1cOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::TDataPoint<1,double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLTDataPointlE1cOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLTDataPointlE1cOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLTDataPointNlEfloatgR_Dictionary();
   static void ROOTcLcLMathcLcLTDataPointNlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLTDataPointNlEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLTDataPointNlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLTDataPointNlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLTDataPointNlEfloatgR(void *p);
   static void destruct_ROOTcLcLMathcLcLTDataPointNlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::TDataPointN<float>*)
   {
      ::ROOT::Math::TDataPointN<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::TDataPointN<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::TDataPointN<float>", "Math/TDataPointN.h", 30,
                  typeid(::ROOT::Math::TDataPointN<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLTDataPointNlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::TDataPointN<float>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLTDataPointNlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLTDataPointNlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLTDataPointNlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLTDataPointNlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLTDataPointNlEfloatgR);

      ::ROOT::AddClassAlternate("ROOT::Math::TDataPointN<float>","ROOT::Math::TDataPointN<Float_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::TDataPointN<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::TDataPointN<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::TDataPointN<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLTDataPointNlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::TDataPointN<float>*)0x0)->GetClass();
      ROOTcLcLMathcLcLTDataPointNlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLTDataPointNlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLTDataPointNlEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLTDataPointNlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLTDataPointNlEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLTDataPointNlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLTDataPointNlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLTDataPointNlEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLTDataPointNlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::TDataPointN<double>*)
   {
      ::ROOT::Math::TDataPointN<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::TDataPointN<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::TDataPointN<double>", "Math/TDataPointN.h", 30,
                  typeid(::ROOT::Math::TDataPointN<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLTDataPointNlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::TDataPointN<double>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLTDataPointNlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLTDataPointNlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLTDataPointNlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLTDataPointNlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLTDataPointNlEdoublegR);

      ::ROOT::AddClassAlternate("ROOT::Math::TDataPointN<double>","ROOT::Math::TDataPointN<Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::TDataPointN<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::TDataPointN<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::TDataPointN<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLTDataPointNlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::TDataPointN<double>*)0x0)->GetClass();
      ROOTcLcLMathcLcLTDataPointNlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLTDataPointNlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDelaunay2D_Dictionary();
   static void ROOTcLcLMathcLcLDelaunay2D_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLDelaunay2D(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDelaunay2D(void *p);
   static void destruct_ROOTcLcLMathcLcLDelaunay2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Delaunay2D*)
   {
      ::ROOT::Math::Delaunay2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Delaunay2D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Delaunay2D", "Math/Delaunay2D.h", 71,
                  typeid(::ROOT::Math::Delaunay2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDelaunay2D_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Delaunay2D) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDelaunay2D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDelaunay2D);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDelaunay2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Delaunay2D*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Delaunay2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Delaunay2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDelaunay2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Delaunay2D*)0x0)->GetClass();
      ROOTcLcLMathcLcLDelaunay2D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDelaunay2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >*)
   {
      ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>*)
   {
      ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >*)
   {
      ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >*)
   {
      ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >*)
   {
      ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >*)
   {
      ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >*)
   {
      ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >*)
   {
      ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR_Dictionary();
   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(void *p);
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Random<ROOT::Math::LCGEngine>*)
   {
      ::ROOT::Math::Random<ROOT::Math::LCGEngine> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Random<ROOT::Math::LCGEngine>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Random<ROOT::Math::LCGEngine>", "Math/Random.h", 39,
                  typeid(::ROOT::Math::Random<ROOT::Math::LCGEngine>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Random<ROOT::Math::LCGEngine>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Random<ROOT::Math::LCGEngine>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Random<ROOT::Math::LCGEngine>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::LCGEngine>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Random<ROOT::Math::LCGEngine>*)0x0)->GetClass();
      ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR_Dictionary();
   static void ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MixMaxEngine<240,0>*)
   {
      ::ROOT::Math::MixMaxEngine<240,0> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MixMaxEngine<240,0>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MixMaxEngine<240,0>", "Math/MixMaxEngine.h", 155,
                  typeid(::ROOT::Math::MixMaxEngine<240,0>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MixMaxEngine<240,0>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MixMaxEngine<240,0>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MixMaxEngine<240,0>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MixMaxEngine<240,0>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MixMaxEngine<240,0>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR_Dictionary();
   static void ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MixMaxEngine<256,2>*)
   {
      ::ROOT::Math::MixMaxEngine<256,2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MixMaxEngine<256,2>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MixMaxEngine<256,2>", "Math/MixMaxEngine.h", 157,
                  typeid(::ROOT::Math::MixMaxEngine<256,2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MixMaxEngine<256,2>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MixMaxEngine<256,2>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MixMaxEngine<256,2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MixMaxEngine<256,2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MixMaxEngine<256,2>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR_Dictionary();
   static void ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(void *p);
   static void destruct_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MixMaxEngine<17,1>*)
   {
      ::ROOT::Math::MixMaxEngine<17,1> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MixMaxEngine<17,1>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MixMaxEngine<17,1>", "Math/MixMaxEngine.h", 160,
                  typeid(::ROOT::Math::MixMaxEngine<17,1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MixMaxEngine<17,1>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MixMaxEngine<17,1>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MixMaxEngine<17,1>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MixMaxEngine<17,1>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MixMaxEngine<17,1>*)0x0)->GetClass();
      ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLMersenneTwisterEngine_Dictionary();
   static void ROOTcLcLMathcLcLMersenneTwisterEngine_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLMersenneTwisterEngine(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLMersenneTwisterEngine(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLMersenneTwisterEngine(void *p);
   static void deleteArray_ROOTcLcLMathcLcLMersenneTwisterEngine(void *p);
   static void destruct_ROOTcLcLMathcLcLMersenneTwisterEngine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::MersenneTwisterEngine*)
   {
      ::ROOT::Math::MersenneTwisterEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::MersenneTwisterEngine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::MersenneTwisterEngine", "Math/MersenneTwisterEngine.h", 50,
                  typeid(::ROOT::Math::MersenneTwisterEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLMersenneTwisterEngine_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::MersenneTwisterEngine) );
      instance.SetNew(&new_ROOTcLcLMathcLcLMersenneTwisterEngine);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLMersenneTwisterEngine);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLMersenneTwisterEngine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLMersenneTwisterEngine);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLMersenneTwisterEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::MersenneTwisterEngine*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::MersenneTwisterEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::MersenneTwisterEngine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLMersenneTwisterEngine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::MersenneTwisterEngine*)0x0)->GetClass();
      ROOTcLcLMathcLcLMersenneTwisterEngine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLMersenneTwisterEngine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR_Dictionary();
   static void mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR_TClassManip(TClass*);
   static void *new_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(void *p = 0);
   static void *newArray_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(Long_t size, void *p);
   static void delete_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(void *p);
   static void deleteArray_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(void *p);
   static void destruct_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>*)
   {
      ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>));
      static ::ROOT::TGenericClassInfo 
         instance("mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>", "random", 444,
                  typeid(::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR_Dictionary, isa_proxy, 4,
                  sizeof(::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>) );
      instance.SetNew(&new_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR);
      instance.SetNewArray(&newArray_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR);
      instance.SetDelete(&delete_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR);
      instance.SetDeleteArray(&deleteArray_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR);
      instance.SetDestructor(&destruct_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR);

      ::ROOT::AddClassAlternate("mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>","mersenne_twister_engine<uint_fast64_t,64,312,156,31,0xb5026f5aa96619e9ULL,29,0x5555555555555555ULL,17,0x71d67fffeda60000ULL,37,0xfff7eee000000000ULL,43,6364136223846793005ULL>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>*)0x0)->GetClass();
      mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR_TClassManip(theClass);
   return theClass;
   }

   static void mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR_Dictionary();
   static void subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR_TClassManip(TClass*);
   static void *new_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(void *p = 0);
   static void *newArray_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(Long_t size, void *p);
   static void delete_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(void *p);
   static void deleteArray_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(void *p);
   static void destruct_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::subtract_with_carry_engine<unsigned long,48,5,12>*)
   {
      ::subtract_with_carry_engine<unsigned long,48,5,12> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::subtract_with_carry_engine<unsigned long,48,5,12>));
      static ::ROOT::TGenericClassInfo 
         instance("subtract_with_carry_engine<unsigned long,48,5,12>", "random", 659,
                  typeid(::subtract_with_carry_engine<unsigned long,48,5,12>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR_Dictionary, isa_proxy, 4,
                  sizeof(::subtract_with_carry_engine<unsigned long,48,5,12>) );
      instance.SetNew(&new_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR);
      instance.SetNewArray(&newArray_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR);
      instance.SetDelete(&delete_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR);
      instance.SetDeleteArray(&deleteArray_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR);
      instance.SetDestructor(&destruct_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR);

      ::ROOT::AddClassAlternate("subtract_with_carry_engine<unsigned long,48,5,12>","subtract_with_carry_engine<std::uint_fast64_t,48,5,12>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::subtract_with_carry_engine<unsigned long,48,5,12>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::subtract_with_carry_engine<unsigned long,48,5,12>*)0x0)->GetClass();
      subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR_TClassManip(theClass);
   return theClass;
   }

   static void subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR_Dictionary();
   static void discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR_TClassManip(TClass*);
   static void *new_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(void *p = 0);
   static void *newArray_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(Long_t size, void *p);
   static void delete_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(void *p);
   static void deleteArray_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(void *p);
   static void destruct_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>*)
   {
      ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>));
      static ::ROOT::TGenericClassInfo 
         instance("discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>", "random", 846,
                  typeid(::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR_Dictionary, isa_proxy, 4,
                  sizeof(::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>) );
      instance.SetNew(&new_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR);
      instance.SetNewArray(&newArray_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR);
      instance.SetDelete(&delete_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR);
      instance.SetDeleteArray(&deleteArray_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR);
      instance.SetDestructor(&destruct_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR);

      ::ROOT::AddClassAlternate("discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>","discard_block_engine<std::ranlux48_base,389,11>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>*)0x0)->GetClass();
      discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR_TClassManip(theClass);
   return theClass;
   }

   static void discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLStdRandomEngine_Dictionary();
   static void ROOTcLcLMathcLcLStdRandomEngine_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLStdRandomEngine(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLStdRandomEngine(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLStdRandomEngine(void *p);
   static void deleteArray_ROOTcLcLMathcLcLStdRandomEngine(void *p);
   static void destruct_ROOTcLcLMathcLcLStdRandomEngine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::StdRandomEngine*)
   {
      ::ROOT::Math::StdRandomEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::StdRandomEngine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::StdRandomEngine", "Math/StdEngine.h", 24,
                  typeid(::ROOT::Math::StdRandomEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLStdRandomEngine_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::StdRandomEngine) );
      instance.SetNew(&new_ROOTcLcLMathcLcLStdRandomEngine);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLStdRandomEngine);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLStdRandomEngine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLStdRandomEngine);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLStdRandomEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::StdRandomEngine*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::StdRandomEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::StdRandomEngine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLStdRandomEngine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::StdRandomEngine*)0x0)->GetClass();
      ROOTcLcLMathcLcLStdRandomEngine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLStdRandomEngine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_Dictionary();
   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_TClassManip(TClass*);
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p = 0);
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(Long_t size, void *p);
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p);
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p);
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)
   {
      ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandomGen<ROOT::Math::MixMaxEngine<240,0> >", ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::Class_Version(), "TRandomGen.h", 29,
                  typeid(::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >) );
      instance.SetNew(&new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      instance.SetNewArray(&newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      instance.SetDelete(&delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      instance.SetDestructor(&destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)
   {
      return GenerateInitInstanceLocal((::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)0x0)->GetClass();
      TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_Dictionary();
   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_TClassManip(TClass*);
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p = 0);
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(Long_t size, void *p);
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p);
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p);
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)
   {
      ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandomGen<ROOT::Math::MixMaxEngine<256,2> >", ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::Class_Version(), "TRandomGen.h", 29,
                  typeid(::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >) );
      instance.SetNew(&new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      instance.SetNewArray(&newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      instance.SetDelete(&delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      instance.SetDeleteArray(&deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      instance.SetDestructor(&destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)
   {
      return GenerateInitInstanceLocal((::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)0x0)->GetClass();
      TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_Dictionary();
   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_TClassManip(TClass*);
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p = 0);
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(Long_t size, void *p);
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p);
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p);
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)
   {
      ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandomGen<ROOT::Math::MixMaxEngine<17,0> >", ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::Class_Version(), "TRandomGen.h", 29,
                  typeid(::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >) );
      instance.SetNew(&new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      instance.SetNewArray(&newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      instance.SetDelete(&delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      instance.SetDestructor(&destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)
   {
      return GenerateInitInstanceLocal((::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)0x0)->GetClass();
      TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR_Dictionary();
   static void TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR_TClassManip(TClass*);
   static void *new_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(void *p = 0);
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(Long_t size, void *p);
   static void delete_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(void *p);
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(void *p);
   static void destruct_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)
   {
      ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >", ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::Class_Version(), "TRandomGen.h", 29,
                  typeid(::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >) );
      instance.SetNew(&new_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR);
      instance.SetNewArray(&newArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR);
      instance.SetDelete(&delete_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR);
      instance.SetDestructor(&destruct_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR);

      ::ROOT::AddClassAlternate("TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >","TRandomGen<ROOT::Math::StdEngine<std::mt19937_64> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)
   {
      return GenerateInitInstanceLocal((::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)0x0)->GetClass();
      TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR_Dictionary();
   static void TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR_TClassManip(TClass*);
   static void *new_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(void *p = 0);
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(Long_t size, void *p);
   static void delete_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(void *p);
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(void *p);
   static void destruct_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)
   {
      ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >", ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::Class_Version(), "TRandomGen.h", 29,
                  typeid(::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >) );
      instance.SetNew(&new_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR);
      instance.SetNewArray(&newArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR);
      instance.SetDelete(&delete_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR);
      instance.SetDestructor(&destruct_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR);

      ::ROOT::AddClassAlternate("TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >","TRandomGen<ROOT::Math::StdEngine<std::ranlux48> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)
   {
      return GenerateInitInstanceLocal((::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)0x0)->GetClass();
      TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_Dictionary();
   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_TClassManip(TClass*);
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p = 0);
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(Long_t size, void *p);
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p);
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p);
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)
   {
      ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandomGen<ROOT::Math::MixMaxEngine<17,1> >", ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::Class_Version(), "TRandomGen.h", 29,
                  typeid(::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >) );
      instance.SetNew(&new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      instance.SetNewArray(&newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      instance.SetDelete(&delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      instance.SetDeleteArray(&deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      instance.SetDestructor(&destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)
   {
      return GenerateInitInstanceLocal((::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)0x0)->GetClass();
      TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_Dictionary();
   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_TClassManip(TClass*);
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p = 0);
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(Long_t size, void *p);
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p);
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p);
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)
   {
      ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandomGen<ROOT::Math::MixMaxEngine<256,4> >", ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::Class_Version(), "TRandomGen.h", 29,
                  typeid(::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >) );
      instance.SetNew(&new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      instance.SetNewArray(&newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      instance.SetDelete(&delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      instance.SetDestructor(&destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)
   {
      return GenerateInitInstanceLocal((::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)0x0)->GetClass();
      TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_Dictionary();
   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_TClassManip(TClass*);
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p = 0);
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(Long_t size, void *p);
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p);
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p);
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)
   {
      ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRandomGen<ROOT::Math::MixMaxEngine<256,0> >", ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::Class_Version(), "TRandomGen.h", 29,
                  typeid(::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >) );
      instance.SetNew(&new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      instance.SetNewArray(&newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      instance.SetDelete(&delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      instance.SetDestructor(&destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)
   {
      return GenerateInitInstanceLocal((::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)0x0)->GetClass();
      TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLLCGEngine_Dictionary();
   static void ROOTcLcLMathcLcLLCGEngine_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLLCGEngine(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLLCGEngine(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLLCGEngine(void *p);
   static void deleteArray_ROOTcLcLMathcLcLLCGEngine(void *p);
   static void destruct_ROOTcLcLMathcLcLLCGEngine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::LCGEngine*)
   {
      ::ROOT::Math::LCGEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::LCGEngine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::LCGEngine", "Math/LCGEngine.h", 33,
                  typeid(::ROOT::Math::LCGEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLLCGEngine_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::LCGEngine) );
      instance.SetNew(&new_ROOTcLcLMathcLcLLCGEngine);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLLCGEngine);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLLCGEngine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLLCGEngine);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLLCGEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::LCGEngine*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::LCGEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::LCGEngine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLLCGEngine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::LCGEngine*)0x0)->GetClass();
      ROOTcLcLMathcLcLLCGEngine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLLCGEngine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLUnBinDatagR_Dictionary();
   static void ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLUnBinDatagR_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>*)
   {
      ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>", "Fit/BasicFCN.h", 40,
                  typeid(::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLUnBinDatagR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLUnBinDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>*)0x0)->GetClass();
      ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLUnBinDatagR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLUnBinDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLUnBinDatagR_Dictionary();
   static void ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLUnBinDatagR_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>*)
   {
      ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>", "Fit/BasicFCN.h", 40,
                  typeid(::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLUnBinDatagR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>) );

      ::ROOT::AddClassAlternate("ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>","ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDim,ROOT::Fit::UnBinData>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLUnBinDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>*)0x0)->GetClass();
      ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLUnBinDatagR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLUnBinDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLBinDatagR_Dictionary();
   static void ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLBinDatagR_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>*)
   {
      ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>", "Fit/BasicFCN.h", 40,
                  typeid(::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLBinDatagR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLBinDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>*)0x0)->GetClass();
      ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLBinDatagR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimcOROOTcLcLFitcLcLBinDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLBinDatagR_Dictionary();
   static void ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLBinDatagR_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>*)
   {
      ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>", "Fit/BasicFCN.h", 40,
                  typeid(::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLBinDatagR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>) );

      ::ROOT::AddClassAlternate("ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>","ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDim,ROOT::Fit::BinData>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLBinDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>*)0x0)->GetClass();
      ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLBinDatagR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLBasicFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRcOROOTcLcLFitcLcLBinDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLDataOptions_Dictionary();
   static void ROOTcLcLFitcLcLDataOptions_TClassManip(TClass*);
   static void *new_ROOTcLcLFitcLcLDataOptions(void *p = 0);
   static void *newArray_ROOTcLcLFitcLcLDataOptions(Long_t size, void *p);
   static void delete_ROOTcLcLFitcLcLDataOptions(void *p);
   static void deleteArray_ROOTcLcLFitcLcLDataOptions(void *p);
   static void destruct_ROOTcLcLFitcLcLDataOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::DataOptions*)
   {
      ::ROOT::Fit::DataOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::DataOptions));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::DataOptions", "Fit/DataOptions.h", 28,
                  typeid(::ROOT::Fit::DataOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLDataOptions_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Fit::DataOptions) );
      instance.SetNew(&new_ROOTcLcLFitcLcLDataOptions);
      instance.SetNewArray(&newArray_ROOTcLcLFitcLcLDataOptions);
      instance.SetDelete(&delete_ROOTcLcLFitcLcLDataOptions);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLDataOptions);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLDataOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::DataOptions*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::DataOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::DataOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLDataOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::DataOptions*)0x0)->GetClass();
      ROOTcLcLFitcLcLDataOptions_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLDataOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLDataRange_Dictionary();
   static void ROOTcLcLFitcLcLDataRange_TClassManip(TClass*);
   static void *new_ROOTcLcLFitcLcLDataRange(void *p = 0);
   static void *newArray_ROOTcLcLFitcLcLDataRange(Long_t size, void *p);
   static void delete_ROOTcLcLFitcLcLDataRange(void *p);
   static void deleteArray_ROOTcLcLFitcLcLDataRange(void *p);
   static void destruct_ROOTcLcLFitcLcLDataRange(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::DataRange*)
   {
      ::ROOT::Fit::DataRange *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::DataRange));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::DataRange", "Fit/DataRange.h", 34,
                  typeid(::ROOT::Fit::DataRange), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLDataRange_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Fit::DataRange) );
      instance.SetNew(&new_ROOTcLcLFitcLcLDataRange);
      instance.SetNewArray(&newArray_ROOTcLcLFitcLcLDataRange);
      instance.SetDelete(&delete_ROOTcLcLFitcLcLDataRange);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLDataRange);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLDataRange);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::DataRange*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::DataRange*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::DataRange*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLDataRange_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::DataRange*)0x0)->GetClass();
      ROOTcLcLFitcLcLDataRange_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLDataRange_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLFitData_Dictionary();
   static void ROOTcLcLFitcLcLFitData_TClassManip(TClass*);
   static void *new_ROOTcLcLFitcLcLFitData(void *p = 0);
   static void *newArray_ROOTcLcLFitcLcLFitData(Long_t size, void *p);
   static void delete_ROOTcLcLFitcLcLFitData(void *p);
   static void deleteArray_ROOTcLcLFitcLcLFitData(void *p);
   static void destruct_ROOTcLcLFitcLcLFitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::FitData*)
   {
      ::ROOT::Fit::FitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::FitData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::FitData", "Fit/FitData.h", 65,
                  typeid(::ROOT::Fit::FitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLFitData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Fit::FitData) );
      instance.SetNew(&new_ROOTcLcLFitcLcLFitData);
      instance.SetNewArray(&newArray_ROOTcLcLFitcLcLFitData);
      instance.SetDelete(&delete_ROOTcLcLFitcLcLFitData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLFitData);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLFitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::FitData*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::FitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::FitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLFitData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::FitData*)0x0)->GetClass();
      ROOTcLcLFitcLcLFitData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLFitData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLBinData_Dictionary();
   static void ROOTcLcLFitcLcLBinData_TClassManip(TClass*);
   static void *new_ROOTcLcLFitcLcLBinData(void *p = 0);
   static void *newArray_ROOTcLcLFitcLcLBinData(Long_t size, void *p);
   static void delete_ROOTcLcLFitcLcLBinData(void *p);
   static void deleteArray_ROOTcLcLFitcLcLBinData(void *p);
   static void destruct_ROOTcLcLFitcLcLBinData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::BinData*)
   {
      ::ROOT::Fit::BinData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::BinData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::BinData", "Fit/BinData.h", 53,
                  typeid(::ROOT::Fit::BinData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLBinData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Fit::BinData) );
      instance.SetNew(&new_ROOTcLcLFitcLcLBinData);
      instance.SetNewArray(&newArray_ROOTcLcLFitcLcLBinData);
      instance.SetDelete(&delete_ROOTcLcLFitcLcLBinData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLBinData);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLBinData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::BinData*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::BinData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::BinData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLBinData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::BinData*)0x0)->GetClass();
      ROOTcLcLFitcLcLBinData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLBinData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLUnBinData_Dictionary();
   static void ROOTcLcLFitcLcLUnBinData_TClassManip(TClass*);
   static void *new_ROOTcLcLFitcLcLUnBinData(void *p = 0);
   static void *newArray_ROOTcLcLFitcLcLUnBinData(Long_t size, void *p);
   static void delete_ROOTcLcLFitcLcLUnBinData(void *p);
   static void deleteArray_ROOTcLcLFitcLcLUnBinData(void *p);
   static void destruct_ROOTcLcLFitcLcLUnBinData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::UnBinData*)
   {
      ::ROOT::Fit::UnBinData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::UnBinData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::UnBinData", "Fit/UnBinData.h", 42,
                  typeid(::ROOT::Fit::UnBinData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLUnBinData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Fit::UnBinData) );
      instance.SetNew(&new_ROOTcLcLFitcLcLUnBinData);
      instance.SetNewArray(&newArray_ROOTcLcLFitcLcLUnBinData);
      instance.SetDelete(&delete_ROOTcLcLFitcLcLUnBinData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLUnBinData);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLUnBinData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::UnBinData*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::UnBinData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::UnBinData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLUnBinData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::UnBinData*)0x0)->GetClass();
      ROOTcLcLFitcLcLUnBinData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLUnBinData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary();
   static void ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(TClass*);
   static void delete_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)
   {
      ::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >", "Fit/Chi2FCN.h", 58,
                  typeid(::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >) );
      instance.SetDelete(&delete_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >","ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDim>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0x0)->GetClass();
      ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary();
   static void ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(TClass*);
   static void delete_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);
   static void deleteArray_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);
   static void destruct_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>*)
   {
      ::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>", "Fit/Chi2FCN.h", 58,
                  typeid(::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>) );
      instance.SetDelete(&delete_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>*)0x0)->GetClass();
      ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLParameterSettings_Dictionary();
   static void ROOTcLcLFitcLcLParameterSettings_TClassManip(TClass*);
   static void *new_ROOTcLcLFitcLcLParameterSettings(void *p = 0);
   static void *newArray_ROOTcLcLFitcLcLParameterSettings(Long_t size, void *p);
   static void delete_ROOTcLcLFitcLcLParameterSettings(void *p);
   static void deleteArray_ROOTcLcLFitcLcLParameterSettings(void *p);
   static void destruct_ROOTcLcLFitcLcLParameterSettings(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::ParameterSettings*)
   {
      ::ROOT::Fit::ParameterSettings *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::ParameterSettings));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::ParameterSettings", "Fit/ParameterSettings.h", 36,
                  typeid(::ROOT::Fit::ParameterSettings), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLParameterSettings_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Fit::ParameterSettings) );
      instance.SetNew(&new_ROOTcLcLFitcLcLParameterSettings);
      instance.SetNewArray(&newArray_ROOTcLcLFitcLcLParameterSettings);
      instance.SetDelete(&delete_ROOTcLcLFitcLcLParameterSettings);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLParameterSettings);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLParameterSettings);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::ParameterSettings*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::ParameterSettings*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::ParameterSettings*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLParameterSettings_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::ParameterSettings*)0x0)->GetClass();
      ROOTcLcLFitcLcLParameterSettings_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLParameterSettings_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLFitConfig_Dictionary();
   static void ROOTcLcLFitcLcLFitConfig_TClassManip(TClass*);
   static void *new_ROOTcLcLFitcLcLFitConfig(void *p = 0);
   static void *newArray_ROOTcLcLFitcLcLFitConfig(Long_t size, void *p);
   static void delete_ROOTcLcLFitcLcLFitConfig(void *p);
   static void deleteArray_ROOTcLcLFitcLcLFitConfig(void *p);
   static void destruct_ROOTcLcLFitcLcLFitConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::FitConfig*)
   {
      ::ROOT::Fit::FitConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::FitConfig));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::FitConfig", "Fit/FitConfig.h", 45,
                  typeid(::ROOT::Fit::FitConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLFitConfig_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Fit::FitConfig) );
      instance.SetNew(&new_ROOTcLcLFitcLcLFitConfig);
      instance.SetNewArray(&newArray_ROOTcLcLFitcLcLFitConfig);
      instance.SetDelete(&delete_ROOTcLcLFitcLcLFitConfig);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLFitConfig);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLFitConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::FitConfig*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::FitConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::FitConfig*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLFitConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::FitConfig*)0x0)->GetClass();
      ROOTcLcLFitcLcLFitConfig_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLFitConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLFitResult_Dictionary();
   static void ROOTcLcLFitcLcLFitResult_TClassManip(TClass*);
   static void *new_ROOTcLcLFitcLcLFitResult(void *p = 0);
   static void *newArray_ROOTcLcLFitcLcLFitResult(Long_t size, void *p);
   static void delete_ROOTcLcLFitcLcLFitResult(void *p);
   static void deleteArray_ROOTcLcLFitcLcLFitResult(void *p);
   static void destruct_ROOTcLcLFitcLcLFitResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::FitResult*)
   {
      ::ROOT::Fit::FitResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::FitResult));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::FitResult", "Fit/FitResult.h", 48,
                  typeid(::ROOT::Fit::FitResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLFitResult_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Fit::FitResult) );
      instance.SetNew(&new_ROOTcLcLFitcLcLFitResult);
      instance.SetNewArray(&newArray_ROOTcLcLFitcLcLFitResult);
      instance.SetDelete(&delete_ROOTcLcLFitcLcLFitResult);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLFitResult);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLFitResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::FitResult*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::FitResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::FitResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLFitResult_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::FitResult*)0x0)->GetClass();
      ROOTcLcLFitcLcLFitResult_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLFitResult_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLFitter_Dictionary();
   static void ROOTcLcLFitcLcLFitter_TClassManip(TClass*);
   static void *new_ROOTcLcLFitcLcLFitter(void *p = 0);
   static void *newArray_ROOTcLcLFitcLcLFitter(Long_t size, void *p);
   static void delete_ROOTcLcLFitcLcLFitter(void *p);
   static void deleteArray_ROOTcLcLFitcLcLFitter(void *p);
   static void destruct_ROOTcLcLFitcLcLFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::Fitter*)
   {
      ::ROOT::Fit::Fitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::Fitter));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::Fitter", "Fit/Fitter.h", 77,
                  typeid(::ROOT::Fit::Fitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLFitter_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Fit::Fitter) );
      instance.SetNew(&new_ROOTcLcLFitcLcLFitter);
      instance.SetNewArray(&newArray_ROOTcLcLFitcLcLFitter);
      instance.SetDelete(&delete_ROOTcLcLFitcLcLFitter);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLFitter);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::Fitter*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::Fitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::Fitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLFitter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::Fitter*)0x0)->GetClass();
      ROOTcLcLFitcLcLFitter_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLFitter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary();
   static void ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(TClass*);
   static void delete_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)
   {
      ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >", "Fit/LogLikelihoodFCN.h", 45,
                  typeid(::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >) );
      instance.SetDelete(&delete_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >","ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDim>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0x0)->GetClass();
      ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary();
   static void ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(TClass*);
   static void delete_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);
   static void deleteArray_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);
   static void destruct_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)
   {
      ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>", "Fit/LogLikelihoodFCN.h", 45,
                  typeid(::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>) );
      instance.SetDelete(&delete_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)0x0)->GetClass();
      ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary();
   static void ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(TClass*);
   static void delete_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)
   {
      ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >", "Fit/PoissonLikelihoodFCN.h", 48,
                  typeid(::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >) );
      instance.SetDelete(&delete_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >","ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDim>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)0x0)->GetClass();
      ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary();
   static void ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(TClass*);
   static void delete_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);
   static void deleteArray_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);
   static void destruct_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)
   {
      ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>", "Fit/PoissonLikelihoodFCN.h", 48,
                  typeid(::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>) );
      instance.SetDelete(&delete_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)0x0)->GetClass();
      ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLFitcLcLSparseData_Dictionary();
   static void ROOTcLcLFitcLcLSparseData_TClassManip(TClass*);
   static void delete_ROOTcLcLFitcLcLSparseData(void *p);
   static void deleteArray_ROOTcLcLFitcLcLSparseData(void *p);
   static void destruct_ROOTcLcLFitcLcLSparseData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Fit::SparseData*)
   {
      ::ROOT::Fit::SparseData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Fit::SparseData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Fit::SparseData", "Fit/SparseData.h", 26,
                  typeid(::ROOT::Fit::SparseData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLFitcLcLSparseData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Fit::SparseData) );
      instance.SetDelete(&delete_ROOTcLcLFitcLcLSparseData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLFitcLcLSparseData);
      instance.SetDestructor(&destruct_ROOTcLcLFitcLcLSparseData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Fit::SparseData*)
   {
      return GenerateInitInstanceLocal((::ROOT::Fit::SparseData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Fit::SparseData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLFitcLcLSparseData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Fit::SparseData*)0x0)->GetClass();
      ROOTcLcLFitcLcLSparseData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLFitcLcLSparseData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TComplex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TComplex::Class_Name()
{
   return "TComplex";
}

//______________________________________________________________________________
const char *TComplex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TComplex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TComplex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TComplex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TComplex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TComplex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TComplex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TComplex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRandom::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRandom::Class_Name()
{
   return "TRandom";
}

//______________________________________________________________________________
const char *TRandom::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandom*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRandom::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandom*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRandom::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandom*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRandom::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandom*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRandom1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRandom1::Class_Name()
{
   return "TRandom1";
}

//______________________________________________________________________________
const char *TRandom1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandom1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRandom1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandom1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRandom1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandom1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRandom1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandom1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRandom2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRandom2::Class_Name()
{
   return "TRandom2";
}

//______________________________________________________________________________
const char *TRandom2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandom2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRandom2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandom2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRandom2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandom2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRandom2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandom2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRandom3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRandom3::Class_Name()
{
   return "TRandom3";
}

//______________________________________________________________________________
const char *TRandom3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandom3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRandom3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandom3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRandom3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandom3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRandom3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandom3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TKDTree<int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TKDTree<int,double>::Class_Name()
{
   return "TKDTree<int,double>";
}

//______________________________________________________________________________
template <> const char *TKDTree<int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TKDTree<int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TKDTree<int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TKDTree<int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TKDTree<int,float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TKDTree<int,float>::Class_Name()
{
   return "TKDTree<int,float>";
}

//______________________________________________________________________________
template <> const char *TKDTree<int,float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TKDTree<int,float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TKDTree<int,float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TKDTree<int,float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKDTree<int,float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TKDTreeBinning::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TKDTreeBinning::Class_Name()
{
   return "TKDTreeBinning";
}

//______________________________________________________________________________
const char *TKDTreeBinning::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKDTreeBinning*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TKDTreeBinning::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKDTreeBinning*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKDTreeBinning::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKDTreeBinning*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKDTreeBinning::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKDTreeBinning*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStatistic::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStatistic::Class_Name()
{
   return "TStatistic";
}

//______________________________________________________________________________
const char *TStatistic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStatistic*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStatistic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStatistic*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStatistic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStatistic*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStatistic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStatistic*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::Class_Name()
{
   return "TRandomGen<ROOT::Math::MixMaxEngine<240,0> >";
}

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::Class_Name()
{
   return "TRandomGen<ROOT::Math::MixMaxEngine<256,2> >";
}

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::Class_Name()
{
   return "TRandomGen<ROOT::Math::MixMaxEngine<17,0> >";
}

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::Class_Name()
{
   return "TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >";
}

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::Class_Name()
{
   return "TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >";
}

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::Class_Name()
{
   return "TRandomGen<ROOT::Math::MixMaxEngine<17,1> >";
}

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::Class_Name()
{
   return "TRandomGen<ROOT::Math::MixMaxEngine<256,4> >";
}

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::Class_Name()
{
   return "TRandomGen<ROOT::Math::MixMaxEngine<256,0> >";
}

//______________________________________________________________________________
template <> const char *TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > > : new ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >;
   }
   static void *newArray_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >[nElements] : new ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(void *p) {
      delete ((::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >*)p);
   }
   static void deleteArray_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(void *p) {
      delete [] ((::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >*)p);
   }
   static void destruct_reverse_iteratorlE__gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgRsPgR(void *p) {
      typedef ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reverse_iterator<__gnu_cxx::__normal_iterator<double*,vector<double> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<double*,vector<double> > : new ::__gnu_cxx::__normal_iterator<double*,vector<double> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<double*,vector<double> >[nElements] : new ::__gnu_cxx::__normal_iterator<double*,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<double*,vector<double> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<double*,vector<double> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEdoublemUcOvectorlEdoublegRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<double*,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<double*,vector<double> >

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const double*,vector<double> > : new ::__gnu_cxx::__normal_iterator<const double*,vector<double> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const double*,vector<double> >[nElements] : new ::__gnu_cxx::__normal_iterator<const double*,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const double*,vector<double> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const double*,vector<double> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPdoublemUcOvectorlEdoublegRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const double*,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const double*,vector<double> >

//______________________________________________________________________________
void TComplex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TComplex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TComplex::Class(),this);
   } else {
      R__b.WriteClassBuffer(TComplex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TComplex(void *p) {
      return  p ? new(p) ::TComplex : new ::TComplex;
   }
   static void *newArray_TComplex(Long_t nElements, void *p) {
      return p ? new(p) ::TComplex[nElements] : new ::TComplex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TComplex(void *p) {
      delete ((::TComplex*)p);
   }
   static void deleteArray_TComplex(void *p) {
      delete [] ((::TComplex*)p);
   }
   static void destruct_TComplex(void *p) {
      typedef ::TComplex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TComplex

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLTRandomEngine(void *p) {
      delete ((::ROOT::Math::TRandomEngine*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLTRandomEngine(void *p) {
      delete [] ((::ROOT::Math::TRandomEngine*)p);
   }
   static void destruct_ROOTcLcLMathcLcLTRandomEngine(void *p) {
      typedef ::ROOT::Math::TRandomEngine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::TRandomEngine

//______________________________________________________________________________
void TRandom::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandom.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandom::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandom::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandom(void *p) {
      return  p ? new(p) ::TRandom : new ::TRandom;
   }
   static void *newArray_TRandom(Long_t nElements, void *p) {
      return p ? new(p) ::TRandom[nElements] : new ::TRandom[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandom(void *p) {
      delete ((::TRandom*)p);
   }
   static void deleteArray_TRandom(void *p) {
      delete [] ((::TRandom*)p);
   }
   static void destruct_TRandom(void *p) {
      typedef ::TRandom current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandom

//______________________________________________________________________________
void TRandom1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandom1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandom1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandom1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandom1(void *p) {
      return  p ? new(p) ::TRandom1 : new ::TRandom1;
   }
   static void *newArray_TRandom1(Long_t nElements, void *p) {
      return p ? new(p) ::TRandom1[nElements] : new ::TRandom1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandom1(void *p) {
      delete ((::TRandom1*)p);
   }
   static void deleteArray_TRandom1(void *p) {
      delete [] ((::TRandom1*)p);
   }
   static void destruct_TRandom1(void *p) {
      typedef ::TRandom1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandom1

//______________________________________________________________________________
void TRandom2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandom2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandom2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandom2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandom2(void *p) {
      return  p ? new(p) ::TRandom2 : new ::TRandom2;
   }
   static void *newArray_TRandom2(Long_t nElements, void *p) {
      return p ? new(p) ::TRandom2[nElements] : new ::TRandom2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandom2(void *p) {
      delete ((::TRandom2*)p);
   }
   static void deleteArray_TRandom2(void *p) {
      delete [] ((::TRandom2*)p);
   }
   static void destruct_TRandom2(void *p) {
      typedef ::TRandom2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandom2

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandom3(void *p) {
      return  p ? new(p) ::TRandom3 : new ::TRandom3;
   }
   static void *newArray_TRandom3(Long_t nElements, void *p) {
      return p ? new(p) ::TRandom3[nElements] : new ::TRandom3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandom3(void *p) {
      delete ((::TRandom3*)p);
   }
   static void deleteArray_TRandom3(void *p) {
      delete [] ((::TRandom3*)p);
   }
   static void destruct_TRandom3(void *p) {
      typedef ::TRandom3 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRandom3(TBuffer &buf, void *obj) {
      ((::TRandom3*)obj)->::TRandom3::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRandom3

//______________________________________________________________________________
template <> void TKDTree<int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKDTree<int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TKDTree<int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TKDTree<int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TKDTreelEintcOdoublegR(void *p) {
      return  p ? new(p) ::TKDTree<int,double> : new ::TKDTree<int,double>;
   }
   static void *newArray_TKDTreelEintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TKDTree<int,double>[nElements] : new ::TKDTree<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TKDTreelEintcOdoublegR(void *p) {
      delete ((::TKDTree<int,double>*)p);
   }
   static void deleteArray_TKDTreelEintcOdoublegR(void *p) {
      delete [] ((::TKDTree<int,double>*)p);
   }
   static void destruct_TKDTreelEintcOdoublegR(void *p) {
      typedef ::TKDTree<int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TKDTree<int,double>

//______________________________________________________________________________
template <> void TKDTree<int,float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKDTree<int,float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TKDTree<int,float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TKDTree<int,float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TKDTreelEintcOfloatgR(void *p) {
      return  p ? new(p) ::TKDTree<int,float> : new ::TKDTree<int,float>;
   }
   static void *newArray_TKDTreelEintcOfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TKDTree<int,float>[nElements] : new ::TKDTree<int,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TKDTreelEintcOfloatgR(void *p) {
      delete ((::TKDTree<int,float>*)p);
   }
   static void deleteArray_TKDTreelEintcOfloatgR(void *p) {
      delete [] ((::TKDTree<int,float>*)p);
   }
   static void destruct_TKDTreelEintcOfloatgR(void *p) {
      typedef ::TKDTree<int,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TKDTree<int,float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TKDTreeBinning(void *p) {
      return  p ? new(p) ::TKDTreeBinning : new ::TKDTreeBinning;
   }
   static void *newArray_TKDTreeBinning(Long_t nElements, void *p) {
      return p ? new(p) ::TKDTreeBinning[nElements] : new ::TKDTreeBinning[nElements];
   }
   // Wrapper around operator delete
   static void delete_TKDTreeBinning(void *p) {
      delete ((::TKDTreeBinning*)p);
   }
   static void deleteArray_TKDTreeBinning(void *p) {
      delete [] ((::TKDTreeBinning*)p);
   }
   static void destruct_TKDTreeBinning(void *p) {
      typedef ::TKDTreeBinning current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TKDTreeBinning(TBuffer &buf, void *obj) {
      ((::TKDTreeBinning*)obj)->::TKDTreeBinning::Streamer(buf);
   }
} // end of namespace ROOT for class ::TKDTreeBinning

//______________________________________________________________________________
void TStatistic::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStatistic.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TStatistic::Class(),this);
   } else {
      R__b.WriteClassBuffer(TStatistic::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TStatistic(void *p) {
      return  p ? new(p) ::TStatistic : new ::TStatistic;
   }
   static void *newArray_TStatistic(Long_t nElements, void *p) {
      return p ? new(p) ::TStatistic[nElements] : new ::TStatistic[nElements];
   }
   // Wrapper around operator delete
   static void delete_TStatistic(void *p) {
      delete ((::TStatistic*)p);
   }
   static void deleteArray_TStatistic(void *p) {
      delete [] ((::TStatistic*)p);
   }
   static void destruct_TStatistic(void *p) {
      typedef ::TStatistic current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TStatistic(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TStatistic*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TStatistic

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR(void *p) {
      delete ((::ROOT::Math::IBaseFunctionMultiDimTempl<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR(void *p) {
      delete [] ((::ROOT::Math::IBaseFunctionMultiDimTempl<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegR(void *p) {
      typedef ::ROOT::Math::IBaseFunctionMultiDimTempl<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IBaseFunctionMultiDimTempl<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIBaseFunctionOneDim(void *p) {
      delete ((::ROOT::Math::IBaseFunctionOneDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIBaseFunctionOneDim(void *p) {
      delete [] ((::ROOT::Math::IBaseFunctionOneDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIBaseFunctionOneDim(void *p) {
      typedef ::ROOT::Math::IBaseFunctionOneDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IBaseFunctionOneDim

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIGradientMultiDim(void *p) {
      delete ((::ROOT::Math::IGradientMultiDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIGradientMultiDim(void *p) {
      delete [] ((::ROOT::Math::IGradientMultiDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIGradientMultiDim(void *p) {
      typedef ::ROOT::Math::IGradientMultiDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IGradientMultiDim

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIGradientOneDim(void *p) {
      delete ((::ROOT::Math::IGradientOneDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIGradientOneDim(void *p) {
      delete [] ((::ROOT::Math::IGradientOneDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIGradientOneDim(void *p) {
      typedef ::ROOT::Math::IGradientOneDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IGradientOneDim

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIGradientFunctionMultiDim(void *p) {
      delete ((::ROOT::Math::IGradientFunctionMultiDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIGradientFunctionMultiDim(void *p) {
      delete [] ((::ROOT::Math::IGradientFunctionMultiDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIGradientFunctionMultiDim(void *p) {
      typedef ::ROOT::Math::IGradientFunctionMultiDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IGradientFunctionMultiDim

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIGradientFunctionOneDim(void *p) {
      delete ((::ROOT::Math::IGradientFunctionOneDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIGradientFunctionOneDim(void *p) {
      delete [] ((::ROOT::Math::IGradientFunctionOneDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIGradientFunctionOneDim(void *p) {
      typedef ::ROOT::Math::IGradientFunctionOneDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IGradientFunctionOneDim

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR(void *p) {
      delete ((::ROOT::Math::IParametricFunctionMultiDimTempl<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR(void *p) {
      delete [] ((::ROOT::Math::IParametricFunctionMultiDimTempl<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIParametricFunctionMultiDimTempllEdoublegR(void *p) {
      typedef ::ROOT::Math::IParametricFunctionMultiDimTempl<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IParametricFunctionMultiDimTempl<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR(void *p) {
      delete ((::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR(void *p) {
      delete [] ((::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIParametricGradFunctionMultiDimTempllEdoublegR(void *p) {
      typedef ::ROOT::Math::IParametricGradFunctionMultiDimTempl<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IParametricGradFunctionMultiDimTempl<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIBaseParam(void *p) {
      delete ((::ROOT::Math::IBaseParam*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIBaseParam(void *p) {
      delete [] ((::ROOT::Math::IBaseParam*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIBaseParam(void *p) {
      typedef ::ROOT::Math::IBaseParam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IBaseParam

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIParametricFunctionOneDim(void *p) {
      delete ((::ROOT::Math::IParametricFunctionOneDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIParametricFunctionOneDim(void *p) {
      delete [] ((::ROOT::Math::IParametricFunctionOneDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIParametricFunctionOneDim(void *p) {
      typedef ::ROOT::Math::IParametricFunctionOneDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IParametricFunctionOneDim

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIParametricGradFunctionOneDim(void *p) {
      delete ((::ROOT::Math::IParametricGradFunctionOneDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIParametricGradFunctionOneDim(void *p) {
      delete [] ((::ROOT::Math::IParametricGradFunctionOneDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIParametricGradFunctionOneDim(void *p) {
      typedef ::ROOT::Math::IParametricGradFunctionOneDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IParametricGradFunctionOneDim

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLParamFunctor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::ParamFunctor : new ::ROOT::Math::ParamFunctor;
   }
   static void *newArray_ROOTcLcLMathcLcLParamFunctor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::ParamFunctor[nElements] : new ::ROOT::Math::ParamFunctor[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLParamFunctor(void *p) {
      delete ((::ROOT::Math::ParamFunctor*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLParamFunctor(void *p) {
      delete [] ((::ROOT::Math::ParamFunctor*)p);
   }
   static void destruct_ROOTcLcLMathcLcLParamFunctor(void *p) {
      typedef ::ROOT::Math::ParamFunctor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::ParamFunctor

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLFunctor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Functor : new ::ROOT::Math::Functor;
   }
   static void *newArray_ROOTcLcLMathcLcLFunctor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Functor[nElements] : new ::ROOT::Math::Functor[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLFunctor(void *p) {
      delete ((::ROOT::Math::Functor*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLFunctor(void *p) {
      delete [] ((::ROOT::Math::Functor*)p);
   }
   static void destruct_ROOTcLcLMathcLcLFunctor(void *p) {
      typedef ::ROOT::Math::Functor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Functor

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLFunctor1D(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Functor1D : new ::ROOT::Math::Functor1D;
   }
   static void *newArray_ROOTcLcLMathcLcLFunctor1D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Functor1D[nElements] : new ::ROOT::Math::Functor1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLFunctor1D(void *p) {
      delete ((::ROOT::Math::Functor1D*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLFunctor1D(void *p) {
      delete [] ((::ROOT::Math::Functor1D*)p);
   }
   static void destruct_ROOTcLcLMathcLcLFunctor1D(void *p) {
      typedef ::ROOT::Math::Functor1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Functor1D

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGradFunctor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GradFunctor : new ::ROOT::Math::GradFunctor;
   }
   static void *newArray_ROOTcLcLMathcLcLGradFunctor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GradFunctor[nElements] : new ::ROOT::Math::GradFunctor[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGradFunctor(void *p) {
      delete ((::ROOT::Math::GradFunctor*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGradFunctor(void *p) {
      delete [] ((::ROOT::Math::GradFunctor*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGradFunctor(void *p) {
      typedef ::ROOT::Math::GradFunctor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GradFunctor

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGradFunctor1D(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GradFunctor1D : new ::ROOT::Math::GradFunctor1D;
   }
   static void *newArray_ROOTcLcLMathcLcLGradFunctor1D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GradFunctor1D[nElements] : new ::ROOT::Math::GradFunctor1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGradFunctor1D(void *p) {
      delete ((::ROOT::Math::GradFunctor1D*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGradFunctor1D(void *p) {
      delete [] ((::ROOT::Math::GradFunctor1D*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGradFunctor1D(void *p) {
      typedef ::ROOT::Math::GradFunctor1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GradFunctor1D

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMinimizerOptions(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MinimizerOptions : new ::ROOT::Math::MinimizerOptions;
   }
   static void *newArray_ROOTcLcLMathcLcLMinimizerOptions(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MinimizerOptions[nElements] : new ::ROOT::Math::MinimizerOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMinimizerOptions(void *p) {
      delete ((::ROOT::Math::MinimizerOptions*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMinimizerOptions(void *p) {
      delete [] ((::ROOT::Math::MinimizerOptions*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMinimizerOptions(void *p) {
      typedef ::ROOT::Math::MinimizerOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MinimizerOptions

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMinimizer(void *p) {
      delete ((::ROOT::Math::Minimizer*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMinimizer(void *p) {
      delete [] ((::ROOT::Math::Minimizer*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMinimizer(void *p) {
      typedef ::ROOT::Math::Minimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Minimizer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBaseIntegratorOptions(void *p) {
      delete ((::ROOT::Math::BaseIntegratorOptions*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBaseIntegratorOptions(void *p) {
      delete [] ((::ROOT::Math::BaseIntegratorOptions*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBaseIntegratorOptions(void *p) {
      typedef ::ROOT::Math::BaseIntegratorOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::BaseIntegratorOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLIntegratorOneDimOptions(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::IntegratorOneDimOptions : new ::ROOT::Math::IntegratorOneDimOptions;
   }
   static void *newArray_ROOTcLcLMathcLcLIntegratorOneDimOptions(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::IntegratorOneDimOptions[nElements] : new ::ROOT::Math::IntegratorOneDimOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIntegratorOneDimOptions(void *p) {
      delete ((::ROOT::Math::IntegratorOneDimOptions*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIntegratorOneDimOptions(void *p) {
      delete [] ((::ROOT::Math::IntegratorOneDimOptions*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIntegratorOneDimOptions(void *p) {
      typedef ::ROOT::Math::IntegratorOneDimOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IntegratorOneDimOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLIntegratorMultiDimOptions(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::IntegratorMultiDimOptions : new ::ROOT::Math::IntegratorMultiDimOptions;
   }
   static void *newArray_ROOTcLcLMathcLcLIntegratorMultiDimOptions(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::IntegratorMultiDimOptions[nElements] : new ::ROOT::Math::IntegratorMultiDimOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIntegratorMultiDimOptions(void *p) {
      delete ((::ROOT::Math::IntegratorMultiDimOptions*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIntegratorMultiDimOptions(void *p) {
      delete [] ((::ROOT::Math::IntegratorMultiDimOptions*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIntegratorMultiDimOptions(void *p) {
      typedef ::ROOT::Math::IntegratorMultiDimOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IntegratorMultiDimOptions

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIOptions(void *p) {
      delete ((::ROOT::Math::IOptions*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIOptions(void *p) {
      delete [] ((::ROOT::Math::IOptions*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIOptions(void *p) {
      typedef ::ROOT::Math::IOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGenAlgoOptions(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GenAlgoOptions : new ::ROOT::Math::GenAlgoOptions;
   }
   static void *newArray_ROOTcLcLMathcLcLGenAlgoOptions(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GenAlgoOptions[nElements] : new ::ROOT::Math::GenAlgoOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGenAlgoOptions(void *p) {
      delete ((::ROOT::Math::GenAlgoOptions*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGenAlgoOptions(void *p) {
      delete [] ((::ROOT::Math::GenAlgoOptions*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGenAlgoOptions(void *p) {
      typedef ::ROOT::Math::GenAlgoOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GenAlgoOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMinimTransformVariable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MinimTransformVariable : new ::ROOT::Math::MinimTransformVariable;
   }
   static void *newArray_ROOTcLcLMathcLcLMinimTransformVariable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MinimTransformVariable[nElements] : new ::ROOT::Math::MinimTransformVariable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMinimTransformVariable(void *p) {
      delete ((::ROOT::Math::MinimTransformVariable*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMinimTransformVariable(void *p) {
      delete [] ((::ROOT::Math::MinimTransformVariable*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMinimTransformVariable(void *p) {
      typedef ::ROOT::Math::MinimTransformVariable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MinimTransformVariable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLBasicMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BasicMinimizer : new ::ROOT::Math::BasicMinimizer;
   }
   static void *newArray_ROOTcLcLMathcLcLBasicMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BasicMinimizer[nElements] : new ::ROOT::Math::BasicMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBasicMinimizer(void *p) {
      delete ((::ROOT::Math::BasicMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBasicMinimizer(void *p) {
      delete [] ((::ROOT::Math::BasicMinimizer*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBasicMinimizer(void *p) {
      typedef ::ROOT::Math::BasicMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::BasicMinimizer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMinimTransformFunction(void *p) {
      delete ((::ROOT::Math::MinimTransformFunction*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMinimTransformFunction(void *p) {
      delete [] ((::ROOT::Math::MinimTransformFunction*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMinimTransformFunction(void *p) {
      typedef ::ROOT::Math::MinimTransformFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MinimTransformFunction

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVirtualIntegrator(void *p) {
      delete ((::ROOT::Math::VirtualIntegrator*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVirtualIntegrator(void *p) {
      delete [] ((::ROOT::Math::VirtualIntegrator*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVirtualIntegrator(void *p) {
      typedef ::ROOT::Math::VirtualIntegrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::VirtualIntegrator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVirtualIntegratorOneDim(void *p) {
      delete ((::ROOT::Math::VirtualIntegratorOneDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVirtualIntegratorOneDim(void *p) {
      delete [] ((::ROOT::Math::VirtualIntegratorOneDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVirtualIntegratorOneDim(void *p) {
      typedef ::ROOT::Math::VirtualIntegratorOneDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::VirtualIntegratorOneDim

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLVirtualIntegratorMultiDim(void *p) {
      delete ((::ROOT::Math::VirtualIntegratorMultiDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLVirtualIntegratorMultiDim(void *p) {
      delete [] ((::ROOT::Math::VirtualIntegratorMultiDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLVirtualIntegratorMultiDim(void *p) {
      typedef ::ROOT::Math::VirtualIntegratorMultiDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::VirtualIntegratorMultiDim

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLIntegratorOneDim(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::IntegratorOneDim : new ::ROOT::Math::IntegratorOneDim;
   }
   static void *newArray_ROOTcLcLMathcLcLIntegratorOneDim(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::IntegratorOneDim[nElements] : new ::ROOT::Math::IntegratorOneDim[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIntegratorOneDim(void *p) {
      delete ((::ROOT::Math::IntegratorOneDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIntegratorOneDim(void *p) {
      delete [] ((::ROOT::Math::IntegratorOneDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIntegratorOneDim(void *p) {
      typedef ::ROOT::Math::IntegratorOneDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IntegratorOneDim

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::AdaptiveIntegratorMultiDim : new ::ROOT::Math::AdaptiveIntegratorMultiDim;
   }
   static void *newArray_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::AdaptiveIntegratorMultiDim[nElements] : new ::ROOT::Math::AdaptiveIntegratorMultiDim[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(void *p) {
      delete ((::ROOT::Math::AdaptiveIntegratorMultiDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(void *p) {
      delete [] ((::ROOT::Math::AdaptiveIntegratorMultiDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLAdaptiveIntegratorMultiDim(void *p) {
      typedef ::ROOT::Math::AdaptiveIntegratorMultiDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::AdaptiveIntegratorMultiDim

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLIntegratorMultiDim(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::IntegratorMultiDim : new ::ROOT::Math::IntegratorMultiDim;
   }
   static void *newArray_ROOTcLcLMathcLcLIntegratorMultiDim(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::IntegratorMultiDim[nElements] : new ::ROOT::Math::IntegratorMultiDim[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIntegratorMultiDim(void *p) {
      delete ((::ROOT::Math::IntegratorMultiDim*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIntegratorMultiDim(void *p) {
      delete [] ((::ROOT::Math::IntegratorMultiDim*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIntegratorMultiDim(void *p) {
      typedef ::ROOT::Math::IntegratorMultiDim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IntegratorMultiDim

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLFactory(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Factory : new ::ROOT::Math::Factory;
   }
   static void *newArray_ROOTcLcLMathcLcLFactory(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Factory[nElements] : new ::ROOT::Math::Factory[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLFactory(void *p) {
      delete ((::ROOT::Math::Factory*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLFactory(void *p) {
      delete [] ((::ROOT::Math::Factory*)p);
   }
   static void destruct_ROOTcLcLMathcLcLFactory(void *p) {
      typedef ::ROOT::Math::Factory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Factory

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      delete ((::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      typedef ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IBaseFunctionMultiDimTempl<double> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      delete ((::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      delete [] ((::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      typedef ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::BasicFitMethodFunction<ROOT::Math::IGradientFunctionMultiDim>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGaussIntegrator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GaussIntegrator : new ::ROOT::Math::GaussIntegrator;
   }
   static void *newArray_ROOTcLcLMathcLcLGaussIntegrator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GaussIntegrator[nElements] : new ::ROOT::Math::GaussIntegrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGaussIntegrator(void *p) {
      delete ((::ROOT::Math::GaussIntegrator*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGaussIntegrator(void *p) {
      delete [] ((::ROOT::Math::GaussIntegrator*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGaussIntegrator(void *p) {
      typedef ::ROOT::Math::GaussIntegrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GaussIntegrator

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGaussLegendreIntegrator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GaussLegendreIntegrator : new ::ROOT::Math::GaussLegendreIntegrator;
   }
   static void *newArray_ROOTcLcLMathcLcLGaussLegendreIntegrator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::GaussLegendreIntegrator[nElements] : new ::ROOT::Math::GaussLegendreIntegrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGaussLegendreIntegrator(void *p) {
      delete ((::ROOT::Math::GaussLegendreIntegrator*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGaussLegendreIntegrator(void *p) {
      delete [] ((::ROOT::Math::GaussLegendreIntegrator*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGaussLegendreIntegrator(void *p) {
      typedef ::ROOT::Math::GaussLegendreIntegrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GaussLegendreIntegrator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIRootFinderMethod(void *p) {
      delete ((::ROOT::Math::IRootFinderMethod*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIRootFinderMethod(void *p) {
      delete [] ((::ROOT::Math::IRootFinderMethod*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIRootFinderMethod(void *p) {
      typedef ::ROOT::Math::IRootFinderMethod current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IRootFinderMethod

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRootFinder(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RootFinder : new ::ROOT::Math::RootFinder;
   }
   static void *newArray_ROOTcLcLMathcLcLRootFinder(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RootFinder[nElements] : new ::ROOT::Math::RootFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRootFinder(void *p) {
      delete ((::ROOT::Math::RootFinder*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRootFinder(void *p) {
      delete [] ((::ROOT::Math::RootFinder*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRootFinder(void *p) {
      typedef ::ROOT::Math::RootFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RootFinder

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRichardsonDerivator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RichardsonDerivator : new ::ROOT::Math::RichardsonDerivator;
   }
   static void *newArray_ROOTcLcLMathcLcLRichardsonDerivator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::RichardsonDerivator[nElements] : new ::ROOT::Math::RichardsonDerivator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRichardsonDerivator(void *p) {
      delete ((::ROOT::Math::RichardsonDerivator*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRichardsonDerivator(void *p) {
      delete [] ((::ROOT::Math::RichardsonDerivator*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRichardsonDerivator(void *p) {
      typedef ::ROOT::Math::RichardsonDerivator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::RichardsonDerivator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLIMinimizer1D(void *p) {
      delete ((::ROOT::Math::IMinimizer1D*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLIMinimizer1D(void *p) {
      delete [] ((::ROOT::Math::IMinimizer1D*)p);
   }
   static void destruct_ROOTcLcLMathcLcLIMinimizer1D(void *p) {
      typedef ::ROOT::Math::IMinimizer1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::IMinimizer1D

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLBrentMinimizer1D(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BrentMinimizer1D : new ::ROOT::Math::BrentMinimizer1D;
   }
   static void *newArray_ROOTcLcLMathcLcLBrentMinimizer1D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BrentMinimizer1D[nElements] : new ::ROOT::Math::BrentMinimizer1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBrentMinimizer1D(void *p) {
      delete ((::ROOT::Math::BrentMinimizer1D*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBrentMinimizer1D(void *p) {
      delete [] ((::ROOT::Math::BrentMinimizer1D*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBrentMinimizer1D(void *p) {
      typedef ::ROOT::Math::BrentMinimizer1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::BrentMinimizer1D

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLBrentRootFinder(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BrentRootFinder : new ::ROOT::Math::BrentRootFinder;
   }
   static void *newArray_ROOTcLcLMathcLcLBrentRootFinder(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::BrentRootFinder[nElements] : new ::ROOT::Math::BrentRootFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLBrentRootFinder(void *p) {
      delete ((::ROOT::Math::BrentRootFinder*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLBrentRootFinder(void *p) {
      delete [] ((::ROOT::Math::BrentRootFinder*)p);
   }
   static void destruct_ROOTcLcLMathcLcLBrentRootFinder(void *p) {
      typedef ::ROOT::Math::BrentRootFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::BrentRootFinder

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDistSampler(void *p) {
      delete ((::ROOT::Math::DistSampler*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDistSampler(void *p) {
      delete [] ((::ROOT::Math::DistSampler*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDistSampler(void *p) {
      typedef ::ROOT::Math::DistSampler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DistSampler

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDistSamplerOptions(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DistSamplerOptions : new ::ROOT::Math::DistSamplerOptions;
   }
   static void *newArray_ROOTcLcLMathcLcLDistSamplerOptions(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DistSamplerOptions[nElements] : new ::ROOT::Math::DistSamplerOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDistSamplerOptions(void *p) {
      delete ((::ROOT::Math::DistSamplerOptions*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDistSamplerOptions(void *p) {
      delete [] ((::ROOT::Math::DistSamplerOptions*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDistSamplerOptions(void *p) {
      typedef ::ROOT::Math::DistSamplerOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DistSamplerOptions

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGoFTest(void *p) {
      delete ((::ROOT::Math::GoFTest*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLGoFTest(void *p) {
      delete [] ((::ROOT::Math::GoFTest*)p);
   }
   static void destruct_ROOTcLcLMathcLcLGoFTest(void *p) {
      typedef ::ROOT::Math::GoFTest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GoFTest

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLChebyshevPol(void *p) {
      delete ((::ROOT::Math::ChebyshevPol*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLChebyshevPol(void *p) {
      delete [] ((::ROOT::Math::ChebyshevPol*)p);
   }
   static void destruct_ROOTcLcLMathcLcLChebyshevPol(void *p) {
      typedef ::ROOT::Math::ChebyshevPol current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::ChebyshevPol

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR(void *p) {
      delete ((::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLKDTreelEROOTcLcLMathcLcLTDataPointlE1cOdoublegRsPgR(void *p) {
      typedef ::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::KDTree<ROOT::Math::TDataPoint<1,double> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::TDataPoint<1,float> : new ::ROOT::Math::TDataPoint<1,float>;
   }
   static void *newArray_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::TDataPoint<1,float>[nElements] : new ::ROOT::Math::TDataPoint<1,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(void *p) {
      delete ((::ROOT::Math::TDataPoint<1,float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(void *p) {
      delete [] ((::ROOT::Math::TDataPoint<1,float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLTDataPointlE1cOfloatgR(void *p) {
      typedef ::ROOT::Math::TDataPoint<1,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::TDataPoint<1,float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::TDataPoint<1,double> : new ::ROOT::Math::TDataPoint<1,double>;
   }
   static void *newArray_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::TDataPoint<1,double>[nElements] : new ::ROOT::Math::TDataPoint<1,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(void *p) {
      delete ((::ROOT::Math::TDataPoint<1,double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(void *p) {
      delete [] ((::ROOT::Math::TDataPoint<1,double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLTDataPointlE1cOdoublegR(void *p) {
      typedef ::ROOT::Math::TDataPoint<1,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::TDataPoint<1,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLTDataPointNlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::TDataPointN<float> : new ::ROOT::Math::TDataPointN<float>;
   }
   static void *newArray_ROOTcLcLMathcLcLTDataPointNlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::TDataPointN<float>[nElements] : new ::ROOT::Math::TDataPointN<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLTDataPointNlEfloatgR(void *p) {
      delete ((::ROOT::Math::TDataPointN<float>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLTDataPointNlEfloatgR(void *p) {
      delete [] ((::ROOT::Math::TDataPointN<float>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLTDataPointNlEfloatgR(void *p) {
      typedef ::ROOT::Math::TDataPointN<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::TDataPointN<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLTDataPointNlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::TDataPointN<double> : new ::ROOT::Math::TDataPointN<double>;
   }
   static void *newArray_ROOTcLcLMathcLcLTDataPointNlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::TDataPointN<double>[nElements] : new ::ROOT::Math::TDataPointN<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLTDataPointNlEdoublegR(void *p) {
      delete ((::ROOT::Math::TDataPointN<double>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLTDataPointNlEdoublegR(void *p) {
      delete [] ((::ROOT::Math::TDataPointN<double>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLTDataPointNlEdoublegR(void *p) {
      typedef ::ROOT::Math::TDataPointN<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::TDataPointN<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDelaunay2D(void *p) {
      delete ((::ROOT::Math::Delaunay2D*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDelaunay2D(void *p) {
      delete [] ((::ROOT::Math::Delaunay2D*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDelaunay2D(void *p) {
      typedef ::ROOT::Math::Delaunay2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Delaunay2D

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> > : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >[nElements] : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<240,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine> : new ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>[nElements] : new ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMersenneTwisterEnginegR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::MersenneTwisterEngine>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> > : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >[nElements] : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO2gRsPgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,2> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> > : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >[nElements] : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,1> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> > : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >[nElements] : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<17,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> > : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >[nElements] : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,4> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> > : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >[nElements] : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,2> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> > : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >[nElements] : new ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::MixMaxEngine<256,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::LCGEngine> : new ::ROOT::Math::Random<ROOT::Math::LCGEngine>;
   }
   static void *newArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Random<ROOT::Math::LCGEngine>[nElements] : new ::ROOT::Math::Random<ROOT::Math::LCGEngine>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(void *p) {
      delete ((::ROOT::Math::Random<ROOT::Math::LCGEngine>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(void *p) {
      delete [] ((::ROOT::Math::Random<ROOT::Math::LCGEngine>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLRandomlEROOTcLcLMathcLcLLCGEnginegR(void *p) {
      typedef ::ROOT::Math::Random<ROOT::Math::LCGEngine> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Random<ROOT::Math::LCGEngine>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MixMaxEngine<240,0> : new ::ROOT::Math::MixMaxEngine<240,0>;
   }
   static void *newArray_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MixMaxEngine<240,0>[nElements] : new ::ROOT::Math::MixMaxEngine<240,0>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(void *p) {
      delete ((::ROOT::Math::MixMaxEngine<240,0>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(void *p) {
      delete [] ((::ROOT::Math::MixMaxEngine<240,0>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMixMaxEnginelE240cO0gR(void *p) {
      typedef ::ROOT::Math::MixMaxEngine<240,0> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MixMaxEngine<240,0>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MixMaxEngine<256,2> : new ::ROOT::Math::MixMaxEngine<256,2>;
   }
   static void *newArray_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MixMaxEngine<256,2>[nElements] : new ::ROOT::Math::MixMaxEngine<256,2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(void *p) {
      delete ((::ROOT::Math::MixMaxEngine<256,2>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(void *p) {
      delete [] ((::ROOT::Math::MixMaxEngine<256,2>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMixMaxEnginelE256cO2gR(void *p) {
      typedef ::ROOT::Math::MixMaxEngine<256,2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MixMaxEngine<256,2>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MixMaxEngine<17,1> : new ::ROOT::Math::MixMaxEngine<17,1>;
   }
   static void *newArray_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MixMaxEngine<17,1>[nElements] : new ::ROOT::Math::MixMaxEngine<17,1>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(void *p) {
      delete ((::ROOT::Math::MixMaxEngine<17,1>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(void *p) {
      delete [] ((::ROOT::Math::MixMaxEngine<17,1>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMixMaxEnginelE17cO1gR(void *p) {
      typedef ::ROOT::Math::MixMaxEngine<17,1> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MixMaxEngine<17,1>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLMersenneTwisterEngine(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MersenneTwisterEngine : new ::ROOT::Math::MersenneTwisterEngine;
   }
   static void *newArray_ROOTcLcLMathcLcLMersenneTwisterEngine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::MersenneTwisterEngine[nElements] : new ::ROOT::Math::MersenneTwisterEngine[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLMersenneTwisterEngine(void *p) {
      delete ((::ROOT::Math::MersenneTwisterEngine*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLMersenneTwisterEngine(void *p) {
      delete [] ((::ROOT::Math::MersenneTwisterEngine*)p);
   }
   static void destruct_ROOTcLcLMathcLcLMersenneTwisterEngine(void *p) {
      typedef ::ROOT::Math::MersenneTwisterEngine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::MersenneTwisterEngine

namespace ROOT {
   // Wrappers around operator new
   static void *new_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> : new ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>;
   }
   static void *newArray_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>[nElements] : new ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(void *p) {
      delete ((::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>*)p);
   }
   static void deleteArray_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(void *p) {
      delete [] ((::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>*)p);
   }
   static void destruct_mersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gR(void *p) {
      typedef ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005>

namespace ROOT {
   // Wrappers around operator new
   static void *new_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subtract_with_carry_engine<unsigned long,48,5,12> : new ::subtract_with_carry_engine<unsigned long,48,5,12>;
   }
   static void *newArray_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::subtract_with_carry_engine<unsigned long,48,5,12>[nElements] : new ::subtract_with_carry_engine<unsigned long,48,5,12>[nElements];
   }
   // Wrapper around operator delete
   static void delete_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(void *p) {
      delete ((::subtract_with_carry_engine<unsigned long,48,5,12>*)p);
   }
   static void deleteArray_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(void *p) {
      delete [] ((::subtract_with_carry_engine<unsigned long,48,5,12>*)p);
   }
   static void destruct_subtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gR(void *p) {
      typedef ::subtract_with_carry_engine<unsigned long,48,5,12> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::subtract_with_carry_engine<unsigned long,48,5,12>

namespace ROOT {
   // Wrappers around operator new
   static void *new_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> : new ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>;
   }
   static void *newArray_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>[nElements] : new ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>[nElements];
   }
   // Wrapper around operator delete
   static void delete_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(void *p) {
      delete ((::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>*)p);
   }
   static void deleteArray_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(void *p) {
      delete [] ((::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>*)p);
   }
   static void destruct_discard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gR(void *p) {
      typedef ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLStdRandomEngine(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::StdRandomEngine : new ::ROOT::Math::StdRandomEngine;
   }
   static void *newArray_ROOTcLcLMathcLcLStdRandomEngine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::StdRandomEngine[nElements] : new ::ROOT::Math::StdRandomEngine[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLStdRandomEngine(void *p) {
      delete ((::ROOT::Math::StdRandomEngine*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLStdRandomEngine(void *p) {
      delete [] ((::ROOT::Math::StdRandomEngine*)p);
   }
   static void destruct_ROOTcLcLMathcLcLStdRandomEngine(void *p) {
      typedef ::ROOT::Math::StdRandomEngine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::StdRandomEngine

//______________________________________________________________________________
template <> void TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandomGen<ROOT::Math::MixMaxEngine<240,0> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<240,0> >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p) {
      return  p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> > : new ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >;
   }
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >[nElements] : new ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p) {
      delete ((::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)p);
   }
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p) {
      delete [] ((::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >*)p);
   }
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE240cO0gRsPgR(void *p) {
      typedef ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandomGen<ROOT::Math::MixMaxEngine<240,0> >

//______________________________________________________________________________
template <> void TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandomGen<ROOT::Math::MixMaxEngine<256,2> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<256,2> >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p) {
      return  p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> > : new ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >;
   }
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >[nElements] : new ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p) {
      delete ((::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)p);
   }
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p) {
      delete [] ((::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >*)p);
   }
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO2gRsPgR(void *p) {
      typedef ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandomGen<ROOT::Math::MixMaxEngine<256,2> >

//______________________________________________________________________________
template <> void TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandomGen<ROOT::Math::MixMaxEngine<17,0> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<17,0> >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p) {
      return  p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> > : new ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >;
   }
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >[nElements] : new ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p) {
      delete ((::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)p);
   }
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p) {
      delete [] ((::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >*)p);
   }
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO0gRsPgR(void *p) {
      typedef ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandomGen<ROOT::Math::MixMaxEngine<17,0> >

//______________________________________________________________________________
template <> void TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(void *p) {
      return  p ? new(p) ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > > : new ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >;
   }
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >[nElements] : new ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(void *p) {
      delete ((::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)p);
   }
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(void *p) {
      delete [] ((::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >*)p);
   }
   static void destruct_TRandomGenlEROOTcLcLMathcLcLStdEnginelEmersenne_twister_enginelEunsignedsPlongcO64cO312cO156cO31cO13043109905998158313ullcO29cO6148914691236517205cO17cO8202884508482404352cO37cO18444473444759240704ullcO43cO6364136223846793005gRsPgRsPgR(void *p) {
      typedef ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandomGen<ROOT::Math::StdEngine<mersenne_twister_engine<unsigned long,64,312,156,31,13043109905998158313ull,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704ull,43,6364136223846793005> > >

//______________________________________________________________________________
template <> void TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(void *p) {
      return  p ? new(p) ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > > : new ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >;
   }
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >[nElements] : new ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(void *p) {
      delete ((::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)p);
   }
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(void *p) {
      delete [] ((::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >*)p);
   }
   static void destruct_TRandomGenlEROOTcLcLMathcLcLStdEnginelEdiscard_block_enginelEsubtract_with_carry_enginelEunsignedsPlongcO48cO5cO12gRcO389cO11gRsPgRsPgR(void *p) {
      typedef ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandomGen<ROOT::Math::StdEngine<discard_block_engine<subtract_with_carry_engine<unsigned long,48,5,12>,389,11> > >

//______________________________________________________________________________
template <> void TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandomGen<ROOT::Math::MixMaxEngine<17,1> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<17,1> >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p) {
      return  p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> > : new ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >;
   }
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >[nElements] : new ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p) {
      delete ((::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)p);
   }
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p) {
      delete [] ((::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >*)p);
   }
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE17cO1gRsPgR(void *p) {
      typedef ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandomGen<ROOT::Math::MixMaxEngine<17,1> >

//______________________________________________________________________________
template <> void TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandomGen<ROOT::Math::MixMaxEngine<256,4> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<256,4> >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p) {
      return  p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> > : new ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >;
   }
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >[nElements] : new ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p) {
      delete ((::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)p);
   }
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p) {
      delete [] ((::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >*)p);
   }
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO4gRsPgR(void *p) {
      typedef ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandomGen<ROOT::Math::MixMaxEngine<256,4> >

//______________________________________________________________________________
template <> void TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandomGen<ROOT::Math::MixMaxEngine<256,0> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRandomGen<ROOT::Math::MixMaxEngine<256,0> >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p) {
      return  p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> > : new ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >;
   }
   static void *newArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >[nElements] : new ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p) {
      delete ((::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)p);
   }
   static void deleteArray_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p) {
      delete [] ((::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >*)p);
   }
   static void destruct_TRandomGenlEROOTcLcLMathcLcLMixMaxEnginelE256cO0gRsPgR(void *p) {
      typedef ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRandomGen<ROOT::Math::MixMaxEngine<256,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLLCGEngine(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LCGEngine : new ::ROOT::Math::LCGEngine;
   }
   static void *newArray_ROOTcLcLMathcLcLLCGEngine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::LCGEngine[nElements] : new ::ROOT::Math::LCGEngine[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLLCGEngine(void *p) {
      delete ((::ROOT::Math::LCGEngine*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLLCGEngine(void *p) {
      delete [] ((::ROOT::Math::LCGEngine*)p);
   }
   static void destruct_ROOTcLcLMathcLcLLCGEngine(void *p) {
      typedef ::ROOT::Math::LCGEngine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::LCGEngine

namespace ROOT {
} // end of namespace ROOT for class ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::UnBinData>

namespace ROOT {
} // end of namespace ROOT for class ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::UnBinData>

namespace ROOT {
} // end of namespace ROOT for class ::ROOT::Fit::BasicFCN<ROOT::Math::IGradientFunctionMultiDim,ROOT::Fit::BinData>

namespace ROOT {
} // end of namespace ROOT for class ::ROOT::Fit::BasicFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double>,ROOT::Fit::BinData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLFitcLcLDataOptions(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::DataOptions : new ::ROOT::Fit::DataOptions;
   }
   static void *newArray_ROOTcLcLFitcLcLDataOptions(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::DataOptions[nElements] : new ::ROOT::Fit::DataOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLDataOptions(void *p) {
      delete ((::ROOT::Fit::DataOptions*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLDataOptions(void *p) {
      delete [] ((::ROOT::Fit::DataOptions*)p);
   }
   static void destruct_ROOTcLcLFitcLcLDataOptions(void *p) {
      typedef ::ROOT::Fit::DataOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::DataOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLFitcLcLDataRange(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::DataRange : new ::ROOT::Fit::DataRange;
   }
   static void *newArray_ROOTcLcLFitcLcLDataRange(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::DataRange[nElements] : new ::ROOT::Fit::DataRange[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLDataRange(void *p) {
      delete ((::ROOT::Fit::DataRange*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLDataRange(void *p) {
      delete [] ((::ROOT::Fit::DataRange*)p);
   }
   static void destruct_ROOTcLcLFitcLcLDataRange(void *p) {
      typedef ::ROOT::Fit::DataRange current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::DataRange

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLFitcLcLFitData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::FitData : new ::ROOT::Fit::FitData;
   }
   static void *newArray_ROOTcLcLFitcLcLFitData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::FitData[nElements] : new ::ROOT::Fit::FitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLFitData(void *p) {
      delete ((::ROOT::Fit::FitData*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLFitData(void *p) {
      delete [] ((::ROOT::Fit::FitData*)p);
   }
   static void destruct_ROOTcLcLFitcLcLFitData(void *p) {
      typedef ::ROOT::Fit::FitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::FitData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLFitcLcLBinData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::BinData : new ::ROOT::Fit::BinData;
   }
   static void *newArray_ROOTcLcLFitcLcLBinData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::BinData[nElements] : new ::ROOT::Fit::BinData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLBinData(void *p) {
      delete ((::ROOT::Fit::BinData*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLBinData(void *p) {
      delete [] ((::ROOT::Fit::BinData*)p);
   }
   static void destruct_ROOTcLcLFitcLcLBinData(void *p) {
      typedef ::ROOT::Fit::BinData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::BinData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLFitcLcLUnBinData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::UnBinData : new ::ROOT::Fit::UnBinData;
   }
   static void *newArray_ROOTcLcLFitcLcLUnBinData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::UnBinData[nElements] : new ::ROOT::Fit::UnBinData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLUnBinData(void *p) {
      delete ((::ROOT::Fit::UnBinData*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLUnBinData(void *p) {
      delete [] ((::ROOT::Fit::UnBinData*)p);
   }
   static void destruct_ROOTcLcLFitcLcLUnBinData(void *p) {
      typedef ::ROOT::Fit::UnBinData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::UnBinData

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      delete ((::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)p);
   }
   static void destruct_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      typedef ::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::Chi2FCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      delete ((::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      delete [] ((::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>*)p);
   }
   static void destruct_ROOTcLcLFitcLcLChi2FCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      typedef ::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::Chi2FCN<ROOT::Math::IGradientFunctionMultiDim>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLFitcLcLParameterSettings(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::ParameterSettings : new ::ROOT::Fit::ParameterSettings;
   }
   static void *newArray_ROOTcLcLFitcLcLParameterSettings(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::ParameterSettings[nElements] : new ::ROOT::Fit::ParameterSettings[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLParameterSettings(void *p) {
      delete ((::ROOT::Fit::ParameterSettings*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLParameterSettings(void *p) {
      delete [] ((::ROOT::Fit::ParameterSettings*)p);
   }
   static void destruct_ROOTcLcLFitcLcLParameterSettings(void *p) {
      typedef ::ROOT::Fit::ParameterSettings current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::ParameterSettings

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLFitcLcLFitConfig(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::FitConfig : new ::ROOT::Fit::FitConfig;
   }
   static void *newArray_ROOTcLcLFitcLcLFitConfig(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::FitConfig[nElements] : new ::ROOT::Fit::FitConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLFitConfig(void *p) {
      delete ((::ROOT::Fit::FitConfig*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLFitConfig(void *p) {
      delete [] ((::ROOT::Fit::FitConfig*)p);
   }
   static void destruct_ROOTcLcLFitcLcLFitConfig(void *p) {
      typedef ::ROOT::Fit::FitConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::FitConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLFitcLcLFitResult(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::FitResult : new ::ROOT::Fit::FitResult;
   }
   static void *newArray_ROOTcLcLFitcLcLFitResult(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::FitResult[nElements] : new ::ROOT::Fit::FitResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLFitResult(void *p) {
      delete ((::ROOT::Fit::FitResult*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLFitResult(void *p) {
      delete [] ((::ROOT::Fit::FitResult*)p);
   }
   static void destruct_ROOTcLcLFitcLcLFitResult(void *p) {
      typedef ::ROOT::Fit::FitResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::FitResult

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLFitcLcLFitter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::Fitter : new ::ROOT::Fit::Fitter;
   }
   static void *newArray_ROOTcLcLFitcLcLFitter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Fit::Fitter[nElements] : new ::ROOT::Fit::Fitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLFitter(void *p) {
      delete ((::ROOT::Fit::Fitter*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLFitter(void *p) {
      delete [] ((::ROOT::Fit::Fitter*)p);
   }
   static void destruct_ROOTcLcLFitcLcLFitter(void *p) {
      typedef ::ROOT::Fit::Fitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::Fitter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      delete ((::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)p);
   }
   static void destruct_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      typedef ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      delete ((::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      delete [] ((::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)p);
   }
   static void destruct_ROOTcLcLFitcLcLLogLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      typedef ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::LogLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      delete ((::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >*)p);
   }
   static void destruct_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIBaseFunctionMultiDimTempllEdoublegRsPgR(void *p) {
      typedef ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IBaseFunctionMultiDimTempl<double> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      delete ((::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      delete [] ((::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>*)p);
   }
   static void destruct_ROOTcLcLFitcLcLPoissonLikelihoodFCNlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR(void *p) {
      typedef ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::PoissonLikelihoodFCN<ROOT::Math::IGradientFunctionMultiDim>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLFitcLcLSparseData(void *p) {
      delete ((::ROOT::Fit::SparseData*)p);
   }
   static void deleteArray_ROOTcLcLFitcLcLSparseData(void *p) {
      delete [] ((::ROOT::Fit::SparseData*)p);
   }
   static void destruct_ROOTcLcLFitcLcLSparseData(void *p) {
      typedef ::ROOT::Fit::SparseData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Fit::SparseData

namespace ROOT {
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary();
   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<double> >*)
   {
      vector<vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<double> >", -2, "vector", 216,
                  typeid(vector<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<double> >*)0x0)->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete ((vector<vector<double> >*)p);
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] ((vector<vector<double> >*)p);
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<double> >

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 216,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 216,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary();
   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<double,double> >*)
   {
      vector<pair<double,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<double,double> >", -2, "vector", 216,
                  typeid(vector<pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<double,double> >) );
      instance.SetNew(&new_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<double,double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<double,double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<double,double> >*)0x0)->GetClass();
      vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<double,double> > : new vector<pair<double,double> >;
   }
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<double,double> >[nElements] : new vector<pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete ((vector<pair<double,double> >*)p);
   }
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] ((vector<pair<double,double> >*)p);
   }
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      typedef vector<pair<double,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<double,double> >

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
                  &vectorlEdoublegR_Dictionary, isa_proxy, 4,
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
   static TClass *vectorlEconstsPdoublemUgR_Dictionary();
   static void vectorlEconstsPdoublemUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPdoublemUgR(void *p = 0);
   static void *newArray_vectorlEconstsPdoublemUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPdoublemUgR(void *p);
   static void deleteArray_vectorlEconstsPdoublemUgR(void *p);
   static void destruct_vectorlEconstsPdoublemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const double*>*)
   {
      vector<const double*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const double*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const double*>", -2, "vector", 216,
                  typeid(vector<const double*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPdoublemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const double*>) );
      instance.SetNew(&new_vectorlEconstsPdoublemUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPdoublemUgR);
      instance.SetDelete(&delete_vectorlEconstsPdoublemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPdoublemUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPdoublemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const double*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const double*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPdoublemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const double*>*)0x0)->GetClass();
      vectorlEconstsPdoublemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPdoublemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPdoublemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const double*> : new vector<const double*>;
   }
   static void *newArray_vectorlEconstsPdoublemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const double*>[nElements] : new vector<const double*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPdoublemUgR(void *p) {
      delete ((vector<const double*>*)p);
   }
   static void deleteArray_vectorlEconstsPdoublemUgR(void *p) {
      delete [] ((vector<const double*>*)p);
   }
   static void destruct_vectorlEconstsPdoublemUgR(void *p) {
      typedef vector<const double*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const double*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLMathcLcLEMinimVariableTypegR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLEMinimVariableTypegR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::EMinimVariableType>*)
   {
      vector<ROOT::Math::EMinimVariableType> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::EMinimVariableType>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::EMinimVariableType>", -2, "vector", 216,
                  typeid(vector<ROOT::Math::EMinimVariableType>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLEMinimVariableTypegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Math::EMinimVariableType>) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::EMinimVariableType> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::EMinimVariableType>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLEMinimVariableTypegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::EMinimVariableType>*)0x0)->GetClass();
      vectorlEROOTcLcLMathcLcLEMinimVariableTypegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLEMinimVariableTypegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::EMinimVariableType> : new vector<ROOT::Math::EMinimVariableType>;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::EMinimVariableType>[nElements] : new vector<ROOT::Math::EMinimVariableType>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(void *p) {
      delete ((vector<ROOT::Math::EMinimVariableType>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(void *p) {
      delete [] ((vector<ROOT::Math::EMinimVariableType>*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLEMinimVariableTypegR(void *p) {
      typedef vector<ROOT::Math::EMinimVariableType> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::EMinimVariableType>

namespace ROOT {
   static TClass *vectorlEROOTcLcLFitcLcLParameterSettingsgR_Dictionary();
   static void vectorlEROOTcLcLFitcLcLParameterSettingsgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLFitcLcLParameterSettingsgR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLFitcLcLParameterSettingsgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLFitcLcLParameterSettingsgR(void *p);
   static void deleteArray_vectorlEROOTcLcLFitcLcLParameterSettingsgR(void *p);
   static void destruct_vectorlEROOTcLcLFitcLcLParameterSettingsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Fit::ParameterSettings>*)
   {
      vector<ROOT::Fit::ParameterSettings> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Fit::ParameterSettings>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Fit::ParameterSettings>", -2, "vector", 216,
                  typeid(vector<ROOT::Fit::ParameterSettings>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLFitcLcLParameterSettingsgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Fit::ParameterSettings>) );
      instance.SetNew(&new_vectorlEROOTcLcLFitcLcLParameterSettingsgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLFitcLcLParameterSettingsgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLFitcLcLParameterSettingsgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLFitcLcLParameterSettingsgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLFitcLcLParameterSettingsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Fit::ParameterSettings> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Fit::ParameterSettings>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLFitcLcLParameterSettingsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Fit::ParameterSettings>*)0x0)->GetClass();
      vectorlEROOTcLcLFitcLcLParameterSettingsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLFitcLcLParameterSettingsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLFitcLcLParameterSettingsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Fit::ParameterSettings> : new vector<ROOT::Fit::ParameterSettings>;
   }
   static void *newArray_vectorlEROOTcLcLFitcLcLParameterSettingsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Fit::ParameterSettings>[nElements] : new vector<ROOT::Fit::ParameterSettings>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLFitcLcLParameterSettingsgR(void *p) {
      delete ((vector<ROOT::Fit::ParameterSettings>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLFitcLcLParameterSettingsgR(void *p) {
      delete [] ((vector<ROOT::Fit::ParameterSettings>*)p);
   }
   static void destruct_vectorlEROOTcLcLFitcLcLParameterSettingsgR(void *p) {
      typedef vector<ROOT::Fit::ParameterSettings> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Fit::ParameterSettings>

namespace ROOT {
   static TClass *maplEunsignedsPintcOunsignedsPintgR_Dictionary();
   static void maplEunsignedsPintcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOunsignedsPintgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOunsignedsPintgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOunsignedsPintgR(void *p);
   static void deleteArray_maplEunsignedsPintcOunsignedsPintgR(void *p);
   static void destruct_maplEunsignedsPintcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,unsigned int>*)
   {
      map<unsigned int,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,unsigned int>", -2, "map", 99,
                  typeid(map<unsigned int,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,unsigned int>) );
      instance.SetNew(&new_maplEunsignedsPintcOunsignedsPintgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOunsignedsPintgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOunsignedsPintgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,unsigned int>*)0x0)->GetClass();
      maplEunsignedsPintcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,unsigned int> : new map<unsigned int,unsigned int>;
   }
   static void *newArray_maplEunsignedsPintcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,unsigned int>[nElements] : new map<unsigned int,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOunsignedsPintgR(void *p) {
      delete ((map<unsigned int,unsigned int>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOunsignedsPintgR(void *p) {
      delete [] ((map<unsigned int,unsigned int>*)p);
   }
   static void destruct_maplEunsignedsPintcOunsignedsPintgR(void *p) {
      typedef map<unsigned int,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,unsigned int>

namespace ROOT {
   static TClass *maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR_Dictionary();
   static void maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,pair<double,double> >*)
   {
      map<unsigned int,pair<double,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,pair<double,double> >", -2, "map", 99,
                  typeid(map<unsigned int,pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,pair<double,double> >) );
      instance.SetNew(&new_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,pair<double,double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,pair<double,double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,pair<double,double> >*)0x0)->GetClass();
      maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,pair<double,double> > : new map<unsigned int,pair<double,double> >;
   }
   static void *newArray_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,pair<double,double> >[nElements] : new map<unsigned int,pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete ((map<unsigned int,pair<double,double> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] ((map<unsigned int,pair<double,double> >*)p);
   }
   static void destruct_maplEunsignedsPintcOpairlEdoublecOdoublegRsPgR(void *p) {
      typedef map<unsigned int,pair<double,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,pair<double,double> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOboolgR_Dictionary();
   static void maplEunsignedsPintcOboolgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOboolgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOboolgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOboolgR(void *p);
   static void deleteArray_maplEunsignedsPintcOboolgR(void *p);
   static void destruct_maplEunsignedsPintcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,bool>*)
   {
      map<unsigned int,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,bool>", -2, "map", 99,
                  typeid(map<unsigned int,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,bool>) );
      instance.SetNew(&new_maplEunsignedsPintcOboolgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOboolgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOboolgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,bool>*)0x0)->GetClass();
      maplEunsignedsPintcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,bool> : new map<unsigned int,bool>;
   }
   static void *newArray_maplEunsignedsPintcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,bool>[nElements] : new map<unsigned int,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOboolgR(void *p) {
      delete ((map<unsigned int,bool>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOboolgR(void *p) {
      delete [] ((map<unsigned int,bool>*)p);
   }
   static void destruct_maplEunsignedsPintcOboolgR(void *p) {
      typedef map<unsigned int,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,bool>

namespace ROOT {
   static TClass *maplEstringcOstringgR_Dictionary();
   static void maplEstringcOstringgR_TClassManip(TClass*);
   static void *new_maplEstringcOstringgR(void *p = 0);
   static void *newArray_maplEstringcOstringgR(Long_t size, void *p);
   static void delete_maplEstringcOstringgR(void *p);
   static void deleteArray_maplEstringcOstringgR(void *p);
   static void destruct_maplEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,string>*)
   {
      map<string,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,string>", -2, "map", 99,
                  typeid(map<string,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,string>) );
      instance.SetNew(&new_maplEstringcOstringgR);
      instance.SetNewArray(&newArray_maplEstringcOstringgR);
      instance.SetDelete(&delete_maplEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOstringgR);
      instance.SetDestructor(&destruct_maplEstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,string>*)0x0)->GetClass();
      maplEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,string> : new map<string,string>;
   }
   static void *newArray_maplEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,string>[nElements] : new map<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOstringgR(void *p) {
      delete ((map<string,string>*)p);
   }
   static void deleteArray_maplEstringcOstringgR(void *p) {
      delete [] ((map<string,string>*)p);
   }
   static void destruct_maplEstringcOstringgR(void *p) {
      typedef map<string,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,string>

namespace ROOT {
   static TClass *maplEstringcOintgR_Dictionary();
   static void maplEstringcOintgR_TClassManip(TClass*);
   static void *new_maplEstringcOintgR(void *p = 0);
   static void *newArray_maplEstringcOintgR(Long_t size, void *p);
   static void delete_maplEstringcOintgR(void *p);
   static void deleteArray_maplEstringcOintgR(void *p);
   static void destruct_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int>*)
   {
      map<string,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int>", -2, "map", 99,
                  typeid(map<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,int>) );
      instance.SetNew(&new_maplEstringcOintgR);
      instance.SetNewArray(&newArray_maplEstringcOintgR);
      instance.SetDelete(&delete_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintgR);
      instance.SetDestructor(&destruct_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,int>*)0x0)->GetClass();
      maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int> : new map<string,int>;
   }
   static void *newArray_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int>[nElements] : new map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintgR(void *p) {
      delete ((map<string,int>*)p);
   }
   static void deleteArray_maplEstringcOintgR(void *p) {
      delete [] ((map<string,int>*)p);
   }
   static void destruct_maplEstringcOintgR(void *p) {
      typedef map<string,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,int>

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = 0);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 99,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,double>*)0x0)->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete ((map<string,double>*)p);
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] ((map<string,double>*)p);
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace {
  void TriggerDictionaryInitialization_libMathCore_Impl() {
    static const char* headers[] = {
"TComplex.h",
"TMath.h",
"TRandom.h",
"TRandom1.h",
"TRandom2.h",
"TRandom3.h",
"TKDTree.h",
"TKDTreeBinning.h",
"TStatistic.h",
"Math/Error.h",
"Math/IParamFunction.h",
"Math/IFunction.h",
"Math/ParamFunctor.h",
"Math/Functor.h",
"Math/Minimizer.h",
"Math/MinimizerOptions.h",
"Math/IntegratorOptions.h",
"Math/IOptions.h",
"Math/GenAlgoOptions.h",
"Math/BasicMinimizer.h",
"Math/MinimTransformFunction.h",
"Math/MinimTransformVariable.h",
"Math/Integrator.h",
"Math/VirtualIntegrator.h",
"Math/AllIntegrationTypes.h",
"Math/AdaptiveIntegratorMultiDim.h",
"Math/IntegratorMultiDim.h",
"Math/Factory.h",
"Math/FitMethodFunction.h",
"Math/GaussIntegrator.h",
"Math/GaussLegendreIntegrator.h",
"Math/RootFinder.h",
"Math/IRootFinderMethod.h",
"Math/RichardsonDerivator.h",
"Math/BrentMethods.h",
"Math/BrentMinimizer1D.h",
"Math/BrentRootFinder.h",
"Math/DistSampler.h",
"Math/DistSamplerOptions.h",
"Math/GoFTest.h",
"Math/SpecFuncMathCore.h",
"Math/DistFuncMathCore.h",
"Math/ChebyshevPol.h",
"Math/KDTree.h",
"Math/TDataPoint.h",
"Math/TDataPointN.h",
"Math/Delaunay2D.h",
"Math/Random.h",
"Math/TRandomEngine.h",
"Math/RandomFunctions.h",
"Math/StdEngine.h",
"Math/MersenneTwisterEngine.h",
"Math/MixMaxEngine.h",
"TRandomGen.h",
"Math/LCGEngine.h",
"Fit/BasicFCN.h",
"Fit/BinData.h",
"Fit/Chi2FCN.h",
"Fit/DataOptions.h",
"Fit/DataRange.h",
"Fit/DataVectorfwd.h",
"Fit/FcnAdapter.h",
"Fit/FitConfig.h",
"Fit/FitData.h",
"Fit/FitResult.h",
"Fit/FitUtil.h",
"Fit/FitUtilParallel.h",
"Fit/Fitter.h",
"Fit/LogLikelihoodFCN.h",
"Fit/ParameterSettings.h",
"Fit/PoissonLikelihoodFCN.h",
"Fit/SparseData.h",
"Fit/UnBinData.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMathCore dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TComplex.h"
#include "TMath.h"
#include "TRandom.h"
#include "TRandom1.h"
#include "TRandom2.h"
#include "TRandom3.h"
#include "TKDTree.h"
#include "TKDTreeBinning.h"
#include "TStatistic.h"
#include "Math/Error.h"
#include "Math/IParamFunction.h"
#include "Math/IFunction.h"
#include "Math/ParamFunctor.h"
#include "Math/Functor.h"
#include "Math/Minimizer.h"
#include "Math/MinimizerOptions.h"
#include "Math/IntegratorOptions.h"
#include "Math/IOptions.h"
#include "Math/GenAlgoOptions.h"
#include "Math/BasicMinimizer.h"
#include "Math/MinimTransformFunction.h"
#include "Math/MinimTransformVariable.h"
#include "Math/Integrator.h"
#include "Math/VirtualIntegrator.h"
#include "Math/AllIntegrationTypes.h"
#include "Math/AdaptiveIntegratorMultiDim.h"
#include "Math/IntegratorMultiDim.h"
#include "Math/Factory.h"
#include "Math/FitMethodFunction.h"
#include "Math/GaussIntegrator.h"
#include "Math/GaussLegendreIntegrator.h"
#include "Math/RootFinder.h"
#include "Math/IRootFinderMethod.h"
#include "Math/RichardsonDerivator.h"
#include "Math/BrentMethods.h"
#include "Math/BrentMinimizer1D.h"
#include "Math/BrentRootFinder.h"
#include "Math/DistSampler.h"
#include "Math/DistSamplerOptions.h"
#include "Math/GoFTest.h"
#include "Math/SpecFuncMathCore.h"
#include "Math/DistFuncMathCore.h"
#include "Math/ChebyshevPol.h"
#include "Math/KDTree.h"
#include "Math/TDataPoint.h"
#include "Math/TDataPointN.h"
#include "Math/Delaunay2D.h"
#include "Math/Random.h"
#include "Math/TRandomEngine.h"
#include "Math/RandomFunctions.h"
#include "Math/StdEngine.h"
#include "Math/MersenneTwisterEngine.h"
#include "Math/MixMaxEngine.h"
#include "TRandomGen.h"
#include "Math/LCGEngine.h"
#include "Fit/BasicFCN.h"
#include "Fit/BinData.h"
#include "Fit/Chi2FCN.h"
#include "Fit/DataOptions.h"
#include "Fit/DataRange.h"
#include "Fit/DataVectorfwd.h"
#include "Fit/FcnAdapter.h"
#include "Fit/FitConfig.h"
#include "Fit/FitData.h"
#include "Fit/FitResult.h"
#include "Fit/FitUtil.h"
#include "Fit/FitUtilParallel.h"
#include "Fit/Fitter.h"
#include "Fit/LogLikelihoodFCN.h"
#include "Fit/ParameterSettings.h"
#include "Fit/PoissonLikelihoodFCN.h"
#include "Fit/SparseData.h"
#include "Fit/UnBinData.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMathCore",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMathCore_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMathCore_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMathCore() {
  TriggerDictionaryInitialization_libMathCore_Impl();
}
