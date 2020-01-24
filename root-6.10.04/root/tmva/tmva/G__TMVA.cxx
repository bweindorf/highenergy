// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__TMVA

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
#include "TMVA/Configurable.h"
#include "TMVA/Factory.h"
#include "TMVA/MethodBase.h"
#include "TMVA/MethodCompositeBase.h"
#include "TMVA/MethodANNBase.h"
#include "TMVA/MethodTMlpANN.h"
#include "TMVA/MethodRuleFit.h"
#include "TMVA/MethodCuts.h"
#include "TMVA/MethodFisher.h"
#include "TMVA/MethodKNN.h"
#include "TMVA/MethodCFMlpANN.h"
#include "TMVA/MethodCFMlpANN_Utils.h"
#include "TMVA/MethodLikelihood.h"
#include "TMVA/MethodHMatrix.h"
#include "TMVA/MethodPDERS.h"
#include "TMVA/MethodBDT.h"
#include "TMVA/MethodDT.h"
#include "TMVA/MethodSVM.h"
#include "TMVA/MethodBayesClassifier.h"
#include "TMVA/MethodFDA.h"
#include "TMVA/MethodMLP.h"
#include "TMVA/MethodBoost.h"
#include "TMVA/MethodPDEFoam.h"
#include "TMVA/MethodLD.h"
#include "TMVA/MethodCategory.h"
#include "TMVA/MethodDNN.h"
#include "TMVA/TSpline2.h"
#include "TMVA/TSpline1.h"
#include "TMVA/PDF.h"
#include "TMVA/BinaryTree.h"
#include "TMVA/BinarySearchTreeNode.h"
#include "TMVA/BinarySearchTree.h"
#include "TMVA/Timer.h"
#include "TMVA/RootFinder.h"
#include "TMVA/CrossEntropy.h"
#include "TMVA/DecisionTree.h"
#include "TMVA/DecisionTreeNode.h"
#include "TMVA/MisClassificationError.h"
#include "TMVA/Node.h"
#include "TMVA/SdivSqrtSplusB.h"
#include "TMVA/SeparationBase.h"
#include "TMVA/RegressionVariance.h"
#include "TMVA/Tools.h"
#include "TMVA/Reader.h"
#include "TMVA/GeneticAlgorithm.h"
#include "TMVA/GeneticGenes.h"
#include "TMVA/GeneticPopulation.h"
#include "TMVA/GeneticRange.h"
#include "TMVA/GiniIndex.h"
#include "TMVA/GiniIndexWithLaplace.h"
#include "TMVA/SimulatedAnnealing.h"
#include "TMVA/QuickMVAProbEstimator.h"
#include "TMVA/Config.h"
#include "TMVA/KDEKernel.h"
#include "TMVA/Interval.h"
#include "TMVA/LogInterval.h"
#include "TMVA/FitterBase.h"
#include "TMVA/MCFitter.h"
#include "TMVA/GeneticFitter.h"
#include "TMVA/SimulatedAnnealingFitter.h"
#include "TMVA/MinuitFitter.h"
#include "TMVA/MinuitWrapper.h"
#include "TMVA/IFitterTarget.h"
#include "TMVA/PDEFoam.h"
#include "TMVA/PDEFoamDecisionTree.h"
#include "TMVA/PDEFoamDensityBase.h"
#include "TMVA/PDEFoamDiscriminantDensity.h"
#include "TMVA/PDEFoamEventDensity.h"
#include "TMVA/PDEFoamTargetDensity.h"
#include "TMVA/PDEFoamDecisionTreeDensity.h"
#include "TMVA/PDEFoamMultiTarget.h"
#include "TMVA/PDEFoamVect.h"
#include "TMVA/PDEFoamCell.h"
#include "TMVA/PDEFoamDiscriminant.h"
#include "TMVA/PDEFoamEvent.h"
#include "TMVA/PDEFoamTarget.h"
#include "TMVA/PDEFoamKernelBase.h"
#include "TMVA/PDEFoamKernelTrivial.h"
#include "TMVA/PDEFoamKernelLinN.h"
#include "TMVA/PDEFoamKernelGauss.h"
#include "TMVA/BDTEventWrapper.h"
#include "TMVA/CCTreeWrapper.h"
#include "TMVA/CCPruner.h"
#include "TMVA/CostComplexityPruneTool.h"
#include "TMVA/SVEvent.h"
#include "TMVA/OptimizeConfigParameters.h"
#include "TMVA/NeuralNet.h"
#include "TMVA/TNeuron.h"
#include "TMVA/TSynapse.h"
#include "TMVA/TActivationChooser.h"
#include "TMVA/TActivation.h"
#include "TMVA/TActivationSigmoid.h"
#include "TMVA/TActivationIdentity.h"
#include "TMVA/TActivationTanh.h"
#include "TMVA/TActivationRadial.h"
#include "TMVA/TActivationReLU.h"
#include "TMVA/TNeuronInputChooser.h"
#include "TMVA/TNeuronInput.h"
#include "TMVA/TNeuronInputSum.h"
#include "TMVA/TNeuronInputSqSum.h"
#include "TMVA/TNeuronInputAbs.h"
#include "TMVA/Types.h"
#include "TMVA/Ranking.h"
#include "TMVA/RuleFit.h"
#include "TMVA/RuleFitAPI.h"
#include "TMVA/IMethod.h"
#include "TMVA/MsgLogger.h"
#include "TMVA/VariableTransformBase.h"
#include "TMVA/VariableIdentityTransform.h"
#include "TMVA/VariableDecorrTransform.h"
#include "TMVA/VariablePCATransform.h"
#include "TMVA/VariableGaussTransform.h"
#include "TMVA/VariableNormalizeTransform.h"
#include "TMVA/VariableRearrangeTransform.h"
#include "TMVA/VariableTransform.h"
#include "TMVA/ROCCalc.h"
#include "TMVA/ROCCurve.h"
#include "TMVA/Envelope.h"
#include "TMVA/VariableImportance.h"
#include "TMVA/CrossValidation.h"
#include "TMVA/HyperParameterOptimisation.h"
#include "TMVA/Event.h"
#include "TMVA/Results.h"
#include "TMVA/ResultsClassification.h"
#include "TMVA/ResultsRegression.h"
#include "TMVA/ResultsMulticlass.h"
#include "TMVA/VariableInfo.h"
#include "TMVA/ClassInfo.h"
#include "TMVA/DataLoader.h"
#include "TMVA/DataSet.h"
#include "TMVA/DataSetInfo.h"
#include "TMVA/DataInputHandler.h"
#include "TMVA/DataSetManager.h"
#include "TMVA/DataSetFactory.h"
#include "TMVA/LossFunction.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *TMVAcLcLTypes_Dictionary();
   static void TMVAcLcLTypes_TClassManip(TClass*);
   static void delete_TMVAcLcLTypes(void *p);
   static void deleteArray_TMVAcLcLTypes(void *p);
   static void destruct_TMVAcLcLTypes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Types*)
   {
      ::TMVA::Types *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Types));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Types", "TMVA/Types.h", 73,
                  typeid(::TMVA::Types), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLTypes_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Types) );
      instance.SetDelete(&delete_TMVAcLcLTypes);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTypes);
      instance.SetDestructor(&destruct_TMVAcLcLTypes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Types*)
   {
      return GenerateInitInstanceLocal((::TMVA::Types*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Types*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLTypes_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::Types*)0x0)->GetClass();
      TMVAcLcLTypes_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLTypes_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLMsgLogger(void *p = 0);
   static void *newArray_TMVAcLcLMsgLogger(Long_t size, void *p);
   static void delete_TMVAcLcLMsgLogger(void *p);
   static void deleteArray_TMVAcLcLMsgLogger(void *p);
   static void destruct_TMVAcLcLMsgLogger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MsgLogger*)
   {
      ::TMVA::MsgLogger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MsgLogger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MsgLogger", ::TMVA::MsgLogger::Class_Version(), "TMVA/MsgLogger.h", 59,
                  typeid(::TMVA::MsgLogger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MsgLogger::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MsgLogger) );
      instance.SetNew(&new_TMVAcLcLMsgLogger);
      instance.SetNewArray(&newArray_TMVAcLcLMsgLogger);
      instance.SetDelete(&delete_TMVAcLcLMsgLogger);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMsgLogger);
      instance.SetDestructor(&destruct_TMVAcLcLMsgLogger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MsgLogger*)
   {
      return GenerateInitInstanceLocal((::TMVA::MsgLogger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MsgLogger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLOptionBase(void *p);
   static void deleteArray_TMVAcLcLOptionBase(void *p);
   static void destruct_TMVAcLcLOptionBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::OptionBase*)
   {
      ::TMVA::OptionBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::OptionBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::OptionBase", ::TMVA::OptionBase::Class_Version(), "TMVA/Option.h", 53,
                  typeid(::TMVA::OptionBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::OptionBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::OptionBase) );
      instance.SetDelete(&delete_TMVAcLcLOptionBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLOptionBase);
      instance.SetDestructor(&destruct_TMVAcLcLOptionBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::OptionBase*)
   {
      return GenerateInitInstanceLocal((::TMVA::OptionBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::OptionBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLConfigurable(void *p = 0);
   static void *newArray_TMVAcLcLConfigurable(Long_t size, void *p);
   static void delete_TMVAcLcLConfigurable(void *p);
   static void deleteArray_TMVAcLcLConfigurable(void *p);
   static void destruct_TMVAcLcLConfigurable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Configurable*)
   {
      ::TMVA::Configurable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Configurable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Configurable", ::TMVA::Configurable::Class_Version(), "TMVA/Configurable.h", 45,
                  typeid(::TMVA::Configurable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Configurable::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Configurable) );
      instance.SetNew(&new_TMVAcLcLConfigurable);
      instance.SetNewArray(&newArray_TMVAcLcLConfigurable);
      instance.SetDelete(&delete_TMVAcLcLConfigurable);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLConfigurable);
      instance.SetDestructor(&destruct_TMVAcLcLConfigurable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Configurable*)
   {
      return GenerateInitInstanceLocal((::TMVA::Configurable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Configurable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLVariableInfo(void *p = 0);
   static void *newArray_TMVAcLcLVariableInfo(Long_t size, void *p);
   static void delete_TMVAcLcLVariableInfo(void *p);
   static void deleteArray_TMVAcLcLVariableInfo(void *p);
   static void destruct_TMVAcLcLVariableInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::VariableInfo*)
   {
      ::TMVA::VariableInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::VariableInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::VariableInfo", ::TMVA::VariableInfo::Class_Version(), "TMVA/VariableInfo.h", 47,
                  typeid(::TMVA::VariableInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::VariableInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::VariableInfo) );
      instance.SetNew(&new_TMVAcLcLVariableInfo);
      instance.SetNewArray(&newArray_TMVAcLcLVariableInfo);
      instance.SetDelete(&delete_TMVAcLcLVariableInfo);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLVariableInfo);
      instance.SetDestructor(&destruct_TMVAcLcLVariableInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::VariableInfo*)
   {
      return GenerateInitInstanceLocal((::TMVA::VariableInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::VariableInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLDataSet(void *p = 0);
   static void *newArray_TMVAcLcLDataSet(Long_t size, void *p);
   static void delete_TMVAcLcLDataSet(void *p);
   static void deleteArray_TMVAcLcLDataSet(void *p);
   static void destruct_TMVAcLcLDataSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::DataSet*)
   {
      ::TMVA::DataSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::DataSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::DataSet", ::TMVA::DataSet::Class_Version(), "TMVA/DataSet.h", 69,
                  typeid(::TMVA::DataSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::DataSet::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::DataSet) );
      instance.SetNew(&new_TMVAcLcLDataSet);
      instance.SetNewArray(&newArray_TMVAcLcLDataSet);
      instance.SetDelete(&delete_TMVAcLcLDataSet);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLDataSet);
      instance.SetDestructor(&destruct_TMVAcLcLDataSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::DataSet*)
   {
      return GenerateInitInstanceLocal((::TMVA::DataSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::DataSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLFactory(void *p);
   static void deleteArray_TMVAcLcLFactory(void *p);
   static void destruct_TMVAcLcLFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Factory*)
   {
      ::TMVA::Factory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Factory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Factory", ::TMVA::Factory::Class_Version(), "TMVA/Factory.h", 81,
                  typeid(::TMVA::Factory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Factory::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Factory) );
      instance.SetDelete(&delete_TMVAcLcLFactory);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLFactory);
      instance.SetDestructor(&destruct_TMVAcLcLFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Factory*)
   {
      return GenerateInitInstanceLocal((::TMVA::Factory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Factory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLIMethod(void *p);
   static void deleteArray_TMVAcLcLIMethod(void *p);
   static void destruct_TMVAcLcLIMethod(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::IMethod*)
   {
      ::TMVA::IMethod *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::IMethod >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::IMethod", ::TMVA::IMethod::Class_Version(), "TMVA/IMethod.h", 54,
                  typeid(::TMVA::IMethod), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::IMethod::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::IMethod) );
      instance.SetDelete(&delete_TMVAcLcLIMethod);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLIMethod);
      instance.SetDestructor(&destruct_TMVAcLcLIMethod);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::IMethod*)
   {
      return GenerateInitInstanceLocal((::TMVA::IMethod*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::IMethod*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLEvent(void *p = 0);
   static void *newArray_TMVAcLcLEvent(Long_t size, void *p);
   static void delete_TMVAcLcLEvent(void *p);
   static void deleteArray_TMVAcLcLEvent(void *p);
   static void destruct_TMVAcLcLEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Event*)
   {
      ::TMVA::Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Event >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Event", ::TMVA::Event::Class_Version(), "TMVA/Event.h", 52,
                  typeid(::TMVA::Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Event::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Event) );
      instance.SetNew(&new_TMVAcLcLEvent);
      instance.SetNewArray(&newArray_TMVAcLcLEvent);
      instance.SetDelete(&delete_TMVAcLcLEvent);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLEvent);
      instance.SetDestructor(&destruct_TMVAcLcLEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Event*)
   {
      return GenerateInitInstanceLocal((::TMVA::Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Event*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLClassInfo(void *p = 0);
   static void *newArray_TMVAcLcLClassInfo(Long_t size, void *p);
   static void delete_TMVAcLcLClassInfo(void *p);
   static void deleteArray_TMVAcLcLClassInfo(void *p);
   static void destruct_TMVAcLcLClassInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::ClassInfo*)
   {
      ::TMVA::ClassInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::ClassInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::ClassInfo", ::TMVA::ClassInfo::Class_Version(), "TMVA/ClassInfo.h", 49,
                  typeid(::TMVA::ClassInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::ClassInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::ClassInfo) );
      instance.SetNew(&new_TMVAcLcLClassInfo);
      instance.SetNewArray(&newArray_TMVAcLcLClassInfo);
      instance.SetDelete(&delete_TMVAcLcLClassInfo);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLClassInfo);
      instance.SetDestructor(&destruct_TMVAcLcLClassInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::ClassInfo*)
   {
      return GenerateInitInstanceLocal((::TMVA::ClassInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::ClassInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLDataSetInfo(void *p = 0);
   static void *newArray_TMVAcLcLDataSetInfo(Long_t size, void *p);
   static void delete_TMVAcLcLDataSetInfo(void *p);
   static void deleteArray_TMVAcLcLDataSetInfo(void *p);
   static void destruct_TMVAcLcLDataSetInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::DataSetInfo*)
   {
      ::TMVA::DataSetInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::DataSetInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::DataSetInfo", ::TMVA::DataSetInfo::Class_Version(), "TMVA/DataSetInfo.h", 60,
                  typeid(::TMVA::DataSetInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::DataSetInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::DataSetInfo) );
      instance.SetNew(&new_TMVAcLcLDataSetInfo);
      instance.SetNewArray(&newArray_TMVAcLcLDataSetInfo);
      instance.SetDelete(&delete_TMVAcLcLDataSetInfo);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLDataSetInfo);
      instance.SetDestructor(&destruct_TMVAcLcLDataSetInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::DataSetInfo*)
   {
      return GenerateInitInstanceLocal((::TMVA::DataSetInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::DataSetInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLResults(void *p);
   static void deleteArray_TMVAcLcLResults(void *p);
   static void destruct_TMVAcLcLResults(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Results*)
   {
      ::TMVA::Results *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Results >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Results", ::TMVA::Results::Class_Version(), "TMVA/Results.h", 57,
                  typeid(::TMVA::Results), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Results::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Results) );
      instance.SetDelete(&delete_TMVAcLcLResults);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLResults);
      instance.SetDestructor(&destruct_TMVAcLcLResults);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Results*)
   {
      return GenerateInitInstanceLocal((::TMVA::Results*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Results*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodBase(void *p);
   static void deleteArray_TMVAcLcLMethodBase(void *p);
   static void destruct_TMVAcLcLMethodBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodBase*)
   {
      ::TMVA::MethodBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodBase", ::TMVA::MethodBase::Class_Version(), "TMVA/MethodBase.h", 106,
                  typeid(::TMVA::MethodBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodBase) );
      instance.SetDelete(&delete_TMVAcLcLMethodBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodBase);
      instance.SetDestructor(&destruct_TMVAcLcLMethodBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodBase*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodCompositeBase(void *p);
   static void deleteArray_TMVAcLcLMethodCompositeBase(void *p);
   static void destruct_TMVAcLcLMethodCompositeBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodCompositeBase*)
   {
      ::TMVA::MethodCompositeBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodCompositeBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodCompositeBase", ::TMVA::MethodCompositeBase::Class_Version(), "TMVA/MethodCompositeBase.h", 50,
                  typeid(::TMVA::MethodCompositeBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodCompositeBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodCompositeBase) );
      instance.SetDelete(&delete_TMVAcLcLMethodCompositeBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodCompositeBase);
      instance.SetDestructor(&destruct_TMVAcLcLMethodCompositeBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodCompositeBase*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodCompositeBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodCompositeBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLTActivation(void *p);
   static void deleteArray_TMVAcLcLTActivation(void *p);
   static void destruct_TMVAcLcLTActivation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TActivation*)
   {
      ::TMVA::TActivation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TActivation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TActivation", ::TMVA::TActivation::Class_Version(), "TMVA/TActivation.h", 42,
                  typeid(::TMVA::TActivation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TActivation::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TActivation) );
      instance.SetDelete(&delete_TMVAcLcLTActivation);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTActivation);
      instance.SetDestructor(&destruct_TMVAcLcLTActivation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TActivation*)
   {
      return GenerateInitInstanceLocal((::TMVA::TActivation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TActivation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTSynapse(void *p = 0);
   static void *newArray_TMVAcLcLTSynapse(Long_t size, void *p);
   static void delete_TMVAcLcLTSynapse(void *p);
   static void deleteArray_TMVAcLcLTSynapse(void *p);
   static void destruct_TMVAcLcLTSynapse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TSynapse*)
   {
      ::TMVA::TSynapse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TSynapse >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TSynapse", ::TMVA::TSynapse::Class_Version(), "TMVA/TSynapse.h", 44,
                  typeid(::TMVA::TSynapse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TSynapse::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TSynapse) );
      instance.SetNew(&new_TMVAcLcLTSynapse);
      instance.SetNewArray(&newArray_TMVAcLcLTSynapse);
      instance.SetDelete(&delete_TMVAcLcLTSynapse);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTSynapse);
      instance.SetDestructor(&destruct_TMVAcLcLTSynapse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TSynapse*)
   {
      return GenerateInitInstanceLocal((::TMVA::TSynapse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TSynapse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTNeuron(void *p = 0);
   static void *newArray_TMVAcLcLTNeuron(Long_t size, void *p);
   static void delete_TMVAcLcLTNeuron(void *p);
   static void deleteArray_TMVAcLcLTNeuron(void *p);
   static void destruct_TMVAcLcLTNeuron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TNeuron*)
   {
      ::TMVA::TNeuron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TNeuron >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TNeuron", ::TMVA::TNeuron::Class_Version(), "TMVA/TNeuron.h", 49,
                  typeid(::TMVA::TNeuron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TNeuron::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TNeuron) );
      instance.SetNew(&new_TMVAcLcLTNeuron);
      instance.SetNewArray(&newArray_TMVAcLcLTNeuron);
      instance.SetDelete(&delete_TMVAcLcLTNeuron);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTNeuron);
      instance.SetDestructor(&destruct_TMVAcLcLTNeuron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TNeuron*)
   {
      return GenerateInitInstanceLocal((::TMVA::TNeuron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TNeuron*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLTNeuronInput(void *p);
   static void deleteArray_TMVAcLcLTNeuronInput(void *p);
   static void destruct_TMVAcLcLTNeuronInput(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TNeuronInput*)
   {
      ::TMVA::TNeuronInput *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TNeuronInput >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TNeuronInput", ::TMVA::TNeuronInput::Class_Version(), "TMVA/TNeuronInput.h", 42,
                  typeid(::TMVA::TNeuronInput), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TNeuronInput::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TNeuronInput) );
      instance.SetDelete(&delete_TMVAcLcLTNeuronInput);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTNeuronInput);
      instance.SetDestructor(&destruct_TMVAcLcLTNeuronInput);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TNeuronInput*)
   {
      return GenerateInitInstanceLocal((::TMVA::TNeuronInput*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TNeuronInput*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodANNBase(void *p);
   static void deleteArray_TMVAcLcLMethodANNBase(void *p);
   static void destruct_TMVAcLcLMethodANNBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodANNBase*)
   {
      ::TMVA::MethodANNBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodANNBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodANNBase", ::TMVA::MethodANNBase::Class_Version(), "TMVA/MethodANNBase.h", 62,
                  typeid(::TMVA::MethodANNBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodANNBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodANNBase) );
      instance.SetDelete(&delete_TMVAcLcLMethodANNBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodANNBase);
      instance.SetDestructor(&destruct_TMVAcLcLMethodANNBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodANNBase*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodANNBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodANNBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodTMlpANN(void *p);
   static void deleteArray_TMVAcLcLMethodTMlpANN(void *p);
   static void destruct_TMVAcLcLMethodTMlpANN(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodTMlpANN*)
   {
      ::TMVA::MethodTMlpANN *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodTMlpANN >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodTMlpANN", ::TMVA::MethodTMlpANN::Class_Version(), "TMVA/MethodTMlpANN.h", 49,
                  typeid(::TMVA::MethodTMlpANN), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodTMlpANN::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodTMlpANN) );
      instance.SetDelete(&delete_TMVAcLcLMethodTMlpANN);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodTMlpANN);
      instance.SetDestructor(&destruct_TMVAcLcLMethodTMlpANN);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodTMlpANN*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodTMlpANN*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodTMlpANN*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLNode(void *p);
   static void deleteArray_TMVAcLcLNode(void *p);
   static void destruct_TMVAcLcLNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Node*)
   {
      ::TMVA::Node *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Node >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Node", ::TMVA::Node::Class_Version(), "TMVA/Node.h", 56,
                  typeid(::TMVA::Node), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Node::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Node) );
      instance.SetDelete(&delete_TMVAcLcLNode);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLNode);
      instance.SetDestructor(&destruct_TMVAcLcLNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Node*)
   {
      return GenerateInitInstanceLocal((::TMVA::Node*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Node*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLDecisionTreeNode(void *p = 0);
   static void *newArray_TMVAcLcLDecisionTreeNode(Long_t size, void *p);
   static void delete_TMVAcLcLDecisionTreeNode(void *p);
   static void deleteArray_TMVAcLcLDecisionTreeNode(void *p);
   static void destruct_TMVAcLcLDecisionTreeNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::DecisionTreeNode*)
   {
      ::TMVA::DecisionTreeNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::DecisionTreeNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::DecisionTreeNode", ::TMVA::DecisionTreeNode::Class_Version(), "TMVA/DecisionTreeNode.h", 116,
                  typeid(::TMVA::DecisionTreeNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::DecisionTreeNode::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::DecisionTreeNode) );
      instance.SetNew(&new_TMVAcLcLDecisionTreeNode);
      instance.SetNewArray(&newArray_TMVAcLcLDecisionTreeNode);
      instance.SetDelete(&delete_TMVAcLcLDecisionTreeNode);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLDecisionTreeNode);
      instance.SetDestructor(&destruct_TMVAcLcLDecisionTreeNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::DecisionTreeNode*)
   {
      return GenerateInitInstanceLocal((::TMVA::DecisionTreeNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::DecisionTreeNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLBinaryTree(void *p);
   static void deleteArray_TMVAcLcLBinaryTree(void *p);
   static void destruct_TMVAcLcLBinaryTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::BinaryTree*)
   {
      ::TMVA::BinaryTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::BinaryTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::BinaryTree", ::TMVA::BinaryTree::Class_Version(), "TMVA/BinaryTree.h", 62,
                  typeid(::TMVA::BinaryTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::BinaryTree::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::BinaryTree) );
      instance.SetDelete(&delete_TMVAcLcLBinaryTree);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLBinaryTree);
      instance.SetDestructor(&destruct_TMVAcLcLBinaryTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::BinaryTree*)
   {
      return GenerateInitInstanceLocal((::TMVA::BinaryTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::BinaryTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLBinarySearchTreeNode(void *p = 0);
   static void *newArray_TMVAcLcLBinarySearchTreeNode(Long_t size, void *p);
   static void delete_TMVAcLcLBinarySearchTreeNode(void *p);
   static void deleteArray_TMVAcLcLBinarySearchTreeNode(void *p);
   static void destruct_TMVAcLcLBinarySearchTreeNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::BinarySearchTreeNode*)
   {
      ::TMVA::BinarySearchTreeNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::BinarySearchTreeNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::BinarySearchTreeNode", ::TMVA::BinarySearchTreeNode::Class_Version(), "TMVA/BinarySearchTreeNode.h", 53,
                  typeid(::TMVA::BinarySearchTreeNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::BinarySearchTreeNode::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::BinarySearchTreeNode) );
      instance.SetNew(&new_TMVAcLcLBinarySearchTreeNode);
      instance.SetNewArray(&newArray_TMVAcLcLBinarySearchTreeNode);
      instance.SetDelete(&delete_TMVAcLcLBinarySearchTreeNode);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLBinarySearchTreeNode);
      instance.SetDestructor(&destruct_TMVAcLcLBinarySearchTreeNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::BinarySearchTreeNode*)
   {
      return GenerateInitInstanceLocal((::TMVA::BinarySearchTreeNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::BinarySearchTreeNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLBinarySearchTree(void *p = 0);
   static void *newArray_TMVAcLcLBinarySearchTree(Long_t size, void *p);
   static void delete_TMVAcLcLBinarySearchTree(void *p);
   static void deleteArray_TMVAcLcLBinarySearchTree(void *p);
   static void destruct_TMVAcLcLBinarySearchTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::BinarySearchTree*)
   {
      ::TMVA::BinarySearchTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::BinarySearchTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::BinarySearchTree", ::TMVA::BinarySearchTree::Class_Version(), "TMVA/BinarySearchTree.h", 63,
                  typeid(::TMVA::BinarySearchTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::BinarySearchTree::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::BinarySearchTree) );
      instance.SetNew(&new_TMVAcLcLBinarySearchTree);
      instance.SetNewArray(&newArray_TMVAcLcLBinarySearchTree);
      instance.SetDelete(&delete_TMVAcLcLBinarySearchTree);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLBinarySearchTree);
      instance.SetDestructor(&destruct_TMVAcLcLBinarySearchTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::BinarySearchTree*)
   {
      return GenerateInitInstanceLocal((::TMVA::BinarySearchTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::BinarySearchTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLSeparationBase(void *p);
   static void deleteArray_TMVAcLcLSeparationBase(void *p);
   static void destruct_TMVAcLcLSeparationBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::SeparationBase*)
   {
      ::TMVA::SeparationBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::SeparationBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::SeparationBase", ::TMVA::SeparationBase::Class_Version(), "TMVA/SeparationBase.h", 82,
                  typeid(::TMVA::SeparationBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::SeparationBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::SeparationBase) );
      instance.SetDelete(&delete_TMVAcLcLSeparationBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLSeparationBase);
      instance.SetDestructor(&destruct_TMVAcLcLSeparationBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::SeparationBase*)
   {
      return GenerateInitInstanceLocal((::TMVA::SeparationBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::SeparationBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLRegressionVariance(void *p = 0);
   static void *newArray_TMVAcLcLRegressionVariance(Long_t size, void *p);
   static void delete_TMVAcLcLRegressionVariance(void *p);
   static void deleteArray_TMVAcLcLRegressionVariance(void *p);
   static void destruct_TMVAcLcLRegressionVariance(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::RegressionVariance*)
   {
      ::TMVA::RegressionVariance *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::RegressionVariance >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::RegressionVariance", ::TMVA::RegressionVariance::Class_Version(), "TMVA/RegressionVariance.h", 66,
                  typeid(::TMVA::RegressionVariance), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::RegressionVariance::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::RegressionVariance) );
      instance.SetNew(&new_TMVAcLcLRegressionVariance);
      instance.SetNewArray(&newArray_TMVAcLcLRegressionVariance);
      instance.SetDelete(&delete_TMVAcLcLRegressionVariance);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLRegressionVariance);
      instance.SetDestructor(&destruct_TMVAcLcLRegressionVariance);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::RegressionVariance*)
   {
      return GenerateInitInstanceLocal((::TMVA::RegressionVariance*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::RegressionVariance*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLDecisionTree(void *p = 0);
   static void *newArray_TMVAcLcLDecisionTree(Long_t size, void *p);
   static void delete_TMVAcLcLDecisionTree(void *p);
   static void deleteArray_TMVAcLcLDecisionTree(void *p);
   static void destruct_TMVAcLcLDecisionTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::DecisionTree*)
   {
      ::TMVA::DecisionTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::DecisionTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::DecisionTree", ::TMVA::DecisionTree::Class_Version(), "TMVA/DecisionTree.h", 59,
                  typeid(::TMVA::DecisionTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::DecisionTree::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::DecisionTree) );
      instance.SetNew(&new_TMVAcLcLDecisionTree);
      instance.SetNewArray(&newArray_TMVAcLcLDecisionTree);
      instance.SetDelete(&delete_TMVAcLcLDecisionTree);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLDecisionTree);
      instance.SetDestructor(&destruct_TMVAcLcLDecisionTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::DecisionTree*)
   {
      return GenerateInitInstanceLocal((::TMVA::DecisionTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::DecisionTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLRuleFit(void *p = 0);
   static void *newArray_TMVAcLcLRuleFit(Long_t size, void *p);
   static void delete_TMVAcLcLRuleFit(void *p);
   static void deleteArray_TMVAcLcLRuleFit(void *p);
   static void destruct_TMVAcLcLRuleFit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::RuleFit*)
   {
      ::TMVA::RuleFit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::RuleFit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::RuleFit", ::TMVA::RuleFit::Class_Version(), "TMVA/RuleFit.h", 44,
                  typeid(::TMVA::RuleFit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::RuleFit::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::RuleFit) );
      instance.SetNew(&new_TMVAcLcLRuleFit);
      instance.SetNewArray(&newArray_TMVAcLcLRuleFit);
      instance.SetDelete(&delete_TMVAcLcLRuleFit);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLRuleFit);
      instance.SetDestructor(&destruct_TMVAcLcLRuleFit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::RuleFit*)
   {
      return GenerateInitInstanceLocal((::TMVA::RuleFit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::RuleFit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodRuleFit(void *p);
   static void deleteArray_TMVAcLcLMethodRuleFit(void *p);
   static void destruct_TMVAcLcLMethodRuleFit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodRuleFit*)
   {
      ::TMVA::MethodRuleFit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodRuleFit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodRuleFit", ::TMVA::MethodRuleFit::Class_Version(), "TMVA/MethodRuleFit.h", 47,
                  typeid(::TMVA::MethodRuleFit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodRuleFit::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodRuleFit) );
      instance.SetDelete(&delete_TMVAcLcLMethodRuleFit);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodRuleFit);
      instance.SetDestructor(&destruct_TMVAcLcLMethodRuleFit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodRuleFit*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodRuleFit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodRuleFit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLKDEKernel(void *p = 0);
   static void *newArray_TMVAcLcLKDEKernel(Long_t size, void *p);
   static void delete_TMVAcLcLKDEKernel(void *p);
   static void deleteArray_TMVAcLcLKDEKernel(void *p);
   static void destruct_TMVAcLcLKDEKernel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::KDEKernel*)
   {
      ::TMVA::KDEKernel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::KDEKernel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::KDEKernel", ::TMVA::KDEKernel::Class_Version(), "TMVA/KDEKernel.h", 50,
                  typeid(::TMVA::KDEKernel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::KDEKernel::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::KDEKernel) );
      instance.SetNew(&new_TMVAcLcLKDEKernel);
      instance.SetNewArray(&newArray_TMVAcLcLKDEKernel);
      instance.SetDelete(&delete_TMVAcLcLKDEKernel);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLKDEKernel);
      instance.SetDestructor(&destruct_TMVAcLcLKDEKernel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::KDEKernel*)
   {
      return GenerateInitInstanceLocal((::TMVA::KDEKernel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::KDEKernel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLPDF(void *p);
   static void deleteArray_TMVAcLcLPDF(void *p);
   static void destruct_TMVAcLcLPDF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDF*)
   {
      ::TMVA::PDF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDF", ::TMVA::PDF::Class_Version(), "TMVA/PDF.h", 63,
                  typeid(::TMVA::PDF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDF::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDF) );
      instance.SetDelete(&delete_TMVAcLcLPDF);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDF);
      instance.SetDestructor(&destruct_TMVAcLcLPDF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDF*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLIFitterTarget(void *p);
   static void deleteArray_TMVAcLcLIFitterTarget(void *p);
   static void destruct_TMVAcLcLIFitterTarget(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::IFitterTarget*)
   {
      ::TMVA::IFitterTarget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::IFitterTarget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::IFitterTarget", ::TMVA::IFitterTarget::Class_Version(), "TMVA/IFitterTarget.h", 44,
                  typeid(::TMVA::IFitterTarget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::IFitterTarget::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::IFitterTarget) );
      instance.SetDelete(&delete_TMVAcLcLIFitterTarget);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLIFitterTarget);
      instance.SetDestructor(&destruct_TMVAcLcLIFitterTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::IFitterTarget*)
   {
      return GenerateInitInstanceLocal((::TMVA::IFitterTarget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::IFitterTarget*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodCuts(void *p);
   static void deleteArray_TMVAcLcLMethodCuts(void *p);
   static void destruct_TMVAcLcLMethodCuts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodCuts*)
   {
      ::TMVA::MethodCuts *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodCuts >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodCuts", ::TMVA::MethodCuts::Class_Version(), "TMVA/MethodCuts.h", 61,
                  typeid(::TMVA::MethodCuts), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodCuts::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodCuts) );
      instance.SetDelete(&delete_TMVAcLcLMethodCuts);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodCuts);
      instance.SetDestructor(&destruct_TMVAcLcLMethodCuts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodCuts*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodCuts*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodCuts*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodFisher(void *p);
   static void deleteArray_TMVAcLcLMethodFisher(void *p);
   static void destruct_TMVAcLcLMethodFisher(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodFisher*)
   {
      ::TMVA::MethodFisher *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodFisher >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodFisher", ::TMVA::MethodFisher::Class_Version(), "TMVA/MethodFisher.h", 54,
                  typeid(::TMVA::MethodFisher), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodFisher::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodFisher) );
      instance.SetDelete(&delete_TMVAcLcLMethodFisher);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodFisher);
      instance.SetDestructor(&destruct_TMVAcLcLMethodFisher);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodFisher*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodFisher*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodFisher*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLkNNcLcLEvent_Dictionary();
   static void TMVAcLcLkNNcLcLEvent_TClassManip(TClass*);
   static void *new_TMVAcLcLkNNcLcLEvent(void *p = 0);
   static void *newArray_TMVAcLcLkNNcLcLEvent(Long_t size, void *p);
   static void delete_TMVAcLcLkNNcLcLEvent(void *p);
   static void deleteArray_TMVAcLcLkNNcLcLEvent(void *p);
   static void destruct_TMVAcLcLkNNcLcLEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::kNN::Event*)
   {
      ::TMVA::kNN::Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::kNN::Event));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::kNN::Event", "TMVA/ModulekNN.h", 59,
                  typeid(::TMVA::kNN::Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLkNNcLcLEvent_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::kNN::Event) );
      instance.SetNew(&new_TMVAcLcLkNNcLcLEvent);
      instance.SetNewArray(&newArray_TMVAcLcLkNNcLcLEvent);
      instance.SetDelete(&delete_TMVAcLcLkNNcLcLEvent);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLkNNcLcLEvent);
      instance.SetDestructor(&destruct_TMVAcLcLkNNcLcLEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::kNN::Event*)
   {
      return GenerateInitInstanceLocal((::TMVA::kNN::Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::kNN::Event*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLkNNcLcLEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::kNN::Event*)0x0)->GetClass();
      TMVAcLcLkNNcLcLEvent_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLkNNcLcLEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodKNN(void *p);
   static void deleteArray_TMVAcLcLMethodKNN(void *p);
   static void destruct_TMVAcLcLMethodKNN(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodKNN*)
   {
      ::TMVA::MethodKNN *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodKNN >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodKNN", ::TMVA::MethodKNN::Class_Version(), "TMVA/MethodKNN.h", 54,
                  typeid(::TMVA::MethodKNN), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodKNN::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodKNN) );
      instance.SetDelete(&delete_TMVAcLcLMethodKNN);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodKNN);
      instance.SetDestructor(&destruct_TMVAcLcLMethodKNN);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodKNN*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodKNN*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodKNN*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodCFMlpANN_Utils(void *p);
   static void deleteArray_TMVAcLcLMethodCFMlpANN_Utils(void *p);
   static void destruct_TMVAcLcLMethodCFMlpANN_Utils(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodCFMlpANN_Utils*)
   {
      ::TMVA::MethodCFMlpANN_Utils *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodCFMlpANN_Utils >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodCFMlpANN_Utils", ::TMVA::MethodCFMlpANN_Utils::Class_Version(), "TMVA/MethodCFMlpANN_Utils.h", 54,
                  typeid(::TMVA::MethodCFMlpANN_Utils), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodCFMlpANN_Utils::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodCFMlpANN_Utils) );
      instance.SetDelete(&delete_TMVAcLcLMethodCFMlpANN_Utils);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodCFMlpANN_Utils);
      instance.SetDestructor(&destruct_TMVAcLcLMethodCFMlpANN_Utils);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodCFMlpANN_Utils*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodCFMlpANN_Utils*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN_Utils*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodCFMlpANN(void *p);
   static void deleteArray_TMVAcLcLMethodCFMlpANN(void *p);
   static void destruct_TMVAcLcLMethodCFMlpANN(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodCFMlpANN*)
   {
      ::TMVA::MethodCFMlpANN *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodCFMlpANN >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodCFMlpANN", ::TMVA::MethodCFMlpANN::Class_Version(), "TMVA/MethodCFMlpANN.h", 94,
                  typeid(::TMVA::MethodCFMlpANN), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodCFMlpANN::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodCFMlpANN) );
      instance.SetDelete(&delete_TMVAcLcLMethodCFMlpANN);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodCFMlpANN);
      instance.SetDestructor(&destruct_TMVAcLcLMethodCFMlpANN);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodCFMlpANN*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodCFMlpANN*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodLikelihood(void *p);
   static void deleteArray_TMVAcLcLMethodLikelihood(void *p);
   static void destruct_TMVAcLcLMethodLikelihood(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodLikelihood*)
   {
      ::TMVA::MethodLikelihood *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodLikelihood >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodLikelihood", ::TMVA::MethodLikelihood::Class_Version(), "TMVA/MethodLikelihood.h", 60,
                  typeid(::TMVA::MethodLikelihood), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodLikelihood::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodLikelihood) );
      instance.SetDelete(&delete_TMVAcLcLMethodLikelihood);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodLikelihood);
      instance.SetDestructor(&destruct_TMVAcLcLMethodLikelihood);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodLikelihood*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodLikelihood*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodLikelihood*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodHMatrix(void *p);
   static void deleteArray_TMVAcLcLMethodHMatrix(void *p);
   static void destruct_TMVAcLcLMethodHMatrix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodHMatrix*)
   {
      ::TMVA::MethodHMatrix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodHMatrix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodHMatrix", ::TMVA::MethodHMatrix::Class_Version(), "TMVA/MethodHMatrix.h", 52,
                  typeid(::TMVA::MethodHMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodHMatrix::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodHMatrix) );
      instance.SetDelete(&delete_TMVAcLcLMethodHMatrix);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodHMatrix);
      instance.SetDestructor(&destruct_TMVAcLcLMethodHMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodHMatrix*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodHMatrix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodHMatrix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodPDERS(void *p);
   static void deleteArray_TMVAcLcLMethodPDERS(void *p);
   static void destruct_TMVAcLcLMethodPDERS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodPDERS*)
   {
      ::TMVA::MethodPDERS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodPDERS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodPDERS", ::TMVA::MethodPDERS::Class_Version(), "TMVA/MethodPDERS.h", 59,
                  typeid(::TMVA::MethodPDERS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodPDERS::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodPDERS) );
      instance.SetDelete(&delete_TMVAcLcLMethodPDERS);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodPDERS);
      instance.SetDestructor(&destruct_TMVAcLcLMethodPDERS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodPDERS*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodPDERS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodPDERS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodBDT(void *p);
   static void deleteArray_TMVAcLcLMethodBDT(void *p);
   static void destruct_TMVAcLcLMethodBDT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodBDT*)
   {
      ::TMVA::MethodBDT *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodBDT >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodBDT", ::TMVA::MethodBDT::Class_Version(), "TMVA/MethodBDT.h", 54,
                  typeid(::TMVA::MethodBDT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodBDT::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodBDT) );
      instance.SetDelete(&delete_TMVAcLcLMethodBDT);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodBDT);
      instance.SetDestructor(&destruct_TMVAcLcLMethodBDT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodBDT*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodBDT*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodBDT*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodDT(void *p);
   static void deleteArray_TMVAcLcLMethodDT(void *p);
   static void destruct_TMVAcLcLMethodDT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodDT*)
   {
      ::TMVA::MethodDT *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodDT >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodDT", ::TMVA::MethodDT::Class_Version(), "TMVA/MethodDT.h", 49,
                  typeid(::TMVA::MethodDT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodDT::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodDT) );
      instance.SetDelete(&delete_TMVAcLcLMethodDT);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodDT);
      instance.SetDestructor(&destruct_TMVAcLcLMethodDT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodDT*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodDT*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodDT*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodSVM(void *p);
   static void deleteArray_TMVAcLcLMethodSVM(void *p);
   static void destruct_TMVAcLcLMethodSVM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodSVM*)
   {
      ::TMVA::MethodSVM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodSVM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodSVM", ::TMVA::MethodSVM::Class_Version(), "TMVA/MethodSVM.h", 57,
                  typeid(::TMVA::MethodSVM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodSVM::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodSVM) );
      instance.SetDelete(&delete_TMVAcLcLMethodSVM);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodSVM);
      instance.SetDestructor(&destruct_TMVAcLcLMethodSVM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodSVM*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodSVM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodSVM*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodBayesClassifier(void *p);
   static void deleteArray_TMVAcLcLMethodBayesClassifier(void *p);
   static void destruct_TMVAcLcLMethodBayesClassifier(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodBayesClassifier*)
   {
      ::TMVA::MethodBayesClassifier *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodBayesClassifier >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodBayesClassifier", ::TMVA::MethodBayesClassifier::Class_Version(), "TMVA/MethodBayesClassifier.h", 44,
                  typeid(::TMVA::MethodBayesClassifier), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodBayesClassifier::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodBayesClassifier) );
      instance.SetDelete(&delete_TMVAcLcLMethodBayesClassifier);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodBayesClassifier);
      instance.SetDestructor(&destruct_TMVAcLcLMethodBayesClassifier);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodBayesClassifier*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodBayesClassifier*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodBayesClassifier*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodFDA(void *p);
   static void deleteArray_TMVAcLcLMethodFDA(void *p);
   static void destruct_TMVAcLcLMethodFDA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodFDA*)
   {
      ::TMVA::MethodFDA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodFDA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodFDA", ::TMVA::MethodFDA::Class_Version(), "TMVA/MethodFDA.h", 60,
                  typeid(::TMVA::MethodFDA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodFDA::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodFDA) );
      instance.SetDelete(&delete_TMVAcLcLMethodFDA);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodFDA);
      instance.SetDestructor(&destruct_TMVAcLcLMethodFDA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodFDA*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodFDA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodFDA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodMLP(void *p);
   static void deleteArray_TMVAcLcLMethodMLP(void *p);
   static void destruct_TMVAcLcLMethodMLP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodMLP*)
   {
      ::TMVA::MethodMLP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodMLP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodMLP", ::TMVA::MethodMLP::Class_Version(), "TMVA/MethodMLP.h", 69,
                  typeid(::TMVA::MethodMLP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodMLP::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodMLP) );
      instance.SetDelete(&delete_TMVAcLcLMethodMLP);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodMLP);
      instance.SetDestructor(&destruct_TMVAcLcLMethodMLP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodMLP*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodMLP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodMLP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodBoost(void *p);
   static void deleteArray_TMVAcLcLMethodBoost(void *p);
   static void destruct_TMVAcLcLMethodBoost(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodBoost*)
   {
      ::TMVA::MethodBoost *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodBoost >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodBoost", ::TMVA::MethodBoost::Class_Version(), "TMVA/MethodBoost.h", 56,
                  typeid(::TMVA::MethodBoost), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodBoost::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodBoost) );
      instance.SetDelete(&delete_TMVAcLcLMethodBoost);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodBoost);
      instance.SetDestructor(&destruct_TMVAcLcLMethodBoost);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodBoost*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodBoost*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodBoost*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTimer(void *p = 0);
   static void *newArray_TMVAcLcLTimer(Long_t size, void *p);
   static void delete_TMVAcLcLTimer(void *p);
   static void deleteArray_TMVAcLcLTimer(void *p);
   static void destruct_TMVAcLcLTimer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Timer*)
   {
      ::TMVA::Timer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Timer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Timer", ::TMVA::Timer::Class_Version(), "TMVA/Timer.h", 58,
                  typeid(::TMVA::Timer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Timer::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Timer) );
      instance.SetNew(&new_TMVAcLcLTimer);
      instance.SetNewArray(&newArray_TMVAcLcLTimer);
      instance.SetDelete(&delete_TMVAcLcLTimer);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTimer);
      instance.SetDestructor(&destruct_TMVAcLcLTimer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Timer*)
   {
      return GenerateInitInstanceLocal((::TMVA::Timer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Timer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLPDEFoamDensityBase(void *p);
   static void deleteArray_TMVAcLcLPDEFoamDensityBase(void *p);
   static void destruct_TMVAcLcLPDEFoamDensityBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamDensityBase*)
   {
      ::TMVA::PDEFoamDensityBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamDensityBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamDensityBase", ::TMVA::PDEFoamDensityBase::Class_Version(), "TMVA/PDEFoamDensityBase.h", 45,
                  typeid(::TMVA::PDEFoamDensityBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamDensityBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamDensityBase) );
      instance.SetDelete(&delete_TMVAcLcLPDEFoamDensityBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamDensityBase);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamDensityBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamDensityBase*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamDensityBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamDensityBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamVect(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamVect(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamVect(void *p);
   static void deleteArray_TMVAcLcLPDEFoamVect(void *p);
   static void destruct_TMVAcLcLPDEFoamVect(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamVect*)
   {
      ::TMVA::PDEFoamVect *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamVect >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamVect", ::TMVA::PDEFoamVect::Class_Version(), "TMVA/PDEFoamVect.h", 36,
                  typeid(::TMVA::PDEFoamVect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamVect::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamVect) );
      instance.SetNew(&new_TMVAcLcLPDEFoamVect);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamVect);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamVect);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamVect);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamVect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamVect*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamVect*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamVect*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamCell(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamCell(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamCell(void *p);
   static void deleteArray_TMVAcLcLPDEFoamCell(void *p);
   static void destruct_TMVAcLcLPDEFoamCell(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamCell*)
   {
      ::TMVA::PDEFoamCell *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamCell >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamCell", ::TMVA::PDEFoamCell::Class_Version(), "TMVA/PDEFoamCell.h", 41,
                  typeid(::TMVA::PDEFoamCell), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamCell::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamCell) );
      instance.SetNew(&new_TMVAcLcLPDEFoamCell);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamCell);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamCell);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamCell);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamCell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamCell*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamCell*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamCell*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoam(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoam(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoam(void *p);
   static void deleteArray_TMVAcLcLPDEFoam(void *p);
   static void destruct_TMVAcLcLPDEFoam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoam*)
   {
      ::TMVA::PDEFoam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoam", ::TMVA::PDEFoam::Class_Version(), "TMVA/PDEFoam.h", 77,
                  typeid(::TMVA::PDEFoam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoam::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoam) );
      instance.SetNew(&new_TMVAcLcLPDEFoam);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoam);
      instance.SetDelete(&delete_TMVAcLcLPDEFoam);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoam);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoam*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamDiscriminant(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamDiscriminant(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamDiscriminant(void *p);
   static void deleteArray_TMVAcLcLPDEFoamDiscriminant(void *p);
   static void destruct_TMVAcLcLPDEFoamDiscriminant(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamDiscriminant*)
   {
      ::TMVA::PDEFoamDiscriminant *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamDiscriminant >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamDiscriminant", ::TMVA::PDEFoamDiscriminant::Class_Version(), "TMVA/PDEFoamDiscriminant.h", 38,
                  typeid(::TMVA::PDEFoamDiscriminant), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamDiscriminant::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamDiscriminant) );
      instance.SetNew(&new_TMVAcLcLPDEFoamDiscriminant);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamDiscriminant);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamDiscriminant);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamDiscriminant);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamDiscriminant);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamDiscriminant*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamDiscriminant*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminant*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamDecisionTree(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamDecisionTree(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamDecisionTree(void *p);
   static void deleteArray_TMVAcLcLPDEFoamDecisionTree(void *p);
   static void destruct_TMVAcLcLPDEFoamDecisionTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamDecisionTree*)
   {
      ::TMVA::PDEFoamDecisionTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamDecisionTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamDecisionTree", ::TMVA::PDEFoamDecisionTree::Class_Version(), "TMVA/PDEFoamDecisionTree.h", 39,
                  typeid(::TMVA::PDEFoamDecisionTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamDecisionTree::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamDecisionTree) );
      instance.SetNew(&new_TMVAcLcLPDEFoamDecisionTree);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamDecisionTree);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamDecisionTree);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamDecisionTree);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamDecisionTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamDecisionTree*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamDecisionTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamEvent(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamEvent(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamEvent(void *p);
   static void deleteArray_TMVAcLcLPDEFoamEvent(void *p);
   static void destruct_TMVAcLcLPDEFoamEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamEvent*)
   {
      ::TMVA::PDEFoamEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamEvent", ::TMVA::PDEFoamEvent::Class_Version(), "TMVA/PDEFoamEvent.h", 38,
                  typeid(::TMVA::PDEFoamEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamEvent) );
      instance.SetNew(&new_TMVAcLcLPDEFoamEvent);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamEvent);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamEvent);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamEvent);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamEvent*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamTarget(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamTarget(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamTarget(void *p);
   static void deleteArray_TMVAcLcLPDEFoamTarget(void *p);
   static void destruct_TMVAcLcLPDEFoamTarget(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamTarget*)
   {
      ::TMVA::PDEFoamTarget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamTarget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamTarget", ::TMVA::PDEFoamTarget::Class_Version(), "TMVA/PDEFoamTarget.h", 38,
                  typeid(::TMVA::PDEFoamTarget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamTarget::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamTarget) );
      instance.SetNew(&new_TMVAcLcLPDEFoamTarget);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamTarget);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamTarget);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamTarget);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamTarget*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamTarget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamTarget*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamMultiTarget(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamMultiTarget(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamMultiTarget(void *p);
   static void deleteArray_TMVAcLcLPDEFoamMultiTarget(void *p);
   static void destruct_TMVAcLcLPDEFoamMultiTarget(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamMultiTarget*)
   {
      ::TMVA::PDEFoamMultiTarget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamMultiTarget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamMultiTarget", ::TMVA::PDEFoamMultiTarget::Class_Version(), "TMVA/PDEFoamMultiTarget.h", 43,
                  typeid(::TMVA::PDEFoamMultiTarget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamMultiTarget::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamMultiTarget) );
      instance.SetNew(&new_TMVAcLcLPDEFoamMultiTarget);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamMultiTarget);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamMultiTarget);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamMultiTarget);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamMultiTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamMultiTarget*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamMultiTarget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamMultiTarget*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamTargetDensity(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamTargetDensity(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamTargetDensity(void *p);
   static void deleteArray_TMVAcLcLPDEFoamTargetDensity(void *p);
   static void destruct_TMVAcLcLPDEFoamTargetDensity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamTargetDensity*)
   {
      ::TMVA::PDEFoamTargetDensity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamTargetDensity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamTargetDensity", ::TMVA::PDEFoamTargetDensity::Class_Version(), "TMVA/PDEFoamTargetDensity.h", 41,
                  typeid(::TMVA::PDEFoamTargetDensity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamTargetDensity::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamTargetDensity) );
      instance.SetNew(&new_TMVAcLcLPDEFoamTargetDensity);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamTargetDensity);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamTargetDensity);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamTargetDensity);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamTargetDensity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamTargetDensity*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamTargetDensity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamTargetDensity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamEventDensity(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamEventDensity(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamEventDensity(void *p);
   static void deleteArray_TMVAcLcLPDEFoamEventDensity(void *p);
   static void destruct_TMVAcLcLPDEFoamEventDensity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamEventDensity*)
   {
      ::TMVA::PDEFoamEventDensity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamEventDensity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamEventDensity", ::TMVA::PDEFoamEventDensity::Class_Version(), "TMVA/PDEFoamEventDensity.h", 41,
                  typeid(::TMVA::PDEFoamEventDensity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamEventDensity::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamEventDensity) );
      instance.SetNew(&new_TMVAcLcLPDEFoamEventDensity);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamEventDensity);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamEventDensity);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamEventDensity);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamEventDensity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamEventDensity*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamEventDensity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamEventDensity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamDiscriminantDensity(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamDiscriminantDensity(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamDiscriminantDensity(void *p);
   static void deleteArray_TMVAcLcLPDEFoamDiscriminantDensity(void *p);
   static void destruct_TMVAcLcLPDEFoamDiscriminantDensity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamDiscriminantDensity*)
   {
      ::TMVA::PDEFoamDiscriminantDensity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamDiscriminantDensity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamDiscriminantDensity", ::TMVA::PDEFoamDiscriminantDensity::Class_Version(), "TMVA/PDEFoamDiscriminantDensity.h", 41,
                  typeid(::TMVA::PDEFoamDiscriminantDensity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamDiscriminantDensity::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamDiscriminantDensity) );
      instance.SetNew(&new_TMVAcLcLPDEFoamDiscriminantDensity);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamDiscriminantDensity);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamDiscriminantDensity);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamDiscriminantDensity);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamDiscriminantDensity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamDiscriminantDensity*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamDiscriminantDensity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminantDensity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamDecisionTreeDensity(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamDecisionTreeDensity(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamDecisionTreeDensity(void *p);
   static void deleteArray_TMVAcLcLPDEFoamDecisionTreeDensity(void *p);
   static void destruct_TMVAcLcLPDEFoamDecisionTreeDensity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamDecisionTreeDensity*)
   {
      ::TMVA::PDEFoamDecisionTreeDensity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamDecisionTreeDensity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamDecisionTreeDensity", ::TMVA::PDEFoamDecisionTreeDensity::Class_Version(), "TMVA/PDEFoamDecisionTreeDensity.h", 46,
                  typeid(::TMVA::PDEFoamDecisionTreeDensity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamDecisionTreeDensity::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamDecisionTreeDensity) );
      instance.SetNew(&new_TMVAcLcLPDEFoamDecisionTreeDensity);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamDecisionTreeDensity);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamDecisionTreeDensity);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamDecisionTreeDensity);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamDecisionTreeDensity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamDecisionTreeDensity*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamDecisionTreeDensity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTreeDensity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLPDEFoamKernelBase(void *p);
   static void deleteArray_TMVAcLcLPDEFoamKernelBase(void *p);
   static void destruct_TMVAcLcLPDEFoamKernelBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamKernelBase*)
   {
      ::TMVA::PDEFoamKernelBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamKernelBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamKernelBase", ::TMVA::PDEFoamKernelBase::Class_Version(), "TMVA/PDEFoamKernelBase.h", 38,
                  typeid(::TMVA::PDEFoamKernelBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamKernelBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamKernelBase) );
      instance.SetDelete(&delete_TMVAcLcLPDEFoamKernelBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamKernelBase);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamKernelBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamKernelBase*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamKernelBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamKernelTrivial(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamKernelTrivial(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamKernelTrivial(void *p);
   static void deleteArray_TMVAcLcLPDEFoamKernelTrivial(void *p);
   static void destruct_TMVAcLcLPDEFoamKernelTrivial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamKernelTrivial*)
   {
      ::TMVA::PDEFoamKernelTrivial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamKernelTrivial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamKernelTrivial", ::TMVA::PDEFoamKernelTrivial::Class_Version(), "TMVA/PDEFoamKernelTrivial.h", 37,
                  typeid(::TMVA::PDEFoamKernelTrivial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamKernelTrivial::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamKernelTrivial) );
      instance.SetNew(&new_TMVAcLcLPDEFoamKernelTrivial);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamKernelTrivial);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamKernelTrivial);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamKernelTrivial);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamKernelTrivial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamKernelTrivial*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamKernelTrivial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelTrivial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLPDEFoamKernelLinN(void *p = 0);
   static void *newArray_TMVAcLcLPDEFoamKernelLinN(Long_t size, void *p);
   static void delete_TMVAcLcLPDEFoamKernelLinN(void *p);
   static void deleteArray_TMVAcLcLPDEFoamKernelLinN(void *p);
   static void destruct_TMVAcLcLPDEFoamKernelLinN(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamKernelLinN*)
   {
      ::TMVA::PDEFoamKernelLinN *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamKernelLinN >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamKernelLinN", ::TMVA::PDEFoamKernelLinN::Class_Version(), "TMVA/PDEFoamKernelLinN.h", 37,
                  typeid(::TMVA::PDEFoamKernelLinN), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamKernelLinN::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamKernelLinN) );
      instance.SetNew(&new_TMVAcLcLPDEFoamKernelLinN);
      instance.SetNewArray(&newArray_TMVAcLcLPDEFoamKernelLinN);
      instance.SetDelete(&delete_TMVAcLcLPDEFoamKernelLinN);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamKernelLinN);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamKernelLinN);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamKernelLinN*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamKernelLinN*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelLinN*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLPDEFoamKernelGauss(void *p);
   static void deleteArray_TMVAcLcLPDEFoamKernelGauss(void *p);
   static void destruct_TMVAcLcLPDEFoamKernelGauss(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PDEFoamKernelGauss*)
   {
      ::TMVA::PDEFoamKernelGauss *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PDEFoamKernelGauss >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PDEFoamKernelGauss", ::TMVA::PDEFoamKernelGauss::Class_Version(), "TMVA/PDEFoamKernelGauss.h", 37,
                  typeid(::TMVA::PDEFoamKernelGauss), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PDEFoamKernelGauss::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PDEFoamKernelGauss) );
      instance.SetDelete(&delete_TMVAcLcLPDEFoamKernelGauss);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPDEFoamKernelGauss);
      instance.SetDestructor(&destruct_TMVAcLcLPDEFoamKernelGauss);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PDEFoamKernelGauss*)
   {
      return GenerateInitInstanceLocal((::TMVA::PDEFoamKernelGauss*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelGauss*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodPDEFoam(void *p);
   static void deleteArray_TMVAcLcLMethodPDEFoam(void *p);
   static void destruct_TMVAcLcLMethodPDEFoam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodPDEFoam*)
   {
      ::TMVA::MethodPDEFoam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodPDEFoam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodPDEFoam", ::TMVA::MethodPDEFoam::Class_Version(), "TMVA/MethodPDEFoam.h", 67,
                  typeid(::TMVA::MethodPDEFoam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodPDEFoam::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodPDEFoam) );
      instance.SetDelete(&delete_TMVAcLcLMethodPDEFoam);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodPDEFoam);
      instance.SetDestructor(&destruct_TMVAcLcLMethodPDEFoam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodPDEFoam*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodPDEFoam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodPDEFoam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodLD(void *p);
   static void deleteArray_TMVAcLcLMethodLD(void *p);
   static void destruct_TMVAcLcLMethodLD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodLD*)
   {
      ::TMVA::MethodLD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodLD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodLD", ::TMVA::MethodLD::Class_Version(), "TMVA/MethodLD.h", 50,
                  typeid(::TMVA::MethodLD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodLD::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodLD) );
      instance.SetDelete(&delete_TMVAcLcLMethodLD);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodLD);
      instance.SetDestructor(&destruct_TMVAcLcLMethodLD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodLD*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodLD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodLD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodCategory(void *p);
   static void deleteArray_TMVAcLcLMethodCategory(void *p);
   static void destruct_TMVAcLcLMethodCategory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodCategory*)
   {
      ::TMVA::MethodCategory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodCategory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodCategory", ::TMVA::MethodCategory::Class_Version(), "TMVA/MethodCategory.h", 56,
                  typeid(::TMVA::MethodCategory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodCategory::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodCategory) );
      instance.SetDelete(&delete_TMVAcLcLMethodCategory);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodCategory);
      instance.SetDestructor(&destruct_TMVAcLcLMethodCategory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodCategory*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodCategory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodCategory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLVariableTransformBase(void *p);
   static void deleteArray_TMVAcLcLVariableTransformBase(void *p);
   static void destruct_TMVAcLcLVariableTransformBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::VariableTransformBase*)
   {
      ::TMVA::VariableTransformBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::VariableTransformBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::VariableTransformBase", ::TMVA::VariableTransformBase::Class_Version(), "TMVA/VariableTransformBase.h", 53,
                  typeid(::TMVA::VariableTransformBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::VariableTransformBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::VariableTransformBase) );
      instance.SetDelete(&delete_TMVAcLcLVariableTransformBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLVariableTransformBase);
      instance.SetDestructor(&destruct_TMVAcLcLVariableTransformBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::VariableTransformBase*)
   {
      return GenerateInitInstanceLocal((::TMVA::VariableTransformBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::VariableTransformBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLTools_Dictionary();
   static void TMVAcLcLTools_TClassManip(TClass*);
   static void delete_TMVAcLcLTools(void *p);
   static void deleteArray_TMVAcLcLTools(void *p);
   static void destruct_TMVAcLcLTools(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Tools*)
   {
      ::TMVA::Tools *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Tools));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Tools", "TMVA/Tools.h", 80,
                  typeid(::TMVA::Tools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLTools_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Tools) );
      instance.SetDelete(&delete_TMVAcLcLTools);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTools);
      instance.SetDestructor(&destruct_TMVAcLcLTools);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Tools*)
   {
      return GenerateInitInstanceLocal((::TMVA::Tools*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Tools*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLTools_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::Tools*)0x0)->GetClass();
      TMVAcLcLTools_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLTools_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodDNN(void *p);
   static void deleteArray_TMVAcLcLMethodDNN(void *p);
   static void destruct_TMVAcLcLMethodDNN(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodDNN*)
   {
      ::TMVA::MethodDNN *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodDNN >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodDNN", ::TMVA::MethodDNN::Class_Version(), "TMVA/MethodDNN.h", 65,
                  typeid(::TMVA::MethodDNN), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodDNN::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodDNN) );
      instance.SetDelete(&delete_TMVAcLcLMethodDNN);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodDNN);
      instance.SetDestructor(&destruct_TMVAcLcLMethodDNN);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodDNN*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodDNN*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodDNN*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLTSpline2(void *p);
   static void deleteArray_TMVAcLcLTSpline2(void *p);
   static void destruct_TMVAcLcLTSpline2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TSpline2*)
   {
      ::TMVA::TSpline2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TSpline2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TSpline2", ::TMVA::TSpline2::Class_Version(), "TMVA/TSpline2.h", 43,
                  typeid(::TMVA::TSpline2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TSpline2::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TSpline2) );
      instance.SetDelete(&delete_TMVAcLcLTSpline2);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTSpline2);
      instance.SetDestructor(&destruct_TMVAcLcLTSpline2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TSpline2*)
   {
      return GenerateInitInstanceLocal((::TMVA::TSpline2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TSpline2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLTSpline1(void *p);
   static void deleteArray_TMVAcLcLTSpline1(void *p);
   static void destruct_TMVAcLcLTSpline1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TSpline1*)
   {
      ::TMVA::TSpline1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TSpline1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TSpline1", ::TMVA::TSpline1::Class_Version(), "TMVA/TSpline1.h", 43,
                  typeid(::TMVA::TSpline1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TSpline1::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TSpline1) );
      instance.SetDelete(&delete_TMVAcLcLTSpline1);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTSpline1);
      instance.SetDestructor(&destruct_TMVAcLcLTSpline1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TSpline1*)
   {
      return GenerateInitInstanceLocal((::TMVA::TSpline1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TSpline1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLRootFinder(void *p);
   static void deleteArray_TMVAcLcLRootFinder(void *p);
   static void destruct_TMVAcLcLRootFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::RootFinder*)
   {
      ::TMVA::RootFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::RootFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::RootFinder", ::TMVA::RootFinder::Class_Version(), "TMVA/RootFinder.h", 48,
                  typeid(::TMVA::RootFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::RootFinder::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::RootFinder) );
      instance.SetDelete(&delete_TMVAcLcLRootFinder);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLRootFinder);
      instance.SetDestructor(&destruct_TMVAcLcLRootFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::RootFinder*)
   {
      return GenerateInitInstanceLocal((::TMVA::RootFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::RootFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLCrossEntropy(void *p = 0);
   static void *newArray_TMVAcLcLCrossEntropy(Long_t size, void *p);
   static void delete_TMVAcLcLCrossEntropy(void *p);
   static void deleteArray_TMVAcLcLCrossEntropy(void *p);
   static void destruct_TMVAcLcLCrossEntropy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::CrossEntropy*)
   {
      ::TMVA::CrossEntropy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::CrossEntropy >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::CrossEntropy", ::TMVA::CrossEntropy::Class_Version(), "TMVA/CrossEntropy.h", 43,
                  typeid(::TMVA::CrossEntropy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::CrossEntropy::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::CrossEntropy) );
      instance.SetNew(&new_TMVAcLcLCrossEntropy);
      instance.SetNewArray(&newArray_TMVAcLcLCrossEntropy);
      instance.SetDelete(&delete_TMVAcLcLCrossEntropy);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLCrossEntropy);
      instance.SetDestructor(&destruct_TMVAcLcLCrossEntropy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::CrossEntropy*)
   {
      return GenerateInitInstanceLocal((::TMVA::CrossEntropy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::CrossEntropy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLMisClassificationError(void *p = 0);
   static void *newArray_TMVAcLcLMisClassificationError(Long_t size, void *p);
   static void delete_TMVAcLcLMisClassificationError(void *p);
   static void deleteArray_TMVAcLcLMisClassificationError(void *p);
   static void destruct_TMVAcLcLMisClassificationError(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MisClassificationError*)
   {
      ::TMVA::MisClassificationError *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MisClassificationError >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MisClassificationError", ::TMVA::MisClassificationError::Class_Version(), "TMVA/MisClassificationError.h", 46,
                  typeid(::TMVA::MisClassificationError), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MisClassificationError::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MisClassificationError) );
      instance.SetNew(&new_TMVAcLcLMisClassificationError);
      instance.SetNewArray(&newArray_TMVAcLcLMisClassificationError);
      instance.SetDelete(&delete_TMVAcLcLMisClassificationError);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMisClassificationError);
      instance.SetDestructor(&destruct_TMVAcLcLMisClassificationError);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MisClassificationError*)
   {
      return GenerateInitInstanceLocal((::TMVA::MisClassificationError*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MisClassificationError*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLSdivSqrtSplusB(void *p = 0);
   static void *newArray_TMVAcLcLSdivSqrtSplusB(Long_t size, void *p);
   static void delete_TMVAcLcLSdivSqrtSplusB(void *p);
   static void deleteArray_TMVAcLcLSdivSqrtSplusB(void *p);
   static void destruct_TMVAcLcLSdivSqrtSplusB(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::SdivSqrtSplusB*)
   {
      ::TMVA::SdivSqrtSplusB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::SdivSqrtSplusB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::SdivSqrtSplusB", ::TMVA::SdivSqrtSplusB::Class_Version(), "TMVA/SdivSqrtSplusB.h", 44,
                  typeid(::TMVA::SdivSqrtSplusB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::SdivSqrtSplusB::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::SdivSqrtSplusB) );
      instance.SetNew(&new_TMVAcLcLSdivSqrtSplusB);
      instance.SetNewArray(&newArray_TMVAcLcLSdivSqrtSplusB);
      instance.SetDelete(&delete_TMVAcLcLSdivSqrtSplusB);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLSdivSqrtSplusB);
      instance.SetDestructor(&destruct_TMVAcLcLSdivSqrtSplusB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::SdivSqrtSplusB*)
   {
      return GenerateInitInstanceLocal((::TMVA::SdivSqrtSplusB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::SdivSqrtSplusB*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTreeInfo(void *p = 0);
   static void *newArray_TMVAcLcLTreeInfo(Long_t size, void *p);
   static void delete_TMVAcLcLTreeInfo(void *p);
   static void deleteArray_TMVAcLcLTreeInfo(void *p);
   static void destruct_TMVAcLcLTreeInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TreeInfo*)
   {
      ::TMVA::TreeInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TreeInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TreeInfo", ::TMVA::TreeInfo::Class_Version(), "TMVA/DataInputHandler.h", 53,
                  typeid(::TMVA::TreeInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TreeInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TreeInfo) );
      instance.SetNew(&new_TMVAcLcLTreeInfo);
      instance.SetNewArray(&newArray_TMVAcLcLTreeInfo);
      instance.SetDelete(&delete_TMVAcLcLTreeInfo);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTreeInfo);
      instance.SetDestructor(&destruct_TMVAcLcLTreeInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TreeInfo*)
   {
      return GenerateInitInstanceLocal((::TMVA::TreeInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TreeInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLDataInputHandler(void *p = 0);
   static void *newArray_TMVAcLcLDataInputHandler(Long_t size, void *p);
   static void delete_TMVAcLcLDataInputHandler(void *p);
   static void deleteArray_TMVAcLcLDataInputHandler(void *p);
   static void destruct_TMVAcLcLDataInputHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::DataInputHandler*)
   {
      ::TMVA::DataInputHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::DataInputHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::DataInputHandler", ::TMVA::DataInputHandler::Class_Version(), "TMVA/DataInputHandler.h", 79,
                  typeid(::TMVA::DataInputHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::DataInputHandler::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::DataInputHandler) );
      instance.SetNew(&new_TMVAcLcLDataInputHandler);
      instance.SetNewArray(&newArray_TMVAcLcLDataInputHandler);
      instance.SetDelete(&delete_TMVAcLcLDataInputHandler);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLDataInputHandler);
      instance.SetDestructor(&destruct_TMVAcLcLDataInputHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::DataInputHandler*)
   {
      return GenerateInitInstanceLocal((::TMVA::DataInputHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::DataInputHandler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLDataSetManager(void *p = 0);
   static void *newArray_TMVAcLcLDataSetManager(Long_t size, void *p);
   static void delete_TMVAcLcLDataSetManager(void *p);
   static void deleteArray_TMVAcLcLDataSetManager(void *p);
   static void destruct_TMVAcLcLDataSetManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::DataSetManager*)
   {
      ::TMVA::DataSetManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::DataSetManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::DataSetManager", ::TMVA::DataSetManager::Class_Version(), "TMVA/DataSetManager.h", 50,
                  typeid(::TMVA::DataSetManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::DataSetManager::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::DataSetManager) );
      instance.SetNew(&new_TMVAcLcLDataSetManager);
      instance.SetNewArray(&newArray_TMVAcLcLDataSetManager);
      instance.SetDelete(&delete_TMVAcLcLDataSetManager);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLDataSetManager);
      instance.SetDestructor(&destruct_TMVAcLcLDataSetManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::DataSetManager*)
   {
      return GenerateInitInstanceLocal((::TMVA::DataSetManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::DataSetManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLReader(void *p = 0);
   static void *newArray_TMVAcLcLReader(Long_t size, void *p);
   static void delete_TMVAcLcLReader(void *p);
   static void deleteArray_TMVAcLcLReader(void *p);
   static void destruct_TMVAcLcLReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Reader*)
   {
      ::TMVA::Reader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Reader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Reader", ::TMVA::Reader::Class_Version(), "TMVA/Reader.h", 63,
                  typeid(::TMVA::Reader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Reader::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Reader) );
      instance.SetNew(&new_TMVAcLcLReader);
      instance.SetNewArray(&newArray_TMVAcLcLReader);
      instance.SetDelete(&delete_TMVAcLcLReader);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLReader);
      instance.SetDestructor(&destruct_TMVAcLcLReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Reader*)
   {
      return GenerateInitInstanceLocal((::TMVA::Reader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Reader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLGeneticGenes(void *p = 0);
   static void *newArray_TMVAcLcLGeneticGenes(Long_t size, void *p);
   static void delete_TMVAcLcLGeneticGenes(void *p);
   static void deleteArray_TMVAcLcLGeneticGenes(void *p);
   static void destruct_TMVAcLcLGeneticGenes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::GeneticGenes*)
   {
      ::TMVA::GeneticGenes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::GeneticGenes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::GeneticGenes", ::TMVA::GeneticGenes::Class_Version(), "TMVA/GeneticGenes.h", 41,
                  typeid(::TMVA::GeneticGenes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::GeneticGenes::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::GeneticGenes) );
      instance.SetNew(&new_TMVAcLcLGeneticGenes);
      instance.SetNewArray(&newArray_TMVAcLcLGeneticGenes);
      instance.SetDelete(&delete_TMVAcLcLGeneticGenes);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLGeneticGenes);
      instance.SetDestructor(&destruct_TMVAcLcLGeneticGenes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::GeneticGenes*)
   {
      return GenerateInitInstanceLocal((::TMVA::GeneticGenes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::GeneticGenes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLInterval(void *p);
   static void deleteArray_TMVAcLcLInterval(void *p);
   static void destruct_TMVAcLcLInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Interval*)
   {
      ::TMVA::Interval *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Interval >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Interval", ::TMVA::Interval::Class_Version(), "TMVA/Interval.h", 61,
                  typeid(::TMVA::Interval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Interval::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Interval) );
      instance.SetDelete(&delete_TMVAcLcLInterval);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLInterval);
      instance.SetDestructor(&destruct_TMVAcLcLInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Interval*)
   {
      return GenerateInitInstanceLocal((::TMVA::Interval*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Interval*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLGeneticRange(void *p);
   static void deleteArray_TMVAcLcLGeneticRange(void *p);
   static void destruct_TMVAcLcLGeneticRange(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::GeneticRange*)
   {
      ::TMVA::GeneticRange *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::GeneticRange >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::GeneticRange", ::TMVA::GeneticRange::Class_Version(), "TMVA/GeneticRange.h", 42,
                  typeid(::TMVA::GeneticRange), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::GeneticRange::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::GeneticRange) );
      instance.SetDelete(&delete_TMVAcLcLGeneticRange);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLGeneticRange);
      instance.SetDestructor(&destruct_TMVAcLcLGeneticRange);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::GeneticRange*)
   {
      return GenerateInitInstanceLocal((::TMVA::GeneticRange*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::GeneticRange*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLGeneticPopulation(void *p);
   static void deleteArray_TMVAcLcLGeneticPopulation(void *p);
   static void destruct_TMVAcLcLGeneticPopulation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::GeneticPopulation*)
   {
      ::TMVA::GeneticPopulation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::GeneticPopulation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::GeneticPopulation", ::TMVA::GeneticPopulation::Class_Version(), "TMVA/GeneticPopulation.h", 49,
                  typeid(::TMVA::GeneticPopulation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::GeneticPopulation::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::GeneticPopulation) );
      instance.SetDelete(&delete_TMVAcLcLGeneticPopulation);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLGeneticPopulation);
      instance.SetDestructor(&destruct_TMVAcLcLGeneticPopulation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::GeneticPopulation*)
   {
      return GenerateInitInstanceLocal((::TMVA::GeneticPopulation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::GeneticPopulation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLGeneticAlgorithm(void *p);
   static void deleteArray_TMVAcLcLGeneticAlgorithm(void *p);
   static void destruct_TMVAcLcLGeneticAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::GeneticAlgorithm*)
   {
      ::TMVA::GeneticAlgorithm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::GeneticAlgorithm >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::GeneticAlgorithm", ::TMVA::GeneticAlgorithm::Class_Version(), "TMVA/GeneticAlgorithm.h", 50,
                  typeid(::TMVA::GeneticAlgorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::GeneticAlgorithm::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::GeneticAlgorithm) );
      instance.SetDelete(&delete_TMVAcLcLGeneticAlgorithm);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLGeneticAlgorithm);
      instance.SetDestructor(&destruct_TMVAcLcLGeneticAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::GeneticAlgorithm*)
   {
      return GenerateInitInstanceLocal((::TMVA::GeneticAlgorithm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::GeneticAlgorithm*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLGiniIndex(void *p = 0);
   static void *newArray_TMVAcLcLGiniIndex(Long_t size, void *p);
   static void delete_TMVAcLcLGiniIndex(void *p);
   static void deleteArray_TMVAcLcLGiniIndex(void *p);
   static void destruct_TMVAcLcLGiniIndex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::GiniIndex*)
   {
      ::TMVA::GiniIndex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::GiniIndex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::GiniIndex", ::TMVA::GiniIndex::Class_Version(), "TMVA/GiniIndex.h", 63,
                  typeid(::TMVA::GiniIndex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::GiniIndex::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::GiniIndex) );
      instance.SetNew(&new_TMVAcLcLGiniIndex);
      instance.SetNewArray(&newArray_TMVAcLcLGiniIndex);
      instance.SetDelete(&delete_TMVAcLcLGiniIndex);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLGiniIndex);
      instance.SetDestructor(&destruct_TMVAcLcLGiniIndex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::GiniIndex*)
   {
      return GenerateInitInstanceLocal((::TMVA::GiniIndex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::GiniIndex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLGiniIndexWithLaplace(void *p = 0);
   static void *newArray_TMVAcLcLGiniIndexWithLaplace(Long_t size, void *p);
   static void delete_TMVAcLcLGiniIndexWithLaplace(void *p);
   static void deleteArray_TMVAcLcLGiniIndexWithLaplace(void *p);
   static void destruct_TMVAcLcLGiniIndexWithLaplace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::GiniIndexWithLaplace*)
   {
      ::TMVA::GiniIndexWithLaplace *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::GiniIndexWithLaplace >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::GiniIndexWithLaplace", ::TMVA::GiniIndexWithLaplace::Class_Version(), "TMVA/GiniIndexWithLaplace.h", 59,
                  typeid(::TMVA::GiniIndexWithLaplace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::GiniIndexWithLaplace::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::GiniIndexWithLaplace) );
      instance.SetNew(&new_TMVAcLcLGiniIndexWithLaplace);
      instance.SetNewArray(&newArray_TMVAcLcLGiniIndexWithLaplace);
      instance.SetDelete(&delete_TMVAcLcLGiniIndexWithLaplace);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLGiniIndexWithLaplace);
      instance.SetDestructor(&destruct_TMVAcLcLGiniIndexWithLaplace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::GiniIndexWithLaplace*)
   {
      return GenerateInitInstanceLocal((::TMVA::GiniIndexWithLaplace*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::GiniIndexWithLaplace*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLSimulatedAnnealing(void *p);
   static void deleteArray_TMVAcLcLSimulatedAnnealing(void *p);
   static void destruct_TMVAcLcLSimulatedAnnealing(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::SimulatedAnnealing*)
   {
      ::TMVA::SimulatedAnnealing *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::SimulatedAnnealing >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::SimulatedAnnealing", ::TMVA::SimulatedAnnealing::Class_Version(), "TMVA/SimulatedAnnealing.h", 52,
                  typeid(::TMVA::SimulatedAnnealing), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::SimulatedAnnealing::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::SimulatedAnnealing) );
      instance.SetDelete(&delete_TMVAcLcLSimulatedAnnealing);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLSimulatedAnnealing);
      instance.SetDestructor(&destruct_TMVAcLcLSimulatedAnnealing);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::SimulatedAnnealing*)
   {
      return GenerateInitInstanceLocal((::TMVA::SimulatedAnnealing*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealing*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLQuickMVAProbEstimator(void *p = 0);
   static void *newArray_TMVAcLcLQuickMVAProbEstimator(Long_t size, void *p);
   static void delete_TMVAcLcLQuickMVAProbEstimator(void *p);
   static void deleteArray_TMVAcLcLQuickMVAProbEstimator(void *p);
   static void destruct_TMVAcLcLQuickMVAProbEstimator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::QuickMVAProbEstimator*)
   {
      ::TMVA::QuickMVAProbEstimator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::QuickMVAProbEstimator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::QuickMVAProbEstimator", ::TMVA::QuickMVAProbEstimator::Class_Version(), "TMVA/QuickMVAProbEstimator.h", 12,
                  typeid(::TMVA::QuickMVAProbEstimator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::QuickMVAProbEstimator::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::QuickMVAProbEstimator) );
      instance.SetNew(&new_TMVAcLcLQuickMVAProbEstimator);
      instance.SetNewArray(&newArray_TMVAcLcLQuickMVAProbEstimator);
      instance.SetDelete(&delete_TMVAcLcLQuickMVAProbEstimator);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLQuickMVAProbEstimator);
      instance.SetDestructor(&destruct_TMVAcLcLQuickMVAProbEstimator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::QuickMVAProbEstimator*)
   {
      return GenerateInitInstanceLocal((::TMVA::QuickMVAProbEstimator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::QuickMVAProbEstimator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Config*)
   {
      ::TMVA::Config *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Config >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Config", ::TMVA::Config::Class_Version(), "TMVA/Config.h", 49,
                  typeid(::TMVA::Config), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Config::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Config) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Config*)
   {
      return GenerateInitInstanceLocal((::TMVA::Config*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Config*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLConfigcLcLVariablePlotting_Dictionary();
   static void TMVAcLcLConfigcLcLVariablePlotting_TClassManip(TClass*);
   static void *new_TMVAcLcLConfigcLcLVariablePlotting(void *p = 0);
   static void *newArray_TMVAcLcLConfigcLcLVariablePlotting(Long_t size, void *p);
   static void delete_TMVAcLcLConfigcLcLVariablePlotting(void *p);
   static void deleteArray_TMVAcLcLConfigcLcLVariablePlotting(void *p);
   static void destruct_TMVAcLcLConfigcLcLVariablePlotting(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Config::VariablePlotting*)
   {
      ::TMVA::Config::VariablePlotting *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Config::VariablePlotting));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Config::VariablePlotting", "TMVA/Config.h", 77,
                  typeid(::TMVA::Config::VariablePlotting), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLConfigcLcLVariablePlotting_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Config::VariablePlotting) );
      instance.SetNew(&new_TMVAcLcLConfigcLcLVariablePlotting);
      instance.SetNewArray(&newArray_TMVAcLcLConfigcLcLVariablePlotting);
      instance.SetDelete(&delete_TMVAcLcLConfigcLcLVariablePlotting);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLConfigcLcLVariablePlotting);
      instance.SetDestructor(&destruct_TMVAcLcLConfigcLcLVariablePlotting);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Config::VariablePlotting*)
   {
      return GenerateInitInstanceLocal((::TMVA::Config::VariablePlotting*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Config::VariablePlotting*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLConfigcLcLVariablePlotting_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::Config::VariablePlotting*)0x0)->GetClass();
      TMVAcLcLConfigcLcLVariablePlotting_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLConfigcLcLVariablePlotting_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLConfigcLcLIONames_Dictionary();
   static void TMVAcLcLConfigcLcLIONames_TClassManip(TClass*);
   static void *new_TMVAcLcLConfigcLcLIONames(void *p = 0);
   static void *newArray_TMVAcLcLConfigcLcLIONames(Long_t size, void *p);
   static void delete_TMVAcLcLConfigcLcLIONames(void *p);
   static void deleteArray_TMVAcLcLConfigcLcLIONames(void *p);
   static void destruct_TMVAcLcLConfigcLcLIONames(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Config::IONames*)
   {
      ::TMVA::Config::IONames *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Config::IONames));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Config::IONames", "TMVA/Config.h", 92,
                  typeid(::TMVA::Config::IONames), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLConfigcLcLIONames_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Config::IONames) );
      instance.SetNew(&new_TMVAcLcLConfigcLcLIONames);
      instance.SetNewArray(&newArray_TMVAcLcLConfigcLcLIONames);
      instance.SetDelete(&delete_TMVAcLcLConfigcLcLIONames);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLConfigcLcLIONames);
      instance.SetDestructor(&destruct_TMVAcLcLConfigcLcLIONames);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Config::IONames*)
   {
      return GenerateInitInstanceLocal((::TMVA::Config::IONames*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Config::IONames*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLConfigcLcLIONames_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::Config::IONames*)0x0)->GetClass();
      TMVAcLcLConfigcLcLIONames_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLConfigcLcLIONames_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLLogInterval(void *p);
   static void deleteArray_TMVAcLcLLogInterval(void *p);
   static void destruct_TMVAcLcLLogInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::LogInterval*)
   {
      ::TMVA::LogInterval *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::LogInterval >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::LogInterval", ::TMVA::LogInterval::Class_Version(), "TMVA/LogInterval.h", 83,
                  typeid(::TMVA::LogInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::LogInterval::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::LogInterval) );
      instance.SetDelete(&delete_TMVAcLcLLogInterval);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLLogInterval);
      instance.SetDestructor(&destruct_TMVAcLcLLogInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::LogInterval*)
   {
      return GenerateInitInstanceLocal((::TMVA::LogInterval*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::LogInterval*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLFitterBase(void *p);
   static void deleteArray_TMVAcLcLFitterBase(void *p);
   static void destruct_TMVAcLcLFitterBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::FitterBase*)
   {
      ::TMVA::FitterBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::FitterBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::FitterBase", ::TMVA::FitterBase::Class_Version(), "TMVA/FitterBase.h", 51,
                  typeid(::TMVA::FitterBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::FitterBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::FitterBase) );
      instance.SetDelete(&delete_TMVAcLcLFitterBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLFitterBase);
      instance.SetDestructor(&destruct_TMVAcLcLFitterBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::FitterBase*)
   {
      return GenerateInitInstanceLocal((::TMVA::FitterBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::FitterBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMCFitter(void *p);
   static void deleteArray_TMVAcLcLMCFitter(void *p);
   static void destruct_TMVAcLcLMCFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MCFitter*)
   {
      ::TMVA::MCFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MCFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MCFitter", ::TMVA::MCFitter::Class_Version(), "TMVA/MCFitter.h", 43,
                  typeid(::TMVA::MCFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MCFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MCFitter) );
      instance.SetDelete(&delete_TMVAcLcLMCFitter);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMCFitter);
      instance.SetDestructor(&destruct_TMVAcLcLMCFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MCFitter*)
   {
      return GenerateInitInstanceLocal((::TMVA::MCFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MCFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLGeneticFitter(void *p);
   static void deleteArray_TMVAcLcLGeneticFitter(void *p);
   static void destruct_TMVAcLcLGeneticFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::GeneticFitter*)
   {
      ::TMVA::GeneticFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::GeneticFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::GeneticFitter", ::TMVA::GeneticFitter::Class_Version(), "TMVA/GeneticFitter.h", 43,
                  typeid(::TMVA::GeneticFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::GeneticFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::GeneticFitter) );
      instance.SetDelete(&delete_TMVAcLcLGeneticFitter);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLGeneticFitter);
      instance.SetDestructor(&destruct_TMVAcLcLGeneticFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::GeneticFitter*)
   {
      return GenerateInitInstanceLocal((::TMVA::GeneticFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::GeneticFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLSimulatedAnnealingFitter(void *p);
   static void deleteArray_TMVAcLcLSimulatedAnnealingFitter(void *p);
   static void destruct_TMVAcLcLSimulatedAnnealingFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::SimulatedAnnealingFitter*)
   {
      ::TMVA::SimulatedAnnealingFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::SimulatedAnnealingFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::SimulatedAnnealingFitter", ::TMVA::SimulatedAnnealingFitter::Class_Version(), "TMVA/SimulatedAnnealingFitter.h", 47,
                  typeid(::TMVA::SimulatedAnnealingFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::SimulatedAnnealingFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::SimulatedAnnealingFitter) );
      instance.SetDelete(&delete_TMVAcLcLSimulatedAnnealingFitter);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLSimulatedAnnealingFitter);
      instance.SetDestructor(&destruct_TMVAcLcLSimulatedAnnealingFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::SimulatedAnnealingFitter*)
   {
      return GenerateInitInstanceLocal((::TMVA::SimulatedAnnealingFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealingFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMinuitFitter(void *p);
   static void deleteArray_TMVAcLcLMinuitFitter(void *p);
   static void destruct_TMVAcLcLMinuitFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MinuitFitter*)
   {
      ::TMVA::MinuitFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MinuitFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MinuitFitter", ::TMVA::MinuitFitter::Class_Version(), "TMVA/MinuitFitter.h", 47,
                  typeid(::TMVA::MinuitFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MinuitFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MinuitFitter) );
      instance.SetDelete(&delete_TMVAcLcLMinuitFitter);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMinuitFitter);
      instance.SetDestructor(&destruct_TMVAcLcLMinuitFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MinuitFitter*)
   {
      return GenerateInitInstanceLocal((::TMVA::MinuitFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MinuitFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMinuitWrapper(void *p);
   static void deleteArray_TMVAcLcLMinuitWrapper(void *p);
   static void destruct_TMVAcLcLMinuitWrapper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MinuitWrapper*)
   {
      ::TMVA::MinuitWrapper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MinuitWrapper >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MinuitWrapper", ::TMVA::MinuitWrapper::Class_Version(), "TMVA/MinuitWrapper.h", 45,
                  typeid(::TMVA::MinuitWrapper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MinuitWrapper::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MinuitWrapper) );
      instance.SetDelete(&delete_TMVAcLcLMinuitWrapper);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMinuitWrapper);
      instance.SetDestructor(&destruct_TMVAcLcLMinuitWrapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MinuitWrapper*)
   {
      return GenerateInitInstanceLocal((::TMVA::MinuitWrapper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MinuitWrapper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLBDTEventWrapper_Dictionary();
   static void TMVAcLcLBDTEventWrapper_TClassManip(TClass*);
   static void delete_TMVAcLcLBDTEventWrapper(void *p);
   static void deleteArray_TMVAcLcLBDTEventWrapper(void *p);
   static void destruct_TMVAcLcLBDTEventWrapper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::BDTEventWrapper*)
   {
      ::TMVA::BDTEventWrapper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::BDTEventWrapper));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::BDTEventWrapper", "TMVA/BDTEventWrapper.h", 30,
                  typeid(::TMVA::BDTEventWrapper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLBDTEventWrapper_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::BDTEventWrapper) );
      instance.SetDelete(&delete_TMVAcLcLBDTEventWrapper);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLBDTEventWrapper);
      instance.SetDestructor(&destruct_TMVAcLcLBDTEventWrapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::BDTEventWrapper*)
   {
      return GenerateInitInstanceLocal((::TMVA::BDTEventWrapper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::BDTEventWrapper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLBDTEventWrapper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::BDTEventWrapper*)0x0)->GetClass();
      TMVAcLcLBDTEventWrapper_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLBDTEventWrapper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLCCTreeWrapper_Dictionary();
   static void TMVAcLcLCCTreeWrapper_TClassManip(TClass*);
   static void delete_TMVAcLcLCCTreeWrapper(void *p);
   static void deleteArray_TMVAcLcLCCTreeWrapper(void *p);
   static void destruct_TMVAcLcLCCTreeWrapper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::CCTreeWrapper*)
   {
      ::TMVA::CCTreeWrapper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::CCTreeWrapper));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::CCTreeWrapper", "TMVA/CCTreeWrapper.h", 36,
                  typeid(::TMVA::CCTreeWrapper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLCCTreeWrapper_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::CCTreeWrapper) );
      instance.SetDelete(&delete_TMVAcLcLCCTreeWrapper);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLCCTreeWrapper);
      instance.SetDestructor(&destruct_TMVAcLcLCCTreeWrapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::CCTreeWrapper*)
   {
      return GenerateInitInstanceLocal((::TMVA::CCTreeWrapper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::CCTreeWrapper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLCCTreeWrapper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::CCTreeWrapper*)0x0)->GetClass();
      TMVAcLcLCCTreeWrapper_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLCCTreeWrapper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLCCPruner_Dictionary();
   static void TMVAcLcLCCPruner_TClassManip(TClass*);
   static void delete_TMVAcLcLCCPruner(void *p);
   static void deleteArray_TMVAcLcLCCPruner(void *p);
   static void destruct_TMVAcLcLCCPruner(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::CCPruner*)
   {
      ::TMVA::CCPruner *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::CCPruner));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::CCPruner", "TMVA/CCPruner.h", 61,
                  typeid(::TMVA::CCPruner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLCCPruner_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::CCPruner) );
      instance.SetDelete(&delete_TMVAcLcLCCPruner);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLCCPruner);
      instance.SetDestructor(&destruct_TMVAcLcLCCPruner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::CCPruner*)
   {
      return GenerateInitInstanceLocal((::TMVA::CCPruner*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::CCPruner*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLCCPruner_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::CCPruner*)0x0)->GetClass();
      TMVAcLcLCCPruner_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLCCPruner_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLCostComplexityPruneTool_Dictionary();
   static void TMVAcLcLCostComplexityPruneTool_TClassManip(TClass*);
   static void *new_TMVAcLcLCostComplexityPruneTool(void *p = 0);
   static void *newArray_TMVAcLcLCostComplexityPruneTool(Long_t size, void *p);
   static void delete_TMVAcLcLCostComplexityPruneTool(void *p);
   static void deleteArray_TMVAcLcLCostComplexityPruneTool(void *p);
   static void destruct_TMVAcLcLCostComplexityPruneTool(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::CostComplexityPruneTool*)
   {
      ::TMVA::CostComplexityPruneTool *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::CostComplexityPruneTool));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::CostComplexityPruneTool", "TMVA/CostComplexityPruneTool.h", 61,
                  typeid(::TMVA::CostComplexityPruneTool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLCostComplexityPruneTool_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::CostComplexityPruneTool) );
      instance.SetNew(&new_TMVAcLcLCostComplexityPruneTool);
      instance.SetNewArray(&newArray_TMVAcLcLCostComplexityPruneTool);
      instance.SetDelete(&delete_TMVAcLcLCostComplexityPruneTool);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLCostComplexityPruneTool);
      instance.SetDestructor(&destruct_TMVAcLcLCostComplexityPruneTool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::CostComplexityPruneTool*)
   {
      return GenerateInitInstanceLocal((::TMVA::CostComplexityPruneTool*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::CostComplexityPruneTool*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLCostComplexityPruneTool_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::CostComplexityPruneTool*)0x0)->GetClass();
      TMVAcLcLCostComplexityPruneTool_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLCostComplexityPruneTool_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLSVEvent(void *p = 0);
   static void *newArray_TMVAcLcLSVEvent(Long_t size, void *p);
   static void delete_TMVAcLcLSVEvent(void *p);
   static void deleteArray_TMVAcLcLSVEvent(void *p);
   static void destruct_TMVAcLcLSVEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::SVEvent*)
   {
      ::TMVA::SVEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::SVEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::SVEvent", ::TMVA::SVEvent::Class_Version(), "TMVA/SVEvent.h", 40,
                  typeid(::TMVA::SVEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::SVEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::SVEvent) );
      instance.SetNew(&new_TMVAcLcLSVEvent);
      instance.SetNewArray(&newArray_TMVAcLcLSVEvent);
      instance.SetDelete(&delete_TMVAcLcLSVEvent);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLSVEvent);
      instance.SetDestructor(&destruct_TMVAcLcLSVEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::SVEvent*)
   {
      return GenerateInitInstanceLocal((::TMVA::SVEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::SVEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLOptimizeConfigParameters(void *p);
   static void deleteArray_TMVAcLcLOptimizeConfigParameters(void *p);
   static void destruct_TMVAcLcLOptimizeConfigParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::OptimizeConfigParameters*)
   {
      ::TMVA::OptimizeConfigParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::OptimizeConfigParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::OptimizeConfigParameters", ::TMVA::OptimizeConfigParameters::Class_Version(), "TMVA/OptimizeConfigParameters.h", 47,
                  typeid(::TMVA::OptimizeConfigParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::OptimizeConfigParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::OptimizeConfigParameters) );
      instance.SetDelete(&delete_TMVAcLcLOptimizeConfigParameters);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLOptimizeConfigParameters);
      instance.SetDestructor(&destruct_TMVAcLcLOptimizeConfigParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::OptimizeConfigParameters*)
   {
      return GenerateInitInstanceLocal((::TMVA::OptimizeConfigParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::OptimizeConfigParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTActivationChooser(void *p = 0);
   static void *newArray_TMVAcLcLTActivationChooser(Long_t size, void *p);
   static void delete_TMVAcLcLTActivationChooser(void *p);
   static void deleteArray_TMVAcLcLTActivationChooser(void *p);
   static void destruct_TMVAcLcLTActivationChooser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TActivationChooser*)
   {
      ::TMVA::TActivationChooser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TActivationChooser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TActivationChooser", ::TMVA::TActivationChooser::Class_Version(), "TMVA/TActivationChooser.h", 44,
                  typeid(::TMVA::TActivationChooser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TActivationChooser::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TActivationChooser) );
      instance.SetNew(&new_TMVAcLcLTActivationChooser);
      instance.SetNewArray(&newArray_TMVAcLcLTActivationChooser);
      instance.SetDelete(&delete_TMVAcLcLTActivationChooser);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTActivationChooser);
      instance.SetDestructor(&destruct_TMVAcLcLTActivationChooser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TActivationChooser*)
   {
      return GenerateInitInstanceLocal((::TMVA::TActivationChooser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TActivationChooser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTActivationSigmoid(void *p = 0);
   static void *newArray_TMVAcLcLTActivationSigmoid(Long_t size, void *p);
   static void delete_TMVAcLcLTActivationSigmoid(void *p);
   static void deleteArray_TMVAcLcLTActivationSigmoid(void *p);
   static void destruct_TMVAcLcLTActivationSigmoid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TActivationSigmoid*)
   {
      ::TMVA::TActivationSigmoid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TActivationSigmoid >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TActivationSigmoid", ::TMVA::TActivationSigmoid::Class_Version(), "TMVA/TActivationSigmoid.h", 42,
                  typeid(::TMVA::TActivationSigmoid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TActivationSigmoid::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TActivationSigmoid) );
      instance.SetNew(&new_TMVAcLcLTActivationSigmoid);
      instance.SetNewArray(&newArray_TMVAcLcLTActivationSigmoid);
      instance.SetDelete(&delete_TMVAcLcLTActivationSigmoid);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTActivationSigmoid);
      instance.SetDestructor(&destruct_TMVAcLcLTActivationSigmoid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TActivationSigmoid*)
   {
      return GenerateInitInstanceLocal((::TMVA::TActivationSigmoid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TActivationSigmoid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTActivationIdentity(void *p = 0);
   static void *newArray_TMVAcLcLTActivationIdentity(Long_t size, void *p);
   static void delete_TMVAcLcLTActivationIdentity(void *p);
   static void deleteArray_TMVAcLcLTActivationIdentity(void *p);
   static void destruct_TMVAcLcLTActivationIdentity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TActivationIdentity*)
   {
      ::TMVA::TActivationIdentity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TActivationIdentity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TActivationIdentity", ::TMVA::TActivationIdentity::Class_Version(), "TMVA/TActivationIdentity.h", 42,
                  typeid(::TMVA::TActivationIdentity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TActivationIdentity::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TActivationIdentity) );
      instance.SetNew(&new_TMVAcLcLTActivationIdentity);
      instance.SetNewArray(&newArray_TMVAcLcLTActivationIdentity);
      instance.SetDelete(&delete_TMVAcLcLTActivationIdentity);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTActivationIdentity);
      instance.SetDestructor(&destruct_TMVAcLcLTActivationIdentity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TActivationIdentity*)
   {
      return GenerateInitInstanceLocal((::TMVA::TActivationIdentity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TActivationIdentity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTActivationTanh(void *p = 0);
   static void *newArray_TMVAcLcLTActivationTanh(Long_t size, void *p);
   static void delete_TMVAcLcLTActivationTanh(void *p);
   static void deleteArray_TMVAcLcLTActivationTanh(void *p);
   static void destruct_TMVAcLcLTActivationTanh(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TActivationTanh*)
   {
      ::TMVA::TActivationTanh *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TActivationTanh >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TActivationTanh", ::TMVA::TActivationTanh::Class_Version(), "TMVA/TActivationTanh.h", 42,
                  typeid(::TMVA::TActivationTanh), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TActivationTanh::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TActivationTanh) );
      instance.SetNew(&new_TMVAcLcLTActivationTanh);
      instance.SetNewArray(&newArray_TMVAcLcLTActivationTanh);
      instance.SetDelete(&delete_TMVAcLcLTActivationTanh);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTActivationTanh);
      instance.SetDestructor(&destruct_TMVAcLcLTActivationTanh);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TActivationTanh*)
   {
      return GenerateInitInstanceLocal((::TMVA::TActivationTanh*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TActivationTanh*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTActivationRadial(void *p = 0);
   static void *newArray_TMVAcLcLTActivationRadial(Long_t size, void *p);
   static void delete_TMVAcLcLTActivationRadial(void *p);
   static void deleteArray_TMVAcLcLTActivationRadial(void *p);
   static void destruct_TMVAcLcLTActivationRadial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TActivationRadial*)
   {
      ::TMVA::TActivationRadial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TActivationRadial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TActivationRadial", ::TMVA::TActivationRadial::Class_Version(), "TMVA/TActivationRadial.h", 42,
                  typeid(::TMVA::TActivationRadial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TActivationRadial::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TActivationRadial) );
      instance.SetNew(&new_TMVAcLcLTActivationRadial);
      instance.SetNewArray(&newArray_TMVAcLcLTActivationRadial);
      instance.SetDelete(&delete_TMVAcLcLTActivationRadial);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTActivationRadial);
      instance.SetDestructor(&destruct_TMVAcLcLTActivationRadial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TActivationRadial*)
   {
      return GenerateInitInstanceLocal((::TMVA::TActivationRadial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TActivationRadial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTActivationReLU(void *p = 0);
   static void *newArray_TMVAcLcLTActivationReLU(Long_t size, void *p);
   static void delete_TMVAcLcLTActivationReLU(void *p);
   static void deleteArray_TMVAcLcLTActivationReLU(void *p);
   static void destruct_TMVAcLcLTActivationReLU(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TActivationReLU*)
   {
      ::TMVA::TActivationReLU *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TActivationReLU >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TActivationReLU", ::TMVA::TActivationReLU::Class_Version(), "TMVA/TActivationReLU.h", 42,
                  typeid(::TMVA::TActivationReLU), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TActivationReLU::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TActivationReLU) );
      instance.SetNew(&new_TMVAcLcLTActivationReLU);
      instance.SetNewArray(&newArray_TMVAcLcLTActivationReLU);
      instance.SetDelete(&delete_TMVAcLcLTActivationReLU);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTActivationReLU);
      instance.SetDestructor(&destruct_TMVAcLcLTActivationReLU);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TActivationReLU*)
   {
      return GenerateInitInstanceLocal((::TMVA::TActivationReLU*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TActivationReLU*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTNeuronInputSum(void *p = 0);
   static void *newArray_TMVAcLcLTNeuronInputSum(Long_t size, void *p);
   static void delete_TMVAcLcLTNeuronInputSum(void *p);
   static void deleteArray_TMVAcLcLTNeuronInputSum(void *p);
   static void destruct_TMVAcLcLTNeuronInputSum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TNeuronInputSum*)
   {
      ::TMVA::TNeuronInputSum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TNeuronInputSum >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TNeuronInputSum", ::TMVA::TNeuronInputSum::Class_Version(), "TMVA/TNeuronInputSum.h", 44,
                  typeid(::TMVA::TNeuronInputSum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TNeuronInputSum::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TNeuronInputSum) );
      instance.SetNew(&new_TMVAcLcLTNeuronInputSum);
      instance.SetNewArray(&newArray_TMVAcLcLTNeuronInputSum);
      instance.SetDelete(&delete_TMVAcLcLTNeuronInputSum);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTNeuronInputSum);
      instance.SetDestructor(&destruct_TMVAcLcLTNeuronInputSum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TNeuronInputSum*)
   {
      return GenerateInitInstanceLocal((::TMVA::TNeuronInputSum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSum*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTNeuronInputSqSum(void *p = 0);
   static void *newArray_TMVAcLcLTNeuronInputSqSum(Long_t size, void *p);
   static void delete_TMVAcLcLTNeuronInputSqSum(void *p);
   static void deleteArray_TMVAcLcLTNeuronInputSqSum(void *p);
   static void destruct_TMVAcLcLTNeuronInputSqSum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TNeuronInputSqSum*)
   {
      ::TMVA::TNeuronInputSqSum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TNeuronInputSqSum >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TNeuronInputSqSum", ::TMVA::TNeuronInputSqSum::Class_Version(), "TMVA/TNeuronInputSqSum.h", 46,
                  typeid(::TMVA::TNeuronInputSqSum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TNeuronInputSqSum::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TNeuronInputSqSum) );
      instance.SetNew(&new_TMVAcLcLTNeuronInputSqSum);
      instance.SetNewArray(&newArray_TMVAcLcLTNeuronInputSqSum);
      instance.SetDelete(&delete_TMVAcLcLTNeuronInputSqSum);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTNeuronInputSqSum);
      instance.SetDestructor(&destruct_TMVAcLcLTNeuronInputSqSum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TNeuronInputSqSum*)
   {
      return GenerateInitInstanceLocal((::TMVA::TNeuronInputSqSum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSqSum*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTNeuronInputAbs(void *p = 0);
   static void *newArray_TMVAcLcLTNeuronInputAbs(Long_t size, void *p);
   static void delete_TMVAcLcLTNeuronInputAbs(void *p);
   static void deleteArray_TMVAcLcLTNeuronInputAbs(void *p);
   static void destruct_TMVAcLcLTNeuronInputAbs(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TNeuronInputAbs*)
   {
      ::TMVA::TNeuronInputAbs *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TNeuronInputAbs >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TNeuronInputAbs", ::TMVA::TNeuronInputAbs::Class_Version(), "TMVA/TNeuronInputAbs.h", 60,
                  typeid(::TMVA::TNeuronInputAbs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TNeuronInputAbs::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TNeuronInputAbs) );
      instance.SetNew(&new_TMVAcLcLTNeuronInputAbs);
      instance.SetNewArray(&newArray_TMVAcLcLTNeuronInputAbs);
      instance.SetDelete(&delete_TMVAcLcLTNeuronInputAbs);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTNeuronInputAbs);
      instance.SetDestructor(&destruct_TMVAcLcLTNeuronInputAbs);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TNeuronInputAbs*)
   {
      return GenerateInitInstanceLocal((::TMVA::TNeuronInputAbs*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TNeuronInputAbs*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLTNeuronInputChooser(void *p = 0);
   static void *newArray_TMVAcLcLTNeuronInputChooser(Long_t size, void *p);
   static void delete_TMVAcLcLTNeuronInputChooser(void *p);
   static void deleteArray_TMVAcLcLTNeuronInputChooser(void *p);
   static void destruct_TMVAcLcLTNeuronInputChooser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TNeuronInputChooser*)
   {
      ::TMVA::TNeuronInputChooser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::TNeuronInputChooser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TNeuronInputChooser", ::TMVA::TNeuronInputChooser::Class_Version(), "TMVA/TNeuronInputChooser.h", 66,
                  typeid(::TMVA::TNeuronInputChooser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::TNeuronInputChooser::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TNeuronInputChooser) );
      instance.SetNew(&new_TMVAcLcLTNeuronInputChooser);
      instance.SetNewArray(&newArray_TMVAcLcLTNeuronInputChooser);
      instance.SetDelete(&delete_TMVAcLcLTNeuronInputChooser);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTNeuronInputChooser);
      instance.SetDestructor(&destruct_TMVAcLcLTNeuronInputChooser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TNeuronInputChooser*)
   {
      return GenerateInitInstanceLocal((::TMVA::TNeuronInputChooser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TNeuronInputChooser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLRanking(void *p = 0);
   static void *newArray_TMVAcLcLRanking(Long_t size, void *p);
   static void delete_TMVAcLcLRanking(void *p);
   static void deleteArray_TMVAcLcLRanking(void *p);
   static void destruct_TMVAcLcLRanking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Ranking*)
   {
      ::TMVA::Ranking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Ranking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Ranking", ::TMVA::Ranking::Class_Version(), "TMVA/Ranking.h", 48,
                  typeid(::TMVA::Ranking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Ranking::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Ranking) );
      instance.SetNew(&new_TMVAcLcLRanking);
      instance.SetNewArray(&newArray_TMVAcLcLRanking);
      instance.SetDelete(&delete_TMVAcLcLRanking);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLRanking);
      instance.SetDestructor(&destruct_TMVAcLcLRanking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Ranking*)
   {
      return GenerateInitInstanceLocal((::TMVA::Ranking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Ranking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLRuleFitAPI(void *p);
   static void deleteArray_TMVAcLcLRuleFitAPI(void *p);
   static void destruct_TMVAcLcLRuleFitAPI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::RuleFitAPI*)
   {
      ::TMVA::RuleFitAPI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::RuleFitAPI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::RuleFitAPI", ::TMVA::RuleFitAPI::Class_Version(), "TMVA/RuleFitAPI.h", 50,
                  typeid(::TMVA::RuleFitAPI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::RuleFitAPI::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::RuleFitAPI) );
      instance.SetDelete(&delete_TMVAcLcLRuleFitAPI);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLRuleFitAPI);
      instance.SetDestructor(&destruct_TMVAcLcLRuleFitAPI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::RuleFitAPI*)
   {
      return GenerateInitInstanceLocal((::TMVA::RuleFitAPI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::RuleFitAPI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLVariableIdentityTransform(void *p);
   static void deleteArray_TMVAcLcLVariableIdentityTransform(void *p);
   static void destruct_TMVAcLcLVariableIdentityTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::VariableIdentityTransform*)
   {
      ::TMVA::VariableIdentityTransform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::VariableIdentityTransform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::VariableIdentityTransform", ::TMVA::VariableIdentityTransform::Class_Version(), "TMVA/VariableIdentityTransform.h", 43,
                  typeid(::TMVA::VariableIdentityTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::VariableIdentityTransform::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::VariableIdentityTransform) );
      instance.SetDelete(&delete_TMVAcLcLVariableIdentityTransform);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLVariableIdentityTransform);
      instance.SetDestructor(&destruct_TMVAcLcLVariableIdentityTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::VariableIdentityTransform*)
   {
      return GenerateInitInstanceLocal((::TMVA::VariableIdentityTransform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::VariableIdentityTransform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLVariableDecorrTransform(void *p);
   static void deleteArray_TMVAcLcLVariableDecorrTransform(void *p);
   static void destruct_TMVAcLcLVariableDecorrTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::VariableDecorrTransform*)
   {
      ::TMVA::VariableDecorrTransform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::VariableDecorrTransform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::VariableDecorrTransform", ::TMVA::VariableDecorrTransform::Class_Version(), "TMVA/VariableDecorrTransform.h", 47,
                  typeid(::TMVA::VariableDecorrTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::VariableDecorrTransform::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::VariableDecorrTransform) );
      instance.SetDelete(&delete_TMVAcLcLVariableDecorrTransform);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLVariableDecorrTransform);
      instance.SetDestructor(&destruct_TMVAcLcLVariableDecorrTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::VariableDecorrTransform*)
   {
      return GenerateInitInstanceLocal((::TMVA::VariableDecorrTransform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::VariableDecorrTransform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLVariablePCATransform(void *p);
   static void deleteArray_TMVAcLcLVariablePCATransform(void *p);
   static void destruct_TMVAcLcLVariablePCATransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::VariablePCATransform*)
   {
      ::TMVA::VariablePCATransform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::VariablePCATransform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::VariablePCATransform", ::TMVA::VariablePCATransform::Class_Version(), "TMVA/VariablePCATransform.h", 46,
                  typeid(::TMVA::VariablePCATransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::VariablePCATransform::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::VariablePCATransform) );
      instance.SetDelete(&delete_TMVAcLcLVariablePCATransform);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLVariablePCATransform);
      instance.SetDestructor(&destruct_TMVAcLcLVariablePCATransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::VariablePCATransform*)
   {
      return GenerateInitInstanceLocal((::TMVA::VariablePCATransform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::VariablePCATransform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLVariableGaussTransform(void *p);
   static void deleteArray_TMVAcLcLVariableGaussTransform(void *p);
   static void destruct_TMVAcLcLVariableGaussTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::VariableGaussTransform*)
   {
      ::TMVA::VariableGaussTransform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::VariableGaussTransform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::VariableGaussTransform", ::TMVA::VariableGaussTransform::Class_Version(), "TMVA/VariableGaussTransform.h", 72,
                  typeid(::TMVA::VariableGaussTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::VariableGaussTransform::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::VariableGaussTransform) );
      instance.SetDelete(&delete_TMVAcLcLVariableGaussTransform);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLVariableGaussTransform);
      instance.SetDestructor(&destruct_TMVAcLcLVariableGaussTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::VariableGaussTransform*)
   {
      return GenerateInitInstanceLocal((::TMVA::VariableGaussTransform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::VariableGaussTransform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLVariableNormalizeTransform(void *p);
   static void deleteArray_TMVAcLcLVariableNormalizeTransform(void *p);
   static void destruct_TMVAcLcLVariableNormalizeTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::VariableNormalizeTransform*)
   {
      ::TMVA::VariableNormalizeTransform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::VariableNormalizeTransform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::VariableNormalizeTransform", ::TMVA::VariableNormalizeTransform::Class_Version(), "TMVA/VariableNormalizeTransform.h", 46,
                  typeid(::TMVA::VariableNormalizeTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::VariableNormalizeTransform::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::VariableNormalizeTransform) );
      instance.SetDelete(&delete_TMVAcLcLVariableNormalizeTransform);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLVariableNormalizeTransform);
      instance.SetDestructor(&destruct_TMVAcLcLVariableNormalizeTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::VariableNormalizeTransform*)
   {
      return GenerateInitInstanceLocal((::TMVA::VariableNormalizeTransform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::VariableNormalizeTransform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLVariableRearrangeTransform(void *p);
   static void deleteArray_TMVAcLcLVariableRearrangeTransform(void *p);
   static void destruct_TMVAcLcLVariableRearrangeTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::VariableRearrangeTransform*)
   {
      ::TMVA::VariableRearrangeTransform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::VariableRearrangeTransform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::VariableRearrangeTransform", ::TMVA::VariableRearrangeTransform::Class_Version(), "TMVA/VariableRearrangeTransform.h", 41,
                  typeid(::TMVA::VariableRearrangeTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::VariableRearrangeTransform::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::VariableRearrangeTransform) );
      instance.SetDelete(&delete_TMVAcLcLVariableRearrangeTransform);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLVariableRearrangeTransform);
      instance.SetDestructor(&destruct_TMVAcLcLVariableRearrangeTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::VariableRearrangeTransform*)
   {
      return GenerateInitInstanceLocal((::TMVA::VariableRearrangeTransform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::VariableRearrangeTransform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLROCCalc_Dictionary();
   static void TMVAcLcLROCCalc_TClassManip(TClass*);
   static void delete_TMVAcLcLROCCalc(void *p);
   static void deleteArray_TMVAcLcLROCCalc(void *p);
   static void destruct_TMVAcLcLROCCalc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::ROCCalc*)
   {
      ::TMVA::ROCCalc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::ROCCalc));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::ROCCalc", "TMVA/ROCCalc.h", 26,
                  typeid(::TMVA::ROCCalc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLROCCalc_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::ROCCalc) );
      instance.SetDelete(&delete_TMVAcLcLROCCalc);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLROCCalc);
      instance.SetDestructor(&destruct_TMVAcLcLROCCalc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::ROCCalc*)
   {
      return GenerateInitInstanceLocal((::TMVA::ROCCalc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::ROCCalc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLROCCalc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::ROCCalc*)0x0)->GetClass();
      TMVAcLcLROCCalc_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLROCCalc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLROCCurve_Dictionary();
   static void TMVAcLcLROCCurve_TClassManip(TClass*);
   static void delete_TMVAcLcLROCCurve(void *p);
   static void deleteArray_TMVAcLcLROCCurve(void *p);
   static void destruct_TMVAcLcLROCCurve(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::ROCCurve*)
   {
      ::TMVA::ROCCurve *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::ROCCurve));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::ROCCurve", "TMVA/ROCCurve.h", 47,
                  typeid(::TMVA::ROCCurve), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLROCCurve_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::ROCCurve) );
      instance.SetDelete(&delete_TMVAcLcLROCCurve);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLROCCurve);
      instance.SetDestructor(&destruct_TMVAcLcLROCCurve);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::ROCCurve*)
   {
      return GenerateInitInstanceLocal((::TMVA::ROCCurve*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::ROCCurve*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLROCCurve_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::ROCCurve*)0x0)->GetClass();
      TMVAcLcLROCCurve_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLROCCurve_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLOptionMap(void *p = 0);
   static void *newArray_TMVAcLcLOptionMap(Long_t size, void *p);
   static void delete_TMVAcLcLOptionMap(void *p);
   static void deleteArray_TMVAcLcLOptionMap(void *p);
   static void destruct_TMVAcLcLOptionMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::OptionMap*)
   {
      ::TMVA::OptionMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::OptionMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::OptionMap", ::TMVA::OptionMap::Class_Version(), "TMVA/OptionMap.h", 35,
                  typeid(::TMVA::OptionMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::OptionMap::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::OptionMap) );
      instance.SetNew(&new_TMVAcLcLOptionMap);
      instance.SetNewArray(&newArray_TMVAcLcLOptionMap);
      instance.SetDelete(&delete_TMVAcLcLOptionMap);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLOptionMap);
      instance.SetDestructor(&destruct_TMVAcLcLOptionMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::OptionMap*)
   {
      return GenerateInitInstanceLocal((::TMVA::OptionMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::OptionMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLDataLoader(void *p = 0);
   static void *newArray_TMVAcLcLDataLoader(Long_t size, void *p);
   static void delete_TMVAcLcLDataLoader(void *p);
   static void deleteArray_TMVAcLcLDataLoader(void *p);
   static void destruct_TMVAcLcLDataLoader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::DataLoader*)
   {
      ::TMVA::DataLoader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::DataLoader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::DataLoader", ::TMVA::DataLoader::Class_Version(), "TMVA/DataLoader.h", 57,
                  typeid(::TMVA::DataLoader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::DataLoader::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::DataLoader) );
      instance.SetNew(&new_TMVAcLcLDataLoader);
      instance.SetNewArray(&newArray_TMVAcLcLDataLoader);
      instance.SetDelete(&delete_TMVAcLcLDataLoader);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLDataLoader);
      instance.SetDestructor(&destruct_TMVAcLcLDataLoader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::DataLoader*)
   {
      return GenerateInitInstanceLocal((::TMVA::DataLoader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::DataLoader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLEnvelope(void *p);
   static void deleteArray_TMVAcLcLEnvelope(void *p);
   static void destruct_TMVAcLcLEnvelope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Envelope*)
   {
      ::TMVA::Envelope *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Envelope >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Envelope", ::TMVA::Envelope::Class_Version(), "TMVA/Envelope.h", 35,
                  typeid(::TMVA::Envelope), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Envelope::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Envelope) );
      instance.SetDelete(&delete_TMVAcLcLEnvelope);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLEnvelope);
      instance.SetDestructor(&destruct_TMVAcLcLEnvelope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Envelope*)
   {
      return GenerateInitInstanceLocal((::TMVA::Envelope*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::Envelope*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLVariableImportance(void *p);
   static void deleteArray_TMVAcLcLVariableImportance(void *p);
   static void destruct_TMVAcLcLVariableImportance(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::VariableImportance*)
   {
      ::TMVA::VariableImportance *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::VariableImportance >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::VariableImportance", ::TMVA::VariableImportance::Class_Version(), "TMVA/VariableImportance.h", 45,
                  typeid(::TMVA::VariableImportance), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::VariableImportance::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::VariableImportance) );
      instance.SetDelete(&delete_TMVAcLcLVariableImportance);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLVariableImportance);
      instance.SetDestructor(&destruct_TMVAcLcLVariableImportance);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::VariableImportance*)
   {
      return GenerateInitInstanceLocal((::TMVA::VariableImportance*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::VariableImportance*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLCrossValidation(void *p);
   static void deleteArray_TMVAcLcLCrossValidation(void *p);
   static void destruct_TMVAcLcLCrossValidation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::CrossValidation*)
   {
      ::TMVA::CrossValidation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::CrossValidation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::CrossValidation", ::TMVA::CrossValidation::Class_Version(), "TMVA/CrossValidation.h", 75,
                  typeid(::TMVA::CrossValidation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::CrossValidation::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::CrossValidation) );
      instance.SetDelete(&delete_TMVAcLcLCrossValidation);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLCrossValidation);
      instance.SetDestructor(&destruct_TMVAcLcLCrossValidation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::CrossValidation*)
   {
      return GenerateInitInstanceLocal((::TMVA::CrossValidation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::CrossValidation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLHyperParameterOptimisation(void *p);
   static void deleteArray_TMVAcLcLHyperParameterOptimisation(void *p);
   static void destruct_TMVAcLcLHyperParameterOptimisation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::HyperParameterOptimisation*)
   {
      ::TMVA::HyperParameterOptimisation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::HyperParameterOptimisation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::HyperParameterOptimisation", ::TMVA::HyperParameterOptimisation::Class_Version(), "TMVA/HyperParameterOptimisation.h", 71,
                  typeid(::TMVA::HyperParameterOptimisation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::HyperParameterOptimisation::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::HyperParameterOptimisation) );
      instance.SetDelete(&delete_TMVAcLcLHyperParameterOptimisation);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLHyperParameterOptimisation);
      instance.SetDestructor(&destruct_TMVAcLcLHyperParameterOptimisation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::HyperParameterOptimisation*)
   {
      return GenerateInitInstanceLocal((::TMVA::HyperParameterOptimisation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::HyperParameterOptimisation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLResultsClassification(void *p);
   static void deleteArray_TMVAcLcLResultsClassification(void *p);
   static void destruct_TMVAcLcLResultsClassification(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::ResultsClassification*)
   {
      ::TMVA::ResultsClassification *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::ResultsClassification >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::ResultsClassification", ::TMVA::ResultsClassification::Class_Version(), "TMVA/ResultsClassification.h", 48,
                  typeid(::TMVA::ResultsClassification), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::ResultsClassification::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::ResultsClassification) );
      instance.SetDelete(&delete_TMVAcLcLResultsClassification);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLResultsClassification);
      instance.SetDestructor(&destruct_TMVAcLcLResultsClassification);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::ResultsClassification*)
   {
      return GenerateInitInstanceLocal((::TMVA::ResultsClassification*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::ResultsClassification*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLResultsRegression(void *p);
   static void deleteArray_TMVAcLcLResultsRegression(void *p);
   static void destruct_TMVAcLcLResultsRegression(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::ResultsRegression*)
   {
      ::TMVA::ResultsRegression *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::ResultsRegression >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::ResultsRegression", ::TMVA::ResultsRegression::Class_Version(), "TMVA/ResultsRegression.h", 52,
                  typeid(::TMVA::ResultsRegression), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::ResultsRegression::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::ResultsRegression) );
      instance.SetDelete(&delete_TMVAcLcLResultsRegression);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLResultsRegression);
      instance.SetDestructor(&destruct_TMVAcLcLResultsRegression);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::ResultsRegression*)
   {
      return GenerateInitInstanceLocal((::TMVA::ResultsRegression*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::ResultsRegression*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLResultsMulticlass(void *p);
   static void deleteArray_TMVAcLcLResultsMulticlass(void *p);
   static void destruct_TMVAcLcLResultsMulticlass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::ResultsMulticlass*)
   {
      ::TMVA::ResultsMulticlass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::ResultsMulticlass >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::ResultsMulticlass", ::TMVA::ResultsMulticlass::Class_Version(), "TMVA/ResultsMulticlass.h", 55,
                  typeid(::TMVA::ResultsMulticlass), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::ResultsMulticlass::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::ResultsMulticlass) );
      instance.SetDelete(&delete_TMVAcLcLResultsMulticlass);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLResultsMulticlass);
      instance.SetDestructor(&destruct_TMVAcLcLResultsMulticlass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::ResultsMulticlass*)
   {
      return GenerateInitInstanceLocal((::TMVA::ResultsMulticlass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::ResultsMulticlass*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLDataSetFactory(void *p = 0);
   static void *newArray_TMVAcLcLDataSetFactory(Long_t size, void *p);
   static void delete_TMVAcLcLDataSetFactory(void *p);
   static void deleteArray_TMVAcLcLDataSetFactory(void *p);
   static void destruct_TMVAcLcLDataSetFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::DataSetFactory*)
   {
      ::TMVA::DataSetFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::DataSetFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::DataSetFactory", ::TMVA::DataSetFactory::Class_Version(), "TMVA/DataSetFactory.h", 188,
                  typeid(::TMVA::DataSetFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::DataSetFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::DataSetFactory) );
      instance.SetNew(&new_TMVAcLcLDataSetFactory);
      instance.SetNewArray(&newArray_TMVAcLcLDataSetFactory);
      instance.SetDelete(&delete_TMVAcLcLDataSetFactory);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLDataSetFactory);
      instance.SetDestructor(&destruct_TMVAcLcLDataSetFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::DataSetFactory*)
   {
      return GenerateInitInstanceLocal((::TMVA::DataSetFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::DataSetFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MsgLogger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MsgLogger::Class_Name()
{
   return "TMVA::MsgLogger";
}

//______________________________________________________________________________
const char *MsgLogger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MsgLogger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MsgLogger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MsgLogger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MsgLogger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MsgLogger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MsgLogger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MsgLogger*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr OptionBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *OptionBase::Class_Name()
{
   return "TMVA::OptionBase";
}

//______________________________________________________________________________
const char *OptionBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptionBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int OptionBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptionBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OptionBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptionBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OptionBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptionBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Configurable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Configurable::Class_Name()
{
   return "TMVA::Configurable";
}

//______________________________________________________________________________
const char *Configurable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Configurable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Configurable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Configurable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Configurable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Configurable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Configurable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Configurable*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr VariableInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VariableInfo::Class_Name()
{
   return "TMVA::VariableInfo";
}

//______________________________________________________________________________
const char *VariableInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VariableInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VariableInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VariableInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr DataSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DataSet::Class_Name()
{
   return "TMVA::DataSet";
}

//______________________________________________________________________________
const char *DataSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DataSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DataSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DataSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSet*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Factory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Factory::Class_Name()
{
   return "TMVA::Factory";
}

//______________________________________________________________________________
const char *Factory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Factory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Factory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Factory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Factory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Factory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Factory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Factory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr IMethod::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IMethod::Class_Name()
{
   return "TMVA::IMethod";
}

//______________________________________________________________________________
const char *IMethod::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::IMethod*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IMethod::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::IMethod*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IMethod::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::IMethod*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IMethod::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::IMethod*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Event::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Event::Class_Name()
{
   return "TMVA::Event";
}

//______________________________________________________________________________
const char *Event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Event*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Event*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Event*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Event*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr ClassInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ClassInfo::Class_Name()
{
   return "TMVA::ClassInfo";
}

//______________________________________________________________________________
const char *ClassInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ClassInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ClassInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ClassInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ClassInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ClassInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ClassInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ClassInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr DataSetInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DataSetInfo::Class_Name()
{
   return "TMVA::DataSetInfo";
}

//______________________________________________________________________________
const char *DataSetInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DataSetInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DataSetInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DataSetInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Results::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Results::Class_Name()
{
   return "TMVA::Results";
}

//______________________________________________________________________________
const char *Results::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Results*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Results::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Results*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Results::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Results*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Results::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Results*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodBase::Class_Name()
{
   return "TMVA::MethodBase";
}

//______________________________________________________________________________
const char *MethodBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodCompositeBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodCompositeBase::Class_Name()
{
   return "TMVA::MethodCompositeBase";
}

//______________________________________________________________________________
const char *MethodCompositeBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCompositeBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodCompositeBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCompositeBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodCompositeBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCompositeBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodCompositeBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCompositeBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TActivation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TActivation::Class_Name()
{
   return "TMVA::TActivation";
}

//______________________________________________________________________________
const char *TActivation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TActivation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActivation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActivation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivation*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TSynapse::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSynapse::Class_Name()
{
   return "TMVA::TSynapse";
}

//______________________________________________________________________________
const char *TSynapse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSynapse*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSynapse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSynapse*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSynapse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSynapse*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSynapse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSynapse*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TNeuron::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNeuron::Class_Name()
{
   return "TMVA::TNeuron";
}

//______________________________________________________________________________
const char *TNeuron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuron*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNeuron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuron*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNeuron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuron*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNeuron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuron*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TNeuronInput::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNeuronInput::Class_Name()
{
   return "TMVA::TNeuronInput";
}

//______________________________________________________________________________
const char *TNeuronInput::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInput*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNeuronInput::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInput*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNeuronInput::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInput*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNeuronInput::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInput*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodANNBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodANNBase::Class_Name()
{
   return "TMVA::MethodANNBase";
}

//______________________________________________________________________________
const char *MethodANNBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodANNBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodANNBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodANNBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodANNBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodANNBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodANNBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodANNBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodTMlpANN::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodTMlpANN::Class_Name()
{
   return "TMVA::MethodTMlpANN";
}

//______________________________________________________________________________
const char *MethodTMlpANN::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodTMlpANN*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodTMlpANN::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodTMlpANN*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodTMlpANN::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodTMlpANN*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodTMlpANN::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodTMlpANN*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Node::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Node::Class_Name()
{
   return "TMVA::Node";
}

//______________________________________________________________________________
const char *Node::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Node*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Node::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Node*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Node::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Node*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Node::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Node*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr DecisionTreeNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DecisionTreeNode::Class_Name()
{
   return "TMVA::DecisionTreeNode";
}

//______________________________________________________________________________
const char *DecisionTreeNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DecisionTreeNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DecisionTreeNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DecisionTreeNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DecisionTreeNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DecisionTreeNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DecisionTreeNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DecisionTreeNode*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr BinaryTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BinaryTree::Class_Name()
{
   return "TMVA::BinaryTree";
}

//______________________________________________________________________________
const char *BinaryTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinaryTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BinaryTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinaryTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BinaryTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinaryTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BinaryTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinaryTree*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr BinarySearchTreeNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BinarySearchTreeNode::Class_Name()
{
   return "TMVA::BinarySearchTreeNode";
}

//______________________________________________________________________________
const char *BinarySearchTreeNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinarySearchTreeNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BinarySearchTreeNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinarySearchTreeNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BinarySearchTreeNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinarySearchTreeNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BinarySearchTreeNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinarySearchTreeNode*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr BinarySearchTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BinarySearchTree::Class_Name()
{
   return "TMVA::BinarySearchTree";
}

//______________________________________________________________________________
const char *BinarySearchTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinarySearchTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BinarySearchTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinarySearchTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BinarySearchTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinarySearchTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BinarySearchTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::BinarySearchTree*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr SeparationBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SeparationBase::Class_Name()
{
   return "TMVA::SeparationBase";
}

//______________________________________________________________________________
const char *SeparationBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SeparationBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SeparationBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SeparationBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SeparationBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SeparationBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SeparationBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SeparationBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr RegressionVariance::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RegressionVariance::Class_Name()
{
   return "TMVA::RegressionVariance";
}

//______________________________________________________________________________
const char *RegressionVariance::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RegressionVariance*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RegressionVariance::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RegressionVariance*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RegressionVariance::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RegressionVariance*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RegressionVariance::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RegressionVariance*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr DecisionTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DecisionTree::Class_Name()
{
   return "TMVA::DecisionTree";
}

//______________________________________________________________________________
const char *DecisionTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DecisionTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DecisionTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DecisionTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DecisionTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DecisionTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DecisionTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DecisionTree*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr RuleFit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RuleFit::Class_Name()
{
   return "TMVA::RuleFit";
}

//______________________________________________________________________________
const char *RuleFit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RuleFit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RuleFit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RuleFit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RuleFit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RuleFit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RuleFit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RuleFit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodRuleFit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodRuleFit::Class_Name()
{
   return "TMVA::MethodRuleFit";
}

//______________________________________________________________________________
const char *MethodRuleFit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodRuleFit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodRuleFit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodRuleFit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodRuleFit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodRuleFit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodRuleFit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodRuleFit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr KDEKernel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KDEKernel::Class_Name()
{
   return "TMVA::KDEKernel";
}

//______________________________________________________________________________
const char *KDEKernel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::KDEKernel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KDEKernel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::KDEKernel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KDEKernel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::KDEKernel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KDEKernel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::KDEKernel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDF::Class_Name()
{
   return "TMVA::PDF";
}

//______________________________________________________________________________
const char *PDF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDF*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr IFitterTarget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IFitterTarget::Class_Name()
{
   return "TMVA::IFitterTarget";
}

//______________________________________________________________________________
const char *IFitterTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::IFitterTarget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IFitterTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::IFitterTarget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IFitterTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::IFitterTarget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IFitterTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::IFitterTarget*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodCuts::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodCuts::Class_Name()
{
   return "TMVA::MethodCuts";
}

//______________________________________________________________________________
const char *MethodCuts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCuts*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodCuts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCuts*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodCuts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCuts*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodCuts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCuts*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodFisher::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodFisher::Class_Name()
{
   return "TMVA::MethodFisher";
}

//______________________________________________________________________________
const char *MethodFisher::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodFisher*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodFisher::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodFisher*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodFisher::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodFisher*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodFisher::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodFisher*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodKNN::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodKNN::Class_Name()
{
   return "TMVA::MethodKNN";
}

//______________________________________________________________________________
const char *MethodKNN::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodKNN*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodKNN::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodKNN*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodKNN::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodKNN*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodKNN::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodKNN*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodCFMlpANN_Utils::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodCFMlpANN_Utils::Class_Name()
{
   return "TMVA::MethodCFMlpANN_Utils";
}

//______________________________________________________________________________
const char *MethodCFMlpANN_Utils::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN_Utils*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodCFMlpANN_Utils::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN_Utils*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodCFMlpANN_Utils::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN_Utils*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodCFMlpANN_Utils::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN_Utils*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodCFMlpANN::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodCFMlpANN::Class_Name()
{
   return "TMVA::MethodCFMlpANN";
}

//______________________________________________________________________________
const char *MethodCFMlpANN::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodCFMlpANN::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodCFMlpANN::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodCFMlpANN::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCFMlpANN*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodLikelihood::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodLikelihood::Class_Name()
{
   return "TMVA::MethodLikelihood";
}

//______________________________________________________________________________
const char *MethodLikelihood::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodLikelihood*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodLikelihood::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodLikelihood*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodLikelihood::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodLikelihood*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodLikelihood::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodLikelihood*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodHMatrix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodHMatrix::Class_Name()
{
   return "TMVA::MethodHMatrix";
}

//______________________________________________________________________________
const char *MethodHMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodHMatrix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodHMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodHMatrix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodHMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodHMatrix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodHMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodHMatrix*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodPDERS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodPDERS::Class_Name()
{
   return "TMVA::MethodPDERS";
}

//______________________________________________________________________________
const char *MethodPDERS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPDERS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodPDERS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPDERS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodPDERS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPDERS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodPDERS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPDERS*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodBDT::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodBDT::Class_Name()
{
   return "TMVA::MethodBDT";
}

//______________________________________________________________________________
const char *MethodBDT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBDT*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodBDT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBDT*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodBDT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBDT*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodBDT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBDT*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodDT::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodDT::Class_Name()
{
   return "TMVA::MethodDT";
}

//______________________________________________________________________________
const char *MethodDT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodDT*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodDT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodDT*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodDT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodDT*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodDT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodDT*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodSVM::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodSVM::Class_Name()
{
   return "TMVA::MethodSVM";
}

//______________________________________________________________________________
const char *MethodSVM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodSVM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodSVM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodSVM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodSVM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodSVM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodSVM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodSVM*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodBayesClassifier::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodBayesClassifier::Class_Name()
{
   return "TMVA::MethodBayesClassifier";
}

//______________________________________________________________________________
const char *MethodBayesClassifier::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBayesClassifier*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodBayesClassifier::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBayesClassifier*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodBayesClassifier::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBayesClassifier*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodBayesClassifier::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBayesClassifier*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodFDA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodFDA::Class_Name()
{
   return "TMVA::MethodFDA";
}

//______________________________________________________________________________
const char *MethodFDA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodFDA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodFDA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodFDA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodFDA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodFDA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodFDA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodFDA*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodMLP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodMLP::Class_Name()
{
   return "TMVA::MethodMLP";
}

//______________________________________________________________________________
const char *MethodMLP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodMLP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodMLP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodMLP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodMLP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodMLP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodMLP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodMLP*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodBoost::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodBoost::Class_Name()
{
   return "TMVA::MethodBoost";
}

//______________________________________________________________________________
const char *MethodBoost::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBoost*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodBoost::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBoost*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodBoost::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBoost*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodBoost::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodBoost*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Timer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Timer::Class_Name()
{
   return "TMVA::Timer";
}

//______________________________________________________________________________
const char *Timer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Timer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Timer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Timer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Timer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Timer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Timer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Timer*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamDensityBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamDensityBase::Class_Name()
{
   return "TMVA::PDEFoamDensityBase";
}

//______________________________________________________________________________
const char *PDEFoamDensityBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDensityBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamDensityBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDensityBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamDensityBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDensityBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamDensityBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDensityBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamVect::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamVect::Class_Name()
{
   return "TMVA::PDEFoamVect";
}

//______________________________________________________________________________
const char *PDEFoamVect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamVect*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamVect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamVect*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamVect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamVect*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamVect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamVect*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamCell::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamCell::Class_Name()
{
   return "TMVA::PDEFoamCell";
}

//______________________________________________________________________________
const char *PDEFoamCell::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamCell*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamCell::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamCell*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamCell::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamCell*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamCell::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamCell*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoam::Class_Name()
{
   return "TMVA::PDEFoam";
}

//______________________________________________________________________________
const char *PDEFoam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoam*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamDiscriminant::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamDiscriminant::Class_Name()
{
   return "TMVA::PDEFoamDiscriminant";
}

//______________________________________________________________________________
const char *PDEFoamDiscriminant::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminant*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamDiscriminant::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminant*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamDiscriminant::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminant*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamDiscriminant::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminant*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamDecisionTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamDecisionTree::Class_Name()
{
   return "TMVA::PDEFoamDecisionTree";
}

//______________________________________________________________________________
const char *PDEFoamDecisionTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamDecisionTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamDecisionTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamDecisionTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTree*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamEvent::Class_Name()
{
   return "TMVA::PDEFoamEvent";
}

//______________________________________________________________________________
const char *PDEFoamEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamEvent*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamTarget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamTarget::Class_Name()
{
   return "TMVA::PDEFoamTarget";
}

//______________________________________________________________________________
const char *PDEFoamTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamTarget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamTarget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamTarget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamTarget*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamMultiTarget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamMultiTarget::Class_Name()
{
   return "TMVA::PDEFoamMultiTarget";
}

//______________________________________________________________________________
const char *PDEFoamMultiTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamMultiTarget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamMultiTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamMultiTarget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamMultiTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamMultiTarget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamMultiTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamMultiTarget*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamTargetDensity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamTargetDensity::Class_Name()
{
   return "TMVA::PDEFoamTargetDensity";
}

//______________________________________________________________________________
const char *PDEFoamTargetDensity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamTargetDensity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamTargetDensity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamTargetDensity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamTargetDensity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamTargetDensity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamTargetDensity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamTargetDensity*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamEventDensity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamEventDensity::Class_Name()
{
   return "TMVA::PDEFoamEventDensity";
}

//______________________________________________________________________________
const char *PDEFoamEventDensity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamEventDensity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamEventDensity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamEventDensity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamEventDensity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamEventDensity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamEventDensity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamEventDensity*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamDiscriminantDensity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamDiscriminantDensity::Class_Name()
{
   return "TMVA::PDEFoamDiscriminantDensity";
}

//______________________________________________________________________________
const char *PDEFoamDiscriminantDensity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminantDensity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamDiscriminantDensity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminantDensity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamDiscriminantDensity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminantDensity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamDiscriminantDensity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDiscriminantDensity*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamDecisionTreeDensity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamDecisionTreeDensity::Class_Name()
{
   return "TMVA::PDEFoamDecisionTreeDensity";
}

//______________________________________________________________________________
const char *PDEFoamDecisionTreeDensity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTreeDensity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamDecisionTreeDensity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTreeDensity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamDecisionTreeDensity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTreeDensity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamDecisionTreeDensity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamDecisionTreeDensity*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamKernelBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamKernelBase::Class_Name()
{
   return "TMVA::PDEFoamKernelBase";
}

//______________________________________________________________________________
const char *PDEFoamKernelBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamKernelBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamKernelBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamKernelBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamKernelTrivial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamKernelTrivial::Class_Name()
{
   return "TMVA::PDEFoamKernelTrivial";
}

//______________________________________________________________________________
const char *PDEFoamKernelTrivial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelTrivial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamKernelTrivial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelTrivial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamKernelTrivial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelTrivial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamKernelTrivial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelTrivial*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamKernelLinN::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamKernelLinN::Class_Name()
{
   return "TMVA::PDEFoamKernelLinN";
}

//______________________________________________________________________________
const char *PDEFoamKernelLinN::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelLinN*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamKernelLinN::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelLinN*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamKernelLinN::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelLinN*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamKernelLinN::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelLinN*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PDEFoamKernelGauss::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDEFoamKernelGauss::Class_Name()
{
   return "TMVA::PDEFoamKernelGauss";
}

//______________________________________________________________________________
const char *PDEFoamKernelGauss::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelGauss*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDEFoamKernelGauss::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelGauss*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDEFoamKernelGauss::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelGauss*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDEFoamKernelGauss::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PDEFoamKernelGauss*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodPDEFoam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodPDEFoam::Class_Name()
{
   return "TMVA::MethodPDEFoam";
}

//______________________________________________________________________________
const char *MethodPDEFoam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPDEFoam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodPDEFoam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPDEFoam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodPDEFoam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPDEFoam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodPDEFoam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPDEFoam*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodLD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodLD::Class_Name()
{
   return "TMVA::MethodLD";
}

//______________________________________________________________________________
const char *MethodLD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodLD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodLD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodLD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodLD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodLD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodLD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodLD*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodCategory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodCategory::Class_Name()
{
   return "TMVA::MethodCategory";
}

//______________________________________________________________________________
const char *MethodCategory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCategory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodCategory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCategory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodCategory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCategory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodCategory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodCategory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr VariableTransformBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VariableTransformBase::Class_Name()
{
   return "TMVA::VariableTransformBase";
}

//______________________________________________________________________________
const char *VariableTransformBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableTransformBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VariableTransformBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableTransformBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VariableTransformBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableTransformBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VariableTransformBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableTransformBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodDNN::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodDNN::Class_Name()
{
   return "TMVA::MethodDNN";
}

//______________________________________________________________________________
const char *MethodDNN::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodDNN*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodDNN::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodDNN*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodDNN::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodDNN*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodDNN::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodDNN*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TSpline2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpline2::Class_Name()
{
   return "TMVA::TSpline2";
}

//______________________________________________________________________________
const char *TSpline2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSpline2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpline2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSpline2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpline2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSpline2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpline2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSpline2*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TSpline1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpline1::Class_Name()
{
   return "TMVA::TSpline1";
}

//______________________________________________________________________________
const char *TSpline1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSpline1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSpline1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSpline1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpline1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSpline1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpline1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TSpline1*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr RootFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RootFinder::Class_Name()
{
   return "TMVA::RootFinder";
}

//______________________________________________________________________________
const char *RootFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RootFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RootFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RootFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RootFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RootFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RootFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RootFinder*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr CrossEntropy::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CrossEntropy::Class_Name()
{
   return "TMVA::CrossEntropy";
}

//______________________________________________________________________________
const char *CrossEntropy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::CrossEntropy*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CrossEntropy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::CrossEntropy*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CrossEntropy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::CrossEntropy*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CrossEntropy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::CrossEntropy*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MisClassificationError::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MisClassificationError::Class_Name()
{
   return "TMVA::MisClassificationError";
}

//______________________________________________________________________________
const char *MisClassificationError::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MisClassificationError*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MisClassificationError::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MisClassificationError*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MisClassificationError::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MisClassificationError*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MisClassificationError::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MisClassificationError*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr SdivSqrtSplusB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SdivSqrtSplusB::Class_Name()
{
   return "TMVA::SdivSqrtSplusB";
}

//______________________________________________________________________________
const char *SdivSqrtSplusB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SdivSqrtSplusB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SdivSqrtSplusB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SdivSqrtSplusB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SdivSqrtSplusB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SdivSqrtSplusB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SdivSqrtSplusB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SdivSqrtSplusB*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TreeInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TreeInfo::Class_Name()
{
   return "TMVA::TreeInfo";
}

//______________________________________________________________________________
const char *TreeInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TreeInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TreeInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TreeInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TreeInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TreeInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TreeInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TreeInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr DataInputHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DataInputHandler::Class_Name()
{
   return "TMVA::DataInputHandler";
}

//______________________________________________________________________________
const char *DataInputHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataInputHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DataInputHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataInputHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DataInputHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataInputHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DataInputHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataInputHandler*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr DataSetManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DataSetManager::Class_Name()
{
   return "TMVA::DataSetManager";
}

//______________________________________________________________________________
const char *DataSetManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DataSetManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DataSetManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DataSetManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetManager*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Reader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Reader::Class_Name()
{
   return "TMVA::Reader";
}

//______________________________________________________________________________
const char *Reader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Reader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Reader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Reader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Reader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Reader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Reader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Reader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr GeneticGenes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GeneticGenes::Class_Name()
{
   return "TMVA::GeneticGenes";
}

//______________________________________________________________________________
const char *GeneticGenes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticGenes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GeneticGenes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticGenes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GeneticGenes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticGenes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GeneticGenes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticGenes*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Interval::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Interval::Class_Name()
{
   return "TMVA::Interval";
}

//______________________________________________________________________________
const char *Interval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Interval*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Interval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Interval*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Interval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Interval*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Interval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Interval*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr GeneticRange::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GeneticRange::Class_Name()
{
   return "TMVA::GeneticRange";
}

//______________________________________________________________________________
const char *GeneticRange::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticRange*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GeneticRange::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticRange*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GeneticRange::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticRange*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GeneticRange::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticRange*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr GeneticPopulation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GeneticPopulation::Class_Name()
{
   return "TMVA::GeneticPopulation";
}

//______________________________________________________________________________
const char *GeneticPopulation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticPopulation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GeneticPopulation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticPopulation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GeneticPopulation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticPopulation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GeneticPopulation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticPopulation*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr GeneticAlgorithm::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GeneticAlgorithm::Class_Name()
{
   return "TMVA::GeneticAlgorithm";
}

//______________________________________________________________________________
const char *GeneticAlgorithm::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticAlgorithm*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GeneticAlgorithm::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticAlgorithm*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GeneticAlgorithm::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticAlgorithm*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GeneticAlgorithm::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticAlgorithm*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr GiniIndex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GiniIndex::Class_Name()
{
   return "TMVA::GiniIndex";
}

//______________________________________________________________________________
const char *GiniIndex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GiniIndex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GiniIndex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GiniIndex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GiniIndex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GiniIndex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GiniIndex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GiniIndex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr GiniIndexWithLaplace::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GiniIndexWithLaplace::Class_Name()
{
   return "TMVA::GiniIndexWithLaplace";
}

//______________________________________________________________________________
const char *GiniIndexWithLaplace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GiniIndexWithLaplace*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GiniIndexWithLaplace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GiniIndexWithLaplace*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GiniIndexWithLaplace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GiniIndexWithLaplace*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GiniIndexWithLaplace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GiniIndexWithLaplace*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr SimulatedAnnealing::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SimulatedAnnealing::Class_Name()
{
   return "TMVA::SimulatedAnnealing";
}

//______________________________________________________________________________
const char *SimulatedAnnealing::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealing*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SimulatedAnnealing::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealing*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimulatedAnnealing::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealing*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimulatedAnnealing::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealing*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr QuickMVAProbEstimator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *QuickMVAProbEstimator::Class_Name()
{
   return "TMVA::QuickMVAProbEstimator";
}

//______________________________________________________________________________
const char *QuickMVAProbEstimator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::QuickMVAProbEstimator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int QuickMVAProbEstimator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::QuickMVAProbEstimator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *QuickMVAProbEstimator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::QuickMVAProbEstimator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *QuickMVAProbEstimator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::QuickMVAProbEstimator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Config::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Config::Class_Name()
{
   return "TMVA::Config";
}

//______________________________________________________________________________
const char *Config::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Config*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Config::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Config*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Config::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Config*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Config::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Config*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr LogInterval::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LogInterval::Class_Name()
{
   return "TMVA::LogInterval";
}

//______________________________________________________________________________
const char *LogInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::LogInterval*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LogInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::LogInterval*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LogInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::LogInterval*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LogInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::LogInterval*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr FitterBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FitterBase::Class_Name()
{
   return "TMVA::FitterBase";
}

//______________________________________________________________________________
const char *FitterBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::FitterBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FitterBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::FitterBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FitterBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::FitterBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FitterBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::FitterBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MCFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCFitter::Class_Name()
{
   return "TMVA::MCFitter";
}

//______________________________________________________________________________
const char *MCFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MCFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MCFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MCFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MCFitter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr GeneticFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GeneticFitter::Class_Name()
{
   return "TMVA::GeneticFitter";
}

//______________________________________________________________________________
const char *GeneticFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GeneticFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GeneticFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GeneticFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::GeneticFitter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr SimulatedAnnealingFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SimulatedAnnealingFitter::Class_Name()
{
   return "TMVA::SimulatedAnnealingFitter";
}

//______________________________________________________________________________
const char *SimulatedAnnealingFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealingFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SimulatedAnnealingFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealingFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimulatedAnnealingFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealingFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimulatedAnnealingFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SimulatedAnnealingFitter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MinuitFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MinuitFitter::Class_Name()
{
   return "TMVA::MinuitFitter";
}

//______________________________________________________________________________
const char *MinuitFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MinuitFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MinuitFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MinuitFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MinuitFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MinuitFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MinuitFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MinuitFitter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MinuitWrapper::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MinuitWrapper::Class_Name()
{
   return "TMVA::MinuitWrapper";
}

//______________________________________________________________________________
const char *MinuitWrapper::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MinuitWrapper*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MinuitWrapper::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MinuitWrapper*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MinuitWrapper::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MinuitWrapper*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MinuitWrapper::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MinuitWrapper*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr SVEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SVEvent::Class_Name()
{
   return "TMVA::SVEvent";
}

//______________________________________________________________________________
const char *SVEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SVEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SVEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SVEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SVEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SVEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SVEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::SVEvent*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr OptimizeConfigParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *OptimizeConfigParameters::Class_Name()
{
   return "TMVA::OptimizeConfigParameters";
}

//______________________________________________________________________________
const char *OptimizeConfigParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptimizeConfigParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int OptimizeConfigParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptimizeConfigParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OptimizeConfigParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptimizeConfigParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OptimizeConfigParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptimizeConfigParameters*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TActivationChooser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TActivationChooser::Class_Name()
{
   return "TMVA::TActivationChooser";
}

//______________________________________________________________________________
const char *TActivationChooser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationChooser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TActivationChooser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationChooser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActivationChooser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationChooser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActivationChooser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationChooser*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TActivationSigmoid::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TActivationSigmoid::Class_Name()
{
   return "TMVA::TActivationSigmoid";
}

//______________________________________________________________________________
const char *TActivationSigmoid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationSigmoid*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TActivationSigmoid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationSigmoid*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActivationSigmoid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationSigmoid*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActivationSigmoid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationSigmoid*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TActivationIdentity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TActivationIdentity::Class_Name()
{
   return "TMVA::TActivationIdentity";
}

//______________________________________________________________________________
const char *TActivationIdentity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationIdentity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TActivationIdentity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationIdentity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActivationIdentity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationIdentity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActivationIdentity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationIdentity*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TActivationTanh::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TActivationTanh::Class_Name()
{
   return "TMVA::TActivationTanh";
}

//______________________________________________________________________________
const char *TActivationTanh::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationTanh*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TActivationTanh::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationTanh*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActivationTanh::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationTanh*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActivationTanh::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationTanh*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TActivationRadial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TActivationRadial::Class_Name()
{
   return "TMVA::TActivationRadial";
}

//______________________________________________________________________________
const char *TActivationRadial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationRadial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TActivationRadial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationRadial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActivationRadial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationRadial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActivationRadial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationRadial*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TActivationReLU::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TActivationReLU::Class_Name()
{
   return "TMVA::TActivationReLU";
}

//______________________________________________________________________________
const char *TActivationReLU::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationReLU*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TActivationReLU::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationReLU*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActivationReLU::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationReLU*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActivationReLU::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TActivationReLU*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TNeuronInputSum::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNeuronInputSum::Class_Name()
{
   return "TMVA::TNeuronInputSum";
}

//______________________________________________________________________________
const char *TNeuronInputSum::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSum*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNeuronInputSum::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSum*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNeuronInputSum::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSum*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNeuronInputSum::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSum*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TNeuronInputSqSum::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNeuronInputSqSum::Class_Name()
{
   return "TMVA::TNeuronInputSqSum";
}

//______________________________________________________________________________
const char *TNeuronInputSqSum::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSqSum*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNeuronInputSqSum::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSqSum*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNeuronInputSqSum::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSqSum*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNeuronInputSqSum::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputSqSum*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TNeuronInputAbs::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNeuronInputAbs::Class_Name()
{
   return "TMVA::TNeuronInputAbs";
}

//______________________________________________________________________________
const char *TNeuronInputAbs::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputAbs*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNeuronInputAbs::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputAbs*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNeuronInputAbs::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputAbs*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNeuronInputAbs::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputAbs*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr TNeuronInputChooser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNeuronInputChooser::Class_Name()
{
   return "TMVA::TNeuronInputChooser";
}

//______________________________________________________________________________
const char *TNeuronInputChooser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputChooser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNeuronInputChooser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputChooser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNeuronInputChooser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputChooser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNeuronInputChooser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::TNeuronInputChooser*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Ranking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ranking::Class_Name()
{
   return "TMVA::Ranking";
}

//______________________________________________________________________________
const char *Ranking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Ranking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ranking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Ranking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ranking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Ranking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ranking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Ranking*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr RuleFitAPI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RuleFitAPI::Class_Name()
{
   return "TMVA::RuleFitAPI";
}

//______________________________________________________________________________
const char *RuleFitAPI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RuleFitAPI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RuleFitAPI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RuleFitAPI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RuleFitAPI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RuleFitAPI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RuleFitAPI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::RuleFitAPI*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr VariableIdentityTransform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VariableIdentityTransform::Class_Name()
{
   return "TMVA::VariableIdentityTransform";
}

//______________________________________________________________________________
const char *VariableIdentityTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableIdentityTransform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VariableIdentityTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableIdentityTransform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VariableIdentityTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableIdentityTransform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VariableIdentityTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableIdentityTransform*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr VariableDecorrTransform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VariableDecorrTransform::Class_Name()
{
   return "TMVA::VariableDecorrTransform";
}

//______________________________________________________________________________
const char *VariableDecorrTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableDecorrTransform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VariableDecorrTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableDecorrTransform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VariableDecorrTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableDecorrTransform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VariableDecorrTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableDecorrTransform*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr VariablePCATransform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VariablePCATransform::Class_Name()
{
   return "TMVA::VariablePCATransform";
}

//______________________________________________________________________________
const char *VariablePCATransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariablePCATransform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VariablePCATransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariablePCATransform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VariablePCATransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariablePCATransform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VariablePCATransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariablePCATransform*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr VariableGaussTransform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VariableGaussTransform::Class_Name()
{
   return "TMVA::VariableGaussTransform";
}

//______________________________________________________________________________
const char *VariableGaussTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableGaussTransform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VariableGaussTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableGaussTransform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VariableGaussTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableGaussTransform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VariableGaussTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableGaussTransform*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr VariableNormalizeTransform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VariableNormalizeTransform::Class_Name()
{
   return "TMVA::VariableNormalizeTransform";
}

//______________________________________________________________________________
const char *VariableNormalizeTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableNormalizeTransform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VariableNormalizeTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableNormalizeTransform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VariableNormalizeTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableNormalizeTransform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VariableNormalizeTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableNormalizeTransform*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr VariableRearrangeTransform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VariableRearrangeTransform::Class_Name()
{
   return "TMVA::VariableRearrangeTransform";
}

//______________________________________________________________________________
const char *VariableRearrangeTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableRearrangeTransform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VariableRearrangeTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableRearrangeTransform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VariableRearrangeTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableRearrangeTransform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VariableRearrangeTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableRearrangeTransform*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr OptionMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *OptionMap::Class_Name()
{
   return "TMVA::OptionMap";
}

//______________________________________________________________________________
const char *OptionMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptionMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int OptionMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptionMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OptionMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptionMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OptionMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::OptionMap*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr DataLoader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DataLoader::Class_Name()
{
   return "TMVA::DataLoader";
}

//______________________________________________________________________________
const char *DataLoader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataLoader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DataLoader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataLoader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DataLoader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataLoader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DataLoader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataLoader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr Envelope::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Envelope::Class_Name()
{
   return "TMVA::Envelope";
}

//______________________________________________________________________________
const char *Envelope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Envelope*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Envelope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Envelope*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Envelope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Envelope*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Envelope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Envelope*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr VariableImportance::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VariableImportance::Class_Name()
{
   return "TMVA::VariableImportance";
}

//______________________________________________________________________________
const char *VariableImportance::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableImportance*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VariableImportance::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableImportance*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VariableImportance::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableImportance*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VariableImportance::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::VariableImportance*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr CrossValidation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CrossValidation::Class_Name()
{
   return "TMVA::CrossValidation";
}

//______________________________________________________________________________
const char *CrossValidation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::CrossValidation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CrossValidation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::CrossValidation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CrossValidation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::CrossValidation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CrossValidation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::CrossValidation*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr HyperParameterOptimisation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HyperParameterOptimisation::Class_Name()
{
   return "TMVA::HyperParameterOptimisation";
}

//______________________________________________________________________________
const char *HyperParameterOptimisation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::HyperParameterOptimisation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HyperParameterOptimisation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::HyperParameterOptimisation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HyperParameterOptimisation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::HyperParameterOptimisation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HyperParameterOptimisation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::HyperParameterOptimisation*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr ResultsClassification::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ResultsClassification::Class_Name()
{
   return "TMVA::ResultsClassification";
}

//______________________________________________________________________________
const char *ResultsClassification::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsClassification*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ResultsClassification::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsClassification*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ResultsClassification::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsClassification*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ResultsClassification::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsClassification*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr ResultsRegression::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ResultsRegression::Class_Name()
{
   return "TMVA::ResultsRegression";
}

//______________________________________________________________________________
const char *ResultsRegression::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsRegression*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ResultsRegression::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsRegression*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ResultsRegression::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsRegression*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ResultsRegression::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsRegression*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr ResultsMulticlass::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ResultsMulticlass::Class_Name()
{
   return "TMVA::ResultsMulticlass";
}

//______________________________________________________________________________
const char *ResultsMulticlass::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsMulticlass*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ResultsMulticlass::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsMulticlass*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ResultsMulticlass::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsMulticlass*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ResultsMulticlass::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::ResultsMulticlass*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr DataSetFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DataSetFactory::Class_Name()
{
   return "TMVA::DataSetFactory";
}

//______________________________________________________________________________
const char *DataSetFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DataSetFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DataSetFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DataSetFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::DataSetFactory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLTypes(void *p) {
      delete ((::TMVA::Types*)p);
   }
   static void deleteArray_TMVAcLcLTypes(void *p) {
      delete [] ((::TMVA::Types*)p);
   }
   static void destruct_TMVAcLcLTypes(void *p) {
      typedef ::TMVA::Types current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Types

namespace TMVA {
//______________________________________________________________________________
void MsgLogger::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MsgLogger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MsgLogger::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MsgLogger::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLMsgLogger(void *p) {
      return  p ? new(p) ::TMVA::MsgLogger : new ::TMVA::MsgLogger;
   }
   static void *newArray_TMVAcLcLMsgLogger(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::MsgLogger[nElements] : new ::TMVA::MsgLogger[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLMsgLogger(void *p) {
      delete ((::TMVA::MsgLogger*)p);
   }
   static void deleteArray_TMVAcLcLMsgLogger(void *p) {
      delete [] ((::TMVA::MsgLogger*)p);
   }
   static void destruct_TMVAcLcLMsgLogger(void *p) {
      typedef ::TMVA::MsgLogger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MsgLogger

namespace TMVA {
//______________________________________________________________________________
void OptionBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::OptionBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::OptionBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::OptionBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLOptionBase(void *p) {
      delete ((::TMVA::OptionBase*)p);
   }
   static void deleteArray_TMVAcLcLOptionBase(void *p) {
      delete [] ((::TMVA::OptionBase*)p);
   }
   static void destruct_TMVAcLcLOptionBase(void *p) {
      typedef ::TMVA::OptionBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::OptionBase

namespace TMVA {
//______________________________________________________________________________
void Configurable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Configurable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Configurable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Configurable::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLConfigurable(void *p) {
      return  p ? new(p) ::TMVA::Configurable : new ::TMVA::Configurable;
   }
   static void *newArray_TMVAcLcLConfigurable(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::Configurable[nElements] : new ::TMVA::Configurable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLConfigurable(void *p) {
      delete ((::TMVA::Configurable*)p);
   }
   static void deleteArray_TMVAcLcLConfigurable(void *p) {
      delete [] ((::TMVA::Configurable*)p);
   }
   static void destruct_TMVAcLcLConfigurable(void *p) {
      typedef ::TMVA::Configurable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Configurable

namespace TMVA {
//______________________________________________________________________________
void VariableInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::VariableInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::VariableInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::VariableInfo::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLVariableInfo(void *p) {
      return  p ? new(p) ::TMVA::VariableInfo : new ::TMVA::VariableInfo;
   }
   static void *newArray_TMVAcLcLVariableInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::VariableInfo[nElements] : new ::TMVA::VariableInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLVariableInfo(void *p) {
      delete ((::TMVA::VariableInfo*)p);
   }
   static void deleteArray_TMVAcLcLVariableInfo(void *p) {
      delete [] ((::TMVA::VariableInfo*)p);
   }
   static void destruct_TMVAcLcLVariableInfo(void *p) {
      typedef ::TMVA::VariableInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::VariableInfo

namespace TMVA {
//______________________________________________________________________________
void DataSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::DataSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::DataSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::DataSet::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLDataSet(void *p) {
      return  p ? new(p) ::TMVA::DataSet : new ::TMVA::DataSet;
   }
   static void *newArray_TMVAcLcLDataSet(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::DataSet[nElements] : new ::TMVA::DataSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLDataSet(void *p) {
      delete ((::TMVA::DataSet*)p);
   }
   static void deleteArray_TMVAcLcLDataSet(void *p) {
      delete [] ((::TMVA::DataSet*)p);
   }
   static void destruct_TMVAcLcLDataSet(void *p) {
      typedef ::TMVA::DataSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::DataSet

namespace TMVA {
//______________________________________________________________________________
void Factory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Factory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Factory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Factory::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLFactory(void *p) {
      delete ((::TMVA::Factory*)p);
   }
   static void deleteArray_TMVAcLcLFactory(void *p) {
      delete [] ((::TMVA::Factory*)p);
   }
   static void destruct_TMVAcLcLFactory(void *p) {
      typedef ::TMVA::Factory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Factory

namespace TMVA {
//______________________________________________________________________________
void IMethod::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::IMethod.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::IMethod::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::IMethod::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLIMethod(void *p) {
      delete ((::TMVA::IMethod*)p);
   }
   static void deleteArray_TMVAcLcLIMethod(void *p) {
      delete [] ((::TMVA::IMethod*)p);
   }
   static void destruct_TMVAcLcLIMethod(void *p) {
      typedef ::TMVA::IMethod current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::IMethod

namespace TMVA {
//______________________________________________________________________________
void Event::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Event.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Event::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Event::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLEvent(void *p) {
      return  p ? new(p) ::TMVA::Event : new ::TMVA::Event;
   }
   static void *newArray_TMVAcLcLEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::Event[nElements] : new ::TMVA::Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLEvent(void *p) {
      delete ((::TMVA::Event*)p);
   }
   static void deleteArray_TMVAcLcLEvent(void *p) {
      delete [] ((::TMVA::Event*)p);
   }
   static void destruct_TMVAcLcLEvent(void *p) {
      typedef ::TMVA::Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Event

namespace TMVA {
//______________________________________________________________________________
void ClassInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::ClassInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::ClassInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::ClassInfo::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLClassInfo(void *p) {
      return  p ? new(p) ::TMVA::ClassInfo : new ::TMVA::ClassInfo;
   }
   static void *newArray_TMVAcLcLClassInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::ClassInfo[nElements] : new ::TMVA::ClassInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLClassInfo(void *p) {
      delete ((::TMVA::ClassInfo*)p);
   }
   static void deleteArray_TMVAcLcLClassInfo(void *p) {
      delete [] ((::TMVA::ClassInfo*)p);
   }
   static void destruct_TMVAcLcLClassInfo(void *p) {
      typedef ::TMVA::ClassInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::ClassInfo

namespace TMVA {
//______________________________________________________________________________
void DataSetInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::DataSetInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::DataSetInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::DataSetInfo::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLDataSetInfo(void *p) {
      return  p ? new(p) ::TMVA::DataSetInfo : new ::TMVA::DataSetInfo;
   }
   static void *newArray_TMVAcLcLDataSetInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::DataSetInfo[nElements] : new ::TMVA::DataSetInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLDataSetInfo(void *p) {
      delete ((::TMVA::DataSetInfo*)p);
   }
   static void deleteArray_TMVAcLcLDataSetInfo(void *p) {
      delete [] ((::TMVA::DataSetInfo*)p);
   }
   static void destruct_TMVAcLcLDataSetInfo(void *p) {
      typedef ::TMVA::DataSetInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::DataSetInfo

namespace TMVA {
//______________________________________________________________________________
void Results::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Results.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Results::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Results::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLResults(void *p) {
      delete ((::TMVA::Results*)p);
   }
   static void deleteArray_TMVAcLcLResults(void *p) {
      delete [] ((::TMVA::Results*)p);
   }
   static void destruct_TMVAcLcLResults(void *p) {
      typedef ::TMVA::Results current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Results

namespace TMVA {
//______________________________________________________________________________
void MethodBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodBase(void *p) {
      delete ((::TMVA::MethodBase*)p);
   }
   static void deleteArray_TMVAcLcLMethodBase(void *p) {
      delete [] ((::TMVA::MethodBase*)p);
   }
   static void destruct_TMVAcLcLMethodBase(void *p) {
      typedef ::TMVA::MethodBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodBase

namespace TMVA {
//______________________________________________________________________________
void MethodCompositeBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodCompositeBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodCompositeBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodCompositeBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodCompositeBase(void *p) {
      delete ((::TMVA::MethodCompositeBase*)p);
   }
   static void deleteArray_TMVAcLcLMethodCompositeBase(void *p) {
      delete [] ((::TMVA::MethodCompositeBase*)p);
   }
   static void destruct_TMVAcLcLMethodCompositeBase(void *p) {
      typedef ::TMVA::MethodCompositeBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodCompositeBase

namespace TMVA {
//______________________________________________________________________________
void TActivation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TActivation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TActivation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TActivation::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLTActivation(void *p) {
      delete ((::TMVA::TActivation*)p);
   }
   static void deleteArray_TMVAcLcLTActivation(void *p) {
      delete [] ((::TMVA::TActivation*)p);
   }
   static void destruct_TMVAcLcLTActivation(void *p) {
      typedef ::TMVA::TActivation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TActivation

namespace TMVA {
//______________________________________________________________________________
void TSynapse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TSynapse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TSynapse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TSynapse::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTSynapse(void *p) {
      return  p ? new(p) ::TMVA::TSynapse : new ::TMVA::TSynapse;
   }
   static void *newArray_TMVAcLcLTSynapse(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::TSynapse[nElements] : new ::TMVA::TSynapse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTSynapse(void *p) {
      delete ((::TMVA::TSynapse*)p);
   }
   static void deleteArray_TMVAcLcLTSynapse(void *p) {
      delete [] ((::TMVA::TSynapse*)p);
   }
   static void destruct_TMVAcLcLTSynapse(void *p) {
      typedef ::TMVA::TSynapse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TSynapse

namespace TMVA {
//______________________________________________________________________________
void TNeuron::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TNeuron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TNeuron::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TNeuron::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTNeuron(void *p) {
      return  p ? new(p) ::TMVA::TNeuron : new ::TMVA::TNeuron;
   }
   static void *newArray_TMVAcLcLTNeuron(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::TNeuron[nElements] : new ::TMVA::TNeuron[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTNeuron(void *p) {
      delete ((::TMVA::TNeuron*)p);
   }
   static void deleteArray_TMVAcLcLTNeuron(void *p) {
      delete [] ((::TMVA::TNeuron*)p);
   }
   static void destruct_TMVAcLcLTNeuron(void *p) {
      typedef ::TMVA::TNeuron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TNeuron

namespace TMVA {
//______________________________________________________________________________
void TNeuronInput::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TNeuronInput.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TNeuronInput::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TNeuronInput::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLTNeuronInput(void *p) {
      delete ((::TMVA::TNeuronInput*)p);
   }
   static void deleteArray_TMVAcLcLTNeuronInput(void *p) {
      delete [] ((::TMVA::TNeuronInput*)p);
   }
   static void destruct_TMVAcLcLTNeuronInput(void *p) {
      typedef ::TMVA::TNeuronInput current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TNeuronInput

namespace TMVA {
//______________________________________________________________________________
void MethodANNBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodANNBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodANNBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodANNBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodANNBase(void *p) {
      delete ((::TMVA::MethodANNBase*)p);
   }
   static void deleteArray_TMVAcLcLMethodANNBase(void *p) {
      delete [] ((::TMVA::MethodANNBase*)p);
   }
   static void destruct_TMVAcLcLMethodANNBase(void *p) {
      typedef ::TMVA::MethodANNBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodANNBase

namespace TMVA {
//______________________________________________________________________________
void MethodTMlpANN::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodTMlpANN.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodTMlpANN::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodTMlpANN::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodTMlpANN(void *p) {
      delete ((::TMVA::MethodTMlpANN*)p);
   }
   static void deleteArray_TMVAcLcLMethodTMlpANN(void *p) {
      delete [] ((::TMVA::MethodTMlpANN*)p);
   }
   static void destruct_TMVAcLcLMethodTMlpANN(void *p) {
      typedef ::TMVA::MethodTMlpANN current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodTMlpANN

namespace TMVA {
//______________________________________________________________________________
void Node::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Node.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Node::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Node::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLNode(void *p) {
      delete ((::TMVA::Node*)p);
   }
   static void deleteArray_TMVAcLcLNode(void *p) {
      delete [] ((::TMVA::Node*)p);
   }
   static void destruct_TMVAcLcLNode(void *p) {
      typedef ::TMVA::Node current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Node

namespace TMVA {
//______________________________________________________________________________
void DecisionTreeNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::DecisionTreeNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::DecisionTreeNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::DecisionTreeNode::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLDecisionTreeNode(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::DecisionTreeNode : new ::TMVA::DecisionTreeNode;
   }
   static void *newArray_TMVAcLcLDecisionTreeNode(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::DecisionTreeNode[nElements] : new ::TMVA::DecisionTreeNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLDecisionTreeNode(void *p) {
      delete ((::TMVA::DecisionTreeNode*)p);
   }
   static void deleteArray_TMVAcLcLDecisionTreeNode(void *p) {
      delete [] ((::TMVA::DecisionTreeNode*)p);
   }
   static void destruct_TMVAcLcLDecisionTreeNode(void *p) {
      typedef ::TMVA::DecisionTreeNode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::DecisionTreeNode

namespace TMVA {
//______________________________________________________________________________
void BinaryTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::BinaryTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::BinaryTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::BinaryTree::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLBinaryTree(void *p) {
      delete ((::TMVA::BinaryTree*)p);
   }
   static void deleteArray_TMVAcLcLBinaryTree(void *p) {
      delete [] ((::TMVA::BinaryTree*)p);
   }
   static void destruct_TMVAcLcLBinaryTree(void *p) {
      typedef ::TMVA::BinaryTree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::BinaryTree

namespace TMVA {
//______________________________________________________________________________
void BinarySearchTreeNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::BinarySearchTreeNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::BinarySearchTreeNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::BinarySearchTreeNode::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLBinarySearchTreeNode(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::BinarySearchTreeNode : new ::TMVA::BinarySearchTreeNode;
   }
   static void *newArray_TMVAcLcLBinarySearchTreeNode(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::BinarySearchTreeNode[nElements] : new ::TMVA::BinarySearchTreeNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLBinarySearchTreeNode(void *p) {
      delete ((::TMVA::BinarySearchTreeNode*)p);
   }
   static void deleteArray_TMVAcLcLBinarySearchTreeNode(void *p) {
      delete [] ((::TMVA::BinarySearchTreeNode*)p);
   }
   static void destruct_TMVAcLcLBinarySearchTreeNode(void *p) {
      typedef ::TMVA::BinarySearchTreeNode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::BinarySearchTreeNode

namespace TMVA {
//______________________________________________________________________________
void BinarySearchTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::BinarySearchTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::BinarySearchTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::BinarySearchTree::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLBinarySearchTree(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::BinarySearchTree : new ::TMVA::BinarySearchTree;
   }
   static void *newArray_TMVAcLcLBinarySearchTree(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::BinarySearchTree[nElements] : new ::TMVA::BinarySearchTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLBinarySearchTree(void *p) {
      delete ((::TMVA::BinarySearchTree*)p);
   }
   static void deleteArray_TMVAcLcLBinarySearchTree(void *p) {
      delete [] ((::TMVA::BinarySearchTree*)p);
   }
   static void destruct_TMVAcLcLBinarySearchTree(void *p) {
      typedef ::TMVA::BinarySearchTree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::BinarySearchTree

namespace TMVA {
//______________________________________________________________________________
void SeparationBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::SeparationBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::SeparationBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::SeparationBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLSeparationBase(void *p) {
      delete ((::TMVA::SeparationBase*)p);
   }
   static void deleteArray_TMVAcLcLSeparationBase(void *p) {
      delete [] ((::TMVA::SeparationBase*)p);
   }
   static void destruct_TMVAcLcLSeparationBase(void *p) {
      typedef ::TMVA::SeparationBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::SeparationBase

namespace TMVA {
//______________________________________________________________________________
void RegressionVariance::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::RegressionVariance.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::RegressionVariance::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::RegressionVariance::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLRegressionVariance(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::RegressionVariance : new ::TMVA::RegressionVariance;
   }
   static void *newArray_TMVAcLcLRegressionVariance(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::RegressionVariance[nElements] : new ::TMVA::RegressionVariance[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLRegressionVariance(void *p) {
      delete ((::TMVA::RegressionVariance*)p);
   }
   static void deleteArray_TMVAcLcLRegressionVariance(void *p) {
      delete [] ((::TMVA::RegressionVariance*)p);
   }
   static void destruct_TMVAcLcLRegressionVariance(void *p) {
      typedef ::TMVA::RegressionVariance current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::RegressionVariance

namespace TMVA {
//______________________________________________________________________________
void DecisionTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::DecisionTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::DecisionTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::DecisionTree::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLDecisionTree(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::DecisionTree : new ::TMVA::DecisionTree;
   }
   static void *newArray_TMVAcLcLDecisionTree(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::DecisionTree[nElements] : new ::TMVA::DecisionTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLDecisionTree(void *p) {
      delete ((::TMVA::DecisionTree*)p);
   }
   static void deleteArray_TMVAcLcLDecisionTree(void *p) {
      delete [] ((::TMVA::DecisionTree*)p);
   }
   static void destruct_TMVAcLcLDecisionTree(void *p) {
      typedef ::TMVA::DecisionTree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::DecisionTree

namespace TMVA {
//______________________________________________________________________________
void RuleFit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::RuleFit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::RuleFit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::RuleFit::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLRuleFit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::RuleFit : new ::TMVA::RuleFit;
   }
   static void *newArray_TMVAcLcLRuleFit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::RuleFit[nElements] : new ::TMVA::RuleFit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLRuleFit(void *p) {
      delete ((::TMVA::RuleFit*)p);
   }
   static void deleteArray_TMVAcLcLRuleFit(void *p) {
      delete [] ((::TMVA::RuleFit*)p);
   }
   static void destruct_TMVAcLcLRuleFit(void *p) {
      typedef ::TMVA::RuleFit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::RuleFit

namespace TMVA {
//______________________________________________________________________________
void MethodRuleFit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodRuleFit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodRuleFit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodRuleFit::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodRuleFit(void *p) {
      delete ((::TMVA::MethodRuleFit*)p);
   }
   static void deleteArray_TMVAcLcLMethodRuleFit(void *p) {
      delete [] ((::TMVA::MethodRuleFit*)p);
   }
   static void destruct_TMVAcLcLMethodRuleFit(void *p) {
      typedef ::TMVA::MethodRuleFit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodRuleFit

namespace TMVA {
//______________________________________________________________________________
void KDEKernel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::KDEKernel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::KDEKernel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::KDEKernel::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLKDEKernel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::KDEKernel : new ::TMVA::KDEKernel;
   }
   static void *newArray_TMVAcLcLKDEKernel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::KDEKernel[nElements] : new ::TMVA::KDEKernel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLKDEKernel(void *p) {
      delete ((::TMVA::KDEKernel*)p);
   }
   static void deleteArray_TMVAcLcLKDEKernel(void *p) {
      delete [] ((::TMVA::KDEKernel*)p);
   }
   static void destruct_TMVAcLcLKDEKernel(void *p) {
      typedef ::TMVA::KDEKernel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::KDEKernel

namespace TMVA {
//______________________________________________________________________________
void PDF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDF::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDF::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDF(void *p) {
      delete ((::TMVA::PDF*)p);
   }
   static void deleteArray_TMVAcLcLPDF(void *p) {
      delete [] ((::TMVA::PDF*)p);
   }
   static void destruct_TMVAcLcLPDF(void *p) {
      typedef ::TMVA::PDF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDF

namespace TMVA {
//______________________________________________________________________________
void IFitterTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::IFitterTarget.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::IFitterTarget::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::IFitterTarget::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLIFitterTarget(void *p) {
      delete ((::TMVA::IFitterTarget*)p);
   }
   static void deleteArray_TMVAcLcLIFitterTarget(void *p) {
      delete [] ((::TMVA::IFitterTarget*)p);
   }
   static void destruct_TMVAcLcLIFitterTarget(void *p) {
      typedef ::TMVA::IFitterTarget current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::IFitterTarget

namespace TMVA {
//______________________________________________________________________________
void MethodCuts::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodCuts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodCuts::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodCuts::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodCuts(void *p) {
      delete ((::TMVA::MethodCuts*)p);
   }
   static void deleteArray_TMVAcLcLMethodCuts(void *p) {
      delete [] ((::TMVA::MethodCuts*)p);
   }
   static void destruct_TMVAcLcLMethodCuts(void *p) {
      typedef ::TMVA::MethodCuts current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodCuts

namespace TMVA {
//______________________________________________________________________________
void MethodFisher::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodFisher.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodFisher::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodFisher::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodFisher(void *p) {
      delete ((::TMVA::MethodFisher*)p);
   }
   static void deleteArray_TMVAcLcLMethodFisher(void *p) {
      delete [] ((::TMVA::MethodFisher*)p);
   }
   static void destruct_TMVAcLcLMethodFisher(void *p) {
      typedef ::TMVA::MethodFisher current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodFisher

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLkNNcLcLEvent(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::kNN::Event : new ::TMVA::kNN::Event;
   }
   static void *newArray_TMVAcLcLkNNcLcLEvent(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::kNN::Event[nElements] : new ::TMVA::kNN::Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLkNNcLcLEvent(void *p) {
      delete ((::TMVA::kNN::Event*)p);
   }
   static void deleteArray_TMVAcLcLkNNcLcLEvent(void *p) {
      delete [] ((::TMVA::kNN::Event*)p);
   }
   static void destruct_TMVAcLcLkNNcLcLEvent(void *p) {
      typedef ::TMVA::kNN::Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::kNN::Event

namespace TMVA {
//______________________________________________________________________________
void MethodKNN::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodKNN.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodKNN::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodKNN::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodKNN(void *p) {
      delete ((::TMVA::MethodKNN*)p);
   }
   static void deleteArray_TMVAcLcLMethodKNN(void *p) {
      delete [] ((::TMVA::MethodKNN*)p);
   }
   static void destruct_TMVAcLcLMethodKNN(void *p) {
      typedef ::TMVA::MethodKNN current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodKNN

namespace TMVA {
//______________________________________________________________________________
void MethodCFMlpANN_Utils::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodCFMlpANN_Utils.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodCFMlpANN_Utils::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodCFMlpANN_Utils::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodCFMlpANN_Utils(void *p) {
      delete ((::TMVA::MethodCFMlpANN_Utils*)p);
   }
   static void deleteArray_TMVAcLcLMethodCFMlpANN_Utils(void *p) {
      delete [] ((::TMVA::MethodCFMlpANN_Utils*)p);
   }
   static void destruct_TMVAcLcLMethodCFMlpANN_Utils(void *p) {
      typedef ::TMVA::MethodCFMlpANN_Utils current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodCFMlpANN_Utils

namespace TMVA {
//______________________________________________________________________________
void MethodCFMlpANN::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodCFMlpANN.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodCFMlpANN::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodCFMlpANN::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodCFMlpANN(void *p) {
      delete ((::TMVA::MethodCFMlpANN*)p);
   }
   static void deleteArray_TMVAcLcLMethodCFMlpANN(void *p) {
      delete [] ((::TMVA::MethodCFMlpANN*)p);
   }
   static void destruct_TMVAcLcLMethodCFMlpANN(void *p) {
      typedef ::TMVA::MethodCFMlpANN current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodCFMlpANN

namespace TMVA {
//______________________________________________________________________________
void MethodLikelihood::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodLikelihood.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodLikelihood::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodLikelihood::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodLikelihood(void *p) {
      delete ((::TMVA::MethodLikelihood*)p);
   }
   static void deleteArray_TMVAcLcLMethodLikelihood(void *p) {
      delete [] ((::TMVA::MethodLikelihood*)p);
   }
   static void destruct_TMVAcLcLMethodLikelihood(void *p) {
      typedef ::TMVA::MethodLikelihood current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodLikelihood

namespace TMVA {
//______________________________________________________________________________
void MethodHMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodHMatrix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodHMatrix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodHMatrix::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodHMatrix(void *p) {
      delete ((::TMVA::MethodHMatrix*)p);
   }
   static void deleteArray_TMVAcLcLMethodHMatrix(void *p) {
      delete [] ((::TMVA::MethodHMatrix*)p);
   }
   static void destruct_TMVAcLcLMethodHMatrix(void *p) {
      typedef ::TMVA::MethodHMatrix current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodHMatrix

namespace TMVA {
//______________________________________________________________________________
void MethodPDERS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodPDERS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodPDERS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodPDERS::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodPDERS(void *p) {
      delete ((::TMVA::MethodPDERS*)p);
   }
   static void deleteArray_TMVAcLcLMethodPDERS(void *p) {
      delete [] ((::TMVA::MethodPDERS*)p);
   }
   static void destruct_TMVAcLcLMethodPDERS(void *p) {
      typedef ::TMVA::MethodPDERS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodPDERS

namespace TMVA {
//______________________________________________________________________________
void MethodBDT::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodBDT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodBDT::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodBDT::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodBDT(void *p) {
      delete ((::TMVA::MethodBDT*)p);
   }
   static void deleteArray_TMVAcLcLMethodBDT(void *p) {
      delete [] ((::TMVA::MethodBDT*)p);
   }
   static void destruct_TMVAcLcLMethodBDT(void *p) {
      typedef ::TMVA::MethodBDT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodBDT

namespace TMVA {
//______________________________________________________________________________
void MethodDT::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodDT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodDT::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodDT::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodDT(void *p) {
      delete ((::TMVA::MethodDT*)p);
   }
   static void deleteArray_TMVAcLcLMethodDT(void *p) {
      delete [] ((::TMVA::MethodDT*)p);
   }
   static void destruct_TMVAcLcLMethodDT(void *p) {
      typedef ::TMVA::MethodDT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodDT

namespace TMVA {
//______________________________________________________________________________
void MethodSVM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodSVM.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodSVM::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodSVM::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodSVM(void *p) {
      delete ((::TMVA::MethodSVM*)p);
   }
   static void deleteArray_TMVAcLcLMethodSVM(void *p) {
      delete [] ((::TMVA::MethodSVM*)p);
   }
   static void destruct_TMVAcLcLMethodSVM(void *p) {
      typedef ::TMVA::MethodSVM current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodSVM

namespace TMVA {
//______________________________________________________________________________
void MethodBayesClassifier::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodBayesClassifier.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodBayesClassifier::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodBayesClassifier::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodBayesClassifier(void *p) {
      delete ((::TMVA::MethodBayesClassifier*)p);
   }
   static void deleteArray_TMVAcLcLMethodBayesClassifier(void *p) {
      delete [] ((::TMVA::MethodBayesClassifier*)p);
   }
   static void destruct_TMVAcLcLMethodBayesClassifier(void *p) {
      typedef ::TMVA::MethodBayesClassifier current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodBayesClassifier

namespace TMVA {
//______________________________________________________________________________
void MethodFDA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodFDA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodFDA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodFDA::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodFDA(void *p) {
      delete ((::TMVA::MethodFDA*)p);
   }
   static void deleteArray_TMVAcLcLMethodFDA(void *p) {
      delete [] ((::TMVA::MethodFDA*)p);
   }
   static void destruct_TMVAcLcLMethodFDA(void *p) {
      typedef ::TMVA::MethodFDA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodFDA

namespace TMVA {
//______________________________________________________________________________
void MethodMLP::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodMLP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodMLP::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodMLP::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodMLP(void *p) {
      delete ((::TMVA::MethodMLP*)p);
   }
   static void deleteArray_TMVAcLcLMethodMLP(void *p) {
      delete [] ((::TMVA::MethodMLP*)p);
   }
   static void destruct_TMVAcLcLMethodMLP(void *p) {
      typedef ::TMVA::MethodMLP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodMLP

namespace TMVA {
//______________________________________________________________________________
void MethodBoost::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodBoost.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodBoost::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodBoost::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodBoost(void *p) {
      delete ((::TMVA::MethodBoost*)p);
   }
   static void deleteArray_TMVAcLcLMethodBoost(void *p) {
      delete [] ((::TMVA::MethodBoost*)p);
   }
   static void destruct_TMVAcLcLMethodBoost(void *p) {
      typedef ::TMVA::MethodBoost current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodBoost

namespace TMVA {
//______________________________________________________________________________
void Timer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Timer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Timer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Timer::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTimer(void *p) {
      return  p ? new(p) ::TMVA::Timer : new ::TMVA::Timer;
   }
   static void *newArray_TMVAcLcLTimer(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::Timer[nElements] : new ::TMVA::Timer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTimer(void *p) {
      delete ((::TMVA::Timer*)p);
   }
   static void deleteArray_TMVAcLcLTimer(void *p) {
      delete [] ((::TMVA::Timer*)p);
   }
   static void destruct_TMVAcLcLTimer(void *p) {
      typedef ::TMVA::Timer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Timer

namespace TMVA {
//______________________________________________________________________________
void PDEFoamDensityBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamDensityBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamDensityBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamDensityBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamDensityBase(void *p) {
      delete ((::TMVA::PDEFoamDensityBase*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamDensityBase(void *p) {
      delete [] ((::TMVA::PDEFoamDensityBase*)p);
   }
   static void destruct_TMVAcLcLPDEFoamDensityBase(void *p) {
      typedef ::TMVA::PDEFoamDensityBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamDensityBase

namespace TMVA {
//______________________________________________________________________________
void PDEFoamVect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamVect.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamVect::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamVect::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamVect(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamVect : new ::TMVA::PDEFoamVect;
   }
   static void *newArray_TMVAcLcLPDEFoamVect(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamVect[nElements] : new ::TMVA::PDEFoamVect[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamVect(void *p) {
      delete ((::TMVA::PDEFoamVect*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamVect(void *p) {
      delete [] ((::TMVA::PDEFoamVect*)p);
   }
   static void destruct_TMVAcLcLPDEFoamVect(void *p) {
      typedef ::TMVA::PDEFoamVect current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamVect

namespace TMVA {
//______________________________________________________________________________
void PDEFoamCell::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamCell.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamCell::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamCell::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamCell(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamCell : new ::TMVA::PDEFoamCell;
   }
   static void *newArray_TMVAcLcLPDEFoamCell(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamCell[nElements] : new ::TMVA::PDEFoamCell[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamCell(void *p) {
      delete ((::TMVA::PDEFoamCell*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamCell(void *p) {
      delete [] ((::TMVA::PDEFoamCell*)p);
   }
   static void destruct_TMVAcLcLPDEFoamCell(void *p) {
      typedef ::TMVA::PDEFoamCell current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamCell

namespace TMVA {
//______________________________________________________________________________
void PDEFoam::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoam::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoam::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoam(void *p) {
      return  p ? new(p) ::TMVA::PDEFoam : new ::TMVA::PDEFoam;
   }
   static void *newArray_TMVAcLcLPDEFoam(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoam[nElements] : new ::TMVA::PDEFoam[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoam(void *p) {
      delete ((::TMVA::PDEFoam*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoam(void *p) {
      delete [] ((::TMVA::PDEFoam*)p);
   }
   static void destruct_TMVAcLcLPDEFoam(void *p) {
      typedef ::TMVA::PDEFoam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoam

namespace TMVA {
//______________________________________________________________________________
void PDEFoamDiscriminant::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamDiscriminant.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamDiscriminant::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamDiscriminant::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamDiscriminant(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamDiscriminant : new ::TMVA::PDEFoamDiscriminant;
   }
   static void *newArray_TMVAcLcLPDEFoamDiscriminant(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamDiscriminant[nElements] : new ::TMVA::PDEFoamDiscriminant[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamDiscriminant(void *p) {
      delete ((::TMVA::PDEFoamDiscriminant*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamDiscriminant(void *p) {
      delete [] ((::TMVA::PDEFoamDiscriminant*)p);
   }
   static void destruct_TMVAcLcLPDEFoamDiscriminant(void *p) {
      typedef ::TMVA::PDEFoamDiscriminant current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamDiscriminant

namespace TMVA {
//______________________________________________________________________________
void PDEFoamDecisionTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamDecisionTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamDecisionTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamDecisionTree::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamDecisionTree(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamDecisionTree : new ::TMVA::PDEFoamDecisionTree;
   }
   static void *newArray_TMVAcLcLPDEFoamDecisionTree(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamDecisionTree[nElements] : new ::TMVA::PDEFoamDecisionTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamDecisionTree(void *p) {
      delete ((::TMVA::PDEFoamDecisionTree*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamDecisionTree(void *p) {
      delete [] ((::TMVA::PDEFoamDecisionTree*)p);
   }
   static void destruct_TMVAcLcLPDEFoamDecisionTree(void *p) {
      typedef ::TMVA::PDEFoamDecisionTree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamDecisionTree

namespace TMVA {
//______________________________________________________________________________
void PDEFoamEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamEvent::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamEvent(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamEvent : new ::TMVA::PDEFoamEvent;
   }
   static void *newArray_TMVAcLcLPDEFoamEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamEvent[nElements] : new ::TMVA::PDEFoamEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamEvent(void *p) {
      delete ((::TMVA::PDEFoamEvent*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamEvent(void *p) {
      delete [] ((::TMVA::PDEFoamEvent*)p);
   }
   static void destruct_TMVAcLcLPDEFoamEvent(void *p) {
      typedef ::TMVA::PDEFoamEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamEvent

namespace TMVA {
//______________________________________________________________________________
void PDEFoamTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamTarget.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamTarget::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamTarget::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamTarget(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamTarget : new ::TMVA::PDEFoamTarget;
   }
   static void *newArray_TMVAcLcLPDEFoamTarget(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamTarget[nElements] : new ::TMVA::PDEFoamTarget[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamTarget(void *p) {
      delete ((::TMVA::PDEFoamTarget*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamTarget(void *p) {
      delete [] ((::TMVA::PDEFoamTarget*)p);
   }
   static void destruct_TMVAcLcLPDEFoamTarget(void *p) {
      typedef ::TMVA::PDEFoamTarget current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamTarget

namespace TMVA {
//______________________________________________________________________________
void PDEFoamMultiTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamMultiTarget.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamMultiTarget::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamMultiTarget::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamMultiTarget(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamMultiTarget : new ::TMVA::PDEFoamMultiTarget;
   }
   static void *newArray_TMVAcLcLPDEFoamMultiTarget(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamMultiTarget[nElements] : new ::TMVA::PDEFoamMultiTarget[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamMultiTarget(void *p) {
      delete ((::TMVA::PDEFoamMultiTarget*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamMultiTarget(void *p) {
      delete [] ((::TMVA::PDEFoamMultiTarget*)p);
   }
   static void destruct_TMVAcLcLPDEFoamMultiTarget(void *p) {
      typedef ::TMVA::PDEFoamMultiTarget current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamMultiTarget

namespace TMVA {
//______________________________________________________________________________
void PDEFoamTargetDensity::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamTargetDensity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamTargetDensity::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamTargetDensity::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamTargetDensity(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamTargetDensity : new ::TMVA::PDEFoamTargetDensity;
   }
   static void *newArray_TMVAcLcLPDEFoamTargetDensity(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamTargetDensity[nElements] : new ::TMVA::PDEFoamTargetDensity[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamTargetDensity(void *p) {
      delete ((::TMVA::PDEFoamTargetDensity*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamTargetDensity(void *p) {
      delete [] ((::TMVA::PDEFoamTargetDensity*)p);
   }
   static void destruct_TMVAcLcLPDEFoamTargetDensity(void *p) {
      typedef ::TMVA::PDEFoamTargetDensity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamTargetDensity

namespace TMVA {
//______________________________________________________________________________
void PDEFoamEventDensity::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamEventDensity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamEventDensity::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamEventDensity::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamEventDensity(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamEventDensity : new ::TMVA::PDEFoamEventDensity;
   }
   static void *newArray_TMVAcLcLPDEFoamEventDensity(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamEventDensity[nElements] : new ::TMVA::PDEFoamEventDensity[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamEventDensity(void *p) {
      delete ((::TMVA::PDEFoamEventDensity*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamEventDensity(void *p) {
      delete [] ((::TMVA::PDEFoamEventDensity*)p);
   }
   static void destruct_TMVAcLcLPDEFoamEventDensity(void *p) {
      typedef ::TMVA::PDEFoamEventDensity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamEventDensity

namespace TMVA {
//______________________________________________________________________________
void PDEFoamDiscriminantDensity::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamDiscriminantDensity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamDiscriminantDensity::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamDiscriminantDensity::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamDiscriminantDensity(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamDiscriminantDensity : new ::TMVA::PDEFoamDiscriminantDensity;
   }
   static void *newArray_TMVAcLcLPDEFoamDiscriminantDensity(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamDiscriminantDensity[nElements] : new ::TMVA::PDEFoamDiscriminantDensity[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamDiscriminantDensity(void *p) {
      delete ((::TMVA::PDEFoamDiscriminantDensity*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamDiscriminantDensity(void *p) {
      delete [] ((::TMVA::PDEFoamDiscriminantDensity*)p);
   }
   static void destruct_TMVAcLcLPDEFoamDiscriminantDensity(void *p) {
      typedef ::TMVA::PDEFoamDiscriminantDensity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamDiscriminantDensity

namespace TMVA {
//______________________________________________________________________________
void PDEFoamDecisionTreeDensity::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamDecisionTreeDensity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamDecisionTreeDensity::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamDecisionTreeDensity::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamDecisionTreeDensity(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamDecisionTreeDensity : new ::TMVA::PDEFoamDecisionTreeDensity;
   }
   static void *newArray_TMVAcLcLPDEFoamDecisionTreeDensity(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamDecisionTreeDensity[nElements] : new ::TMVA::PDEFoamDecisionTreeDensity[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamDecisionTreeDensity(void *p) {
      delete ((::TMVA::PDEFoamDecisionTreeDensity*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamDecisionTreeDensity(void *p) {
      delete [] ((::TMVA::PDEFoamDecisionTreeDensity*)p);
   }
   static void destruct_TMVAcLcLPDEFoamDecisionTreeDensity(void *p) {
      typedef ::TMVA::PDEFoamDecisionTreeDensity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamDecisionTreeDensity

namespace TMVA {
//______________________________________________________________________________
void PDEFoamKernelBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamKernelBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamKernelBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamKernelBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamKernelBase(void *p) {
      delete ((::TMVA::PDEFoamKernelBase*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamKernelBase(void *p) {
      delete [] ((::TMVA::PDEFoamKernelBase*)p);
   }
   static void destruct_TMVAcLcLPDEFoamKernelBase(void *p) {
      typedef ::TMVA::PDEFoamKernelBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamKernelBase

namespace TMVA {
//______________________________________________________________________________
void PDEFoamKernelTrivial::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamKernelTrivial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamKernelTrivial::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamKernelTrivial::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamKernelTrivial(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamKernelTrivial : new ::TMVA::PDEFoamKernelTrivial;
   }
   static void *newArray_TMVAcLcLPDEFoamKernelTrivial(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamKernelTrivial[nElements] : new ::TMVA::PDEFoamKernelTrivial[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamKernelTrivial(void *p) {
      delete ((::TMVA::PDEFoamKernelTrivial*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamKernelTrivial(void *p) {
      delete [] ((::TMVA::PDEFoamKernelTrivial*)p);
   }
   static void destruct_TMVAcLcLPDEFoamKernelTrivial(void *p) {
      typedef ::TMVA::PDEFoamKernelTrivial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamKernelTrivial

namespace TMVA {
//______________________________________________________________________________
void PDEFoamKernelLinN::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamKernelLinN.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamKernelLinN::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamKernelLinN::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLPDEFoamKernelLinN(void *p) {
      return  p ? new(p) ::TMVA::PDEFoamKernelLinN : new ::TMVA::PDEFoamKernelLinN;
   }
   static void *newArray_TMVAcLcLPDEFoamKernelLinN(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::PDEFoamKernelLinN[nElements] : new ::TMVA::PDEFoamKernelLinN[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamKernelLinN(void *p) {
      delete ((::TMVA::PDEFoamKernelLinN*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamKernelLinN(void *p) {
      delete [] ((::TMVA::PDEFoamKernelLinN*)p);
   }
   static void destruct_TMVAcLcLPDEFoamKernelLinN(void *p) {
      typedef ::TMVA::PDEFoamKernelLinN current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamKernelLinN

namespace TMVA {
//______________________________________________________________________________
void PDEFoamKernelGauss::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PDEFoamKernelGauss.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PDEFoamKernelGauss::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PDEFoamKernelGauss::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLPDEFoamKernelGauss(void *p) {
      delete ((::TMVA::PDEFoamKernelGauss*)p);
   }
   static void deleteArray_TMVAcLcLPDEFoamKernelGauss(void *p) {
      delete [] ((::TMVA::PDEFoamKernelGauss*)p);
   }
   static void destruct_TMVAcLcLPDEFoamKernelGauss(void *p) {
      typedef ::TMVA::PDEFoamKernelGauss current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PDEFoamKernelGauss

namespace TMVA {
//______________________________________________________________________________
void MethodPDEFoam::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodPDEFoam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodPDEFoam::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodPDEFoam::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodPDEFoam(void *p) {
      delete ((::TMVA::MethodPDEFoam*)p);
   }
   static void deleteArray_TMVAcLcLMethodPDEFoam(void *p) {
      delete [] ((::TMVA::MethodPDEFoam*)p);
   }
   static void destruct_TMVAcLcLMethodPDEFoam(void *p) {
      typedef ::TMVA::MethodPDEFoam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodPDEFoam

namespace TMVA {
//______________________________________________________________________________
void MethodLD::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodLD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodLD::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodLD::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodLD(void *p) {
      delete ((::TMVA::MethodLD*)p);
   }
   static void deleteArray_TMVAcLcLMethodLD(void *p) {
      delete [] ((::TMVA::MethodLD*)p);
   }
   static void destruct_TMVAcLcLMethodLD(void *p) {
      typedef ::TMVA::MethodLD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodLD

namespace TMVA {
//______________________________________________________________________________
void MethodCategory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodCategory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodCategory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodCategory::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodCategory(void *p) {
      delete ((::TMVA::MethodCategory*)p);
   }
   static void deleteArray_TMVAcLcLMethodCategory(void *p) {
      delete [] ((::TMVA::MethodCategory*)p);
   }
   static void destruct_TMVAcLcLMethodCategory(void *p) {
      typedef ::TMVA::MethodCategory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodCategory

namespace TMVA {
//______________________________________________________________________________
void VariableTransformBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::VariableTransformBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::VariableTransformBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::VariableTransformBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLVariableTransformBase(void *p) {
      delete ((::TMVA::VariableTransformBase*)p);
   }
   static void deleteArray_TMVAcLcLVariableTransformBase(void *p) {
      delete [] ((::TMVA::VariableTransformBase*)p);
   }
   static void destruct_TMVAcLcLVariableTransformBase(void *p) {
      typedef ::TMVA::VariableTransformBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::VariableTransformBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLTools(void *p) {
      delete ((::TMVA::Tools*)p);
   }
   static void deleteArray_TMVAcLcLTools(void *p) {
      delete [] ((::TMVA::Tools*)p);
   }
   static void destruct_TMVAcLcLTools(void *p) {
      typedef ::TMVA::Tools current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Tools

namespace TMVA {
//______________________________________________________________________________
void MethodDNN::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodDNN.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodDNN::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodDNN::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodDNN(void *p) {
      delete ((::TMVA::MethodDNN*)p);
   }
   static void deleteArray_TMVAcLcLMethodDNN(void *p) {
      delete [] ((::TMVA::MethodDNN*)p);
   }
   static void destruct_TMVAcLcLMethodDNN(void *p) {
      typedef ::TMVA::MethodDNN current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodDNN

namespace TMVA {
//______________________________________________________________________________
void TSpline2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TSpline2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TSpline2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TSpline2::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLTSpline2(void *p) {
      delete ((::TMVA::TSpline2*)p);
   }
   static void deleteArray_TMVAcLcLTSpline2(void *p) {
      delete [] ((::TMVA::TSpline2*)p);
   }
   static void destruct_TMVAcLcLTSpline2(void *p) {
      typedef ::TMVA::TSpline2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TSpline2

namespace TMVA {
//______________________________________________________________________________
void TSpline1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TSpline1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TSpline1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TSpline1::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLTSpline1(void *p) {
      delete ((::TMVA::TSpline1*)p);
   }
   static void deleteArray_TMVAcLcLTSpline1(void *p) {
      delete [] ((::TMVA::TSpline1*)p);
   }
   static void destruct_TMVAcLcLTSpline1(void *p) {
      typedef ::TMVA::TSpline1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TSpline1

namespace TMVA {
//______________________________________________________________________________
void RootFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::RootFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::RootFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::RootFinder::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLRootFinder(void *p) {
      delete ((::TMVA::RootFinder*)p);
   }
   static void deleteArray_TMVAcLcLRootFinder(void *p) {
      delete [] ((::TMVA::RootFinder*)p);
   }
   static void destruct_TMVAcLcLRootFinder(void *p) {
      typedef ::TMVA::RootFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::RootFinder

namespace TMVA {
//______________________________________________________________________________
void CrossEntropy::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::CrossEntropy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::CrossEntropy::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::CrossEntropy::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLCrossEntropy(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::CrossEntropy : new ::TMVA::CrossEntropy;
   }
   static void *newArray_TMVAcLcLCrossEntropy(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::CrossEntropy[nElements] : new ::TMVA::CrossEntropy[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLCrossEntropy(void *p) {
      delete ((::TMVA::CrossEntropy*)p);
   }
   static void deleteArray_TMVAcLcLCrossEntropy(void *p) {
      delete [] ((::TMVA::CrossEntropy*)p);
   }
   static void destruct_TMVAcLcLCrossEntropy(void *p) {
      typedef ::TMVA::CrossEntropy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::CrossEntropy

namespace TMVA {
//______________________________________________________________________________
void MisClassificationError::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MisClassificationError.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MisClassificationError::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MisClassificationError::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLMisClassificationError(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::MisClassificationError : new ::TMVA::MisClassificationError;
   }
   static void *newArray_TMVAcLcLMisClassificationError(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::MisClassificationError[nElements] : new ::TMVA::MisClassificationError[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLMisClassificationError(void *p) {
      delete ((::TMVA::MisClassificationError*)p);
   }
   static void deleteArray_TMVAcLcLMisClassificationError(void *p) {
      delete [] ((::TMVA::MisClassificationError*)p);
   }
   static void destruct_TMVAcLcLMisClassificationError(void *p) {
      typedef ::TMVA::MisClassificationError current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MisClassificationError

namespace TMVA {
//______________________________________________________________________________
void SdivSqrtSplusB::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::SdivSqrtSplusB.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::SdivSqrtSplusB::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::SdivSqrtSplusB::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLSdivSqrtSplusB(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::SdivSqrtSplusB : new ::TMVA::SdivSqrtSplusB;
   }
   static void *newArray_TMVAcLcLSdivSqrtSplusB(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::SdivSqrtSplusB[nElements] : new ::TMVA::SdivSqrtSplusB[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLSdivSqrtSplusB(void *p) {
      delete ((::TMVA::SdivSqrtSplusB*)p);
   }
   static void deleteArray_TMVAcLcLSdivSqrtSplusB(void *p) {
      delete [] ((::TMVA::SdivSqrtSplusB*)p);
   }
   static void destruct_TMVAcLcLSdivSqrtSplusB(void *p) {
      typedef ::TMVA::SdivSqrtSplusB current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::SdivSqrtSplusB

namespace TMVA {
//______________________________________________________________________________
void TreeInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TreeInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TreeInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TreeInfo::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTreeInfo(void *p) {
      return  p ? new(p) ::TMVA::TreeInfo : new ::TMVA::TreeInfo;
   }
   static void *newArray_TMVAcLcLTreeInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::TreeInfo[nElements] : new ::TMVA::TreeInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTreeInfo(void *p) {
      delete ((::TMVA::TreeInfo*)p);
   }
   static void deleteArray_TMVAcLcLTreeInfo(void *p) {
      delete [] ((::TMVA::TreeInfo*)p);
   }
   static void destruct_TMVAcLcLTreeInfo(void *p) {
      typedef ::TMVA::TreeInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TreeInfo

namespace TMVA {
//______________________________________________________________________________
void DataInputHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::DataInputHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::DataInputHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::DataInputHandler::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLDataInputHandler(void *p) {
      return  p ? new(p) ::TMVA::DataInputHandler : new ::TMVA::DataInputHandler;
   }
   static void *newArray_TMVAcLcLDataInputHandler(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::DataInputHandler[nElements] : new ::TMVA::DataInputHandler[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLDataInputHandler(void *p) {
      delete ((::TMVA::DataInputHandler*)p);
   }
   static void deleteArray_TMVAcLcLDataInputHandler(void *p) {
      delete [] ((::TMVA::DataInputHandler*)p);
   }
   static void destruct_TMVAcLcLDataInputHandler(void *p) {
      typedef ::TMVA::DataInputHandler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::DataInputHandler

namespace TMVA {
//______________________________________________________________________________
void DataSetManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::DataSetManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::DataSetManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::DataSetManager::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLDataSetManager(void *p) {
      return  p ? new(p) ::TMVA::DataSetManager : new ::TMVA::DataSetManager;
   }
   static void *newArray_TMVAcLcLDataSetManager(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::DataSetManager[nElements] : new ::TMVA::DataSetManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLDataSetManager(void *p) {
      delete ((::TMVA::DataSetManager*)p);
   }
   static void deleteArray_TMVAcLcLDataSetManager(void *p) {
      delete [] ((::TMVA::DataSetManager*)p);
   }
   static void destruct_TMVAcLcLDataSetManager(void *p) {
      typedef ::TMVA::DataSetManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::DataSetManager

namespace TMVA {
//______________________________________________________________________________
void Reader::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Reader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Reader::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Reader::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLReader(void *p) {
      return  p ? new(p) ::TMVA::Reader : new ::TMVA::Reader;
   }
   static void *newArray_TMVAcLcLReader(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::Reader[nElements] : new ::TMVA::Reader[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLReader(void *p) {
      delete ((::TMVA::Reader*)p);
   }
   static void deleteArray_TMVAcLcLReader(void *p) {
      delete [] ((::TMVA::Reader*)p);
   }
   static void destruct_TMVAcLcLReader(void *p) {
      typedef ::TMVA::Reader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Reader

namespace TMVA {
//______________________________________________________________________________
void GeneticGenes::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::GeneticGenes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::GeneticGenes::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::GeneticGenes::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLGeneticGenes(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::GeneticGenes : new ::TMVA::GeneticGenes;
   }
   static void *newArray_TMVAcLcLGeneticGenes(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::GeneticGenes[nElements] : new ::TMVA::GeneticGenes[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLGeneticGenes(void *p) {
      delete ((::TMVA::GeneticGenes*)p);
   }
   static void deleteArray_TMVAcLcLGeneticGenes(void *p) {
      delete [] ((::TMVA::GeneticGenes*)p);
   }
   static void destruct_TMVAcLcLGeneticGenes(void *p) {
      typedef ::TMVA::GeneticGenes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::GeneticGenes

namespace TMVA {
//______________________________________________________________________________
void Interval::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Interval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Interval::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Interval::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLInterval(void *p) {
      delete ((::TMVA::Interval*)p);
   }
   static void deleteArray_TMVAcLcLInterval(void *p) {
      delete [] ((::TMVA::Interval*)p);
   }
   static void destruct_TMVAcLcLInterval(void *p) {
      typedef ::TMVA::Interval current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Interval

namespace TMVA {
//______________________________________________________________________________
void GeneticRange::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::GeneticRange.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::GeneticRange::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::GeneticRange::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLGeneticRange(void *p) {
      delete ((::TMVA::GeneticRange*)p);
   }
   static void deleteArray_TMVAcLcLGeneticRange(void *p) {
      delete [] ((::TMVA::GeneticRange*)p);
   }
   static void destruct_TMVAcLcLGeneticRange(void *p) {
      typedef ::TMVA::GeneticRange current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::GeneticRange

namespace TMVA {
//______________________________________________________________________________
void GeneticPopulation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::GeneticPopulation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::GeneticPopulation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::GeneticPopulation::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLGeneticPopulation(void *p) {
      delete ((::TMVA::GeneticPopulation*)p);
   }
   static void deleteArray_TMVAcLcLGeneticPopulation(void *p) {
      delete [] ((::TMVA::GeneticPopulation*)p);
   }
   static void destruct_TMVAcLcLGeneticPopulation(void *p) {
      typedef ::TMVA::GeneticPopulation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::GeneticPopulation

namespace TMVA {
//______________________________________________________________________________
void GeneticAlgorithm::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::GeneticAlgorithm.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::GeneticAlgorithm::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::GeneticAlgorithm::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLGeneticAlgorithm(void *p) {
      delete ((::TMVA::GeneticAlgorithm*)p);
   }
   static void deleteArray_TMVAcLcLGeneticAlgorithm(void *p) {
      delete [] ((::TMVA::GeneticAlgorithm*)p);
   }
   static void destruct_TMVAcLcLGeneticAlgorithm(void *p) {
      typedef ::TMVA::GeneticAlgorithm current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::GeneticAlgorithm

namespace TMVA {
//______________________________________________________________________________
void GiniIndex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::GiniIndex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::GiniIndex::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::GiniIndex::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLGiniIndex(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::GiniIndex : new ::TMVA::GiniIndex;
   }
   static void *newArray_TMVAcLcLGiniIndex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::GiniIndex[nElements] : new ::TMVA::GiniIndex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLGiniIndex(void *p) {
      delete ((::TMVA::GiniIndex*)p);
   }
   static void deleteArray_TMVAcLcLGiniIndex(void *p) {
      delete [] ((::TMVA::GiniIndex*)p);
   }
   static void destruct_TMVAcLcLGiniIndex(void *p) {
      typedef ::TMVA::GiniIndex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::GiniIndex

namespace TMVA {
//______________________________________________________________________________
void GiniIndexWithLaplace::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::GiniIndexWithLaplace.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::GiniIndexWithLaplace::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::GiniIndexWithLaplace::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLGiniIndexWithLaplace(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::GiniIndexWithLaplace : new ::TMVA::GiniIndexWithLaplace;
   }
   static void *newArray_TMVAcLcLGiniIndexWithLaplace(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::GiniIndexWithLaplace[nElements] : new ::TMVA::GiniIndexWithLaplace[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLGiniIndexWithLaplace(void *p) {
      delete ((::TMVA::GiniIndexWithLaplace*)p);
   }
   static void deleteArray_TMVAcLcLGiniIndexWithLaplace(void *p) {
      delete [] ((::TMVA::GiniIndexWithLaplace*)p);
   }
   static void destruct_TMVAcLcLGiniIndexWithLaplace(void *p) {
      typedef ::TMVA::GiniIndexWithLaplace current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::GiniIndexWithLaplace

namespace TMVA {
//______________________________________________________________________________
void SimulatedAnnealing::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::SimulatedAnnealing.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::SimulatedAnnealing::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::SimulatedAnnealing::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLSimulatedAnnealing(void *p) {
      delete ((::TMVA::SimulatedAnnealing*)p);
   }
   static void deleteArray_TMVAcLcLSimulatedAnnealing(void *p) {
      delete [] ((::TMVA::SimulatedAnnealing*)p);
   }
   static void destruct_TMVAcLcLSimulatedAnnealing(void *p) {
      typedef ::TMVA::SimulatedAnnealing current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::SimulatedAnnealing

namespace TMVA {
//______________________________________________________________________________
void QuickMVAProbEstimator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::QuickMVAProbEstimator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::QuickMVAProbEstimator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::QuickMVAProbEstimator::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLQuickMVAProbEstimator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::QuickMVAProbEstimator : new ::TMVA::QuickMVAProbEstimator;
   }
   static void *newArray_TMVAcLcLQuickMVAProbEstimator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::QuickMVAProbEstimator[nElements] : new ::TMVA::QuickMVAProbEstimator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLQuickMVAProbEstimator(void *p) {
      delete ((::TMVA::QuickMVAProbEstimator*)p);
   }
   static void deleteArray_TMVAcLcLQuickMVAProbEstimator(void *p) {
      delete [] ((::TMVA::QuickMVAProbEstimator*)p);
   }
   static void destruct_TMVAcLcLQuickMVAProbEstimator(void *p) {
      typedef ::TMVA::QuickMVAProbEstimator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::QuickMVAProbEstimator

namespace TMVA {
//______________________________________________________________________________
void Config::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Config.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Config::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Config::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
} // end of namespace ROOT for class ::TMVA::Config

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLConfigcLcLVariablePlotting(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::Config::VariablePlotting : new ::TMVA::Config::VariablePlotting;
   }
   static void *newArray_TMVAcLcLConfigcLcLVariablePlotting(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::Config::VariablePlotting[nElements] : new ::TMVA::Config::VariablePlotting[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLConfigcLcLVariablePlotting(void *p) {
      delete ((::TMVA::Config::VariablePlotting*)p);
   }
   static void deleteArray_TMVAcLcLConfigcLcLVariablePlotting(void *p) {
      delete [] ((::TMVA::Config::VariablePlotting*)p);
   }
   static void destruct_TMVAcLcLConfigcLcLVariablePlotting(void *p) {
      typedef ::TMVA::Config::VariablePlotting current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Config::VariablePlotting

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLConfigcLcLIONames(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::Config::IONames : new ::TMVA::Config::IONames;
   }
   static void *newArray_TMVAcLcLConfigcLcLIONames(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::Config::IONames[nElements] : new ::TMVA::Config::IONames[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLConfigcLcLIONames(void *p) {
      delete ((::TMVA::Config::IONames*)p);
   }
   static void deleteArray_TMVAcLcLConfigcLcLIONames(void *p) {
      delete [] ((::TMVA::Config::IONames*)p);
   }
   static void destruct_TMVAcLcLConfigcLcLIONames(void *p) {
      typedef ::TMVA::Config::IONames current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Config::IONames

namespace TMVA {
//______________________________________________________________________________
void LogInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::LogInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::LogInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::LogInterval::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLLogInterval(void *p) {
      delete ((::TMVA::LogInterval*)p);
   }
   static void deleteArray_TMVAcLcLLogInterval(void *p) {
      delete [] ((::TMVA::LogInterval*)p);
   }
   static void destruct_TMVAcLcLLogInterval(void *p) {
      typedef ::TMVA::LogInterval current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::LogInterval

namespace TMVA {
//______________________________________________________________________________
void FitterBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::FitterBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::FitterBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::FitterBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLFitterBase(void *p) {
      delete ((::TMVA::FitterBase*)p);
   }
   static void deleteArray_TMVAcLcLFitterBase(void *p) {
      delete [] ((::TMVA::FitterBase*)p);
   }
   static void destruct_TMVAcLcLFitterBase(void *p) {
      typedef ::TMVA::FitterBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::FitterBase

namespace TMVA {
//______________________________________________________________________________
void MCFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MCFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MCFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MCFitter::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMCFitter(void *p) {
      delete ((::TMVA::MCFitter*)p);
   }
   static void deleteArray_TMVAcLcLMCFitter(void *p) {
      delete [] ((::TMVA::MCFitter*)p);
   }
   static void destruct_TMVAcLcLMCFitter(void *p) {
      typedef ::TMVA::MCFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MCFitter

namespace TMVA {
//______________________________________________________________________________
void GeneticFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::GeneticFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::GeneticFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::GeneticFitter::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLGeneticFitter(void *p) {
      delete ((::TMVA::GeneticFitter*)p);
   }
   static void deleteArray_TMVAcLcLGeneticFitter(void *p) {
      delete [] ((::TMVA::GeneticFitter*)p);
   }
   static void destruct_TMVAcLcLGeneticFitter(void *p) {
      typedef ::TMVA::GeneticFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::GeneticFitter

namespace TMVA {
//______________________________________________________________________________
void SimulatedAnnealingFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::SimulatedAnnealingFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::SimulatedAnnealingFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::SimulatedAnnealingFitter::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLSimulatedAnnealingFitter(void *p) {
      delete ((::TMVA::SimulatedAnnealingFitter*)p);
   }
   static void deleteArray_TMVAcLcLSimulatedAnnealingFitter(void *p) {
      delete [] ((::TMVA::SimulatedAnnealingFitter*)p);
   }
   static void destruct_TMVAcLcLSimulatedAnnealingFitter(void *p) {
      typedef ::TMVA::SimulatedAnnealingFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::SimulatedAnnealingFitter

namespace TMVA {
//______________________________________________________________________________
void MinuitFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MinuitFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MinuitFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MinuitFitter::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMinuitFitter(void *p) {
      delete ((::TMVA::MinuitFitter*)p);
   }
   static void deleteArray_TMVAcLcLMinuitFitter(void *p) {
      delete [] ((::TMVA::MinuitFitter*)p);
   }
   static void destruct_TMVAcLcLMinuitFitter(void *p) {
      typedef ::TMVA::MinuitFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MinuitFitter

namespace TMVA {
//______________________________________________________________________________
void MinuitWrapper::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MinuitWrapper.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MinuitWrapper::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MinuitWrapper::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMinuitWrapper(void *p) {
      delete ((::TMVA::MinuitWrapper*)p);
   }
   static void deleteArray_TMVAcLcLMinuitWrapper(void *p) {
      delete [] ((::TMVA::MinuitWrapper*)p);
   }
   static void destruct_TMVAcLcLMinuitWrapper(void *p) {
      typedef ::TMVA::MinuitWrapper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MinuitWrapper

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLBDTEventWrapper(void *p) {
      delete ((::TMVA::BDTEventWrapper*)p);
   }
   static void deleteArray_TMVAcLcLBDTEventWrapper(void *p) {
      delete [] ((::TMVA::BDTEventWrapper*)p);
   }
   static void destruct_TMVAcLcLBDTEventWrapper(void *p) {
      typedef ::TMVA::BDTEventWrapper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::BDTEventWrapper

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLCCTreeWrapper(void *p) {
      delete ((::TMVA::CCTreeWrapper*)p);
   }
   static void deleteArray_TMVAcLcLCCTreeWrapper(void *p) {
      delete [] ((::TMVA::CCTreeWrapper*)p);
   }
   static void destruct_TMVAcLcLCCTreeWrapper(void *p) {
      typedef ::TMVA::CCTreeWrapper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::CCTreeWrapper

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLCCPruner(void *p) {
      delete ((::TMVA::CCPruner*)p);
   }
   static void deleteArray_TMVAcLcLCCPruner(void *p) {
      delete [] ((::TMVA::CCPruner*)p);
   }
   static void destruct_TMVAcLcLCCPruner(void *p) {
      typedef ::TMVA::CCPruner current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::CCPruner

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLCostComplexityPruneTool(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::CostComplexityPruneTool : new ::TMVA::CostComplexityPruneTool;
   }
   static void *newArray_TMVAcLcLCostComplexityPruneTool(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::CostComplexityPruneTool[nElements] : new ::TMVA::CostComplexityPruneTool[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLCostComplexityPruneTool(void *p) {
      delete ((::TMVA::CostComplexityPruneTool*)p);
   }
   static void deleteArray_TMVAcLcLCostComplexityPruneTool(void *p) {
      delete [] ((::TMVA::CostComplexityPruneTool*)p);
   }
   static void destruct_TMVAcLcLCostComplexityPruneTool(void *p) {
      typedef ::TMVA::CostComplexityPruneTool current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::CostComplexityPruneTool

namespace TMVA {
//______________________________________________________________________________
void SVEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::SVEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::SVEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::SVEvent::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLSVEvent(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::SVEvent : new ::TMVA::SVEvent;
   }
   static void *newArray_TMVAcLcLSVEvent(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::SVEvent[nElements] : new ::TMVA::SVEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLSVEvent(void *p) {
      delete ((::TMVA::SVEvent*)p);
   }
   static void deleteArray_TMVAcLcLSVEvent(void *p) {
      delete [] ((::TMVA::SVEvent*)p);
   }
   static void destruct_TMVAcLcLSVEvent(void *p) {
      typedef ::TMVA::SVEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::SVEvent

namespace TMVA {
//______________________________________________________________________________
void OptimizeConfigParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::OptimizeConfigParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::OptimizeConfigParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::OptimizeConfigParameters::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLOptimizeConfigParameters(void *p) {
      delete ((::TMVA::OptimizeConfigParameters*)p);
   }
   static void deleteArray_TMVAcLcLOptimizeConfigParameters(void *p) {
      delete [] ((::TMVA::OptimizeConfigParameters*)p);
   }
   static void destruct_TMVAcLcLOptimizeConfigParameters(void *p) {
      typedef ::TMVA::OptimizeConfigParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::OptimizeConfigParameters

namespace TMVA {
//______________________________________________________________________________
void TActivationChooser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TActivationChooser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TActivationChooser::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TActivationChooser::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTActivationChooser(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationChooser : new ::TMVA::TActivationChooser;
   }
   static void *newArray_TMVAcLcLTActivationChooser(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationChooser[nElements] : new ::TMVA::TActivationChooser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTActivationChooser(void *p) {
      delete ((::TMVA::TActivationChooser*)p);
   }
   static void deleteArray_TMVAcLcLTActivationChooser(void *p) {
      delete [] ((::TMVA::TActivationChooser*)p);
   }
   static void destruct_TMVAcLcLTActivationChooser(void *p) {
      typedef ::TMVA::TActivationChooser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TActivationChooser

namespace TMVA {
//______________________________________________________________________________
void TActivationSigmoid::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TActivationSigmoid.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TActivationSigmoid::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TActivationSigmoid::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTActivationSigmoid(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationSigmoid : new ::TMVA::TActivationSigmoid;
   }
   static void *newArray_TMVAcLcLTActivationSigmoid(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationSigmoid[nElements] : new ::TMVA::TActivationSigmoid[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTActivationSigmoid(void *p) {
      delete ((::TMVA::TActivationSigmoid*)p);
   }
   static void deleteArray_TMVAcLcLTActivationSigmoid(void *p) {
      delete [] ((::TMVA::TActivationSigmoid*)p);
   }
   static void destruct_TMVAcLcLTActivationSigmoid(void *p) {
      typedef ::TMVA::TActivationSigmoid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TActivationSigmoid

namespace TMVA {
//______________________________________________________________________________
void TActivationIdentity::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TActivationIdentity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TActivationIdentity::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TActivationIdentity::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTActivationIdentity(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationIdentity : new ::TMVA::TActivationIdentity;
   }
   static void *newArray_TMVAcLcLTActivationIdentity(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationIdentity[nElements] : new ::TMVA::TActivationIdentity[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTActivationIdentity(void *p) {
      delete ((::TMVA::TActivationIdentity*)p);
   }
   static void deleteArray_TMVAcLcLTActivationIdentity(void *p) {
      delete [] ((::TMVA::TActivationIdentity*)p);
   }
   static void destruct_TMVAcLcLTActivationIdentity(void *p) {
      typedef ::TMVA::TActivationIdentity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TActivationIdentity

namespace TMVA {
//______________________________________________________________________________
void TActivationTanh::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TActivationTanh.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TActivationTanh::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TActivationTanh::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTActivationTanh(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationTanh : new ::TMVA::TActivationTanh;
   }
   static void *newArray_TMVAcLcLTActivationTanh(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationTanh[nElements] : new ::TMVA::TActivationTanh[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTActivationTanh(void *p) {
      delete ((::TMVA::TActivationTanh*)p);
   }
   static void deleteArray_TMVAcLcLTActivationTanh(void *p) {
      delete [] ((::TMVA::TActivationTanh*)p);
   }
   static void destruct_TMVAcLcLTActivationTanh(void *p) {
      typedef ::TMVA::TActivationTanh current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TActivationTanh

namespace TMVA {
//______________________________________________________________________________
void TActivationRadial::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TActivationRadial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TActivationRadial::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TActivationRadial::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTActivationRadial(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationRadial : new ::TMVA::TActivationRadial;
   }
   static void *newArray_TMVAcLcLTActivationRadial(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationRadial[nElements] : new ::TMVA::TActivationRadial[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTActivationRadial(void *p) {
      delete ((::TMVA::TActivationRadial*)p);
   }
   static void deleteArray_TMVAcLcLTActivationRadial(void *p) {
      delete [] ((::TMVA::TActivationRadial*)p);
   }
   static void destruct_TMVAcLcLTActivationRadial(void *p) {
      typedef ::TMVA::TActivationRadial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TActivationRadial

namespace TMVA {
//______________________________________________________________________________
void TActivationReLU::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TActivationReLU.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TActivationReLU::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TActivationReLU::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTActivationReLU(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationReLU : new ::TMVA::TActivationReLU;
   }
   static void *newArray_TMVAcLcLTActivationReLU(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TActivationReLU[nElements] : new ::TMVA::TActivationReLU[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTActivationReLU(void *p) {
      delete ((::TMVA::TActivationReLU*)p);
   }
   static void deleteArray_TMVAcLcLTActivationReLU(void *p) {
      delete [] ((::TMVA::TActivationReLU*)p);
   }
   static void destruct_TMVAcLcLTActivationReLU(void *p) {
      typedef ::TMVA::TActivationReLU current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TActivationReLU

namespace TMVA {
//______________________________________________________________________________
void TNeuronInputSum::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TNeuronInputSum.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TNeuronInputSum::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TNeuronInputSum::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTNeuronInputSum(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TNeuronInputSum : new ::TMVA::TNeuronInputSum;
   }
   static void *newArray_TMVAcLcLTNeuronInputSum(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TNeuronInputSum[nElements] : new ::TMVA::TNeuronInputSum[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTNeuronInputSum(void *p) {
      delete ((::TMVA::TNeuronInputSum*)p);
   }
   static void deleteArray_TMVAcLcLTNeuronInputSum(void *p) {
      delete [] ((::TMVA::TNeuronInputSum*)p);
   }
   static void destruct_TMVAcLcLTNeuronInputSum(void *p) {
      typedef ::TMVA::TNeuronInputSum current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TNeuronInputSum

namespace TMVA {
//______________________________________________________________________________
void TNeuronInputSqSum::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TNeuronInputSqSum.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TNeuronInputSqSum::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TNeuronInputSqSum::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTNeuronInputSqSum(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TNeuronInputSqSum : new ::TMVA::TNeuronInputSqSum;
   }
   static void *newArray_TMVAcLcLTNeuronInputSqSum(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TNeuronInputSqSum[nElements] : new ::TMVA::TNeuronInputSqSum[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTNeuronInputSqSum(void *p) {
      delete ((::TMVA::TNeuronInputSqSum*)p);
   }
   static void deleteArray_TMVAcLcLTNeuronInputSqSum(void *p) {
      delete [] ((::TMVA::TNeuronInputSqSum*)p);
   }
   static void destruct_TMVAcLcLTNeuronInputSqSum(void *p) {
      typedef ::TMVA::TNeuronInputSqSum current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TNeuronInputSqSum

namespace TMVA {
//______________________________________________________________________________
void TNeuronInputAbs::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TNeuronInputAbs.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TNeuronInputAbs::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TNeuronInputAbs::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTNeuronInputAbs(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TNeuronInputAbs : new ::TMVA::TNeuronInputAbs;
   }
   static void *newArray_TMVAcLcLTNeuronInputAbs(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TNeuronInputAbs[nElements] : new ::TMVA::TNeuronInputAbs[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTNeuronInputAbs(void *p) {
      delete ((::TMVA::TNeuronInputAbs*)p);
   }
   static void deleteArray_TMVAcLcLTNeuronInputAbs(void *p) {
      delete [] ((::TMVA::TNeuronInputAbs*)p);
   }
   static void destruct_TMVAcLcLTNeuronInputAbs(void *p) {
      typedef ::TMVA::TNeuronInputAbs current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TNeuronInputAbs

namespace TMVA {
//______________________________________________________________________________
void TNeuronInputChooser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::TNeuronInputChooser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::TNeuronInputChooser::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::TNeuronInputChooser::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTNeuronInputChooser(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TNeuronInputChooser : new ::TMVA::TNeuronInputChooser;
   }
   static void *newArray_TMVAcLcLTNeuronInputChooser(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TNeuronInputChooser[nElements] : new ::TMVA::TNeuronInputChooser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTNeuronInputChooser(void *p) {
      delete ((::TMVA::TNeuronInputChooser*)p);
   }
   static void deleteArray_TMVAcLcLTNeuronInputChooser(void *p) {
      delete [] ((::TMVA::TNeuronInputChooser*)p);
   }
   static void destruct_TMVAcLcLTNeuronInputChooser(void *p) {
      typedef ::TMVA::TNeuronInputChooser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TNeuronInputChooser

namespace TMVA {
//______________________________________________________________________________
void Ranking::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Ranking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Ranking::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Ranking::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLRanking(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::Ranking : new ::TMVA::Ranking;
   }
   static void *newArray_TMVAcLcLRanking(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::Ranking[nElements] : new ::TMVA::Ranking[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLRanking(void *p) {
      delete ((::TMVA::Ranking*)p);
   }
   static void deleteArray_TMVAcLcLRanking(void *p) {
      delete [] ((::TMVA::Ranking*)p);
   }
   static void destruct_TMVAcLcLRanking(void *p) {
      typedef ::TMVA::Ranking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Ranking

namespace TMVA {
//______________________________________________________________________________
void RuleFitAPI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::RuleFitAPI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::RuleFitAPI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::RuleFitAPI::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLRuleFitAPI(void *p) {
      delete ((::TMVA::RuleFitAPI*)p);
   }
   static void deleteArray_TMVAcLcLRuleFitAPI(void *p) {
      delete [] ((::TMVA::RuleFitAPI*)p);
   }
   static void destruct_TMVAcLcLRuleFitAPI(void *p) {
      typedef ::TMVA::RuleFitAPI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::RuleFitAPI

namespace TMVA {
//______________________________________________________________________________
void VariableIdentityTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::VariableIdentityTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::VariableIdentityTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::VariableIdentityTransform::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLVariableIdentityTransform(void *p) {
      delete ((::TMVA::VariableIdentityTransform*)p);
   }
   static void deleteArray_TMVAcLcLVariableIdentityTransform(void *p) {
      delete [] ((::TMVA::VariableIdentityTransform*)p);
   }
   static void destruct_TMVAcLcLVariableIdentityTransform(void *p) {
      typedef ::TMVA::VariableIdentityTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::VariableIdentityTransform

namespace TMVA {
//______________________________________________________________________________
void VariableDecorrTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::VariableDecorrTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::VariableDecorrTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::VariableDecorrTransform::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLVariableDecorrTransform(void *p) {
      delete ((::TMVA::VariableDecorrTransform*)p);
   }
   static void deleteArray_TMVAcLcLVariableDecorrTransform(void *p) {
      delete [] ((::TMVA::VariableDecorrTransform*)p);
   }
   static void destruct_TMVAcLcLVariableDecorrTransform(void *p) {
      typedef ::TMVA::VariableDecorrTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::VariableDecorrTransform

namespace TMVA {
//______________________________________________________________________________
void VariablePCATransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::VariablePCATransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::VariablePCATransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::VariablePCATransform::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLVariablePCATransform(void *p) {
      delete ((::TMVA::VariablePCATransform*)p);
   }
   static void deleteArray_TMVAcLcLVariablePCATransform(void *p) {
      delete [] ((::TMVA::VariablePCATransform*)p);
   }
   static void destruct_TMVAcLcLVariablePCATransform(void *p) {
      typedef ::TMVA::VariablePCATransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::VariablePCATransform

namespace TMVA {
//______________________________________________________________________________
void VariableGaussTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::VariableGaussTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::VariableGaussTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::VariableGaussTransform::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLVariableGaussTransform(void *p) {
      delete ((::TMVA::VariableGaussTransform*)p);
   }
   static void deleteArray_TMVAcLcLVariableGaussTransform(void *p) {
      delete [] ((::TMVA::VariableGaussTransform*)p);
   }
   static void destruct_TMVAcLcLVariableGaussTransform(void *p) {
      typedef ::TMVA::VariableGaussTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::VariableGaussTransform

namespace TMVA {
//______________________________________________________________________________
void VariableNormalizeTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::VariableNormalizeTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::VariableNormalizeTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::VariableNormalizeTransform::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLVariableNormalizeTransform(void *p) {
      delete ((::TMVA::VariableNormalizeTransform*)p);
   }
   static void deleteArray_TMVAcLcLVariableNormalizeTransform(void *p) {
      delete [] ((::TMVA::VariableNormalizeTransform*)p);
   }
   static void destruct_TMVAcLcLVariableNormalizeTransform(void *p) {
      typedef ::TMVA::VariableNormalizeTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::VariableNormalizeTransform

namespace TMVA {
//______________________________________________________________________________
void VariableRearrangeTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::VariableRearrangeTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::VariableRearrangeTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::VariableRearrangeTransform::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLVariableRearrangeTransform(void *p) {
      delete ((::TMVA::VariableRearrangeTransform*)p);
   }
   static void deleteArray_TMVAcLcLVariableRearrangeTransform(void *p) {
      delete [] ((::TMVA::VariableRearrangeTransform*)p);
   }
   static void destruct_TMVAcLcLVariableRearrangeTransform(void *p) {
      typedef ::TMVA::VariableRearrangeTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::VariableRearrangeTransform

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLROCCalc(void *p) {
      delete ((::TMVA::ROCCalc*)p);
   }
   static void deleteArray_TMVAcLcLROCCalc(void *p) {
      delete [] ((::TMVA::ROCCalc*)p);
   }
   static void destruct_TMVAcLcLROCCalc(void *p) {
      typedef ::TMVA::ROCCalc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::ROCCalc

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLROCCurve(void *p) {
      delete ((::TMVA::ROCCurve*)p);
   }
   static void deleteArray_TMVAcLcLROCCurve(void *p) {
      delete [] ((::TMVA::ROCCurve*)p);
   }
   static void destruct_TMVAcLcLROCCurve(void *p) {
      typedef ::TMVA::ROCCurve current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::ROCCurve

namespace TMVA {
//______________________________________________________________________________
void OptionMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::OptionMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::OptionMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::OptionMap::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLOptionMap(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::OptionMap : new ::TMVA::OptionMap;
   }
   static void *newArray_TMVAcLcLOptionMap(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::OptionMap[nElements] : new ::TMVA::OptionMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLOptionMap(void *p) {
      delete ((::TMVA::OptionMap*)p);
   }
   static void deleteArray_TMVAcLcLOptionMap(void *p) {
      delete [] ((::TMVA::OptionMap*)p);
   }
   static void destruct_TMVAcLcLOptionMap(void *p) {
      typedef ::TMVA::OptionMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::OptionMap

namespace TMVA {
//______________________________________________________________________________
void DataLoader::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::DataLoader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::DataLoader::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::DataLoader::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLDataLoader(void *p) {
      return  p ? new(p) ::TMVA::DataLoader : new ::TMVA::DataLoader;
   }
   static void *newArray_TMVAcLcLDataLoader(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::DataLoader[nElements] : new ::TMVA::DataLoader[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLDataLoader(void *p) {
      delete ((::TMVA::DataLoader*)p);
   }
   static void deleteArray_TMVAcLcLDataLoader(void *p) {
      delete [] ((::TMVA::DataLoader*)p);
   }
   static void destruct_TMVAcLcLDataLoader(void *p) {
      typedef ::TMVA::DataLoader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::DataLoader

namespace TMVA {
//______________________________________________________________________________
void Envelope::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Envelope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Envelope::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Envelope::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLEnvelope(void *p) {
      delete ((::TMVA::Envelope*)p);
   }
   static void deleteArray_TMVAcLcLEnvelope(void *p) {
      delete [] ((::TMVA::Envelope*)p);
   }
   static void destruct_TMVAcLcLEnvelope(void *p) {
      typedef ::TMVA::Envelope current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Envelope

namespace TMVA {
//______________________________________________________________________________
void VariableImportance::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::VariableImportance.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::VariableImportance::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::VariableImportance::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLVariableImportance(void *p) {
      delete ((::TMVA::VariableImportance*)p);
   }
   static void deleteArray_TMVAcLcLVariableImportance(void *p) {
      delete [] ((::TMVA::VariableImportance*)p);
   }
   static void destruct_TMVAcLcLVariableImportance(void *p) {
      typedef ::TMVA::VariableImportance current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::VariableImportance

namespace TMVA {
//______________________________________________________________________________
void CrossValidation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::CrossValidation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::CrossValidation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::CrossValidation::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLCrossValidation(void *p) {
      delete ((::TMVA::CrossValidation*)p);
   }
   static void deleteArray_TMVAcLcLCrossValidation(void *p) {
      delete [] ((::TMVA::CrossValidation*)p);
   }
   static void destruct_TMVAcLcLCrossValidation(void *p) {
      typedef ::TMVA::CrossValidation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::CrossValidation

namespace TMVA {
//______________________________________________________________________________
void HyperParameterOptimisation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::HyperParameterOptimisation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::HyperParameterOptimisation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::HyperParameterOptimisation::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLHyperParameterOptimisation(void *p) {
      delete ((::TMVA::HyperParameterOptimisation*)p);
   }
   static void deleteArray_TMVAcLcLHyperParameterOptimisation(void *p) {
      delete [] ((::TMVA::HyperParameterOptimisation*)p);
   }
   static void destruct_TMVAcLcLHyperParameterOptimisation(void *p) {
      typedef ::TMVA::HyperParameterOptimisation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::HyperParameterOptimisation

namespace TMVA {
//______________________________________________________________________________
void ResultsClassification::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::ResultsClassification.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::ResultsClassification::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::ResultsClassification::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLResultsClassification(void *p) {
      delete ((::TMVA::ResultsClassification*)p);
   }
   static void deleteArray_TMVAcLcLResultsClassification(void *p) {
      delete [] ((::TMVA::ResultsClassification*)p);
   }
   static void destruct_TMVAcLcLResultsClassification(void *p) {
      typedef ::TMVA::ResultsClassification current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::ResultsClassification

namespace TMVA {
//______________________________________________________________________________
void ResultsRegression::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::ResultsRegression.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::ResultsRegression::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::ResultsRegression::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLResultsRegression(void *p) {
      delete ((::TMVA::ResultsRegression*)p);
   }
   static void deleteArray_TMVAcLcLResultsRegression(void *p) {
      delete [] ((::TMVA::ResultsRegression*)p);
   }
   static void destruct_TMVAcLcLResultsRegression(void *p) {
      typedef ::TMVA::ResultsRegression current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::ResultsRegression

namespace TMVA {
//______________________________________________________________________________
void ResultsMulticlass::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::ResultsMulticlass.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::ResultsMulticlass::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::ResultsMulticlass::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLResultsMulticlass(void *p) {
      delete ((::TMVA::ResultsMulticlass*)p);
   }
   static void deleteArray_TMVAcLcLResultsMulticlass(void *p) {
      delete [] ((::TMVA::ResultsMulticlass*)p);
   }
   static void destruct_TMVAcLcLResultsMulticlass(void *p) {
      typedef ::TMVA::ResultsMulticlass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::ResultsMulticlass

namespace TMVA {
//______________________________________________________________________________
void DataSetFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::DataSetFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::DataSetFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::DataSetFactory::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLDataSetFactory(void *p) {
      return  p ? new(p) ::TMVA::DataSetFactory : new ::TMVA::DataSetFactory;
   }
   static void *newArray_TMVAcLcLDataSetFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::DataSetFactory[nElements] : new ::TMVA::DataSetFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLDataSetFactory(void *p) {
      delete ((::TMVA::DataSetFactory*)p);
   }
   static void deleteArray_TMVAcLcLDataSetFactory(void *p) {
      delete [] ((::TMVA::DataSetFactory*)p);
   }
   static void destruct_TMVAcLcLDataSetFactory(void *p) {
      typedef ::TMVA::DataSetFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::DataSetFactory

namespace ROOT {
   static TClass *vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<pair<float,Long64_t> > >*)
   {
      vector<vector<pair<float,Long64_t> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<pair<float,Long64_t> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<pair<float,Long64_t> > >", -2, "vector", 216,
                  typeid(vector<vector<pair<float,Long64_t> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<pair<float,Long64_t> > >) );
      instance.SetNew(&new_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<pair<float,Long64_t> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<pair<float,Long64_t> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<pair<float,Long64_t> > >*)0x0)->GetClass();
      vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<pair<float,Long64_t> > > : new vector<vector<pair<float,Long64_t> > >;
   }
   static void *newArray_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<pair<float,Long64_t> > >[nElements] : new vector<vector<pair<float,Long64_t> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(void *p) {
      delete ((vector<vector<pair<float,Long64_t> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<pair<float,Long64_t> > >*)p);
   }
   static void destruct_vectorlEvectorlEpairlEfloatcOLong64_tgRsPgRsPgR(void *p) {
      typedef vector<vector<pair<float,Long64_t> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<pair<float,Long64_t> > >

namespace ROOT {
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary();
   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p);
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<float> >*)
   {
      vector<vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<float> >", -2, "vector", 216,
                  typeid(vector<vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<float> >) );
      instance.SetNew(&new_vectorlEvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<float> >*)0x0)->GetClass();
      vectorlEvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> > : new vector<vector<float> >;
   }
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> >[nElements] : new vector<vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete ((vector<vector<float> >*)p);
   }
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete [] ((vector<vector<float> >*)p);
   }
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p) {
      typedef vector<vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<float> >

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
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
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
   static TClass *vectorlEvectorlETMVAcLcLEventmUgRsPgR_Dictionary();
   static void vectorlEvectorlETMVAcLcLEventmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETMVAcLcLEventmUgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlETMVAcLcLEventmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETMVAcLcLEventmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETMVAcLcLEventmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETMVAcLcLEventmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TMVA::Event*> >*)
   {
      vector<vector<TMVA::Event*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TMVA::Event*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TMVA::Event*> >", -2, "vector", 216,
                  typeid(vector<vector<TMVA::Event*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETMVAcLcLEventmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TMVA::Event*> >) );
      instance.SetNew(&new_vectorlEvectorlETMVAcLcLEventmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETMVAcLcLEventmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETMVAcLcLEventmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETMVAcLcLEventmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETMVAcLcLEventmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TMVA::Event*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TMVA::Event*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETMVAcLcLEventmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TMVA::Event*> >*)0x0)->GetClass();
      vectorlEvectorlETMVAcLcLEventmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETMVAcLcLEventmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETMVAcLcLEventmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TMVA::Event*> > : new vector<vector<TMVA::Event*> >;
   }
   static void *newArray_vectorlEvectorlETMVAcLcLEventmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TMVA::Event*> >[nElements] : new vector<vector<TMVA::Event*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETMVAcLcLEventmUgRsPgR(void *p) {
      delete ((vector<vector<TMVA::Event*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETMVAcLcLEventmUgRsPgR(void *p) {
      delete [] ((vector<vector<TMVA::Event*> >*)p);
   }
   static void destruct_vectorlEvectorlETMVAcLcLEventmUgRsPgR(void *p) {
      typedef vector<vector<TMVA::Event*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TMVA::Event*> >

namespace ROOT {
   static TClass *vectorlEvectorlELong64_tgRsPgR_Dictionary();
   static void vectorlEvectorlELong64_tgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlELong64_tgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlELong64_tgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlELong64_tgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlELong64_tgRsPgR(void *p);
   static void destruct_vectorlEvectorlELong64_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<Long64_t> >*)
   {
      vector<vector<Long64_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<Long64_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<Long64_t> >", -2, "vector", 216,
                  typeid(vector<vector<Long64_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlELong64_tgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<Long64_t> >) );
      instance.SetNew(&new_vectorlEvectorlELong64_tgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlELong64_tgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlELong64_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlELong64_tgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlELong64_tgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<Long64_t> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<Long64_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlELong64_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<Long64_t> >*)0x0)->GetClass();
      vectorlEvectorlELong64_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlELong64_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlELong64_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<Long64_t> > : new vector<vector<Long64_t> >;
   }
   static void *newArray_vectorlEvectorlELong64_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<Long64_t> >[nElements] : new vector<vector<Long64_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlELong64_tgRsPgR(void *p) {
      delete ((vector<vector<Long64_t> >*)p);
   }
   static void deleteArray_vectorlEvectorlELong64_tgRsPgR(void *p) {
      delete [] ((vector<vector<Long64_t> >*)p);
   }
   static void destruct_vectorlEvectorlELong64_tgRsPgR(void *p) {
      typedef vector<vector<Long64_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<Long64_t> >

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
   static TClass *vectorlEpairlEfloatcOLong64_tgRsPgR_Dictionary();
   static void vectorlEpairlEfloatcOLong64_tgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEfloatcOLong64_tgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEfloatcOLong64_tgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEfloatcOLong64_tgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEfloatcOLong64_tgRsPgR(void *p);
   static void destruct_vectorlEpairlEfloatcOLong64_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<float,Long64_t> >*)
   {
      vector<pair<float,Long64_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<float,Long64_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<float,Long64_t> >", -2, "vector", 216,
                  typeid(vector<pair<float,Long64_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEfloatcOLong64_tgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<float,Long64_t> >) );
      instance.SetNew(&new_vectorlEpairlEfloatcOLong64_tgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEfloatcOLong64_tgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEfloatcOLong64_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEfloatcOLong64_tgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEfloatcOLong64_tgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<float,Long64_t> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<float,Long64_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEfloatcOLong64_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<float,Long64_t> >*)0x0)->GetClass();
      vectorlEpairlEfloatcOLong64_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEfloatcOLong64_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEfloatcOLong64_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<float,Long64_t> > : new vector<pair<float,Long64_t> >;
   }
   static void *newArray_vectorlEpairlEfloatcOLong64_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<float,Long64_t> >[nElements] : new vector<pair<float,Long64_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEfloatcOLong64_tgRsPgR(void *p) {
      delete ((vector<pair<float,Long64_t> >*)p);
   }
   static void deleteArray_vectorlEpairlEfloatcOLong64_tgRsPgR(void *p) {
      delete [] ((vector<pair<float,Long64_t> >*)p);
   }
   static void destruct_vectorlEpairlEfloatcOLong64_tgRsPgR(void *p) {
      typedef vector<pair<float,Long64_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<float,Long64_t> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 216,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

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
   static TClass *vectorlEchargR_Dictionary();
   static void vectorlEchargR_TClassManip(TClass*);
   static void *new_vectorlEchargR(void *p = 0);
   static void *newArray_vectorlEchargR(Long_t size, void *p);
   static void delete_vectorlEchargR(void *p);
   static void deleteArray_vectorlEchargR(void *p);
   static void destruct_vectorlEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<char>*)
   {
      vector<char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<char>", -2, "vector", 216,
                  typeid(vector<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEchargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<char>) );
      instance.SetNew(&new_vectorlEchargR);
      instance.SetNewArray(&newArray_vectorlEchargR);
      instance.SetDelete(&delete_vectorlEchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEchargR);
      instance.SetDestructor(&destruct_vectorlEchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<char> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<char>*)0x0)->GetClass();
      vectorlEchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<char> : new vector<char>;
   }
   static void *newArray_vectorlEchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<char>[nElements] : new vector<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEchargR(void *p) {
      delete ((vector<char>*)p);
   }
   static void deleteArray_vectorlEchargR(void *p) {
      delete [] ((vector<char>*)p);
   }
   static void destruct_vectorlEchargR(void *p) {
      typedef vector<char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<char>

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = 0);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 543,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)0x0)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *vectorlETTreeFormulamUgR_Dictionary();
   static void vectorlETTreeFormulamUgR_TClassManip(TClass*);
   static void *new_vectorlETTreeFormulamUgR(void *p = 0);
   static void *newArray_vectorlETTreeFormulamUgR(Long_t size, void *p);
   static void delete_vectorlETTreeFormulamUgR(void *p);
   static void deleteArray_vectorlETTreeFormulamUgR(void *p);
   static void destruct_vectorlETTreeFormulamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TTreeFormula*>*)
   {
      vector<TTreeFormula*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TTreeFormula*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TTreeFormula*>", -2, "vector", 216,
                  typeid(vector<TTreeFormula*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETTreeFormulamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TTreeFormula*>) );
      instance.SetNew(&new_vectorlETTreeFormulamUgR);
      instance.SetNewArray(&newArray_vectorlETTreeFormulamUgR);
      instance.SetDelete(&delete_vectorlETTreeFormulamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETTreeFormulamUgR);
      instance.SetDestructor(&destruct_vectorlETTreeFormulamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TTreeFormula*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TTreeFormula*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETTreeFormulamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TTreeFormula*>*)0x0)->GetClass();
      vectorlETTreeFormulamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETTreeFormulamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETTreeFormulamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TTreeFormula*> : new vector<TTreeFormula*>;
   }
   static void *newArray_vectorlETTreeFormulamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TTreeFormula*>[nElements] : new vector<TTreeFormula*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETTreeFormulamUgR(void *p) {
      delete ((vector<TTreeFormula*>*)p);
   }
   static void deleteArray_vectorlETTreeFormulamUgR(void *p) {
      delete [] ((vector<TTreeFormula*>*)p);
   }
   static void destruct_vectorlETTreeFormulamUgR(void *p) {
      typedef vector<TTreeFormula*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TTreeFormula*>

namespace ROOT {
   static TClass *vectorlETTreemUgR_Dictionary();
   static void vectorlETTreemUgR_TClassManip(TClass*);
   static void *new_vectorlETTreemUgR(void *p = 0);
   static void *newArray_vectorlETTreemUgR(Long_t size, void *p);
   static void delete_vectorlETTreemUgR(void *p);
   static void deleteArray_vectorlETTreemUgR(void *p);
   static void destruct_vectorlETTreemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TTree*>*)
   {
      vector<TTree*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TTree*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TTree*>", -2, "vector", 216,
                  typeid(vector<TTree*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETTreemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TTree*>) );
      instance.SetNew(&new_vectorlETTreemUgR);
      instance.SetNewArray(&newArray_vectorlETTreemUgR);
      instance.SetDelete(&delete_vectorlETTreemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETTreemUgR);
      instance.SetDestructor(&destruct_vectorlETTreemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TTree*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TTree*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETTreemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TTree*>*)0x0)->GetClass();
      vectorlETTreemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETTreemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETTreemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TTree*> : new vector<TTree*>;
   }
   static void *newArray_vectorlETTreemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TTree*>[nElements] : new vector<TTree*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETTreemUgR(void *p) {
      delete ((vector<TTree*>*)p);
   }
   static void deleteArray_vectorlETTreemUgR(void *p) {
      delete [] ((vector<TTree*>*)p);
   }
   static void destruct_vectorlETTreemUgR(void *p) {
      typedef vector<TTree*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TTree*>

namespace ROOT {
   static TClass *vectorlETMVAcLcLVariableTransformBasemUgR_Dictionary();
   static void vectorlETMVAcLcLVariableTransformBasemUgR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLVariableTransformBasemUgR(void *p = 0);
   static void *newArray_vectorlETMVAcLcLVariableTransformBasemUgR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLVariableTransformBasemUgR(void *p);
   static void deleteArray_vectorlETMVAcLcLVariableTransformBasemUgR(void *p);
   static void destruct_vectorlETMVAcLcLVariableTransformBasemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::VariableTransformBase*>*)
   {
      vector<TMVA::VariableTransformBase*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::VariableTransformBase*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::VariableTransformBase*>", -2, "vector", 216,
                  typeid(vector<TMVA::VariableTransformBase*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLVariableTransformBasemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::VariableTransformBase*>) );
      instance.SetNew(&new_vectorlETMVAcLcLVariableTransformBasemUgR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLVariableTransformBasemUgR);
      instance.SetDelete(&delete_vectorlETMVAcLcLVariableTransformBasemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLVariableTransformBasemUgR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLVariableTransformBasemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::VariableTransformBase*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TMVA::VariableTransformBase*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLVariableTransformBasemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TMVA::VariableTransformBase*>*)0x0)->GetClass();
      vectorlETMVAcLcLVariableTransformBasemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLVariableTransformBasemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLVariableTransformBasemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::VariableTransformBase*> : new vector<TMVA::VariableTransformBase*>;
   }
   static void *newArray_vectorlETMVAcLcLVariableTransformBasemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::VariableTransformBase*>[nElements] : new vector<TMVA::VariableTransformBase*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLVariableTransformBasemUgR(void *p) {
      delete ((vector<TMVA::VariableTransformBase*>*)p);
   }
   static void deleteArray_vectorlETMVAcLcLVariableTransformBasemUgR(void *p) {
      delete [] ((vector<TMVA::VariableTransformBase*>*)p);
   }
   static void destruct_vectorlETMVAcLcLVariableTransformBasemUgR(void *p) {
      typedef vector<TMVA::VariableTransformBase*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::VariableTransformBase*>

namespace ROOT {
   static TClass *vectorlETMVAcLcLVariableInfogR_Dictionary();
   static void vectorlETMVAcLcLVariableInfogR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLVariableInfogR(void *p = 0);
   static void *newArray_vectorlETMVAcLcLVariableInfogR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLVariableInfogR(void *p);
   static void deleteArray_vectorlETMVAcLcLVariableInfogR(void *p);
   static void destruct_vectorlETMVAcLcLVariableInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::VariableInfo>*)
   {
      vector<TMVA::VariableInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::VariableInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::VariableInfo>", -2, "vector", 216,
                  typeid(vector<TMVA::VariableInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLVariableInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::VariableInfo>) );
      instance.SetNew(&new_vectorlETMVAcLcLVariableInfogR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLVariableInfogR);
      instance.SetDelete(&delete_vectorlETMVAcLcLVariableInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLVariableInfogR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLVariableInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::VariableInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TMVA::VariableInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLVariableInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TMVA::VariableInfo>*)0x0)->GetClass();
      vectorlETMVAcLcLVariableInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLVariableInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLVariableInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::VariableInfo> : new vector<TMVA::VariableInfo>;
   }
   static void *newArray_vectorlETMVAcLcLVariableInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::VariableInfo>[nElements] : new vector<TMVA::VariableInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLVariableInfogR(void *p) {
      delete ((vector<TMVA::VariableInfo>*)p);
   }
   static void deleteArray_vectorlETMVAcLcLVariableInfogR(void *p) {
      delete [] ((vector<TMVA::VariableInfo>*)p);
   }
   static void destruct_vectorlETMVAcLcLVariableInfogR(void *p) {
      typedef vector<TMVA::VariableInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::VariableInfo>

namespace ROOT {
   static TClass *vectorlETMVAcLcLTreeInfogR_Dictionary();
   static void vectorlETMVAcLcLTreeInfogR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLTreeInfogR(void *p = 0);
   static void *newArray_vectorlETMVAcLcLTreeInfogR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLTreeInfogR(void *p);
   static void deleteArray_vectorlETMVAcLcLTreeInfogR(void *p);
   static void destruct_vectorlETMVAcLcLTreeInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::TreeInfo>*)
   {
      vector<TMVA::TreeInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::TreeInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::TreeInfo>", -2, "vector", 216,
                  typeid(vector<TMVA::TreeInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLTreeInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::TreeInfo>) );
      instance.SetNew(&new_vectorlETMVAcLcLTreeInfogR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLTreeInfogR);
      instance.SetDelete(&delete_vectorlETMVAcLcLTreeInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLTreeInfogR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLTreeInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::TreeInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TMVA::TreeInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLTreeInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TMVA::TreeInfo>*)0x0)->GetClass();
      vectorlETMVAcLcLTreeInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLTreeInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLTreeInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::TreeInfo> : new vector<TMVA::TreeInfo>;
   }
   static void *newArray_vectorlETMVAcLcLTreeInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::TreeInfo>[nElements] : new vector<TMVA::TreeInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLTreeInfogR(void *p) {
      delete ((vector<TMVA::TreeInfo>*)p);
   }
   static void deleteArray_vectorlETMVAcLcLTreeInfogR(void *p) {
      delete [] ((vector<TMVA::TreeInfo>*)p);
   }
   static void destruct_vectorlETMVAcLcLTreeInfogR(void *p) {
      typedef vector<TMVA::TreeInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::TreeInfo>

namespace ROOT {
   static TClass *vectorlETMVAcLcLEventmUgR_Dictionary();
   static void vectorlETMVAcLcLEventmUgR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLEventmUgR(void *p = 0);
   static void *newArray_vectorlETMVAcLcLEventmUgR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLEventmUgR(void *p);
   static void deleteArray_vectorlETMVAcLcLEventmUgR(void *p);
   static void destruct_vectorlETMVAcLcLEventmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::Event*>*)
   {
      vector<TMVA::Event*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::Event*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::Event*>", -2, "vector", 216,
                  typeid(vector<TMVA::Event*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLEventmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::Event*>) );
      instance.SetNew(&new_vectorlETMVAcLcLEventmUgR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLEventmUgR);
      instance.SetDelete(&delete_vectorlETMVAcLcLEventmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLEventmUgR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLEventmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::Event*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TMVA::Event*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLEventmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TMVA::Event*>*)0x0)->GetClass();
      vectorlETMVAcLcLEventmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLEventmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLEventmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::Event*> : new vector<TMVA::Event*>;
   }
   static void *newArray_vectorlETMVAcLcLEventmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::Event*>[nElements] : new vector<TMVA::Event*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLEventmUgR(void *p) {
      delete ((vector<TMVA::Event*>*)p);
   }
   static void deleteArray_vectorlETMVAcLcLEventmUgR(void *p) {
      delete [] ((vector<TMVA::Event*>*)p);
   }
   static void destruct_vectorlETMVAcLcLEventmUgR(void *p) {
      typedef vector<TMVA::Event*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::Event*>

namespace ROOT {
   static TClass *vectorlETMVAcLcLClassInfomUgR_Dictionary();
   static void vectorlETMVAcLcLClassInfomUgR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLClassInfomUgR(void *p = 0);
   static void *newArray_vectorlETMVAcLcLClassInfomUgR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLClassInfomUgR(void *p);
   static void deleteArray_vectorlETMVAcLcLClassInfomUgR(void *p);
   static void destruct_vectorlETMVAcLcLClassInfomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::ClassInfo*>*)
   {
      vector<TMVA::ClassInfo*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::ClassInfo*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::ClassInfo*>", -2, "vector", 216,
                  typeid(vector<TMVA::ClassInfo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLClassInfomUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::ClassInfo*>) );
      instance.SetNew(&new_vectorlETMVAcLcLClassInfomUgR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLClassInfomUgR);
      instance.SetDelete(&delete_vectorlETMVAcLcLClassInfomUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLClassInfomUgR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLClassInfomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::ClassInfo*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TMVA::ClassInfo*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLClassInfomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TMVA::ClassInfo*>*)0x0)->GetClass();
      vectorlETMVAcLcLClassInfomUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLClassInfomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLClassInfomUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::ClassInfo*> : new vector<TMVA::ClassInfo*>;
   }
   static void *newArray_vectorlETMVAcLcLClassInfomUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::ClassInfo*>[nElements] : new vector<TMVA::ClassInfo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLClassInfomUgR(void *p) {
      delete ((vector<TMVA::ClassInfo*>*)p);
   }
   static void deleteArray_vectorlETMVAcLcLClassInfomUgR(void *p) {
      delete [] ((vector<TMVA::ClassInfo*>*)p);
   }
   static void destruct_vectorlETMVAcLcLClassInfomUgR(void *p) {
      typedef vector<TMVA::ClassInfo*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::ClassInfo*>

namespace ROOT {
   static TClass *vectorlELong64_tgR_Dictionary();
   static void vectorlELong64_tgR_TClassManip(TClass*);
   static void *new_vectorlELong64_tgR(void *p = 0);
   static void *newArray_vectorlELong64_tgR(Long_t size, void *p);
   static void delete_vectorlELong64_tgR(void *p);
   static void deleteArray_vectorlELong64_tgR(void *p);
   static void destruct_vectorlELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Long64_t>*)
   {
      vector<Long64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Long64_t>", -2, "vector", 216,
                  typeid(vector<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlELong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Long64_t>) );
      instance.SetNew(&new_vectorlELong64_tgR);
      instance.SetNewArray(&newArray_vectorlELong64_tgR);
      instance.SetDelete(&delete_vectorlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlELong64_tgR);
      instance.SetDestructor(&destruct_vectorlELong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Long64_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Long64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Long64_t>*)0x0)->GetClass();
      vectorlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlELong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Long64_t> : new vector<Long64_t>;
   }
   static void *newArray_vectorlELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Long64_t>[nElements] : new vector<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlELong64_tgR(void *p) {
      delete ((vector<Long64_t>*)p);
   }
   static void deleteArray_vectorlELong64_tgR(void *p) {
      delete [] ((vector<Long64_t>*)p);
   }
   static void destruct_vectorlELong64_tgR(void *p) {
      typedef vector<Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Long64_t>

namespace ROOT {
   static TClass *maplEstringcOboolgR_Dictionary();
   static void maplEstringcOboolgR_TClassManip(TClass*);
   static void *new_maplEstringcOboolgR(void *p = 0);
   static void *newArray_maplEstringcOboolgR(Long_t size, void *p);
   static void delete_maplEstringcOboolgR(void *p);
   static void deleteArray_maplEstringcOboolgR(void *p);
   static void destruct_maplEstringcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,bool>*)
   {
      map<string,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,bool>", -2, "map", 99,
                  typeid(map<string,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,bool>) );
      instance.SetNew(&new_maplEstringcOboolgR);
      instance.SetNewArray(&newArray_maplEstringcOboolgR);
      instance.SetDelete(&delete_maplEstringcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOboolgR);
      instance.SetDestructor(&destruct_maplEstringcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,bool>*)0x0)->GetClass();
      maplEstringcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,bool> : new map<string,bool>;
   }
   static void *newArray_maplEstringcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,bool>[nElements] : new map<string,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOboolgR(void *p) {
      delete ((map<string,bool>*)p);
   }
   static void deleteArray_maplEstringcOboolgR(void *p) {
      delete [] ((map<string,bool>*)p);
   }
   static void destruct_maplEstringcOboolgR(void *p) {
      typedef map<string,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,bool>

namespace ROOT {
   static TClass *maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR_Dictionary();
   static void maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR_TClassManip(TClass*);
   static void *new_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(void *p = 0);
   static void *newArray_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(Long_t size, void *p);
   static void delete_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(void *p);
   static void deleteArray_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(void *p);
   static void destruct_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,vector<TMVA::TreeInfo> >*)
   {
      map<TString,vector<TMVA::TreeInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,vector<TMVA::TreeInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,vector<TMVA::TreeInfo> >", -2, "map", 99,
                  typeid(map<TString,vector<TMVA::TreeInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,vector<TMVA::TreeInfo> >) );
      instance.SetNew(&new_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR);
      instance.SetNewArray(&newArray_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR);
      instance.SetDelete(&delete_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR);
      instance.SetDestructor(&destruct_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,vector<TMVA::TreeInfo> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,vector<TMVA::TreeInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,vector<TMVA::TreeInfo> >*)0x0)->GetClass();
      maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,vector<TMVA::TreeInfo> > : new map<TString,vector<TMVA::TreeInfo> >;
   }
   static void *newArray_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,vector<TMVA::TreeInfo> >[nElements] : new map<TString,vector<TMVA::TreeInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(void *p) {
      delete ((map<TString,vector<TMVA::TreeInfo> >*)p);
   }
   static void deleteArray_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(void *p) {
      delete [] ((map<TString,vector<TMVA::TreeInfo> >*)p);
   }
   static void destruct_maplETStringcOvectorlETMVAcLcLTreeInfogRsPgR(void *p) {
      typedef map<TString,vector<TMVA::TreeInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,vector<TMVA::TreeInfo> >

namespace ROOT {
   static TClass *maplETStringcOTStringgR_Dictionary();
   static void maplETStringcOTStringgR_TClassManip(TClass*);
   static void *new_maplETStringcOTStringgR(void *p = 0);
   static void *newArray_maplETStringcOTStringgR(Long_t size, void *p);
   static void delete_maplETStringcOTStringgR(void *p);
   static void deleteArray_maplETStringcOTStringgR(void *p);
   static void destruct_maplETStringcOTStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TString>*)
   {
      map<TString,TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TString>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TString>", -2, "map", 99,
                  typeid(map<TString,TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTStringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TString>) );
      instance.SetNew(&new_maplETStringcOTStringgR);
      instance.SetNewArray(&newArray_maplETStringcOTStringgR);
      instance.SetDelete(&delete_maplETStringcOTStringgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTStringgR);
      instance.SetDestructor(&destruct_maplETStringcOTStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TString>*)0x0)->GetClass();
      maplETStringcOTStringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TString> : new map<TString,TString>;
   }
   static void *newArray_maplETStringcOTStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TString>[nElements] : new map<TString,TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTStringgR(void *p) {
      delete ((map<TString,TString>*)p);
   }
   static void deleteArray_maplETStringcOTStringgR(void *p) {
      delete [] ((map<TString,TString>*)p);
   }
   static void destruct_maplETStringcOTStringgR(void *p) {
      typedef map<TString,TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TString>

namespace ROOT {
   static TClass *maplETStringcOTObjectmUgR_Dictionary();
   static void maplETStringcOTObjectmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTObjectmUgR(void *p = 0);
   static void *newArray_maplETStringcOTObjectmUgR(Long_t size, void *p);
   static void delete_maplETStringcOTObjectmUgR(void *p);
   static void deleteArray_maplETStringcOTObjectmUgR(void *p);
   static void destruct_maplETStringcOTObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TObject*>*)
   {
      map<TString,TObject*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TObject*>", -2, "map", 99,
                  typeid(map<TString,TObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TObject*>) );
      instance.SetNew(&new_maplETStringcOTObjectmUgR);
      instance.SetNewArray(&newArray_maplETStringcOTObjectmUgR);
      instance.SetDelete(&delete_maplETStringcOTObjectmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTObjectmUgR);
      instance.SetDestructor(&destruct_maplETStringcOTObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TObject*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TObject*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TObject*>*)0x0)->GetClass();
      maplETStringcOTObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTObjectmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TObject*> : new map<TString,TObject*>;
   }
   static void *newArray_maplETStringcOTObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TObject*>[nElements] : new map<TString,TObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTObjectmUgR(void *p) {
      delete ((map<TString,TObject*>*)p);
   }
   static void deleteArray_maplETStringcOTObjectmUgR(void *p) {
      delete [] ((map<TString,TObject*>*)p);
   }
   static void destruct_maplETStringcOTObjectmUgR(void *p) {
      typedef map<TString,TObject*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TObject*>

namespace ROOT {
   static TClass *maplETStringcOTMVAcLcLTypescLcLEMVAgR_Dictionary();
   static void maplETStringcOTMVAcLcLTypescLcLEMVAgR_TClassManip(TClass*);
   static void *new_maplETStringcOTMVAcLcLTypescLcLEMVAgR(void *p = 0);
   static void *newArray_maplETStringcOTMVAcLcLTypescLcLEMVAgR(Long_t size, void *p);
   static void delete_maplETStringcOTMVAcLcLTypescLcLEMVAgR(void *p);
   static void deleteArray_maplETStringcOTMVAcLcLTypescLcLEMVAgR(void *p);
   static void destruct_maplETStringcOTMVAcLcLTypescLcLEMVAgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TMVA::Types::EMVA>*)
   {
      map<TString,TMVA::Types::EMVA> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TMVA::Types::EMVA>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TMVA::Types::EMVA>", -2, "map", 99,
                  typeid(map<TString,TMVA::Types::EMVA>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTMVAcLcLTypescLcLEMVAgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TMVA::Types::EMVA>) );
      instance.SetNew(&new_maplETStringcOTMVAcLcLTypescLcLEMVAgR);
      instance.SetNewArray(&newArray_maplETStringcOTMVAcLcLTypescLcLEMVAgR);
      instance.SetDelete(&delete_maplETStringcOTMVAcLcLTypescLcLEMVAgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTMVAcLcLTypescLcLEMVAgR);
      instance.SetDestructor(&destruct_maplETStringcOTMVAcLcLTypescLcLEMVAgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TMVA::Types::EMVA> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TMVA::Types::EMVA>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTMVAcLcLTypescLcLEMVAgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TMVA::Types::EMVA>*)0x0)->GetClass();
      maplETStringcOTMVAcLcLTypescLcLEMVAgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTMVAcLcLTypescLcLEMVAgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTMVAcLcLTypescLcLEMVAgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TMVA::Types::EMVA> : new map<TString,TMVA::Types::EMVA>;
   }
   static void *newArray_maplETStringcOTMVAcLcLTypescLcLEMVAgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TMVA::Types::EMVA>[nElements] : new map<TString,TMVA::Types::EMVA>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTMVAcLcLTypescLcLEMVAgR(void *p) {
      delete ((map<TString,TMVA::Types::EMVA>*)p);
   }
   static void deleteArray_maplETStringcOTMVAcLcLTypescLcLEMVAgR(void *p) {
      delete [] ((map<TString,TMVA::Types::EMVA>*)p);
   }
   static void destruct_maplETStringcOTMVAcLcLTypescLcLEMVAgR(void *p) {
      typedef map<TString,TMVA::Types::EMVA> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TMVA::Types::EMVA>

namespace {
  void TriggerDictionaryInitialization_libTMVA_Impl() {
    static const char* headers[] = {
"TMVA/Configurable.h",
"TMVA/Factory.h",
"TMVA/MethodBase.h",
"TMVA/MethodCompositeBase.h",
"TMVA/MethodANNBase.h",
"TMVA/MethodTMlpANN.h",
"TMVA/MethodRuleFit.h",
"TMVA/MethodCuts.h",
"TMVA/MethodFisher.h",
"TMVA/MethodKNN.h",
"TMVA/MethodCFMlpANN.h",
"TMVA/MethodCFMlpANN_Utils.h",
"TMVA/MethodLikelihood.h",
"TMVA/MethodHMatrix.h",
"TMVA/MethodPDERS.h",
"TMVA/MethodBDT.h",
"TMVA/MethodDT.h",
"TMVA/MethodSVM.h",
"TMVA/MethodBayesClassifier.h",
"TMVA/MethodFDA.h",
"TMVA/MethodMLP.h",
"TMVA/MethodBoost.h",
"TMVA/MethodPDEFoam.h",
"TMVA/MethodLD.h",
"TMVA/MethodCategory.h",
"TMVA/MethodDNN.h",
"TMVA/TSpline2.h",
"TMVA/TSpline1.h",
"TMVA/PDF.h",
"TMVA/BinaryTree.h",
"TMVA/BinarySearchTreeNode.h",
"TMVA/BinarySearchTree.h",
"TMVA/Timer.h",
"TMVA/RootFinder.h",
"TMVA/CrossEntropy.h",
"TMVA/DecisionTree.h",
"TMVA/DecisionTreeNode.h",
"TMVA/MisClassificationError.h",
"TMVA/Node.h",
"TMVA/SdivSqrtSplusB.h",
"TMVA/SeparationBase.h",
"TMVA/RegressionVariance.h",
"TMVA/Tools.h",
"TMVA/Reader.h",
"TMVA/GeneticAlgorithm.h",
"TMVA/GeneticGenes.h",
"TMVA/GeneticPopulation.h",
"TMVA/GeneticRange.h",
"TMVA/GiniIndex.h",
"TMVA/GiniIndexWithLaplace.h",
"TMVA/SimulatedAnnealing.h",
"TMVA/QuickMVAProbEstimator.h",
"TMVA/Config.h",
"TMVA/KDEKernel.h",
"TMVA/Interval.h",
"TMVA/LogInterval.h",
"TMVA/FitterBase.h",
"TMVA/MCFitter.h",
"TMVA/GeneticFitter.h",
"TMVA/SimulatedAnnealingFitter.h",
"TMVA/MinuitFitter.h",
"TMVA/MinuitWrapper.h",
"TMVA/IFitterTarget.h",
"TMVA/PDEFoam.h",
"TMVA/PDEFoamDecisionTree.h",
"TMVA/PDEFoamDensityBase.h",
"TMVA/PDEFoamDiscriminantDensity.h",
"TMVA/PDEFoamEventDensity.h",
"TMVA/PDEFoamTargetDensity.h",
"TMVA/PDEFoamDecisionTreeDensity.h",
"TMVA/PDEFoamMultiTarget.h",
"TMVA/PDEFoamVect.h",
"TMVA/PDEFoamCell.h",
"TMVA/PDEFoamDiscriminant.h",
"TMVA/PDEFoamEvent.h",
"TMVA/PDEFoamTarget.h",
"TMVA/PDEFoamKernelBase.h",
"TMVA/PDEFoamKernelTrivial.h",
"TMVA/PDEFoamKernelLinN.h",
"TMVA/PDEFoamKernelGauss.h",
"TMVA/BDTEventWrapper.h",
"TMVA/CCTreeWrapper.h",
"TMVA/CCPruner.h",
"TMVA/CostComplexityPruneTool.h",
"TMVA/SVEvent.h",
"TMVA/OptimizeConfigParameters.h",
"TMVA/NeuralNet.h",
"TMVA/TNeuron.h",
"TMVA/TSynapse.h",
"TMVA/TActivationChooser.h",
"TMVA/TActivation.h",
"TMVA/TActivationSigmoid.h",
"TMVA/TActivationIdentity.h",
"TMVA/TActivationTanh.h",
"TMVA/TActivationRadial.h",
"TMVA/TActivationReLU.h",
"TMVA/TNeuronInputChooser.h",
"TMVA/TNeuronInput.h",
"TMVA/TNeuronInputSum.h",
"TMVA/TNeuronInputSqSum.h",
"TMVA/TNeuronInputAbs.h",
"TMVA/Types.h",
"TMVA/Ranking.h",
"TMVA/RuleFit.h",
"TMVA/RuleFitAPI.h",
"TMVA/IMethod.h",
"TMVA/MsgLogger.h",
"TMVA/VariableTransformBase.h",
"TMVA/VariableIdentityTransform.h",
"TMVA/VariableDecorrTransform.h",
"TMVA/VariablePCATransform.h",
"TMVA/VariableGaussTransform.h",
"TMVA/VariableNormalizeTransform.h",
"TMVA/VariableRearrangeTransform.h",
"TMVA/VariableTransform.h",
"TMVA/ROCCalc.h",
"TMVA/ROCCurve.h",
"TMVA/Envelope.h",
"TMVA/VariableImportance.h",
"TMVA/CrossValidation.h",
"TMVA/HyperParameterOptimisation.h",
"TMVA/Event.h",
"TMVA/Results.h",
"TMVA/ResultsClassification.h",
"TMVA/ResultsRegression.h",
"TMVA/ResultsMulticlass.h",
"TMVA/VariableInfo.h",
"TMVA/ClassInfo.h",
"TMVA/DataLoader.h",
"TMVA/DataSet.h",
"TMVA/DataSetInfo.h",
"TMVA/DataInputHandler.h",
"TMVA/DataSetManager.h",
"TMVA/DataSetFactory.h",
"TMVA/LossFunction.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libTMVA dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TMVA/Configurable.h"
#include "TMVA/Factory.h"
#include "TMVA/MethodBase.h"
#include "TMVA/MethodCompositeBase.h"
#include "TMVA/MethodANNBase.h"
#include "TMVA/MethodTMlpANN.h"
#include "TMVA/MethodRuleFit.h"
#include "TMVA/MethodCuts.h"
#include "TMVA/MethodFisher.h"
#include "TMVA/MethodKNN.h"
#include "TMVA/MethodCFMlpANN.h"
#include "TMVA/MethodCFMlpANN_Utils.h"
#include "TMVA/MethodLikelihood.h"
#include "TMVA/MethodHMatrix.h"
#include "TMVA/MethodPDERS.h"
#include "TMVA/MethodBDT.h"
#include "TMVA/MethodDT.h"
#include "TMVA/MethodSVM.h"
#include "TMVA/MethodBayesClassifier.h"
#include "TMVA/MethodFDA.h"
#include "TMVA/MethodMLP.h"
#include "TMVA/MethodBoost.h"
#include "TMVA/MethodPDEFoam.h"
#include "TMVA/MethodLD.h"
#include "TMVA/MethodCategory.h"
#include "TMVA/MethodDNN.h"
#include "TMVA/TSpline2.h"
#include "TMVA/TSpline1.h"
#include "TMVA/PDF.h"
#include "TMVA/BinaryTree.h"
#include "TMVA/BinarySearchTreeNode.h"
#include "TMVA/BinarySearchTree.h"
#include "TMVA/Timer.h"
#include "TMVA/RootFinder.h"
#include "TMVA/CrossEntropy.h"
#include "TMVA/DecisionTree.h"
#include "TMVA/DecisionTreeNode.h"
#include "TMVA/MisClassificationError.h"
#include "TMVA/Node.h"
#include "TMVA/SdivSqrtSplusB.h"
#include "TMVA/SeparationBase.h"
#include "TMVA/RegressionVariance.h"
#include "TMVA/Tools.h"
#include "TMVA/Reader.h"
#include "TMVA/GeneticAlgorithm.h"
#include "TMVA/GeneticGenes.h"
#include "TMVA/GeneticPopulation.h"
#include "TMVA/GeneticRange.h"
#include "TMVA/GiniIndex.h"
#include "TMVA/GiniIndexWithLaplace.h"
#include "TMVA/SimulatedAnnealing.h"
#include "TMVA/QuickMVAProbEstimator.h"
#include "TMVA/Config.h"
#include "TMVA/KDEKernel.h"
#include "TMVA/Interval.h"
#include "TMVA/LogInterval.h"
#include "TMVA/FitterBase.h"
#include "TMVA/MCFitter.h"
#include "TMVA/GeneticFitter.h"
#include "TMVA/SimulatedAnnealingFitter.h"
#include "TMVA/MinuitFitter.h"
#include "TMVA/MinuitWrapper.h"
#include "TMVA/IFitterTarget.h"
#include "TMVA/PDEFoam.h"
#include "TMVA/PDEFoamDecisionTree.h"
#include "TMVA/PDEFoamDensityBase.h"
#include "TMVA/PDEFoamDiscriminantDensity.h"
#include "TMVA/PDEFoamEventDensity.h"
#include "TMVA/PDEFoamTargetDensity.h"
#include "TMVA/PDEFoamDecisionTreeDensity.h"
#include "TMVA/PDEFoamMultiTarget.h"
#include "TMVA/PDEFoamVect.h"
#include "TMVA/PDEFoamCell.h"
#include "TMVA/PDEFoamDiscriminant.h"
#include "TMVA/PDEFoamEvent.h"
#include "TMVA/PDEFoamTarget.h"
#include "TMVA/PDEFoamKernelBase.h"
#include "TMVA/PDEFoamKernelTrivial.h"
#include "TMVA/PDEFoamKernelLinN.h"
#include "TMVA/PDEFoamKernelGauss.h"
#include "TMVA/BDTEventWrapper.h"
#include "TMVA/CCTreeWrapper.h"
#include "TMVA/CCPruner.h"
#include "TMVA/CostComplexityPruneTool.h"
#include "TMVA/SVEvent.h"
#include "TMVA/OptimizeConfigParameters.h"
#include "TMVA/NeuralNet.h"
#include "TMVA/TNeuron.h"
#include "TMVA/TSynapse.h"
#include "TMVA/TActivationChooser.h"
#include "TMVA/TActivation.h"
#include "TMVA/TActivationSigmoid.h"
#include "TMVA/TActivationIdentity.h"
#include "TMVA/TActivationTanh.h"
#include "TMVA/TActivationRadial.h"
#include "TMVA/TActivationReLU.h"
#include "TMVA/TNeuronInputChooser.h"
#include "TMVA/TNeuronInput.h"
#include "TMVA/TNeuronInputSum.h"
#include "TMVA/TNeuronInputSqSum.h"
#include "TMVA/TNeuronInputAbs.h"
#include "TMVA/Types.h"
#include "TMVA/Ranking.h"
#include "TMVA/RuleFit.h"
#include "TMVA/RuleFitAPI.h"
#include "TMVA/IMethod.h"
#include "TMVA/MsgLogger.h"
#include "TMVA/VariableTransformBase.h"
#include "TMVA/VariableIdentityTransform.h"
#include "TMVA/VariableDecorrTransform.h"
#include "TMVA/VariablePCATransform.h"
#include "TMVA/VariableGaussTransform.h"
#include "TMVA/VariableNormalizeTransform.h"
#include "TMVA/VariableRearrangeTransform.h"
#include "TMVA/VariableTransform.h"
#include "TMVA/ROCCalc.h"
#include "TMVA/ROCCurve.h"
#include "TMVA/Envelope.h"
#include "TMVA/VariableImportance.h"
#include "TMVA/CrossValidation.h"
#include "TMVA/HyperParameterOptimisation.h"
#include "TMVA/Event.h"
#include "TMVA/Results.h"
#include "TMVA/ResultsClassification.h"
#include "TMVA/ResultsRegression.h"
#include "TMVA/ResultsMulticlass.h"
#include "TMVA/VariableInfo.h"
#include "TMVA/ClassInfo.h"
#include "TMVA/DataLoader.h"
#include "TMVA/DataSet.h"
#include "TMVA/DataSetInfo.h"
#include "TMVA/DataInputHandler.h"
#include "TMVA/DataSetManager.h"
#include "TMVA/DataSetFactory.h"
#include "TMVA/LossFunction.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libTMVA",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTMVA_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTMVA_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTMVA() {
  TriggerDictionaryInitialization_libTMVA_Impl();
}
