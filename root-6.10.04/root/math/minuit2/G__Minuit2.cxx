// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Minuit2

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
#include "TMinuit2TraceObject.h"
#include "Minuit2/ABObj.h"
#include "Minuit2/ABProd.h"
#include "Minuit2/ABSum.h"
#include "Minuit2/ABTypes.h"
#include "Minuit2/AnalyticalGradientCalculator.h"
#include "Minuit2/BasicFunctionGradient.h"
#include "Minuit2/BasicFunctionMinimum.h"
#include "Minuit2/BasicMinimumError.h"
#include "Minuit2/BasicMinimumParameters.h"
#include "Minuit2/BasicMinimumSeed.h"
#include "Minuit2/BasicMinimumState.h"
#include "Minuit2/CombinedMinimizer.h"
#include "Minuit2/CombinedMinimumBuilder.h"
#include "Minuit2/ContoursError.h"
#include "Minuit2/DavidonErrorUpdator.h"
#include "Minuit2/FCNAdapter.h"
#include "Minuit2/FCNBase.h"
#include "Minuit2/FCNGradAdapter.h"
#include "Minuit2/FCNGradientBase.h"
#include "Minuit2/FumiliBuilder.h"
#include "Minuit2/FumiliChi2FCN.h"
#include "Minuit2/FumiliErrorUpdator.h"
#include "Minuit2/FumiliFCNAdapter.h"
#include "Minuit2/FumiliFCNBase.h"
#include "Minuit2/FumiliGradientCalculator.h"
#include "Minuit2/FumiliMaximumLikelihoodFCN.h"
#include "Minuit2/FumiliMinimizer.h"
#include "Minuit2/FumiliStandardChi2FCN.h"
#include "Minuit2/FumiliStandardMaximumLikelihoodFCN.h"
#include "Minuit2/FunctionGradient.h"
#include "Minuit2/FunctionMinimizer.h"
#include "Minuit2/FunctionMinimum.h"
#include "Minuit2/GenericFunction.h"
#include "Minuit2/GradientCalculator.h"
#include "Minuit2/HessianGradientCalculator.h"
#include "Minuit2/InitialGradientCalculator.h"
#include "Minuit2/LASymMatrix.h"
#include "Minuit2/LAVector.h"
#include "Minuit2/LaInverse.h"
#include "Minuit2/LaOuterProduct.h"
#include "Minuit2/LaProd.h"
#include "Minuit2/LaSum.h"
#include "Minuit2/MPIProcess.h"
#include "Minuit2/MatrixInverse.h"
#include "Minuit2/MinimumBuilder.h"
#include "Minuit2/MinimumError.h"
#include "Minuit2/MinimumErrorUpdator.h"
#include "Minuit2/MinimumParameters.h"
#include "Minuit2/MinimumSeed.h"
#include "Minuit2/MinimumSeedGenerator.h"
#include "Minuit2/MinimumState.h"
#include "Minuit2/MinosError.h"
#include "Minuit2/Minuit2Minimizer.h"
#include "Minuit2/MinuitParameter.h"
#include "Minuit2/MnApplication.h"
#include "Minuit2/MnConfig.h"
#include "Minuit2/MnContours.h"
#include "Minuit2/MnCovarianceSqueeze.h"
#include "Minuit2/MnCross.h"
#include "Minuit2/MnEigen.h"
#include "Minuit2/MnFcn.h"
#include "Minuit2/MnFumiliMinimize.h"
#include "Minuit2/MnFunctionCross.h"
#include "Minuit2/MnGlobalCorrelationCoeff.h"
#include "Minuit2/MnHesse.h"
#include "Minuit2/MnLineSearch.h"
#include "Minuit2/MnMachinePrecision.h"
#include "Minuit2/MnMatrix.h"
#include "Minuit2/MnMigrad.h"
#include "Minuit2/MnMinimize.h"
#include "Minuit2/MnMinos.h"
#include "Minuit2/MnParabola.h"
#include "Minuit2/MnParabolaFactory.h"
#include "Minuit2/MnParabolaPoint.h"
#include "Minuit2/MnParameterScan.h"
#include "Minuit2/MnPlot.h"
#include "Minuit2/MnPosDef.h"
#include "Minuit2/MnPrint.h"
#include "Minuit2/MnRefCountedPointer.h"
#include "Minuit2/MnReferenceCounter.h"
#include "Minuit2/MnScan.h"
#include "Minuit2/MnSeedGenerator.h"
#include "Minuit2/MnSimplex.h"
#include "Minuit2/MnStrategy.h"
#include "Minuit2/MnTiny.h"
#include "Minuit2/MnTraceObject.h"
#include "Minuit2/MnUserCovariance.h"
#include "Minuit2/MnUserFcn.h"
#include "Minuit2/MnUserParameterState.h"
#include "Minuit2/MnUserParameters.h"
#include "Minuit2/MnUserTransformation.h"
#include "Minuit2/MnVectorTransform.h"
#include "Minuit2/ModularFunctionMinimizer.h"
#include "Minuit2/NegativeG2LineSearch.h"
#include "Minuit2/Numerical2PGradientCalculator.h"
#include "Minuit2/ParametricFunction.h"
#include "Minuit2/ScanBuilder.h"
#include "Minuit2/ScanMinimizer.h"
#include "Minuit2/SimplexBuilder.h"
#include "Minuit2/SimplexMinimizer.h"
#include "Minuit2/SimplexParameters.h"
#include "Minuit2/SimplexSeedGenerator.h"
#include "Minuit2/SinParameterTransformation.h"
#include "Minuit2/SqrtLowParameterTransformation.h"
#include "Minuit2/SqrtUpParameterTransformation.h"
#include "Minuit2/StackAllocator.h"
#include "Minuit2/VariableMetricBuilder.h"
#include "Minuit2/VariableMetricEDMEstimator.h"
#include "Minuit2/VariableMetricMinimizer.h"
#include "Minuit2/VectorOuterProduct.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnTraceObject_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnTraceObject_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnTraceObject(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMnTraceObject(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnTraceObject(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnTraceObject(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnTraceObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnTraceObject*)
   {
      ::ROOT::Minuit2::MnTraceObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnTraceObject));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnTraceObject", "Minuit2/MnTraceObject.h", 20,
                  typeid(::ROOT::Minuit2::MnTraceObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnTraceObject_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnTraceObject) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnTraceObject);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnTraceObject);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnTraceObject);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnTraceObject);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnTraceObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnTraceObject*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnTraceObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnTraceObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnTraceObject_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnTraceObject*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnTraceObject_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnTraceObject_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TMinuit2TraceObject(void *p = 0);
   static void *newArray_TMinuit2TraceObject(Long_t size, void *p);
   static void delete_TMinuit2TraceObject(void *p);
   static void deleteArray_TMinuit2TraceObject(void *p);
   static void destruct_TMinuit2TraceObject(void *p);
   static void streamer_TMinuit2TraceObject(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMinuit2TraceObject*)
   {
      ::TMinuit2TraceObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMinuit2TraceObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMinuit2TraceObject", ::TMinuit2TraceObject::Class_Version(), "TMinuit2TraceObject.h", 30,
                  typeid(::TMinuit2TraceObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMinuit2TraceObject::Dictionary, isa_proxy, 16,
                  sizeof(::TMinuit2TraceObject) );
      instance.SetNew(&new_TMinuit2TraceObject);
      instance.SetNewArray(&newArray_TMinuit2TraceObject);
      instance.SetDelete(&delete_TMinuit2TraceObject);
      instance.SetDeleteArray(&deleteArray_TMinuit2TraceObject);
      instance.SetDestructor(&destruct_TMinuit2TraceObject);
      instance.SetStreamerFunc(&streamer_TMinuit2TraceObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMinuit2TraceObject*)
   {
      return GenerateInitInstanceLocal((::TMinuit2TraceObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMinuit2TraceObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMinuitParameter_Dictionary();
   static void ROOTcLcLMinuit2cLcLMinuitParameter_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMinuitParameter(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMinuitParameter(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMinuitParameter(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMinuitParameter(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMinuitParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MinuitParameter*)
   {
      ::ROOT::Minuit2::MinuitParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MinuitParameter));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MinuitParameter", "Minuit2/MinuitParameter.h", 33,
                  typeid(::ROOT::Minuit2::MinuitParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMinuitParameter_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MinuitParameter) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMinuitParameter);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMinuitParameter);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMinuitParameter);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMinuitParameter);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMinuitParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MinuitParameter*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MinuitParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MinuitParameter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMinuitParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MinuitParameter*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMinuitParameter_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMinuitParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnMachinePrecision_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnMachinePrecision_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMnMachinePrecision(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnMachinePrecision*)
   {
      ::ROOT::Minuit2::MnMachinePrecision *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnMachinePrecision));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnMachinePrecision", "Minuit2/MnMachinePrecision.h", 27,
                  typeid(::ROOT::Minuit2::MnMachinePrecision), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnMachinePrecision_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnMachinePrecision) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnMachinePrecision*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnMachinePrecision*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnMachinePrecision*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnMachinePrecision_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnMachinePrecision*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnMachinePrecision_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnMachinePrecision_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnUserParameters_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnUserParameters_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnUserParameters(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMnUserParameters(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnUserParameters(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnUserParameters(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnUserParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnUserParameters*)
   {
      ::ROOT::Minuit2::MnUserParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnUserParameters));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnUserParameters", "Minuit2/MnUserParameters.h", 37,
                  typeid(::ROOT::Minuit2::MnUserParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnUserParameters_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnUserParameters) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnUserParameters);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnUserParameters);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnUserParameters);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnUserParameters);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnUserParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnUserParameters*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnUserParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnUserParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnUserParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnUserParameters*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnUserParameters_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnUserParameters_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnUserParameterState_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnUserParameterState_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMnUserParameterState(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnUserParameterState*)
   {
      ::ROOT::Minuit2::MnUserParameterState *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnUserParameterState));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnUserParameterState", "Minuit2/MnUserParameterState.h", 31,
                  typeid(::ROOT::Minuit2::MnUserParameterState), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnUserParameterState_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnUserParameterState) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnUserParameterState);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnUserParameterState);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnUserParameterState);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnUserParameterState);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnUserParameterState);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnUserParameterState*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnUserParameterState*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnUserParameterState*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnUserParameterState_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnUserParameterState*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnUserParameterState_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnUserParameterState_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFunctionMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLFunctionMinimizer_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLFunctionMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFunctionMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFunctionMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FunctionMinimizer*)
   {
      ::ROOT::Minuit2::FunctionMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FunctionMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FunctionMinimizer", "Minuit2/FunctionMinimizer.h", 36,
                  typeid(::ROOT::Minuit2::FunctionMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFunctionMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FunctionMinimizer) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFunctionMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFunctionMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFunctionMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FunctionMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::FunctionMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::FunctionMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFunctionMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::FunctionMinimizer*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLFunctionMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFunctionMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLModularFunctionMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLModularFunctionMinimizer_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::ModularFunctionMinimizer*)
   {
      ::ROOT::Minuit2::ModularFunctionMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::ModularFunctionMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::ModularFunctionMinimizer", "Minuit2/ModularFunctionMinimizer.h", 43,
                  typeid(::ROOT::Minuit2::ModularFunctionMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLModularFunctionMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::ModularFunctionMinimizer) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLModularFunctionMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLModularFunctionMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLModularFunctionMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::ModularFunctionMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::ModularFunctionMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::ModularFunctionMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLModularFunctionMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::ModularFunctionMinimizer*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLModularFunctionMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLModularFunctionMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLVariableMetricMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLVariableMetricMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::VariableMetricMinimizer*)
   {
      ::ROOT::Minuit2::VariableMetricMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::VariableMetricMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::VariableMetricMinimizer", "Minuit2/VariableMetricMinimizer.h", 30,
                  typeid(::ROOT::Minuit2::VariableMetricMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLVariableMetricMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::VariableMetricMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::VariableMetricMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::VariableMetricMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::VariableMetricMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLVariableMetricMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::VariableMetricMinimizer*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLVariableMetricMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLVariableMetricMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLSimplexMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLSimplexMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLSimplexMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::SimplexMinimizer*)
   {
      ::ROOT::Minuit2::SimplexMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::SimplexMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::SimplexMinimizer", "Minuit2/SimplexMinimizer.h", 30,
                  typeid(::ROOT::Minuit2::SimplexMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLSimplexMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::SimplexMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::SimplexMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::SimplexMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::SimplexMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLSimplexMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::SimplexMinimizer*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLSimplexMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLSimplexMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLCombinedMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLCombinedMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLCombinedMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::CombinedMinimizer*)
   {
      ::ROOT::Minuit2::CombinedMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::CombinedMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::CombinedMinimizer", "Minuit2/CombinedMinimizer.h", 30,
                  typeid(::ROOT::Minuit2::CombinedMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLCombinedMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::CombinedMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::CombinedMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::CombinedMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::CombinedMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLCombinedMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::CombinedMinimizer*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLCombinedMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLCombinedMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMinosError_Dictionary();
   static void ROOTcLcLMinuit2cLcLMinosError_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMinosError(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMinosError(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMinosError(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMinosError(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMinosError(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MinosError*)
   {
      ::ROOT::Minuit2::MinosError *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MinosError));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MinosError", "Minuit2/MinosError.h", 25,
                  typeid(::ROOT::Minuit2::MinosError), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMinosError_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MinosError) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMinosError);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMinosError);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMinosError);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMinosError);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMinosError);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MinosError*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MinosError*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MinosError*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMinosError_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MinosError*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMinosError_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMinosError_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLGenericFunction_Dictionary();
   static void ROOTcLcLMinuit2cLcLGenericFunction_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLGenericFunction(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLGenericFunction(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLGenericFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::GenericFunction*)
   {
      ::ROOT::Minuit2::GenericFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::GenericFunction));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::GenericFunction", "Minuit2/GenericFunction.h", 35,
                  typeid(::ROOT::Minuit2::GenericFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLGenericFunction_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::GenericFunction) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLGenericFunction);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLGenericFunction);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLGenericFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::GenericFunction*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::GenericFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::GenericFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLGenericFunction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::GenericFunction*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLGenericFunction_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLGenericFunction_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFCNBase_Dictionary();
   static void ROOTcLcLMinuit2cLcLFCNBase_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLFCNBase(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFCNBase(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFCNBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FCNBase*)
   {
      ::ROOT::Minuit2::FCNBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FCNBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FCNBase", "Minuit2/FCNBase.h", 47,
                  typeid(::ROOT::Minuit2::FCNBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFCNBase_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FCNBase) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFCNBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFCNBase);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFCNBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FCNBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::FCNBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::FCNBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFCNBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::FCNBase*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLFCNBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFCNBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFCNGradientBase_Dictionary();
   static void ROOTcLcLMinuit2cLcLFCNGradientBase_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FCNGradientBase*)
   {
      ::ROOT::Minuit2::FCNGradientBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FCNGradientBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FCNGradientBase", "Minuit2/FCNGradientBase.h", 32,
                  typeid(::ROOT::Minuit2::FCNGradientBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFCNGradientBase_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FCNGradientBase) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFCNGradientBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFCNGradientBase);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFCNGradientBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FCNGradientBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::FCNGradientBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::FCNGradientBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFCNGradientBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::FCNGradientBase*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLFCNGradientBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFCNGradientBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFunctionMinimum_Dictionary();
   static void ROOTcLcLMinuit2cLcLFunctionMinimum_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FunctionMinimum*)
   {
      ::ROOT::Minuit2::FunctionMinimum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FunctionMinimum));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FunctionMinimum", "Minuit2/FunctionMinimum.h", 30,
                  typeid(::ROOT::Minuit2::FunctionMinimum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFunctionMinimum_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FunctionMinimum) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFunctionMinimum);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFunctionMinimum);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFunctionMinimum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FunctionMinimum*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::FunctionMinimum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::FunctionMinimum*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFunctionMinimum_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::FunctionMinimum*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLFunctionMinimum_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFunctionMinimum_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFumiliFCNBase_Dictionary();
   static void ROOTcLcLMinuit2cLcLFumiliFCNBase_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FumiliFCNBase*)
   {
      ::ROOT::Minuit2::FumiliFCNBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FumiliFCNBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FumiliFCNBase", "Minuit2/FumiliFCNBase.h", 47,
                  typeid(::ROOT::Minuit2::FumiliFCNBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFumiliFCNBase_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FumiliFCNBase) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFumiliFCNBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFumiliFCNBase);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFumiliFCNBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FumiliFCNBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::FumiliFCNBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::FumiliFCNBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFumiliFCNBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::FumiliFCNBase*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLFumiliFCNBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFumiliFCNBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFumiliMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLFumiliMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLFumiliMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FumiliMinimizer*)
   {
      ::ROOT::Minuit2::FumiliMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FumiliMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FumiliMinimizer", "Minuit2/FumiliMinimizer.h", 50,
                  typeid(::ROOT::Minuit2::FumiliMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFumiliMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FumiliMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FumiliMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::FumiliMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::FumiliMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFumiliMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::FumiliMinimizer*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLFumiliMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFumiliMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMinuit2Minimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLMinuit2Minimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::Minuit2Minimizer*)
   {
      ::ROOT::Minuit2::Minuit2Minimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::Minuit2Minimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::Minuit2Minimizer", "Minuit2/Minuit2Minimizer.h", 55,
                  typeid(::ROOT::Minuit2::Minuit2Minimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMinuit2Minimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::Minuit2Minimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::Minuit2Minimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::Minuit2Minimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::Minuit2Minimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMinuit2Minimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::Minuit2Minimizer*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMinuit2Minimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMinuit2Minimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnStrategy_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnStrategy_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnStrategy(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMnStrategy(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnStrategy(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnStrategy(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnStrategy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnStrategy*)
   {
      ::ROOT::Minuit2::MnStrategy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnStrategy));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnStrategy", "Minuit2/MnStrategy.h", 27,
                  typeid(::ROOT::Minuit2::MnStrategy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnStrategy_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnStrategy) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnStrategy);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnStrategy);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnStrategy);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnStrategy);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnStrategy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnStrategy*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnStrategy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnStrategy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnStrategy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnStrategy*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnStrategy_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnStrategy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnApplication_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnApplication_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnApplication(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnApplication(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnApplication(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnApplication*)
   {
      ::ROOT::Minuit2::MnApplication *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnApplication));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnApplication", "Minuit2/MnApplication.h", 37,
                  typeid(::ROOT::Minuit2::MnApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnApplication_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnApplication) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnApplication);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnApplication);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnApplication*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnApplication*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnApplication*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnApplication_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnApplication*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnApplication_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnApplication_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnContours_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnContours_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnContours(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnContours(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnContours(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnContours*)
   {
      ::ROOT::Minuit2::MnContours *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnContours));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnContours", "Minuit2/MnContours.h", 37,
                  typeid(::ROOT::Minuit2::MnContours), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnContours_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnContours) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnContours);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnContours);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnContours);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnContours*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnContours*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnContours*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnContours_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnContours*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnContours_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnContours_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnFumiliMinimize_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnFumiliMinimize_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnFumiliMinimize*)
   {
      ::ROOT::Minuit2::MnFumiliMinimize *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnFumiliMinimize));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnFumiliMinimize", "Minuit2/MnFumiliMinimize.h", 38,
                  typeid(::ROOT::Minuit2::MnFumiliMinimize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnFumiliMinimize_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnFumiliMinimize) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnFumiliMinimize);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnFumiliMinimize);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnFumiliMinimize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnFumiliMinimize*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnFumiliMinimize*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnFumiliMinimize*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnFumiliMinimize_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnFumiliMinimize*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnFumiliMinimize_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnFumiliMinimize_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnHesse_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnHesse_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnHesse(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMnHesse(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnHesse(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnHesse(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnHesse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnHesse*)
   {
      ::ROOT::Minuit2::MnHesse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnHesse));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnHesse", "Minuit2/MnHesse.h", 40,
                  typeid(::ROOT::Minuit2::MnHesse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnHesse_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnHesse) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnHesse);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnHesse);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnHesse);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnHesse);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnHesse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnHesse*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnHesse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnHesse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnHesse_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnHesse*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnHesse_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnHesse_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnMigrad_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnMigrad_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnMigrad(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMigrad(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnMigrad(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnMigrad*)
   {
      ::ROOT::Minuit2::MnMigrad *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnMigrad));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnMigrad", "Minuit2/MnMigrad.h", 31,
                  typeid(::ROOT::Minuit2::MnMigrad), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnMigrad_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnMigrad) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnMigrad);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnMigrad);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnMigrad);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnMigrad*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnMigrad*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnMigrad*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnMigrad_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnMigrad*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnMigrad_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnMigrad_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnMinimize_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnMinimize_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnMinimize(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMinimize(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnMinimize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnMinimize*)
   {
      ::ROOT::Minuit2::MnMinimize *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnMinimize));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnMinimize", "Minuit2/MnMinimize.h", 29,
                  typeid(::ROOT::Minuit2::MnMinimize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnMinimize_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnMinimize) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnMinimize);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnMinimize);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnMinimize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnMinimize*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnMinimize*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnMinimize*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnMinimize_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnMinimize*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnMinimize_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnMinimize_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnMinos_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnMinos_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnMinos(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMinos(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnMinos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnMinos*)
   {
      ::ROOT::Minuit2::MnMinos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnMinos));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnMinos", "Minuit2/MnMinos.h", 34,
                  typeid(::ROOT::Minuit2::MnMinos), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnMinos_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnMinos) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnMinos);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnMinos);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnMinos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnMinos*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnMinos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnMinos*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnMinos_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnMinos*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnMinos_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnMinos_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnPlot_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnPlot_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnPlot(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLMnPlot(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnPlot(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnPlot(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnPlot*)
   {
      ::ROOT::Minuit2::MnPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnPlot));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnPlot", "Minuit2/MnPlot.h", 26,
                  typeid(::ROOT::Minuit2::MnPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnPlot_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnPlot) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnPlot);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnPlot);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnPlot);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnPlot);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnPlot*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnPlot_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnPlot*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnPlot_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnPlot_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLScanMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLScanMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLScanMinimizer(void *p = 0);
   static void *newArray_ROOTcLcLMinuit2cLcLScanMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLScanMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLScanMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLScanMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::ScanMinimizer*)
   {
      ::ROOT::Minuit2::ScanMinimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::ScanMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::ScanMinimizer", "Minuit2/ScanMinimizer.h", 30,
                  typeid(::ROOT::Minuit2::ScanMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLScanMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::ScanMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLScanMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLScanMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLScanMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLScanMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLScanMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::ScanMinimizer*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::ScanMinimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::ScanMinimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLScanMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::ScanMinimizer*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLScanMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLScanMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnScan_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnScan_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnScan(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnScan(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnScan(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnScan*)
   {
      ::ROOT::Minuit2::MnScan *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnScan));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnScan", "Minuit2/MnScan.h", 31,
                  typeid(::ROOT::Minuit2::MnScan), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnScan_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnScan) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnScan);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnScan);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnScan);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnScan*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnScan*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnScan*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnScan_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnScan*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnScan_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnScan_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnSimplex_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnSimplex_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnSimplex(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnSimplex(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnSimplex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnSimplex*)
   {
      ::ROOT::Minuit2::MnSimplex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnSimplex));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnSimplex", "Minuit2/MnSimplex.h", 34,
                  typeid(::ROOT::Minuit2::MnSimplex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnSimplex_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnSimplex) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnSimplex);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnSimplex);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnSimplex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnSimplex*)
   {
      return GenerateInitInstanceLocal((::ROOT::Minuit2::MnSimplex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnSimplex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnSimplex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Minuit2::MnSimplex*)0x0)->GetClass();
      ROOTcLcLMinuit2cLcLMnSimplex_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnSimplex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMinuit2TraceObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMinuit2TraceObject::Class_Name()
{
   return "TMinuit2TraceObject";
}

//______________________________________________________________________________
const char *TMinuit2TraceObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMinuit2TraceObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMinuit2TraceObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMinuit2TraceObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMinuit2TraceObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMinuit2TraceObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMinuit2TraceObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMinuit2TraceObject*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnTraceObject(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnTraceObject : new ::ROOT::Minuit2::MnTraceObject;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnTraceObject(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnTraceObject[nElements] : new ::ROOT::Minuit2::MnTraceObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnTraceObject(void *p) {
      delete ((::ROOT::Minuit2::MnTraceObject*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnTraceObject(void *p) {
      delete [] ((::ROOT::Minuit2::MnTraceObject*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnTraceObject(void *p) {
      typedef ::ROOT::Minuit2::MnTraceObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnTraceObject

//______________________________________________________________________________
void TMinuit2TraceObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMinuit2TraceObject.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMinuit2TraceObject(void *p) {
      return  p ? new(p) ::TMinuit2TraceObject : new ::TMinuit2TraceObject;
   }
   static void *newArray_TMinuit2TraceObject(Long_t nElements, void *p) {
      return p ? new(p) ::TMinuit2TraceObject[nElements] : new ::TMinuit2TraceObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMinuit2TraceObject(void *p) {
      delete ((::TMinuit2TraceObject*)p);
   }
   static void deleteArray_TMinuit2TraceObject(void *p) {
      delete [] ((::TMinuit2TraceObject*)p);
   }
   static void destruct_TMinuit2TraceObject(void *p) {
      typedef ::TMinuit2TraceObject current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMinuit2TraceObject(TBuffer &buf, void *obj) {
      ((::TMinuit2TraceObject*)obj)->::TMinuit2TraceObject::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMinuit2TraceObject

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMinuitParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MinuitParameter : new ::ROOT::Minuit2::MinuitParameter;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMinuitParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MinuitParameter[nElements] : new ::ROOT::Minuit2::MinuitParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMinuitParameter(void *p) {
      delete ((::ROOT::Minuit2::MinuitParameter*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMinuitParameter(void *p) {
      delete [] ((::ROOT::Minuit2::MinuitParameter*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMinuitParameter(void *p) {
      typedef ::ROOT::Minuit2::MinuitParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MinuitParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnMachinePrecision : new ::ROOT::Minuit2::MnMachinePrecision;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnMachinePrecision(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnMachinePrecision[nElements] : new ::ROOT::Minuit2::MnMachinePrecision[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p) {
      delete ((::ROOT::Minuit2::MnMachinePrecision*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p) {
      delete [] ((::ROOT::Minuit2::MnMachinePrecision*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p) {
      typedef ::ROOT::Minuit2::MnMachinePrecision current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnMachinePrecision

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnUserParameters(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnUserParameters : new ::ROOT::Minuit2::MnUserParameters;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnUserParameters(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnUserParameters[nElements] : new ::ROOT::Minuit2::MnUserParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnUserParameters(void *p) {
      delete ((::ROOT::Minuit2::MnUserParameters*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnUserParameters(void *p) {
      delete [] ((::ROOT::Minuit2::MnUserParameters*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnUserParameters(void *p) {
      typedef ::ROOT::Minuit2::MnUserParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnUserParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnUserParameterState : new ::ROOT::Minuit2::MnUserParameterState;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnUserParameterState(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnUserParameterState[nElements] : new ::ROOT::Minuit2::MnUserParameterState[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p) {
      delete ((::ROOT::Minuit2::MnUserParameterState*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p) {
      delete [] ((::ROOT::Minuit2::MnUserParameterState*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p) {
      typedef ::ROOT::Minuit2::MnUserParameterState current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnUserParameterState

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFunctionMinimizer(void *p) {
      delete ((::ROOT::Minuit2::FunctionMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFunctionMinimizer(void *p) {
      delete [] ((::ROOT::Minuit2::FunctionMinimizer*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLFunctionMinimizer(void *p) {
      typedef ::ROOT::Minuit2::FunctionMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FunctionMinimizer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p) {
      delete ((::ROOT::Minuit2::ModularFunctionMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p) {
      delete [] ((::ROOT::Minuit2::ModularFunctionMinimizer*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p) {
      typedef ::ROOT::Minuit2::ModularFunctionMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::ModularFunctionMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::VariableMetricMinimizer : new ::ROOT::Minuit2::VariableMetricMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::VariableMetricMinimizer[nElements] : new ::ROOT::Minuit2::VariableMetricMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p) {
      delete ((::ROOT::Minuit2::VariableMetricMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p) {
      delete [] ((::ROOT::Minuit2::VariableMetricMinimizer*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p) {
      typedef ::ROOT::Minuit2::VariableMetricMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::VariableMetricMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::SimplexMinimizer : new ::ROOT::Minuit2::SimplexMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLSimplexMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::SimplexMinimizer[nElements] : new ::ROOT::Minuit2::SimplexMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p) {
      delete ((::ROOT::Minuit2::SimplexMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p) {
      delete [] ((::ROOT::Minuit2::SimplexMinimizer*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p) {
      typedef ::ROOT::Minuit2::SimplexMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::SimplexMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::CombinedMinimizer : new ::ROOT::Minuit2::CombinedMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLCombinedMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::CombinedMinimizer[nElements] : new ::ROOT::Minuit2::CombinedMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p) {
      delete ((::ROOT::Minuit2::CombinedMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p) {
      delete [] ((::ROOT::Minuit2::CombinedMinimizer*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p) {
      typedef ::ROOT::Minuit2::CombinedMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::CombinedMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMinosError(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MinosError : new ::ROOT::Minuit2::MinosError;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMinosError(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MinosError[nElements] : new ::ROOT::Minuit2::MinosError[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMinosError(void *p) {
      delete ((::ROOT::Minuit2::MinosError*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMinosError(void *p) {
      delete [] ((::ROOT::Minuit2::MinosError*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMinosError(void *p) {
      typedef ::ROOT::Minuit2::MinosError current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MinosError

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLGenericFunction(void *p) {
      delete ((::ROOT::Minuit2::GenericFunction*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLGenericFunction(void *p) {
      delete [] ((::ROOT::Minuit2::GenericFunction*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLGenericFunction(void *p) {
      typedef ::ROOT::Minuit2::GenericFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::GenericFunction

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFCNBase(void *p) {
      delete ((::ROOT::Minuit2::FCNBase*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFCNBase(void *p) {
      delete [] ((::ROOT::Minuit2::FCNBase*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLFCNBase(void *p) {
      typedef ::ROOT::Minuit2::FCNBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FCNBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p) {
      delete ((::ROOT::Minuit2::FCNGradientBase*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p) {
      delete [] ((::ROOT::Minuit2::FCNGradientBase*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p) {
      typedef ::ROOT::Minuit2::FCNGradientBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FCNGradientBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p) {
      delete ((::ROOT::Minuit2::FunctionMinimum*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p) {
      delete [] ((::ROOT::Minuit2::FunctionMinimum*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p) {
      typedef ::ROOT::Minuit2::FunctionMinimum current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FunctionMinimum

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p) {
      delete ((::ROOT::Minuit2::FumiliFCNBase*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p) {
      delete [] ((::ROOT::Minuit2::FumiliFCNBase*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p) {
      typedef ::ROOT::Minuit2::FumiliFCNBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FumiliFCNBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::FumiliMinimizer : new ::ROOT::Minuit2::FumiliMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLFumiliMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::FumiliMinimizer[nElements] : new ::ROOT::Minuit2::FumiliMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p) {
      delete ((::ROOT::Minuit2::FumiliMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p) {
      delete [] ((::ROOT::Minuit2::FumiliMinimizer*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p) {
      typedef ::ROOT::Minuit2::FumiliMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FumiliMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::Minuit2Minimizer : new ::ROOT::Minuit2::Minuit2Minimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::Minuit2Minimizer[nElements] : new ::ROOT::Minuit2::Minuit2Minimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p) {
      delete ((::ROOT::Minuit2::Minuit2Minimizer*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p) {
      delete [] ((::ROOT::Minuit2::Minuit2Minimizer*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p) {
      typedef ::ROOT::Minuit2::Minuit2Minimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::Minuit2Minimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnStrategy(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnStrategy : new ::ROOT::Minuit2::MnStrategy;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnStrategy(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnStrategy[nElements] : new ::ROOT::Minuit2::MnStrategy[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnStrategy(void *p) {
      delete ((::ROOT::Minuit2::MnStrategy*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnStrategy(void *p) {
      delete [] ((::ROOT::Minuit2::MnStrategy*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnStrategy(void *p) {
      typedef ::ROOT::Minuit2::MnStrategy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnStrategy

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnApplication(void *p) {
      delete ((::ROOT::Minuit2::MnApplication*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnApplication(void *p) {
      delete [] ((::ROOT::Minuit2::MnApplication*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnApplication(void *p) {
      typedef ::ROOT::Minuit2::MnApplication current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnApplication

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnContours(void *p) {
      delete ((::ROOT::Minuit2::MnContours*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnContours(void *p) {
      delete [] ((::ROOT::Minuit2::MnContours*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnContours(void *p) {
      typedef ::ROOT::Minuit2::MnContours current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnContours

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p) {
      delete ((::ROOT::Minuit2::MnFumiliMinimize*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p) {
      delete [] ((::ROOT::Minuit2::MnFumiliMinimize*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p) {
      typedef ::ROOT::Minuit2::MnFumiliMinimize current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnFumiliMinimize

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnHesse(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnHesse : new ::ROOT::Minuit2::MnHesse;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnHesse(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnHesse[nElements] : new ::ROOT::Minuit2::MnHesse[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnHesse(void *p) {
      delete ((::ROOT::Minuit2::MnHesse*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnHesse(void *p) {
      delete [] ((::ROOT::Minuit2::MnHesse*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnHesse(void *p) {
      typedef ::ROOT::Minuit2::MnHesse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnHesse

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnMigrad(void *p) {
      delete ((::ROOT::Minuit2::MnMigrad*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMigrad(void *p) {
      delete [] ((::ROOT::Minuit2::MnMigrad*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnMigrad(void *p) {
      typedef ::ROOT::Minuit2::MnMigrad current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnMigrad

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnMinimize(void *p) {
      delete ((::ROOT::Minuit2::MnMinimize*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMinimize(void *p) {
      delete [] ((::ROOT::Minuit2::MnMinimize*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnMinimize(void *p) {
      typedef ::ROOT::Minuit2::MnMinimize current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnMinimize

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnMinos(void *p) {
      delete ((::ROOT::Minuit2::MnMinos*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMinos(void *p) {
      delete [] ((::ROOT::Minuit2::MnMinos*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnMinos(void *p) {
      typedef ::ROOT::Minuit2::MnMinos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnMinos

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnPlot(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnPlot : new ::ROOT::Minuit2::MnPlot;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnPlot(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::MnPlot[nElements] : new ::ROOT::Minuit2::MnPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnPlot(void *p) {
      delete ((::ROOT::Minuit2::MnPlot*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnPlot(void *p) {
      delete [] ((::ROOT::Minuit2::MnPlot*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnPlot(void *p) {
      typedef ::ROOT::Minuit2::MnPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnPlot

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLScanMinimizer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::ScanMinimizer : new ::ROOT::Minuit2::ScanMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLScanMinimizer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Minuit2::ScanMinimizer[nElements] : new ::ROOT::Minuit2::ScanMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLScanMinimizer(void *p) {
      delete ((::ROOT::Minuit2::ScanMinimizer*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLScanMinimizer(void *p) {
      delete [] ((::ROOT::Minuit2::ScanMinimizer*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLScanMinimizer(void *p) {
      typedef ::ROOT::Minuit2::ScanMinimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::ScanMinimizer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnScan(void *p) {
      delete ((::ROOT::Minuit2::MnScan*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnScan(void *p) {
      delete [] ((::ROOT::Minuit2::MnScan*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnScan(void *p) {
      typedef ::ROOT::Minuit2::MnScan current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnScan

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnSimplex(void *p) {
      delete ((::ROOT::Minuit2::MnSimplex*)p);
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnSimplex(void *p) {
      delete [] ((::ROOT::Minuit2::MnSimplex*)p);
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnSimplex(void *p) {
      typedef ::ROOT::Minuit2::MnSimplex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnSimplex

namespace ROOT {
   static TClass *vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_Dictionary();
   static void vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p = 0);
   static void *newArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p);
   static void deleteArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p);
   static void destruct_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Minuit2::MinuitParameter>*)
   {
      vector<ROOT::Minuit2::MinuitParameter> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Minuit2::MinuitParameter>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Minuit2::MinuitParameter>", -2, "vector", 216,
                  typeid(vector<ROOT::Minuit2::MinuitParameter>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Minuit2::MinuitParameter>) );
      instance.SetNew(&new_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Minuit2::MinuitParameter> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Minuit2::MinuitParameter>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Minuit2::MinuitParameter>*)0x0)->GetClass();
      vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Minuit2::MinuitParameter> : new vector<ROOT::Minuit2::MinuitParameter>;
   }
   static void *newArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Minuit2::MinuitParameter>[nElements] : new vector<ROOT::Minuit2::MinuitParameter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p) {
      delete ((vector<ROOT::Minuit2::MinuitParameter>*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p) {
      delete [] ((vector<ROOT::Minuit2::MinuitParameter>*)p);
   }
   static void destruct_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p) {
      typedef vector<ROOT::Minuit2::MinuitParameter> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Minuit2::MinuitParameter>

namespace {
  void TriggerDictionaryInitialization_libMinuit2_Impl() {
    static const char* headers[] = {
"TMinuit2TraceObject.h",
"Minuit2/ABObj.h",
"Minuit2/ABProd.h",
"Minuit2/ABSum.h",
"Minuit2/ABTypes.h",
"Minuit2/AnalyticalGradientCalculator.h",
"Minuit2/BasicFunctionGradient.h",
"Minuit2/BasicFunctionMinimum.h",
"Minuit2/BasicMinimumError.h",
"Minuit2/BasicMinimumParameters.h",
"Minuit2/BasicMinimumSeed.h",
"Minuit2/BasicMinimumState.h",
"Minuit2/CombinedMinimizer.h",
"Minuit2/CombinedMinimumBuilder.h",
"Minuit2/ContoursError.h",
"Minuit2/DavidonErrorUpdator.h",
"Minuit2/FCNAdapter.h",
"Minuit2/FCNBase.h",
"Minuit2/FCNGradAdapter.h",
"Minuit2/FCNGradientBase.h",
"Minuit2/FumiliBuilder.h",
"Minuit2/FumiliChi2FCN.h",
"Minuit2/FumiliErrorUpdator.h",
"Minuit2/FumiliFCNAdapter.h",
"Minuit2/FumiliFCNBase.h",
"Minuit2/FumiliGradientCalculator.h",
"Minuit2/FumiliMaximumLikelihoodFCN.h",
"Minuit2/FumiliMinimizer.h",
"Minuit2/FumiliStandardChi2FCN.h",
"Minuit2/FumiliStandardMaximumLikelihoodFCN.h",
"Minuit2/FunctionGradient.h",
"Minuit2/FunctionMinimizer.h",
"Minuit2/FunctionMinimum.h",
"Minuit2/GenericFunction.h",
"Minuit2/GradientCalculator.h",
"Minuit2/HessianGradientCalculator.h",
"Minuit2/InitialGradientCalculator.h",
"Minuit2/LASymMatrix.h",
"Minuit2/LAVector.h",
"Minuit2/LaInverse.h",
"Minuit2/LaOuterProduct.h",
"Minuit2/LaProd.h",
"Minuit2/LaSum.h",
"Minuit2/MPIProcess.h",
"Minuit2/MatrixInverse.h",
"Minuit2/MinimumBuilder.h",
"Minuit2/MinimumError.h",
"Minuit2/MinimumErrorUpdator.h",
"Minuit2/MinimumParameters.h",
"Minuit2/MinimumSeed.h",
"Minuit2/MinimumSeedGenerator.h",
"Minuit2/MinimumState.h",
"Minuit2/MinosError.h",
"Minuit2/Minuit2Minimizer.h",
"Minuit2/MinuitParameter.h",
"Minuit2/MnApplication.h",
"Minuit2/MnConfig.h",
"Minuit2/MnContours.h",
"Minuit2/MnCovarianceSqueeze.h",
"Minuit2/MnCross.h",
"Minuit2/MnEigen.h",
"Minuit2/MnFcn.h",
"Minuit2/MnFumiliMinimize.h",
"Minuit2/MnFunctionCross.h",
"Minuit2/MnGlobalCorrelationCoeff.h",
"Minuit2/MnHesse.h",
"Minuit2/MnLineSearch.h",
"Minuit2/MnMachinePrecision.h",
"Minuit2/MnMatrix.h",
"Minuit2/MnMigrad.h",
"Minuit2/MnMinimize.h",
"Minuit2/MnMinos.h",
"Minuit2/MnParabola.h",
"Minuit2/MnParabolaFactory.h",
"Minuit2/MnParabolaPoint.h",
"Minuit2/MnParameterScan.h",
"Minuit2/MnPlot.h",
"Minuit2/MnPosDef.h",
"Minuit2/MnPrint.h",
"Minuit2/MnRefCountedPointer.h",
"Minuit2/MnReferenceCounter.h",
"Minuit2/MnScan.h",
"Minuit2/MnSeedGenerator.h",
"Minuit2/MnSimplex.h",
"Minuit2/MnStrategy.h",
"Minuit2/MnTiny.h",
"Minuit2/MnTraceObject.h",
"Minuit2/MnUserCovariance.h",
"Minuit2/MnUserFcn.h",
"Minuit2/MnUserParameterState.h",
"Minuit2/MnUserParameters.h",
"Minuit2/MnUserTransformation.h",
"Minuit2/MnVectorTransform.h",
"Minuit2/ModularFunctionMinimizer.h",
"Minuit2/NegativeG2LineSearch.h",
"Minuit2/Numerical2PGradientCalculator.h",
"Minuit2/ParametricFunction.h",
"Minuit2/ScanBuilder.h",
"Minuit2/ScanMinimizer.h",
"Minuit2/SimplexBuilder.h",
"Minuit2/SimplexMinimizer.h",
"Minuit2/SimplexParameters.h",
"Minuit2/SimplexSeedGenerator.h",
"Minuit2/SinParameterTransformation.h",
"Minuit2/SqrtLowParameterTransformation.h",
"Minuit2/SqrtUpParameterTransformation.h",
"Minuit2/StackAllocator.h",
"Minuit2/VariableMetricBuilder.h",
"Minuit2/VariableMetricEDMEstimator.h",
"Minuit2/VariableMetricMinimizer.h",
"Minuit2/VectorOuterProduct.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMinuit2 dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef WARNINGMSG
  #define WARNINGMSG 1
#endif
#ifndef USE_ROOT_ERROR
  #define USE_ROOT_ERROR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TMinuit2TraceObject.h"
#include "Minuit2/ABObj.h"
#include "Minuit2/ABProd.h"
#include "Minuit2/ABSum.h"
#include "Minuit2/ABTypes.h"
#include "Minuit2/AnalyticalGradientCalculator.h"
#include "Minuit2/BasicFunctionGradient.h"
#include "Minuit2/BasicFunctionMinimum.h"
#include "Minuit2/BasicMinimumError.h"
#include "Minuit2/BasicMinimumParameters.h"
#include "Minuit2/BasicMinimumSeed.h"
#include "Minuit2/BasicMinimumState.h"
#include "Minuit2/CombinedMinimizer.h"
#include "Minuit2/CombinedMinimumBuilder.h"
#include "Minuit2/ContoursError.h"
#include "Minuit2/DavidonErrorUpdator.h"
#include "Minuit2/FCNAdapter.h"
#include "Minuit2/FCNBase.h"
#include "Minuit2/FCNGradAdapter.h"
#include "Minuit2/FCNGradientBase.h"
#include "Minuit2/FumiliBuilder.h"
#include "Minuit2/FumiliChi2FCN.h"
#include "Minuit2/FumiliErrorUpdator.h"
#include "Minuit2/FumiliFCNAdapter.h"
#include "Minuit2/FumiliFCNBase.h"
#include "Minuit2/FumiliGradientCalculator.h"
#include "Minuit2/FumiliMaximumLikelihoodFCN.h"
#include "Minuit2/FumiliMinimizer.h"
#include "Minuit2/FumiliStandardChi2FCN.h"
#include "Minuit2/FumiliStandardMaximumLikelihoodFCN.h"
#include "Minuit2/FunctionGradient.h"
#include "Minuit2/FunctionMinimizer.h"
#include "Minuit2/FunctionMinimum.h"
#include "Minuit2/GenericFunction.h"
#include "Minuit2/GradientCalculator.h"
#include "Minuit2/HessianGradientCalculator.h"
#include "Minuit2/InitialGradientCalculator.h"
#include "Minuit2/LASymMatrix.h"
#include "Minuit2/LAVector.h"
#include "Minuit2/LaInverse.h"
#include "Minuit2/LaOuterProduct.h"
#include "Minuit2/LaProd.h"
#include "Minuit2/LaSum.h"
#include "Minuit2/MPIProcess.h"
#include "Minuit2/MatrixInverse.h"
#include "Minuit2/MinimumBuilder.h"
#include "Minuit2/MinimumError.h"
#include "Minuit2/MinimumErrorUpdator.h"
#include "Minuit2/MinimumParameters.h"
#include "Minuit2/MinimumSeed.h"
#include "Minuit2/MinimumSeedGenerator.h"
#include "Minuit2/MinimumState.h"
#include "Minuit2/MinosError.h"
#include "Minuit2/Minuit2Minimizer.h"
#include "Minuit2/MinuitParameter.h"
#include "Minuit2/MnApplication.h"
#include "Minuit2/MnConfig.h"
#include "Minuit2/MnContours.h"
#include "Minuit2/MnCovarianceSqueeze.h"
#include "Minuit2/MnCross.h"
#include "Minuit2/MnEigen.h"
#include "Minuit2/MnFcn.h"
#include "Minuit2/MnFumiliMinimize.h"
#include "Minuit2/MnFunctionCross.h"
#include "Minuit2/MnGlobalCorrelationCoeff.h"
#include "Minuit2/MnHesse.h"
#include "Minuit2/MnLineSearch.h"
#include "Minuit2/MnMachinePrecision.h"
#include "Minuit2/MnMatrix.h"
#include "Minuit2/MnMigrad.h"
#include "Minuit2/MnMinimize.h"
#include "Minuit2/MnMinos.h"
#include "Minuit2/MnParabola.h"
#include "Minuit2/MnParabolaFactory.h"
#include "Minuit2/MnParabolaPoint.h"
#include "Minuit2/MnParameterScan.h"
#include "Minuit2/MnPlot.h"
#include "Minuit2/MnPosDef.h"
#include "Minuit2/MnPrint.h"
#include "Minuit2/MnRefCountedPointer.h"
#include "Minuit2/MnReferenceCounter.h"
#include "Minuit2/MnScan.h"
#include "Minuit2/MnSeedGenerator.h"
#include "Minuit2/MnSimplex.h"
#include "Minuit2/MnStrategy.h"
#include "Minuit2/MnTiny.h"
#include "Minuit2/MnTraceObject.h"
#include "Minuit2/MnUserCovariance.h"
#include "Minuit2/MnUserFcn.h"
#include "Minuit2/MnUserParameterState.h"
#include "Minuit2/MnUserParameters.h"
#include "Minuit2/MnUserTransformation.h"
#include "Minuit2/MnVectorTransform.h"
#include "Minuit2/ModularFunctionMinimizer.h"
#include "Minuit2/NegativeG2LineSearch.h"
#include "Minuit2/Numerical2PGradientCalculator.h"
#include "Minuit2/ParametricFunction.h"
#include "Minuit2/ScanBuilder.h"
#include "Minuit2/ScanMinimizer.h"
#include "Minuit2/SimplexBuilder.h"
#include "Minuit2/SimplexMinimizer.h"
#include "Minuit2/SimplexParameters.h"
#include "Minuit2/SimplexSeedGenerator.h"
#include "Minuit2/SinParameterTransformation.h"
#include "Minuit2/SqrtLowParameterTransformation.h"
#include "Minuit2/SqrtUpParameterTransformation.h"
#include "Minuit2/StackAllocator.h"
#include "Minuit2/VariableMetricBuilder.h"
#include "Minuit2/VariableMetricEDMEstimator.h"
#include "Minuit2/VariableMetricMinimizer.h"
#include "Minuit2/VectorOuterProduct.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMinuit2",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMinuit2_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMinuit2_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMinuit2() {
  TriggerDictionaryInitialization_libMinuit2_Impl();
}
