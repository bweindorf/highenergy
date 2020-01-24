// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__TMVAGui

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
#include "TMVA/annconvergencetest.h"
#include "TMVA/deviations.h"
#include "TMVA/mvaeffs.h"
#include "TMVA/PlotFoams.h"
#include "TMVA/TMVAGui.h"
#include "TMVA/BDTControlPlots.h"
#include "TMVA/correlationscatters.h"
#include "TMVA/efficiencies.h"
#include "TMVA/efficienciesMulticlass.h"
#include "TMVA/mvas.h"
#include "TMVA/probas.h"
#include "TMVA/BDT.h"
#include "TMVA/correlationscattersMultiClass.h"
#include "TMVA/likelihoodrefs.h"
#include "TMVA/mvasMulticlass.h"
#include "TMVA/regression_averagedevs.h"
#include "TMVA/TMVAMultiClassGui.h"
#include "TMVA/BDT_Reg.h"
#include "TMVA/correlations.h"
#include "TMVA/mvaweights.h"
#include "TMVA/rulevisCorr.h"
#include "TMVA/TMVARegGui.h"
#include "TMVA/BoostControlPlots.h"
#include "TMVA/correlationsMultiClass.h"
#include "TMVA/network.h"
#include "TMVA/rulevis.h"
#include "TMVA/variables.h"
#include "TMVA/CorrGui.h"
#include "TMVA/paracoor.h"
#include "TMVA/rulevisHists.h"
#include "TMVA/variablesMultiClass.h"
#include "TMVA/compareanapp.h"
#include "TMVA/CorrGuiMultiClass.h"
#include "TMVA/MovieMaker.h"
#include "TMVA/tmvaglob.h"

// Header files passed via #pragma extra_include

namespace TMVA {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TMVA_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TMVA", 0 /*version*/, "TMVA/tmvaglob.h", 28,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &TMVA_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TMVA_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_TMVAcLcLMethodInfo(void *p = 0);
   static void *newArray_TMVAcLcLMethodInfo(Long_t size, void *p);
   static void delete_TMVAcLcLMethodInfo(void *p);
   static void deleteArray_TMVAcLcLMethodInfo(void *p);
   static void destruct_TMVAcLcLMethodInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodInfo*)
   {
      ::TMVA::MethodInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodInfo", ::TMVA::MethodInfo::Class_Version(), "TMVA/mvaeffs.h", 44,
                  typeid(::TMVA::MethodInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodInfo) );
      instance.SetNew(&new_TMVAcLcLMethodInfo);
      instance.SetNewArray(&newArray_TMVAcLcLMethodInfo);
      instance.SetDelete(&delete_TMVAcLcLMethodInfo);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodInfo);
      instance.SetDestructor(&destruct_TMVAcLcLMethodInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodInfo*)
   {
      return GenerateInitInstanceLocal((::TMVA::MethodInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::MethodInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLStatDialogMVAEffs_Dictionary();
   static void TMVAcLcLStatDialogMVAEffs_TClassManip(TClass*);
   static void delete_TMVAcLcLStatDialogMVAEffs(void *p);
   static void deleteArray_TMVAcLcLStatDialogMVAEffs(void *p);
   static void destruct_TMVAcLcLStatDialogMVAEffs(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::StatDialogMVAEffs*)
   {
      ::TMVA::StatDialogMVAEffs *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::StatDialogMVAEffs));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::StatDialogMVAEffs", "TMVA/mvaeffs.h", 90,
                  typeid(::TMVA::StatDialogMVAEffs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLStatDialogMVAEffs_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::StatDialogMVAEffs) );
      instance.SetDelete(&delete_TMVAcLcLStatDialogMVAEffs);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLStatDialogMVAEffs);
      instance.SetDestructor(&destruct_TMVAcLcLStatDialogMVAEffs);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::StatDialogMVAEffs*)
   {
      return GenerateInitInstanceLocal((::TMVA::StatDialogMVAEffs*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::StatDialogMVAEffs*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLStatDialogMVAEffs_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::StatDialogMVAEffs*)0x0)->GetClass();
      TMVAcLcLStatDialogMVAEffs_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLStatDialogMVAEffs_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLTMVAGUI_Dictionary();
   static void TMVAcLcLTMVAGUI_TClassManip(TClass*);
   static void *new_TMVAcLcLTMVAGUI(void *p = 0);
   static void *newArray_TMVAcLcLTMVAGUI(Long_t size, void *p);
   static void delete_TMVAcLcLTMVAGUI(void *p);
   static void deleteArray_TMVAcLcLTMVAGUI(void *p);
   static void destruct_TMVAcLcLTMVAGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TMVAGUI*)
   {
      ::TMVA::TMVAGUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::TMVAGUI));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TMVAGUI", "TMVA/TMVAGui.h", 28,
                  typeid(::TMVA::TMVAGUI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLTMVAGUI_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TMVAGUI) );
      instance.SetNew(&new_TMVAcLcLTMVAGUI);
      instance.SetNewArray(&newArray_TMVAcLcLTMVAGUI);
      instance.SetDelete(&delete_TMVAcLcLTMVAGUI);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTMVAGUI);
      instance.SetDestructor(&destruct_TMVAcLcLTMVAGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TMVAGUI*)
   {
      return GenerateInitInstanceLocal((::TMVA::TMVAGUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::TMVAGUI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLTMVAGUI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::TMVAGUI*)0x0)->GetClass();
      TMVAcLcLTMVAGUI_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLTMVAGUI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLStatDialogBDT_Dictionary();
   static void TMVAcLcLStatDialogBDT_TClassManip(TClass*);
   static void delete_TMVAcLcLStatDialogBDT(void *p);
   static void deleteArray_TMVAcLcLStatDialogBDT(void *p);
   static void destruct_TMVAcLcLStatDialogBDT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::StatDialogBDT*)
   {
      ::TMVA::StatDialogBDT *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::StatDialogBDT));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::StatDialogBDT", "TMVA/BDT.h", 51,
                  typeid(::TMVA::StatDialogBDT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLStatDialogBDT_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::StatDialogBDT) );
      instance.SetDelete(&delete_TMVAcLcLStatDialogBDT);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLStatDialogBDT);
      instance.SetDestructor(&destruct_TMVAcLcLStatDialogBDT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::StatDialogBDT*)
   {
      return GenerateInitInstanceLocal((::TMVA::StatDialogBDT*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::StatDialogBDT*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLStatDialogBDT_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::StatDialogBDT*)0x0)->GetClass();
      TMVAcLcLStatDialogBDT_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLStatDialogBDT_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLStatDialogBDTReg_Dictionary();
   static void TMVAcLcLStatDialogBDTReg_TClassManip(TClass*);
   static void delete_TMVAcLcLStatDialogBDTReg(void *p);
   static void deleteArray_TMVAcLcLStatDialogBDTReg(void *p);
   static void destruct_TMVAcLcLStatDialogBDTReg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::StatDialogBDTReg*)
   {
      ::TMVA::StatDialogBDTReg *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::StatDialogBDTReg));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::StatDialogBDTReg", "TMVA/BDT_Reg.h", 40,
                  typeid(::TMVA::StatDialogBDTReg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLStatDialogBDTReg_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::StatDialogBDTReg) );
      instance.SetDelete(&delete_TMVAcLcLStatDialogBDTReg);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLStatDialogBDTReg);
      instance.SetDestructor(&destruct_TMVAcLcLStatDialogBDTReg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::StatDialogBDTReg*)
   {
      return GenerateInitInstanceLocal((::TMVA::StatDialogBDTReg*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMVA::StatDialogBDTReg*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLStatDialogBDTReg_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVA::StatDialogBDTReg*)0x0)->GetClass();
      TMVAcLcLStatDialogBDTReg_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLStatDialogBDTReg_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodInfo::Class_Name()
{
   return "TMVA::MethodInfo";
}

//______________________________________________________________________________
const char *MethodInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MethodInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
void MethodInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodInfo::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLMethodInfo(void *p) {
      return  p ? new(p) ::TMVA::MethodInfo : new ::TMVA::MethodInfo;
   }
   static void *newArray_TMVAcLcLMethodInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::MethodInfo[nElements] : new ::TMVA::MethodInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodInfo(void *p) {
      delete ((::TMVA::MethodInfo*)p);
   }
   static void deleteArray_TMVAcLcLMethodInfo(void *p) {
      delete [] ((::TMVA::MethodInfo*)p);
   }
   static void destruct_TMVAcLcLMethodInfo(void *p) {
      typedef ::TMVA::MethodInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodInfo

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLStatDialogMVAEffs(void *p) {
      delete ((::TMVA::StatDialogMVAEffs*)p);
   }
   static void deleteArray_TMVAcLcLStatDialogMVAEffs(void *p) {
      delete [] ((::TMVA::StatDialogMVAEffs*)p);
   }
   static void destruct_TMVAcLcLStatDialogMVAEffs(void *p) {
      typedef ::TMVA::StatDialogMVAEffs current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::StatDialogMVAEffs

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTMVAGUI(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TMVAGUI : new ::TMVA::TMVAGUI;
   }
   static void *newArray_TMVAcLcLTMVAGUI(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TMVA::TMVAGUI[nElements] : new ::TMVA::TMVAGUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTMVAGUI(void *p) {
      delete ((::TMVA::TMVAGUI*)p);
   }
   static void deleteArray_TMVAcLcLTMVAGUI(void *p) {
      delete [] ((::TMVA::TMVAGUI*)p);
   }
   static void destruct_TMVAcLcLTMVAGUI(void *p) {
      typedef ::TMVA::TMVAGUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TMVAGUI

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLStatDialogBDT(void *p) {
      delete ((::TMVA::StatDialogBDT*)p);
   }
   static void deleteArray_TMVAcLcLStatDialogBDT(void *p) {
      delete [] ((::TMVA::StatDialogBDT*)p);
   }
   static void destruct_TMVAcLcLStatDialogBDT(void *p) {
      typedef ::TMVA::StatDialogBDT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::StatDialogBDT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLStatDialogBDTReg(void *p) {
      delete ((::TMVA::StatDialogBDTReg*)p);
   }
   static void deleteArray_TMVAcLcLStatDialogBDTReg(void *p) {
      delete [] ((::TMVA::StatDialogBDTReg*)p);
   }
   static void destruct_TMVAcLcLStatDialogBDTReg(void *p) {
      typedef ::TMVA::StatDialogBDTReg current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::StatDialogBDTReg

namespace {
  void TriggerDictionaryInitialization_libTMVAGui_Impl() {
    static const char* headers[] = {
"TMVA/annconvergencetest.h",
"TMVA/deviations.h",
"TMVA/mvaeffs.h",
"TMVA/PlotFoams.h",
"TMVA/TMVAGui.h",
"TMVA/BDTControlPlots.h",
"TMVA/correlationscatters.h",
"TMVA/efficiencies.h",
"TMVA/efficienciesMulticlass.h",
"TMVA/mvas.h",
"TMVA/probas.h",
"TMVA/BDT.h",
"TMVA/correlationscattersMultiClass.h",
"TMVA/likelihoodrefs.h",
"TMVA/mvasMulticlass.h",
"TMVA/regression_averagedevs.h",
"TMVA/TMVAMultiClassGui.h",
"TMVA/BDT_Reg.h",
"TMVA/correlations.h",
"TMVA/mvaweights.h",
"TMVA/rulevisCorr.h",
"TMVA/TMVARegGui.h",
"TMVA/BoostControlPlots.h",
"TMVA/correlationsMultiClass.h",
"TMVA/network.h",
"TMVA/rulevis.h",
"TMVA/variables.h",
"TMVA/CorrGui.h",
"TMVA/paracoor.h",
"TMVA/rulevisHists.h",
"TMVA/variablesMultiClass.h",
"TMVA/compareanapp.h",
"TMVA/CorrGuiMultiClass.h",
"TMVA/MovieMaker.h",
"TMVA/tmvaglob.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libTMVAGui dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TMVA/annconvergencetest.h"
#include "TMVA/deviations.h"
#include "TMVA/mvaeffs.h"
#include "TMVA/PlotFoams.h"
#include "TMVA/TMVAGui.h"
#include "TMVA/BDTControlPlots.h"
#include "TMVA/correlationscatters.h"
#include "TMVA/efficiencies.h"
#include "TMVA/efficienciesMulticlass.h"
#include "TMVA/mvas.h"
#include "TMVA/probas.h"
#include "TMVA/BDT.h"
#include "TMVA/correlationscattersMultiClass.h"
#include "TMVA/likelihoodrefs.h"
#include "TMVA/mvasMulticlass.h"
#include "TMVA/regression_averagedevs.h"
#include "TMVA/TMVAMultiClassGui.h"
#include "TMVA/BDT_Reg.h"
#include "TMVA/correlations.h"
#include "TMVA/mvaweights.h"
#include "TMVA/rulevisCorr.h"
#include "TMVA/TMVARegGui.h"
#include "TMVA/BoostControlPlots.h"
#include "TMVA/correlationsMultiClass.h"
#include "TMVA/network.h"
#include "TMVA/rulevis.h"
#include "TMVA/variables.h"
#include "TMVA/CorrGui.h"
#include "TMVA/paracoor.h"
#include "TMVA/rulevisHists.h"
#include "TMVA/variablesMultiClass.h"
#include "TMVA/compareanapp.h"
#include "TMVA/CorrGuiMultiClass.h"
#include "TMVA/MovieMaker.h"
#include "TMVA/tmvaglob.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libTMVAGui",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTMVAGui_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTMVAGui_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTMVAGui() {
  TriggerDictionaryInitialization_libTMVAGui_Impl();
}
