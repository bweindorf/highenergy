// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RooStats

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
#include "RooStats/AsymptoticCalculator.h"
#include "RooStats/BayesianCalculator.h"
#include "RooStats/BernsteinCorrection.h"
#include "RooStats/CombinedCalculator.h"
#include "RooStats/ConfInterval.h"
#include "RooStats/ConfidenceBelt.h"
#include "RooStats/DebuggingSampler.h"
#include "RooStats/DebuggingTestStat.h"
#include "RooStats/DetailedOutputAggregator.h"
#include "RooStats/FeldmanCousins.h"
#include "RooStats/FrequentistCalculator.h"
#include "RooStats/HLFactory.h"
#include "RooStats/Heaviside.h"
#include "RooStats/HybridCalculator.h"
#include "RooStats/HybridCalculatorOriginal.h"
#include "RooStats/HybridPlot.h"
#include "RooStats/HybridResult.h"
#include "RooStats/HypoTestCalculator.h"
#include "RooStats/HypoTestCalculatorGeneric.h"
#include "RooStats/HypoTestInverter.h"
#include "RooStats/HypoTestInverterOriginal.h"
#include "RooStats/HypoTestInverterPlot.h"
#include "RooStats/HypoTestInverterResult.h"
#include "RooStats/HypoTestPlot.h"
#include "RooStats/HypoTestResult.h"
#include "RooStats/IntervalCalculator.h"
#include "RooStats/LikelihoodInterval.h"
#include "RooStats/LikelihoodIntervalPlot.h"
#include "RooStats/MCMCCalculator.h"
#include "RooStats/MCMCInterval.h"
#include "RooStats/MCMCIntervalPlot.h"
#include "RooStats/MarkovChain.h"
#include "RooStats/MaxLikelihoodEstimateTestStat.h"
#include "RooStats/MetropolisHastings.h"
#include "RooStats/MinNLLTestStat.h"
#include "RooStats/ModelConfig.h"
#include "RooStats/NeymanConstruction.h"
#include "RooStats/NumEventsTestStat.h"
#include "RooStats/NumberCountingPdfFactory.h"
#include "RooStats/NumberCountingUtils.h"
#include "RooStats/PdfProposal.h"
#include "RooStats/PointSetInterval.h"
#include "RooStats/ProfileInspector.h"
#include "RooStats/ProfileLikelihoodCalculator.h"
#include "RooStats/ProfileLikelihoodTestStat.h"
#include "RooStats/ProofConfig.h"
#include "RooStats/ProposalFunction.h"
#include "RooStats/ProposalHelper.h"
#include "RooStats/RatioOfProfiledLikelihoodsTestStat.h"
#include "RooStats/RooStatsUtils.h"
#include "RooStats/SPlot.h"
#include "RooStats/SamplingDistPlot.h"
#include "RooStats/SamplingDistribution.h"
#include "RooStats/SequentialProposal.h"
#include "RooStats/SimpleInterval.h"
#include "RooStats/SimpleLikelihoodRatioTestStat.h"
#include "RooStats/TestStatSampler.h"
#include "RooStats/TestStatistic.h"
#include "RooStats/ToyMCImportanceSampler.h"
#include "RooStats/ToyMCSampler.h"
#include "RooStats/ToyMCStudy.h"
#include "RooStats/UniformProposal.h"
#include "RooStats/UpperLimitMCSModule.h"

// Header files passed via #pragma extra_include
#include "Math/IFunction.h"
#include "Math/Minimizer.h"
#include "RooFunctor.h"
#include "TGraphErrors.h"

namespace RooStats {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooStats_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooStats", 0 /*version*/, "RooStats/HypoTestCalculator.h", 28,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &RooStats_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RooStats_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace RooStats {
   namespace NumberCountingUtils {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooStatscLcLNumberCountingUtils_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooStats::NumberCountingUtils", 0 /*version*/, "RooStats/NumberCountingUtils.h", 85,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &RooStatscLcLNumberCountingUtils_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RooStatscLcLNumberCountingUtils_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static void delete_RooStatscLcLHypoTestCalculator(void *p);
   static void deleteArray_RooStatscLcLHypoTestCalculator(void *p);
   static void destruct_RooStatscLcLHypoTestCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestCalculator*)
   {
      ::RooStats::HypoTestCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestCalculator", ::RooStats::HypoTestCalculator::Class_Version(), "RooStats/HypoTestCalculator.h", 65,
                  typeid(::RooStats::HypoTestCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestCalculator) );
      instance.SetDelete(&delete_RooStatscLcLHypoTestCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestCalculator*)
   {
      return GenerateInitInstanceLocal((::RooStats::HypoTestCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLModelConfig(void *p = 0);
   static void *newArray_RooStatscLcLModelConfig(Long_t size, void *p);
   static void delete_RooStatscLcLModelConfig(void *p);
   static void deleteArray_RooStatscLcLModelConfig(void *p);
   static void destruct_RooStatscLcLModelConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ModelConfig*)
   {
      ::RooStats::ModelConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ModelConfig >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ModelConfig", ::RooStats::ModelConfig::Class_Version(), "RooStats/ModelConfig.h", 30,
                  typeid(::RooStats::ModelConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ModelConfig::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ModelConfig) );
      instance.SetNew(&new_RooStatscLcLModelConfig);
      instance.SetNewArray(&newArray_RooStatscLcLModelConfig);
      instance.SetDelete(&delete_RooStatscLcLModelConfig);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLModelConfig);
      instance.SetDestructor(&destruct_RooStatscLcLModelConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ModelConfig*)
   {
      return GenerateInitInstanceLocal((::RooStats::ModelConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ModelConfig*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLTestStatistic(void *p);
   static void deleteArray_RooStatscLcLTestStatistic(void *p);
   static void destruct_RooStatscLcLTestStatistic(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::TestStatistic*)
   {
      ::RooStats::TestStatistic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::TestStatistic >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::TestStatistic", ::RooStats::TestStatistic::Class_Version(), "RooStats/TestStatistic.h", 31,
                  typeid(::RooStats::TestStatistic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::TestStatistic::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::TestStatistic) );
      instance.SetDelete(&delete_RooStatscLcLTestStatistic);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLTestStatistic);
      instance.SetDestructor(&destruct_RooStatscLcLTestStatistic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::TestStatistic*)
   {
      return GenerateInitInstanceLocal((::RooStats::TestStatistic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::TestStatistic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLTestStatSampler(void *p);
   static void deleteArray_RooStatscLcLTestStatSampler(void *p);
   static void destruct_RooStatscLcLTestStatSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::TestStatSampler*)
   {
      ::RooStats::TestStatSampler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::TestStatSampler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::TestStatSampler", ::RooStats::TestStatSampler::Class_Version(), "RooStats/TestStatSampler.h", 39,
                  typeid(::RooStats::TestStatSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::TestStatSampler::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::TestStatSampler) );
      instance.SetDelete(&delete_RooStatscLcLTestStatSampler);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLTestStatSampler);
      instance.SetDestructor(&destruct_RooStatscLcLTestStatSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::TestStatSampler*)
   {
      return GenerateInitInstanceLocal((::RooStats::TestStatSampler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::TestStatSampler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSamplingDistribution(void *p = 0);
   static void *newArray_RooStatscLcLSamplingDistribution(Long_t size, void *p);
   static void delete_RooStatscLcLSamplingDistribution(void *p);
   static void deleteArray_RooStatscLcLSamplingDistribution(void *p);
   static void destruct_RooStatscLcLSamplingDistribution(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SamplingDistribution*)
   {
      ::RooStats::SamplingDistribution *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SamplingDistribution >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SamplingDistribution", ::RooStats::SamplingDistribution::Class_Version(), "RooStats/SamplingDistribution.h", 28,
                  typeid(::RooStats::SamplingDistribution), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SamplingDistribution::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SamplingDistribution) );
      instance.SetNew(&new_RooStatscLcLSamplingDistribution);
      instance.SetNewArray(&newArray_RooStatscLcLSamplingDistribution);
      instance.SetDelete(&delete_RooStatscLcLSamplingDistribution);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSamplingDistribution);
      instance.SetDestructor(&destruct_RooStatscLcLSamplingDistribution);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SamplingDistribution*)
   {
      return GenerateInitInstanceLocal((::RooStats::SamplingDistribution*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::SamplingDistribution*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHypoTestResult(void *p = 0);
   static void *newArray_RooStatscLcLHypoTestResult(Long_t size, void *p);
   static void delete_RooStatscLcLHypoTestResult(void *p);
   static void deleteArray_RooStatscLcLHypoTestResult(void *p);
   static void destruct_RooStatscLcLHypoTestResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestResult*)
   {
      ::RooStats::HypoTestResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestResult", ::RooStats::HypoTestResult::Class_Version(), "RooStats/HypoTestResult.h", 25,
                  typeid(::RooStats::HypoTestResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestResult::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestResult) );
      instance.SetNew(&new_RooStatscLcLHypoTestResult);
      instance.SetNewArray(&newArray_RooStatscLcLHypoTestResult);
      instance.SetDelete(&delete_RooStatscLcLHypoTestResult);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestResult);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestResult*)
   {
      return GenerateInitInstanceLocal((::RooStats::HypoTestResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HypoTestResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHypoTestCalculatorGeneric(void *p);
   static void deleteArray_RooStatscLcLHypoTestCalculatorGeneric(void *p);
   static void destruct_RooStatscLcLHypoTestCalculatorGeneric(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestCalculatorGeneric*)
   {
      ::RooStats::HypoTestCalculatorGeneric *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestCalculatorGeneric >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestCalculatorGeneric", ::RooStats::HypoTestCalculatorGeneric::Class_Version(), "RooStats/HypoTestCalculatorGeneric.h", 34,
                  typeid(::RooStats::HypoTestCalculatorGeneric), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestCalculatorGeneric::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestCalculatorGeneric) );
      instance.SetDelete(&delete_RooStatscLcLHypoTestCalculatorGeneric);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestCalculatorGeneric);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestCalculatorGeneric);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestCalculatorGeneric*)
   {
      return GenerateInitInstanceLocal((::RooStats::HypoTestCalculatorGeneric*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculatorGeneric*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLAsymptoticCalculator(void *p);
   static void deleteArray_RooStatscLcLAsymptoticCalculator(void *p);
   static void destruct_RooStatscLcLAsymptoticCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::AsymptoticCalculator*)
   {
      ::RooStats::AsymptoticCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::AsymptoticCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::AsymptoticCalculator", ::RooStats::AsymptoticCalculator::Class_Version(), "RooStats/AsymptoticCalculator.h", 27,
                  typeid(::RooStats::AsymptoticCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::AsymptoticCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::AsymptoticCalculator) );
      instance.SetDelete(&delete_RooStatscLcLAsymptoticCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLAsymptoticCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLAsymptoticCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::AsymptoticCalculator*)
   {
      return GenerateInitInstanceLocal((::RooStats::AsymptoticCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::AsymptoticCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLIntervalCalculator(void *p);
   static void deleteArray_RooStatscLcLIntervalCalculator(void *p);
   static void destruct_RooStatscLcLIntervalCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::IntervalCalculator*)
   {
      ::RooStats::IntervalCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::IntervalCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::IntervalCalculator", ::RooStats::IntervalCalculator::Class_Version(), "RooStats/IntervalCalculator.h", 59,
                  typeid(::RooStats::IntervalCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::IntervalCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::IntervalCalculator) );
      instance.SetDelete(&delete_RooStatscLcLIntervalCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLIntervalCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLIntervalCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::IntervalCalculator*)
   {
      return GenerateInitInstanceLocal((::RooStats::IntervalCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::IntervalCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLConfInterval(void *p);
   static void deleteArray_RooStatscLcLConfInterval(void *p);
   static void destruct_RooStatscLcLConfInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ConfInterval*)
   {
      ::RooStats::ConfInterval *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ConfInterval >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ConfInterval", ::RooStats::ConfInterval::Class_Version(), "RooStats/ConfInterval.h", 35,
                  typeid(::RooStats::ConfInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ConfInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ConfInterval) );
      instance.SetDelete(&delete_RooStatscLcLConfInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLConfInterval);
      instance.SetDestructor(&destruct_RooStatscLcLConfInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ConfInterval*)
   {
      return GenerateInitInstanceLocal((::RooStats::ConfInterval*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ConfInterval*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSimpleInterval(void *p = 0);
   static void *newArray_RooStatscLcLSimpleInterval(Long_t size, void *p);
   static void delete_RooStatscLcLSimpleInterval(void *p);
   static void deleteArray_RooStatscLcLSimpleInterval(void *p);
   static void destruct_RooStatscLcLSimpleInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SimpleInterval*)
   {
      ::RooStats::SimpleInterval *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SimpleInterval >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SimpleInterval", ::RooStats::SimpleInterval::Class_Version(), "RooStats/SimpleInterval.h", 20,
                  typeid(::RooStats::SimpleInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SimpleInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SimpleInterval) );
      instance.SetNew(&new_RooStatscLcLSimpleInterval);
      instance.SetNewArray(&newArray_RooStatscLcLSimpleInterval);
      instance.SetDelete(&delete_RooStatscLcLSimpleInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSimpleInterval);
      instance.SetDestructor(&destruct_RooStatscLcLSimpleInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SimpleInterval*)
   {
      return GenerateInitInstanceLocal((::RooStats::SimpleInterval*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::SimpleInterval*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLBayesianCalculator(void *p = 0);
   static void *newArray_RooStatscLcLBayesianCalculator(Long_t size, void *p);
   static void delete_RooStatscLcLBayesianCalculator(void *p);
   static void deleteArray_RooStatscLcLBayesianCalculator(void *p);
   static void destruct_RooStatscLcLBayesianCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::BayesianCalculator*)
   {
      ::RooStats::BayesianCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::BayesianCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::BayesianCalculator", ::RooStats::BayesianCalculator::Class_Version(), "RooStats/BayesianCalculator.h", 36,
                  typeid(::RooStats::BayesianCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::BayesianCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::BayesianCalculator) );
      instance.SetNew(&new_RooStatscLcLBayesianCalculator);
      instance.SetNewArray(&newArray_RooStatscLcLBayesianCalculator);
      instance.SetDelete(&delete_RooStatscLcLBayesianCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLBayesianCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLBayesianCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::BayesianCalculator*)
   {
      return GenerateInitInstanceLocal((::RooStats::BayesianCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::BayesianCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLBernsteinCorrection(void *p = 0);
   static void *newArray_RooStatscLcLBernsteinCorrection(Long_t size, void *p);
   static void delete_RooStatscLcLBernsteinCorrection(void *p);
   static void deleteArray_RooStatscLcLBernsteinCorrection(void *p);
   static void destruct_RooStatscLcLBernsteinCorrection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::BernsteinCorrection*)
   {
      ::RooStats::BernsteinCorrection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::BernsteinCorrection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::BernsteinCorrection", ::RooStats::BernsteinCorrection::Class_Version(), "RooStats/BernsteinCorrection.h", 22,
                  typeid(::RooStats::BernsteinCorrection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::BernsteinCorrection::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::BernsteinCorrection) );
      instance.SetNew(&new_RooStatscLcLBernsteinCorrection);
      instance.SetNewArray(&newArray_RooStatscLcLBernsteinCorrection);
      instance.SetDelete(&delete_RooStatscLcLBernsteinCorrection);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLBernsteinCorrection);
      instance.SetDestructor(&destruct_RooStatscLcLBernsteinCorrection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::BernsteinCorrection*)
   {
      return GenerateInitInstanceLocal((::RooStats::BernsteinCorrection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::BernsteinCorrection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLCombinedCalculator(void *p);
   static void deleteArray_RooStatscLcLCombinedCalculator(void *p);
   static void destruct_RooStatscLcLCombinedCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::CombinedCalculator*)
   {
      ::RooStats::CombinedCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::CombinedCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::CombinedCalculator", ::RooStats::CombinedCalculator::Class_Version(), "RooStats/CombinedCalculator.h", 62,
                  typeid(::RooStats::CombinedCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::CombinedCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::CombinedCalculator) );
      instance.SetDelete(&delete_RooStatscLcLCombinedCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLCombinedCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLCombinedCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::CombinedCalculator*)
   {
      return GenerateInitInstanceLocal((::RooStats::CombinedCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::CombinedCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSamplingSummaryLookup(void *p = 0);
   static void *newArray_RooStatscLcLSamplingSummaryLookup(Long_t size, void *p);
   static void delete_RooStatscLcLSamplingSummaryLookup(void *p);
   static void deleteArray_RooStatscLcLSamplingSummaryLookup(void *p);
   static void destruct_RooStatscLcLSamplingSummaryLookup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SamplingSummaryLookup*)
   {
      ::RooStats::SamplingSummaryLookup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SamplingSummaryLookup >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SamplingSummaryLookup", ::RooStats::SamplingSummaryLookup::Class_Version(), "RooStats/ConfidenceBelt.h", 30,
                  typeid(::RooStats::SamplingSummaryLookup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SamplingSummaryLookup::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SamplingSummaryLookup) );
      instance.SetNew(&new_RooStatscLcLSamplingSummaryLookup);
      instance.SetNewArray(&newArray_RooStatscLcLSamplingSummaryLookup);
      instance.SetDelete(&delete_RooStatscLcLSamplingSummaryLookup);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSamplingSummaryLookup);
      instance.SetDestructor(&destruct_RooStatscLcLSamplingSummaryLookup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SamplingSummaryLookup*)
   {
      return GenerateInitInstanceLocal((::RooStats::SamplingSummaryLookup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::SamplingSummaryLookup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLAcceptanceRegion(void *p = 0);
   static void *newArray_RooStatscLcLAcceptanceRegion(Long_t size, void *p);
   static void delete_RooStatscLcLAcceptanceRegion(void *p);
   static void deleteArray_RooStatscLcLAcceptanceRegion(void *p);
   static void destruct_RooStatscLcLAcceptanceRegion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::AcceptanceRegion*)
   {
      ::RooStats::AcceptanceRegion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::AcceptanceRegion >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::AcceptanceRegion", ::RooStats::AcceptanceRegion::Class_Version(), "RooStats/ConfidenceBelt.h", 96,
                  typeid(::RooStats::AcceptanceRegion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::AcceptanceRegion::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::AcceptanceRegion) );
      instance.SetNew(&new_RooStatscLcLAcceptanceRegion);
      instance.SetNewArray(&newArray_RooStatscLcLAcceptanceRegion);
      instance.SetDelete(&delete_RooStatscLcLAcceptanceRegion);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLAcceptanceRegion);
      instance.SetDestructor(&destruct_RooStatscLcLAcceptanceRegion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::AcceptanceRegion*)
   {
      return GenerateInitInstanceLocal((::RooStats::AcceptanceRegion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::AcceptanceRegion*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSamplingSummary(void *p = 0);
   static void *newArray_RooStatscLcLSamplingSummary(Long_t size, void *p);
   static void delete_RooStatscLcLSamplingSummary(void *p);
   static void deleteArray_RooStatscLcLSamplingSummary(void *p);
   static void destruct_RooStatscLcLSamplingSummary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SamplingSummary*)
   {
      ::RooStats::SamplingSummary *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SamplingSummary >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SamplingSummary", ::RooStats::SamplingSummary::Class_Version(), "RooStats/ConfidenceBelt.h", 122,
                  typeid(::RooStats::SamplingSummary), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SamplingSummary::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SamplingSummary) );
      instance.SetNew(&new_RooStatscLcLSamplingSummary);
      instance.SetNewArray(&newArray_RooStatscLcLSamplingSummary);
      instance.SetDelete(&delete_RooStatscLcLSamplingSummary);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSamplingSummary);
      instance.SetDestructor(&destruct_RooStatscLcLSamplingSummary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SamplingSummary*)
   {
      return GenerateInitInstanceLocal((::RooStats::SamplingSummary*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::SamplingSummary*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLConfidenceBelt(void *p = 0);
   static void *newArray_RooStatscLcLConfidenceBelt(Long_t size, void *p);
   static void delete_RooStatscLcLConfidenceBelt(void *p);
   static void deleteArray_RooStatscLcLConfidenceBelt(void *p);
   static void destruct_RooStatscLcLConfidenceBelt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ConfidenceBelt*)
   {
      ::RooStats::ConfidenceBelt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ConfidenceBelt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ConfidenceBelt", ::RooStats::ConfidenceBelt::Class_Version(), "RooStats/ConfidenceBelt.h", 156,
                  typeid(::RooStats::ConfidenceBelt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ConfidenceBelt::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ConfidenceBelt) );
      instance.SetNew(&new_RooStatscLcLConfidenceBelt);
      instance.SetNewArray(&newArray_RooStatscLcLConfidenceBelt);
      instance.SetDelete(&delete_RooStatscLcLConfidenceBelt);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLConfidenceBelt);
      instance.SetDestructor(&destruct_RooStatscLcLConfidenceBelt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ConfidenceBelt*)
   {
      return GenerateInitInstanceLocal((::RooStats::ConfidenceBelt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ConfidenceBelt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLDebuggingSampler(void *p);
   static void deleteArray_RooStatscLcLDebuggingSampler(void *p);
   static void destruct_RooStatscLcLDebuggingSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::DebuggingSampler*)
   {
      ::RooStats::DebuggingSampler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::DebuggingSampler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::DebuggingSampler", ::RooStats::DebuggingSampler::Class_Version(), "RooStats/DebuggingSampler.h", 35,
                  typeid(::RooStats::DebuggingSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::DebuggingSampler::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::DebuggingSampler) );
      instance.SetDelete(&delete_RooStatscLcLDebuggingSampler);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLDebuggingSampler);
      instance.SetDestructor(&destruct_RooStatscLcLDebuggingSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::DebuggingSampler*)
   {
      return GenerateInitInstanceLocal((::RooStats::DebuggingSampler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::DebuggingSampler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLProofConfig(void *p);
   static void deleteArray_RooStatscLcLProofConfig(void *p);
   static void destruct_RooStatscLcLProofConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProofConfig*)
   {
      ::RooStats::ProofConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProofConfig >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProofConfig", ::RooStats::ProofConfig::Class_Version(), "RooStats/ProofConfig.h", 46,
                  typeid(::RooStats::ProofConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProofConfig::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProofConfig) );
      instance.SetDelete(&delete_RooStatscLcLProofConfig);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProofConfig);
      instance.SetDestructor(&destruct_RooStatscLcLProofConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProofConfig*)
   {
      return GenerateInitInstanceLocal((::RooStats::ProofConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ProofConfig*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLToyMCSampler(void *p = 0);
   static void *newArray_RooStatscLcLToyMCSampler(Long_t size, void *p);
   static void delete_RooStatscLcLToyMCSampler(void *p);
   static void deleteArray_RooStatscLcLToyMCSampler(void *p);
   static void destruct_RooStatscLcLToyMCSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ToyMCSampler*)
   {
      ::RooStats::ToyMCSampler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ToyMCSampler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ToyMCSampler", ::RooStats::ToyMCSampler::Class_Version(), "RooStats/ToyMCSampler.h", 71,
                  typeid(::RooStats::ToyMCSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ToyMCSampler::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ToyMCSampler) );
      instance.SetNew(&new_RooStatscLcLToyMCSampler);
      instance.SetNewArray(&newArray_RooStatscLcLToyMCSampler);
      instance.SetDelete(&delete_RooStatscLcLToyMCSampler);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLToyMCSampler);
      instance.SetDestructor(&destruct_RooStatscLcLToyMCSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ToyMCSampler*)
   {
      return GenerateInitInstanceLocal((::RooStats::ToyMCSampler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ToyMCSampler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLDebuggingTestStat(void *p);
   static void deleteArray_RooStatscLcLDebuggingTestStat(void *p);
   static void destruct_RooStatscLcLDebuggingTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::DebuggingTestStat*)
   {
      ::RooStats::DebuggingTestStat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::DebuggingTestStat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::DebuggingTestStat", ::RooStats::DebuggingTestStat::Class_Version(), "RooStats/DebuggingTestStat.h", 40,
                  typeid(::RooStats::DebuggingTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::DebuggingTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::DebuggingTestStat) );
      instance.SetDelete(&delete_RooStatscLcLDebuggingTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLDebuggingTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLDebuggingTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::DebuggingTestStat*)
   {
      return GenerateInitInstanceLocal((::RooStats::DebuggingTestStat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::DebuggingTestStat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLDetailedOutputAggregator(void *p = 0);
   static void *newArray_RooStatscLcLDetailedOutputAggregator(Long_t size, void *p);
   static void delete_RooStatscLcLDetailedOutputAggregator(void *p);
   static void deleteArray_RooStatscLcLDetailedOutputAggregator(void *p);
   static void destruct_RooStatscLcLDetailedOutputAggregator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::DetailedOutputAggregator*)
   {
      ::RooStats::DetailedOutputAggregator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::DetailedOutputAggregator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::DetailedOutputAggregator", ::RooStats::DetailedOutputAggregator::Class_Version(), "RooStats/DetailedOutputAggregator.h", 24,
                  typeid(::RooStats::DetailedOutputAggregator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::DetailedOutputAggregator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::DetailedOutputAggregator) );
      instance.SetNew(&new_RooStatscLcLDetailedOutputAggregator);
      instance.SetNewArray(&newArray_RooStatscLcLDetailedOutputAggregator);
      instance.SetDelete(&delete_RooStatscLcLDetailedOutputAggregator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLDetailedOutputAggregator);
      instance.SetDestructor(&destruct_RooStatscLcLDetailedOutputAggregator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::DetailedOutputAggregator*)
   {
      return GenerateInitInstanceLocal((::RooStats::DetailedOutputAggregator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::DetailedOutputAggregator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLPointSetInterval(void *p = 0);
   static void *newArray_RooStatscLcLPointSetInterval(Long_t size, void *p);
   static void delete_RooStatscLcLPointSetInterval(void *p);
   static void deleteArray_RooStatscLcLPointSetInterval(void *p);
   static void destruct_RooStatscLcLPointSetInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::PointSetInterval*)
   {
      ::RooStats::PointSetInterval *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::PointSetInterval >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::PointSetInterval", ::RooStats::PointSetInterval::Class_Version(), "RooStats/PointSetInterval.h", 21,
                  typeid(::RooStats::PointSetInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::PointSetInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::PointSetInterval) );
      instance.SetNew(&new_RooStatscLcLPointSetInterval);
      instance.SetNewArray(&newArray_RooStatscLcLPointSetInterval);
      instance.SetDelete(&delete_RooStatscLcLPointSetInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLPointSetInterval);
      instance.SetDestructor(&destruct_RooStatscLcLPointSetInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::PointSetInterval*)
   {
      return GenerateInitInstanceLocal((::RooStats::PointSetInterval*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::PointSetInterval*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLFeldmanCousins(void *p);
   static void deleteArray_RooStatscLcLFeldmanCousins(void *p);
   static void destruct_RooStatscLcLFeldmanCousins(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::FeldmanCousins*)
   {
      ::RooStats::FeldmanCousins *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::FeldmanCousins >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::FeldmanCousins", ::RooStats::FeldmanCousins::Class_Version(), "RooStats/FeldmanCousins.h", 34,
                  typeid(::RooStats::FeldmanCousins), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::FeldmanCousins::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::FeldmanCousins) );
      instance.SetDelete(&delete_RooStatscLcLFeldmanCousins);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLFeldmanCousins);
      instance.SetDestructor(&destruct_RooStatscLcLFeldmanCousins);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::FeldmanCousins*)
   {
      return GenerateInitInstanceLocal((::RooStats::FeldmanCousins*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::FeldmanCousins*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLFrequentistCalculator(void *p);
   static void deleteArray_RooStatscLcLFrequentistCalculator(void *p);
   static void destruct_RooStatscLcLFrequentistCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::FrequentistCalculator*)
   {
      ::RooStats::FrequentistCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::FrequentistCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::FrequentistCalculator", ::RooStats::FrequentistCalculator::Class_Version(), "RooStats/FrequentistCalculator.h", 25,
                  typeid(::RooStats::FrequentistCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::FrequentistCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::FrequentistCalculator) );
      instance.SetDelete(&delete_RooStatscLcLFrequentistCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLFrequentistCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLFrequentistCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::FrequentistCalculator*)
   {
      return GenerateInitInstanceLocal((::RooStats::FrequentistCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::FrequentistCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHLFactory(void *p = 0);
   static void *newArray_RooStatscLcLHLFactory(Long_t size, void *p);
   static void delete_RooStatscLcLHLFactory(void *p);
   static void deleteArray_RooStatscLcLHLFactory(void *p);
   static void destruct_RooStatscLcLHLFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HLFactory*)
   {
      ::RooStats::HLFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HLFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HLFactory", ::RooStats::HLFactory::Class_Version(), "RooStats/HLFactory.h", 31,
                  typeid(::RooStats::HLFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HLFactory::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HLFactory) );
      instance.SetNew(&new_RooStatscLcLHLFactory);
      instance.SetNewArray(&newArray_RooStatscLcLHLFactory);
      instance.SetDelete(&delete_RooStatscLcLHLFactory);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHLFactory);
      instance.SetDestructor(&destruct_RooStatscLcLHLFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HLFactory*)
   {
      return GenerateInitInstanceLocal((::RooStats::HLFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HLFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHeaviside(void *p = 0);
   static void *newArray_RooStatscLcLHeaviside(Long_t size, void *p);
   static void delete_RooStatscLcLHeaviside(void *p);
   static void deleteArray_RooStatscLcLHeaviside(void *p);
   static void destruct_RooStatscLcLHeaviside(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::Heaviside*)
   {
      ::RooStats::Heaviside *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::Heaviside >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::Heaviside", ::RooStats::Heaviside::Class_Version(), "RooStats/Heaviside.h", 18,
                  typeid(::RooStats::Heaviside), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::Heaviside::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::Heaviside) );
      instance.SetNew(&new_RooStatscLcLHeaviside);
      instance.SetNewArray(&newArray_RooStatscLcLHeaviside);
      instance.SetDelete(&delete_RooStatscLcLHeaviside);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHeaviside);
      instance.SetDestructor(&destruct_RooStatscLcLHeaviside);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::Heaviside*)
   {
      return GenerateInitInstanceLocal((::RooStats::Heaviside*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::Heaviside*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHybridCalculator(void *p);
   static void deleteArray_RooStatscLcLHybridCalculator(void *p);
   static void destruct_RooStatscLcLHybridCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HybridCalculator*)
   {
      ::RooStats::HybridCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HybridCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HybridCalculator", ::RooStats::HybridCalculator::Class_Version(), "RooStats/HybridCalculator.h", 22,
                  typeid(::RooStats::HybridCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HybridCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HybridCalculator) );
      instance.SetDelete(&delete_RooStatscLcLHybridCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHybridCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLHybridCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HybridCalculator*)
   {
      return GenerateInitInstanceLocal((::RooStats::HybridCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HybridCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHybridResult(void *p = 0);
   static void *newArray_RooStatscLcLHybridResult(Long_t size, void *p);
   static void delete_RooStatscLcLHybridResult(void *p);
   static void deleteArray_RooStatscLcLHybridResult(void *p);
   static void destruct_RooStatscLcLHybridResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HybridResult*)
   {
      ::RooStats::HybridResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HybridResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HybridResult", ::RooStats::HybridResult::Class_Version(), "RooStats/HybridResult.h", 25,
                  typeid(::RooStats::HybridResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HybridResult::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HybridResult) );
      instance.SetNew(&new_RooStatscLcLHybridResult);
      instance.SetNewArray(&newArray_RooStatscLcLHybridResult);
      instance.SetDelete(&delete_RooStatscLcLHybridResult);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHybridResult);
      instance.SetDestructor(&destruct_RooStatscLcLHybridResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HybridResult*)
   {
      return GenerateInitInstanceLocal((::RooStats::HybridResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HybridResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHybridCalculatorOriginal(void *p = 0);
   static void *newArray_RooStatscLcLHybridCalculatorOriginal(Long_t size, void *p);
   static void delete_RooStatscLcLHybridCalculatorOriginal(void *p);
   static void deleteArray_RooStatscLcLHybridCalculatorOriginal(void *p);
   static void destruct_RooStatscLcLHybridCalculatorOriginal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HybridCalculatorOriginal*)
   {
      ::RooStats::HybridCalculatorOriginal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HybridCalculatorOriginal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HybridCalculatorOriginal", ::RooStats::HybridCalculatorOriginal::Class_Version(), "RooStats/HybridCalculatorOriginal.h", 34,
                  typeid(::RooStats::HybridCalculatorOriginal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HybridCalculatorOriginal::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HybridCalculatorOriginal) );
      instance.SetNew(&new_RooStatscLcLHybridCalculatorOriginal);
      instance.SetNewArray(&newArray_RooStatscLcLHybridCalculatorOriginal);
      instance.SetDelete(&delete_RooStatscLcLHybridCalculatorOriginal);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHybridCalculatorOriginal);
      instance.SetDestructor(&destruct_RooStatscLcLHybridCalculatorOriginal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HybridCalculatorOriginal*)
   {
      return GenerateInitInstanceLocal((::RooStats::HybridCalculatorOriginal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HybridCalculatorOriginal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHybridPlot(void *p);
   static void deleteArray_RooStatscLcLHybridPlot(void *p);
   static void destruct_RooStatscLcLHybridPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HybridPlot*)
   {
      ::RooStats::HybridPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HybridPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HybridPlot", ::RooStats::HybridPlot::Class_Version(), "RooStats/HybridPlot.h", 36,
                  typeid(::RooStats::HybridPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HybridPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HybridPlot) );
      instance.SetDelete(&delete_RooStatscLcLHybridPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHybridPlot);
      instance.SetDestructor(&destruct_RooStatscLcLHybridPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HybridPlot*)
   {
      return GenerateInitInstanceLocal((::RooStats::HybridPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HybridPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHypoTestInverterResult(void *p = 0);
   static void *newArray_RooStatscLcLHypoTestInverterResult(Long_t size, void *p);
   static void delete_RooStatscLcLHypoTestInverterResult(void *p);
   static void deleteArray_RooStatscLcLHypoTestInverterResult(void *p);
   static void destruct_RooStatscLcLHypoTestInverterResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestInverterResult*)
   {
      ::RooStats::HypoTestInverterResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestInverterResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestInverterResult", ::RooStats::HypoTestInverterResult::Class_Version(), "RooStats/HypoTestInverterResult.h", 26,
                  typeid(::RooStats::HypoTestInverterResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestInverterResult::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestInverterResult) );
      instance.SetNew(&new_RooStatscLcLHypoTestInverterResult);
      instance.SetNewArray(&newArray_RooStatscLcLHypoTestInverterResult);
      instance.SetDelete(&delete_RooStatscLcLHypoTestInverterResult);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestInverterResult);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestInverterResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestInverterResult*)
   {
      return GenerateInitInstanceLocal((::RooStats::HypoTestInverterResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHypoTestInverter(void *p = 0);
   static void *newArray_RooStatscLcLHypoTestInverter(Long_t size, void *p);
   static void delete_RooStatscLcLHypoTestInverter(void *p);
   static void deleteArray_RooStatscLcLHypoTestInverter(void *p);
   static void destruct_RooStatscLcLHypoTestInverter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestInverter*)
   {
      ::RooStats::HypoTestInverter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestInverter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestInverter", ::RooStats::HypoTestInverter::Class_Version(), "RooStats/HypoTestInverter.h", 36,
                  typeid(::RooStats::HypoTestInverter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestInverter::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestInverter) );
      instance.SetNew(&new_RooStatscLcLHypoTestInverter);
      instance.SetNewArray(&newArray_RooStatscLcLHypoTestInverter);
      instance.SetDelete(&delete_RooStatscLcLHypoTestInverter);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestInverter);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestInverter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestInverter*)
   {
      return GenerateInitInstanceLocal((::RooStats::HypoTestInverter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HypoTestInverter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHypoTestInverterOriginal(void *p = 0);
   static void *newArray_RooStatscLcLHypoTestInverterOriginal(Long_t size, void *p);
   static void delete_RooStatscLcLHypoTestInverterOriginal(void *p);
   static void deleteArray_RooStatscLcLHypoTestInverterOriginal(void *p);
   static void destruct_RooStatscLcLHypoTestInverterOriginal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestInverterOriginal*)
   {
      ::RooStats::HypoTestInverterOriginal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestInverterOriginal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestInverterOriginal", ::RooStats::HypoTestInverterOriginal::Class_Version(), "RooStats/HypoTestInverterOriginal.h", 27,
                  typeid(::RooStats::HypoTestInverterOriginal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestInverterOriginal::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestInverterOriginal) );
      instance.SetNew(&new_RooStatscLcLHypoTestInverterOriginal);
      instance.SetNewArray(&newArray_RooStatscLcLHypoTestInverterOriginal);
      instance.SetDelete(&delete_RooStatscLcLHypoTestInverterOriginal);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestInverterOriginal);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestInverterOriginal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestInverterOriginal*)
   {
      return GenerateInitInstanceLocal((::RooStats::HypoTestInverterOriginal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterOriginal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHypoTestInverterPlot(void *p);
   static void deleteArray_RooStatscLcLHypoTestInverterPlot(void *p);
   static void destruct_RooStatscLcLHypoTestInverterPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestInverterPlot*)
   {
      ::RooStats::HypoTestInverterPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestInverterPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestInverterPlot", ::RooStats::HypoTestInverterPlot::Class_Version(), "RooStats/HypoTestInverterPlot.h", 26,
                  typeid(::RooStats::HypoTestInverterPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestInverterPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestInverterPlot) );
      instance.SetDelete(&delete_RooStatscLcLHypoTestInverterPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestInverterPlot);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestInverterPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestInverterPlot*)
   {
      return GenerateInitInstanceLocal((::RooStats::HypoTestInverterPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSamplingDistPlot(void *p = 0);
   static void *newArray_RooStatscLcLSamplingDistPlot(Long_t size, void *p);
   static void delete_RooStatscLcLSamplingDistPlot(void *p);
   static void deleteArray_RooStatscLcLSamplingDistPlot(void *p);
   static void destruct_RooStatscLcLSamplingDistPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SamplingDistPlot*)
   {
      ::RooStats::SamplingDistPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SamplingDistPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SamplingDistPlot", ::RooStats::SamplingDistPlot::Class_Version(), "RooStats/SamplingDistPlot.h", 30,
                  typeid(::RooStats::SamplingDistPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SamplingDistPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SamplingDistPlot) );
      instance.SetNew(&new_RooStatscLcLSamplingDistPlot);
      instance.SetNewArray(&newArray_RooStatscLcLSamplingDistPlot);
      instance.SetDelete(&delete_RooStatscLcLSamplingDistPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSamplingDistPlot);
      instance.SetDestructor(&destruct_RooStatscLcLSamplingDistPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SamplingDistPlot*)
   {
      return GenerateInitInstanceLocal((::RooStats::SamplingDistPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::SamplingDistPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHypoTestPlot(void *p = 0);
   static void *newArray_RooStatscLcLHypoTestPlot(Long_t size, void *p);
   static void delete_RooStatscLcLHypoTestPlot(void *p);
   static void deleteArray_RooStatscLcLHypoTestPlot(void *p);
   static void destruct_RooStatscLcLHypoTestPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestPlot*)
   {
      ::RooStats::HypoTestPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestPlot", ::RooStats::HypoTestPlot::Class_Version(), "RooStats/HypoTestPlot.h", 22,
                  typeid(::RooStats::HypoTestPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestPlot) );
      instance.SetNew(&new_RooStatscLcLHypoTestPlot);
      instance.SetNewArray(&newArray_RooStatscLcLHypoTestPlot);
      instance.SetDelete(&delete_RooStatscLcLHypoTestPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestPlot);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestPlot*)
   {
      return GenerateInitInstanceLocal((::RooStats::HypoTestPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HypoTestPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLLikelihoodInterval(void *p = 0);
   static void *newArray_RooStatscLcLLikelihoodInterval(Long_t size, void *p);
   static void delete_RooStatscLcLLikelihoodInterval(void *p);
   static void deleteArray_RooStatscLcLLikelihoodInterval(void *p);
   static void destruct_RooStatscLcLLikelihoodInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::LikelihoodInterval*)
   {
      ::RooStats::LikelihoodInterval *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::LikelihoodInterval >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::LikelihoodInterval", ::RooStats::LikelihoodInterval::Class_Version(), "RooStats/LikelihoodInterval.h", 33,
                  typeid(::RooStats::LikelihoodInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::LikelihoodInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::LikelihoodInterval) );
      instance.SetNew(&new_RooStatscLcLLikelihoodInterval);
      instance.SetNewArray(&newArray_RooStatscLcLLikelihoodInterval);
      instance.SetDelete(&delete_RooStatscLcLLikelihoodInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLLikelihoodInterval);
      instance.SetDestructor(&destruct_RooStatscLcLLikelihoodInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::LikelihoodInterval*)
   {
      return GenerateInitInstanceLocal((::RooStats::LikelihoodInterval*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::LikelihoodInterval*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLLikelihoodIntervalPlot(void *p = 0);
   static void *newArray_RooStatscLcLLikelihoodIntervalPlot(Long_t size, void *p);
   static void delete_RooStatscLcLLikelihoodIntervalPlot(void *p);
   static void deleteArray_RooStatscLcLLikelihoodIntervalPlot(void *p);
   static void destruct_RooStatscLcLLikelihoodIntervalPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::LikelihoodIntervalPlot*)
   {
      ::RooStats::LikelihoodIntervalPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::LikelihoodIntervalPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::LikelihoodIntervalPlot", ::RooStats::LikelihoodIntervalPlot::Class_Version(), "RooStats/LikelihoodIntervalPlot.h", 30,
                  typeid(::RooStats::LikelihoodIntervalPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::LikelihoodIntervalPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::LikelihoodIntervalPlot) );
      instance.SetNew(&new_RooStatscLcLLikelihoodIntervalPlot);
      instance.SetNewArray(&newArray_RooStatscLcLLikelihoodIntervalPlot);
      instance.SetDelete(&delete_RooStatscLcLLikelihoodIntervalPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLLikelihoodIntervalPlot);
      instance.SetDestructor(&destruct_RooStatscLcLLikelihoodIntervalPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::LikelihoodIntervalPlot*)
   {
      return GenerateInitInstanceLocal((::RooStats::LikelihoodIntervalPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::LikelihoodIntervalPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLProposalFunction(void *p);
   static void deleteArray_RooStatscLcLProposalFunction(void *p);
   static void destruct_RooStatscLcLProposalFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProposalFunction*)
   {
      ::RooStats::ProposalFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProposalFunction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProposalFunction", ::RooStats::ProposalFunction::Class_Version(), "RooStats/ProposalFunction.h", 42,
                  typeid(::RooStats::ProposalFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProposalFunction::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProposalFunction) );
      instance.SetDelete(&delete_RooStatscLcLProposalFunction);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProposalFunction);
      instance.SetDestructor(&destruct_RooStatscLcLProposalFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProposalFunction*)
   {
      return GenerateInitInstanceLocal((::RooStats::ProposalFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ProposalFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMarkovChain(void *p = 0);
   static void *newArray_RooStatscLcLMarkovChain(Long_t size, void *p);
   static void delete_RooStatscLcLMarkovChain(void *p);
   static void deleteArray_RooStatscLcLMarkovChain(void *p);
   static void destruct_RooStatscLcLMarkovChain(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MarkovChain*)
   {
      ::RooStats::MarkovChain *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MarkovChain >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MarkovChain", ::RooStats::MarkovChain::Class_Version(), "RooStats/MarkovChain.h", 30,
                  typeid(::RooStats::MarkovChain), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MarkovChain::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MarkovChain) );
      instance.SetNew(&new_RooStatscLcLMarkovChain);
      instance.SetNewArray(&newArray_RooStatscLcLMarkovChain);
      instance.SetDelete(&delete_RooStatscLcLMarkovChain);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMarkovChain);
      instance.SetDestructor(&destruct_RooStatscLcLMarkovChain);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MarkovChain*)
   {
      return GenerateInitInstanceLocal((::RooStats::MarkovChain*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::MarkovChain*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMCMCInterval(void *p = 0);
   static void *newArray_RooStatscLcLMCMCInterval(Long_t size, void *p);
   static void delete_RooStatscLcLMCMCInterval(void *p);
   static void deleteArray_RooStatscLcLMCMCInterval(void *p);
   static void destruct_RooStatscLcLMCMCInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MCMCInterval*)
   {
      ::RooStats::MCMCInterval *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MCMCInterval >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MCMCInterval", ::RooStats::MCMCInterval::Class_Version(), "RooStats/MCMCInterval.h", 30,
                  typeid(::RooStats::MCMCInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MCMCInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MCMCInterval) );
      instance.SetNew(&new_RooStatscLcLMCMCInterval);
      instance.SetNewArray(&newArray_RooStatscLcLMCMCInterval);
      instance.SetDelete(&delete_RooStatscLcLMCMCInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMCMCInterval);
      instance.SetDestructor(&destruct_RooStatscLcLMCMCInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MCMCInterval*)
   {
      return GenerateInitInstanceLocal((::RooStats::MCMCInterval*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::MCMCInterval*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMCMCCalculator(void *p = 0);
   static void *newArray_RooStatscLcLMCMCCalculator(Long_t size, void *p);
   static void delete_RooStatscLcLMCMCCalculator(void *p);
   static void deleteArray_RooStatscLcLMCMCCalculator(void *p);
   static void destruct_RooStatscLcLMCMCCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MCMCCalculator*)
   {
      ::RooStats::MCMCCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MCMCCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MCMCCalculator", ::RooStats::MCMCCalculator::Class_Version(), "RooStats/MCMCCalculator.h", 31,
                  typeid(::RooStats::MCMCCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MCMCCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MCMCCalculator) );
      instance.SetNew(&new_RooStatscLcLMCMCCalculator);
      instance.SetNewArray(&newArray_RooStatscLcLMCMCCalculator);
      instance.SetDelete(&delete_RooStatscLcLMCMCCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMCMCCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLMCMCCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MCMCCalculator*)
   {
      return GenerateInitInstanceLocal((::RooStats::MCMCCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::MCMCCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMCMCIntervalPlot(void *p = 0);
   static void *newArray_RooStatscLcLMCMCIntervalPlot(Long_t size, void *p);
   static void delete_RooStatscLcLMCMCIntervalPlot(void *p);
   static void deleteArray_RooStatscLcLMCMCIntervalPlot(void *p);
   static void destruct_RooStatscLcLMCMCIntervalPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MCMCIntervalPlot*)
   {
      ::RooStats::MCMCIntervalPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MCMCIntervalPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MCMCIntervalPlot", ::RooStats::MCMCIntervalPlot::Class_Version(), "RooStats/MCMCIntervalPlot.h", 28,
                  typeid(::RooStats::MCMCIntervalPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MCMCIntervalPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MCMCIntervalPlot) );
      instance.SetNew(&new_RooStatscLcLMCMCIntervalPlot);
      instance.SetNewArray(&newArray_RooStatscLcLMCMCIntervalPlot);
      instance.SetDelete(&delete_RooStatscLcLMCMCIntervalPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMCMCIntervalPlot);
      instance.SetDestructor(&destruct_RooStatscLcLMCMCIntervalPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MCMCIntervalPlot*)
   {
      return GenerateInitInstanceLocal((::RooStats::MCMCIntervalPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::MCMCIntervalPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p = 0);
   static void *newArray_RooStatscLcLMaxLikelihoodEstimateTestStat(Long_t size, void *p);
   static void delete_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p);
   static void deleteArray_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p);
   static void destruct_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MaxLikelihoodEstimateTestStat*)
   {
      ::RooStats::MaxLikelihoodEstimateTestStat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MaxLikelihoodEstimateTestStat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MaxLikelihoodEstimateTestStat", ::RooStats::MaxLikelihoodEstimateTestStat::Class_Version(), "RooStats/MaxLikelihoodEstimateTestStat.h", 39,
                  typeid(::RooStats::MaxLikelihoodEstimateTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MaxLikelihoodEstimateTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MaxLikelihoodEstimateTestStat) );
      instance.SetNew(&new_RooStatscLcLMaxLikelihoodEstimateTestStat);
      instance.SetNewArray(&newArray_RooStatscLcLMaxLikelihoodEstimateTestStat);
      instance.SetDelete(&delete_RooStatscLcLMaxLikelihoodEstimateTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMaxLikelihoodEstimateTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLMaxLikelihoodEstimateTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MaxLikelihoodEstimateTestStat*)
   {
      return GenerateInitInstanceLocal((::RooStats::MaxLikelihoodEstimateTestStat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::MaxLikelihoodEstimateTestStat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMetropolisHastings(void *p = 0);
   static void *newArray_RooStatscLcLMetropolisHastings(Long_t size, void *p);
   static void delete_RooStatscLcLMetropolisHastings(void *p);
   static void deleteArray_RooStatscLcLMetropolisHastings(void *p);
   static void destruct_RooStatscLcLMetropolisHastings(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MetropolisHastings*)
   {
      ::RooStats::MetropolisHastings *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MetropolisHastings >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MetropolisHastings", ::RooStats::MetropolisHastings::Class_Version(), "RooStats/MetropolisHastings.h", 24,
                  typeid(::RooStats::MetropolisHastings), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MetropolisHastings::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MetropolisHastings) );
      instance.SetNew(&new_RooStatscLcLMetropolisHastings);
      instance.SetNewArray(&newArray_RooStatscLcLMetropolisHastings);
      instance.SetDelete(&delete_RooStatscLcLMetropolisHastings);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMetropolisHastings);
      instance.SetDestructor(&destruct_RooStatscLcLMetropolisHastings);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MetropolisHastings*)
   {
      return GenerateInitInstanceLocal((::RooStats::MetropolisHastings*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::MetropolisHastings*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLProfileLikelihoodTestStat(void *p = 0);
   static void *newArray_RooStatscLcLProfileLikelihoodTestStat(Long_t size, void *p);
   static void delete_RooStatscLcLProfileLikelihoodTestStat(void *p);
   static void deleteArray_RooStatscLcLProfileLikelihoodTestStat(void *p);
   static void destruct_RooStatscLcLProfileLikelihoodTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProfileLikelihoodTestStat*)
   {
      ::RooStats::ProfileLikelihoodTestStat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProfileLikelihoodTestStat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProfileLikelihoodTestStat", ::RooStats::ProfileLikelihoodTestStat::Class_Version(), "RooStats/ProfileLikelihoodTestStat.h", 32,
                  typeid(::RooStats::ProfileLikelihoodTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProfileLikelihoodTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProfileLikelihoodTestStat) );
      instance.SetNew(&new_RooStatscLcLProfileLikelihoodTestStat);
      instance.SetNewArray(&newArray_RooStatscLcLProfileLikelihoodTestStat);
      instance.SetDelete(&delete_RooStatscLcLProfileLikelihoodTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProfileLikelihoodTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLProfileLikelihoodTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProfileLikelihoodTestStat*)
   {
      return GenerateInitInstanceLocal((::RooStats::ProfileLikelihoodTestStat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodTestStat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMinNLLTestStat(void *p = 0);
   static void *newArray_RooStatscLcLMinNLLTestStat(Long_t size, void *p);
   static void delete_RooStatscLcLMinNLLTestStat(void *p);
   static void deleteArray_RooStatscLcLMinNLLTestStat(void *p);
   static void destruct_RooStatscLcLMinNLLTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MinNLLTestStat*)
   {
      ::RooStats::MinNLLTestStat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MinNLLTestStat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MinNLLTestStat", ::RooStats::MinNLLTestStat::Class_Version(), "RooStats/MinNLLTestStat.h", 53,
                  typeid(::RooStats::MinNLLTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MinNLLTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MinNLLTestStat) );
      instance.SetNew(&new_RooStatscLcLMinNLLTestStat);
      instance.SetNewArray(&newArray_RooStatscLcLMinNLLTestStat);
      instance.SetDelete(&delete_RooStatscLcLMinNLLTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMinNLLTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLMinNLLTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MinNLLTestStat*)
   {
      return GenerateInitInstanceLocal((::RooStats::MinNLLTestStat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::MinNLLTestStat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLNeymanConstruction(void *p);
   static void deleteArray_RooStatscLcLNeymanConstruction(void *p);
   static void destruct_RooStatscLcLNeymanConstruction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::NeymanConstruction*)
   {
      ::RooStats::NeymanConstruction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::NeymanConstruction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::NeymanConstruction", ::RooStats::NeymanConstruction::Class_Version(), "RooStats/NeymanConstruction.h", 35,
                  typeid(::RooStats::NeymanConstruction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::NeymanConstruction::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::NeymanConstruction) );
      instance.SetDelete(&delete_RooStatscLcLNeymanConstruction);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLNeymanConstruction);
      instance.SetDestructor(&destruct_RooStatscLcLNeymanConstruction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::NeymanConstruction*)
   {
      return GenerateInitInstanceLocal((::RooStats::NeymanConstruction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::NeymanConstruction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLNumEventsTestStat(void *p = 0);
   static void *newArray_RooStatscLcLNumEventsTestStat(Long_t size, void *p);
   static void delete_RooStatscLcLNumEventsTestStat(void *p);
   static void deleteArray_RooStatscLcLNumEventsTestStat(void *p);
   static void destruct_RooStatscLcLNumEventsTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::NumEventsTestStat*)
   {
      ::RooStats::NumEventsTestStat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::NumEventsTestStat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::NumEventsTestStat", ::RooStats::NumEventsTestStat::Class_Version(), "RooStats/NumEventsTestStat.h", 41,
                  typeid(::RooStats::NumEventsTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::NumEventsTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::NumEventsTestStat) );
      instance.SetNew(&new_RooStatscLcLNumEventsTestStat);
      instance.SetNewArray(&newArray_RooStatscLcLNumEventsTestStat);
      instance.SetDelete(&delete_RooStatscLcLNumEventsTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLNumEventsTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLNumEventsTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::NumEventsTestStat*)
   {
      return GenerateInitInstanceLocal((::RooStats::NumEventsTestStat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::NumEventsTestStat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLNumberCountingPdfFactory(void *p = 0);
   static void *newArray_RooStatscLcLNumberCountingPdfFactory(Long_t size, void *p);
   static void delete_RooStatscLcLNumberCountingPdfFactory(void *p);
   static void deleteArray_RooStatscLcLNumberCountingPdfFactory(void *p);
   static void destruct_RooStatscLcLNumberCountingPdfFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::NumberCountingPdfFactory*)
   {
      ::RooStats::NumberCountingPdfFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::NumberCountingPdfFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::NumberCountingPdfFactory", ::RooStats::NumberCountingPdfFactory::Class_Version(), "RooStats/NumberCountingPdfFactory.h", 22,
                  typeid(::RooStats::NumberCountingPdfFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::NumberCountingPdfFactory::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::NumberCountingPdfFactory) );
      instance.SetNew(&new_RooStatscLcLNumberCountingPdfFactory);
      instance.SetNewArray(&newArray_RooStatscLcLNumberCountingPdfFactory);
      instance.SetDelete(&delete_RooStatscLcLNumberCountingPdfFactory);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLNumberCountingPdfFactory);
      instance.SetDestructor(&destruct_RooStatscLcLNumberCountingPdfFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::NumberCountingPdfFactory*)
   {
      return GenerateInitInstanceLocal((::RooStats::NumberCountingPdfFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::NumberCountingPdfFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLPdfProposal(void *p = 0);
   static void *newArray_RooStatscLcLPdfProposal(Long_t size, void *p);
   static void delete_RooStatscLcLPdfProposal(void *p);
   static void deleteArray_RooStatscLcLPdfProposal(void *p);
   static void destruct_RooStatscLcLPdfProposal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::PdfProposal*)
   {
      ::RooStats::PdfProposal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::PdfProposal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::PdfProposal", ::RooStats::PdfProposal::Class_Version(), "RooStats/PdfProposal.h", 30,
                  typeid(::RooStats::PdfProposal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::PdfProposal::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::PdfProposal) );
      instance.SetNew(&new_RooStatscLcLPdfProposal);
      instance.SetNewArray(&newArray_RooStatscLcLPdfProposal);
      instance.SetDelete(&delete_RooStatscLcLPdfProposal);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLPdfProposal);
      instance.SetDestructor(&destruct_RooStatscLcLPdfProposal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::PdfProposal*)
   {
      return GenerateInitInstanceLocal((::RooStats::PdfProposal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::PdfProposal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLProfileInspector(void *p = 0);
   static void *newArray_RooStatscLcLProfileInspector(Long_t size, void *p);
   static void delete_RooStatscLcLProfileInspector(void *p);
   static void deleteArray_RooStatscLcLProfileInspector(void *p);
   static void destruct_RooStatscLcLProfileInspector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProfileInspector*)
   {
      ::RooStats::ProfileInspector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProfileInspector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProfileInspector", ::RooStats::ProfileInspector::Class_Version(), "RooStats/ProfileInspector.h", 26,
                  typeid(::RooStats::ProfileInspector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProfileInspector::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProfileInspector) );
      instance.SetNew(&new_RooStatscLcLProfileInspector);
      instance.SetNewArray(&newArray_RooStatscLcLProfileInspector);
      instance.SetDelete(&delete_RooStatscLcLProfileInspector);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProfileInspector);
      instance.SetDestructor(&destruct_RooStatscLcLProfileInspector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProfileInspector*)
   {
      return GenerateInitInstanceLocal((::RooStats::ProfileInspector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ProfileInspector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLProfileLikelihoodCalculator(void *p = 0);
   static void *newArray_RooStatscLcLProfileLikelihoodCalculator(Long_t size, void *p);
   static void delete_RooStatscLcLProfileLikelihoodCalculator(void *p);
   static void deleteArray_RooStatscLcLProfileLikelihoodCalculator(void *p);
   static void destruct_RooStatscLcLProfileLikelihoodCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProfileLikelihoodCalculator*)
   {
      ::RooStats::ProfileLikelihoodCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProfileLikelihoodCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProfileLikelihoodCalculator", ::RooStats::ProfileLikelihoodCalculator::Class_Version(), "RooStats/ProfileLikelihoodCalculator.h", 22,
                  typeid(::RooStats::ProfileLikelihoodCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProfileLikelihoodCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProfileLikelihoodCalculator) );
      instance.SetNew(&new_RooStatscLcLProfileLikelihoodCalculator);
      instance.SetNewArray(&newArray_RooStatscLcLProfileLikelihoodCalculator);
      instance.SetDelete(&delete_RooStatscLcLProfileLikelihoodCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProfileLikelihoodCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLProfileLikelihoodCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProfileLikelihoodCalculator*)
   {
      return GenerateInitInstanceLocal((::RooStats::ProfileLikelihoodCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLUniformProposal(void *p = 0);
   static void *newArray_RooStatscLcLUniformProposal(Long_t size, void *p);
   static void delete_RooStatscLcLUniformProposal(void *p);
   static void deleteArray_RooStatscLcLUniformProposal(void *p);
   static void destruct_RooStatscLcLUniformProposal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::UniformProposal*)
   {
      ::RooStats::UniformProposal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::UniformProposal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::UniformProposal", ::RooStats::UniformProposal::Class_Version(), "RooStats/UniformProposal.h", 26,
                  typeid(::RooStats::UniformProposal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::UniformProposal::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::UniformProposal) );
      instance.SetNew(&new_RooStatscLcLUniformProposal);
      instance.SetNewArray(&newArray_RooStatscLcLUniformProposal);
      instance.SetDelete(&delete_RooStatscLcLUniformProposal);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLUniformProposal);
      instance.SetDestructor(&destruct_RooStatscLcLUniformProposal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::UniformProposal*)
   {
      return GenerateInitInstanceLocal((::RooStats::UniformProposal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::UniformProposal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLProposalHelper(void *p = 0);
   static void *newArray_RooStatscLcLProposalHelper(Long_t size, void *p);
   static void delete_RooStatscLcLProposalHelper(void *p);
   static void deleteArray_RooStatscLcLProposalHelper(void *p);
   static void destruct_RooStatscLcLProposalHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProposalHelper*)
   {
      ::RooStats::ProposalHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProposalHelper >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProposalHelper", ::RooStats::ProposalHelper::Class_Version(), "RooStats/ProposalHelper.h", 28,
                  typeid(::RooStats::ProposalHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProposalHelper::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProposalHelper) );
      instance.SetNew(&new_RooStatscLcLProposalHelper);
      instance.SetNewArray(&newArray_RooStatscLcLProposalHelper);
      instance.SetDelete(&delete_RooStatscLcLProposalHelper);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProposalHelper);
      instance.SetDestructor(&destruct_RooStatscLcLProposalHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProposalHelper*)
   {
      return GenerateInitInstanceLocal((::RooStats::ProposalHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ProposalHelper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p = 0);
   static void *newArray_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(Long_t size, void *p);
   static void delete_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p);
   static void deleteArray_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p);
   static void destruct_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)
   {
      ::RooStats::RatioOfProfiledLikelihoodsTestStat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::RatioOfProfiledLikelihoodsTestStat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::RatioOfProfiledLikelihoodsTestStat", ::RooStats::RatioOfProfiledLikelihoodsTestStat::Class_Version(), "RooStats/RatioOfProfiledLikelihoodsTestStat.h", 26,
                  typeid(::RooStats::RatioOfProfiledLikelihoodsTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::RatioOfProfiledLikelihoodsTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::RatioOfProfiledLikelihoodsTestStat) );
      instance.SetNew(&new_RooStatscLcLRatioOfProfiledLikelihoodsTestStat);
      instance.SetNewArray(&newArray_RooStatscLcLRatioOfProfiledLikelihoodsTestStat);
      instance.SetDelete(&delete_RooStatscLcLRatioOfProfiledLikelihoodsTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLRatioOfProfiledLikelihoodsTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLRatioOfProfiledLikelihoodsTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)
   {
      return GenerateInitInstanceLocal((::RooStats::RatioOfProfiledLikelihoodsTestStat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSPlot(void *p = 0);
   static void *newArray_RooStatscLcLSPlot(Long_t size, void *p);
   static void delete_RooStatscLcLSPlot(void *p);
   static void deleteArray_RooStatscLcLSPlot(void *p);
   static void destruct_RooStatscLcLSPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SPlot*)
   {
      ::RooStats::SPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SPlot", ::RooStats::SPlot::Class_Version(), "RooStats/SPlot.h", 32,
                  typeid(::RooStats::SPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SPlot) );
      instance.SetNew(&new_RooStatscLcLSPlot);
      instance.SetNewArray(&newArray_RooStatscLcLSPlot);
      instance.SetDelete(&delete_RooStatscLcLSPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSPlot);
      instance.SetDestructor(&destruct_RooStatscLcLSPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SPlot*)
   {
      return GenerateInitInstanceLocal((::RooStats::SPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::SPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSequentialProposal(void *p = 0);
   static void *newArray_RooStatscLcLSequentialProposal(Long_t size, void *p);
   static void delete_RooStatscLcLSequentialProposal(void *p);
   static void deleteArray_RooStatscLcLSequentialProposal(void *p);
   static void destruct_RooStatscLcLSequentialProposal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SequentialProposal*)
   {
      ::RooStats::SequentialProposal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SequentialProposal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SequentialProposal", ::RooStats::SequentialProposal::Class_Version(), "RooStats/SequentialProposal.h", 20,
                  typeid(::RooStats::SequentialProposal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SequentialProposal::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SequentialProposal) );
      instance.SetNew(&new_RooStatscLcLSequentialProposal);
      instance.SetNewArray(&newArray_RooStatscLcLSequentialProposal);
      instance.SetDelete(&delete_RooStatscLcLSequentialProposal);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSequentialProposal);
      instance.SetDestructor(&destruct_RooStatscLcLSequentialProposal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SequentialProposal*)
   {
      return GenerateInitInstanceLocal((::RooStats::SequentialProposal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::SequentialProposal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p = 0);
   static void *newArray_RooStatscLcLSimpleLikelihoodRatioTestStat(Long_t size, void *p);
   static void delete_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p);
   static void deleteArray_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p);
   static void destruct_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SimpleLikelihoodRatioTestStat*)
   {
      ::RooStats::SimpleLikelihoodRatioTestStat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SimpleLikelihoodRatioTestStat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SimpleLikelihoodRatioTestStat", ::RooStats::SimpleLikelihoodRatioTestStat::Class_Version(), "RooStats/SimpleLikelihoodRatioTestStat.h", 24,
                  typeid(::RooStats::SimpleLikelihoodRatioTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SimpleLikelihoodRatioTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SimpleLikelihoodRatioTestStat) );
      instance.SetNew(&new_RooStatscLcLSimpleLikelihoodRatioTestStat);
      instance.SetNewArray(&newArray_RooStatscLcLSimpleLikelihoodRatioTestStat);
      instance.SetDelete(&delete_RooStatscLcLSimpleLikelihoodRatioTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSimpleLikelihoodRatioTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLSimpleLikelihoodRatioTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SimpleLikelihoodRatioTestStat*)
   {
      return GenerateInitInstanceLocal((::RooStats::SimpleLikelihoodRatioTestStat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::SimpleLikelihoodRatioTestStat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLToyMCImportanceSampler(void *p = 0);
   static void *newArray_RooStatscLcLToyMCImportanceSampler(Long_t size, void *p);
   static void delete_RooStatscLcLToyMCImportanceSampler(void *p);
   static void deleteArray_RooStatscLcLToyMCImportanceSampler(void *p);
   static void destruct_RooStatscLcLToyMCImportanceSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ToyMCImportanceSampler*)
   {
      ::RooStats::ToyMCImportanceSampler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ToyMCImportanceSampler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ToyMCImportanceSampler", ::RooStats::ToyMCImportanceSampler::Class_Version(), "RooStats/ToyMCImportanceSampler.h", 21,
                  typeid(::RooStats::ToyMCImportanceSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ToyMCImportanceSampler::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ToyMCImportanceSampler) );
      instance.SetNew(&new_RooStatscLcLToyMCImportanceSampler);
      instance.SetNewArray(&newArray_RooStatscLcLToyMCImportanceSampler);
      instance.SetDelete(&delete_RooStatscLcLToyMCImportanceSampler);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLToyMCImportanceSampler);
      instance.SetDestructor(&destruct_RooStatscLcLToyMCImportanceSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ToyMCImportanceSampler*)
   {
      return GenerateInitInstanceLocal((::RooStats::ToyMCImportanceSampler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ToyMCImportanceSampler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLToyMCStudy(void *p = 0);
   static void *newArray_RooStatscLcLToyMCStudy(Long_t size, void *p);
   static void delete_RooStatscLcLToyMCStudy(void *p);
   static void deleteArray_RooStatscLcLToyMCStudy(void *p);
   static void destruct_RooStatscLcLToyMCStudy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ToyMCStudy*)
   {
      ::RooStats::ToyMCStudy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ToyMCStudy >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ToyMCStudy", ::RooStats::ToyMCStudy::Class_Version(), "RooStats/ToyMCStudy.h", 32,
                  typeid(::RooStats::ToyMCStudy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ToyMCStudy::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ToyMCStudy) );
      instance.SetNew(&new_RooStatscLcLToyMCStudy);
      instance.SetNewArray(&newArray_RooStatscLcLToyMCStudy);
      instance.SetDelete(&delete_RooStatscLcLToyMCStudy);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLToyMCStudy);
      instance.SetDestructor(&destruct_RooStatscLcLToyMCStudy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ToyMCStudy*)
   {
      return GenerateInitInstanceLocal((::RooStats::ToyMCStudy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ToyMCStudy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLToyMCPayload(void *p = 0);
   static void *newArray_RooStatscLcLToyMCPayload(Long_t size, void *p);
   static void delete_RooStatscLcLToyMCPayload(void *p);
   static void deleteArray_RooStatscLcLToyMCPayload(void *p);
   static void destruct_RooStatscLcLToyMCPayload(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ToyMCPayload*)
   {
      ::RooStats::ToyMCPayload *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ToyMCPayload >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ToyMCPayload", ::RooStats::ToyMCPayload::Class_Version(), "RooStats/ToyMCStudy.h", 74,
                  typeid(::RooStats::ToyMCPayload), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ToyMCPayload::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ToyMCPayload) );
      instance.SetNew(&new_RooStatscLcLToyMCPayload);
      instance.SetNewArray(&newArray_RooStatscLcLToyMCPayload);
      instance.SetDelete(&delete_RooStatscLcLToyMCPayload);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLToyMCPayload);
      instance.SetDestructor(&destruct_RooStatscLcLToyMCPayload);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ToyMCPayload*)
   {
      return GenerateInitInstanceLocal((::RooStats::ToyMCPayload*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::ToyMCPayload*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLUpperLimitMCSModule(void *p);
   static void deleteArray_RooStatscLcLUpperLimitMCSModule(void *p);
   static void destruct_RooStatscLcLUpperLimitMCSModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::UpperLimitMCSModule*)
   {
      ::RooStats::UpperLimitMCSModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::UpperLimitMCSModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::UpperLimitMCSModule", ::RooStats::UpperLimitMCSModule::Class_Version(), "RooStats/UpperLimitMCSModule.h", 27,
                  typeid(::RooStats::UpperLimitMCSModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::UpperLimitMCSModule::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::UpperLimitMCSModule) );
      instance.SetDelete(&delete_RooStatscLcLUpperLimitMCSModule);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLUpperLimitMCSModule);
      instance.SetDestructor(&destruct_RooStatscLcLUpperLimitMCSModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::UpperLimitMCSModule*)
   {
      return GenerateInitInstanceLocal((::RooStats::UpperLimitMCSModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::UpperLimitMCSModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestCalculator::Class_Name()
{
   return "RooStats::HypoTestCalculator";
}

//______________________________________________________________________________
const char *HypoTestCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ModelConfig::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ModelConfig::Class_Name()
{
   return "RooStats::ModelConfig";
}

//______________________________________________________________________________
const char *ModelConfig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ModelConfig*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ModelConfig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ModelConfig*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ModelConfig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ModelConfig*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ModelConfig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ModelConfig*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr TestStatistic::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TestStatistic::Class_Name()
{
   return "RooStats::TestStatistic";
}

//______________________________________________________________________________
const char *TestStatistic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatistic*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TestStatistic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatistic*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TestStatistic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatistic*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TestStatistic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatistic*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr TestStatSampler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TestStatSampler::Class_Name()
{
   return "RooStats::TestStatSampler";
}

//______________________________________________________________________________
const char *TestStatSampler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatSampler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TestStatSampler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatSampler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TestStatSampler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatSampler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TestStatSampler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatSampler*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SamplingDistribution::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SamplingDistribution::Class_Name()
{
   return "RooStats::SamplingDistribution";
}

//______________________________________________________________________________
const char *SamplingDistribution::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistribution*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SamplingDistribution::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistribution*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SamplingDistribution::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistribution*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SamplingDistribution::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistribution*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestResult::Class_Name()
{
   return "RooStats::HypoTestResult";
}

//______________________________________________________________________________
const char *HypoTestResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestResult*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestCalculatorGeneric::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestCalculatorGeneric::Class_Name()
{
   return "RooStats::HypoTestCalculatorGeneric";
}

//______________________________________________________________________________
const char *HypoTestCalculatorGeneric::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculatorGeneric*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestCalculatorGeneric::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculatorGeneric*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestCalculatorGeneric::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculatorGeneric*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestCalculatorGeneric::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculatorGeneric*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr AsymptoticCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AsymptoticCalculator::Class_Name()
{
   return "RooStats::AsymptoticCalculator";
}

//______________________________________________________________________________
const char *AsymptoticCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AsymptoticCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AsymptoticCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AsymptoticCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AsymptoticCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AsymptoticCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AsymptoticCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AsymptoticCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr IntervalCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IntervalCalculator::Class_Name()
{
   return "RooStats::IntervalCalculator";
}

//______________________________________________________________________________
const char *IntervalCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::IntervalCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IntervalCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::IntervalCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IntervalCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::IntervalCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IntervalCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::IntervalCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ConfInterval::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ConfInterval::Class_Name()
{
   return "RooStats::ConfInterval";
}

//______________________________________________________________________________
const char *ConfInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfInterval*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ConfInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfInterval*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ConfInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfInterval*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ConfInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfInterval*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SimpleInterval::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SimpleInterval::Class_Name()
{
   return "RooStats::SimpleInterval";
}

//______________________________________________________________________________
const char *SimpleInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleInterval*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SimpleInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleInterval*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimpleInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleInterval*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimpleInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleInterval*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr BayesianCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BayesianCalculator::Class_Name()
{
   return "RooStats::BayesianCalculator";
}

//______________________________________________________________________________
const char *BayesianCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BayesianCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BayesianCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BayesianCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BayesianCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BayesianCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BayesianCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BayesianCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr BernsteinCorrection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BernsteinCorrection::Class_Name()
{
   return "RooStats::BernsteinCorrection";
}

//______________________________________________________________________________
const char *BernsteinCorrection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BernsteinCorrection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BernsteinCorrection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BernsteinCorrection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BernsteinCorrection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BernsteinCorrection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BernsteinCorrection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BernsteinCorrection*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr CombinedCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CombinedCalculator::Class_Name()
{
   return "RooStats::CombinedCalculator";
}

//______________________________________________________________________________
const char *CombinedCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::CombinedCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CombinedCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::CombinedCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CombinedCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::CombinedCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CombinedCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::CombinedCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SamplingSummaryLookup::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SamplingSummaryLookup::Class_Name()
{
   return "RooStats::SamplingSummaryLookup";
}

//______________________________________________________________________________
const char *SamplingSummaryLookup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummaryLookup*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SamplingSummaryLookup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummaryLookup*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SamplingSummaryLookup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummaryLookup*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SamplingSummaryLookup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummaryLookup*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr AcceptanceRegion::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AcceptanceRegion::Class_Name()
{
   return "RooStats::AcceptanceRegion";
}

//______________________________________________________________________________
const char *AcceptanceRegion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AcceptanceRegion*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AcceptanceRegion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AcceptanceRegion*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AcceptanceRegion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AcceptanceRegion*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AcceptanceRegion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AcceptanceRegion*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SamplingSummary::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SamplingSummary::Class_Name()
{
   return "RooStats::SamplingSummary";
}

//______________________________________________________________________________
const char *SamplingSummary::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummary*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SamplingSummary::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummary*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SamplingSummary::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummary*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SamplingSummary::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummary*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ConfidenceBelt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ConfidenceBelt::Class_Name()
{
   return "RooStats::ConfidenceBelt";
}

//______________________________________________________________________________
const char *ConfidenceBelt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfidenceBelt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ConfidenceBelt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfidenceBelt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ConfidenceBelt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfidenceBelt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ConfidenceBelt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfidenceBelt*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr DebuggingSampler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DebuggingSampler::Class_Name()
{
   return "RooStats::DebuggingSampler";
}

//______________________________________________________________________________
const char *DebuggingSampler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingSampler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DebuggingSampler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingSampler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DebuggingSampler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingSampler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DebuggingSampler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingSampler*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProofConfig::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ProofConfig::Class_Name()
{
   return "RooStats::ProofConfig";
}

//______________________________________________________________________________
const char *ProofConfig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProofConfig*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ProofConfig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProofConfig*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProofConfig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProofConfig*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProofConfig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProofConfig*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ToyMCSampler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ToyMCSampler::Class_Name()
{
   return "RooStats::ToyMCSampler";
}

//______________________________________________________________________________
const char *ToyMCSampler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCSampler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ToyMCSampler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCSampler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ToyMCSampler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCSampler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ToyMCSampler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCSampler*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr DebuggingTestStat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DebuggingTestStat::Class_Name()
{
   return "RooStats::DebuggingTestStat";
}

//______________________________________________________________________________
const char *DebuggingTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingTestStat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DebuggingTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingTestStat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DebuggingTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingTestStat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DebuggingTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingTestStat*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr DetailedOutputAggregator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DetailedOutputAggregator::Class_Name()
{
   return "RooStats::DetailedOutputAggregator";
}

//______________________________________________________________________________
const char *DetailedOutputAggregator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DetailedOutputAggregator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DetailedOutputAggregator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DetailedOutputAggregator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DetailedOutputAggregator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DetailedOutputAggregator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DetailedOutputAggregator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DetailedOutputAggregator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr PointSetInterval::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PointSetInterval::Class_Name()
{
   return "RooStats::PointSetInterval";
}

//______________________________________________________________________________
const char *PointSetInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PointSetInterval*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PointSetInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PointSetInterval*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PointSetInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PointSetInterval*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PointSetInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PointSetInterval*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr FeldmanCousins::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FeldmanCousins::Class_Name()
{
   return "RooStats::FeldmanCousins";
}

//______________________________________________________________________________
const char *FeldmanCousins::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FeldmanCousins*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FeldmanCousins::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FeldmanCousins*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FeldmanCousins::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FeldmanCousins*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FeldmanCousins::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FeldmanCousins*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr FrequentistCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FrequentistCalculator::Class_Name()
{
   return "RooStats::FrequentistCalculator";
}

//______________________________________________________________________________
const char *FrequentistCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FrequentistCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FrequentistCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FrequentistCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FrequentistCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FrequentistCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FrequentistCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FrequentistCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HLFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HLFactory::Class_Name()
{
   return "RooStats::HLFactory";
}

//______________________________________________________________________________
const char *HLFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HLFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HLFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HLFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HLFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HLFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HLFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HLFactory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr Heaviside::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Heaviside::Class_Name()
{
   return "RooStats::Heaviside";
}

//______________________________________________________________________________
const char *Heaviside::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::Heaviside*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Heaviside::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::Heaviside*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Heaviside::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::Heaviside*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Heaviside::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::Heaviside*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HybridCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridCalculator::Class_Name()
{
   return "RooStats::HybridCalculator";
}

//______________________________________________________________________________
const char *HybridCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HybridCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HybridResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridResult::Class_Name()
{
   return "RooStats::HybridResult";
}

//______________________________________________________________________________
const char *HybridResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HybridResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridResult*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HybridCalculatorOriginal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridCalculatorOriginal::Class_Name()
{
   return "RooStats::HybridCalculatorOriginal";
}

//______________________________________________________________________________
const char *HybridCalculatorOriginal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculatorOriginal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HybridCalculatorOriginal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculatorOriginal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridCalculatorOriginal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculatorOriginal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridCalculatorOriginal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculatorOriginal*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HybridPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridPlot::Class_Name()
{
   return "RooStats::HybridPlot";
}

//______________________________________________________________________________
const char *HybridPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HybridPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridPlot*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestInverterResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestInverterResult::Class_Name()
{
   return "RooStats::HypoTestInverterResult";
}

//______________________________________________________________________________
const char *HypoTestInverterResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestInverterResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestInverterResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestInverterResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterResult*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestInverter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestInverter::Class_Name()
{
   return "RooStats::HypoTestInverter";
}

//______________________________________________________________________________
const char *HypoTestInverter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestInverter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestInverter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestInverter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestInverterOriginal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestInverterOriginal::Class_Name()
{
   return "RooStats::HypoTestInverterOriginal";
}

//______________________________________________________________________________
const char *HypoTestInverterOriginal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterOriginal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestInverterOriginal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterOriginal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestInverterOriginal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterOriginal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestInverterOriginal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterOriginal*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestInverterPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestInverterPlot::Class_Name()
{
   return "RooStats::HypoTestInverterPlot";
}

//______________________________________________________________________________
const char *HypoTestInverterPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestInverterPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestInverterPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestInverterPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterPlot*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SamplingDistPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SamplingDistPlot::Class_Name()
{
   return "RooStats::SamplingDistPlot";
}

//______________________________________________________________________________
const char *SamplingDistPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SamplingDistPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SamplingDistPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SamplingDistPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistPlot*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestPlot::Class_Name()
{
   return "RooStats::HypoTestPlot";
}

//______________________________________________________________________________
const char *HypoTestPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestPlot*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr LikelihoodInterval::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LikelihoodInterval::Class_Name()
{
   return "RooStats::LikelihoodInterval";
}

//______________________________________________________________________________
const char *LikelihoodInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodInterval*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LikelihoodInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodInterval*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LikelihoodInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodInterval*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LikelihoodInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodInterval*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr LikelihoodIntervalPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LikelihoodIntervalPlot::Class_Name()
{
   return "RooStats::LikelihoodIntervalPlot";
}

//______________________________________________________________________________
const char *LikelihoodIntervalPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodIntervalPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LikelihoodIntervalPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodIntervalPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LikelihoodIntervalPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodIntervalPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LikelihoodIntervalPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodIntervalPlot*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProposalFunction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ProposalFunction::Class_Name()
{
   return "RooStats::ProposalFunction";
}

//______________________________________________________________________________
const char *ProposalFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalFunction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ProposalFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalFunction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProposalFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalFunction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProposalFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalFunction*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MarkovChain::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MarkovChain::Class_Name()
{
   return "RooStats::MarkovChain";
}

//______________________________________________________________________________
const char *MarkovChain::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MarkovChain*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MarkovChain::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MarkovChain*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MarkovChain::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MarkovChain*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MarkovChain::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MarkovChain*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MCMCInterval::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCMCInterval::Class_Name()
{
   return "RooStats::MCMCInterval";
}

//______________________________________________________________________________
const char *MCMCInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCInterval*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCMCInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCInterval*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCMCInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCInterval*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCMCInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCInterval*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MCMCCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCMCCalculator::Class_Name()
{
   return "RooStats::MCMCCalculator";
}

//______________________________________________________________________________
const char *MCMCCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCMCCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCMCCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCMCCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MCMCIntervalPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCMCIntervalPlot::Class_Name()
{
   return "RooStats::MCMCIntervalPlot";
}

//______________________________________________________________________________
const char *MCMCIntervalPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCIntervalPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCMCIntervalPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCIntervalPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCMCIntervalPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCIntervalPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCMCIntervalPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCIntervalPlot*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MaxLikelihoodEstimateTestStat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MaxLikelihoodEstimateTestStat::Class_Name()
{
   return "RooStats::MaxLikelihoodEstimateTestStat";
}

//______________________________________________________________________________
const char *MaxLikelihoodEstimateTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MaxLikelihoodEstimateTestStat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MaxLikelihoodEstimateTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MaxLikelihoodEstimateTestStat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MaxLikelihoodEstimateTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MaxLikelihoodEstimateTestStat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MaxLikelihoodEstimateTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MaxLikelihoodEstimateTestStat*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MetropolisHastings::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MetropolisHastings::Class_Name()
{
   return "RooStats::MetropolisHastings";
}

//______________________________________________________________________________
const char *MetropolisHastings::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MetropolisHastings*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MetropolisHastings::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MetropolisHastings*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MetropolisHastings::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MetropolisHastings*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MetropolisHastings::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MetropolisHastings*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProfileLikelihoodTestStat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ProfileLikelihoodTestStat::Class_Name()
{
   return "RooStats::ProfileLikelihoodTestStat";
}

//______________________________________________________________________________
const char *ProfileLikelihoodTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodTestStat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ProfileLikelihoodTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodTestStat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProfileLikelihoodTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodTestStat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProfileLikelihoodTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodTestStat*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MinNLLTestStat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MinNLLTestStat::Class_Name()
{
   return "RooStats::MinNLLTestStat";
}

//______________________________________________________________________________
const char *MinNLLTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MinNLLTestStat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MinNLLTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MinNLLTestStat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MinNLLTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MinNLLTestStat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MinNLLTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MinNLLTestStat*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr NeymanConstruction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NeymanConstruction::Class_Name()
{
   return "RooStats::NeymanConstruction";
}

//______________________________________________________________________________
const char *NeymanConstruction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NeymanConstruction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NeymanConstruction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NeymanConstruction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NeymanConstruction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NeymanConstruction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NeymanConstruction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NeymanConstruction*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr NumEventsTestStat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NumEventsTestStat::Class_Name()
{
   return "RooStats::NumEventsTestStat";
}

//______________________________________________________________________________
const char *NumEventsTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumEventsTestStat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NumEventsTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumEventsTestStat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NumEventsTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumEventsTestStat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NumEventsTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumEventsTestStat*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr NumberCountingPdfFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NumberCountingPdfFactory::Class_Name()
{
   return "RooStats::NumberCountingPdfFactory";
}

//______________________________________________________________________________
const char *NumberCountingPdfFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumberCountingPdfFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NumberCountingPdfFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumberCountingPdfFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NumberCountingPdfFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumberCountingPdfFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NumberCountingPdfFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumberCountingPdfFactory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr PdfProposal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PdfProposal::Class_Name()
{
   return "RooStats::PdfProposal";
}

//______________________________________________________________________________
const char *PdfProposal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PdfProposal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PdfProposal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PdfProposal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PdfProposal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PdfProposal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PdfProposal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PdfProposal*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProfileInspector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ProfileInspector::Class_Name()
{
   return "RooStats::ProfileInspector";
}

//______________________________________________________________________________
const char *ProfileInspector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileInspector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ProfileInspector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileInspector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProfileInspector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileInspector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProfileInspector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileInspector*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProfileLikelihoodCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ProfileLikelihoodCalculator::Class_Name()
{
   return "RooStats::ProfileLikelihoodCalculator";
}

//______________________________________________________________________________
const char *ProfileLikelihoodCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ProfileLikelihoodCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProfileLikelihoodCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProfileLikelihoodCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr UniformProposal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniformProposal::Class_Name()
{
   return "RooStats::UniformProposal";
}

//______________________________________________________________________________
const char *UniformProposal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UniformProposal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniformProposal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UniformProposal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniformProposal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UniformProposal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniformProposal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UniformProposal*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProposalHelper::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ProposalHelper::Class_Name()
{
   return "RooStats::ProposalHelper";
}

//______________________________________________________________________________
const char *ProposalHelper::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalHelper*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ProposalHelper::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalHelper*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProposalHelper::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalHelper*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProposalHelper::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalHelper*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr RatioOfProfiledLikelihoodsTestStat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RatioOfProfiledLikelihoodsTestStat::Class_Name()
{
   return "RooStats::RatioOfProfiledLikelihoodsTestStat";
}

//______________________________________________________________________________
const char *RatioOfProfiledLikelihoodsTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RatioOfProfiledLikelihoodsTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RatioOfProfiledLikelihoodsTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RatioOfProfiledLikelihoodsTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SPlot::Class_Name()
{
   return "RooStats::SPlot";
}

//______________________________________________________________________________
const char *SPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SPlot*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SequentialProposal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SequentialProposal::Class_Name()
{
   return "RooStats::SequentialProposal";
}

//______________________________________________________________________________
const char *SequentialProposal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SequentialProposal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SequentialProposal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SequentialProposal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SequentialProposal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SequentialProposal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SequentialProposal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SequentialProposal*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SimpleLikelihoodRatioTestStat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SimpleLikelihoodRatioTestStat::Class_Name()
{
   return "RooStats::SimpleLikelihoodRatioTestStat";
}

//______________________________________________________________________________
const char *SimpleLikelihoodRatioTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleLikelihoodRatioTestStat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SimpleLikelihoodRatioTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleLikelihoodRatioTestStat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimpleLikelihoodRatioTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleLikelihoodRatioTestStat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimpleLikelihoodRatioTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleLikelihoodRatioTestStat*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ToyMCImportanceSampler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ToyMCImportanceSampler::Class_Name()
{
   return "RooStats::ToyMCImportanceSampler";
}

//______________________________________________________________________________
const char *ToyMCImportanceSampler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCImportanceSampler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ToyMCImportanceSampler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCImportanceSampler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ToyMCImportanceSampler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCImportanceSampler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ToyMCImportanceSampler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCImportanceSampler*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ToyMCStudy::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ToyMCStudy::Class_Name()
{
   return "RooStats::ToyMCStudy";
}

//______________________________________________________________________________
const char *ToyMCStudy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCStudy*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ToyMCStudy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCStudy*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ToyMCStudy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCStudy*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ToyMCStudy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCStudy*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ToyMCPayload::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ToyMCPayload::Class_Name()
{
   return "RooStats::ToyMCPayload";
}

//______________________________________________________________________________
const char *ToyMCPayload::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCPayload*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ToyMCPayload::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCPayload*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ToyMCPayload::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCPayload*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ToyMCPayload::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCPayload*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr UpperLimitMCSModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UpperLimitMCSModule::Class_Name()
{
   return "RooStats::UpperLimitMCSModule";
}

//______________________________________________________________________________
const char *UpperLimitMCSModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UpperLimitMCSModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UpperLimitMCSModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UpperLimitMCSModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UpperLimitMCSModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UpperLimitMCSModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UpperLimitMCSModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UpperLimitMCSModule*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
void HypoTestCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestCalculator(void *p) {
      delete ((::RooStats::HypoTestCalculator*)p);
   }
   static void deleteArray_RooStatscLcLHypoTestCalculator(void *p) {
      delete [] ((::RooStats::HypoTestCalculator*)p);
   }
   static void destruct_RooStatscLcLHypoTestCalculator(void *p) {
      typedef ::RooStats::HypoTestCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestCalculator

namespace RooStats {
//______________________________________________________________________________
void ModelConfig::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ModelConfig.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ModelConfig::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ModelConfig::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLModelConfig(void *p) {
      return  p ? new(p) ::RooStats::ModelConfig : new ::RooStats::ModelConfig;
   }
   static void *newArray_RooStatscLcLModelConfig(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::ModelConfig[nElements] : new ::RooStats::ModelConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLModelConfig(void *p) {
      delete ((::RooStats::ModelConfig*)p);
   }
   static void deleteArray_RooStatscLcLModelConfig(void *p) {
      delete [] ((::RooStats::ModelConfig*)p);
   }
   static void destruct_RooStatscLcLModelConfig(void *p) {
      typedef ::RooStats::ModelConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ModelConfig

namespace RooStats {
//______________________________________________________________________________
void TestStatistic::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::TestStatistic.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::TestStatistic::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::TestStatistic::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLTestStatistic(void *p) {
      delete ((::RooStats::TestStatistic*)p);
   }
   static void deleteArray_RooStatscLcLTestStatistic(void *p) {
      delete [] ((::RooStats::TestStatistic*)p);
   }
   static void destruct_RooStatscLcLTestStatistic(void *p) {
      typedef ::RooStats::TestStatistic current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::TestStatistic

namespace RooStats {
//______________________________________________________________________________
void TestStatSampler::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::TestStatSampler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::TestStatSampler::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::TestStatSampler::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLTestStatSampler(void *p) {
      delete ((::RooStats::TestStatSampler*)p);
   }
   static void deleteArray_RooStatscLcLTestStatSampler(void *p) {
      delete [] ((::RooStats::TestStatSampler*)p);
   }
   static void destruct_RooStatscLcLTestStatSampler(void *p) {
      typedef ::RooStats::TestStatSampler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::TestStatSampler

namespace RooStats {
//______________________________________________________________________________
void SamplingDistribution::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SamplingDistribution.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SamplingDistribution::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SamplingDistribution::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSamplingDistribution(void *p) {
      return  p ? new(p) ::RooStats::SamplingDistribution : new ::RooStats::SamplingDistribution;
   }
   static void *newArray_RooStatscLcLSamplingDistribution(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SamplingDistribution[nElements] : new ::RooStats::SamplingDistribution[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSamplingDistribution(void *p) {
      delete ((::RooStats::SamplingDistribution*)p);
   }
   static void deleteArray_RooStatscLcLSamplingDistribution(void *p) {
      delete [] ((::RooStats::SamplingDistribution*)p);
   }
   static void destruct_RooStatscLcLSamplingDistribution(void *p) {
      typedef ::RooStats::SamplingDistribution current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SamplingDistribution

namespace RooStats {
//______________________________________________________________________________
void HypoTestResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestResult::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHypoTestResult(void *p) {
      return  p ? new(p) ::RooStats::HypoTestResult : new ::RooStats::HypoTestResult;
   }
   static void *newArray_RooStatscLcLHypoTestResult(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HypoTestResult[nElements] : new ::RooStats::HypoTestResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestResult(void *p) {
      delete ((::RooStats::HypoTestResult*)p);
   }
   static void deleteArray_RooStatscLcLHypoTestResult(void *p) {
      delete [] ((::RooStats::HypoTestResult*)p);
   }
   static void destruct_RooStatscLcLHypoTestResult(void *p) {
      typedef ::RooStats::HypoTestResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestResult

namespace RooStats {
//______________________________________________________________________________
void HypoTestCalculatorGeneric::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestCalculatorGeneric.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestCalculatorGeneric::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestCalculatorGeneric::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestCalculatorGeneric(void *p) {
      delete ((::RooStats::HypoTestCalculatorGeneric*)p);
   }
   static void deleteArray_RooStatscLcLHypoTestCalculatorGeneric(void *p) {
      delete [] ((::RooStats::HypoTestCalculatorGeneric*)p);
   }
   static void destruct_RooStatscLcLHypoTestCalculatorGeneric(void *p) {
      typedef ::RooStats::HypoTestCalculatorGeneric current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestCalculatorGeneric

namespace RooStats {
//______________________________________________________________________________
void AsymptoticCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::AsymptoticCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::AsymptoticCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::AsymptoticCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLAsymptoticCalculator(void *p) {
      delete ((::RooStats::AsymptoticCalculator*)p);
   }
   static void deleteArray_RooStatscLcLAsymptoticCalculator(void *p) {
      delete [] ((::RooStats::AsymptoticCalculator*)p);
   }
   static void destruct_RooStatscLcLAsymptoticCalculator(void *p) {
      typedef ::RooStats::AsymptoticCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::AsymptoticCalculator

namespace RooStats {
//______________________________________________________________________________
void IntervalCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::IntervalCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::IntervalCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::IntervalCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLIntervalCalculator(void *p) {
      delete ((::RooStats::IntervalCalculator*)p);
   }
   static void deleteArray_RooStatscLcLIntervalCalculator(void *p) {
      delete [] ((::RooStats::IntervalCalculator*)p);
   }
   static void destruct_RooStatscLcLIntervalCalculator(void *p) {
      typedef ::RooStats::IntervalCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::IntervalCalculator

namespace RooStats {
//______________________________________________________________________________
void ConfInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ConfInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ConfInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ConfInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLConfInterval(void *p) {
      delete ((::RooStats::ConfInterval*)p);
   }
   static void deleteArray_RooStatscLcLConfInterval(void *p) {
      delete [] ((::RooStats::ConfInterval*)p);
   }
   static void destruct_RooStatscLcLConfInterval(void *p) {
      typedef ::RooStats::ConfInterval current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ConfInterval

namespace RooStats {
//______________________________________________________________________________
void SimpleInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SimpleInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SimpleInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SimpleInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSimpleInterval(void *p) {
      return  p ? new(p) ::RooStats::SimpleInterval : new ::RooStats::SimpleInterval;
   }
   static void *newArray_RooStatscLcLSimpleInterval(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SimpleInterval[nElements] : new ::RooStats::SimpleInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSimpleInterval(void *p) {
      delete ((::RooStats::SimpleInterval*)p);
   }
   static void deleteArray_RooStatscLcLSimpleInterval(void *p) {
      delete [] ((::RooStats::SimpleInterval*)p);
   }
   static void destruct_RooStatscLcLSimpleInterval(void *p) {
      typedef ::RooStats::SimpleInterval current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SimpleInterval

namespace RooStats {
//______________________________________________________________________________
void BayesianCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::BayesianCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::BayesianCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::BayesianCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLBayesianCalculator(void *p) {
      return  p ? new(p) ::RooStats::BayesianCalculator : new ::RooStats::BayesianCalculator;
   }
   static void *newArray_RooStatscLcLBayesianCalculator(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::BayesianCalculator[nElements] : new ::RooStats::BayesianCalculator[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLBayesianCalculator(void *p) {
      delete ((::RooStats::BayesianCalculator*)p);
   }
   static void deleteArray_RooStatscLcLBayesianCalculator(void *p) {
      delete [] ((::RooStats::BayesianCalculator*)p);
   }
   static void destruct_RooStatscLcLBayesianCalculator(void *p) {
      typedef ::RooStats::BayesianCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::BayesianCalculator

namespace RooStats {
//______________________________________________________________________________
void BernsteinCorrection::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::BernsteinCorrection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::BernsteinCorrection::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::BernsteinCorrection::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLBernsteinCorrection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::BernsteinCorrection : new ::RooStats::BernsteinCorrection;
   }
   static void *newArray_RooStatscLcLBernsteinCorrection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::BernsteinCorrection[nElements] : new ::RooStats::BernsteinCorrection[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLBernsteinCorrection(void *p) {
      delete ((::RooStats::BernsteinCorrection*)p);
   }
   static void deleteArray_RooStatscLcLBernsteinCorrection(void *p) {
      delete [] ((::RooStats::BernsteinCorrection*)p);
   }
   static void destruct_RooStatscLcLBernsteinCorrection(void *p) {
      typedef ::RooStats::BernsteinCorrection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::BernsteinCorrection

namespace RooStats {
//______________________________________________________________________________
void CombinedCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::CombinedCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::CombinedCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::CombinedCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLCombinedCalculator(void *p) {
      delete ((::RooStats::CombinedCalculator*)p);
   }
   static void deleteArray_RooStatscLcLCombinedCalculator(void *p) {
      delete [] ((::RooStats::CombinedCalculator*)p);
   }
   static void destruct_RooStatscLcLCombinedCalculator(void *p) {
      typedef ::RooStats::CombinedCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::CombinedCalculator

namespace RooStats {
//______________________________________________________________________________
void SamplingSummaryLookup::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SamplingSummaryLookup.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SamplingSummaryLookup::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SamplingSummaryLookup::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSamplingSummaryLookup(void *p) {
      return  p ? new(p) ::RooStats::SamplingSummaryLookup : new ::RooStats::SamplingSummaryLookup;
   }
   static void *newArray_RooStatscLcLSamplingSummaryLookup(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SamplingSummaryLookup[nElements] : new ::RooStats::SamplingSummaryLookup[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSamplingSummaryLookup(void *p) {
      delete ((::RooStats::SamplingSummaryLookup*)p);
   }
   static void deleteArray_RooStatscLcLSamplingSummaryLookup(void *p) {
      delete [] ((::RooStats::SamplingSummaryLookup*)p);
   }
   static void destruct_RooStatscLcLSamplingSummaryLookup(void *p) {
      typedef ::RooStats::SamplingSummaryLookup current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SamplingSummaryLookup

namespace RooStats {
//______________________________________________________________________________
void AcceptanceRegion::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::AcceptanceRegion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::AcceptanceRegion::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::AcceptanceRegion::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLAcceptanceRegion(void *p) {
      return  p ? new(p) ::RooStats::AcceptanceRegion : new ::RooStats::AcceptanceRegion;
   }
   static void *newArray_RooStatscLcLAcceptanceRegion(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::AcceptanceRegion[nElements] : new ::RooStats::AcceptanceRegion[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLAcceptanceRegion(void *p) {
      delete ((::RooStats::AcceptanceRegion*)p);
   }
   static void deleteArray_RooStatscLcLAcceptanceRegion(void *p) {
      delete [] ((::RooStats::AcceptanceRegion*)p);
   }
   static void destruct_RooStatscLcLAcceptanceRegion(void *p) {
      typedef ::RooStats::AcceptanceRegion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::AcceptanceRegion

namespace RooStats {
//______________________________________________________________________________
void SamplingSummary::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SamplingSummary.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SamplingSummary::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SamplingSummary::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSamplingSummary(void *p) {
      return  p ? new(p) ::RooStats::SamplingSummary : new ::RooStats::SamplingSummary;
   }
   static void *newArray_RooStatscLcLSamplingSummary(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SamplingSummary[nElements] : new ::RooStats::SamplingSummary[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSamplingSummary(void *p) {
      delete ((::RooStats::SamplingSummary*)p);
   }
   static void deleteArray_RooStatscLcLSamplingSummary(void *p) {
      delete [] ((::RooStats::SamplingSummary*)p);
   }
   static void destruct_RooStatscLcLSamplingSummary(void *p) {
      typedef ::RooStats::SamplingSummary current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SamplingSummary

namespace RooStats {
//______________________________________________________________________________
void ConfidenceBelt::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ConfidenceBelt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ConfidenceBelt::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ConfidenceBelt::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLConfidenceBelt(void *p) {
      return  p ? new(p) ::RooStats::ConfidenceBelt : new ::RooStats::ConfidenceBelt;
   }
   static void *newArray_RooStatscLcLConfidenceBelt(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::ConfidenceBelt[nElements] : new ::RooStats::ConfidenceBelt[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLConfidenceBelt(void *p) {
      delete ((::RooStats::ConfidenceBelt*)p);
   }
   static void deleteArray_RooStatscLcLConfidenceBelt(void *p) {
      delete [] ((::RooStats::ConfidenceBelt*)p);
   }
   static void destruct_RooStatscLcLConfidenceBelt(void *p) {
      typedef ::RooStats::ConfidenceBelt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ConfidenceBelt

namespace RooStats {
//______________________________________________________________________________
void DebuggingSampler::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::DebuggingSampler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::DebuggingSampler::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::DebuggingSampler::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLDebuggingSampler(void *p) {
      delete ((::RooStats::DebuggingSampler*)p);
   }
   static void deleteArray_RooStatscLcLDebuggingSampler(void *p) {
      delete [] ((::RooStats::DebuggingSampler*)p);
   }
   static void destruct_RooStatscLcLDebuggingSampler(void *p) {
      typedef ::RooStats::DebuggingSampler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::DebuggingSampler

namespace RooStats {
//______________________________________________________________________________
void ProofConfig::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProofConfig.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProofConfig::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProofConfig::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLProofConfig(void *p) {
      delete ((::RooStats::ProofConfig*)p);
   }
   static void deleteArray_RooStatscLcLProofConfig(void *p) {
      delete [] ((::RooStats::ProofConfig*)p);
   }
   static void destruct_RooStatscLcLProofConfig(void *p) {
      typedef ::RooStats::ProofConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProofConfig

namespace RooStats {
//______________________________________________________________________________
void ToyMCSampler::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ToyMCSampler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ToyMCSampler::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ToyMCSampler::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLToyMCSampler(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ToyMCSampler : new ::RooStats::ToyMCSampler;
   }
   static void *newArray_RooStatscLcLToyMCSampler(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ToyMCSampler[nElements] : new ::RooStats::ToyMCSampler[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLToyMCSampler(void *p) {
      delete ((::RooStats::ToyMCSampler*)p);
   }
   static void deleteArray_RooStatscLcLToyMCSampler(void *p) {
      delete [] ((::RooStats::ToyMCSampler*)p);
   }
   static void destruct_RooStatscLcLToyMCSampler(void *p) {
      typedef ::RooStats::ToyMCSampler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ToyMCSampler

namespace RooStats {
//______________________________________________________________________________
void DebuggingTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::DebuggingTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::DebuggingTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::DebuggingTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLDebuggingTestStat(void *p) {
      delete ((::RooStats::DebuggingTestStat*)p);
   }
   static void deleteArray_RooStatscLcLDebuggingTestStat(void *p) {
      delete [] ((::RooStats::DebuggingTestStat*)p);
   }
   static void destruct_RooStatscLcLDebuggingTestStat(void *p) {
      typedef ::RooStats::DebuggingTestStat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::DebuggingTestStat

namespace RooStats {
//______________________________________________________________________________
void DetailedOutputAggregator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::DetailedOutputAggregator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::DetailedOutputAggregator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::DetailedOutputAggregator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLDetailedOutputAggregator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::DetailedOutputAggregator : new ::RooStats::DetailedOutputAggregator;
   }
   static void *newArray_RooStatscLcLDetailedOutputAggregator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::DetailedOutputAggregator[nElements] : new ::RooStats::DetailedOutputAggregator[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLDetailedOutputAggregator(void *p) {
      delete ((::RooStats::DetailedOutputAggregator*)p);
   }
   static void deleteArray_RooStatscLcLDetailedOutputAggregator(void *p) {
      delete [] ((::RooStats::DetailedOutputAggregator*)p);
   }
   static void destruct_RooStatscLcLDetailedOutputAggregator(void *p) {
      typedef ::RooStats::DetailedOutputAggregator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::DetailedOutputAggregator

namespace RooStats {
//______________________________________________________________________________
void PointSetInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::PointSetInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::PointSetInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::PointSetInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLPointSetInterval(void *p) {
      return  p ? new(p) ::RooStats::PointSetInterval : new ::RooStats::PointSetInterval;
   }
   static void *newArray_RooStatscLcLPointSetInterval(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::PointSetInterval[nElements] : new ::RooStats::PointSetInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLPointSetInterval(void *p) {
      delete ((::RooStats::PointSetInterval*)p);
   }
   static void deleteArray_RooStatscLcLPointSetInterval(void *p) {
      delete [] ((::RooStats::PointSetInterval*)p);
   }
   static void destruct_RooStatscLcLPointSetInterval(void *p) {
      typedef ::RooStats::PointSetInterval current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::PointSetInterval

namespace RooStats {
//______________________________________________________________________________
void FeldmanCousins::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::FeldmanCousins.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::FeldmanCousins::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::FeldmanCousins::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLFeldmanCousins(void *p) {
      delete ((::RooStats::FeldmanCousins*)p);
   }
   static void deleteArray_RooStatscLcLFeldmanCousins(void *p) {
      delete [] ((::RooStats::FeldmanCousins*)p);
   }
   static void destruct_RooStatscLcLFeldmanCousins(void *p) {
      typedef ::RooStats::FeldmanCousins current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::FeldmanCousins

namespace RooStats {
//______________________________________________________________________________
void FrequentistCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::FrequentistCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::FrequentistCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::FrequentistCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLFrequentistCalculator(void *p) {
      delete ((::RooStats::FrequentistCalculator*)p);
   }
   static void deleteArray_RooStatscLcLFrequentistCalculator(void *p) {
      delete [] ((::RooStats::FrequentistCalculator*)p);
   }
   static void destruct_RooStatscLcLFrequentistCalculator(void *p) {
      typedef ::RooStats::FrequentistCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::FrequentistCalculator

namespace RooStats {
//______________________________________________________________________________
void HLFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HLFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HLFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HLFactory::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHLFactory(void *p) {
      return  p ? new(p) ::RooStats::HLFactory : new ::RooStats::HLFactory;
   }
   static void *newArray_RooStatscLcLHLFactory(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HLFactory[nElements] : new ::RooStats::HLFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHLFactory(void *p) {
      delete ((::RooStats::HLFactory*)p);
   }
   static void deleteArray_RooStatscLcLHLFactory(void *p) {
      delete [] ((::RooStats::HLFactory*)p);
   }
   static void destruct_RooStatscLcLHLFactory(void *p) {
      typedef ::RooStats::HLFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HLFactory

namespace RooStats {
//______________________________________________________________________________
void Heaviside::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::Heaviside.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::Heaviside::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::Heaviside::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHeaviside(void *p) {
      return  p ? new(p) ::RooStats::Heaviside : new ::RooStats::Heaviside;
   }
   static void *newArray_RooStatscLcLHeaviside(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::Heaviside[nElements] : new ::RooStats::Heaviside[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHeaviside(void *p) {
      delete ((::RooStats::Heaviside*)p);
   }
   static void deleteArray_RooStatscLcLHeaviside(void *p) {
      delete [] ((::RooStats::Heaviside*)p);
   }
   static void destruct_RooStatscLcLHeaviside(void *p) {
      typedef ::RooStats::Heaviside current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::Heaviside

namespace RooStats {
//______________________________________________________________________________
void HybridCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HybridCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HybridCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HybridCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHybridCalculator(void *p) {
      delete ((::RooStats::HybridCalculator*)p);
   }
   static void deleteArray_RooStatscLcLHybridCalculator(void *p) {
      delete [] ((::RooStats::HybridCalculator*)p);
   }
   static void destruct_RooStatscLcLHybridCalculator(void *p) {
      typedef ::RooStats::HybridCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HybridCalculator

namespace RooStats {
//______________________________________________________________________________
void HybridResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HybridResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HybridResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HybridResult::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHybridResult(void *p) {
      return  p ? new(p) ::RooStats::HybridResult : new ::RooStats::HybridResult;
   }
   static void *newArray_RooStatscLcLHybridResult(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HybridResult[nElements] : new ::RooStats::HybridResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHybridResult(void *p) {
      delete ((::RooStats::HybridResult*)p);
   }
   static void deleteArray_RooStatscLcLHybridResult(void *p) {
      delete [] ((::RooStats::HybridResult*)p);
   }
   static void destruct_RooStatscLcLHybridResult(void *p) {
      typedef ::RooStats::HybridResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HybridResult

namespace RooStats {
//______________________________________________________________________________
void HybridCalculatorOriginal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HybridCalculatorOriginal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HybridCalculatorOriginal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HybridCalculatorOriginal::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHybridCalculatorOriginal(void *p) {
      return  p ? new(p) ::RooStats::HybridCalculatorOriginal : new ::RooStats::HybridCalculatorOriginal;
   }
   static void *newArray_RooStatscLcLHybridCalculatorOriginal(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HybridCalculatorOriginal[nElements] : new ::RooStats::HybridCalculatorOriginal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHybridCalculatorOriginal(void *p) {
      delete ((::RooStats::HybridCalculatorOriginal*)p);
   }
   static void deleteArray_RooStatscLcLHybridCalculatorOriginal(void *p) {
      delete [] ((::RooStats::HybridCalculatorOriginal*)p);
   }
   static void destruct_RooStatscLcLHybridCalculatorOriginal(void *p) {
      typedef ::RooStats::HybridCalculatorOriginal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HybridCalculatorOriginal

namespace RooStats {
//______________________________________________________________________________
void HybridPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HybridPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HybridPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HybridPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHybridPlot(void *p) {
      delete ((::RooStats::HybridPlot*)p);
   }
   static void deleteArray_RooStatscLcLHybridPlot(void *p) {
      delete [] ((::RooStats::HybridPlot*)p);
   }
   static void destruct_RooStatscLcLHybridPlot(void *p) {
      typedef ::RooStats::HybridPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HybridPlot

namespace RooStats {
//______________________________________________________________________________
void HypoTestInverterResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestInverterResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestInverterResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestInverterResult::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHypoTestInverterResult(void *p) {
      return  p ? new(p) ::RooStats::HypoTestInverterResult : new ::RooStats::HypoTestInverterResult;
   }
   static void *newArray_RooStatscLcLHypoTestInverterResult(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HypoTestInverterResult[nElements] : new ::RooStats::HypoTestInverterResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestInverterResult(void *p) {
      delete ((::RooStats::HypoTestInverterResult*)p);
   }
   static void deleteArray_RooStatscLcLHypoTestInverterResult(void *p) {
      delete [] ((::RooStats::HypoTestInverterResult*)p);
   }
   static void destruct_RooStatscLcLHypoTestInverterResult(void *p) {
      typedef ::RooStats::HypoTestInverterResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestInverterResult

namespace RooStats {
//______________________________________________________________________________
void HypoTestInverter::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestInverter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestInverter::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestInverter::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHypoTestInverter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HypoTestInverter : new ::RooStats::HypoTestInverter;
   }
   static void *newArray_RooStatscLcLHypoTestInverter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HypoTestInverter[nElements] : new ::RooStats::HypoTestInverter[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestInverter(void *p) {
      delete ((::RooStats::HypoTestInverter*)p);
   }
   static void deleteArray_RooStatscLcLHypoTestInverter(void *p) {
      delete [] ((::RooStats::HypoTestInverter*)p);
   }
   static void destruct_RooStatscLcLHypoTestInverter(void *p) {
      typedef ::RooStats::HypoTestInverter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestInverter

namespace RooStats {
//______________________________________________________________________________
void HypoTestInverterOriginal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestInverterOriginal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestInverterOriginal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestInverterOriginal::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHypoTestInverterOriginal(void *p) {
      return  p ? new(p) ::RooStats::HypoTestInverterOriginal : new ::RooStats::HypoTestInverterOriginal;
   }
   static void *newArray_RooStatscLcLHypoTestInverterOriginal(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HypoTestInverterOriginal[nElements] : new ::RooStats::HypoTestInverterOriginal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestInverterOriginal(void *p) {
      delete ((::RooStats::HypoTestInverterOriginal*)p);
   }
   static void deleteArray_RooStatscLcLHypoTestInverterOriginal(void *p) {
      delete [] ((::RooStats::HypoTestInverterOriginal*)p);
   }
   static void destruct_RooStatscLcLHypoTestInverterOriginal(void *p) {
      typedef ::RooStats::HypoTestInverterOriginal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestInverterOriginal

namespace RooStats {
//______________________________________________________________________________
void HypoTestInverterPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestInverterPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestInverterPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestInverterPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestInverterPlot(void *p) {
      delete ((::RooStats::HypoTestInverterPlot*)p);
   }
   static void deleteArray_RooStatscLcLHypoTestInverterPlot(void *p) {
      delete [] ((::RooStats::HypoTestInverterPlot*)p);
   }
   static void destruct_RooStatscLcLHypoTestInverterPlot(void *p) {
      typedef ::RooStats::HypoTestInverterPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestInverterPlot

namespace RooStats {
//______________________________________________________________________________
void SamplingDistPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SamplingDistPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SamplingDistPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SamplingDistPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSamplingDistPlot(void *p) {
      return  p ? new(p) ::RooStats::SamplingDistPlot : new ::RooStats::SamplingDistPlot;
   }
   static void *newArray_RooStatscLcLSamplingDistPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SamplingDistPlot[nElements] : new ::RooStats::SamplingDistPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSamplingDistPlot(void *p) {
      delete ((::RooStats::SamplingDistPlot*)p);
   }
   static void deleteArray_RooStatscLcLSamplingDistPlot(void *p) {
      delete [] ((::RooStats::SamplingDistPlot*)p);
   }
   static void destruct_RooStatscLcLSamplingDistPlot(void *p) {
      typedef ::RooStats::SamplingDistPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SamplingDistPlot

namespace RooStats {
//______________________________________________________________________________
void HypoTestPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHypoTestPlot(void *p) {
      return  p ? new(p) ::RooStats::HypoTestPlot : new ::RooStats::HypoTestPlot;
   }
   static void *newArray_RooStatscLcLHypoTestPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HypoTestPlot[nElements] : new ::RooStats::HypoTestPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestPlot(void *p) {
      delete ((::RooStats::HypoTestPlot*)p);
   }
   static void deleteArray_RooStatscLcLHypoTestPlot(void *p) {
      delete [] ((::RooStats::HypoTestPlot*)p);
   }
   static void destruct_RooStatscLcLHypoTestPlot(void *p) {
      typedef ::RooStats::HypoTestPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestPlot

namespace RooStats {
//______________________________________________________________________________
void LikelihoodInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::LikelihoodInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::LikelihoodInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::LikelihoodInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLLikelihoodInterval(void *p) {
      return  p ? new(p) ::RooStats::LikelihoodInterval : new ::RooStats::LikelihoodInterval;
   }
   static void *newArray_RooStatscLcLLikelihoodInterval(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::LikelihoodInterval[nElements] : new ::RooStats::LikelihoodInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLLikelihoodInterval(void *p) {
      delete ((::RooStats::LikelihoodInterval*)p);
   }
   static void deleteArray_RooStatscLcLLikelihoodInterval(void *p) {
      delete [] ((::RooStats::LikelihoodInterval*)p);
   }
   static void destruct_RooStatscLcLLikelihoodInterval(void *p) {
      typedef ::RooStats::LikelihoodInterval current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::LikelihoodInterval

namespace RooStats {
//______________________________________________________________________________
void LikelihoodIntervalPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::LikelihoodIntervalPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::LikelihoodIntervalPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::LikelihoodIntervalPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLLikelihoodIntervalPlot(void *p) {
      return  p ? new(p) ::RooStats::LikelihoodIntervalPlot : new ::RooStats::LikelihoodIntervalPlot;
   }
   static void *newArray_RooStatscLcLLikelihoodIntervalPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::LikelihoodIntervalPlot[nElements] : new ::RooStats::LikelihoodIntervalPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLLikelihoodIntervalPlot(void *p) {
      delete ((::RooStats::LikelihoodIntervalPlot*)p);
   }
   static void deleteArray_RooStatscLcLLikelihoodIntervalPlot(void *p) {
      delete [] ((::RooStats::LikelihoodIntervalPlot*)p);
   }
   static void destruct_RooStatscLcLLikelihoodIntervalPlot(void *p) {
      typedef ::RooStats::LikelihoodIntervalPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::LikelihoodIntervalPlot

namespace RooStats {
//______________________________________________________________________________
void ProposalFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProposalFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProposalFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProposalFunction::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLProposalFunction(void *p) {
      delete ((::RooStats::ProposalFunction*)p);
   }
   static void deleteArray_RooStatscLcLProposalFunction(void *p) {
      delete [] ((::RooStats::ProposalFunction*)p);
   }
   static void destruct_RooStatscLcLProposalFunction(void *p) {
      typedef ::RooStats::ProposalFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProposalFunction

namespace RooStats {
//______________________________________________________________________________
void MarkovChain::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MarkovChain.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MarkovChain::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MarkovChain::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMarkovChain(void *p) {
      return  p ? new(p) ::RooStats::MarkovChain : new ::RooStats::MarkovChain;
   }
   static void *newArray_RooStatscLcLMarkovChain(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MarkovChain[nElements] : new ::RooStats::MarkovChain[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMarkovChain(void *p) {
      delete ((::RooStats::MarkovChain*)p);
   }
   static void deleteArray_RooStatscLcLMarkovChain(void *p) {
      delete [] ((::RooStats::MarkovChain*)p);
   }
   static void destruct_RooStatscLcLMarkovChain(void *p) {
      typedef ::RooStats::MarkovChain current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MarkovChain

namespace RooStats {
//______________________________________________________________________________
void MCMCInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MCMCInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MCMCInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MCMCInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMCMCInterval(void *p) {
      return  p ? new(p) ::RooStats::MCMCInterval : new ::RooStats::MCMCInterval;
   }
   static void *newArray_RooStatscLcLMCMCInterval(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MCMCInterval[nElements] : new ::RooStats::MCMCInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMCMCInterval(void *p) {
      delete ((::RooStats::MCMCInterval*)p);
   }
   static void deleteArray_RooStatscLcLMCMCInterval(void *p) {
      delete [] ((::RooStats::MCMCInterval*)p);
   }
   static void destruct_RooStatscLcLMCMCInterval(void *p) {
      typedef ::RooStats::MCMCInterval current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MCMCInterval

namespace RooStats {
//______________________________________________________________________________
void MCMCCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MCMCCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MCMCCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MCMCCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMCMCCalculator(void *p) {
      return  p ? new(p) ::RooStats::MCMCCalculator : new ::RooStats::MCMCCalculator;
   }
   static void *newArray_RooStatscLcLMCMCCalculator(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MCMCCalculator[nElements] : new ::RooStats::MCMCCalculator[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMCMCCalculator(void *p) {
      delete ((::RooStats::MCMCCalculator*)p);
   }
   static void deleteArray_RooStatscLcLMCMCCalculator(void *p) {
      delete [] ((::RooStats::MCMCCalculator*)p);
   }
   static void destruct_RooStatscLcLMCMCCalculator(void *p) {
      typedef ::RooStats::MCMCCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MCMCCalculator

namespace RooStats {
//______________________________________________________________________________
void MCMCIntervalPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MCMCIntervalPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MCMCIntervalPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MCMCIntervalPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMCMCIntervalPlot(void *p) {
      return  p ? new(p) ::RooStats::MCMCIntervalPlot : new ::RooStats::MCMCIntervalPlot;
   }
   static void *newArray_RooStatscLcLMCMCIntervalPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MCMCIntervalPlot[nElements] : new ::RooStats::MCMCIntervalPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMCMCIntervalPlot(void *p) {
      delete ((::RooStats::MCMCIntervalPlot*)p);
   }
   static void deleteArray_RooStatscLcLMCMCIntervalPlot(void *p) {
      delete [] ((::RooStats::MCMCIntervalPlot*)p);
   }
   static void destruct_RooStatscLcLMCMCIntervalPlot(void *p) {
      typedef ::RooStats::MCMCIntervalPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MCMCIntervalPlot

namespace RooStats {
//______________________________________________________________________________
void MaxLikelihoodEstimateTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MaxLikelihoodEstimateTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MaxLikelihoodEstimateTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MaxLikelihoodEstimateTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::MaxLikelihoodEstimateTestStat : new ::RooStats::MaxLikelihoodEstimateTestStat;
   }
   static void *newArray_RooStatscLcLMaxLikelihoodEstimateTestStat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::MaxLikelihoodEstimateTestStat[nElements] : new ::RooStats::MaxLikelihoodEstimateTestStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p) {
      delete ((::RooStats::MaxLikelihoodEstimateTestStat*)p);
   }
   static void deleteArray_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p) {
      delete [] ((::RooStats::MaxLikelihoodEstimateTestStat*)p);
   }
   static void destruct_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p) {
      typedef ::RooStats::MaxLikelihoodEstimateTestStat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MaxLikelihoodEstimateTestStat

namespace RooStats {
//______________________________________________________________________________
void MetropolisHastings::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MetropolisHastings.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MetropolisHastings::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MetropolisHastings::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMetropolisHastings(void *p) {
      return  p ? new(p) ::RooStats::MetropolisHastings : new ::RooStats::MetropolisHastings;
   }
   static void *newArray_RooStatscLcLMetropolisHastings(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MetropolisHastings[nElements] : new ::RooStats::MetropolisHastings[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMetropolisHastings(void *p) {
      delete ((::RooStats::MetropolisHastings*)p);
   }
   static void deleteArray_RooStatscLcLMetropolisHastings(void *p) {
      delete [] ((::RooStats::MetropolisHastings*)p);
   }
   static void destruct_RooStatscLcLMetropolisHastings(void *p) {
      typedef ::RooStats::MetropolisHastings current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MetropolisHastings

namespace RooStats {
//______________________________________________________________________________
void ProfileLikelihoodTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProfileLikelihoodTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProfileLikelihoodTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProfileLikelihoodTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLProfileLikelihoodTestStat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ProfileLikelihoodTestStat : new ::RooStats::ProfileLikelihoodTestStat;
   }
   static void *newArray_RooStatscLcLProfileLikelihoodTestStat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ProfileLikelihoodTestStat[nElements] : new ::RooStats::ProfileLikelihoodTestStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLProfileLikelihoodTestStat(void *p) {
      delete ((::RooStats::ProfileLikelihoodTestStat*)p);
   }
   static void deleteArray_RooStatscLcLProfileLikelihoodTestStat(void *p) {
      delete [] ((::RooStats::ProfileLikelihoodTestStat*)p);
   }
   static void destruct_RooStatscLcLProfileLikelihoodTestStat(void *p) {
      typedef ::RooStats::ProfileLikelihoodTestStat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProfileLikelihoodTestStat

namespace RooStats {
//______________________________________________________________________________
void MinNLLTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MinNLLTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MinNLLTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MinNLLTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMinNLLTestStat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::MinNLLTestStat : new ::RooStats::MinNLLTestStat;
   }
   static void *newArray_RooStatscLcLMinNLLTestStat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::MinNLLTestStat[nElements] : new ::RooStats::MinNLLTestStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMinNLLTestStat(void *p) {
      delete ((::RooStats::MinNLLTestStat*)p);
   }
   static void deleteArray_RooStatscLcLMinNLLTestStat(void *p) {
      delete [] ((::RooStats::MinNLLTestStat*)p);
   }
   static void destruct_RooStatscLcLMinNLLTestStat(void *p) {
      typedef ::RooStats::MinNLLTestStat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MinNLLTestStat

namespace RooStats {
//______________________________________________________________________________
void NeymanConstruction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::NeymanConstruction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::NeymanConstruction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::NeymanConstruction::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLNeymanConstruction(void *p) {
      delete ((::RooStats::NeymanConstruction*)p);
   }
   static void deleteArray_RooStatscLcLNeymanConstruction(void *p) {
      delete [] ((::RooStats::NeymanConstruction*)p);
   }
   static void destruct_RooStatscLcLNeymanConstruction(void *p) {
      typedef ::RooStats::NeymanConstruction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::NeymanConstruction

namespace RooStats {
//______________________________________________________________________________
void NumEventsTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::NumEventsTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::NumEventsTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::NumEventsTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLNumEventsTestStat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::NumEventsTestStat : new ::RooStats::NumEventsTestStat;
   }
   static void *newArray_RooStatscLcLNumEventsTestStat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::NumEventsTestStat[nElements] : new ::RooStats::NumEventsTestStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLNumEventsTestStat(void *p) {
      delete ((::RooStats::NumEventsTestStat*)p);
   }
   static void deleteArray_RooStatscLcLNumEventsTestStat(void *p) {
      delete [] ((::RooStats::NumEventsTestStat*)p);
   }
   static void destruct_RooStatscLcLNumEventsTestStat(void *p) {
      typedef ::RooStats::NumEventsTestStat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::NumEventsTestStat

namespace RooStats {
//______________________________________________________________________________
void NumberCountingPdfFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::NumberCountingPdfFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::NumberCountingPdfFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::NumberCountingPdfFactory::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLNumberCountingPdfFactory(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::NumberCountingPdfFactory : new ::RooStats::NumberCountingPdfFactory;
   }
   static void *newArray_RooStatscLcLNumberCountingPdfFactory(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::NumberCountingPdfFactory[nElements] : new ::RooStats::NumberCountingPdfFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLNumberCountingPdfFactory(void *p) {
      delete ((::RooStats::NumberCountingPdfFactory*)p);
   }
   static void deleteArray_RooStatscLcLNumberCountingPdfFactory(void *p) {
      delete [] ((::RooStats::NumberCountingPdfFactory*)p);
   }
   static void destruct_RooStatscLcLNumberCountingPdfFactory(void *p) {
      typedef ::RooStats::NumberCountingPdfFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::NumberCountingPdfFactory

namespace RooStats {
//______________________________________________________________________________
void PdfProposal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::PdfProposal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::PdfProposal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::PdfProposal::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLPdfProposal(void *p) {
      return  p ? new(p) ::RooStats::PdfProposal : new ::RooStats::PdfProposal;
   }
   static void *newArray_RooStatscLcLPdfProposal(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::PdfProposal[nElements] : new ::RooStats::PdfProposal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLPdfProposal(void *p) {
      delete ((::RooStats::PdfProposal*)p);
   }
   static void deleteArray_RooStatscLcLPdfProposal(void *p) {
      delete [] ((::RooStats::PdfProposal*)p);
   }
   static void destruct_RooStatscLcLPdfProposal(void *p) {
      typedef ::RooStats::PdfProposal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::PdfProposal

namespace RooStats {
//______________________________________________________________________________
void ProfileInspector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProfileInspector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProfileInspector::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProfileInspector::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLProfileInspector(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ProfileInspector : new ::RooStats::ProfileInspector;
   }
   static void *newArray_RooStatscLcLProfileInspector(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ProfileInspector[nElements] : new ::RooStats::ProfileInspector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLProfileInspector(void *p) {
      delete ((::RooStats::ProfileInspector*)p);
   }
   static void deleteArray_RooStatscLcLProfileInspector(void *p) {
      delete [] ((::RooStats::ProfileInspector*)p);
   }
   static void destruct_RooStatscLcLProfileInspector(void *p) {
      typedef ::RooStats::ProfileInspector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProfileInspector

namespace RooStats {
//______________________________________________________________________________
void ProfileLikelihoodCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProfileLikelihoodCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProfileLikelihoodCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProfileLikelihoodCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLProfileLikelihoodCalculator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ProfileLikelihoodCalculator : new ::RooStats::ProfileLikelihoodCalculator;
   }
   static void *newArray_RooStatscLcLProfileLikelihoodCalculator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ProfileLikelihoodCalculator[nElements] : new ::RooStats::ProfileLikelihoodCalculator[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLProfileLikelihoodCalculator(void *p) {
      delete ((::RooStats::ProfileLikelihoodCalculator*)p);
   }
   static void deleteArray_RooStatscLcLProfileLikelihoodCalculator(void *p) {
      delete [] ((::RooStats::ProfileLikelihoodCalculator*)p);
   }
   static void destruct_RooStatscLcLProfileLikelihoodCalculator(void *p) {
      typedef ::RooStats::ProfileLikelihoodCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProfileLikelihoodCalculator

namespace RooStats {
//______________________________________________________________________________
void UniformProposal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::UniformProposal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::UniformProposal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::UniformProposal::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLUniformProposal(void *p) {
      return  p ? new(p) ::RooStats::UniformProposal : new ::RooStats::UniformProposal;
   }
   static void *newArray_RooStatscLcLUniformProposal(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::UniformProposal[nElements] : new ::RooStats::UniformProposal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLUniformProposal(void *p) {
      delete ((::RooStats::UniformProposal*)p);
   }
   static void deleteArray_RooStatscLcLUniformProposal(void *p) {
      delete [] ((::RooStats::UniformProposal*)p);
   }
   static void destruct_RooStatscLcLUniformProposal(void *p) {
      typedef ::RooStats::UniformProposal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::UniformProposal

namespace RooStats {
//______________________________________________________________________________
void ProposalHelper::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProposalHelper.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProposalHelper::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProposalHelper::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLProposalHelper(void *p) {
      return  p ? new(p) ::RooStats::ProposalHelper : new ::RooStats::ProposalHelper;
   }
   static void *newArray_RooStatscLcLProposalHelper(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::ProposalHelper[nElements] : new ::RooStats::ProposalHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLProposalHelper(void *p) {
      delete ((::RooStats::ProposalHelper*)p);
   }
   static void deleteArray_RooStatscLcLProposalHelper(void *p) {
      delete [] ((::RooStats::ProposalHelper*)p);
   }
   static void destruct_RooStatscLcLProposalHelper(void *p) {
      typedef ::RooStats::ProposalHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProposalHelper

namespace RooStats {
//______________________________________________________________________________
void RatioOfProfiledLikelihoodsTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::RatioOfProfiledLikelihoodsTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::RatioOfProfiledLikelihoodsTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::RatioOfProfiledLikelihoodsTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::RatioOfProfiledLikelihoodsTestStat : new ::RooStats::RatioOfProfiledLikelihoodsTestStat;
   }
   static void *newArray_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::RatioOfProfiledLikelihoodsTestStat[nElements] : new ::RooStats::RatioOfProfiledLikelihoodsTestStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p) {
      delete ((::RooStats::RatioOfProfiledLikelihoodsTestStat*)p);
   }
   static void deleteArray_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p) {
      delete [] ((::RooStats::RatioOfProfiledLikelihoodsTestStat*)p);
   }
   static void destruct_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p) {
      typedef ::RooStats::RatioOfProfiledLikelihoodsTestStat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::RatioOfProfiledLikelihoodsTestStat

namespace RooStats {
//______________________________________________________________________________
void SPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSPlot(void *p) {
      return  p ? new(p) ::RooStats::SPlot : new ::RooStats::SPlot;
   }
   static void *newArray_RooStatscLcLSPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SPlot[nElements] : new ::RooStats::SPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSPlot(void *p) {
      delete ((::RooStats::SPlot*)p);
   }
   static void deleteArray_RooStatscLcLSPlot(void *p) {
      delete [] ((::RooStats::SPlot*)p);
   }
   static void destruct_RooStatscLcLSPlot(void *p) {
      typedef ::RooStats::SPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SPlot

namespace RooStats {
//______________________________________________________________________________
void SequentialProposal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SequentialProposal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SequentialProposal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SequentialProposal::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSequentialProposal(void *p) {
      return  p ? new(p) ::RooStats::SequentialProposal : new ::RooStats::SequentialProposal;
   }
   static void *newArray_RooStatscLcLSequentialProposal(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SequentialProposal[nElements] : new ::RooStats::SequentialProposal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSequentialProposal(void *p) {
      delete ((::RooStats::SequentialProposal*)p);
   }
   static void deleteArray_RooStatscLcLSequentialProposal(void *p) {
      delete [] ((::RooStats::SequentialProposal*)p);
   }
   static void destruct_RooStatscLcLSequentialProposal(void *p) {
      typedef ::RooStats::SequentialProposal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SequentialProposal

namespace RooStats {
//______________________________________________________________________________
void SimpleLikelihoodRatioTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SimpleLikelihoodRatioTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SimpleLikelihoodRatioTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SimpleLikelihoodRatioTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::SimpleLikelihoodRatioTestStat : new ::RooStats::SimpleLikelihoodRatioTestStat;
   }
   static void *newArray_RooStatscLcLSimpleLikelihoodRatioTestStat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::SimpleLikelihoodRatioTestStat[nElements] : new ::RooStats::SimpleLikelihoodRatioTestStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p) {
      delete ((::RooStats::SimpleLikelihoodRatioTestStat*)p);
   }
   static void deleteArray_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p) {
      delete [] ((::RooStats::SimpleLikelihoodRatioTestStat*)p);
   }
   static void destruct_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p) {
      typedef ::RooStats::SimpleLikelihoodRatioTestStat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SimpleLikelihoodRatioTestStat

namespace RooStats {
//______________________________________________________________________________
void ToyMCImportanceSampler::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ToyMCImportanceSampler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ToyMCImportanceSampler::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ToyMCImportanceSampler::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLToyMCImportanceSampler(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ToyMCImportanceSampler : new ::RooStats::ToyMCImportanceSampler;
   }
   static void *newArray_RooStatscLcLToyMCImportanceSampler(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::ToyMCImportanceSampler[nElements] : new ::RooStats::ToyMCImportanceSampler[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLToyMCImportanceSampler(void *p) {
      delete ((::RooStats::ToyMCImportanceSampler*)p);
   }
   static void deleteArray_RooStatscLcLToyMCImportanceSampler(void *p) {
      delete [] ((::RooStats::ToyMCImportanceSampler*)p);
   }
   static void destruct_RooStatscLcLToyMCImportanceSampler(void *p) {
      typedef ::RooStats::ToyMCImportanceSampler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ToyMCImportanceSampler

namespace RooStats {
//______________________________________________________________________________
void ToyMCStudy::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ToyMCStudy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ToyMCStudy::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ToyMCStudy::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLToyMCStudy(void *p) {
      return  p ? new(p) ::RooStats::ToyMCStudy : new ::RooStats::ToyMCStudy;
   }
   static void *newArray_RooStatscLcLToyMCStudy(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::ToyMCStudy[nElements] : new ::RooStats::ToyMCStudy[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLToyMCStudy(void *p) {
      delete ((::RooStats::ToyMCStudy*)p);
   }
   static void deleteArray_RooStatscLcLToyMCStudy(void *p) {
      delete [] ((::RooStats::ToyMCStudy*)p);
   }
   static void destruct_RooStatscLcLToyMCStudy(void *p) {
      typedef ::RooStats::ToyMCStudy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ToyMCStudy

namespace RooStats {
//______________________________________________________________________________
void ToyMCPayload::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ToyMCPayload.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ToyMCPayload::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ToyMCPayload::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLToyMCPayload(void *p) {
      return  p ? new(p) ::RooStats::ToyMCPayload : new ::RooStats::ToyMCPayload;
   }
   static void *newArray_RooStatscLcLToyMCPayload(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::ToyMCPayload[nElements] : new ::RooStats::ToyMCPayload[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLToyMCPayload(void *p) {
      delete ((::RooStats::ToyMCPayload*)p);
   }
   static void deleteArray_RooStatscLcLToyMCPayload(void *p) {
      delete [] ((::RooStats::ToyMCPayload*)p);
   }
   static void destruct_RooStatscLcLToyMCPayload(void *p) {
      typedef ::RooStats::ToyMCPayload current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ToyMCPayload

namespace RooStats {
//______________________________________________________________________________
void UpperLimitMCSModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::UpperLimitMCSModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::UpperLimitMCSModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::UpperLimitMCSModule::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLUpperLimitMCSModule(void *p) {
      delete ((::RooStats::UpperLimitMCSModule*)p);
   }
   static void deleteArray_RooStatscLcLUpperLimitMCSModule(void *p) {
      delete [] ((::RooStats::UpperLimitMCSModule*)p);
   }
   static void destruct_RooStatscLcLUpperLimitMCSModule(void *p) {
      typedef ::RooStats::UpperLimitMCSModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::UpperLimitMCSModule

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
   static TClass *vectorlEconstsPRooArgSetmUgR_Dictionary();
   static void vectorlEconstsPRooArgSetmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPRooArgSetmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPRooArgSetmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPRooArgSetmUgR(void *p);
   static void deleteArray_vectorlEconstsPRooArgSetmUgR(void *p);
   static void destruct_vectorlEconstsPRooArgSetmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const RooArgSet*>*)
   {
      vector<const RooArgSet*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const RooArgSet*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const RooArgSet*>", -2, "vector", 216,
                  typeid(vector<const RooArgSet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPRooArgSetmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const RooArgSet*>) );
      instance.SetNew(&new_vectorlEconstsPRooArgSetmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPRooArgSetmUgR);
      instance.SetDelete(&delete_vectorlEconstsPRooArgSetmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPRooArgSetmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPRooArgSetmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const RooArgSet*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const RooArgSet*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPRooArgSetmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const RooArgSet*>*)0x0)->GetClass();
      vectorlEconstsPRooArgSetmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPRooArgSetmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPRooArgSetmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const RooArgSet*> : new vector<const RooArgSet*>;
   }
   static void *newArray_vectorlEconstsPRooArgSetmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const RooArgSet*>[nElements] : new vector<const RooArgSet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPRooArgSetmUgR(void *p) {
      delete ((vector<const RooArgSet*>*)p);
   }
   static void deleteArray_vectorlEconstsPRooArgSetmUgR(void *p) {
      delete [] ((vector<const RooArgSet*>*)p);
   }
   static void destruct_vectorlEconstsPRooArgSetmUgR(void *p) {
      typedef vector<const RooArgSet*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const RooArgSet*>

namespace ROOT {
   static TClass *vectorlERooStatscLcLTestStatisticmUgR_Dictionary();
   static void vectorlERooStatscLcLTestStatisticmUgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLTestStatisticmUgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLTestStatisticmUgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLTestStatisticmUgR(void *p);
   static void deleteArray_vectorlERooStatscLcLTestStatisticmUgR(void *p);
   static void destruct_vectorlERooStatscLcLTestStatisticmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::TestStatistic*>*)
   {
      vector<RooStats::TestStatistic*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::TestStatistic*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::TestStatistic*>", -2, "vector", 216,
                  typeid(vector<RooStats::TestStatistic*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLTestStatisticmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::TestStatistic*>) );
      instance.SetNew(&new_vectorlERooStatscLcLTestStatisticmUgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLTestStatisticmUgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLTestStatisticmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLTestStatisticmUgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLTestStatisticmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::TestStatistic*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::TestStatistic*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLTestStatisticmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::TestStatistic*>*)0x0)->GetClass();
      vectorlERooStatscLcLTestStatisticmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLTestStatisticmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLTestStatisticmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::TestStatistic*> : new vector<RooStats::TestStatistic*>;
   }
   static void *newArray_vectorlERooStatscLcLTestStatisticmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::TestStatistic*>[nElements] : new vector<RooStats::TestStatistic*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLTestStatisticmUgR(void *p) {
      delete ((vector<RooStats::TestStatistic*>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLTestStatisticmUgR(void *p) {
      delete [] ((vector<RooStats::TestStatistic*>*)p);
   }
   static void destruct_vectorlERooStatscLcLTestStatisticmUgR(void *p) {
      typedef vector<RooStats::TestStatistic*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::TestStatistic*>

namespace ROOT {
   static TClass *vectorlERooStatscLcLSamplingSummarygR_Dictionary();
   static void vectorlERooStatscLcLSamplingSummarygR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLSamplingSummarygR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLSamplingSummarygR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLSamplingSummarygR(void *p);
   static void deleteArray_vectorlERooStatscLcLSamplingSummarygR(void *p);
   static void destruct_vectorlERooStatscLcLSamplingSummarygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::SamplingSummary>*)
   {
      vector<RooStats::SamplingSummary> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::SamplingSummary>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::SamplingSummary>", -2, "vector", 216,
                  typeid(vector<RooStats::SamplingSummary>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLSamplingSummarygR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::SamplingSummary>) );
      instance.SetNew(&new_vectorlERooStatscLcLSamplingSummarygR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLSamplingSummarygR);
      instance.SetDelete(&delete_vectorlERooStatscLcLSamplingSummarygR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLSamplingSummarygR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLSamplingSummarygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::SamplingSummary> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::SamplingSummary>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLSamplingSummarygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::SamplingSummary>*)0x0)->GetClass();
      vectorlERooStatscLcLSamplingSummarygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLSamplingSummarygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLSamplingSummarygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::SamplingSummary> : new vector<RooStats::SamplingSummary>;
   }
   static void *newArray_vectorlERooStatscLcLSamplingSummarygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::SamplingSummary>[nElements] : new vector<RooStats::SamplingSummary>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLSamplingSummarygR(void *p) {
      delete ((vector<RooStats::SamplingSummary>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLSamplingSummarygR(void *p) {
      delete [] ((vector<RooStats::SamplingSummary>*)p);
   }
   static void destruct_vectorlERooStatscLcLSamplingSummarygR(void *p) {
      typedef vector<RooStats::SamplingSummary> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::SamplingSummary>

namespace ROOT {
   static TClass *vectorlERooAbsPdfmUgR_Dictionary();
   static void vectorlERooAbsPdfmUgR_TClassManip(TClass*);
   static void *new_vectorlERooAbsPdfmUgR(void *p = 0);
   static void *newArray_vectorlERooAbsPdfmUgR(Long_t size, void *p);
   static void delete_vectorlERooAbsPdfmUgR(void *p);
   static void deleteArray_vectorlERooAbsPdfmUgR(void *p);
   static void destruct_vectorlERooAbsPdfmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooAbsPdf*>*)
   {
      vector<RooAbsPdf*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooAbsPdf*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooAbsPdf*>", -2, "vector", 216,
                  typeid(vector<RooAbsPdf*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooAbsPdfmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooAbsPdf*>) );
      instance.SetNew(&new_vectorlERooAbsPdfmUgR);
      instance.SetNewArray(&newArray_vectorlERooAbsPdfmUgR);
      instance.SetDelete(&delete_vectorlERooAbsPdfmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooAbsPdfmUgR);
      instance.SetDestructor(&destruct_vectorlERooAbsPdfmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooAbsPdf*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooAbsPdf*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooAbsPdfmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooAbsPdf*>*)0x0)->GetClass();
      vectorlERooAbsPdfmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooAbsPdfmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooAbsPdfmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooAbsPdf*> : new vector<RooAbsPdf*>;
   }
   static void *newArray_vectorlERooAbsPdfmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooAbsPdf*>[nElements] : new vector<RooAbsPdf*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooAbsPdfmUgR(void *p) {
      delete ((vector<RooAbsPdf*>*)p);
   }
   static void deleteArray_vectorlERooAbsPdfmUgR(void *p) {
      delete [] ((vector<RooAbsPdf*>*)p);
   }
   static void destruct_vectorlERooAbsPdfmUgR(void *p) {
      typedef vector<RooAbsPdf*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooAbsPdf*>

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

namespace ROOT {
   static TClass *maplEintcOpairlEdoublecOdoublegRsPgR_Dictionary();
   static void maplEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOpairlEdoublecOdoublegRsPgR(void *p = 0);
   static void *newArray_maplEintcOpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_maplEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_maplEintcOpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,pair<double,double> >*)
   {
      map<int,pair<double,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,pair<double,double> >", -2, "map", 99,
                  typeid(map<int,pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,pair<double,double> >) );
      instance.SetNew(&new_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,pair<double,double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,pair<double,double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,pair<double,double> >*)0x0)->GetClass();
      maplEintcOpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,pair<double,double> > : new map<int,pair<double,double> >;
   }
   static void *newArray_maplEintcOpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,pair<double,double> >[nElements] : new map<int,pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete ((map<int,pair<double,double> >*)p);
   }
   static void deleteArray_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] ((map<int,pair<double,double> >*)p);
   }
   static void destruct_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      typedef map<int,pair<double,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,pair<double,double> >

namespace ROOT {
   static TClass *maplEintcORooStatscLcLAcceptanceRegiongR_Dictionary();
   static void maplEintcORooStatscLcLAcceptanceRegiongR_TClassManip(TClass*);
   static void *new_maplEintcORooStatscLcLAcceptanceRegiongR(void *p = 0);
   static void *newArray_maplEintcORooStatscLcLAcceptanceRegiongR(Long_t size, void *p);
   static void delete_maplEintcORooStatscLcLAcceptanceRegiongR(void *p);
   static void deleteArray_maplEintcORooStatscLcLAcceptanceRegiongR(void *p);
   static void destruct_maplEintcORooStatscLcLAcceptanceRegiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,RooStats::AcceptanceRegion>*)
   {
      map<int,RooStats::AcceptanceRegion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,RooStats::AcceptanceRegion>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,RooStats::AcceptanceRegion>", -2, "map", 99,
                  typeid(map<int,RooStats::AcceptanceRegion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcORooStatscLcLAcceptanceRegiongR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,RooStats::AcceptanceRegion>) );
      instance.SetNew(&new_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.SetNewArray(&newArray_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.SetDelete(&delete_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.SetDeleteArray(&deleteArray_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.SetDestructor(&destruct_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,RooStats::AcceptanceRegion> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,RooStats::AcceptanceRegion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcORooStatscLcLAcceptanceRegiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,RooStats::AcceptanceRegion>*)0x0)->GetClass();
      maplEintcORooStatscLcLAcceptanceRegiongR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcORooStatscLcLAcceptanceRegiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcORooStatscLcLAcceptanceRegiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,RooStats::AcceptanceRegion> : new map<int,RooStats::AcceptanceRegion>;
   }
   static void *newArray_maplEintcORooStatscLcLAcceptanceRegiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,RooStats::AcceptanceRegion>[nElements] : new map<int,RooStats::AcceptanceRegion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcORooStatscLcLAcceptanceRegiongR(void *p) {
      delete ((map<int,RooStats::AcceptanceRegion>*)p);
   }
   static void deleteArray_maplEintcORooStatscLcLAcceptanceRegiongR(void *p) {
      delete [] ((map<int,RooStats::AcceptanceRegion>*)p);
   }
   static void destruct_maplEintcORooStatscLcLAcceptanceRegiongR(void *p) {
      typedef map<int,RooStats::AcceptanceRegion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,RooStats::AcceptanceRegion>

namespace ROOT {
   static TClass *maplERooRealVarmUcORooAbsRealmUgR_Dictionary();
   static void maplERooRealVarmUcORooAbsRealmUgR_TClassManip(TClass*);
   static void *new_maplERooRealVarmUcORooAbsRealmUgR(void *p = 0);
   static void *newArray_maplERooRealVarmUcORooAbsRealmUgR(Long_t size, void *p);
   static void delete_maplERooRealVarmUcORooAbsRealmUgR(void *p);
   static void deleteArray_maplERooRealVarmUcORooAbsRealmUgR(void *p);
   static void destruct_maplERooRealVarmUcORooAbsRealmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<RooRealVar*,RooAbsReal*>*)
   {
      map<RooRealVar*,RooAbsReal*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<RooRealVar*,RooAbsReal*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<RooRealVar*,RooAbsReal*>", -2, "map", 99,
                  typeid(map<RooRealVar*,RooAbsReal*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplERooRealVarmUcORooAbsRealmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<RooRealVar*,RooAbsReal*>) );
      instance.SetNew(&new_maplERooRealVarmUcORooAbsRealmUgR);
      instance.SetNewArray(&newArray_maplERooRealVarmUcORooAbsRealmUgR);
      instance.SetDelete(&delete_maplERooRealVarmUcORooAbsRealmUgR);
      instance.SetDeleteArray(&deleteArray_maplERooRealVarmUcORooAbsRealmUgR);
      instance.SetDestructor(&destruct_maplERooRealVarmUcORooAbsRealmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<RooRealVar*,RooAbsReal*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<RooRealVar*,RooAbsReal*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplERooRealVarmUcORooAbsRealmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<RooRealVar*,RooAbsReal*>*)0x0)->GetClass();
      maplERooRealVarmUcORooAbsRealmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplERooRealVarmUcORooAbsRealmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplERooRealVarmUcORooAbsRealmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<RooRealVar*,RooAbsReal*> : new map<RooRealVar*,RooAbsReal*>;
   }
   static void *newArray_maplERooRealVarmUcORooAbsRealmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<RooRealVar*,RooAbsReal*>[nElements] : new map<RooRealVar*,RooAbsReal*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplERooRealVarmUcORooAbsRealmUgR(void *p) {
      delete ((map<RooRealVar*,RooAbsReal*>*)p);
   }
   static void deleteArray_maplERooRealVarmUcORooAbsRealmUgR(void *p) {
      delete [] ((map<RooRealVar*,RooAbsReal*>*)p);
   }
   static void destruct_maplERooRealVarmUcORooAbsRealmUgR(void *p) {
      typedef map<RooRealVar*,RooAbsReal*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<RooRealVar*,RooAbsReal*>

namespace {
  void TriggerDictionaryInitialization_libRooStats_Impl() {
    static const char* headers[] = {
"RooStats/AsymptoticCalculator.h",
"RooStats/BayesianCalculator.h",
"RooStats/BernsteinCorrection.h",
"RooStats/CombinedCalculator.h",
"RooStats/ConfInterval.h",
"RooStats/ConfidenceBelt.h",
"RooStats/DebuggingSampler.h",
"RooStats/DebuggingTestStat.h",
"RooStats/DetailedOutputAggregator.h",
"RooStats/FeldmanCousins.h",
"RooStats/FrequentistCalculator.h",
"RooStats/HLFactory.h",
"RooStats/Heaviside.h",
"RooStats/HybridCalculator.h",
"RooStats/HybridCalculatorOriginal.h",
"RooStats/HybridPlot.h",
"RooStats/HybridResult.h",
"RooStats/HypoTestCalculator.h",
"RooStats/HypoTestCalculatorGeneric.h",
"RooStats/HypoTestInverter.h",
"RooStats/HypoTestInverterOriginal.h",
"RooStats/HypoTestInverterPlot.h",
"RooStats/HypoTestInverterResult.h",
"RooStats/HypoTestPlot.h",
"RooStats/HypoTestResult.h",
"RooStats/IntervalCalculator.h",
"RooStats/LikelihoodInterval.h",
"RooStats/LikelihoodIntervalPlot.h",
"RooStats/MCMCCalculator.h",
"RooStats/MCMCInterval.h",
"RooStats/MCMCIntervalPlot.h",
"RooStats/MarkovChain.h",
"RooStats/MaxLikelihoodEstimateTestStat.h",
"RooStats/MetropolisHastings.h",
"RooStats/MinNLLTestStat.h",
"RooStats/ModelConfig.h",
"RooStats/NeymanConstruction.h",
"RooStats/NumEventsTestStat.h",
"RooStats/NumberCountingPdfFactory.h",
"RooStats/NumberCountingUtils.h",
"RooStats/PdfProposal.h",
"RooStats/PointSetInterval.h",
"RooStats/ProfileInspector.h",
"RooStats/ProfileLikelihoodCalculator.h",
"RooStats/ProfileLikelihoodTestStat.h",
"RooStats/ProofConfig.h",
"RooStats/ProposalFunction.h",
"RooStats/ProposalHelper.h",
"RooStats/RatioOfProfiledLikelihoodsTestStat.h",
"RooStats/RooStatsUtils.h",
"RooStats/SPlot.h",
"RooStats/SamplingDistPlot.h",
"RooStats/SamplingDistribution.h",
"RooStats/SequentialProposal.h",
"RooStats/SimpleInterval.h",
"RooStats/SimpleLikelihoodRatioTestStat.h",
"RooStats/TestStatSampler.h",
"RooStats/TestStatistic.h",
"RooStats/ToyMCImportanceSampler.h",
"RooStats/ToyMCSampler.h",
"RooStats/ToyMCStudy.h",
"RooStats/UniformProposal.h",
"RooStats/UpperLimitMCSModule.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRooStats dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "RooStats/AsymptoticCalculator.h"
#include "RooStats/BayesianCalculator.h"
#include "RooStats/BernsteinCorrection.h"
#include "RooStats/CombinedCalculator.h"
#include "RooStats/ConfInterval.h"
#include "RooStats/ConfidenceBelt.h"
#include "RooStats/DebuggingSampler.h"
#include "RooStats/DebuggingTestStat.h"
#include "RooStats/DetailedOutputAggregator.h"
#include "RooStats/FeldmanCousins.h"
#include "RooStats/FrequentistCalculator.h"
#include "RooStats/HLFactory.h"
#include "RooStats/Heaviside.h"
#include "RooStats/HybridCalculator.h"
#include "RooStats/HybridCalculatorOriginal.h"
#include "RooStats/HybridPlot.h"
#include "RooStats/HybridResult.h"
#include "RooStats/HypoTestCalculator.h"
#include "RooStats/HypoTestCalculatorGeneric.h"
#include "RooStats/HypoTestInverter.h"
#include "RooStats/HypoTestInverterOriginal.h"
#include "RooStats/HypoTestInverterPlot.h"
#include "RooStats/HypoTestInverterResult.h"
#include "RooStats/HypoTestPlot.h"
#include "RooStats/HypoTestResult.h"
#include "RooStats/IntervalCalculator.h"
#include "RooStats/LikelihoodInterval.h"
#include "RooStats/LikelihoodIntervalPlot.h"
#include "RooStats/MCMCCalculator.h"
#include "RooStats/MCMCInterval.h"
#include "RooStats/MCMCIntervalPlot.h"
#include "RooStats/MarkovChain.h"
#include "RooStats/MaxLikelihoodEstimateTestStat.h"
#include "RooStats/MetropolisHastings.h"
#include "RooStats/MinNLLTestStat.h"
#include "RooStats/ModelConfig.h"
#include "RooStats/NeymanConstruction.h"
#include "RooStats/NumEventsTestStat.h"
#include "RooStats/NumberCountingPdfFactory.h"
#include "RooStats/NumberCountingUtils.h"
#include "RooStats/PdfProposal.h"
#include "RooStats/PointSetInterval.h"
#include "RooStats/ProfileInspector.h"
#include "RooStats/ProfileLikelihoodCalculator.h"
#include "RooStats/ProfileLikelihoodTestStat.h"
#include "RooStats/ProofConfig.h"
#include "RooStats/ProposalFunction.h"
#include "RooStats/ProposalHelper.h"
#include "RooStats/RatioOfProfiledLikelihoodsTestStat.h"
#include "RooStats/RooStatsUtils.h"
#include "RooStats/SPlot.h"
#include "RooStats/SamplingDistPlot.h"
#include "RooStats/SamplingDistribution.h"
#include "RooStats/SequentialProposal.h"
#include "RooStats/SimpleInterval.h"
#include "RooStats/SimpleLikelihoodRatioTestStat.h"
#include "RooStats/TestStatSampler.h"
#include "RooStats/TestStatistic.h"
#include "RooStats/ToyMCImportanceSampler.h"
#include "RooStats/ToyMCSampler.h"
#include "RooStats/ToyMCStudy.h"
#include "RooStats/UniformProposal.h"
#include "RooStats/UpperLimitMCSModule.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRooStats",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRooStats_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRooStats_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRooStats() {
  TriggerDictionaryInitialization_libRooStats_Impl();
}
