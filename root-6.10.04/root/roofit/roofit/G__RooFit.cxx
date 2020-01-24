// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RooFit

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
#include "Roo1DMomentMorphFunction.h"
#include "Roo2DKeysPdf.h"
#include "Roo2DMomentMorphFunction.h"
#include "RooArgusBG.h"
#include "RooBCPEffDecay.h"
#include "RooBCPGenDecay.h"
#include "RooBDecay.h"
#include "RooBMixDecay.h"
#include "RooBernstein.h"
#include "RooBifurGauss.h"
#include "RooBlindTools.h"
#include "RooBreitWigner.h"
#include "RooBukinPdf.h"
#include "RooCBShape.h"
#include "RooCFunction1Binding.h"
#include "RooCFunction2Binding.h"
#include "RooCFunction3Binding.h"
#include "RooCFunction4Binding.h"
#include "RooChebychev.h"
#include "RooChi2MCSModule.h"
#include "RooChiSquarePdf.h"
#include "RooDecay.h"
#include "RooDstD0BG.h"
#include "RooExponential.h"
#include "RooFunctor1DBinding.h"
#include "RooFunctorBinding.h"
#include "RooGExpModel.h"
#include "RooGamma.h"
#include "RooGaussModel.h"
#include "RooGaussian.h"
#include "RooHistConstraint.h"
#include "RooIntegralMorph.h"
#include "RooJeffreysPrior.h"
#include "RooKeysPdf.h"
#include "RooLandau.h"
#include "RooLegendre.h"
#include "RooLognormal.h"
#include "RooMathCoreReg.h"
#include "RooMathMoreReg.h"
#include "RooMomentMorph.h"
#include "RooMultiBinomial.h"
#include "RooNDKeysPdf.h"
#include "RooNonCPEigenDecay.h"
#include "RooNonCentralChiSquare.h"
#include "RooNovosibirsk.h"
#include "RooParamHistFunc.h"
#include "RooParametricStepFunction.h"
#include "RooPoisson.h"
#include "RooPolynomial.h"
#include "RooSpHarmonic.h"
#include "RooStepFunction.h"
#include "RooTFnBinding.h"
#include "RooTFnPdfBinding.h"
#include "RooTMathReg.h"
#include "RooUnblindCPAsymVar.h"
#include "RooUnblindOffset.h"
#include "RooUnblindPrecision.h"
#include "RooUnblindUniform.h"
#include "RooUniform.h"
#include "RooVoigtian.h"

// Header files passed via #pragma extra_include

namespace RooFit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooFit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooFit", 0 /*version*/, "RooPrintable.h", 64,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &RooFit_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RooFit_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_Roo1DMomentMorphFunction(void *p = 0);
   static void *newArray_Roo1DMomentMorphFunction(Long_t size, void *p);
   static void delete_Roo1DMomentMorphFunction(void *p);
   static void deleteArray_Roo1DMomentMorphFunction(void *p);
   static void destruct_Roo1DMomentMorphFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Roo1DMomentMorphFunction*)
   {
      ::Roo1DMomentMorphFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Roo1DMomentMorphFunction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Roo1DMomentMorphFunction", ::Roo1DMomentMorphFunction::Class_Version(), "Roo1DMomentMorphFunction.h", 23,
                  typeid(::Roo1DMomentMorphFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Roo1DMomentMorphFunction::Dictionary, isa_proxy, 4,
                  sizeof(::Roo1DMomentMorphFunction) );
      instance.SetNew(&new_Roo1DMomentMorphFunction);
      instance.SetNewArray(&newArray_Roo1DMomentMorphFunction);
      instance.SetDelete(&delete_Roo1DMomentMorphFunction);
      instance.SetDeleteArray(&deleteArray_Roo1DMomentMorphFunction);
      instance.SetDestructor(&destruct_Roo1DMomentMorphFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Roo1DMomentMorphFunction*)
   {
      return GenerateInitInstanceLocal((::Roo1DMomentMorphFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Roo1DMomentMorphFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Roo2DKeysPdf(void *p);
   static void deleteArray_Roo2DKeysPdf(void *p);
   static void destruct_Roo2DKeysPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Roo2DKeysPdf*)
   {
      ::Roo2DKeysPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Roo2DKeysPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Roo2DKeysPdf", ::Roo2DKeysPdf::Class_Version(), "Roo2DKeysPdf.h", 25,
                  typeid(::Roo2DKeysPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Roo2DKeysPdf::Dictionary, isa_proxy, 4,
                  sizeof(::Roo2DKeysPdf) );
      instance.SetDelete(&delete_Roo2DKeysPdf);
      instance.SetDeleteArray(&deleteArray_Roo2DKeysPdf);
      instance.SetDestructor(&destruct_Roo2DKeysPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Roo2DKeysPdf*)
   {
      return GenerateInitInstanceLocal((::Roo2DKeysPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Roo2DKeysPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Roo2DMomentMorphFunction(void *p = 0);
   static void *newArray_Roo2DMomentMorphFunction(Long_t size, void *p);
   static void delete_Roo2DMomentMorphFunction(void *p);
   static void deleteArray_Roo2DMomentMorphFunction(void *p);
   static void destruct_Roo2DMomentMorphFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Roo2DMomentMorphFunction*)
   {
      ::Roo2DMomentMorphFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Roo2DMomentMorphFunction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Roo2DMomentMorphFunction", ::Roo2DMomentMorphFunction::Class_Version(), "Roo2DMomentMorphFunction.h", 28,
                  typeid(::Roo2DMomentMorphFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Roo2DMomentMorphFunction::Dictionary, isa_proxy, 4,
                  sizeof(::Roo2DMomentMorphFunction) );
      instance.SetNew(&new_Roo2DMomentMorphFunction);
      instance.SetNewArray(&newArray_Roo2DMomentMorphFunction);
      instance.SetDelete(&delete_Roo2DMomentMorphFunction);
      instance.SetDeleteArray(&deleteArray_Roo2DMomentMorphFunction);
      instance.SetDestructor(&destruct_Roo2DMomentMorphFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Roo2DMomentMorphFunction*)
   {
      return GenerateInitInstanceLocal((::Roo2DMomentMorphFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Roo2DMomentMorphFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooArgusBG(void *p = 0);
   static void *newArray_RooArgusBG(Long_t size, void *p);
   static void delete_RooArgusBG(void *p);
   static void deleteArray_RooArgusBG(void *p);
   static void destruct_RooArgusBG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooArgusBG*)
   {
      ::RooArgusBG *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooArgusBG >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooArgusBG", ::RooArgusBG::Class_Version(), "RooArgusBG.h", 25,
                  typeid(::RooArgusBG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooArgusBG::Dictionary, isa_proxy, 4,
                  sizeof(::RooArgusBG) );
      instance.SetNew(&new_RooArgusBG);
      instance.SetNewArray(&newArray_RooArgusBG);
      instance.SetDelete(&delete_RooArgusBG);
      instance.SetDeleteArray(&deleteArray_RooArgusBG);
      instance.SetDestructor(&destruct_RooArgusBG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooArgusBG*)
   {
      return GenerateInitInstanceLocal((::RooArgusBG*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooArgusBG*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBCPEffDecay(void *p = 0);
   static void *newArray_RooBCPEffDecay(Long_t size, void *p);
   static void delete_RooBCPEffDecay(void *p);
   static void deleteArray_RooBCPEffDecay(void *p);
   static void destruct_RooBCPEffDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBCPEffDecay*)
   {
      ::RooBCPEffDecay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBCPEffDecay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooBCPEffDecay", ::RooBCPEffDecay::Class_Version(), "RooBCPEffDecay.h", 23,
                  typeid(::RooBCPEffDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBCPEffDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooBCPEffDecay) );
      instance.SetNew(&new_RooBCPEffDecay);
      instance.SetNewArray(&newArray_RooBCPEffDecay);
      instance.SetDelete(&delete_RooBCPEffDecay);
      instance.SetDeleteArray(&deleteArray_RooBCPEffDecay);
      instance.SetDestructor(&destruct_RooBCPEffDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBCPEffDecay*)
   {
      return GenerateInitInstanceLocal((::RooBCPEffDecay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooBCPEffDecay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBCPGenDecay(void *p = 0);
   static void *newArray_RooBCPGenDecay(Long_t size, void *p);
   static void delete_RooBCPGenDecay(void *p);
   static void deleteArray_RooBCPGenDecay(void *p);
   static void destruct_RooBCPGenDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBCPGenDecay*)
   {
      ::RooBCPGenDecay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBCPGenDecay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooBCPGenDecay", ::RooBCPGenDecay::Class_Version(), "RooBCPGenDecay.h", 23,
                  typeid(::RooBCPGenDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBCPGenDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooBCPGenDecay) );
      instance.SetNew(&new_RooBCPGenDecay);
      instance.SetNewArray(&newArray_RooBCPGenDecay);
      instance.SetDelete(&delete_RooBCPGenDecay);
      instance.SetDeleteArray(&deleteArray_RooBCPGenDecay);
      instance.SetDestructor(&destruct_RooBCPGenDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBCPGenDecay*)
   {
      return GenerateInitInstanceLocal((::RooBCPGenDecay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooBCPGenDecay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBDecay(void *p = 0);
   static void *newArray_RooBDecay(Long_t size, void *p);
   static void delete_RooBDecay(void *p);
   static void deleteArray_RooBDecay(void *p);
   static void destruct_RooBDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBDecay*)
   {
      ::RooBDecay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBDecay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooBDecay", ::RooBDecay::Class_Version(), "RooBDecay.h", 24,
                  typeid(::RooBDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooBDecay) );
      instance.SetNew(&new_RooBDecay);
      instance.SetNewArray(&newArray_RooBDecay);
      instance.SetDelete(&delete_RooBDecay);
      instance.SetDeleteArray(&deleteArray_RooBDecay);
      instance.SetDestructor(&destruct_RooBDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBDecay*)
   {
      return GenerateInitInstanceLocal((::RooBDecay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooBDecay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBMixDecay(void *p = 0);
   static void *newArray_RooBMixDecay(Long_t size, void *p);
   static void delete_RooBMixDecay(void *p);
   static void deleteArray_RooBMixDecay(void *p);
   static void destruct_RooBMixDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBMixDecay*)
   {
      ::RooBMixDecay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBMixDecay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooBMixDecay", ::RooBMixDecay::Class_Version(), "RooBMixDecay.h", 23,
                  typeid(::RooBMixDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBMixDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooBMixDecay) );
      instance.SetNew(&new_RooBMixDecay);
      instance.SetNewArray(&newArray_RooBMixDecay);
      instance.SetDelete(&delete_RooBMixDecay);
      instance.SetDeleteArray(&deleteArray_RooBMixDecay);
      instance.SetDestructor(&destruct_RooBMixDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBMixDecay*)
   {
      return GenerateInitInstanceLocal((::RooBMixDecay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooBMixDecay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBernstein(void *p = 0);
   static void *newArray_RooBernstein(Long_t size, void *p);
   static void delete_RooBernstein(void *p);
   static void deleteArray_RooBernstein(void *p);
   static void destruct_RooBernstein(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBernstein*)
   {
      ::RooBernstein *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBernstein >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooBernstein", ::RooBernstein::Class_Version(), "RooBernstein.h", 23,
                  typeid(::RooBernstein), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBernstein::Dictionary, isa_proxy, 4,
                  sizeof(::RooBernstein) );
      instance.SetNew(&new_RooBernstein);
      instance.SetNewArray(&newArray_RooBernstein);
      instance.SetDelete(&delete_RooBernstein);
      instance.SetDeleteArray(&deleteArray_RooBernstein);
      instance.SetDestructor(&destruct_RooBernstein);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBernstein*)
   {
      return GenerateInitInstanceLocal((::RooBernstein*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooBernstein*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBifurGauss(void *p = 0);
   static void *newArray_RooBifurGauss(Long_t size, void *p);
   static void delete_RooBifurGauss(void *p);
   static void deleteArray_RooBifurGauss(void *p);
   static void destruct_RooBifurGauss(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBifurGauss*)
   {
      ::RooBifurGauss *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBifurGauss >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooBifurGauss", ::RooBifurGauss::Class_Version(), "RooBifurGauss.h", 24,
                  typeid(::RooBifurGauss), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBifurGauss::Dictionary, isa_proxy, 4,
                  sizeof(::RooBifurGauss) );
      instance.SetNew(&new_RooBifurGauss);
      instance.SetNewArray(&newArray_RooBifurGauss);
      instance.SetDelete(&delete_RooBifurGauss);
      instance.SetDeleteArray(&deleteArray_RooBifurGauss);
      instance.SetDestructor(&destruct_RooBifurGauss);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBifurGauss*)
   {
      return GenerateInitInstanceLocal((::RooBifurGauss*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooBifurGauss*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBlindTools(void *p = 0);
   static void *newArray_RooBlindTools(Long_t size, void *p);
   static void delete_RooBlindTools(void *p);
   static void deleteArray_RooBlindTools(void *p);
   static void destruct_RooBlindTools(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBlindTools*)
   {
      ::RooBlindTools *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBlindTools >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooBlindTools", ::RooBlindTools::Class_Version(), "RooBlindTools.h", 26,
                  typeid(::RooBlindTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBlindTools::Dictionary, isa_proxy, 4,
                  sizeof(::RooBlindTools) );
      instance.SetNew(&new_RooBlindTools);
      instance.SetNewArray(&newArray_RooBlindTools);
      instance.SetDelete(&delete_RooBlindTools);
      instance.SetDeleteArray(&deleteArray_RooBlindTools);
      instance.SetDestructor(&destruct_RooBlindTools);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBlindTools*)
   {
      return GenerateInitInstanceLocal((::RooBlindTools*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooBlindTools*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBreitWigner(void *p = 0);
   static void *newArray_RooBreitWigner(Long_t size, void *p);
   static void delete_RooBreitWigner(void *p);
   static void deleteArray_RooBreitWigner(void *p);
   static void destruct_RooBreitWigner(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBreitWigner*)
   {
      ::RooBreitWigner *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBreitWigner >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooBreitWigner", ::RooBreitWigner::Class_Version(), "RooBreitWigner.h", 25,
                  typeid(::RooBreitWigner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBreitWigner::Dictionary, isa_proxy, 4,
                  sizeof(::RooBreitWigner) );
      instance.SetNew(&new_RooBreitWigner);
      instance.SetNewArray(&newArray_RooBreitWigner);
      instance.SetDelete(&delete_RooBreitWigner);
      instance.SetDeleteArray(&deleteArray_RooBreitWigner);
      instance.SetDestructor(&destruct_RooBreitWigner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBreitWigner*)
   {
      return GenerateInitInstanceLocal((::RooBreitWigner*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooBreitWigner*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBukinPdf(void *p = 0);
   static void *newArray_RooBukinPdf(Long_t size, void *p);
   static void delete_RooBukinPdf(void *p);
   static void deleteArray_RooBukinPdf(void *p);
   static void destruct_RooBukinPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBukinPdf*)
   {
      ::RooBukinPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBukinPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooBukinPdf", ::RooBukinPdf::Class_Version(), "RooBukinPdf.h", 29,
                  typeid(::RooBukinPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBukinPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooBukinPdf) );
      instance.SetNew(&new_RooBukinPdf);
      instance.SetNewArray(&newArray_RooBukinPdf);
      instance.SetDelete(&delete_RooBukinPdf);
      instance.SetDeleteArray(&deleteArray_RooBukinPdf);
      instance.SetDestructor(&destruct_RooBukinPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBukinPdf*)
   {
      return GenerateInitInstanceLocal((::RooBukinPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooBukinPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCBShape(void *p = 0);
   static void *newArray_RooCBShape(Long_t size, void *p);
   static void delete_RooCBShape(void *p);
   static void deleteArray_RooCBShape(void *p);
   static void destruct_RooCBShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCBShape*)
   {
      ::RooCBShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCBShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCBShape", ::RooCBShape::Class_Version(), "RooCBShape.h", 24,
                  typeid(::RooCBShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCBShape::Dictionary, isa_proxy, 4,
                  sizeof(::RooCBShape) );
      instance.SetNew(&new_RooCBShape);
      instance.SetNewArray(&newArray_RooCBShape);
      instance.SetDelete(&delete_RooCBShape);
      instance.SetDeleteArray(&deleteArray_RooCBShape);
      instance.SetDestructor(&destruct_RooCBShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCBShape*)
   {
      return GenerateInitInstanceLocal((::RooCBShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCBShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1ReflEdoublecOintgR_Dictionary();
   static void RooCFunction1ReflEdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction1ReflEdoublecOintgR(void *p = 0);
   static void *newArray_RooCFunction1ReflEdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction1ReflEdoublecOintgR(void *p);
   static void deleteArray_RooCFunction1ReflEdoublecOintgR(void *p);
   static void destruct_RooCFunction1ReflEdoublecOintgR(void *p);
   static void streamer_RooCFunction1ReflEdoublecOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1Ref<double,int>*)
   {
      ::RooCFunction1Ref<double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1Ref<double,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1Ref<double,int>", ::RooCFunction1Ref<double,int>::Class_Version(), "RooCFunction1Binding.h", 91,
                  typeid(::RooCFunction1Ref<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1ReflEdoublecOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction1Ref<double,int>) );
      instance.SetNew(&new_RooCFunction1ReflEdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction1ReflEdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction1ReflEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1ReflEdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction1ReflEdoublecOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction1ReflEdoublecOintgR);

      ::ROOT::AddClassAlternate("RooCFunction1Ref<double,int>","RooCFunction1Ref<Double_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1Ref<double,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction1Ref<double,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1ReflEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)0x0)->GetClass();
      RooCFunction1ReflEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1ReflEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1ReflEdoublecOdoublegR_Dictionary();
   static void RooCFunction1ReflEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction1ReflEdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction1ReflEdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction1ReflEdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction1ReflEdoublecOdoublegR(void *p);
   static void destruct_RooCFunction1ReflEdoublecOdoublegR(void *p);
   static void streamer_RooCFunction1ReflEdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1Ref<double,double>*)
   {
      ::RooCFunction1Ref<double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1Ref<double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1Ref<double,double>", ::RooCFunction1Ref<double,double>::Class_Version(), "RooCFunction1Binding.h", 91,
                  typeid(::RooCFunction1Ref<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1ReflEdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction1Ref<double,double>) );
      instance.SetNew(&new_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction1ReflEdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction1ReflEdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction1Ref<double,double>","RooCFunction1Ref<Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1Ref<double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction1Ref<double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1ReflEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)0x0)->GetClass();
      RooCFunction1ReflEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1ReflEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1BindinglEdoublecOintgR_Dictionary();
   static void RooCFunction1BindinglEdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction1BindinglEdoublecOintgR(void *p = 0);
   static void *newArray_RooCFunction1BindinglEdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction1BindinglEdoublecOintgR(void *p);
   static void deleteArray_RooCFunction1BindinglEdoublecOintgR(void *p);
   static void destruct_RooCFunction1BindinglEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1Binding<double,int>*)
   {
      ::RooCFunction1Binding<double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1Binding<double,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1Binding<double,int>", ::RooCFunction1Binding<double,int>::Class_Version(), "RooCFunction1Binding.h", 220,
                  typeid(::RooCFunction1Binding<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1BindinglEdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction1Binding<double,int>) );
      instance.SetNew(&new_RooCFunction1BindinglEdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction1BindinglEdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction1BindinglEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1BindinglEdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction1BindinglEdoublecOintgR);

      ::ROOT::AddClassAlternate("RooCFunction1Binding<double,int>","RooCFunction1Binding<Double_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1Binding<double,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction1Binding<double,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1BindinglEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)0x0)->GetClass();
      RooCFunction1BindinglEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1BindinglEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1BindinglEdoublecOdoublegR_Dictionary();
   static void RooCFunction1BindinglEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction1BindinglEdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction1BindinglEdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction1BindinglEdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction1BindinglEdoublecOdoublegR(void *p);
   static void destruct_RooCFunction1BindinglEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1Binding<double,double>*)
   {
      ::RooCFunction1Binding<double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1Binding<double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1Binding<double,double>", ::RooCFunction1Binding<double,double>::Class_Version(), "RooCFunction1Binding.h", 220,
                  typeid(::RooCFunction1Binding<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1BindinglEdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction1Binding<double,double>) );
      instance.SetNew(&new_RooCFunction1BindinglEdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction1BindinglEdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction1BindinglEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1BindinglEdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction1BindinglEdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction1Binding<double,double>","RooCFunction1Binding<Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1Binding<double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction1Binding<double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1BindinglEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)0x0)->GetClass();
      RooCFunction1BindinglEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1BindinglEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1PdfBindinglEdoublecOintgR_Dictionary();
   static void RooCFunction1PdfBindinglEdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction1PdfBindinglEdoublecOintgR(void *p = 0);
   static void *newArray_RooCFunction1PdfBindinglEdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction1PdfBindinglEdoublecOintgR(void *p);
   static void deleteArray_RooCFunction1PdfBindinglEdoublecOintgR(void *p);
   static void destruct_RooCFunction1PdfBindinglEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1PdfBinding<double,int>*)
   {
      ::RooCFunction1PdfBinding<double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1PdfBinding<double,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1PdfBinding<double,int>", ::RooCFunction1PdfBinding<double,int>::Class_Version(), "RooCFunction1Binding.h", 284,
                  typeid(::RooCFunction1PdfBinding<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1PdfBindinglEdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction1PdfBinding<double,int>) );
      instance.SetNew(&new_RooCFunction1PdfBindinglEdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction1PdfBindinglEdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction1PdfBindinglEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1PdfBindinglEdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction1PdfBindinglEdoublecOintgR);

      ::ROOT::AddClassAlternate("RooCFunction1PdfBinding<double,int>","RooCFunction1PdfBinding<Double_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1PdfBinding<double,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction1PdfBinding<double,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1PdfBindinglEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)0x0)->GetClass();
      RooCFunction1PdfBindinglEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1PdfBindinglEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction1PdfBindinglEdoublecOdoublegR_Dictionary();
   static void RooCFunction1PdfBindinglEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction1PdfBindinglEdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p);
   static void destruct_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction1PdfBinding<double,double>*)
   {
      ::RooCFunction1PdfBinding<double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction1PdfBinding<double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction1PdfBinding<double,double>", ::RooCFunction1PdfBinding<double,double>::Class_Version(), "RooCFunction1Binding.h", 284,
                  typeid(::RooCFunction1PdfBinding<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction1PdfBindinglEdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction1PdfBinding<double,double>) );
      instance.SetNew(&new_RooCFunction1PdfBindinglEdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction1PdfBindinglEdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction1PdfBindinglEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction1PdfBindinglEdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction1PdfBindinglEdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction1PdfBinding<double,double>","RooCFunction1PdfBinding<Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction1PdfBinding<double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction1PdfBinding<double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction1PdfBindinglEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)0x0)->GetClass();
      RooCFunction1PdfBindinglEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction1PdfBindinglEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOintcOintgR_Dictionary();
   static void RooCFunction2ReflEdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOintcOintgR(void *p = 0);
   static void *newArray_RooCFunction2ReflEdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOintcOintgR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOintcOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,int,int>*)
   {
      ::RooCFunction2Ref<double,int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,int,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,int,int>", ::RooCFunction2Ref<double,int,int>::Class_Version(), "RooCFunction2Binding.h", 100,
                  typeid(::RooCFunction2Ref<double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOintcOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,int,int>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOintcOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOintcOintgR);

      ::ROOT::AddClassAlternate("RooCFunction2Ref<double,int,int>","RooCFunction2Ref<Double_t,Int_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,int,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Ref<double,int,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)0x0)->GetClass();
      RooCFunction2ReflEdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction2ReflEdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOdoublecOintgR(void *p = 0);
   static void *newArray_RooCFunction2ReflEdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOdoublecOintgR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOdoublecOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,double,int>*)
   {
      ::RooCFunction2Ref<double,double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,double,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,double,int>", ::RooCFunction2Ref<double,double,int>::Class_Version(), "RooCFunction2Binding.h", 100,
                  typeid(::RooCFunction2Ref<double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOdoublecOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,double,int>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOdoublecOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOdoublecOintgR);

      ::ROOT::AddClassAlternate("RooCFunction2Ref<double,double,int>","RooCFunction2Ref<Double_t,Double_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,double,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Ref<double,double,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)0x0)->GetClass();
      RooCFunction2ReflEdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p = 0);
   static void *newArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,unsigned int,double>*)
   {
      ::RooCFunction2Ref<double,unsigned int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,unsigned int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,unsigned int,double>", ::RooCFunction2Ref<double,unsigned int,double>::Class_Version(), "RooCFunction2Binding.h", 100,
                  typeid(::RooCFunction2Ref<double,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction2Ref<double,unsigned int,double>","RooCFunction2Ref<Double_t,UInt_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Ref<double,unsigned int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)0x0)->GetClass();
      RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOintcOdoublegR_Dictionary();
   static void RooCFunction2ReflEdoublecOintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOintcOdoublegR(void *p = 0);
   static void *newArray_RooCFunction2ReflEdoublecOintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOintcOdoublegR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOintcOdoublegR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOintcOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,int,double>*)
   {
      ::RooCFunction2Ref<double,int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,int,double>", ::RooCFunction2Ref<double,int,double>::Class_Version(), "RooCFunction2Binding.h", 100,
                  typeid(::RooCFunction2Ref<double,int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOintcOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,int,double>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOintcOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOintcOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction2Ref<double,int,double>","RooCFunction2Ref<Double_t,Int_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,int,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Ref<double,int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)0x0)->GetClass();
      RooCFunction2ReflEdoublecOintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2ReflEdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction2ReflEdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction2ReflEdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p);
   static void streamer_RooCFunction2ReflEdoublecOdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Ref<double,double,double>*)
   {
      ::RooCFunction2Ref<double,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Ref<double,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Ref<double,double,double>", ::RooCFunction2Ref<double,double,double>::Class_Version(), "RooCFunction2Binding.h", 100,
                  typeid(::RooCFunction2Ref<double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2ReflEdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction2Ref<double,double,double>) );
      instance.SetNew(&new_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2ReflEdoublecOdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction2ReflEdoublecOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction2Ref<double,double,double>","RooCFunction2Ref<Double_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Ref<double,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Ref<double,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2ReflEdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)0x0)->GetClass();
      RooCFunction2ReflEdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2ReflEdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOintcOintgR_Dictionary();
   static void RooCFunction2BindinglEdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOintcOintgR(void *p = 0);
   static void *newArray_RooCFunction2BindinglEdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,int,int>*)
   {
      ::RooCFunction2Binding<double,int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,int,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,int,int>", ::RooCFunction2Binding<double,int,int>::Class_Version(), "RooCFunction2Binding.h", 230,
                  typeid(::RooCFunction2Binding<double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,int,int>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOintcOintgR);

      ::ROOT::AddClassAlternate("RooCFunction2Binding<double,int,int>","RooCFunction2Binding<Double_t,Int_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,int,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Binding<double,int,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)0x0)->GetClass();
      RooCFunction2BindinglEdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction2BindinglEdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p = 0);
   static void *newArray_RooCFunction2BindinglEdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,double,int>*)
   {
      ::RooCFunction2Binding<double,double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,double,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,double,int>", ::RooCFunction2Binding<double,double,int>::Class_Version(), "RooCFunction2Binding.h", 230,
                  typeid(::RooCFunction2Binding<double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,double,int>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOdoublecOintgR);

      ::ROOT::AddClassAlternate("RooCFunction2Binding<double,double,int>","RooCFunction2Binding<Double_t,Double_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,double,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Binding<double,double,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)0x0)->GetClass();
      RooCFunction2BindinglEdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p = 0);
   static void *newArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,unsigned int,double>*)
   {
      ::RooCFunction2Binding<double,unsigned int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,unsigned int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,unsigned int,double>", ::RooCFunction2Binding<double,unsigned int,double>::Class_Version(), "RooCFunction2Binding.h", 230,
                  typeid(::RooCFunction2Binding<double,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction2Binding<double,unsigned int,double>","RooCFunction2Binding<Double_t,UInt_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Binding<double,unsigned int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)0x0)->GetClass();
      RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOintcOdoublegR_Dictionary();
   static void RooCFunction2BindinglEdoublecOintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p = 0);
   static void *newArray_RooCFunction2BindinglEdoublecOintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,int,double>*)
   {
      ::RooCFunction2Binding<double,int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,int,double>", ::RooCFunction2Binding<double,int,double>::Class_Version(), "RooCFunction2Binding.h", 230,
                  typeid(::RooCFunction2Binding<double,int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,int,double>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOintcOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction2Binding<double,int,double>","RooCFunction2Binding<Double_t,Int_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,int,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Binding<double,int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)0x0)->GetClass();
      RooCFunction2BindinglEdoublecOintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2BindinglEdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction2BindinglEdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2Binding<double,double,double>*)
   {
      ::RooCFunction2Binding<double,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2Binding<double,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2Binding<double,double,double>", ::RooCFunction2Binding<double,double,double>::Class_Version(), "RooCFunction2Binding.h", 230,
                  typeid(::RooCFunction2Binding<double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2BindinglEdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2Binding<double,double,double>) );
      instance.SetNew(&new_RooCFunction2BindinglEdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction2BindinglEdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2BindinglEdoublecOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction2Binding<double,double,double>","RooCFunction2Binding<Double_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2Binding<double,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2Binding<double,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2BindinglEdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)0x0)->GetClass();
      RooCFunction2BindinglEdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2BindinglEdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOintcOintgR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p = 0);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,int,int>*)
   {
      ::RooCFunction2PdfBinding<double,int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,int,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,int,int>", ::RooCFunction2PdfBinding<double,int,int>::Class_Version(), "RooCFunction2Binding.h", 298,
                  typeid(::RooCFunction2PdfBinding<double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,int,int>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOintcOintgR);

      ::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,int,int>","RooCFunction2PdfBinding<Double_t,Int_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,int,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2PdfBinding<double,int,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)0x0)->GetClass();
      RooCFunction2PdfBindinglEdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p = 0);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,double,int>*)
   {
      ::RooCFunction2PdfBinding<double,double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,double,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,double,int>", ::RooCFunction2PdfBinding<double,double,int>::Class_Version(), "RooCFunction2Binding.h", 298,
                  typeid(::RooCFunction2PdfBinding<double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,double,int>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOdoublecOintgR);

      ::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,double,int>","RooCFunction2PdfBinding<Double_t,Double_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,double,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2PdfBinding<double,double,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)0x0)->GetClass();
      RooCFunction2PdfBindinglEdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p = 0);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,unsigned int,double>*)
   {
      ::RooCFunction2PdfBinding<double,unsigned int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,unsigned int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,unsigned int,double>", ::RooCFunction2PdfBinding<double,unsigned int,double>::Class_Version(), "RooCFunction2Binding.h", 298,
                  typeid(::RooCFunction2PdfBinding<double,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,unsigned int,double>","RooCFunction2PdfBinding<Double_t,UInt_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2PdfBinding<double,unsigned int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)0x0)->GetClass();
      RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOintcOdoublegR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p = 0);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,int,double>*)
   {
      ::RooCFunction2PdfBinding<double,int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,int,double>", ::RooCFunction2PdfBinding<double,int,double>::Class_Version(), "RooCFunction2Binding.h", 298,
                  typeid(::RooCFunction2PdfBinding<double,int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,int,double>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOintcOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,int,double>","RooCFunction2PdfBinding<Double_t,Int_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,int,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2PdfBinding<double,int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)0x0)->GetClass();
      RooCFunction2PdfBindinglEdoublecOintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction2PdfBinding<double,double,double>*)
   {
      ::RooCFunction2PdfBinding<double,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction2PdfBinding<double,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction2PdfBinding<double,double,double>", ::RooCFunction2PdfBinding<double,double,double>::Class_Version(), "RooCFunction2Binding.h", 298,
                  typeid(::RooCFunction2PdfBinding<double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction2PdfBinding<double,double,double>) );
      instance.SetNew(&new_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction2PdfBinding<double,double,double>","RooCFunction2PdfBinding<Double_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction2PdfBinding<double,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction2PdfBinding<double,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)0x0)->GetClass();
      RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p = 0);
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)
   {
      ::RooCFunction3Ref<double,unsigned int,unsigned int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,unsigned int,unsigned int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,unsigned int,unsigned int,double>", ::RooCFunction3Ref<double,unsigned int,unsigned int,double>::Class_Version(), "RooCFunction3Binding.h", 102,
                  typeid(::RooCFunction3Ref<double,unsigned int,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,unsigned int,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction3Ref<double,unsigned int,unsigned int,double>","RooCFunction3Ref<Double_t,UInt_t,UInt_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)0x0)->GetClass();
      RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary();
   static void RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,unsigned int,double,double>*)
   {
      ::RooCFunction3Ref<double,unsigned int,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,unsigned int,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,unsigned int,double,double>", ::RooCFunction3Ref<double,unsigned int,double,double>::Class_Version(), "RooCFunction3Binding.h", 102,
                  typeid(::RooCFunction3Ref<double,unsigned int,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,unsigned int,double,double>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction3Ref<double,unsigned int,double,double>","RooCFunction3Ref<Double_t,UInt_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,unsigned int,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Ref<double,unsigned int,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)0x0)->GetClass();
      RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary();
   static void RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p = 0);
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)
   {
      ::RooCFunction3Ref<double,unsigned int,double,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,unsigned int,double,unsigned int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,unsigned int,double,unsigned int>", ::RooCFunction3Ref<double,unsigned int,double,unsigned int>::Class_Version(), "RooCFunction3Binding.h", 102,
                  typeid(::RooCFunction3Ref<double,unsigned int,double,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,unsigned int,double,unsigned int>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);

      ::ROOT::AddClassAlternate("RooCFunction3Ref<double,unsigned int,double,unsigned int>","RooCFunction3Ref<Double_t,UInt_t,Double_t,UInt_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)0x0)->GetClass();
      RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOdoublecOintcOintgR_Dictionary();
   static void RooCFunction3ReflEdoublecOdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p = 0);
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOdoublecOintcOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,double,int,int>*)
   {
      ::RooCFunction3Ref<double,double,int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,double,int,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,double,int,int>", ::RooCFunction3Ref<double,double,int,int>::Class_Version(), "RooCFunction3Binding.h", 102,
                  typeid(::RooCFunction3Ref<double,double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOdoublecOintcOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,double,int,int>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOdoublecOintcOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOdoublecOintcOintgR);

      ::ROOT::AddClassAlternate("RooCFunction3Ref<double,double,int,int>","RooCFunction3Ref<Double_t,Double_t,Int_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,double,int,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Ref<double,double,int,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)0x0)->GetClass();
      RooCFunction3ReflEdoublecOdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p = 0);
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,double,double,bool>*)
   {
      ::RooCFunction3Ref<double,double,double,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,double,double,bool> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,double,double,bool>", ::RooCFunction3Ref<double,double,double,bool>::Class_Version(), "RooCFunction3Binding.h", 102,
                  typeid(::RooCFunction3Ref<double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR);

      ::ROOT::AddClassAlternate("RooCFunction3Ref<double,double,double,bool>","RooCFunction3Ref<Double_t,Double_t,Double_t,Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Ref<double,double,double,bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)0x0)->GetClass();
      RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Ref<double,double,double,double>*)
   {
      ::RooCFunction3Ref<double,double,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Ref<double,double,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Ref<double,double,double,double>", ::RooCFunction3Ref<double,double,double,double>::Class_Version(), "RooCFunction3Binding.h", 102,
                  typeid(::RooCFunction3Ref<double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction3Ref<double,double,double,double>) );
      instance.SetNew(&new_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction3Ref<double,double,double,double>","RooCFunction3Ref<Double_t,Double_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Ref<double,double,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Ref<double,double,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)0x0)->GetClass();
      RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p = 0);
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)
   {
      ::RooCFunction3Binding<double,unsigned int,unsigned int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,unsigned int,unsigned int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,unsigned int,unsigned int,double>", ::RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class_Version(), "RooCFunction3Binding.h", 240,
                  typeid(::RooCFunction3Binding<double,unsigned int,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,unsigned int,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction3Binding<double,unsigned int,unsigned int,double>","RooCFunction3Binding<Double_t,UInt_t,UInt_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)0x0)->GetClass();
      RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary();
   static void RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,unsigned int,double,double>*)
   {
      ::RooCFunction3Binding<double,unsigned int,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,unsigned int,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,unsigned int,double,double>", ::RooCFunction3Binding<double,unsigned int,double,double>::Class_Version(), "RooCFunction3Binding.h", 240,
                  typeid(::RooCFunction3Binding<double,unsigned int,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,unsigned int,double,double>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction3Binding<double,unsigned int,double,double>","RooCFunction3Binding<Double_t,UInt_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,unsigned int,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Binding<double,unsigned int,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)0x0)->GetClass();
      RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary();
   static void RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p = 0);
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)
   {
      ::RooCFunction3Binding<double,unsigned int,double,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,unsigned int,double,unsigned int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,unsigned int,double,unsigned int>", ::RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class_Version(), "RooCFunction3Binding.h", 240,
                  typeid(::RooCFunction3Binding<double,unsigned int,double,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,unsigned int,double,unsigned int>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);

      ::ROOT::AddClassAlternate("RooCFunction3Binding<double,unsigned int,double,unsigned int>","RooCFunction3Binding<Double_t,UInt_t,Double_t,UInt_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)0x0)->GetClass();
      RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOdoublecOintcOintgR_Dictionary();
   static void RooCFunction3BindinglEdoublecOdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p = 0);
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,double,int,int>*)
   {
      ::RooCFunction3Binding<double,double,int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,double,int,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,double,int,int>", ::RooCFunction3Binding<double,double,int,int>::Class_Version(), "RooCFunction3Binding.h", 240,
                  typeid(::RooCFunction3Binding<double,double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOdoublecOintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,double,int,int>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOdoublecOintcOintgR);

      ::ROOT::AddClassAlternate("RooCFunction3Binding<double,double,int,int>","RooCFunction3Binding<Double_t,Double_t,Int_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,double,int,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Binding<double,double,int,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)0x0)->GetClass();
      RooCFunction3BindinglEdoublecOdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p = 0);
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,double,double,bool>*)
   {
      ::RooCFunction3Binding<double,double,double,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,double,double,bool> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,double,double,bool>", ::RooCFunction3Binding<double,double,double,bool>::Class_Version(), "RooCFunction3Binding.h", 240,
                  typeid(::RooCFunction3Binding<double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR);

      ::ROOT::AddClassAlternate("RooCFunction3Binding<double,double,double,bool>","RooCFunction3Binding<Double_t,Double_t,Double_t,Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Binding<double,double,double,bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)0x0)->GetClass();
      RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3Binding<double,double,double,double>*)
   {
      ::RooCFunction3Binding<double,double,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3Binding<double,double,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3Binding<double,double,double,double>", ::RooCFunction3Binding<double,double,double,double>::Class_Version(), "RooCFunction3Binding.h", 240,
                  typeid(::RooCFunction3Binding<double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3Binding<double,double,double,double>) );
      instance.SetNew(&new_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction3Binding<double,double,double,double>","RooCFunction3Binding<Double_t,Double_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3Binding<double,double,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3Binding<double,double,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)0x0)->GetClass();
      RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p = 0);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)
   {
      ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>", ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class_Version(), "RooCFunction3Binding.h", 311,
                  typeid(::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>","RooCFunction3PdfBinding<Double_t,UInt_t,UInt_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)0x0)->GetClass();
      RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)
   {
      ::RooCFunction3PdfBinding<double,unsigned int,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,unsigned int,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,unsigned int,double,double>", ::RooCFunction3PdfBinding<double,unsigned int,double,double>::Class_Version(), "RooCFunction3Binding.h", 311,
                  typeid(::RooCFunction3PdfBinding<double,unsigned int,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,unsigned int,double,double>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,unsigned int,double,double>","RooCFunction3PdfBinding<Double_t,UInt_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3PdfBinding<double,unsigned int,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)0x0)->GetClass();
      RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p = 0);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)
   {
      ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>", ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class_Version(), "RooCFunction3Binding.h", 311,
                  typeid(::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR);

      ::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>","RooCFunction3PdfBinding<Double_t,UInt_t,Double_t,UInt_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)0x0)->GetClass();
      RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p = 0);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,double,int,int>*)
   {
      ::RooCFunction3PdfBinding<double,double,int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,double,int,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,double,int,int>", ::RooCFunction3PdfBinding<double,double,int,int>::Class_Version(), "RooCFunction3Binding.h", 311,
                  typeid(::RooCFunction3PdfBinding<double,double,int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,double,int,int>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR);

      ::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,double,int,int>","RooCFunction3PdfBinding<Double_t,Double_t,Int_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,double,int,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3PdfBinding<double,double,int,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)0x0)->GetClass();
      RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p = 0);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,double,double,bool>*)
   {
      ::RooCFunction3PdfBinding<double,double,double,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,double,double,bool> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,double,double,bool>", ::RooCFunction3PdfBinding<double,double,double,bool>::Class_Version(), "RooCFunction3Binding.h", 311,
                  typeid(::RooCFunction3PdfBinding<double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR);

      ::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,double,double,bool>","RooCFunction3PdfBinding<Double_t,Double_t,Double_t,Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3PdfBinding<double,double,double,bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)0x0)->GetClass();
      RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction3PdfBinding<double,double,double,double>*)
   {
      ::RooCFunction3PdfBinding<double,double,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction3PdfBinding<double,double,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction3PdfBinding<double,double,double,double>", ::RooCFunction3PdfBinding<double,double,double,double>::Class_Version(), "RooCFunction3Binding.h", 311,
                  typeid(::RooCFunction3PdfBinding<double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction3PdfBinding<double,double,double,double>) );
      instance.SetNew(&new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction3PdfBinding<double,double,double,double>","RooCFunction3PdfBinding<Double_t,Double_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction3PdfBinding<double,double,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction3PdfBinding<double,double,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)0x0)->GetClass();
      RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p = 0);
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Ref<double,double,double,double,bool>*)
   {
      ::RooCFunction4Ref<double,double,double,double,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Ref<double,double,double,double,bool> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Ref<double,double,double,double,bool>", ::RooCFunction4Ref<double,double,double,double,bool>::Class_Version(), "RooCFunction4Binding.h", 98,
                  typeid(::RooCFunction4Ref<double,double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction4Ref<double,double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetStreamerFunc(&streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR);

      ::ROOT::AddClassAlternate("RooCFunction4Ref<double,double,double,double,bool>","RooCFunction4Ref<Double_t,Double_t,Double_t,Double_t,Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Ref<double,double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction4Ref<double,double,double,double,bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)0x0)->GetClass();
      RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p = 0);
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Ref<double,double,double,double,int>*)
   {
      ::RooCFunction4Ref<double,double,double,double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Ref<double,double,double,double,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Ref<double,double,double,double,int>", ::RooCFunction4Ref<double,double,double,double,int>::Class_Version(), "RooCFunction4Binding.h", 98,
                  typeid(::RooCFunction4Ref<double,double,double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction4Ref<double,double,double,double,int>) );
      instance.SetNew(&new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetStreamerFunc(&streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR);

      ::ROOT::AddClassAlternate("RooCFunction4Ref<double,double,double,double,int>","RooCFunction4Ref<Double_t,Double_t,Double_t,Double_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Ref<double,double,double,double,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction4Ref<double,double,double,double,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)0x0)->GetClass();
      RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Ref<double,double,double,double,double>*)
   {
      ::RooCFunction4Ref<double,double,double,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Ref<double,double,double,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Ref<double,double,double,double,double>", ::RooCFunction4Ref<double,double,double,double,double>::Class_Version(), "RooCFunction4Binding.h", 98,
                  typeid(::RooCFunction4Ref<double,double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::RooCFunction4Ref<double,double,double,double,double>) );
      instance.SetNew(&new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetStreamerFunc(&streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction4Ref<double,double,double,double,double>","RooCFunction4Ref<Double_t,Double_t,Double_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Ref<double,double,double,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction4Ref<double,double,double,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)0x0)->GetClass();
      RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p = 0);
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Binding<double,double,double,double,bool>*)
   {
      ::RooCFunction4Binding<double,double,double,double,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Binding<double,double,double,double,bool> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Binding<double,double,double,double,bool>", ::RooCFunction4Binding<double,double,double,double,bool>::Class_Version(), "RooCFunction4Binding.h", 227,
                  typeid(::RooCFunction4Binding<double,double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4Binding<double,double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR);

      ::ROOT::AddClassAlternate("RooCFunction4Binding<double,double,double,double,bool>","RooCFunction4Binding<Double_t,Double_t,Double_t,Double_t,Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Binding<double,double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction4Binding<double,double,double,double,bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)0x0)->GetClass();
      RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p = 0);
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Binding<double,double,double,double,int>*)
   {
      ::RooCFunction4Binding<double,double,double,double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Binding<double,double,double,double,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Binding<double,double,double,double,int>", ::RooCFunction4Binding<double,double,double,double,int>::Class_Version(), "RooCFunction4Binding.h", 227,
                  typeid(::RooCFunction4Binding<double,double,double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4Binding<double,double,double,double,int>) );
      instance.SetNew(&new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR);

      ::ROOT::AddClassAlternate("RooCFunction4Binding<double,double,double,double,int>","RooCFunction4Binding<Double_t,Double_t,Double_t,Double_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Binding<double,double,double,double,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction4Binding<double,double,double,double,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)0x0)->GetClass();
      RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4Binding<double,double,double,double,double>*)
   {
      ::RooCFunction4Binding<double,double,double,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4Binding<double,double,double,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4Binding<double,double,double,double,double>", ::RooCFunction4Binding<double,double,double,double,double>::Class_Version(), "RooCFunction4Binding.h", 227,
                  typeid(::RooCFunction4Binding<double,double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4Binding<double,double,double,double,double>) );
      instance.SetNew(&new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction4Binding<double,double,double,double,double>","RooCFunction4Binding<Double_t,Double_t,Double_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4Binding<double,double,double,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction4Binding<double,double,double,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)0x0)->GetClass();
      RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary();
   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass*);
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p = 0);
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t size, void *p);
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)
   {
      ::RooCFunction4PdfBinding<double,double,double,double,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4PdfBinding<double,double,double,double,bool> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4PdfBinding<double,double,double,double,bool>", ::RooCFunction4PdfBinding<double,double,double,double,bool>::Class_Version(), "RooCFunction4Binding.h", 300,
                  typeid(::RooCFunction4PdfBinding<double,double,double,double,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4PdfBinding<double,double,double,double,bool>) );
      instance.SetNew(&new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetNewArray(&newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDelete(&delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);
      instance.SetDestructor(&destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR);

      ::ROOT::AddClassAlternate("RooCFunction4PdfBinding<double,double,double,double,bool>","RooCFunction4PdfBinding<Double_t,Double_t,Double_t,Double_t,Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction4PdfBinding<double,double,double,double,bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)0x0)->GetClass();
      RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary();
   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass*);
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p = 0);
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(Long_t size, void *p);
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4PdfBinding<double,double,double,double,int>*)
   {
      ::RooCFunction4PdfBinding<double,double,double,double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4PdfBinding<double,double,double,double,int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4PdfBinding<double,double,double,double,int>", ::RooCFunction4PdfBinding<double,double,double,double,int>::Class_Version(), "RooCFunction4Binding.h", 300,
                  typeid(::RooCFunction4PdfBinding<double,double,double,double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4PdfBinding<double,double,double,double,int>) );
      instance.SetNew(&new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetNewArray(&newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDelete(&delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);
      instance.SetDestructor(&destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR);

      ::ROOT::AddClassAlternate("RooCFunction4PdfBinding<double,double,double,double,int>","RooCFunction4PdfBinding<Double_t,Double_t,Double_t,Double_t,Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4PdfBinding<double,double,double,double,int>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction4PdfBinding<double,double,double,double,int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)0x0)->GetClass();
      RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary();
   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass*);
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p = 0);
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t size, void *p);
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCFunction4PdfBinding<double,double,double,double,double>*)
   {
      ::RooCFunction4PdfBinding<double,double,double,double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCFunction4PdfBinding<double,double,double,double,double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCFunction4PdfBinding<double,double,double,double,double>", ::RooCFunction4PdfBinding<double,double,double,double,double>::Class_Version(), "RooCFunction4Binding.h", 300,
                  typeid(::RooCFunction4PdfBinding<double,double,double,double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCFunction4PdfBinding<double,double,double,double,double>) );
      instance.SetNew(&new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetNewArray(&newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDelete(&delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);
      instance.SetDestructor(&destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR);

      ::ROOT::AddClassAlternate("RooCFunction4PdfBinding<double,double,double,double,double>","RooCFunction4PdfBinding<Double_t,Double_t,Double_t,Double_t,Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCFunction4PdfBinding<double,double,double,double,double>*)
   {
      return GenerateInitInstanceLocal((::RooCFunction4PdfBinding<double,double,double,double,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)0x0)->GetClass();
      RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooChebychev(void *p = 0);
   static void *newArray_RooChebychev(Long_t size, void *p);
   static void delete_RooChebychev(void *p);
   static void deleteArray_RooChebychev(void *p);
   static void destruct_RooChebychev(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooChebychev*)
   {
      ::RooChebychev *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooChebychev >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooChebychev", ::RooChebychev::Class_Version(), "RooChebychev.h", 25,
                  typeid(::RooChebychev), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooChebychev::Dictionary, isa_proxy, 4,
                  sizeof(::RooChebychev) );
      instance.SetNew(&new_RooChebychev);
      instance.SetNewArray(&newArray_RooChebychev);
      instance.SetDelete(&delete_RooChebychev);
      instance.SetDeleteArray(&deleteArray_RooChebychev);
      instance.SetDestructor(&destruct_RooChebychev);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooChebychev*)
   {
      return GenerateInitInstanceLocal((::RooChebychev*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooChebychev*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooChi2MCSModule(void *p = 0);
   static void *newArray_RooChi2MCSModule(Long_t size, void *p);
   static void delete_RooChi2MCSModule(void *p);
   static void deleteArray_RooChi2MCSModule(void *p);
   static void destruct_RooChi2MCSModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooChi2MCSModule*)
   {
      ::RooChi2MCSModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooChi2MCSModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooChi2MCSModule", ::RooChi2MCSModule::Class_Version(), "RooChi2MCSModule.h", 23,
                  typeid(::RooChi2MCSModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooChi2MCSModule::Dictionary, isa_proxy, 4,
                  sizeof(::RooChi2MCSModule) );
      instance.SetNew(&new_RooChi2MCSModule);
      instance.SetNewArray(&newArray_RooChi2MCSModule);
      instance.SetDelete(&delete_RooChi2MCSModule);
      instance.SetDeleteArray(&deleteArray_RooChi2MCSModule);
      instance.SetDestructor(&destruct_RooChi2MCSModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooChi2MCSModule*)
   {
      return GenerateInitInstanceLocal((::RooChi2MCSModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooChi2MCSModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooChiSquarePdf(void *p = 0);
   static void *newArray_RooChiSquarePdf(Long_t size, void *p);
   static void delete_RooChiSquarePdf(void *p);
   static void deleteArray_RooChiSquarePdf(void *p);
   static void destruct_RooChiSquarePdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooChiSquarePdf*)
   {
      ::RooChiSquarePdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooChiSquarePdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooChiSquarePdf", ::RooChiSquarePdf::Class_Version(), "RooChiSquarePdf.h", 22,
                  typeid(::RooChiSquarePdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooChiSquarePdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooChiSquarePdf) );
      instance.SetNew(&new_RooChiSquarePdf);
      instance.SetNewArray(&newArray_RooChiSquarePdf);
      instance.SetDelete(&delete_RooChiSquarePdf);
      instance.SetDeleteArray(&deleteArray_RooChiSquarePdf);
      instance.SetDestructor(&destruct_RooChiSquarePdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooChiSquarePdf*)
   {
      return GenerateInitInstanceLocal((::RooChiSquarePdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooChiSquarePdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooDecay(void *p = 0);
   static void *newArray_RooDecay(Long_t size, void *p);
   static void delete_RooDecay(void *p);
   static void deleteArray_RooDecay(void *p);
   static void destruct_RooDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDecay*)
   {
      ::RooDecay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDecay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooDecay", ::RooDecay::Class_Version(), "RooDecay.h", 22,
                  typeid(::RooDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooDecay) );
      instance.SetNew(&new_RooDecay);
      instance.SetNewArray(&newArray_RooDecay);
      instance.SetDelete(&delete_RooDecay);
      instance.SetDeleteArray(&deleteArray_RooDecay);
      instance.SetDestructor(&destruct_RooDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDecay*)
   {
      return GenerateInitInstanceLocal((::RooDecay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooDecay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooDstD0BG(void *p = 0);
   static void *newArray_RooDstD0BG(Long_t size, void *p);
   static void delete_RooDstD0BG(void *p);
   static void deleteArray_RooDstD0BG(void *p);
   static void destruct_RooDstD0BG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDstD0BG*)
   {
      ::RooDstD0BG *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDstD0BG >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooDstD0BG", ::RooDstD0BG::Class_Version(), "RooDstD0BG.h", 26,
                  typeid(::RooDstD0BG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDstD0BG::Dictionary, isa_proxy, 4,
                  sizeof(::RooDstD0BG) );
      instance.SetNew(&new_RooDstD0BG);
      instance.SetNewArray(&newArray_RooDstD0BG);
      instance.SetDelete(&delete_RooDstD0BG);
      instance.SetDeleteArray(&deleteArray_RooDstD0BG);
      instance.SetDestructor(&destruct_RooDstD0BG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDstD0BG*)
   {
      return GenerateInitInstanceLocal((::RooDstD0BG*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooDstD0BG*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooExponential(void *p = 0);
   static void *newArray_RooExponential(Long_t size, void *p);
   static void delete_RooExponential(void *p);
   static void deleteArray_RooExponential(void *p);
   static void destruct_RooExponential(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooExponential*)
   {
      ::RooExponential *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooExponential >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooExponential", ::RooExponential::Class_Version(), "RooExponential.h", 25,
                  typeid(::RooExponential), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooExponential::Dictionary, isa_proxy, 4,
                  sizeof(::RooExponential) );
      instance.SetNew(&new_RooExponential);
      instance.SetNewArray(&newArray_RooExponential);
      instance.SetDelete(&delete_RooExponential);
      instance.SetDeleteArray(&deleteArray_RooExponential);
      instance.SetDestructor(&destruct_RooExponential);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooExponential*)
   {
      return GenerateInitInstanceLocal((::RooExponential*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooExponential*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFunctor1DBinding(void *p = 0);
   static void *newArray_RooFunctor1DBinding(Long_t size, void *p);
   static void delete_RooFunctor1DBinding(void *p);
   static void deleteArray_RooFunctor1DBinding(void *p);
   static void destruct_RooFunctor1DBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFunctor1DBinding*)
   {
      ::RooFunctor1DBinding *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFunctor1DBinding >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooFunctor1DBinding", ::RooFunctor1DBinding::Class_Version(), "RooFunctor1DBinding.h", 37,
                  typeid(::RooFunctor1DBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFunctor1DBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooFunctor1DBinding) );
      instance.SetNew(&new_RooFunctor1DBinding);
      instance.SetNewArray(&newArray_RooFunctor1DBinding);
      instance.SetDelete(&delete_RooFunctor1DBinding);
      instance.SetDeleteArray(&deleteArray_RooFunctor1DBinding);
      instance.SetDestructor(&destruct_RooFunctor1DBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFunctor1DBinding*)
   {
      return GenerateInitInstanceLocal((::RooFunctor1DBinding*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooFunctor1DBinding*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFunctor1DPdfBinding(void *p = 0);
   static void *newArray_RooFunctor1DPdfBinding(Long_t size, void *p);
   static void delete_RooFunctor1DPdfBinding(void *p);
   static void deleteArray_RooFunctor1DPdfBinding(void *p);
   static void destruct_RooFunctor1DPdfBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFunctor1DPdfBinding*)
   {
      ::RooFunctor1DPdfBinding *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFunctor1DPdfBinding >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooFunctor1DPdfBinding", ::RooFunctor1DPdfBinding::Class_Version(), "RooFunctor1DBinding.h", 63,
                  typeid(::RooFunctor1DPdfBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFunctor1DPdfBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooFunctor1DPdfBinding) );
      instance.SetNew(&new_RooFunctor1DPdfBinding);
      instance.SetNewArray(&newArray_RooFunctor1DPdfBinding);
      instance.SetDelete(&delete_RooFunctor1DPdfBinding);
      instance.SetDeleteArray(&deleteArray_RooFunctor1DPdfBinding);
      instance.SetDestructor(&destruct_RooFunctor1DPdfBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFunctor1DPdfBinding*)
   {
      return GenerateInitInstanceLocal((::RooFunctor1DPdfBinding*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooFunctor1DPdfBinding*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFunctorBinding(void *p = 0);
   static void *newArray_RooFunctorBinding(Long_t size, void *p);
   static void delete_RooFunctorBinding(void *p);
   static void deleteArray_RooFunctorBinding(void *p);
   static void destruct_RooFunctorBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFunctorBinding*)
   {
      ::RooFunctorBinding *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFunctorBinding >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooFunctorBinding", ::RooFunctorBinding::Class_Version(), "RooFunctorBinding.h", 35,
                  typeid(::RooFunctorBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFunctorBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooFunctorBinding) );
      instance.SetNew(&new_RooFunctorBinding);
      instance.SetNewArray(&newArray_RooFunctorBinding);
      instance.SetDelete(&delete_RooFunctorBinding);
      instance.SetDeleteArray(&deleteArray_RooFunctorBinding);
      instance.SetDestructor(&destruct_RooFunctorBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFunctorBinding*)
   {
      return GenerateInitInstanceLocal((::RooFunctorBinding*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooFunctorBinding*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFunctorPdfBinding(void *p = 0);
   static void *newArray_RooFunctorPdfBinding(Long_t size, void *p);
   static void delete_RooFunctorPdfBinding(void *p);
   static void deleteArray_RooFunctorPdfBinding(void *p);
   static void destruct_RooFunctorPdfBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFunctorPdfBinding*)
   {
      ::RooFunctorPdfBinding *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFunctorPdfBinding >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooFunctorPdfBinding", ::RooFunctorPdfBinding::Class_Version(), "RooFunctorBinding.h", 62,
                  typeid(::RooFunctorPdfBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFunctorPdfBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooFunctorPdfBinding) );
      instance.SetNew(&new_RooFunctorPdfBinding);
      instance.SetNewArray(&newArray_RooFunctorPdfBinding);
      instance.SetDelete(&delete_RooFunctorPdfBinding);
      instance.SetDeleteArray(&deleteArray_RooFunctorPdfBinding);
      instance.SetDestructor(&destruct_RooFunctorPdfBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFunctorPdfBinding*)
   {
      return GenerateInitInstanceLocal((::RooFunctorPdfBinding*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooFunctorPdfBinding*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGExpModel(void *p = 0);
   static void *newArray_RooGExpModel(Long_t size, void *p);
   static void delete_RooGExpModel(void *p);
   static void deleteArray_RooGExpModel(void *p);
   static void destruct_RooGExpModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGExpModel*)
   {
      ::RooGExpModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGExpModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooGExpModel", ::RooGExpModel::Class_Version(), "RooGExpModel.h", 27,
                  typeid(::RooGExpModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGExpModel::Dictionary, isa_proxy, 4,
                  sizeof(::RooGExpModel) );
      instance.SetNew(&new_RooGExpModel);
      instance.SetNewArray(&newArray_RooGExpModel);
      instance.SetDelete(&delete_RooGExpModel);
      instance.SetDeleteArray(&deleteArray_RooGExpModel);
      instance.SetDestructor(&destruct_RooGExpModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGExpModel*)
   {
      return GenerateInitInstanceLocal((::RooGExpModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooGExpModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGamma(void *p = 0);
   static void *newArray_RooGamma(Long_t size, void *p);
   static void delete_RooGamma(void *p);
   static void deleteArray_RooGamma(void *p);
   static void destruct_RooGamma(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGamma*)
   {
      ::RooGamma *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGamma >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooGamma", ::RooGamma::Class_Version(), "RooGamma.h", 22,
                  typeid(::RooGamma), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGamma::Dictionary, isa_proxy, 4,
                  sizeof(::RooGamma) );
      instance.SetNew(&new_RooGamma);
      instance.SetNewArray(&newArray_RooGamma);
      instance.SetDelete(&delete_RooGamma);
      instance.SetDeleteArray(&deleteArray_RooGamma);
      instance.SetDestructor(&destruct_RooGamma);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGamma*)
   {
      return GenerateInitInstanceLocal((::RooGamma*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooGamma*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGaussModel(void *p = 0);
   static void *newArray_RooGaussModel(Long_t size, void *p);
   static void delete_RooGaussModel(void *p);
   static void deleteArray_RooGaussModel(void *p);
   static void destruct_RooGaussModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGaussModel*)
   {
      ::RooGaussModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGaussModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooGaussModel", ::RooGaussModel::Class_Version(), "RooGaussModel.h", 26,
                  typeid(::RooGaussModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGaussModel::Dictionary, isa_proxy, 4,
                  sizeof(::RooGaussModel) );
      instance.SetNew(&new_RooGaussModel);
      instance.SetNewArray(&newArray_RooGaussModel);
      instance.SetDelete(&delete_RooGaussModel);
      instance.SetDeleteArray(&deleteArray_RooGaussModel);
      instance.SetDestructor(&destruct_RooGaussModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGaussModel*)
   {
      return GenerateInitInstanceLocal((::RooGaussModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooGaussModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGaussian(void *p = 0);
   static void *newArray_RooGaussian(Long_t size, void *p);
   static void delete_RooGaussian(void *p);
   static void deleteArray_RooGaussian(void *p);
   static void destruct_RooGaussian(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGaussian*)
   {
      ::RooGaussian *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGaussian >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooGaussian", ::RooGaussian::Class_Version(), "RooGaussian.h", 25,
                  typeid(::RooGaussian), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGaussian::Dictionary, isa_proxy, 4,
                  sizeof(::RooGaussian) );
      instance.SetNew(&new_RooGaussian);
      instance.SetNewArray(&newArray_RooGaussian);
      instance.SetDelete(&delete_RooGaussian);
      instance.SetDeleteArray(&deleteArray_RooGaussian);
      instance.SetDestructor(&destruct_RooGaussian);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGaussian*)
   {
      return GenerateInitInstanceLocal((::RooGaussian*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooGaussian*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooHistConstraint(void *p = 0);
   static void *newArray_RooHistConstraint(Long_t size, void *p);
   static void delete_RooHistConstraint(void *p);
   static void deleteArray_RooHistConstraint(void *p);
   static void destruct_RooHistConstraint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooHistConstraint*)
   {
      ::RooHistConstraint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooHistConstraint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooHistConstraint", ::RooHistConstraint::Class_Version(), "RooHistConstraint.h", 19,
                  typeid(::RooHistConstraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooHistConstraint::Dictionary, isa_proxy, 4,
                  sizeof(::RooHistConstraint) );
      instance.SetNew(&new_RooHistConstraint);
      instance.SetNewArray(&newArray_RooHistConstraint);
      instance.SetDelete(&delete_RooHistConstraint);
      instance.SetDeleteArray(&deleteArray_RooHistConstraint);
      instance.SetDestructor(&destruct_RooHistConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooHistConstraint*)
   {
      return GenerateInitInstanceLocal((::RooHistConstraint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooHistConstraint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooIntegralMorph(void *p = 0);
   static void *newArray_RooIntegralMorph(Long_t size, void *p);
   static void delete_RooIntegralMorph(void *p);
   static void deleteArray_RooIntegralMorph(void *p);
   static void destruct_RooIntegralMorph(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooIntegralMorph*)
   {
      ::RooIntegralMorph *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooIntegralMorph >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooIntegralMorph", ::RooIntegralMorph::Class_Version(), "RooIntegralMorph.h", 24,
                  typeid(::RooIntegralMorph), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooIntegralMorph::Dictionary, isa_proxy, 4,
                  sizeof(::RooIntegralMorph) );
      instance.SetNew(&new_RooIntegralMorph);
      instance.SetNewArray(&newArray_RooIntegralMorph);
      instance.SetDelete(&delete_RooIntegralMorph);
      instance.SetDeleteArray(&deleteArray_RooIntegralMorph);
      instance.SetDestructor(&destruct_RooIntegralMorph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooIntegralMorph*)
   {
      return GenerateInitInstanceLocal((::RooIntegralMorph*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooIntegralMorph*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooIntegralMorphcLcLMorphCacheElem_Dictionary();
   static void RooIntegralMorphcLcLMorphCacheElem_TClassManip(TClass*);
   static void delete_RooIntegralMorphcLcLMorphCacheElem(void *p);
   static void deleteArray_RooIntegralMorphcLcLMorphCacheElem(void *p);
   static void destruct_RooIntegralMorphcLcLMorphCacheElem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooIntegralMorph::MorphCacheElem*)
   {
      ::RooIntegralMorph::MorphCacheElem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooIntegralMorph::MorphCacheElem));
      static ::ROOT::TGenericClassInfo 
         instance("RooIntegralMorph::MorphCacheElem", "RooIntegralMorph.h", 53,
                  typeid(::RooIntegralMorph::MorphCacheElem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooIntegralMorphcLcLMorphCacheElem_Dictionary, isa_proxy, 4,
                  sizeof(::RooIntegralMorph::MorphCacheElem) );
      instance.SetDelete(&delete_RooIntegralMorphcLcLMorphCacheElem);
      instance.SetDeleteArray(&deleteArray_RooIntegralMorphcLcLMorphCacheElem);
      instance.SetDestructor(&destruct_RooIntegralMorphcLcLMorphCacheElem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooIntegralMorph::MorphCacheElem*)
   {
      return GenerateInitInstanceLocal((::RooIntegralMorph::MorphCacheElem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooIntegralMorph::MorphCacheElem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooIntegralMorphcLcLMorphCacheElem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooIntegralMorph::MorphCacheElem*)0x0)->GetClass();
      RooIntegralMorphcLcLMorphCacheElem_TClassManip(theClass);
   return theClass;
   }

   static void RooIntegralMorphcLcLMorphCacheElem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooJeffreysPrior(void *p = 0);
   static void *newArray_RooJeffreysPrior(Long_t size, void *p);
   static void delete_RooJeffreysPrior(void *p);
   static void deleteArray_RooJeffreysPrior(void *p);
   static void destruct_RooJeffreysPrior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooJeffreysPrior*)
   {
      ::RooJeffreysPrior *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooJeffreysPrior >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooJeffreysPrior", ::RooJeffreysPrior::Class_Version(), "RooJeffreysPrior.h", 17,
                  typeid(::RooJeffreysPrior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooJeffreysPrior::Dictionary, isa_proxy, 4,
                  sizeof(::RooJeffreysPrior) );
      instance.SetNew(&new_RooJeffreysPrior);
      instance.SetNewArray(&newArray_RooJeffreysPrior);
      instance.SetDelete(&delete_RooJeffreysPrior);
      instance.SetDeleteArray(&deleteArray_RooJeffreysPrior);
      instance.SetDestructor(&destruct_RooJeffreysPrior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooJeffreysPrior*)
   {
      return GenerateInitInstanceLocal((::RooJeffreysPrior*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooJeffreysPrior*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooKeysPdf(void *p = 0);
   static void *newArray_RooKeysPdf(Long_t size, void *p);
   static void delete_RooKeysPdf(void *p);
   static void deleteArray_RooKeysPdf(void *p);
   static void destruct_RooKeysPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooKeysPdf*)
   {
      ::RooKeysPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooKeysPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooKeysPdf", ::RooKeysPdf::Class_Version(), "RooKeysPdf.h", 25,
                  typeid(::RooKeysPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooKeysPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooKeysPdf) );
      instance.SetNew(&new_RooKeysPdf);
      instance.SetNewArray(&newArray_RooKeysPdf);
      instance.SetDelete(&delete_RooKeysPdf);
      instance.SetDeleteArray(&deleteArray_RooKeysPdf);
      instance.SetDestructor(&destruct_RooKeysPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooKeysPdf*)
   {
      return GenerateInitInstanceLocal((::RooKeysPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooKeysPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLandau(void *p = 0);
   static void *newArray_RooLandau(Long_t size, void *p);
   static void delete_RooLandau(void *p);
   static void deleteArray_RooLandau(void *p);
   static void destruct_RooLandau(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLandau*)
   {
      ::RooLandau *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLandau >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooLandau", ::RooLandau::Class_Version(), "RooLandau.h", 24,
                  typeid(::RooLandau), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLandau::Dictionary, isa_proxy, 4,
                  sizeof(::RooLandau) );
      instance.SetNew(&new_RooLandau);
      instance.SetNewArray(&newArray_RooLandau);
      instance.SetDelete(&delete_RooLandau);
      instance.SetDeleteArray(&deleteArray_RooLandau);
      instance.SetDestructor(&destruct_RooLandau);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLandau*)
   {
      return GenerateInitInstanceLocal((::RooLandau*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooLandau*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLegendre(void *p = 0);
   static void *newArray_RooLegendre(Long_t size, void *p);
   static void delete_RooLegendre(void *p);
   static void deleteArray_RooLegendre(void *p);
   static void destruct_RooLegendre(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLegendre*)
   {
      ::RooLegendre *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLegendre >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooLegendre", ::RooLegendre::Class_Version(), "RooLegendre.h", 20,
                  typeid(::RooLegendre), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLegendre::Dictionary, isa_proxy, 4,
                  sizeof(::RooLegendre) );
      instance.SetNew(&new_RooLegendre);
      instance.SetNewArray(&newArray_RooLegendre);
      instance.SetDelete(&delete_RooLegendre);
      instance.SetDeleteArray(&deleteArray_RooLegendre);
      instance.SetDestructor(&destruct_RooLegendre);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLegendre*)
   {
      return GenerateInitInstanceLocal((::RooLegendre*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooLegendre*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLognormal(void *p = 0);
   static void *newArray_RooLognormal(Long_t size, void *p);
   static void delete_RooLognormal(void *p);
   static void deleteArray_RooLognormal(void *p);
   static void destruct_RooLognormal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLognormal*)
   {
      ::RooLognormal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLognormal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooLognormal", ::RooLognormal::Class_Version(), "RooLognormal.h", 19,
                  typeid(::RooLognormal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLognormal::Dictionary, isa_proxy, 4,
                  sizeof(::RooLognormal) );
      instance.SetNew(&new_RooLognormal);
      instance.SetNewArray(&newArray_RooLognormal);
      instance.SetDelete(&delete_RooLognormal);
      instance.SetDeleteArray(&deleteArray_RooLognormal);
      instance.SetDestructor(&destruct_RooLognormal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLognormal*)
   {
      return GenerateInitInstanceLocal((::RooLognormal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooLognormal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMomentMorph(void *p = 0);
   static void *newArray_RooMomentMorph(Long_t size, void *p);
   static void delete_RooMomentMorph(void *p);
   static void deleteArray_RooMomentMorph(void *p);
   static void destruct_RooMomentMorph(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMomentMorph*)
   {
      ::RooMomentMorph *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMomentMorph >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooMomentMorph", ::RooMomentMorph::Class_Version(), "RooMomentMorph.h", 26,
                  typeid(::RooMomentMorph), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMomentMorph::Dictionary, isa_proxy, 4,
                  sizeof(::RooMomentMorph) );
      instance.SetNew(&new_RooMomentMorph);
      instance.SetNewArray(&newArray_RooMomentMorph);
      instance.SetDelete(&delete_RooMomentMorph);
      instance.SetDeleteArray(&deleteArray_RooMomentMorph);
      instance.SetDestructor(&destruct_RooMomentMorph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMomentMorph*)
   {
      return GenerateInitInstanceLocal((::RooMomentMorph*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooMomentMorph*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMultiBinomial(void *p = 0);
   static void *newArray_RooMultiBinomial(Long_t size, void *p);
   static void delete_RooMultiBinomial(void *p);
   static void deleteArray_RooMultiBinomial(void *p);
   static void destruct_RooMultiBinomial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMultiBinomial*)
   {
      ::RooMultiBinomial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMultiBinomial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooMultiBinomial", ::RooMultiBinomial::Class_Version(), "RooMultiBinomial.h", 25,
                  typeid(::RooMultiBinomial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMultiBinomial::Dictionary, isa_proxy, 4,
                  sizeof(::RooMultiBinomial) );
      instance.SetNew(&new_RooMultiBinomial);
      instance.SetNewArray(&newArray_RooMultiBinomial);
      instance.SetDelete(&delete_RooMultiBinomial);
      instance.SetDeleteArray(&deleteArray_RooMultiBinomial);
      instance.SetDestructor(&destruct_RooMultiBinomial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMultiBinomial*)
   {
      return GenerateInitInstanceLocal((::RooMultiBinomial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooMultiBinomial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooNDKeysPdf(void *p);
   static void deleteArray_RooNDKeysPdf(void *p);
   static void destruct_RooNDKeysPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNDKeysPdf*)
   {
      ::RooNDKeysPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNDKeysPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooNDKeysPdf", ::RooNDKeysPdf::Class_Version(), "RooNDKeysPdf.h", 45,
                  typeid(::RooNDKeysPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNDKeysPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooNDKeysPdf) );
      instance.SetDelete(&delete_RooNDKeysPdf);
      instance.SetDeleteArray(&deleteArray_RooNDKeysPdf);
      instance.SetDestructor(&destruct_RooNDKeysPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNDKeysPdf*)
   {
      return GenerateInitInstanceLocal((::RooNDKeysPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooNDKeysPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNonCPEigenDecay(void *p = 0);
   static void *newArray_RooNonCPEigenDecay(Long_t size, void *p);
   static void delete_RooNonCPEigenDecay(void *p);
   static void deleteArray_RooNonCPEigenDecay(void *p);
   static void destruct_RooNonCPEigenDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNonCPEigenDecay*)
   {
      ::RooNonCPEigenDecay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNonCPEigenDecay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooNonCPEigenDecay", ::RooNonCPEigenDecay::Class_Version(), "RooNonCPEigenDecay.h", 33,
                  typeid(::RooNonCPEigenDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNonCPEigenDecay::Dictionary, isa_proxy, 4,
                  sizeof(::RooNonCPEigenDecay) );
      instance.SetNew(&new_RooNonCPEigenDecay);
      instance.SetNewArray(&newArray_RooNonCPEigenDecay);
      instance.SetDelete(&delete_RooNonCPEigenDecay);
      instance.SetDeleteArray(&deleteArray_RooNonCPEigenDecay);
      instance.SetDestructor(&destruct_RooNonCPEigenDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNonCPEigenDecay*)
   {
      return GenerateInitInstanceLocal((::RooNonCPEigenDecay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooNonCPEigenDecay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNonCentralChiSquare(void *p = 0);
   static void *newArray_RooNonCentralChiSquare(Long_t size, void *p);
   static void delete_RooNonCentralChiSquare(void *p);
   static void deleteArray_RooNonCentralChiSquare(void *p);
   static void destruct_RooNonCentralChiSquare(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNonCentralChiSquare*)
   {
      ::RooNonCentralChiSquare *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNonCentralChiSquare >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooNonCentralChiSquare", ::RooNonCentralChiSquare::Class_Version(), "RooNonCentralChiSquare.h", 20,
                  typeid(::RooNonCentralChiSquare), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNonCentralChiSquare::Dictionary, isa_proxy, 4,
                  sizeof(::RooNonCentralChiSquare) );
      instance.SetNew(&new_RooNonCentralChiSquare);
      instance.SetNewArray(&newArray_RooNonCentralChiSquare);
      instance.SetDelete(&delete_RooNonCentralChiSquare);
      instance.SetDeleteArray(&deleteArray_RooNonCentralChiSquare);
      instance.SetDestructor(&destruct_RooNonCentralChiSquare);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNonCentralChiSquare*)
   {
      return GenerateInitInstanceLocal((::RooNonCentralChiSquare*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooNonCentralChiSquare*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNovosibirsk(void *p = 0);
   static void *newArray_RooNovosibirsk(Long_t size, void *p);
   static void delete_RooNovosibirsk(void *p);
   static void deleteArray_RooNovosibirsk(void *p);
   static void destruct_RooNovosibirsk(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNovosibirsk*)
   {
      ::RooNovosibirsk *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNovosibirsk >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooNovosibirsk", ::RooNovosibirsk::Class_Version(), "RooNovosibirsk.h", 25,
                  typeid(::RooNovosibirsk), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNovosibirsk::Dictionary, isa_proxy, 4,
                  sizeof(::RooNovosibirsk) );
      instance.SetNew(&new_RooNovosibirsk);
      instance.SetNewArray(&newArray_RooNovosibirsk);
      instance.SetDelete(&delete_RooNovosibirsk);
      instance.SetDeleteArray(&deleteArray_RooNovosibirsk);
      instance.SetDestructor(&destruct_RooNovosibirsk);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNovosibirsk*)
   {
      return GenerateInitInstanceLocal((::RooNovosibirsk*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooNovosibirsk*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooParamHistFunc(void *p = 0);
   static void *newArray_RooParamHistFunc(Long_t size, void *p);
   static void delete_RooParamHistFunc(void *p);
   static void deleteArray_RooParamHistFunc(void *p);
   static void destruct_RooParamHistFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooParamHistFunc*)
   {
      ::RooParamHistFunc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooParamHistFunc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooParamHistFunc", ::RooParamHistFunc::Class_Version(), "RooParamHistFunc.h", 19,
                  typeid(::RooParamHistFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooParamHistFunc::Dictionary, isa_proxy, 4,
                  sizeof(::RooParamHistFunc) );
      instance.SetNew(&new_RooParamHistFunc);
      instance.SetNewArray(&newArray_RooParamHistFunc);
      instance.SetDelete(&delete_RooParamHistFunc);
      instance.SetDeleteArray(&deleteArray_RooParamHistFunc);
      instance.SetDestructor(&destruct_RooParamHistFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooParamHistFunc*)
   {
      return GenerateInitInstanceLocal((::RooParamHistFunc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooParamHistFunc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooParametricStepFunction(void *p = 0);
   static void *newArray_RooParametricStepFunction(Long_t size, void *p);
   static void delete_RooParametricStepFunction(void *p);
   static void deleteArray_RooParametricStepFunction(void *p);
   static void destruct_RooParametricStepFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooParametricStepFunction*)
   {
      ::RooParametricStepFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooParametricStepFunction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooParametricStepFunction", ::RooParametricStepFunction::Class_Version(), "RooParametricStepFunction.h", 26,
                  typeid(::RooParametricStepFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooParametricStepFunction::Dictionary, isa_proxy, 4,
                  sizeof(::RooParametricStepFunction) );
      instance.SetNew(&new_RooParametricStepFunction);
      instance.SetNewArray(&newArray_RooParametricStepFunction);
      instance.SetDelete(&delete_RooParametricStepFunction);
      instance.SetDeleteArray(&deleteArray_RooParametricStepFunction);
      instance.SetDestructor(&destruct_RooParametricStepFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooParametricStepFunction*)
   {
      return GenerateInitInstanceLocal((::RooParametricStepFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooParametricStepFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPoisson(void *p = 0);
   static void *newArray_RooPoisson(Long_t size, void *p);
   static void delete_RooPoisson(void *p);
   static void deleteArray_RooPoisson(void *p);
   static void destruct_RooPoisson(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPoisson*)
   {
      ::RooPoisson *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPoisson >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooPoisson", ::RooPoisson::Class_Version(), "RooPoisson.h", 19,
                  typeid(::RooPoisson), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPoisson::Dictionary, isa_proxy, 4,
                  sizeof(::RooPoisson) );
      instance.SetNew(&new_RooPoisson);
      instance.SetNewArray(&newArray_RooPoisson);
      instance.SetDelete(&delete_RooPoisson);
      instance.SetDeleteArray(&deleteArray_RooPoisson);
      instance.SetDestructor(&destruct_RooPoisson);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPoisson*)
   {
      return GenerateInitInstanceLocal((::RooPoisson*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooPoisson*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPolynomial(void *p = 0);
   static void *newArray_RooPolynomial(Long_t size, void *p);
   static void delete_RooPolynomial(void *p);
   static void deleteArray_RooPolynomial(void *p);
   static void destruct_RooPolynomial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPolynomial*)
   {
      ::RooPolynomial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPolynomial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooPolynomial", ::RooPolynomial::Class_Version(), "RooPolynomial.h", 28,
                  typeid(::RooPolynomial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPolynomial::Dictionary, isa_proxy, 4,
                  sizeof(::RooPolynomial) );
      instance.SetNew(&new_RooPolynomial);
      instance.SetNewArray(&newArray_RooPolynomial);
      instance.SetDelete(&delete_RooPolynomial);
      instance.SetDeleteArray(&deleteArray_RooPolynomial);
      instance.SetDestructor(&destruct_RooPolynomial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPolynomial*)
   {
      return GenerateInitInstanceLocal((::RooPolynomial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooPolynomial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooSpHarmonic(void *p = 0);
   static void *newArray_RooSpHarmonic(Long_t size, void *p);
   static void delete_RooSpHarmonic(void *p);
   static void deleteArray_RooSpHarmonic(void *p);
   static void destruct_RooSpHarmonic(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooSpHarmonic*)
   {
      ::RooSpHarmonic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooSpHarmonic >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooSpHarmonic", ::RooSpHarmonic::Class_Version(), "RooSpHarmonic.h", 20,
                  typeid(::RooSpHarmonic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooSpHarmonic::Dictionary, isa_proxy, 4,
                  sizeof(::RooSpHarmonic) );
      instance.SetNew(&new_RooSpHarmonic);
      instance.SetNewArray(&newArray_RooSpHarmonic);
      instance.SetDelete(&delete_RooSpHarmonic);
      instance.SetDeleteArray(&deleteArray_RooSpHarmonic);
      instance.SetDestructor(&destruct_RooSpHarmonic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooSpHarmonic*)
   {
      return GenerateInitInstanceLocal((::RooSpHarmonic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooSpHarmonic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStepFunction(void *p = 0);
   static void *newArray_RooStepFunction(Long_t size, void *p);
   static void delete_RooStepFunction(void *p);
   static void deleteArray_RooStepFunction(void *p);
   static void destruct_RooStepFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStepFunction*)
   {
      ::RooStepFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStepFunction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStepFunction", ::RooStepFunction::Class_Version(), "RooStepFunction.h", 28,
                  typeid(::RooStepFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStepFunction::Dictionary, isa_proxy, 4,
                  sizeof(::RooStepFunction) );
      instance.SetNew(&new_RooStepFunction);
      instance.SetNewArray(&newArray_RooStepFunction);
      instance.SetDelete(&delete_RooStepFunction);
      instance.SetDeleteArray(&deleteArray_RooStepFunction);
      instance.SetDestructor(&destruct_RooStepFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStepFunction*)
   {
      return GenerateInitInstanceLocal((::RooStepFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStepFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooTFnBinding(void *p = 0);
   static void *newArray_RooTFnBinding(Long_t size, void *p);
   static void delete_RooTFnBinding(void *p);
   static void deleteArray_RooTFnBinding(void *p);
   static void destruct_RooTFnBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTFnBinding*)
   {
      ::RooTFnBinding *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTFnBinding >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooTFnBinding", ::RooTFnBinding::Class_Version(), "RooTFnBinding.h", 17,
                  typeid(::RooTFnBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTFnBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooTFnBinding) );
      instance.SetNew(&new_RooTFnBinding);
      instance.SetNewArray(&newArray_RooTFnBinding);
      instance.SetDelete(&delete_RooTFnBinding);
      instance.SetDeleteArray(&deleteArray_RooTFnBinding);
      instance.SetDestructor(&destruct_RooTFnBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTFnBinding*)
   {
      return GenerateInitInstanceLocal((::RooTFnBinding*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooTFnBinding*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooTFnPdfBinding(void *p = 0);
   static void *newArray_RooTFnPdfBinding(Long_t size, void *p);
   static void delete_RooTFnPdfBinding(void *p);
   static void deleteArray_RooTFnPdfBinding(void *p);
   static void destruct_RooTFnPdfBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTFnPdfBinding*)
   {
      ::RooTFnPdfBinding *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTFnPdfBinding >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooTFnPdfBinding", ::RooTFnPdfBinding::Class_Version(), "RooTFnPdfBinding.h", 16,
                  typeid(::RooTFnPdfBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTFnPdfBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooTFnPdfBinding) );
      instance.SetNew(&new_RooTFnPdfBinding);
      instance.SetNewArray(&newArray_RooTFnPdfBinding);
      instance.SetDelete(&delete_RooTFnPdfBinding);
      instance.SetDeleteArray(&deleteArray_RooTFnPdfBinding);
      instance.SetDestructor(&destruct_RooTFnPdfBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTFnPdfBinding*)
   {
      return GenerateInitInstanceLocal((::RooTFnPdfBinding*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooTFnPdfBinding*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUnblindCPAsymVar(void *p = 0);
   static void *newArray_RooUnblindCPAsymVar(Long_t size, void *p);
   static void delete_RooUnblindCPAsymVar(void *p);
   static void deleteArray_RooUnblindCPAsymVar(void *p);
   static void destruct_RooUnblindCPAsymVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUnblindCPAsymVar*)
   {
      ::RooUnblindCPAsymVar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUnblindCPAsymVar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooUnblindCPAsymVar", ::RooUnblindCPAsymVar::Class_Version(), "RooUnblindCPAsymVar.h", 27,
                  typeid(::RooUnblindCPAsymVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUnblindCPAsymVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooUnblindCPAsymVar) );
      instance.SetNew(&new_RooUnblindCPAsymVar);
      instance.SetNewArray(&newArray_RooUnblindCPAsymVar);
      instance.SetDelete(&delete_RooUnblindCPAsymVar);
      instance.SetDeleteArray(&deleteArray_RooUnblindCPAsymVar);
      instance.SetDestructor(&destruct_RooUnblindCPAsymVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUnblindCPAsymVar*)
   {
      return GenerateInitInstanceLocal((::RooUnblindCPAsymVar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooUnblindCPAsymVar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUnblindOffset(void *p = 0);
   static void *newArray_RooUnblindOffset(Long_t size, void *p);
   static void delete_RooUnblindOffset(void *p);
   static void deleteArray_RooUnblindOffset(void *p);
   static void destruct_RooUnblindOffset(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUnblindOffset*)
   {
      ::RooUnblindOffset *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUnblindOffset >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooUnblindOffset", ::RooUnblindOffset::Class_Version(), "RooUnblindOffset.h", 23,
                  typeid(::RooUnblindOffset), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUnblindOffset::Dictionary, isa_proxy, 4,
                  sizeof(::RooUnblindOffset) );
      instance.SetNew(&new_RooUnblindOffset);
      instance.SetNewArray(&newArray_RooUnblindOffset);
      instance.SetDelete(&delete_RooUnblindOffset);
      instance.SetDeleteArray(&deleteArray_RooUnblindOffset);
      instance.SetDestructor(&destruct_RooUnblindOffset);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUnblindOffset*)
   {
      return GenerateInitInstanceLocal((::RooUnblindOffset*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooUnblindOffset*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUnblindPrecision(void *p = 0);
   static void *newArray_RooUnblindPrecision(Long_t size, void *p);
   static void delete_RooUnblindPrecision(void *p);
   static void deleteArray_RooUnblindPrecision(void *p);
   static void destruct_RooUnblindPrecision(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUnblindPrecision*)
   {
      ::RooUnblindPrecision *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUnblindPrecision >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooUnblindPrecision", ::RooUnblindPrecision::Class_Version(), "RooUnblindPrecision.h", 26,
                  typeid(::RooUnblindPrecision), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUnblindPrecision::Dictionary, isa_proxy, 4,
                  sizeof(::RooUnblindPrecision) );
      instance.SetNew(&new_RooUnblindPrecision);
      instance.SetNewArray(&newArray_RooUnblindPrecision);
      instance.SetDelete(&delete_RooUnblindPrecision);
      instance.SetDeleteArray(&deleteArray_RooUnblindPrecision);
      instance.SetDestructor(&destruct_RooUnblindPrecision);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUnblindPrecision*)
   {
      return GenerateInitInstanceLocal((::RooUnblindPrecision*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooUnblindPrecision*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUnblindUniform(void *p = 0);
   static void *newArray_RooUnblindUniform(Long_t size, void *p);
   static void delete_RooUnblindUniform(void *p);
   static void deleteArray_RooUnblindUniform(void *p);
   static void destruct_RooUnblindUniform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUnblindUniform*)
   {
      ::RooUnblindUniform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUnblindUniform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooUnblindUniform", ::RooUnblindUniform::Class_Version(), "RooUnblindUniform.h", 23,
                  typeid(::RooUnblindUniform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUnblindUniform::Dictionary, isa_proxy, 4,
                  sizeof(::RooUnblindUniform) );
      instance.SetNew(&new_RooUnblindUniform);
      instance.SetNewArray(&newArray_RooUnblindUniform);
      instance.SetDelete(&delete_RooUnblindUniform);
      instance.SetDeleteArray(&deleteArray_RooUnblindUniform);
      instance.SetDestructor(&destruct_RooUnblindUniform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUnblindUniform*)
   {
      return GenerateInitInstanceLocal((::RooUnblindUniform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooUnblindUniform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUniform(void *p = 0);
   static void *newArray_RooUniform(Long_t size, void *p);
   static void delete_RooUniform(void *p);
   static void deleteArray_RooUniform(void *p);
   static void destruct_RooUniform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUniform*)
   {
      ::RooUniform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUniform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooUniform", ::RooUniform::Class_Version(), "RooUniform.h", 24,
                  typeid(::RooUniform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUniform::Dictionary, isa_proxy, 4,
                  sizeof(::RooUniform) );
      instance.SetNew(&new_RooUniform);
      instance.SetNewArray(&newArray_RooUniform);
      instance.SetDelete(&delete_RooUniform);
      instance.SetDeleteArray(&deleteArray_RooUniform);
      instance.SetDestructor(&destruct_RooUniform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUniform*)
   {
      return GenerateInitInstanceLocal((::RooUniform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooUniform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooVoigtian(void *p = 0);
   static void *newArray_RooVoigtian(Long_t size, void *p);
   static void delete_RooVoigtian(void *p);
   static void deleteArray_RooVoigtian(void *p);
   static void destruct_RooVoigtian(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooVoigtian*)
   {
      ::RooVoigtian *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooVoigtian >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooVoigtian", ::RooVoigtian::Class_Version(), "RooVoigtian.h", 24,
                  typeid(::RooVoigtian), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooVoigtian::Dictionary, isa_proxy, 4,
                  sizeof(::RooVoigtian) );
      instance.SetNew(&new_RooVoigtian);
      instance.SetNewArray(&newArray_RooVoigtian);
      instance.SetDelete(&delete_RooVoigtian);
      instance.SetDeleteArray(&deleteArray_RooVoigtian);
      instance.SetDestructor(&destruct_RooVoigtian);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooVoigtian*)
   {
      return GenerateInitInstanceLocal((::RooVoigtian*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooVoigtian*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Roo1DMomentMorphFunction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Roo1DMomentMorphFunction::Class_Name()
{
   return "Roo1DMomentMorphFunction";
}

//______________________________________________________________________________
const char *Roo1DMomentMorphFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo1DMomentMorphFunction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Roo1DMomentMorphFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo1DMomentMorphFunction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Roo1DMomentMorphFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo1DMomentMorphFunction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Roo1DMomentMorphFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo1DMomentMorphFunction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Roo2DKeysPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Roo2DKeysPdf::Class_Name()
{
   return "Roo2DKeysPdf";
}

//______________________________________________________________________________
const char *Roo2DKeysPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo2DKeysPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Roo2DKeysPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo2DKeysPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Roo2DKeysPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo2DKeysPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Roo2DKeysPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo2DKeysPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Roo2DMomentMorphFunction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Roo2DMomentMorphFunction::Class_Name()
{
   return "Roo2DMomentMorphFunction";
}

//______________________________________________________________________________
const char *Roo2DMomentMorphFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo2DMomentMorphFunction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Roo2DMomentMorphFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo2DMomentMorphFunction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Roo2DMomentMorphFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo2DMomentMorphFunction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Roo2DMomentMorphFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo2DMomentMorphFunction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooArgusBG::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooArgusBG::Class_Name()
{
   return "RooArgusBG";
}

//______________________________________________________________________________
const char *RooArgusBG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgusBG*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooArgusBG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgusBG*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooArgusBG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgusBG*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooArgusBG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgusBG*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBCPEffDecay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBCPEffDecay::Class_Name()
{
   return "RooBCPEffDecay";
}

//______________________________________________________________________________
const char *RooBCPEffDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBCPEffDecay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBCPEffDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBCPEffDecay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBCPEffDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBCPEffDecay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBCPEffDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBCPEffDecay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBCPGenDecay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBCPGenDecay::Class_Name()
{
   return "RooBCPGenDecay";
}

//______________________________________________________________________________
const char *RooBCPGenDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBCPGenDecay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBCPGenDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBCPGenDecay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBCPGenDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBCPGenDecay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBCPGenDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBCPGenDecay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBDecay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBDecay::Class_Name()
{
   return "RooBDecay";
}

//______________________________________________________________________________
const char *RooBDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBDecay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBDecay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBDecay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBDecay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBMixDecay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBMixDecay::Class_Name()
{
   return "RooBMixDecay";
}

//______________________________________________________________________________
const char *RooBMixDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBMixDecay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBMixDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBMixDecay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBMixDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBMixDecay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBMixDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBMixDecay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBernstein::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBernstein::Class_Name()
{
   return "RooBernstein";
}

//______________________________________________________________________________
const char *RooBernstein::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBernstein*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBernstein::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBernstein*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBernstein::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBernstein*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBernstein::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBernstein*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBifurGauss::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBifurGauss::Class_Name()
{
   return "RooBifurGauss";
}

//______________________________________________________________________________
const char *RooBifurGauss::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBifurGauss*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBifurGauss::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBifurGauss*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBifurGauss::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBifurGauss*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBifurGauss::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBifurGauss*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBlindTools::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBlindTools::Class_Name()
{
   return "RooBlindTools";
}

//______________________________________________________________________________
const char *RooBlindTools::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBlindTools*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBlindTools::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBlindTools*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBlindTools::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBlindTools*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBlindTools::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBlindTools*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBreitWigner::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBreitWigner::Class_Name()
{
   return "RooBreitWigner";
}

//______________________________________________________________________________
const char *RooBreitWigner::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBreitWigner*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBreitWigner::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBreitWigner*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBreitWigner::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBreitWigner*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBreitWigner::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBreitWigner*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBukinPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBukinPdf::Class_Name()
{
   return "RooBukinPdf";
}

//______________________________________________________________________________
const char *RooBukinPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBukinPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBukinPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBukinPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBukinPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBukinPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBukinPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBukinPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCBShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCBShape::Class_Name()
{
   return "RooCBShape";
}

//______________________________________________________________________________
const char *RooCBShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCBShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooCBShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCBShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCBShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCBShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCBShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCBShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1Ref<double,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1Ref<double,int>::Class_Name()
{
   return "RooCFunction1Ref<double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1Ref<double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1Ref<double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Ref<double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Ref<double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1Ref<double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1Ref<double,double>::Class_Name()
{
   return "RooCFunction1Ref<double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1Ref<double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1Ref<double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Ref<double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Ref<double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Ref<double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1Binding<double,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1Binding<double,int>::Class_Name()
{
   return "RooCFunction1Binding<double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1Binding<double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1Binding<double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Binding<double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Binding<double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1Binding<double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1Binding<double,double>::Class_Name()
{
   return "RooCFunction1Binding<double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1Binding<double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1Binding<double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Binding<double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1Binding<double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1Binding<double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1PdfBinding<double,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1PdfBinding<double,int>::Class_Name()
{
   return "RooCFunction1PdfBinding<double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1PdfBinding<double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1PdfBinding<double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1PdfBinding<double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1PdfBinding<double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction1PdfBinding<double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction1PdfBinding<double,double>::Class_Name()
{
   return "RooCFunction1PdfBinding<double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction1PdfBinding<double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction1PdfBinding<double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction1PdfBinding<double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction1PdfBinding<double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction1PdfBinding<double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,int,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,int,int>::Class_Name()
{
   return "RooCFunction2Ref<double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,double,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,double,int>::Class_Name()
{
   return "RooCFunction2Ref<double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,unsigned int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,unsigned int,double>::Class_Name()
{
   return "RooCFunction2Ref<double,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,unsigned int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,int,double>::Class_Name()
{
   return "RooCFunction2Ref<double,int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Ref<double,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,double,double>::Class_Name()
{
   return "RooCFunction2Ref<double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Ref<double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Ref<double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Ref<double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Ref<double,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,int,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,int,int>::Class_Name()
{
   return "RooCFunction2Binding<double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,double,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,double,int>::Class_Name()
{
   return "RooCFunction2Binding<double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,unsigned int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,unsigned int,double>::Class_Name()
{
   return "RooCFunction2Binding<double,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,unsigned int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,int,double>::Class_Name()
{
   return "RooCFunction2Binding<double,int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2Binding<double,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,double,double>::Class_Name()
{
   return "RooCFunction2Binding<double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2Binding<double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2Binding<double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2Binding<double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2Binding<double,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,int,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,int,int>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,double,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,double,int>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,unsigned int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,unsigned int,double>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,unsigned int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,int,double>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction2PdfBinding<double,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,double,double>::Class_Name()
{
   return "RooCFunction2PdfBinding<double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction2PdfBinding<double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction2PdfBinding<double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction2PdfBinding<double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction2PdfBinding<double,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,unsigned int,unsigned int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,unsigned int,double>::Class_Name()
{
   return "RooCFunction3Ref<double,unsigned int,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,unsigned int,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,unsigned int,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,double,double>::Class_Name()
{
   return "RooCFunction3Ref<double,unsigned int,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,unsigned int,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,unsigned int,double,unsigned int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,double,unsigned int>::Class_Name()
{
   return "RooCFunction3Ref<double,unsigned int,double,unsigned int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,unsigned int,double,unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,unsigned int,double,unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,double,unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,unsigned int,double,unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,double,int,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,int,int>::Class_Name()
{
   return "RooCFunction3Ref<double,double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,int,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,double,double,bool>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,double,bool>::Class_Name()
{
   return "RooCFunction3Ref<double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,bool>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Ref<double,double,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,double,double>::Class_Name()
{
   return "RooCFunction3Ref<double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Ref<double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Ref<double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Ref<double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Ref<double,double,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,unsigned int,unsigned int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class_Name()
{
   return "RooCFunction3Binding<double,unsigned int,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,unsigned int,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,unsigned int,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,double,double>::Class_Name()
{
   return "RooCFunction3Binding<double,unsigned int,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,unsigned int,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,unsigned int,double,unsigned int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class_Name()
{
   return "RooCFunction3Binding<double,unsigned int,double,unsigned int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,unsigned int,double,unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,unsigned int,double,unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,double,unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,double,int,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,int,int>::Class_Name()
{
   return "RooCFunction3Binding<double,double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,int,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,double,double,bool>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,double,bool>::Class_Name()
{
   return "RooCFunction3Binding<double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,bool>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3Binding<double,double,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,double,double>::Class_Name()
{
   return "RooCFunction3Binding<double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3Binding<double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3Binding<double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3Binding<double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3Binding<double,double,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,unsigned int,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,double,double>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,unsigned int,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,unsigned int,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,double,int,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,int,int>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,double,int,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,int,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,double,int,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,int,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,int,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,int,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,double,double,bool>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,double,bool>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,bool>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction3PdfBinding<double,double,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,double,double>::Class_Name()
{
   return "RooCFunction3PdfBinding<double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction3PdfBinding<double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction3PdfBinding<double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction3PdfBinding<double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction3PdfBinding<double,double,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Ref<double,double,double,double,bool>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,bool>::Class_Name()
{
   return "RooCFunction4Ref<double,double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Ref<double,double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,bool>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Ref<double,double,double,double,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,int>::Class_Name()
{
   return "RooCFunction4Ref<double,double,double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Ref<double,double,double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Ref<double,double,double,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,double>::Class_Name()
{
   return "RooCFunction4Ref<double,double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Ref<double,double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Ref<double,double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Ref<double,double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Ref<double,double,double,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Binding<double,double,double,double,bool>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,bool>::Class_Name()
{
   return "RooCFunction4Binding<double,double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Binding<double,double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,bool>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Binding<double,double,double,double,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,int>::Class_Name()
{
   return "RooCFunction4Binding<double,double,double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Binding<double,double,double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4Binding<double,double,double,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,double>::Class_Name()
{
   return "RooCFunction4Binding<double,double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4Binding<double,double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4Binding<double,double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4Binding<double,double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4Binding<double,double,double,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4PdfBinding<double,double,double,double,bool>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,bool>::Class_Name()
{
   return "RooCFunction4PdfBinding<double,double,double,double,bool>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,bool>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4PdfBinding<double,double,double,double,bool>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,bool>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,bool>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,bool>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4PdfBinding<double,double,double,double,int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,int>::Class_Name()
{
   return "RooCFunction4PdfBinding<double,double,double,double,int>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4PdfBinding<double,double,double,double,int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCFunction4PdfBinding<double,double,double,double,double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,double>::Class_Name()
{
   return "RooCFunction4PdfBinding<double,double,double,double,double>";
}

//______________________________________________________________________________
template <> const char *RooCFunction4PdfBinding<double,double,double,double,double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCFunction4PdfBinding<double,double,double,double,double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCFunction4PdfBinding<double,double,double,double,double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCFunction4PdfBinding<double,double,double,double,double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooChebychev::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooChebychev::Class_Name()
{
   return "RooChebychev";
}

//______________________________________________________________________________
const char *RooChebychev::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChebychev*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooChebychev::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChebychev*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooChebychev::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChebychev*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooChebychev::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChebychev*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooChi2MCSModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooChi2MCSModule::Class_Name()
{
   return "RooChi2MCSModule";
}

//______________________________________________________________________________
const char *RooChi2MCSModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChi2MCSModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooChi2MCSModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChi2MCSModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooChi2MCSModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChi2MCSModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooChi2MCSModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChi2MCSModule*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooChiSquarePdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooChiSquarePdf::Class_Name()
{
   return "RooChiSquarePdf";
}

//______________________________________________________________________________
const char *RooChiSquarePdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChiSquarePdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooChiSquarePdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChiSquarePdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooChiSquarePdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChiSquarePdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooChiSquarePdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChiSquarePdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDecay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDecay::Class_Name()
{
   return "RooDecay";
}

//______________________________________________________________________________
const char *RooDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDecay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDecay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDecay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDecay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDstD0BG::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDstD0BG::Class_Name()
{
   return "RooDstD0BG";
}

//______________________________________________________________________________
const char *RooDstD0BG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDstD0BG*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooDstD0BG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDstD0BG*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDstD0BG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDstD0BG*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDstD0BG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDstD0BG*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooExponential::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooExponential::Class_Name()
{
   return "RooExponential";
}

//______________________________________________________________________________
const char *RooExponential::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExponential*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooExponential::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExponential*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooExponential::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExponential*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooExponential::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExponential*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFunctor1DBinding::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFunctor1DBinding::Class_Name()
{
   return "RooFunctor1DBinding";
}

//______________________________________________________________________________
const char *RooFunctor1DBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DBinding*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooFunctor1DBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DBinding*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFunctor1DBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DBinding*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFunctor1DBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DBinding*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFunctor1DPdfBinding::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFunctor1DPdfBinding::Class_Name()
{
   return "RooFunctor1DPdfBinding";
}

//______________________________________________________________________________
const char *RooFunctor1DPdfBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DPdfBinding*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooFunctor1DPdfBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DPdfBinding*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFunctor1DPdfBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DPdfBinding*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFunctor1DPdfBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor1DPdfBinding*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFunctorBinding::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFunctorBinding::Class_Name()
{
   return "RooFunctorBinding";
}

//______________________________________________________________________________
const char *RooFunctorBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorBinding*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooFunctorBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorBinding*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFunctorBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorBinding*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFunctorBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorBinding*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFunctorPdfBinding::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFunctorPdfBinding::Class_Name()
{
   return "RooFunctorPdfBinding";
}

//______________________________________________________________________________
const char *RooFunctorPdfBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorPdfBinding*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooFunctorPdfBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorPdfBinding*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFunctorPdfBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorPdfBinding*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFunctorPdfBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctorPdfBinding*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGExpModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGExpModel::Class_Name()
{
   return "RooGExpModel";
}

//______________________________________________________________________________
const char *RooGExpModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGExpModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooGExpModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGExpModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGExpModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGExpModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGExpModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGExpModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGamma::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGamma::Class_Name()
{
   return "RooGamma";
}

//______________________________________________________________________________
const char *RooGamma::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGamma*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooGamma::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGamma*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGamma::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGamma*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGamma::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGamma*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGaussModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGaussModel::Class_Name()
{
   return "RooGaussModel";
}

//______________________________________________________________________________
const char *RooGaussModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooGaussModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGaussModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGaussModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGaussian::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGaussian::Class_Name()
{
   return "RooGaussian";
}

//______________________________________________________________________________
const char *RooGaussian::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussian*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooGaussian::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGaussian*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGaussian::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussian*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGaussian::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGaussian*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooHistConstraint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooHistConstraint::Class_Name()
{
   return "RooHistConstraint";
}

//______________________________________________________________________________
const char *RooHistConstraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHistConstraint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooHistConstraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHistConstraint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooHistConstraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHistConstraint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooHistConstraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHistConstraint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooIntegralMorph::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooIntegralMorph::Class_Name()
{
   return "RooIntegralMorph";
}

//______________________________________________________________________________
const char *RooIntegralMorph::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooIntegralMorph*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooIntegralMorph::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooIntegralMorph*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooIntegralMorph::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooIntegralMorph*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooIntegralMorph::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooIntegralMorph*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooJeffreysPrior::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooJeffreysPrior::Class_Name()
{
   return "RooJeffreysPrior";
}

//______________________________________________________________________________
const char *RooJeffreysPrior::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooJeffreysPrior*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooJeffreysPrior::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooJeffreysPrior*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooJeffreysPrior::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooJeffreysPrior*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooJeffreysPrior::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooJeffreysPrior*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooKeysPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooKeysPdf::Class_Name()
{
   return "RooKeysPdf";
}

//______________________________________________________________________________
const char *RooKeysPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooKeysPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooKeysPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooKeysPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooKeysPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooKeysPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooKeysPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooKeysPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLandau::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLandau::Class_Name()
{
   return "RooLandau";
}

//______________________________________________________________________________
const char *RooLandau::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLandau*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooLandau::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLandau*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLandau::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLandau*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLandau::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLandau*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLegendre::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLegendre::Class_Name()
{
   return "RooLegendre";
}

//______________________________________________________________________________
const char *RooLegendre::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLegendre*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooLegendre::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLegendre*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLegendre::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLegendre*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLegendre::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLegendre*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLognormal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLognormal::Class_Name()
{
   return "RooLognormal";
}

//______________________________________________________________________________
const char *RooLognormal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLognormal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooLognormal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLognormal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLognormal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLognormal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLognormal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLognormal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMomentMorph::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMomentMorph::Class_Name()
{
   return "RooMomentMorph";
}

//______________________________________________________________________________
const char *RooMomentMorph::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorph*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooMomentMorph::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorph*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMomentMorph::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorph*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMomentMorph::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMomentMorph*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMultiBinomial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMultiBinomial::Class_Name()
{
   return "RooMultiBinomial";
}

//______________________________________________________________________________
const char *RooMultiBinomial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiBinomial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooMultiBinomial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiBinomial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMultiBinomial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiBinomial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMultiBinomial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiBinomial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNDKeysPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNDKeysPdf::Class_Name()
{
   return "RooNDKeysPdf";
}

//______________________________________________________________________________
const char *RooNDKeysPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNDKeysPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooNDKeysPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNDKeysPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNDKeysPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNDKeysPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNDKeysPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNDKeysPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNonCPEigenDecay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNonCPEigenDecay::Class_Name()
{
   return "RooNonCPEigenDecay";
}

//______________________________________________________________________________
const char *RooNonCPEigenDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNonCPEigenDecay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooNonCPEigenDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNonCPEigenDecay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNonCPEigenDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNonCPEigenDecay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNonCPEigenDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNonCPEigenDecay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNonCentralChiSquare::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNonCentralChiSquare::Class_Name()
{
   return "RooNonCentralChiSquare";
}

//______________________________________________________________________________
const char *RooNonCentralChiSquare::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNonCentralChiSquare*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooNonCentralChiSquare::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNonCentralChiSquare*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNonCentralChiSquare::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNonCentralChiSquare*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNonCentralChiSquare::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNonCentralChiSquare*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNovosibirsk::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNovosibirsk::Class_Name()
{
   return "RooNovosibirsk";
}

//______________________________________________________________________________
const char *RooNovosibirsk::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNovosibirsk*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooNovosibirsk::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNovosibirsk*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNovosibirsk::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNovosibirsk*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNovosibirsk::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNovosibirsk*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooParamHistFunc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooParamHistFunc::Class_Name()
{
   return "RooParamHistFunc";
}

//______________________________________________________________________________
const char *RooParamHistFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParamHistFunc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooParamHistFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParamHistFunc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooParamHistFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParamHistFunc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooParamHistFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParamHistFunc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooParametricStepFunction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooParametricStepFunction::Class_Name()
{
   return "RooParametricStepFunction";
}

//______________________________________________________________________________
const char *RooParametricStepFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParametricStepFunction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooParametricStepFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParametricStepFunction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooParametricStepFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParametricStepFunction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooParametricStepFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParametricStepFunction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPoisson::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPoisson::Class_Name()
{
   return "RooPoisson";
}

//______________________________________________________________________________
const char *RooPoisson::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPoisson*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooPoisson::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPoisson*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPoisson::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPoisson*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPoisson::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPoisson*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPolynomial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPolynomial::Class_Name()
{
   return "RooPolynomial";
}

//______________________________________________________________________________
const char *RooPolynomial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPolynomial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooPolynomial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPolynomial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPolynomial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPolynomial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPolynomial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPolynomial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooSpHarmonic::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooSpHarmonic::Class_Name()
{
   return "RooSpHarmonic";
}

//______________________________________________________________________________
const char *RooSpHarmonic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSpHarmonic*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooSpHarmonic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSpHarmonic*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooSpHarmonic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSpHarmonic*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooSpHarmonic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSpHarmonic*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooStepFunction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooStepFunction::Class_Name()
{
   return "RooStepFunction";
}

//______________________________________________________________________________
const char *RooStepFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStepFunction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooStepFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStepFunction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooStepFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStepFunction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooStepFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStepFunction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTFnBinding::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTFnBinding::Class_Name()
{
   return "RooTFnBinding";
}

//______________________________________________________________________________
const char *RooTFnBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTFnBinding*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooTFnBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTFnBinding*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTFnBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTFnBinding*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTFnBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTFnBinding*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTFnPdfBinding::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTFnPdfBinding::Class_Name()
{
   return "RooTFnPdfBinding";
}

//______________________________________________________________________________
const char *RooTFnPdfBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTFnPdfBinding*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooTFnPdfBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTFnPdfBinding*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTFnPdfBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTFnPdfBinding*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTFnPdfBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTFnPdfBinding*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUnblindCPAsymVar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUnblindCPAsymVar::Class_Name()
{
   return "RooUnblindCPAsymVar";
}

//______________________________________________________________________________
const char *RooUnblindCPAsymVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindCPAsymVar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooUnblindCPAsymVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindCPAsymVar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUnblindCPAsymVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindCPAsymVar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUnblindCPAsymVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindCPAsymVar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUnblindOffset::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUnblindOffset::Class_Name()
{
   return "RooUnblindOffset";
}

//______________________________________________________________________________
const char *RooUnblindOffset::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindOffset*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooUnblindOffset::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindOffset*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUnblindOffset::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindOffset*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUnblindOffset::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindOffset*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUnblindPrecision::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUnblindPrecision::Class_Name()
{
   return "RooUnblindPrecision";
}

//______________________________________________________________________________
const char *RooUnblindPrecision::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindPrecision*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooUnblindPrecision::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindPrecision*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUnblindPrecision::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindPrecision*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUnblindPrecision::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindPrecision*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUnblindUniform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUnblindUniform::Class_Name()
{
   return "RooUnblindUniform";
}

//______________________________________________________________________________
const char *RooUnblindUniform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindUniform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooUnblindUniform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindUniform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUnblindUniform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindUniform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUnblindUniform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUnblindUniform*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUniform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUniform::Class_Name()
{
   return "RooUniform";
}

//______________________________________________________________________________
const char *RooUniform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUniform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooUniform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUniform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUniform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUniform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUniform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUniform*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooVoigtian::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooVoigtian::Class_Name()
{
   return "RooVoigtian";
}

//______________________________________________________________________________
const char *RooVoigtian::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVoigtian*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooVoigtian::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVoigtian*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooVoigtian::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVoigtian*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooVoigtian::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVoigtian*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Roo1DMomentMorphFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class Roo1DMomentMorphFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Roo1DMomentMorphFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(Roo1DMomentMorphFunction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Roo1DMomentMorphFunction(void *p) {
      return  p ? new(p) ::Roo1DMomentMorphFunction : new ::Roo1DMomentMorphFunction;
   }
   static void *newArray_Roo1DMomentMorphFunction(Long_t nElements, void *p) {
      return p ? new(p) ::Roo1DMomentMorphFunction[nElements] : new ::Roo1DMomentMorphFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_Roo1DMomentMorphFunction(void *p) {
      delete ((::Roo1DMomentMorphFunction*)p);
   }
   static void deleteArray_Roo1DMomentMorphFunction(void *p) {
      delete [] ((::Roo1DMomentMorphFunction*)p);
   }
   static void destruct_Roo1DMomentMorphFunction(void *p) {
      typedef ::Roo1DMomentMorphFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Roo1DMomentMorphFunction

//______________________________________________________________________________
void Roo2DKeysPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class Roo2DKeysPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Roo2DKeysPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(Roo2DKeysPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Roo2DKeysPdf(void *p) {
      delete ((::Roo2DKeysPdf*)p);
   }
   static void deleteArray_Roo2DKeysPdf(void *p) {
      delete [] ((::Roo2DKeysPdf*)p);
   }
   static void destruct_Roo2DKeysPdf(void *p) {
      typedef ::Roo2DKeysPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Roo2DKeysPdf

//______________________________________________________________________________
void Roo2DMomentMorphFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class Roo2DMomentMorphFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Roo2DMomentMorphFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(Roo2DMomentMorphFunction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Roo2DMomentMorphFunction(void *p) {
      return  p ? new(p) ::Roo2DMomentMorphFunction : new ::Roo2DMomentMorphFunction;
   }
   static void *newArray_Roo2DMomentMorphFunction(Long_t nElements, void *p) {
      return p ? new(p) ::Roo2DMomentMorphFunction[nElements] : new ::Roo2DMomentMorphFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_Roo2DMomentMorphFunction(void *p) {
      delete ((::Roo2DMomentMorphFunction*)p);
   }
   static void deleteArray_Roo2DMomentMorphFunction(void *p) {
      delete [] ((::Roo2DMomentMorphFunction*)p);
   }
   static void destruct_Roo2DMomentMorphFunction(void *p) {
      typedef ::Roo2DMomentMorphFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Roo2DMomentMorphFunction

//______________________________________________________________________________
void RooArgusBG::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooArgusBG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooArgusBG::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooArgusBG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooArgusBG(void *p) {
      return  p ? new(p) ::RooArgusBG : new ::RooArgusBG;
   }
   static void *newArray_RooArgusBG(Long_t nElements, void *p) {
      return p ? new(p) ::RooArgusBG[nElements] : new ::RooArgusBG[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooArgusBG(void *p) {
      delete ((::RooArgusBG*)p);
   }
   static void deleteArray_RooArgusBG(void *p) {
      delete [] ((::RooArgusBG*)p);
   }
   static void destruct_RooArgusBG(void *p) {
      typedef ::RooArgusBG current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooArgusBG

//______________________________________________________________________________
void RooBCPEffDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBCPEffDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBCPEffDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBCPEffDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBCPEffDecay(void *p) {
      return  p ? new(p) ::RooBCPEffDecay : new ::RooBCPEffDecay;
   }
   static void *newArray_RooBCPEffDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooBCPEffDecay[nElements] : new ::RooBCPEffDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBCPEffDecay(void *p) {
      delete ((::RooBCPEffDecay*)p);
   }
   static void deleteArray_RooBCPEffDecay(void *p) {
      delete [] ((::RooBCPEffDecay*)p);
   }
   static void destruct_RooBCPEffDecay(void *p) {
      typedef ::RooBCPEffDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooBCPEffDecay

//______________________________________________________________________________
void RooBCPGenDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBCPGenDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBCPGenDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBCPGenDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBCPGenDecay(void *p) {
      return  p ? new(p) ::RooBCPGenDecay : new ::RooBCPGenDecay;
   }
   static void *newArray_RooBCPGenDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooBCPGenDecay[nElements] : new ::RooBCPGenDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBCPGenDecay(void *p) {
      delete ((::RooBCPGenDecay*)p);
   }
   static void deleteArray_RooBCPGenDecay(void *p) {
      delete [] ((::RooBCPGenDecay*)p);
   }
   static void destruct_RooBCPGenDecay(void *p) {
      typedef ::RooBCPGenDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooBCPGenDecay

//______________________________________________________________________________
void RooBDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBDecay(void *p) {
      return  p ? new(p) ::RooBDecay : new ::RooBDecay;
   }
   static void *newArray_RooBDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooBDecay[nElements] : new ::RooBDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBDecay(void *p) {
      delete ((::RooBDecay*)p);
   }
   static void deleteArray_RooBDecay(void *p) {
      delete [] ((::RooBDecay*)p);
   }
   static void destruct_RooBDecay(void *p) {
      typedef ::RooBDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooBDecay

//______________________________________________________________________________
void RooBMixDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBMixDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBMixDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBMixDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBMixDecay(void *p) {
      return  p ? new(p) ::RooBMixDecay : new ::RooBMixDecay;
   }
   static void *newArray_RooBMixDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooBMixDecay[nElements] : new ::RooBMixDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBMixDecay(void *p) {
      delete ((::RooBMixDecay*)p);
   }
   static void deleteArray_RooBMixDecay(void *p) {
      delete [] ((::RooBMixDecay*)p);
   }
   static void destruct_RooBMixDecay(void *p) {
      typedef ::RooBMixDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooBMixDecay

//______________________________________________________________________________
void RooBernstein::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBernstein.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBernstein::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBernstein::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBernstein(void *p) {
      return  p ? new(p) ::RooBernstein : new ::RooBernstein;
   }
   static void *newArray_RooBernstein(Long_t nElements, void *p) {
      return p ? new(p) ::RooBernstein[nElements] : new ::RooBernstein[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBernstein(void *p) {
      delete ((::RooBernstein*)p);
   }
   static void deleteArray_RooBernstein(void *p) {
      delete [] ((::RooBernstein*)p);
   }
   static void destruct_RooBernstein(void *p) {
      typedef ::RooBernstein current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooBernstein

//______________________________________________________________________________
void RooBifurGauss::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBifurGauss.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBifurGauss::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBifurGauss::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBifurGauss(void *p) {
      return  p ? new(p) ::RooBifurGauss : new ::RooBifurGauss;
   }
   static void *newArray_RooBifurGauss(Long_t nElements, void *p) {
      return p ? new(p) ::RooBifurGauss[nElements] : new ::RooBifurGauss[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBifurGauss(void *p) {
      delete ((::RooBifurGauss*)p);
   }
   static void deleteArray_RooBifurGauss(void *p) {
      delete [] ((::RooBifurGauss*)p);
   }
   static void destruct_RooBifurGauss(void *p) {
      typedef ::RooBifurGauss current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooBifurGauss

//______________________________________________________________________________
void RooBlindTools::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBlindTools.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBlindTools::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBlindTools::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBlindTools(void *p) {
      return  p ? new(p) ::RooBlindTools : new ::RooBlindTools;
   }
   static void *newArray_RooBlindTools(Long_t nElements, void *p) {
      return p ? new(p) ::RooBlindTools[nElements] : new ::RooBlindTools[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBlindTools(void *p) {
      delete ((::RooBlindTools*)p);
   }
   static void deleteArray_RooBlindTools(void *p) {
      delete [] ((::RooBlindTools*)p);
   }
   static void destruct_RooBlindTools(void *p) {
      typedef ::RooBlindTools current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooBlindTools

//______________________________________________________________________________
void RooBreitWigner::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBreitWigner.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBreitWigner::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBreitWigner::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBreitWigner(void *p) {
      return  p ? new(p) ::RooBreitWigner : new ::RooBreitWigner;
   }
   static void *newArray_RooBreitWigner(Long_t nElements, void *p) {
      return p ? new(p) ::RooBreitWigner[nElements] : new ::RooBreitWigner[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBreitWigner(void *p) {
      delete ((::RooBreitWigner*)p);
   }
   static void deleteArray_RooBreitWigner(void *p) {
      delete [] ((::RooBreitWigner*)p);
   }
   static void destruct_RooBreitWigner(void *p) {
      typedef ::RooBreitWigner current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooBreitWigner

//______________________________________________________________________________
void RooBukinPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBukinPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBukinPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBukinPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBukinPdf(void *p) {
      return  p ? new(p) ::RooBukinPdf : new ::RooBukinPdf;
   }
   static void *newArray_RooBukinPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooBukinPdf[nElements] : new ::RooBukinPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBukinPdf(void *p) {
      delete ((::RooBukinPdf*)p);
   }
   static void deleteArray_RooBukinPdf(void *p) {
      delete [] ((::RooBukinPdf*)p);
   }
   static void destruct_RooBukinPdf(void *p) {
      typedef ::RooBukinPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooBukinPdf

//______________________________________________________________________________
void RooCBShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCBShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCBShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCBShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCBShape(void *p) {
      return  p ? new(p) ::RooCBShape : new ::RooCBShape;
   }
   static void *newArray_RooCBShape(Long_t nElements, void *p) {
      return p ? new(p) ::RooCBShape[nElements] : new ::RooCBShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCBShape(void *p) {
      delete ((::RooCBShape*)p);
   }
   static void deleteArray_RooCBShape(void *p) {
      delete [] ((::RooCBShape*)p);
   }
   static void destruct_RooCBShape(void *p) {
      typedef ::RooCBShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCBShape

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1ReflEdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction1Ref<double,int> : new ::RooCFunction1Ref<double,int>;
   }
   static void *newArray_RooCFunction1ReflEdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1Ref<double,int>[nElements] : new ::RooCFunction1Ref<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1ReflEdoublecOintgR(void *p) {
      delete ((::RooCFunction1Ref<double,int>*)p);
   }
   static void deleteArray_RooCFunction1ReflEdoublecOintgR(void *p) {
      delete [] ((::RooCFunction1Ref<double,int>*)p);
   }
   static void destruct_RooCFunction1ReflEdoublecOintgR(void *p) {
      typedef ::RooCFunction1Ref<double,int> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction1ReflEdoublecOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction1Ref<double,int>*)obj)->::RooCFunction1Ref<double,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction1Ref<double,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1ReflEdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction1Ref<double,double> : new ::RooCFunction1Ref<double,double>;
   }
   static void *newArray_RooCFunction1ReflEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1Ref<double,double>[nElements] : new ::RooCFunction1Ref<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1ReflEdoublecOdoublegR(void *p) {
      delete ((::RooCFunction1Ref<double,double>*)p);
   }
   static void deleteArray_RooCFunction1ReflEdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction1Ref<double,double>*)p);
   }
   static void destruct_RooCFunction1ReflEdoublecOdoublegR(void *p) {
      typedef ::RooCFunction1Ref<double,double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction1ReflEdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction1Ref<double,double>*)obj)->::RooCFunction1Ref<double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction1Ref<double,double>

//______________________________________________________________________________
template <> void RooCFunction1Binding<double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction1Binding<double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction1Binding<double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction1Binding<double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1BindinglEdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction1Binding<double,int> : new ::RooCFunction1Binding<double,int>;
   }
   static void *newArray_RooCFunction1BindinglEdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1Binding<double,int>[nElements] : new ::RooCFunction1Binding<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1BindinglEdoublecOintgR(void *p) {
      delete ((::RooCFunction1Binding<double,int>*)p);
   }
   static void deleteArray_RooCFunction1BindinglEdoublecOintgR(void *p) {
      delete [] ((::RooCFunction1Binding<double,int>*)p);
   }
   static void destruct_RooCFunction1BindinglEdoublecOintgR(void *p) {
      typedef ::RooCFunction1Binding<double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction1Binding<double,int>

//______________________________________________________________________________
template <> void RooCFunction1Binding<double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction1Binding<double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction1Binding<double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction1Binding<double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1BindinglEdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction1Binding<double,double> : new ::RooCFunction1Binding<double,double>;
   }
   static void *newArray_RooCFunction1BindinglEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1Binding<double,double>[nElements] : new ::RooCFunction1Binding<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1BindinglEdoublecOdoublegR(void *p) {
      delete ((::RooCFunction1Binding<double,double>*)p);
   }
   static void deleteArray_RooCFunction1BindinglEdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction1Binding<double,double>*)p);
   }
   static void destruct_RooCFunction1BindinglEdoublecOdoublegR(void *p) {
      typedef ::RooCFunction1Binding<double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction1Binding<double,double>

//______________________________________________________________________________
template <> void RooCFunction1PdfBinding<double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction1PdfBinding<double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction1PdfBinding<double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction1PdfBinding<double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1PdfBindinglEdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction1PdfBinding<double,int> : new ::RooCFunction1PdfBinding<double,int>;
   }
   static void *newArray_RooCFunction1PdfBindinglEdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1PdfBinding<double,int>[nElements] : new ::RooCFunction1PdfBinding<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1PdfBindinglEdoublecOintgR(void *p) {
      delete ((::RooCFunction1PdfBinding<double,int>*)p);
   }
   static void deleteArray_RooCFunction1PdfBindinglEdoublecOintgR(void *p) {
      delete [] ((::RooCFunction1PdfBinding<double,int>*)p);
   }
   static void destruct_RooCFunction1PdfBindinglEdoublecOintgR(void *p) {
      typedef ::RooCFunction1PdfBinding<double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction1PdfBinding<double,int>

//______________________________________________________________________________
template <> void RooCFunction1PdfBinding<double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction1PdfBinding<double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction1PdfBinding<double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction1PdfBinding<double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction1PdfBinding<double,double> : new ::RooCFunction1PdfBinding<double,double>;
   }
   static void *newArray_RooCFunction1PdfBindinglEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction1PdfBinding<double,double>[nElements] : new ::RooCFunction1PdfBinding<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p) {
      delete ((::RooCFunction1PdfBinding<double,double>*)p);
   }
   static void deleteArray_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction1PdfBinding<double,double>*)p);
   }
   static void destruct_RooCFunction1PdfBindinglEdoublecOdoublegR(void *p) {
      typedef ::RooCFunction1PdfBinding<double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction1PdfBinding<double,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,int,int> : new ::RooCFunction2Ref<double,int,int>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,int,int>[nElements] : new ::RooCFunction2Ref<double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOintcOintgR(void *p) {
      delete ((::RooCFunction2Ref<double,int,int>*)p);
   }
   static void deleteArray_RooCFunction2ReflEdoublecOintcOintgR(void *p) {
      delete [] ((::RooCFunction2Ref<double,int,int>*)p);
   }
   static void destruct_RooCFunction2ReflEdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction2Ref<double,int,int> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOintcOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,int,int>*)obj)->::RooCFunction2Ref<double,int,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,int,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,double,int> : new ::RooCFunction2Ref<double,double,int>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,double,int>[nElements] : new ::RooCFunction2Ref<double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOdoublecOintgR(void *p) {
      delete ((::RooCFunction2Ref<double,double,int>*)p);
   }
   static void deleteArray_RooCFunction2ReflEdoublecOdoublecOintgR(void *p) {
      delete [] ((::RooCFunction2Ref<double,double,int>*)p);
   }
   static void destruct_RooCFunction2ReflEdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction2Ref<double,double,int> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOdoublecOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,double,int>*)obj)->::RooCFunction2Ref<double,double,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,double,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,unsigned int,double> : new ::RooCFunction2Ref<double,unsigned int,double>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,unsigned int,double>[nElements] : new ::RooCFunction2Ref<double,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete ((::RooCFunction2Ref<double,unsigned int,double>*)p);
   }
   static void deleteArray_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete [] ((::RooCFunction2Ref<double,unsigned int,double>*)p);
   }
   static void destruct_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction2Ref<double,unsigned int,double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOunsignedsPintcOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,unsigned int,double>*)obj)->::RooCFunction2Ref<double,unsigned int,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,unsigned int,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,int,double> : new ::RooCFunction2Ref<double,int,double>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,int,double>[nElements] : new ::RooCFunction2Ref<double,int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOintcOdoublegR(void *p) {
      delete ((::RooCFunction2Ref<double,int,double>*)p);
   }
   static void deleteArray_RooCFunction2ReflEdoublecOintcOdoublegR(void *p) {
      delete [] ((::RooCFunction2Ref<double,int,double>*)p);
   }
   static void destruct_RooCFunction2ReflEdoublecOintcOdoublegR(void *p) {
      typedef ::RooCFunction2Ref<double,int,double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOintcOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,int,double>*)obj)->::RooCFunction2Ref<double,int,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,int,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Ref<double,double,double> : new ::RooCFunction2Ref<double,double,double>;
   }
   static void *newArray_RooCFunction2ReflEdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Ref<double,double,double>[nElements] : new ::RooCFunction2Ref<double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction2Ref<double,double,double>*)p);
   }
   static void deleteArray_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction2Ref<double,double,double>*)p);
   }
   static void destruct_RooCFunction2ReflEdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction2Ref<double,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction2ReflEdoublecOdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction2Ref<double,double,double>*)obj)->::RooCFunction2Ref<double,double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction2Ref<double,double,double>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,int,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,int,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,int,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,int,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,int,int> : new ::RooCFunction2Binding<double,int,int>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,int,int>[nElements] : new ::RooCFunction2Binding<double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOintcOintgR(void *p) {
      delete ((::RooCFunction2Binding<double,int,int>*)p);
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOintcOintgR(void *p) {
      delete [] ((::RooCFunction2Binding<double,int,int>*)p);
   }
   static void destruct_RooCFunction2BindinglEdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction2Binding<double,int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,int,int>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,double,int> : new ::RooCFunction2Binding<double,double,int>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,double,int>[nElements] : new ::RooCFunction2Binding<double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p) {
      delete ((::RooCFunction2Binding<double,double,int>*)p);
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p) {
      delete [] ((::RooCFunction2Binding<double,double,int>*)p);
   }
   static void destruct_RooCFunction2BindinglEdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction2Binding<double,double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,double,int>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,unsigned int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,unsigned int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,unsigned int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,unsigned int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,unsigned int,double> : new ::RooCFunction2Binding<double,unsigned int,double>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,unsigned int,double>[nElements] : new ::RooCFunction2Binding<double,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete ((::RooCFunction2Binding<double,unsigned int,double>*)p);
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete [] ((::RooCFunction2Binding<double,unsigned int,double>*)p);
   }
   static void destruct_RooCFunction2BindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction2Binding<double,unsigned int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,unsigned int,double>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,int,double> : new ::RooCFunction2Binding<double,int,double>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,int,double>[nElements] : new ::RooCFunction2Binding<double,int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p) {
      delete ((::RooCFunction2Binding<double,int,double>*)p);
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p) {
      delete [] ((::RooCFunction2Binding<double,int,double>*)p);
   }
   static void destruct_RooCFunction2BindinglEdoublecOintcOdoublegR(void *p) {
      typedef ::RooCFunction2Binding<double,int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,int,double>

//______________________________________________________________________________
template <> void RooCFunction2Binding<double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2Binding<double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2Binding<double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2Binding<double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2Binding<double,double,double> : new ::RooCFunction2Binding<double,double,double>;
   }
   static void *newArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2Binding<double,double,double>[nElements] : new ::RooCFunction2Binding<double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction2Binding<double,double,double>*)p);
   }
   static void deleteArray_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction2Binding<double,double,double>*)p);
   }
   static void destruct_RooCFunction2BindinglEdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction2Binding<double,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2Binding<double,double,double>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,int,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,int,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,int,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,int,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,int,int> : new ::RooCFunction2PdfBinding<double,int,int>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,int,int>[nElements] : new ::RooCFunction2PdfBinding<double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p) {
      delete ((::RooCFunction2PdfBinding<double,int,int>*)p);
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p) {
      delete [] ((::RooCFunction2PdfBinding<double,int,int>*)p);
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,int,int>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,double,int> : new ::RooCFunction2PdfBinding<double,double,int>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,double,int>[nElements] : new ::RooCFunction2PdfBinding<double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p) {
      delete ((::RooCFunction2PdfBinding<double,double,int>*)p);
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p) {
      delete [] ((::RooCFunction2PdfBinding<double,double,int>*)p);
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,double,int>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,unsigned int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,unsigned int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,unsigned int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,unsigned int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,unsigned int,double> : new ::RooCFunction2PdfBinding<double,unsigned int,double>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,unsigned int,double>[nElements] : new ::RooCFunction2PdfBinding<double,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete ((::RooCFunction2PdfBinding<double,unsigned int,double>*)p);
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      delete [] ((::RooCFunction2PdfBinding<double,unsigned int,double>*)p);
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,unsigned int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,unsigned int,double>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,int,double> : new ::RooCFunction2PdfBinding<double,int,double>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,int,double>[nElements] : new ::RooCFunction2PdfBinding<double,int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p) {
      delete ((::RooCFunction2PdfBinding<double,int,double>*)p);
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p) {
      delete [] ((::RooCFunction2PdfBinding<double,int,double>*)p);
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOintcOdoublegR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,int,double>

//______________________________________________________________________________
template <> void RooCFunction2PdfBinding<double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction2PdfBinding<double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction2PdfBinding<double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction2PdfBinding<double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction2PdfBinding<double,double,double> : new ::RooCFunction2PdfBinding<double,double,double>;
   }
   static void *newArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction2PdfBinding<double,double,double>[nElements] : new ::RooCFunction2PdfBinding<double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction2PdfBinding<double,double,double>*)p);
   }
   static void deleteArray_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction2PdfBinding<double,double,double>*)p);
   }
   static void destruct_RooCFunction2PdfBindinglEdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction2PdfBinding<double,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction2PdfBinding<double,double,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,unsigned int,unsigned int,double> : new ::RooCFunction3Ref<double,unsigned int,unsigned int,double>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,unsigned int,unsigned int,double>[nElements] : new ::RooCFunction3Ref<double,unsigned int,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete ((::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)p);
   }
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete [] ((::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)p);
   }
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction3Ref<double,unsigned int,unsigned int,double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,unsigned int,unsigned int,double>*)obj)->::RooCFunction3Ref<double,unsigned int,unsigned int,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,unsigned int,unsigned int,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,unsigned int,double,double> : new ::RooCFunction3Ref<double,unsigned int,double,double>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,unsigned int,double,double>[nElements] : new ::RooCFunction3Ref<double,unsigned int,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction3Ref<double,unsigned int,double,double>*)p);
   }
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction3Ref<double,unsigned int,double,double>*)p);
   }
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3Ref<double,unsigned int,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,unsigned int,double,double>*)obj)->::RooCFunction3Ref<double,unsigned int,double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,unsigned int,double,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,unsigned int,double,unsigned int> : new ::RooCFunction3Ref<double,unsigned int,double,unsigned int>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,unsigned int,double,unsigned int>[nElements] : new ::RooCFunction3Ref<double,unsigned int,double,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete ((::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)p);
   }
   static void deleteArray_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete [] ((::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)p);
   }
   static void destruct_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      typedef ::RooCFunction3Ref<double,unsigned int,double,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,unsigned int,double,unsigned int>*)obj)->::RooCFunction3Ref<double,unsigned int,double,unsigned int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,unsigned int,double,unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,double,int,int> : new ::RooCFunction3Ref<double,double,int,int>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,double,int,int>[nElements] : new ::RooCFunction3Ref<double,double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p) {
      delete ((::RooCFunction3Ref<double,double,int,int>*)p);
   }
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p) {
      delete [] ((::RooCFunction3Ref<double,double,int,int>*)p);
   }
   static void destruct_RooCFunction3ReflEdoublecOdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction3Ref<double,double,int,int> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOdoublecOintcOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,double,int,int>*)obj)->::RooCFunction3Ref<double,double,int,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,double,int,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,double,double,bool> : new ::RooCFunction3Ref<double,double,double,bool>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,double,double,bool>[nElements] : new ::RooCFunction3Ref<double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete ((::RooCFunction3Ref<double,double,double,bool>*)p);
   }
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] ((::RooCFunction3Ref<double,double,double,bool>*)p);
   }
   static void destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction3Ref<double,double,double,bool> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOboolgR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,double,double,bool>*)obj)->::RooCFunction3Ref<double,double,double,bool>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,double,double,bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Ref<double,double,double,double> : new ::RooCFunction3Ref<double,double,double,double>;
   }
   static void *newArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Ref<double,double,double,double>[nElements] : new ::RooCFunction3Ref<double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction3Ref<double,double,double,double>*)p);
   }
   static void deleteArray_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction3Ref<double,double,double,double>*)p);
   }
   static void destruct_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3Ref<double,double,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction3ReflEdoublecOdoublecOdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction3Ref<double,double,double,double>*)obj)->::RooCFunction3Ref<double,double,double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction3Ref<double,double,double,double>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,unsigned int,unsigned int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,unsigned int,unsigned int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,unsigned int,unsigned int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,unsigned int,unsigned int,double> : new ::RooCFunction3Binding<double,unsigned int,unsigned int,double>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,unsigned int,unsigned int,double>[nElements] : new ::RooCFunction3Binding<double,unsigned int,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete ((::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)p);
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete [] ((::RooCFunction3Binding<double,unsigned int,unsigned int,double>*)p);
   }
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction3Binding<double,unsigned int,unsigned int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,unsigned int,unsigned int,double>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,unsigned int,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,unsigned int,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,unsigned int,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,unsigned int,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,unsigned int,double,double> : new ::RooCFunction3Binding<double,unsigned int,double,double>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,unsigned int,double,double>[nElements] : new ::RooCFunction3Binding<double,unsigned int,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction3Binding<double,unsigned int,double,double>*)p);
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction3Binding<double,unsigned int,double,double>*)p);
   }
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3Binding<double,unsigned int,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,unsigned int,double,double>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,unsigned int,double,unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,unsigned int,double,unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,unsigned int,double,unsigned int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,unsigned int,double,unsigned int> : new ::RooCFunction3Binding<double,unsigned int,double,unsigned int>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,unsigned int,double,unsigned int>[nElements] : new ::RooCFunction3Binding<double,unsigned int,double,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete ((::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)p);
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete [] ((::RooCFunction3Binding<double,unsigned int,double,unsigned int>*)p);
   }
   static void destruct_RooCFunction3BindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      typedef ::RooCFunction3Binding<double,unsigned int,double,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,unsigned int,double,unsigned int>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,double,int,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,double,int,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,double,int,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,double,int,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,double,int,int> : new ::RooCFunction3Binding<double,double,int,int>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,double,int,int>[nElements] : new ::RooCFunction3Binding<double,double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p) {
      delete ((::RooCFunction3Binding<double,double,int,int>*)p);
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p) {
      delete [] ((::RooCFunction3Binding<double,double,int,int>*)p);
   }
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction3Binding<double,double,int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,double,int,int>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,double,double,bool>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,double,double,bool>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,double,double,bool>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,double,double,bool>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,double,double,bool> : new ::RooCFunction3Binding<double,double,double,bool>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,double,double,bool>[nElements] : new ::RooCFunction3Binding<double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete ((::RooCFunction3Binding<double,double,double,bool>*)p);
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] ((::RooCFunction3Binding<double,double,double,bool>*)p);
   }
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction3Binding<double,double,double,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,double,double,bool>

//______________________________________________________________________________
template <> void RooCFunction3Binding<double,double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3Binding<double,double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3Binding<double,double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3Binding<double,double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3Binding<double,double,double,double> : new ::RooCFunction3Binding<double,double,double,double>;
   }
   static void *newArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3Binding<double,double,double,double>[nElements] : new ::RooCFunction3Binding<double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction3Binding<double,double,double,double>*)p);
   }
   static void deleteArray_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction3Binding<double,double,double,double>*)p);
   }
   static void destruct_RooCFunction3BindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3Binding<double,double,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3Binding<double,double,double,double>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double> : new ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>[nElements] : new ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete ((::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)p);
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      delete [] ((::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>*)p);
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOunsignedsPintcOdoublegR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,unsigned int,unsigned int,double>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,unsigned int,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,unsigned int,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,unsigned int,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,unsigned int,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,double,double> : new ::RooCFunction3PdfBinding<double,unsigned int,double,double>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,double,double>[nElements] : new ::RooCFunction3PdfBinding<double,unsigned int,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction3PdfBinding<double,unsigned int,double,double>*)p);
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction3PdfBinding<double,unsigned int,double,double>*)p);
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,unsigned int,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,unsigned int,double,double>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int> : new ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>[nElements] : new ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete ((::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)p);
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      delete [] ((::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>*)p);
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOunsignedsPintcOdoublecOunsignedsPintgR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,unsigned int,double,unsigned int>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,double,int,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,double,int,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,double,int,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,double,int,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,double,int,int> : new ::RooCFunction3PdfBinding<double,double,int,int>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,double,int,int>[nElements] : new ::RooCFunction3PdfBinding<double,double,int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p) {
      delete ((::RooCFunction3PdfBinding<double,double,int,int>*)p);
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p) {
      delete [] ((::RooCFunction3PdfBinding<double,double,int,int>*)p);
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOintcOintgR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,double,int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,double,int,int>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,double,double,bool>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,double,double,bool>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,double,double,bool>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,double,double,bool>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,double,double,bool> : new ::RooCFunction3PdfBinding<double,double,double,bool>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,double,double,bool>[nElements] : new ::RooCFunction3PdfBinding<double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete ((::RooCFunction3PdfBinding<double,double,double,bool>*)p);
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] ((::RooCFunction3PdfBinding<double,double,double,bool>*)p);
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,double,double,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,double,double,bool>

//______________________________________________________________________________
template <> void RooCFunction3PdfBinding<double,double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction3PdfBinding<double,double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction3PdfBinding<double,double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction3PdfBinding<double,double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction3PdfBinding<double,double,double,double> : new ::RooCFunction3PdfBinding<double,double,double,double>;
   }
   static void *newArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction3PdfBinding<double,double,double,double>[nElements] : new ::RooCFunction3PdfBinding<double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction3PdfBinding<double,double,double,double>*)p);
   }
   static void deleteArray_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction3PdfBinding<double,double,double,double>*)p);
   }
   static void destruct_RooCFunction3PdfBindinglEdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction3PdfBinding<double,double,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction3PdfBinding<double,double,double,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction4Ref<double,double,double,double,bool> : new ::RooCFunction4Ref<double,double,double,double,bool>;
   }
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Ref<double,double,double,double,bool>[nElements] : new ::RooCFunction4Ref<double,double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete ((::RooCFunction4Ref<double,double,double,double,bool>*)p);
   }
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] ((::RooCFunction4Ref<double,double,double,double,bool>*)p);
   }
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction4Ref<double,double,double,double,bool> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOboolgR(TBuffer &buf, void *obj) {
      ((::RooCFunction4Ref<double,double,double,double,bool>*)obj)->::RooCFunction4Ref<double,double,double,double,bool>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction4Ref<double,double,double,double,bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction4Ref<double,double,double,double,int> : new ::RooCFunction4Ref<double,double,double,double,int>;
   }
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Ref<double,double,double,double,int>[nElements] : new ::RooCFunction4Ref<double,double,double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete ((::RooCFunction4Ref<double,double,double,double,int>*)p);
   }
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete [] ((::RooCFunction4Ref<double,double,double,double,int>*)p);
   }
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction4Ref<double,double,double,double,int> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOintgR(TBuffer &buf, void *obj) {
      ((::RooCFunction4Ref<double,double,double,double,int>*)obj)->::RooCFunction4Ref<double,double,double,double,int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction4Ref<double,double,double,double,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction4Ref<double,double,double,double,double> : new ::RooCFunction4Ref<double,double,double,double,double>;
   }
   static void *newArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Ref<double,double,double,double,double>[nElements] : new ::RooCFunction4Ref<double,double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction4Ref<double,double,double,double,double>*)p);
   }
   static void deleteArray_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction4Ref<double,double,double,double,double>*)p);
   }
   static void destruct_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction4Ref<double,double,double,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCFunction4ReflEdoublecOdoublecOdoublecOdoublecOdoublegR(TBuffer &buf, void *obj) {
      ((::RooCFunction4Ref<double,double,double,double,double>*)obj)->::RooCFunction4Ref<double,double,double,double,double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCFunction4Ref<double,double,double,double,double>

//______________________________________________________________________________
template <> void RooCFunction4Binding<double,double,double,double,bool>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4Binding<double,double,double,double,bool>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4Binding<double,double,double,double,bool>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4Binding<double,double,double,double,bool>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction4Binding<double,double,double,double,bool> : new ::RooCFunction4Binding<double,double,double,double,bool>;
   }
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Binding<double,double,double,double,bool>[nElements] : new ::RooCFunction4Binding<double,double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete ((::RooCFunction4Binding<double,double,double,double,bool>*)p);
   }
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] ((::RooCFunction4Binding<double,double,double,double,bool>*)p);
   }
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction4Binding<double,double,double,double,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4Binding<double,double,double,double,bool>

//______________________________________________________________________________
template <> void RooCFunction4Binding<double,double,double,double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4Binding<double,double,double,double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4Binding<double,double,double,double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4Binding<double,double,double,double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction4Binding<double,double,double,double,int> : new ::RooCFunction4Binding<double,double,double,double,int>;
   }
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Binding<double,double,double,double,int>[nElements] : new ::RooCFunction4Binding<double,double,double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete ((::RooCFunction4Binding<double,double,double,double,int>*)p);
   }
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete [] ((::RooCFunction4Binding<double,double,double,double,int>*)p);
   }
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction4Binding<double,double,double,double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4Binding<double,double,double,double,int>

//______________________________________________________________________________
template <> void RooCFunction4Binding<double,double,double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4Binding<double,double,double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4Binding<double,double,double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4Binding<double,double,double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction4Binding<double,double,double,double,double> : new ::RooCFunction4Binding<double,double,double,double,double>;
   }
   static void *newArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4Binding<double,double,double,double,double>[nElements] : new ::RooCFunction4Binding<double,double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction4Binding<double,double,double,double,double>*)p);
   }
   static void deleteArray_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction4Binding<double,double,double,double,double>*)p);
   }
   static void destruct_RooCFunction4BindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction4Binding<double,double,double,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4Binding<double,double,double,double,double>

//______________________________________________________________________________
template <> void RooCFunction4PdfBinding<double,double,double,double,bool>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4PdfBinding<double,double,double,double,bool>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4PdfBinding<double,double,double,double,bool>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4PdfBinding<double,double,double,double,bool>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      return  p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,bool> : new ::RooCFunction4PdfBinding<double,double,double,double,bool>;
   }
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,bool>[nElements] : new ::RooCFunction4PdfBinding<double,double,double,double,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete ((::RooCFunction4PdfBinding<double,double,double,double,bool>*)p);
   }
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      delete [] ((::RooCFunction4PdfBinding<double,double,double,double,bool>*)p);
   }
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOboolgR(void *p) {
      typedef ::RooCFunction4PdfBinding<double,double,double,double,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4PdfBinding<double,double,double,double,bool>

//______________________________________________________________________________
template <> void RooCFunction4PdfBinding<double,double,double,double,int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4PdfBinding<double,double,double,double,int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4PdfBinding<double,double,double,double,int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4PdfBinding<double,double,double,double,int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      return  p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,int> : new ::RooCFunction4PdfBinding<double,double,double,double,int>;
   }
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,int>[nElements] : new ::RooCFunction4PdfBinding<double,double,double,double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete ((::RooCFunction4PdfBinding<double,double,double,double,int>*)p);
   }
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      delete [] ((::RooCFunction4PdfBinding<double,double,double,double,int>*)p);
   }
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOintgR(void *p) {
      typedef ::RooCFunction4PdfBinding<double,double,double,double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4PdfBinding<double,double,double,double,int>

//______________________________________________________________________________
template <> void RooCFunction4PdfBinding<double,double,double,double,double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCFunction4PdfBinding<double,double,double,double,double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCFunction4PdfBinding<double,double,double,double,double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCFunction4PdfBinding<double,double,double,double,double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      return  p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,double> : new ::RooCFunction4PdfBinding<double,double,double,double,double>;
   }
   static void *newArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCFunction4PdfBinding<double,double,double,double,double>[nElements] : new ::RooCFunction4PdfBinding<double,double,double,double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete ((::RooCFunction4PdfBinding<double,double,double,double,double>*)p);
   }
   static void deleteArray_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      delete [] ((::RooCFunction4PdfBinding<double,double,double,double,double>*)p);
   }
   static void destruct_RooCFunction4PdfBindinglEdoublecOdoublecOdoublecOdoublecOdoublegR(void *p) {
      typedef ::RooCFunction4PdfBinding<double,double,double,double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooCFunction4PdfBinding<double,double,double,double,double>

//______________________________________________________________________________
void RooChebychev::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooChebychev.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooChebychev::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooChebychev::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooChebychev(void *p) {
      return  p ? new(p) ::RooChebychev : new ::RooChebychev;
   }
   static void *newArray_RooChebychev(Long_t nElements, void *p) {
      return p ? new(p) ::RooChebychev[nElements] : new ::RooChebychev[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooChebychev(void *p) {
      delete ((::RooChebychev*)p);
   }
   static void deleteArray_RooChebychev(void *p) {
      delete [] ((::RooChebychev*)p);
   }
   static void destruct_RooChebychev(void *p) {
      typedef ::RooChebychev current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooChebychev

//______________________________________________________________________________
void RooChi2MCSModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooChi2MCSModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooChi2MCSModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooChi2MCSModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooChi2MCSModule(void *p) {
      return  p ? new(p) ::RooChi2MCSModule : new ::RooChi2MCSModule;
   }
   static void *newArray_RooChi2MCSModule(Long_t nElements, void *p) {
      return p ? new(p) ::RooChi2MCSModule[nElements] : new ::RooChi2MCSModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooChi2MCSModule(void *p) {
      delete ((::RooChi2MCSModule*)p);
   }
   static void deleteArray_RooChi2MCSModule(void *p) {
      delete [] ((::RooChi2MCSModule*)p);
   }
   static void destruct_RooChi2MCSModule(void *p) {
      typedef ::RooChi2MCSModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooChi2MCSModule

//______________________________________________________________________________
void RooChiSquarePdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooChiSquarePdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooChiSquarePdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooChiSquarePdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooChiSquarePdf(void *p) {
      return  p ? new(p) ::RooChiSquarePdf : new ::RooChiSquarePdf;
   }
   static void *newArray_RooChiSquarePdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooChiSquarePdf[nElements] : new ::RooChiSquarePdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooChiSquarePdf(void *p) {
      delete ((::RooChiSquarePdf*)p);
   }
   static void deleteArray_RooChiSquarePdf(void *p) {
      delete [] ((::RooChiSquarePdf*)p);
   }
   static void destruct_RooChiSquarePdf(void *p) {
      typedef ::RooChiSquarePdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooChiSquarePdf

//______________________________________________________________________________
void RooDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDecay(void *p) {
      return  p ? new(p) ::RooDecay : new ::RooDecay;
   }
   static void *newArray_RooDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooDecay[nElements] : new ::RooDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDecay(void *p) {
      delete ((::RooDecay*)p);
   }
   static void deleteArray_RooDecay(void *p) {
      delete [] ((::RooDecay*)p);
   }
   static void destruct_RooDecay(void *p) {
      typedef ::RooDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooDecay

//______________________________________________________________________________
void RooDstD0BG::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDstD0BG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDstD0BG::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDstD0BG::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDstD0BG(void *p) {
      return  p ? new(p) ::RooDstD0BG : new ::RooDstD0BG;
   }
   static void *newArray_RooDstD0BG(Long_t nElements, void *p) {
      return p ? new(p) ::RooDstD0BG[nElements] : new ::RooDstD0BG[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDstD0BG(void *p) {
      delete ((::RooDstD0BG*)p);
   }
   static void deleteArray_RooDstD0BG(void *p) {
      delete [] ((::RooDstD0BG*)p);
   }
   static void destruct_RooDstD0BG(void *p) {
      typedef ::RooDstD0BG current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooDstD0BG

//______________________________________________________________________________
void RooExponential::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooExponential.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooExponential::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooExponential::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooExponential(void *p) {
      return  p ? new(p) ::RooExponential : new ::RooExponential;
   }
   static void *newArray_RooExponential(Long_t nElements, void *p) {
      return p ? new(p) ::RooExponential[nElements] : new ::RooExponential[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooExponential(void *p) {
      delete ((::RooExponential*)p);
   }
   static void deleteArray_RooExponential(void *p) {
      delete [] ((::RooExponential*)p);
   }
   static void destruct_RooExponential(void *p) {
      typedef ::RooExponential current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooExponential

//______________________________________________________________________________
void RooFunctor1DBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFunctor1DBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFunctor1DBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFunctor1DBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFunctor1DBinding(void *p) {
      return  p ? new(p) ::RooFunctor1DBinding : new ::RooFunctor1DBinding;
   }
   static void *newArray_RooFunctor1DBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooFunctor1DBinding[nElements] : new ::RooFunctor1DBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFunctor1DBinding(void *p) {
      delete ((::RooFunctor1DBinding*)p);
   }
   static void deleteArray_RooFunctor1DBinding(void *p) {
      delete [] ((::RooFunctor1DBinding*)p);
   }
   static void destruct_RooFunctor1DBinding(void *p) {
      typedef ::RooFunctor1DBinding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooFunctor1DBinding

//______________________________________________________________________________
void RooFunctor1DPdfBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFunctor1DPdfBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFunctor1DPdfBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFunctor1DPdfBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFunctor1DPdfBinding(void *p) {
      return  p ? new(p) ::RooFunctor1DPdfBinding : new ::RooFunctor1DPdfBinding;
   }
   static void *newArray_RooFunctor1DPdfBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooFunctor1DPdfBinding[nElements] : new ::RooFunctor1DPdfBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFunctor1DPdfBinding(void *p) {
      delete ((::RooFunctor1DPdfBinding*)p);
   }
   static void deleteArray_RooFunctor1DPdfBinding(void *p) {
      delete [] ((::RooFunctor1DPdfBinding*)p);
   }
   static void destruct_RooFunctor1DPdfBinding(void *p) {
      typedef ::RooFunctor1DPdfBinding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooFunctor1DPdfBinding

//______________________________________________________________________________
void RooFunctorBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFunctorBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFunctorBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFunctorBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFunctorBinding(void *p) {
      return  p ? new(p) ::RooFunctorBinding : new ::RooFunctorBinding;
   }
   static void *newArray_RooFunctorBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooFunctorBinding[nElements] : new ::RooFunctorBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFunctorBinding(void *p) {
      delete ((::RooFunctorBinding*)p);
   }
   static void deleteArray_RooFunctorBinding(void *p) {
      delete [] ((::RooFunctorBinding*)p);
   }
   static void destruct_RooFunctorBinding(void *p) {
      typedef ::RooFunctorBinding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooFunctorBinding

//______________________________________________________________________________
void RooFunctorPdfBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFunctorPdfBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFunctorPdfBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFunctorPdfBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFunctorPdfBinding(void *p) {
      return  p ? new(p) ::RooFunctorPdfBinding : new ::RooFunctorPdfBinding;
   }
   static void *newArray_RooFunctorPdfBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooFunctorPdfBinding[nElements] : new ::RooFunctorPdfBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFunctorPdfBinding(void *p) {
      delete ((::RooFunctorPdfBinding*)p);
   }
   static void deleteArray_RooFunctorPdfBinding(void *p) {
      delete [] ((::RooFunctorPdfBinding*)p);
   }
   static void destruct_RooFunctorPdfBinding(void *p) {
      typedef ::RooFunctorPdfBinding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooFunctorPdfBinding

//______________________________________________________________________________
void RooGExpModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGExpModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGExpModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGExpModel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGExpModel(void *p) {
      return  p ? new(p) ::RooGExpModel : new ::RooGExpModel;
   }
   static void *newArray_RooGExpModel(Long_t nElements, void *p) {
      return p ? new(p) ::RooGExpModel[nElements] : new ::RooGExpModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGExpModel(void *p) {
      delete ((::RooGExpModel*)p);
   }
   static void deleteArray_RooGExpModel(void *p) {
      delete [] ((::RooGExpModel*)p);
   }
   static void destruct_RooGExpModel(void *p) {
      typedef ::RooGExpModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooGExpModel

//______________________________________________________________________________
void RooGamma::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGamma.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGamma::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGamma::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGamma(void *p) {
      return  p ? new(p) ::RooGamma : new ::RooGamma;
   }
   static void *newArray_RooGamma(Long_t nElements, void *p) {
      return p ? new(p) ::RooGamma[nElements] : new ::RooGamma[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGamma(void *p) {
      delete ((::RooGamma*)p);
   }
   static void deleteArray_RooGamma(void *p) {
      delete [] ((::RooGamma*)p);
   }
   static void destruct_RooGamma(void *p) {
      typedef ::RooGamma current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooGamma

//______________________________________________________________________________
void RooGaussModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGaussModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGaussModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGaussModel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGaussModel(void *p) {
      return  p ? new(p) ::RooGaussModel : new ::RooGaussModel;
   }
   static void *newArray_RooGaussModel(Long_t nElements, void *p) {
      return p ? new(p) ::RooGaussModel[nElements] : new ::RooGaussModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGaussModel(void *p) {
      delete ((::RooGaussModel*)p);
   }
   static void deleteArray_RooGaussModel(void *p) {
      delete [] ((::RooGaussModel*)p);
   }
   static void destruct_RooGaussModel(void *p) {
      typedef ::RooGaussModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooGaussModel

//______________________________________________________________________________
void RooGaussian::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGaussian.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGaussian::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGaussian::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGaussian(void *p) {
      return  p ? new(p) ::RooGaussian : new ::RooGaussian;
   }
   static void *newArray_RooGaussian(Long_t nElements, void *p) {
      return p ? new(p) ::RooGaussian[nElements] : new ::RooGaussian[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGaussian(void *p) {
      delete ((::RooGaussian*)p);
   }
   static void deleteArray_RooGaussian(void *p) {
      delete [] ((::RooGaussian*)p);
   }
   static void destruct_RooGaussian(void *p) {
      typedef ::RooGaussian current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooGaussian

//______________________________________________________________________________
void RooHistConstraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooHistConstraint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooHistConstraint::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooHistConstraint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooHistConstraint(void *p) {
      return  p ? new(p) ::RooHistConstraint : new ::RooHistConstraint;
   }
   static void *newArray_RooHistConstraint(Long_t nElements, void *p) {
      return p ? new(p) ::RooHistConstraint[nElements] : new ::RooHistConstraint[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooHistConstraint(void *p) {
      delete ((::RooHistConstraint*)p);
   }
   static void deleteArray_RooHistConstraint(void *p) {
      delete [] ((::RooHistConstraint*)p);
   }
   static void destruct_RooHistConstraint(void *p) {
      typedef ::RooHistConstraint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooHistConstraint

//______________________________________________________________________________
void RooIntegralMorph::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooIntegralMorph.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooIntegralMorph::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooIntegralMorph::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooIntegralMorph(void *p) {
      return  p ? new(p) ::RooIntegralMorph : new ::RooIntegralMorph;
   }
   static void *newArray_RooIntegralMorph(Long_t nElements, void *p) {
      return p ? new(p) ::RooIntegralMorph[nElements] : new ::RooIntegralMorph[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooIntegralMorph(void *p) {
      delete ((::RooIntegralMorph*)p);
   }
   static void deleteArray_RooIntegralMorph(void *p) {
      delete [] ((::RooIntegralMorph*)p);
   }
   static void destruct_RooIntegralMorph(void *p) {
      typedef ::RooIntegralMorph current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooIntegralMorph

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooIntegralMorphcLcLMorphCacheElem(void *p) {
      delete ((::RooIntegralMorph::MorphCacheElem*)p);
   }
   static void deleteArray_RooIntegralMorphcLcLMorphCacheElem(void *p) {
      delete [] ((::RooIntegralMorph::MorphCacheElem*)p);
   }
   static void destruct_RooIntegralMorphcLcLMorphCacheElem(void *p) {
      typedef ::RooIntegralMorph::MorphCacheElem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooIntegralMorph::MorphCacheElem

//______________________________________________________________________________
void RooJeffreysPrior::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooJeffreysPrior.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooJeffreysPrior::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooJeffreysPrior::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooJeffreysPrior(void *p) {
      return  p ? new(p) ::RooJeffreysPrior : new ::RooJeffreysPrior;
   }
   static void *newArray_RooJeffreysPrior(Long_t nElements, void *p) {
      return p ? new(p) ::RooJeffreysPrior[nElements] : new ::RooJeffreysPrior[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooJeffreysPrior(void *p) {
      delete ((::RooJeffreysPrior*)p);
   }
   static void deleteArray_RooJeffreysPrior(void *p) {
      delete [] ((::RooJeffreysPrior*)p);
   }
   static void destruct_RooJeffreysPrior(void *p) {
      typedef ::RooJeffreysPrior current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooJeffreysPrior

//______________________________________________________________________________
void RooKeysPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooKeysPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooKeysPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooKeysPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooKeysPdf(void *p) {
      return  p ? new(p) ::RooKeysPdf : new ::RooKeysPdf;
   }
   static void *newArray_RooKeysPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooKeysPdf[nElements] : new ::RooKeysPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooKeysPdf(void *p) {
      delete ((::RooKeysPdf*)p);
   }
   static void deleteArray_RooKeysPdf(void *p) {
      delete [] ((::RooKeysPdf*)p);
   }
   static void destruct_RooKeysPdf(void *p) {
      typedef ::RooKeysPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooKeysPdf

//______________________________________________________________________________
void RooLandau::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLandau.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLandau::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLandau::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLandau(void *p) {
      return  p ? new(p) ::RooLandau : new ::RooLandau;
   }
   static void *newArray_RooLandau(Long_t nElements, void *p) {
      return p ? new(p) ::RooLandau[nElements] : new ::RooLandau[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLandau(void *p) {
      delete ((::RooLandau*)p);
   }
   static void deleteArray_RooLandau(void *p) {
      delete [] ((::RooLandau*)p);
   }
   static void destruct_RooLandau(void *p) {
      typedef ::RooLandau current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooLandau

//______________________________________________________________________________
void RooLegendre::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLegendre.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLegendre::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLegendre::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLegendre(void *p) {
      return  p ? new(p) ::RooLegendre : new ::RooLegendre;
   }
   static void *newArray_RooLegendre(Long_t nElements, void *p) {
      return p ? new(p) ::RooLegendre[nElements] : new ::RooLegendre[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLegendre(void *p) {
      delete ((::RooLegendre*)p);
   }
   static void deleteArray_RooLegendre(void *p) {
      delete [] ((::RooLegendre*)p);
   }
   static void destruct_RooLegendre(void *p) {
      typedef ::RooLegendre current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooLegendre

//______________________________________________________________________________
void RooLognormal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLognormal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLognormal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLognormal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLognormal(void *p) {
      return  p ? new(p) ::RooLognormal : new ::RooLognormal;
   }
   static void *newArray_RooLognormal(Long_t nElements, void *p) {
      return p ? new(p) ::RooLognormal[nElements] : new ::RooLognormal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLognormal(void *p) {
      delete ((::RooLognormal*)p);
   }
   static void deleteArray_RooLognormal(void *p) {
      delete [] ((::RooLognormal*)p);
   }
   static void destruct_RooLognormal(void *p) {
      typedef ::RooLognormal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooLognormal

//______________________________________________________________________________
void RooMomentMorph::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMomentMorph.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMomentMorph::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMomentMorph::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMomentMorph(void *p) {
      return  p ? new(p) ::RooMomentMorph : new ::RooMomentMorph;
   }
   static void *newArray_RooMomentMorph(Long_t nElements, void *p) {
      return p ? new(p) ::RooMomentMorph[nElements] : new ::RooMomentMorph[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMomentMorph(void *p) {
      delete ((::RooMomentMorph*)p);
   }
   static void deleteArray_RooMomentMorph(void *p) {
      delete [] ((::RooMomentMorph*)p);
   }
   static void destruct_RooMomentMorph(void *p) {
      typedef ::RooMomentMorph current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooMomentMorph

//______________________________________________________________________________
void RooMultiBinomial::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMultiBinomial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMultiBinomial::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMultiBinomial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMultiBinomial(void *p) {
      return  p ? new(p) ::RooMultiBinomial : new ::RooMultiBinomial;
   }
   static void *newArray_RooMultiBinomial(Long_t nElements, void *p) {
      return p ? new(p) ::RooMultiBinomial[nElements] : new ::RooMultiBinomial[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMultiBinomial(void *p) {
      delete ((::RooMultiBinomial*)p);
   }
   static void deleteArray_RooMultiBinomial(void *p) {
      delete [] ((::RooMultiBinomial*)p);
   }
   static void destruct_RooMultiBinomial(void *p) {
      typedef ::RooMultiBinomial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooMultiBinomial

//______________________________________________________________________________
void RooNDKeysPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNDKeysPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNDKeysPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNDKeysPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooNDKeysPdf(void *p) {
      delete ((::RooNDKeysPdf*)p);
   }
   static void deleteArray_RooNDKeysPdf(void *p) {
      delete [] ((::RooNDKeysPdf*)p);
   }
   static void destruct_RooNDKeysPdf(void *p) {
      typedef ::RooNDKeysPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooNDKeysPdf

//______________________________________________________________________________
void RooNonCPEigenDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNonCPEigenDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNonCPEigenDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNonCPEigenDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNonCPEigenDecay(void *p) {
      return  p ? new(p) ::RooNonCPEigenDecay : new ::RooNonCPEigenDecay;
   }
   static void *newArray_RooNonCPEigenDecay(Long_t nElements, void *p) {
      return p ? new(p) ::RooNonCPEigenDecay[nElements] : new ::RooNonCPEigenDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNonCPEigenDecay(void *p) {
      delete ((::RooNonCPEigenDecay*)p);
   }
   static void deleteArray_RooNonCPEigenDecay(void *p) {
      delete [] ((::RooNonCPEigenDecay*)p);
   }
   static void destruct_RooNonCPEigenDecay(void *p) {
      typedef ::RooNonCPEigenDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooNonCPEigenDecay

//______________________________________________________________________________
void RooNonCentralChiSquare::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNonCentralChiSquare.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNonCentralChiSquare::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNonCentralChiSquare::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNonCentralChiSquare(void *p) {
      return  p ? new(p) ::RooNonCentralChiSquare : new ::RooNonCentralChiSquare;
   }
   static void *newArray_RooNonCentralChiSquare(Long_t nElements, void *p) {
      return p ? new(p) ::RooNonCentralChiSquare[nElements] : new ::RooNonCentralChiSquare[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNonCentralChiSquare(void *p) {
      delete ((::RooNonCentralChiSquare*)p);
   }
   static void deleteArray_RooNonCentralChiSquare(void *p) {
      delete [] ((::RooNonCentralChiSquare*)p);
   }
   static void destruct_RooNonCentralChiSquare(void *p) {
      typedef ::RooNonCentralChiSquare current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooNonCentralChiSquare

//______________________________________________________________________________
void RooNovosibirsk::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNovosibirsk.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNovosibirsk::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNovosibirsk::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNovosibirsk(void *p) {
      return  p ? new(p) ::RooNovosibirsk : new ::RooNovosibirsk;
   }
   static void *newArray_RooNovosibirsk(Long_t nElements, void *p) {
      return p ? new(p) ::RooNovosibirsk[nElements] : new ::RooNovosibirsk[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNovosibirsk(void *p) {
      delete ((::RooNovosibirsk*)p);
   }
   static void deleteArray_RooNovosibirsk(void *p) {
      delete [] ((::RooNovosibirsk*)p);
   }
   static void destruct_RooNovosibirsk(void *p) {
      typedef ::RooNovosibirsk current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooNovosibirsk

//______________________________________________________________________________
void RooParamHistFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooParamHistFunc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooParamHistFunc::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooParamHistFunc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooParamHistFunc(void *p) {
      return  p ? new(p) ::RooParamHistFunc : new ::RooParamHistFunc;
   }
   static void *newArray_RooParamHistFunc(Long_t nElements, void *p) {
      return p ? new(p) ::RooParamHistFunc[nElements] : new ::RooParamHistFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooParamHistFunc(void *p) {
      delete ((::RooParamHistFunc*)p);
   }
   static void deleteArray_RooParamHistFunc(void *p) {
      delete [] ((::RooParamHistFunc*)p);
   }
   static void destruct_RooParamHistFunc(void *p) {
      typedef ::RooParamHistFunc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooParamHistFunc

//______________________________________________________________________________
void RooParametricStepFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooParametricStepFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooParametricStepFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooParametricStepFunction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooParametricStepFunction(void *p) {
      return  p ? new(p) ::RooParametricStepFunction : new ::RooParametricStepFunction;
   }
   static void *newArray_RooParametricStepFunction(Long_t nElements, void *p) {
      return p ? new(p) ::RooParametricStepFunction[nElements] : new ::RooParametricStepFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooParametricStepFunction(void *p) {
      delete ((::RooParametricStepFunction*)p);
   }
   static void deleteArray_RooParametricStepFunction(void *p) {
      delete [] ((::RooParametricStepFunction*)p);
   }
   static void destruct_RooParametricStepFunction(void *p) {
      typedef ::RooParametricStepFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooParametricStepFunction

//______________________________________________________________________________
void RooPoisson::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPoisson.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPoisson::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPoisson::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPoisson(void *p) {
      return  p ? new(p) ::RooPoisson : new ::RooPoisson;
   }
   static void *newArray_RooPoisson(Long_t nElements, void *p) {
      return p ? new(p) ::RooPoisson[nElements] : new ::RooPoisson[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPoisson(void *p) {
      delete ((::RooPoisson*)p);
   }
   static void deleteArray_RooPoisson(void *p) {
      delete [] ((::RooPoisson*)p);
   }
   static void destruct_RooPoisson(void *p) {
      typedef ::RooPoisson current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooPoisson

//______________________________________________________________________________
void RooPolynomial::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPolynomial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPolynomial::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPolynomial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPolynomial(void *p) {
      return  p ? new(p) ::RooPolynomial : new ::RooPolynomial;
   }
   static void *newArray_RooPolynomial(Long_t nElements, void *p) {
      return p ? new(p) ::RooPolynomial[nElements] : new ::RooPolynomial[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPolynomial(void *p) {
      delete ((::RooPolynomial*)p);
   }
   static void deleteArray_RooPolynomial(void *p) {
      delete [] ((::RooPolynomial*)p);
   }
   static void destruct_RooPolynomial(void *p) {
      typedef ::RooPolynomial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooPolynomial

//______________________________________________________________________________
void RooSpHarmonic::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooSpHarmonic.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooSpHarmonic::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooSpHarmonic::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooSpHarmonic(void *p) {
      return  p ? new(p) ::RooSpHarmonic : new ::RooSpHarmonic;
   }
   static void *newArray_RooSpHarmonic(Long_t nElements, void *p) {
      return p ? new(p) ::RooSpHarmonic[nElements] : new ::RooSpHarmonic[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooSpHarmonic(void *p) {
      delete ((::RooSpHarmonic*)p);
   }
   static void deleteArray_RooSpHarmonic(void *p) {
      delete [] ((::RooSpHarmonic*)p);
   }
   static void destruct_RooSpHarmonic(void *p) {
      typedef ::RooSpHarmonic current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooSpHarmonic

//______________________________________________________________________________
void RooStepFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStepFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStepFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStepFunction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStepFunction(void *p) {
      return  p ? new(p) ::RooStepFunction : new ::RooStepFunction;
   }
   static void *newArray_RooStepFunction(Long_t nElements, void *p) {
      return p ? new(p) ::RooStepFunction[nElements] : new ::RooStepFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStepFunction(void *p) {
      delete ((::RooStepFunction*)p);
   }
   static void deleteArray_RooStepFunction(void *p) {
      delete [] ((::RooStepFunction*)p);
   }
   static void destruct_RooStepFunction(void *p) {
      typedef ::RooStepFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStepFunction

//______________________________________________________________________________
void RooTFnBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTFnBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTFnBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTFnBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTFnBinding(void *p) {
      return  p ? new(p) ::RooTFnBinding : new ::RooTFnBinding;
   }
   static void *newArray_RooTFnBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooTFnBinding[nElements] : new ::RooTFnBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTFnBinding(void *p) {
      delete ((::RooTFnBinding*)p);
   }
   static void deleteArray_RooTFnBinding(void *p) {
      delete [] ((::RooTFnBinding*)p);
   }
   static void destruct_RooTFnBinding(void *p) {
      typedef ::RooTFnBinding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooTFnBinding

//______________________________________________________________________________
void RooTFnPdfBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTFnPdfBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTFnPdfBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTFnPdfBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTFnPdfBinding(void *p) {
      return  p ? new(p) ::RooTFnPdfBinding : new ::RooTFnPdfBinding;
   }
   static void *newArray_RooTFnPdfBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooTFnPdfBinding[nElements] : new ::RooTFnPdfBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTFnPdfBinding(void *p) {
      delete ((::RooTFnPdfBinding*)p);
   }
   static void deleteArray_RooTFnPdfBinding(void *p) {
      delete [] ((::RooTFnPdfBinding*)p);
   }
   static void destruct_RooTFnPdfBinding(void *p) {
      typedef ::RooTFnPdfBinding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooTFnPdfBinding

//______________________________________________________________________________
void RooUnblindCPAsymVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUnblindCPAsymVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUnblindCPAsymVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUnblindCPAsymVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUnblindCPAsymVar(void *p) {
      return  p ? new(p) ::RooUnblindCPAsymVar : new ::RooUnblindCPAsymVar;
   }
   static void *newArray_RooUnblindCPAsymVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooUnblindCPAsymVar[nElements] : new ::RooUnblindCPAsymVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUnblindCPAsymVar(void *p) {
      delete ((::RooUnblindCPAsymVar*)p);
   }
   static void deleteArray_RooUnblindCPAsymVar(void *p) {
      delete [] ((::RooUnblindCPAsymVar*)p);
   }
   static void destruct_RooUnblindCPAsymVar(void *p) {
      typedef ::RooUnblindCPAsymVar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooUnblindCPAsymVar

//______________________________________________________________________________
void RooUnblindOffset::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUnblindOffset.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUnblindOffset::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUnblindOffset::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUnblindOffset(void *p) {
      return  p ? new(p) ::RooUnblindOffset : new ::RooUnblindOffset;
   }
   static void *newArray_RooUnblindOffset(Long_t nElements, void *p) {
      return p ? new(p) ::RooUnblindOffset[nElements] : new ::RooUnblindOffset[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUnblindOffset(void *p) {
      delete ((::RooUnblindOffset*)p);
   }
   static void deleteArray_RooUnblindOffset(void *p) {
      delete [] ((::RooUnblindOffset*)p);
   }
   static void destruct_RooUnblindOffset(void *p) {
      typedef ::RooUnblindOffset current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooUnblindOffset

//______________________________________________________________________________
void RooUnblindPrecision::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUnblindPrecision.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUnblindPrecision::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUnblindPrecision::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUnblindPrecision(void *p) {
      return  p ? new(p) ::RooUnblindPrecision : new ::RooUnblindPrecision;
   }
   static void *newArray_RooUnblindPrecision(Long_t nElements, void *p) {
      return p ? new(p) ::RooUnblindPrecision[nElements] : new ::RooUnblindPrecision[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUnblindPrecision(void *p) {
      delete ((::RooUnblindPrecision*)p);
   }
   static void deleteArray_RooUnblindPrecision(void *p) {
      delete [] ((::RooUnblindPrecision*)p);
   }
   static void destruct_RooUnblindPrecision(void *p) {
      typedef ::RooUnblindPrecision current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooUnblindPrecision

//______________________________________________________________________________
void RooUnblindUniform::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUnblindUniform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUnblindUniform::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUnblindUniform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUnblindUniform(void *p) {
      return  p ? new(p) ::RooUnblindUniform : new ::RooUnblindUniform;
   }
   static void *newArray_RooUnblindUniform(Long_t nElements, void *p) {
      return p ? new(p) ::RooUnblindUniform[nElements] : new ::RooUnblindUniform[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUnblindUniform(void *p) {
      delete ((::RooUnblindUniform*)p);
   }
   static void deleteArray_RooUnblindUniform(void *p) {
      delete [] ((::RooUnblindUniform*)p);
   }
   static void destruct_RooUnblindUniform(void *p) {
      typedef ::RooUnblindUniform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooUnblindUniform

//______________________________________________________________________________
void RooUniform::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUniform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUniform::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUniform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUniform(void *p) {
      return  p ? new(p) ::RooUniform : new ::RooUniform;
   }
   static void *newArray_RooUniform(Long_t nElements, void *p) {
      return p ? new(p) ::RooUniform[nElements] : new ::RooUniform[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUniform(void *p) {
      delete ((::RooUniform*)p);
   }
   static void deleteArray_RooUniform(void *p) {
      delete [] ((::RooUniform*)p);
   }
   static void destruct_RooUniform(void *p) {
      typedef ::RooUniform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooUniform

//______________________________________________________________________________
void RooVoigtian::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooVoigtian.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooVoigtian::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooVoigtian::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooVoigtian(void *p) {
      return  p ? new(p) ::RooVoigtian : new ::RooVoigtian;
   }
   static void *newArray_RooVoigtian(Long_t nElements, void *p) {
      return p ? new(p) ::RooVoigtian[nElements] : new ::RooVoigtian[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooVoigtian(void *p) {
      delete ((::RooVoigtian*)p);
   }
   static void deleteArray_RooVoigtian(void *p) {
      delete [] ((::RooVoigtian*)p);
   }
   static void destruct_RooVoigtian(void *p) {
      typedef ::RooVoigtian current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooVoigtian

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
   static TClass *vectorlETVectorTlEdoublegRsPgR_Dictionary();
   static void vectorlETVectorTlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlETVectorTlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlETVectorTlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlETVectorTlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlETVectorTlEdoublegRsPgR(void *p);
   static void destruct_vectorlETVectorTlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TVectorT<double> >*)
   {
      vector<TVectorT<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TVectorT<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TVectorT<double> >", -2, "vector", 216,
                  typeid(vector<TVectorT<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETVectorTlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TVectorT<double> >) );
      instance.SetNew(&new_vectorlETVectorTlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlETVectorTlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlETVectorTlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlETVectorTlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlETVectorTlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TVectorT<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TVectorT<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETVectorTlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TVectorT<double> >*)0x0)->GetClass();
      vectorlETVectorTlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETVectorTlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETVectorTlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TVectorT<double> > : new vector<TVectorT<double> >;
   }
   static void *newArray_vectorlETVectorTlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TVectorT<double> >[nElements] : new vector<TVectorT<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETVectorTlEdoublegRsPgR(void *p) {
      delete ((vector<TVectorT<double> >*)p);
   }
   static void deleteArray_vectorlETVectorTlEdoublegRsPgR(void *p) {
      delete [] ((vector<TVectorT<double> >*)p);
   }
   static void destruct_vectorlETVectorTlEdoublegRsPgR(void *p) {
      typedef vector<TVectorT<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TVectorT<double> >

namespace ROOT {
   static TClass *maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_Dictionary();
   static void maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_TClassManip(TClass*);
   static void *new_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p = 0);
   static void *newArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(Long_t size, void *p);
   static void delete_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p);
   static void deleteArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p);
   static void destruct_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*)
   {
      map<pair<string,int>,RooNDKeysPdf::BoxInfo*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<string,int>,RooNDKeysPdf::BoxInfo*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<string,int>,RooNDKeysPdf::BoxInfo*>", -2, "map", 99,
                  typeid(map<pair<string,int>,RooNDKeysPdf::BoxInfo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<string,int>,RooNDKeysPdf::BoxInfo*>) );
      instance.SetNew(&new_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.SetNewArray(&newArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.SetDelete(&delete_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.SetDestructor(&destruct_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<string,int>,RooNDKeysPdf::BoxInfo*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*)0x0)->GetClass();
      maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<string,int>,RooNDKeysPdf::BoxInfo*> : new map<pair<string,int>,RooNDKeysPdf::BoxInfo*>;
   }
   static void *newArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<string,int>,RooNDKeysPdf::BoxInfo*>[nElements] : new map<pair<string,int>,RooNDKeysPdf::BoxInfo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p) {
      delete ((map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*)p);
   }
   static void deleteArray_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p) {
      delete [] ((map<pair<string,int>,RooNDKeysPdf::BoxInfo*>*)p);
   }
   static void destruct_maplEpairlEstringcOintgRcORooNDKeysPdfcLcLBoxInfomUgR(void *p) {
      typedef map<pair<string,int>,RooNDKeysPdf::BoxInfo*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<string,int>,RooNDKeysPdf::BoxInfo*>

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = 0);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 99,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,double>*)0x0)->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete ((map<int,double>*)p);
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] ((map<int,double>*)p);
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace ROOT {
   static TClass *maplEintcOboolgR_Dictionary();
   static void maplEintcOboolgR_TClassManip(TClass*);
   static void *new_maplEintcOboolgR(void *p = 0);
   static void *newArray_maplEintcOboolgR(Long_t size, void *p);
   static void delete_maplEintcOboolgR(void *p);
   static void deleteArray_maplEintcOboolgR(void *p);
   static void destruct_maplEintcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,bool>*)
   {
      map<int,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,bool>", -2, "map", 99,
                  typeid(map<int,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,bool>) );
      instance.SetNew(&new_maplEintcOboolgR);
      instance.SetNewArray(&newArray_maplEintcOboolgR);
      instance.SetDelete(&delete_maplEintcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOboolgR);
      instance.SetDestructor(&destruct_maplEintcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,bool>*)0x0)->GetClass();
      maplEintcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,bool> : new map<int,bool>;
   }
   static void *newArray_maplEintcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,bool>[nElements] : new map<int,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOboolgR(void *p) {
      delete ((map<int,bool>*)p);
   }
   static void deleteArray_maplEintcOboolgR(void *p) {
      delete [] ((map<int,bool>*)p);
   }
   static void destruct_maplEintcOboolgR(void *p) {
      typedef map<int,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,bool>

namespace {
  void TriggerDictionaryInitialization_libRooFit_Impl() {
    static const char* headers[] = {
"Roo1DMomentMorphFunction.h",
"Roo2DKeysPdf.h",
"Roo2DMomentMorphFunction.h",
"RooArgusBG.h",
"RooBCPEffDecay.h",
"RooBCPGenDecay.h",
"RooBDecay.h",
"RooBMixDecay.h",
"RooBernstein.h",
"RooBifurGauss.h",
"RooBlindTools.h",
"RooBreitWigner.h",
"RooBukinPdf.h",
"RooCBShape.h",
"RooCFunction1Binding.h",
"RooCFunction2Binding.h",
"RooCFunction3Binding.h",
"RooCFunction4Binding.h",
"RooChebychev.h",
"RooChi2MCSModule.h",
"RooChiSquarePdf.h",
"RooDecay.h",
"RooDstD0BG.h",
"RooExponential.h",
"RooFunctor1DBinding.h",
"RooFunctorBinding.h",
"RooGExpModel.h",
"RooGamma.h",
"RooGaussModel.h",
"RooGaussian.h",
"RooHistConstraint.h",
"RooIntegralMorph.h",
"RooJeffreysPrior.h",
"RooKeysPdf.h",
"RooLandau.h",
"RooLegendre.h",
"RooLognormal.h",
"RooMathCoreReg.h",
"RooMathMoreReg.h",
"RooMomentMorph.h",
"RooMultiBinomial.h",
"RooNDKeysPdf.h",
"RooNonCPEigenDecay.h",
"RooNonCentralChiSquare.h",
"RooNovosibirsk.h",
"RooParamHistFunc.h",
"RooParametricStepFunction.h",
"RooPoisson.h",
"RooPolynomial.h",
"RooSpHarmonic.h",
"RooStepFunction.h",
"RooTFnBinding.h",
"RooTFnPdfBinding.h",
"RooTMathReg.h",
"RooUnblindCPAsymVar.h",
"RooUnblindOffset.h",
"RooUnblindPrecision.h",
"RooUnblindUniform.h",
"RooUniform.h",
"RooVoigtian.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRooFit dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Roo1DMomentMorphFunction.h"
#include "Roo2DKeysPdf.h"
#include "Roo2DMomentMorphFunction.h"
#include "RooArgusBG.h"
#include "RooBCPEffDecay.h"
#include "RooBCPGenDecay.h"
#include "RooBDecay.h"
#include "RooBMixDecay.h"
#include "RooBernstein.h"
#include "RooBifurGauss.h"
#include "RooBlindTools.h"
#include "RooBreitWigner.h"
#include "RooBukinPdf.h"
#include "RooCBShape.h"
#include "RooCFunction1Binding.h"
#include "RooCFunction2Binding.h"
#include "RooCFunction3Binding.h"
#include "RooCFunction4Binding.h"
#include "RooChebychev.h"
#include "RooChi2MCSModule.h"
#include "RooChiSquarePdf.h"
#include "RooDecay.h"
#include "RooDstD0BG.h"
#include "RooExponential.h"
#include "RooFunctor1DBinding.h"
#include "RooFunctorBinding.h"
#include "RooGExpModel.h"
#include "RooGamma.h"
#include "RooGaussModel.h"
#include "RooGaussian.h"
#include "RooHistConstraint.h"
#include "RooIntegralMorph.h"
#include "RooJeffreysPrior.h"
#include "RooKeysPdf.h"
#include "RooLandau.h"
#include "RooLegendre.h"
#include "RooLognormal.h"
#include "RooMathCoreReg.h"
#include "RooMathMoreReg.h"
#include "RooMomentMorph.h"
#include "RooMultiBinomial.h"
#include "RooNDKeysPdf.h"
#include "RooNonCPEigenDecay.h"
#include "RooNonCentralChiSquare.h"
#include "RooNovosibirsk.h"
#include "RooParamHistFunc.h"
#include "RooParametricStepFunction.h"
#include "RooPoisson.h"
#include "RooPolynomial.h"
#include "RooSpHarmonic.h"
#include "RooStepFunction.h"
#include "RooTFnBinding.h"
#include "RooTFnPdfBinding.h"
#include "RooTMathReg.h"
#include "RooUnblindCPAsymVar.h"
#include "RooUnblindOffset.h"
#include "RooUnblindPrecision.h"
#include "RooUnblindUniform.h"
#include "RooUniform.h"
#include "RooVoigtian.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRooFit",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRooFit_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRooFit_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRooFit() {
  TriggerDictionaryInitialization_libRooFit_Impl();
}
