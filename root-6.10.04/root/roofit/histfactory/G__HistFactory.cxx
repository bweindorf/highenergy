// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__HistFactory

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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"


// Header files passed as explicit arguments
#include "RooStats/HistFactory/Asimov.h"
#include "RooStats/HistFactory/Channel.h"
#include "RooStats/HistFactory/ConfigParser.h"
#include "RooStats/HistFactory/Data.h"
#include "RooStats/HistFactory/EstimateSummary.h"
#include "RooStats/HistFactory/FlexibleInterpVar.h"
#include "RooStats/HistFactory/HistFactoryException.h"
#include "RooStats/HistFactory/HistFactoryModelUtils.h"
#include "RooStats/HistFactory/HistFactoryNavigation.h"
#include "RooStats/HistFactory/HistFactorySimultaneous.h"
#include "RooStats/HistFactory/HistRef.h"
#include "RooStats/HistFactory/HistoToWorkspaceFactory.h"
#include "RooStats/HistFactory/HistoToWorkspaceFactoryFast.h"
#include "RooStats/HistFactory/LinInterpVar.h"
#include "RooStats/HistFactory/MakeModelAndMeasurementsFast.h"
#include "RooStats/HistFactory/Measurement.h"
#include "RooStats/HistFactory/ParamHistFunc.h"
#include "RooStats/HistFactory/PiecewiseInterpolation.h"
#include "RooStats/HistFactory/PreprocessFunction.h"
#include "RooStats/HistFactory/RooBarlowBeestonLL.h"
#include "RooStats/HistFactory/Sample.h"
#include "RooStats/HistFactory/Systematics.h"

// Header files passed via #pragma extra_include

namespace RooStats {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooStats_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooStats", 0 /*version*/, "RooStats/HistFactory/Asimov.h", 20,
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
   namespace HistFactory {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooStatscLcLHistFactory_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooStats::HistFactory", 0 /*version*/, "RooStats/HistFactory/Asimov.h", 21,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &RooStatscLcLHistFactory_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RooStatscLcLHistFactory_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLAsimov_Dictionary();
   static void RooStatscLcLHistFactorycLcLAsimov_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLAsimov(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLAsimov(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLAsimov(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLAsimov(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLAsimov(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Asimov*)
   {
      ::RooStats::HistFactory::Asimov *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::Asimov));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Asimov", "RooStats/HistFactory/Asimov.h", 23,
                  typeid(::RooStats::HistFactory::Asimov), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLAsimov_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Asimov) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLAsimov);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLAsimov);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLAsimov);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLAsimov);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLAsimov);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Asimov*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::Asimov*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::Asimov*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLAsimov_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Asimov*)0x0)->GetClass();
      RooStatscLcLHistFactorycLcLAsimov_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLAsimov_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLHistRef_Dictionary();
   static void RooStatscLcLHistFactorycLcLHistRef_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLHistRef(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLHistRef(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLHistRef(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistRef(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistRef(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistRef*)
   {
      ::RooStats::HistFactory::HistRef *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::HistRef));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistRef", "RooStats/HistFactory/HistRef.h", 24,
                  typeid(::RooStats::HistFactory::HistRef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLHistRef_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistRef) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLHistRef);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLHistRef);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistRef);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistRef);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistRef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistRef*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::HistRef*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistRef*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLHistRef_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistRef*)0x0)->GetClass();
      RooStatscLcLHistFactorycLcLHistRef_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLHistRef_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLStatError_Dictionary();
   static void RooStatscLcLHistFactorycLcLStatError_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLStatError(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLStatError(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLStatError(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLStatError(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLStatError(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::StatError*)
   {
      ::RooStats::HistFactory::StatError *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::StatError));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::StatError", "RooStats/HistFactory/Systematics.h", 313,
                  typeid(::RooStats::HistFactory::StatError), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLStatError_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::StatError) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLStatError);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLStatError);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLStatError);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLStatError);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLStatError);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::StatError*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::StatError*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::StatError*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLStatError_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::StatError*)0x0)->GetClass();
      RooStatscLcLHistFactorycLcLStatError_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLStatError_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLStatErrorConfig_Dictionary();
   static void RooStatscLcLHistFactorycLcLStatErrorConfig_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLStatErrorConfig(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::StatErrorConfig*)
   {
      ::RooStats::HistFactory::StatErrorConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::StatErrorConfig));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::StatErrorConfig", "RooStats/HistFactory/Systematics.h", 355,
                  typeid(::RooStats::HistFactory::StatErrorConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLStatErrorConfig_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::StatErrorConfig) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLStatErrorConfig);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLStatErrorConfig);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLStatErrorConfig);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLStatErrorConfig);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLStatErrorConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::StatErrorConfig*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::StatErrorConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::StatErrorConfig*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLStatErrorConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::StatErrorConfig*)0x0)->GetClass();
      RooStatscLcLHistFactorycLcLStatErrorConfig_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLStatErrorConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLSample_Dictionary();
   static void RooStatscLcLHistFactorycLcLSample_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLSample(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLSample(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLSample(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLSample(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLSample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Sample*)
   {
      ::RooStats::HistFactory::Sample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::Sample));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Sample", "RooStats/HistFactory/Sample.h", 27,
                  typeid(::RooStats::HistFactory::Sample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLSample_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Sample) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLSample);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLSample);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLSample);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLSample);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLSample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Sample*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::Sample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::Sample*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLSample_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Sample*)0x0)->GetClass();
      RooStatscLcLHistFactorycLcLSample_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLSample_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLData_Dictionary();
   static void RooStatscLcLHistFactorycLcLData_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLData(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLData(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLData(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLData(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Data*)
   {
      ::RooStats::HistFactory::Data *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::Data));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Data", "RooStats/HistFactory/Data.h", 24,
                  typeid(::RooStats::HistFactory::Data), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLData_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Data) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLData);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLData);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLData);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLData);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Data*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::Data*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::Data*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Data*)0x0)->GetClass();
      RooStatscLcLHistFactorycLcLData_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLChannel_Dictionary();
   static void RooStatscLcLHistFactorycLcLChannel_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLChannel(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLChannel(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLChannel(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLChannel(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Channel*)
   {
      ::RooStats::HistFactory::Channel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::Channel));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Channel", "RooStats/HistFactory/Channel.h", 26,
                  typeid(::RooStats::HistFactory::Channel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLChannel_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Channel) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLChannel);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLChannel);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLChannel);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLChannel);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Channel*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::Channel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::Channel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLChannel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Channel*)0x0)->GetClass();
      RooStatscLcLHistFactorycLcLChannel_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLChannel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLPreprocessFunction_Dictionary();
   static void RooStatscLcLHistFactorycLcLPreprocessFunction_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLPreprocessFunction(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::PreprocessFunction*)
   {
      ::RooStats::HistFactory::PreprocessFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::PreprocessFunction));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::PreprocessFunction", "RooStats/HistFactory/PreprocessFunction.h", 11,
                  typeid(::RooStats::HistFactory::PreprocessFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLPreprocessFunction_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::PreprocessFunction) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLPreprocessFunction);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLPreprocessFunction);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLPreprocessFunction);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLPreprocessFunction);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLPreprocessFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::PreprocessFunction*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::PreprocessFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::PreprocessFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLPreprocessFunction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::PreprocessFunction*)0x0)->GetClass();
      RooStatscLcLHistFactorycLcLPreprocessFunction_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLPreprocessFunction_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLMeasurement(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLMeasurement(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLMeasurement(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLMeasurement(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLMeasurement(void *p);

   // Schema evolution read functions
   static void read_RooStatscLcLHistFactorycLcLMeasurement_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fPOI = oldObj->GetId("fPOI");
#endif
      struct RooStatscLcLHistFactorycLcLMeasurement_Onfile {
         std::string &fPOI;
         RooStatscLcLHistFactorycLcLMeasurement_Onfile(std::string &onfile_fPOI ): fPOI(onfile_fPOI) {}
      };
      static Long_t offset_Onfile_RooStatscLcLHistFactorycLcLMeasurement_fPOI = oldObj->GetClass()->GetDataMemberOffset("fPOI");
      char *onfile_add = (char*)oldObj->GetObject();
      RooStatscLcLHistFactorycLcLMeasurement_Onfile onfile(
         *(std::string*)(onfile_add+offset_Onfile_RooStatscLcLHistFactorycLcLMeasurement_fPOI) );

      static TClassRef cls("RooStats::HistFactory::Measurement");
      static Long_t offset_fPOI = cls->GetDataMemberOffset("fPOI");
      vector<string>& fPOI = *(vector<string>*)(target+offset_fPOI);
      RooStats::HistFactory::Measurement* newObj = (RooStats::HistFactory::Measurement*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
      fPOI.push_back(onfile.fPOI) ; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Measurement*)
   {
      ::RooStats::HistFactory::Measurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::Measurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Measurement", ::RooStats::HistFactory::Measurement::Class_Version(), "RooStats/HistFactory/Measurement.h", 30,
                  typeid(::RooStats::HistFactory::Measurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::Measurement::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Measurement) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLMeasurement);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLMeasurement);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLMeasurement);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLMeasurement);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLMeasurement);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooStats::HistFactory::Measurement";
      rule->fTarget      = "fPOI";
      rule->fSource      = "std::string fPOI";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooStatscLcLHistFactorycLcLMeasurement_0);
      rule->fCode        = " fPOI.push_back(onfile.fPOI) ; ";
      rule->fChecksum    = "[973506941]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Measurement*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::Measurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::Measurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLConfigParser_Dictionary();
   static void RooStatscLcLHistFactorycLcLConfigParser_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLConfigParser(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLConfigParser(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLConfigParser(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLConfigParser(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLConfigParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::ConfigParser*)
   {
      ::RooStats::HistFactory::ConfigParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::ConfigParser));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::ConfigParser", "RooStats/HistFactory/ConfigParser.h", 32,
                  typeid(::RooStats::HistFactory::ConfigParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLConfigParser_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::ConfigParser) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLConfigParser);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLConfigParser);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLConfigParser);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLConfigParser);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLConfigParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::ConfigParser*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::ConfigParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::ConfigParser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLConfigParser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::ConfigParser*)0x0)->GetClass();
      RooStatscLcLHistFactorycLcLConfigParser_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLConfigParser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLEstimateSummary(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLEstimateSummary(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLEstimateSummary(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLEstimateSummary(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLEstimateSummary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::EstimateSummary*)
   {
      ::RooStats::HistFactory::EstimateSummary *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::EstimateSummary >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::EstimateSummary", ::RooStats::HistFactory::EstimateSummary::Class_Version(), "RooStats/HistFactory/EstimateSummary.h", 26,
                  typeid(::RooStats::HistFactory::EstimateSummary), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::EstimateSummary::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::EstimateSummary) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLEstimateSummary);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLEstimateSummary);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLEstimateSummary);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLEstimateSummary);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLEstimateSummary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::EstimateSummary*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::EstimateSummary*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::EstimateSummary*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::FlexibleInterpVar*)
   {
      ::RooStats::HistFactory::FlexibleInterpVar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::FlexibleInterpVar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::FlexibleInterpVar", ::RooStats::HistFactory::FlexibleInterpVar::Class_Version(), "RooStats/HistFactory/FlexibleInterpVar.h", 25,
                  typeid(::RooStats::HistFactory::FlexibleInterpVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::FlexibleInterpVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::FlexibleInterpVar) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::FlexibleInterpVar*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::FlexibleInterpVar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::FlexibleInterpVar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ParamHistFunc(void *p = 0);
   static void *newArray_ParamHistFunc(Long_t size, void *p);
   static void delete_ParamHistFunc(void *p);
   static void deleteArray_ParamHistFunc(void *p);
   static void destruct_ParamHistFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ParamHistFunc*)
   {
      ::ParamHistFunc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ParamHistFunc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ParamHistFunc", ::ParamHistFunc::Class_Version(), "RooStats/HistFactory/ParamHistFunc.h", 28,
                  typeid(::ParamHistFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ParamHistFunc::Dictionary, isa_proxy, 4,
                  sizeof(::ParamHistFunc) );
      instance.SetNew(&new_ParamHistFunc);
      instance.SetNewArray(&newArray_ParamHistFunc);
      instance.SetDelete(&delete_ParamHistFunc);
      instance.SetDeleteArray(&deleteArray_ParamHistFunc);
      instance.SetDestructor(&destruct_ParamHistFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ParamHistFunc*)
   {
      return GenerateInitInstanceLocal((::ParamHistFunc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ParamHistFunc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistFactoryNavigation*)
   {
      ::RooStats::HistFactory::HistFactoryNavigation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::HistFactoryNavigation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistFactoryNavigation", ::RooStats::HistFactory::HistFactoryNavigation::Class_Version(), "RooStats/HistFactory/HistFactoryNavigation.h", 18,
                  typeid(::RooStats::HistFactory::HistFactoryNavigation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::HistFactoryNavigation::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistFactoryNavigation) );
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistFactoryNavigation);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistFactoryNavigation);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistFactoryNavigation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistFactoryNavigation*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::HistFactoryNavigation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactoryNavigation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistFactorySimultaneous*)
   {
      ::RooStats::HistFactory::HistFactorySimultaneous *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::HistFactorySimultaneous >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistFactorySimultaneous", ::RooStats::HistFactory::HistFactorySimultaneous::Class_Version(), "RooStats/HistFactory/HistFactorySimultaneous.h", 26,
                  typeid(::RooStats::HistFactory::HistFactorySimultaneous), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::HistFactorySimultaneous::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistFactorySimultaneous) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLHistFactorySimultaneous);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLHistFactorySimultaneous);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistFactorySimultaneous);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistFactorySimultaneous);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistFactorySimultaneous);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistFactorySimultaneous*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::HistFactorySimultaneous*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactorySimultaneous*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistoToWorkspaceFactory*)
   {
      ::RooStats::HistFactory::HistoToWorkspaceFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::HistoToWorkspaceFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistoToWorkspaceFactory", ::RooStats::HistFactory::HistoToWorkspaceFactory::Class_Version(), "RooStats/HistFactory/HistoToWorkspaceFactory.h", 36,
                  typeid(::RooStats::HistFactory::HistoToWorkspaceFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::HistoToWorkspaceFactory::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistoToWorkspaceFactory) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistoToWorkspaceFactory*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::HistoToWorkspaceFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)
   {
      ::RooStats::HistFactory::HistoToWorkspaceFactoryFast *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::HistoToWorkspaceFactoryFast >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistoToWorkspaceFactoryFast", ::RooStats::HistFactory::HistoToWorkspaceFactoryFast::Class_Version(), "RooStats/HistFactory/HistoToWorkspaceFactoryFast.h", 42,
                  typeid(::RooStats::HistFactory::HistoToWorkspaceFactoryFast), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::HistoToWorkspaceFactoryFast::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistoToWorkspaceFactoryFast) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLLinInterpVar(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLLinInterpVar(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLLinInterpVar(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLLinInterpVar(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLLinInterpVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::LinInterpVar*)
   {
      ::RooStats::HistFactory::LinInterpVar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::LinInterpVar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::LinInterpVar", ::RooStats::HistFactory::LinInterpVar::Class_Version(), "RooStats/HistFactory/LinInterpVar.h", 24,
                  typeid(::RooStats::HistFactory::LinInterpVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::LinInterpVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::LinInterpVar) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLLinInterpVar);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLLinInterpVar);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLLinInterpVar);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLLinInterpVar);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLLinInterpVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::LinInterpVar*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::LinInterpVar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::LinInterpVar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PiecewiseInterpolation(void *p = 0);
   static void *newArray_PiecewiseInterpolation(Long_t size, void *p);
   static void delete_PiecewiseInterpolation(void *p);
   static void deleteArray_PiecewiseInterpolation(void *p);
   static void destruct_PiecewiseInterpolation(void *p);
   static void streamer_PiecewiseInterpolation(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PiecewiseInterpolation*)
   {
      ::PiecewiseInterpolation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PiecewiseInterpolation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PiecewiseInterpolation", ::PiecewiseInterpolation::Class_Version(), "RooStats/HistFactory/PiecewiseInterpolation.h", 28,
                  typeid(::PiecewiseInterpolation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PiecewiseInterpolation::Dictionary, isa_proxy, 17,
                  sizeof(::PiecewiseInterpolation) );
      instance.SetNew(&new_PiecewiseInterpolation);
      instance.SetNewArray(&newArray_PiecewiseInterpolation);
      instance.SetDelete(&delete_PiecewiseInterpolation);
      instance.SetDeleteArray(&deleteArray_PiecewiseInterpolation);
      instance.SetDestructor(&destruct_PiecewiseInterpolation);
      instance.SetStreamerFunc(&streamer_PiecewiseInterpolation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PiecewiseInterpolation*)
   {
      return GenerateInitInstanceLocal((::PiecewiseInterpolation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PiecewiseInterpolation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p = 0);
   static void *newArray_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::RooBarlowBeestonLL*)
   {
      ::RooStats::HistFactory::RooBarlowBeestonLL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::RooBarlowBeestonLL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::RooBarlowBeestonLL", ::RooStats::HistFactory::RooBarlowBeestonLL::Class_Version(), "RooStats/HistFactory/RooBarlowBeestonLL.h", 26,
                  typeid(::RooStats::HistFactory::RooBarlowBeestonLL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::RooBarlowBeestonLL::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::RooBarlowBeestonLL) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::RooBarlowBeestonLL*)
   {
      return GenerateInitInstanceLocal((::RooStats::HistFactory::RooBarlowBeestonLL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RooStats::HistFactory::RooBarlowBeestonLL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr Measurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Measurement::Class_Name()
{
   return "RooStats::HistFactory::Measurement";
}

//______________________________________________________________________________
const char *Measurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Measurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Measurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Measurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Measurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Measurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Measurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Measurement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr EstimateSummary::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EstimateSummary::Class_Name()
{
   return "RooStats::HistFactory::EstimateSummary";
}

//______________________________________________________________________________
const char *EstimateSummary::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::EstimateSummary*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EstimateSummary::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::EstimateSummary*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EstimateSummary::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::EstimateSummary*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EstimateSummary::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::EstimateSummary*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr FlexibleInterpVar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FlexibleInterpVar::Class_Name()
{
   return "RooStats::HistFactory::FlexibleInterpVar";
}

//______________________________________________________________________________
const char *FlexibleInterpVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::FlexibleInterpVar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FlexibleInterpVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::FlexibleInterpVar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FlexibleInterpVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::FlexibleInterpVar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FlexibleInterpVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::FlexibleInterpVar*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
//______________________________________________________________________________
atomic_TClass_ptr ParamHistFunc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ParamHistFunc::Class_Name()
{
   return "ParamHistFunc";
}

//______________________________________________________________________________
const char *ParamHistFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ParamHistFunc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ParamHistFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ParamHistFunc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ParamHistFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ParamHistFunc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ParamHistFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ParamHistFunc*)0x0)->GetClass(); }
   return fgIsA;
}

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr HistFactoryNavigation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HistFactoryNavigation::Class_Name()
{
   return "RooStats::HistFactory::HistFactoryNavigation";
}

//______________________________________________________________________________
const char *HistFactoryNavigation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactoryNavigation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HistFactoryNavigation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactoryNavigation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HistFactoryNavigation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactoryNavigation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HistFactoryNavigation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactoryNavigation*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr HistFactorySimultaneous::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HistFactorySimultaneous::Class_Name()
{
   return "RooStats::HistFactory::HistFactorySimultaneous";
}

//______________________________________________________________________________
const char *HistFactorySimultaneous::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactorySimultaneous*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HistFactorySimultaneous::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactorySimultaneous*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HistFactorySimultaneous::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactorySimultaneous*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HistFactorySimultaneous::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactorySimultaneous*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr HistoToWorkspaceFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HistoToWorkspaceFactory::Class_Name()
{
   return "RooStats::HistFactory::HistoToWorkspaceFactory";
}

//______________________________________________________________________________
const char *HistoToWorkspaceFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HistoToWorkspaceFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HistoToWorkspaceFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HistoToWorkspaceFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr HistoToWorkspaceFactoryFast::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HistoToWorkspaceFactoryFast::Class_Name()
{
   return "RooStats::HistFactory::HistoToWorkspaceFactoryFast";
}

//______________________________________________________________________________
const char *HistoToWorkspaceFactoryFast::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HistoToWorkspaceFactoryFast::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HistoToWorkspaceFactoryFast::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HistoToWorkspaceFactoryFast::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr LinInterpVar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LinInterpVar::Class_Name()
{
   return "RooStats::HistFactory::LinInterpVar";
}

//______________________________________________________________________________
const char *LinInterpVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::LinInterpVar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LinInterpVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::LinInterpVar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LinInterpVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::LinInterpVar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LinInterpVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::LinInterpVar*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
//______________________________________________________________________________
atomic_TClass_ptr PiecewiseInterpolation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PiecewiseInterpolation::Class_Name()
{
   return "PiecewiseInterpolation";
}

//______________________________________________________________________________
const char *PiecewiseInterpolation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PiecewiseInterpolation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PiecewiseInterpolation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PiecewiseInterpolation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PiecewiseInterpolation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PiecewiseInterpolation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PiecewiseInterpolation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PiecewiseInterpolation*)0x0)->GetClass(); }
   return fgIsA;
}

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr RooBarlowBeestonLL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBarlowBeestonLL::Class_Name()
{
   return "RooStats::HistFactory::RooBarlowBeestonLL";
}

//______________________________________________________________________________
const char *RooBarlowBeestonLL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::RooBarlowBeestonLL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooBarlowBeestonLL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::RooBarlowBeestonLL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBarlowBeestonLL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::RooBarlowBeestonLL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBarlowBeestonLL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::RooBarlowBeestonLL*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLAsimov(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::Asimov : new ::RooStats::HistFactory::Asimov;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLAsimov(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::Asimov[nElements] : new ::RooStats::HistFactory::Asimov[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLAsimov(void *p) {
      delete ((::RooStats::HistFactory::Asimov*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLAsimov(void *p) {
      delete [] ((::RooStats::HistFactory::Asimov*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLAsimov(void *p) {
      typedef ::RooStats::HistFactory::Asimov current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Asimov

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLHistRef(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::HistRef : new ::RooStats::HistFactory::HistRef;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLHistRef(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::HistRef[nElements] : new ::RooStats::HistFactory::HistRef[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistRef(void *p) {
      delete ((::RooStats::HistFactory::HistRef*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistRef(void *p) {
      delete [] ((::RooStats::HistFactory::HistRef*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistRef(void *p) {
      typedef ::RooStats::HistFactory::HistRef current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistRef

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLStatError(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::StatError : new ::RooStats::HistFactory::StatError;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLStatError(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::StatError[nElements] : new ::RooStats::HistFactory::StatError[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLStatError(void *p) {
      delete ((::RooStats::HistFactory::StatError*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLStatError(void *p) {
      delete [] ((::RooStats::HistFactory::StatError*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLStatError(void *p) {
      typedef ::RooStats::HistFactory::StatError current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::StatError

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::StatErrorConfig : new ::RooStats::HistFactory::StatErrorConfig;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLStatErrorConfig(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::StatErrorConfig[nElements] : new ::RooStats::HistFactory::StatErrorConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p) {
      delete ((::RooStats::HistFactory::StatErrorConfig*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p) {
      delete [] ((::RooStats::HistFactory::StatErrorConfig*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p) {
      typedef ::RooStats::HistFactory::StatErrorConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::StatErrorConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLSample(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::Sample : new ::RooStats::HistFactory::Sample;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLSample(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::Sample[nElements] : new ::RooStats::HistFactory::Sample[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLSample(void *p) {
      delete ((::RooStats::HistFactory::Sample*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLSample(void *p) {
      delete [] ((::RooStats::HistFactory::Sample*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLSample(void *p) {
      typedef ::RooStats::HistFactory::Sample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Sample

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::Data : new ::RooStats::HistFactory::Data;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::Data[nElements] : new ::RooStats::HistFactory::Data[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLData(void *p) {
      delete ((::RooStats::HistFactory::Data*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLData(void *p) {
      delete [] ((::RooStats::HistFactory::Data*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLData(void *p) {
      typedef ::RooStats::HistFactory::Data current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Data

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLChannel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::Channel : new ::RooStats::HistFactory::Channel;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLChannel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::Channel[nElements] : new ::RooStats::HistFactory::Channel[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLChannel(void *p) {
      delete ((::RooStats::HistFactory::Channel*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLChannel(void *p) {
      delete [] ((::RooStats::HistFactory::Channel*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLChannel(void *p) {
      typedef ::RooStats::HistFactory::Channel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Channel

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::PreprocessFunction : new ::RooStats::HistFactory::PreprocessFunction;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLPreprocessFunction(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::PreprocessFunction[nElements] : new ::RooStats::HistFactory::PreprocessFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p) {
      delete ((::RooStats::HistFactory::PreprocessFunction*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p) {
      delete [] ((::RooStats::HistFactory::PreprocessFunction*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p) {
      typedef ::RooStats::HistFactory::PreprocessFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::PreprocessFunction

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void Measurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::Measurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::Measurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::Measurement::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLMeasurement(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::Measurement : new ::RooStats::HistFactory::Measurement;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::Measurement[nElements] : new ::RooStats::HistFactory::Measurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLMeasurement(void *p) {
      delete ((::RooStats::HistFactory::Measurement*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLMeasurement(void *p) {
      delete [] ((::RooStats::HistFactory::Measurement*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLMeasurement(void *p) {
      typedef ::RooStats::HistFactory::Measurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Measurement

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLConfigParser(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::ConfigParser : new ::RooStats::HistFactory::ConfigParser;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLConfigParser(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RooStats::HistFactory::ConfigParser[nElements] : new ::RooStats::HistFactory::ConfigParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLConfigParser(void *p) {
      delete ((::RooStats::HistFactory::ConfigParser*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLConfigParser(void *p) {
      delete [] ((::RooStats::HistFactory::ConfigParser*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLConfigParser(void *p) {
      typedef ::RooStats::HistFactory::ConfigParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::ConfigParser

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void EstimateSummary::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::EstimateSummary.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::EstimateSummary::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::EstimateSummary::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLEstimateSummary(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::EstimateSummary : new ::RooStats::HistFactory::EstimateSummary;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLEstimateSummary(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::EstimateSummary[nElements] : new ::RooStats::HistFactory::EstimateSummary[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLEstimateSummary(void *p) {
      delete ((::RooStats::HistFactory::EstimateSummary*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLEstimateSummary(void *p) {
      delete [] ((::RooStats::HistFactory::EstimateSummary*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLEstimateSummary(void *p) {
      typedef ::RooStats::HistFactory::EstimateSummary current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::EstimateSummary

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void FlexibleInterpVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::FlexibleInterpVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::FlexibleInterpVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::FlexibleInterpVar::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::FlexibleInterpVar : new ::RooStats::HistFactory::FlexibleInterpVar;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::FlexibleInterpVar[nElements] : new ::RooStats::HistFactory::FlexibleInterpVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p) {
      delete ((::RooStats::HistFactory::FlexibleInterpVar*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p) {
      delete [] ((::RooStats::HistFactory::FlexibleInterpVar*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p) {
      typedef ::RooStats::HistFactory::FlexibleInterpVar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::FlexibleInterpVar

//______________________________________________________________________________
void ParamHistFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class ParamHistFunc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ParamHistFunc::Class(),this);
   } else {
      R__b.WriteClassBuffer(ParamHistFunc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ParamHistFunc(void *p) {
      return  p ? new(p) ::ParamHistFunc : new ::ParamHistFunc;
   }
   static void *newArray_ParamHistFunc(Long_t nElements, void *p) {
      return p ? new(p) ::ParamHistFunc[nElements] : new ::ParamHistFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_ParamHistFunc(void *p) {
      delete ((::ParamHistFunc*)p);
   }
   static void deleteArray_ParamHistFunc(void *p) {
      delete [] ((::ParamHistFunc*)p);
   }
   static void destruct_ParamHistFunc(void *p) {
      typedef ::ParamHistFunc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ParamHistFunc

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void HistFactoryNavigation::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::HistFactoryNavigation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::HistFactoryNavigation::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::HistFactoryNavigation::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p) {
      delete ((::RooStats::HistFactory::HistFactoryNavigation*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p) {
      delete [] ((::RooStats::HistFactory::HistFactoryNavigation*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p) {
      typedef ::RooStats::HistFactory::HistFactoryNavigation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistFactoryNavigation

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void HistFactorySimultaneous::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::HistFactorySimultaneous.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::HistFactorySimultaneous::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::HistFactorySimultaneous::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::HistFactorySimultaneous : new ::RooStats::HistFactory::HistFactorySimultaneous;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::HistFactorySimultaneous[nElements] : new ::RooStats::HistFactory::HistFactorySimultaneous[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(void *p) {
      delete ((::RooStats::HistFactory::HistFactorySimultaneous*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(void *p) {
      delete [] ((::RooStats::HistFactory::HistFactorySimultaneous*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistFactorySimultaneous(void *p) {
      typedef ::RooStats::HistFactory::HistFactorySimultaneous current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistFactorySimultaneous

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void HistoToWorkspaceFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::HistoToWorkspaceFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::HistoToWorkspaceFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::HistoToWorkspaceFactory::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::HistoToWorkspaceFactory : new ::RooStats::HistFactory::HistoToWorkspaceFactory;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::HistoToWorkspaceFactory[nElements] : new ::RooStats::HistFactory::HistoToWorkspaceFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(void *p) {
      delete ((::RooStats::HistFactory::HistoToWorkspaceFactory*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(void *p) {
      delete [] ((::RooStats::HistFactory::HistoToWorkspaceFactory*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactory(void *p) {
      typedef ::RooStats::HistFactory::HistoToWorkspaceFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistoToWorkspaceFactory

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void HistoToWorkspaceFactoryFast::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::HistoToWorkspaceFactoryFast.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::HistoToWorkspaceFactoryFast::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::HistoToWorkspaceFactoryFast::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::HistoToWorkspaceFactoryFast : new ::RooStats::HistFactory::HistoToWorkspaceFactoryFast;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::HistoToWorkspaceFactoryFast[nElements] : new ::RooStats::HistFactory::HistoToWorkspaceFactoryFast[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p) {
      delete ((::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p) {
      delete [] ((::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p) {
      typedef ::RooStats::HistFactory::HistoToWorkspaceFactoryFast current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistoToWorkspaceFactoryFast

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void LinInterpVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::LinInterpVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::LinInterpVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::LinInterpVar::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLLinInterpVar(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::LinInterpVar : new ::RooStats::HistFactory::LinInterpVar;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLLinInterpVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::LinInterpVar[nElements] : new ::RooStats::HistFactory::LinInterpVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLLinInterpVar(void *p) {
      delete ((::RooStats::HistFactory::LinInterpVar*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLLinInterpVar(void *p) {
      delete [] ((::RooStats::HistFactory::LinInterpVar*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLLinInterpVar(void *p) {
      typedef ::RooStats::HistFactory::LinInterpVar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::LinInterpVar

namespace ROOT {
   // Wrappers around operator new
   static void *new_PiecewiseInterpolation(void *p) {
      return  p ? new(p) ::PiecewiseInterpolation : new ::PiecewiseInterpolation;
   }
   static void *newArray_PiecewiseInterpolation(Long_t nElements, void *p) {
      return p ? new(p) ::PiecewiseInterpolation[nElements] : new ::PiecewiseInterpolation[nElements];
   }
   // Wrapper around operator delete
   static void delete_PiecewiseInterpolation(void *p) {
      delete ((::PiecewiseInterpolation*)p);
   }
   static void deleteArray_PiecewiseInterpolation(void *p) {
      delete [] ((::PiecewiseInterpolation*)p);
   }
   static void destruct_PiecewiseInterpolation(void *p) {
      typedef ::PiecewiseInterpolation current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_PiecewiseInterpolation(TBuffer &buf, void *obj) {
      ((::PiecewiseInterpolation*)obj)->::PiecewiseInterpolation::Streamer(buf);
   }
} // end of namespace ROOT for class ::PiecewiseInterpolation

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void RooBarlowBeestonLL::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::RooBarlowBeestonLL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::RooBarlowBeestonLL::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::RooBarlowBeestonLL::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::RooBarlowBeestonLL : new ::RooStats::HistFactory::RooBarlowBeestonLL;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::RooBarlowBeestonLL[nElements] : new ::RooStats::HistFactory::RooBarlowBeestonLL[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p) {
      delete ((::RooStats::HistFactory::RooBarlowBeestonLL*)p);
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p) {
      delete [] ((::RooStats::HistFactory::RooBarlowBeestonLL*)p);
   }
   static void destruct_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p) {
      typedef ::RooStats::HistFactory::RooBarlowBeestonLL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::RooBarlowBeestonLL

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
   static TClass *vectorlETH1mUgR_Dictionary();
   static void vectorlETH1mUgR_TClassManip(TClass*);
   static void *new_vectorlETH1mUgR(void *p = 0);
   static void *newArray_vectorlETH1mUgR(Long_t size, void *p);
   static void delete_vectorlETH1mUgR(void *p);
   static void deleteArray_vectorlETH1mUgR(void *p);
   static void destruct_vectorlETH1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1*>*)
   {
      vector<TH1*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1*>", -2, "vector", 216,
                  typeid(vector<TH1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1mUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1*>) );
      instance.SetNew(&new_vectorlETH1mUgR);
      instance.SetNewArray(&newArray_vectorlETH1mUgR);
      instance.SetDelete(&delete_vectorlETH1mUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1mUgR);
      instance.SetDestructor(&destruct_vectorlETH1mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1*>*)0x0)->GetClass();
      vectorlETH1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1mUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1*> : new vector<TH1*>;
   }
   static void *newArray_vectorlETH1mUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1*>[nElements] : new vector<TH1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1mUgR(void *p) {
      delete ((vector<TH1*>*)p);
   }
   static void deleteArray_vectorlETH1mUgR(void *p) {
      delete [] ((vector<TH1*>*)p);
   }
   static void destruct_vectorlETH1mUgR(void *p) {
      typedef vector<TH1*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1*>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLShapeSysgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLShapeSysgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::ShapeSys>*)
   {
      vector<RooStats::HistFactory::ShapeSys> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::ShapeSys>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::ShapeSys>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::ShapeSys>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLShapeSysgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::ShapeSys>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::ShapeSys> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::ShapeSys>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLShapeSysgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::ShapeSys>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLShapeSysgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLShapeSysgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::ShapeSys> : new vector<RooStats::HistFactory::ShapeSys>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::ShapeSys>[nElements] : new vector<RooStats::HistFactory::ShapeSys>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p) {
      delete ((vector<RooStats::HistFactory::ShapeSys>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::ShapeSys>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p) {
      typedef vector<RooStats::HistFactory::ShapeSys> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::ShapeSys>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::ShapeFactor>*)
   {
      vector<RooStats::HistFactory::ShapeFactor> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::ShapeFactor>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::ShapeFactor>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::ShapeFactor>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::ShapeFactor>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::ShapeFactor> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::ShapeFactor>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::ShapeFactor>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::ShapeFactor> : new vector<RooStats::HistFactory::ShapeFactor>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::ShapeFactor>[nElements] : new vector<RooStats::HistFactory::ShapeFactor>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p) {
      delete ((vector<RooStats::HistFactory::ShapeFactor>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::ShapeFactor>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p) {
      typedef vector<RooStats::HistFactory::ShapeFactor> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::ShapeFactor>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLSamplegR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLSamplegR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLSamplegR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::Sample>*)
   {
      vector<RooStats::HistFactory::Sample> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::Sample>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::Sample>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::Sample>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLSamplegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RooStats::HistFactory::Sample>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::Sample> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::Sample>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLSamplegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::Sample>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLSamplegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLSamplegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::Sample> : new vector<RooStats::HistFactory::Sample>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLSamplegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::Sample>[nElements] : new vector<RooStats::HistFactory::Sample>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p) {
      delete ((vector<RooStats::HistFactory::Sample>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p) {
      delete [] ((vector<RooStats::HistFactory::Sample>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p) {
      typedef vector<RooStats::HistFactory::Sample> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::Sample>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::PreprocessFunction>*)
   {
      vector<RooStats::HistFactory::PreprocessFunction> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::PreprocessFunction>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::PreprocessFunction>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::PreprocessFunction>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::PreprocessFunction>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::PreprocessFunction> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::PreprocessFunction>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::PreprocessFunction>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::PreprocessFunction> : new vector<RooStats::HistFactory::PreprocessFunction>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::PreprocessFunction>[nElements] : new vector<RooStats::HistFactory::PreprocessFunction>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p) {
      delete ((vector<RooStats::HistFactory::PreprocessFunction>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p) {
      delete [] ((vector<RooStats::HistFactory::PreprocessFunction>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p) {
      typedef vector<RooStats::HistFactory::PreprocessFunction> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::PreprocessFunction>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLOverallSysgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLOverallSysgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::OverallSys>*)
   {
      vector<RooStats::HistFactory::OverallSys> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::OverallSys>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::OverallSys>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::OverallSys>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLOverallSysgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::OverallSys>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::OverallSys> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::OverallSys>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLOverallSysgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::OverallSys>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLOverallSysgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLOverallSysgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::OverallSys> : new vector<RooStats::HistFactory::OverallSys>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::OverallSys>[nElements] : new vector<RooStats::HistFactory::OverallSys>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p) {
      delete ((vector<RooStats::HistFactory::OverallSys>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::OverallSys>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p) {
      typedef vector<RooStats::HistFactory::OverallSys> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::OverallSys>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLNormFactorgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLNormFactorgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::NormFactor>*)
   {
      vector<RooStats::HistFactory::NormFactor> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::NormFactor>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::NormFactor>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::NormFactor>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLNormFactorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::NormFactor>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::NormFactor> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::NormFactor>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLNormFactorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::NormFactor>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLNormFactorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLNormFactorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::NormFactor> : new vector<RooStats::HistFactory::NormFactor>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::NormFactor>[nElements] : new vector<RooStats::HistFactory::NormFactor>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p) {
      delete ((vector<RooStats::HistFactory::NormFactor>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::NormFactor>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p) {
      typedef vector<RooStats::HistFactory::NormFactor> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::NormFactor>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistoSysgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLHistoSysgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::HistoSys>*)
   {
      vector<RooStats::HistFactory::HistoSys> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::HistoSys>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::HistoSys>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::HistoSys>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLHistoSysgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::HistoSys>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::HistoSys> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::HistoSys>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistoSysgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::HistoSys>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLHistoSysgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLHistoSysgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::HistoSys> : new vector<RooStats::HistFactory::HistoSys>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::HistoSys>[nElements] : new vector<RooStats::HistFactory::HistoSys>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p) {
      delete ((vector<RooStats::HistFactory::HistoSys>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::HistoSys>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p) {
      typedef vector<RooStats::HistFactory::HistoSys> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::HistoSys>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::HistoFactor>*)
   {
      vector<RooStats::HistFactory::HistoFactor> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::HistoFactor>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::HistoFactor>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::HistoFactor>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::HistoFactor>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::HistoFactor> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::HistoFactor>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::HistoFactor>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::HistoFactor> : new vector<RooStats::HistFactory::HistoFactor>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::HistoFactor>[nElements] : new vector<RooStats::HistFactory::HistoFactor>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p) {
      delete ((vector<RooStats::HistFactory::HistoFactor>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::HistoFactor>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p) {
      typedef vector<RooStats::HistFactory::HistoFactor> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::HistoFactor>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistRefgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLHistRefgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::HistRef>*)
   {
      vector<RooStats::HistFactory::HistRef> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::HistRef>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::HistRef>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::HistRef>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLHistRefgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RooStats::HistFactory::HistRef>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::HistRef> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::HistRef>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistRefgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::HistRef>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLHistRefgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLHistRefgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::HistRef> : new vector<RooStats::HistFactory::HistRef>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::HistRef>[nElements] : new vector<RooStats::HistFactory::HistRef>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p) {
      delete ((vector<RooStats::HistFactory::HistRef>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::HistRef>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p) {
      typedef vector<RooStats::HistFactory::HistRef> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::HistRef>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::EstimateSummary::ShapeSys>*)
   {
      vector<RooStats::HistFactory::EstimateSummary::ShapeSys> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::EstimateSummary::ShapeSys>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::EstimateSummary::ShapeSys>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::EstimateSummary::ShapeSys>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::EstimateSummary::ShapeSys>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::EstimateSummary::ShapeSys> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::EstimateSummary::ShapeSys>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::EstimateSummary::ShapeSys>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::EstimateSummary::ShapeSys> : new vector<RooStats::HistFactory::EstimateSummary::ShapeSys>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::EstimateSummary::ShapeSys>[nElements] : new vector<RooStats::HistFactory::EstimateSummary::ShapeSys>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(void *p) {
      delete ((vector<RooStats::HistFactory::EstimateSummary::ShapeSys>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::EstimateSummary::ShapeSys>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLShapeSysgR(void *p) {
      typedef vector<RooStats::HistFactory::EstimateSummary::ShapeSys> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::EstimateSummary::ShapeSys>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::EstimateSummary::NormFactor>*)
   {
      vector<RooStats::HistFactory::EstimateSummary::NormFactor> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::EstimateSummary::NormFactor>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::EstimateSummary::NormFactor>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::EstimateSummary::NormFactor>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::EstimateSummary::NormFactor>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::EstimateSummary::NormFactor> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::EstimateSummary::NormFactor>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::EstimateSummary::NormFactor>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::EstimateSummary::NormFactor> : new vector<RooStats::HistFactory::EstimateSummary::NormFactor>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::EstimateSummary::NormFactor>[nElements] : new vector<RooStats::HistFactory::EstimateSummary::NormFactor>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(void *p) {
      delete ((vector<RooStats::HistFactory::EstimateSummary::NormFactor>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::EstimateSummary::NormFactor>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLEstimateSummarycLcLNormFactorgR(void *p) {
      typedef vector<RooStats::HistFactory::EstimateSummary::NormFactor> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::EstimateSummary::NormFactor>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLDatagR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLDatagR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLDatagR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::Data>*)
   {
      vector<RooStats::HistFactory::Data> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::Data>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::Data>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::Data>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::Data>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::Data> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::Data>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::Data>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::Data> : new vector<RooStats::HistFactory::Data>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::Data>[nElements] : new vector<RooStats::HistFactory::Data>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p) {
      delete ((vector<RooStats::HistFactory::Data>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p) {
      delete [] ((vector<RooStats::HistFactory::Data>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p) {
      typedef vector<RooStats::HistFactory::Data> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::Data>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLChannelgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLChannelgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLChannelgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::Channel>*)
   {
      vector<RooStats::HistFactory::Channel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::Channel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::Channel>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::Channel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLChannelgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RooStats::HistFactory::Channel>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::Channel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::Channel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLChannelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::Channel>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLChannelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLChannelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::Channel> : new vector<RooStats::HistFactory::Channel>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLChannelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::Channel>[nElements] : new vector<RooStats::HistFactory::Channel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p) {
      delete ((vector<RooStats::HistFactory::Channel>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::Channel>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p) {
      typedef vector<RooStats::HistFactory::Channel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::Channel>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLAsimovgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLAsimovgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p = 0);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::Asimov>*)
   {
      vector<RooStats::HistFactory::Asimov> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::Asimov>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::Asimov>", -2, "vector", 216,
                  typeid(vector<RooStats::HistFactory::Asimov>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLAsimovgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::Asimov>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::Asimov> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RooStats::HistFactory::Asimov>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLAsimovgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RooStats::HistFactory::Asimov>*)0x0)->GetClass();
      vectorlERooStatscLcLHistFactorycLcLAsimovgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLAsimovgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::Asimov> : new vector<RooStats::HistFactory::Asimov>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RooStats::HistFactory::Asimov>[nElements] : new vector<RooStats::HistFactory::Asimov>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p) {
      delete ((vector<RooStats::HistFactory::Asimov>*)p);
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p) {
      delete [] ((vector<RooStats::HistFactory::Asimov>*)p);
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p) {
      typedef vector<RooStats::HistFactory::Asimov> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::Asimov>

namespace ROOT {
   static TClass *maplEstringcOpairlEdoublecOdoublegRsPgR_Dictionary();
   static void maplEstringcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOpairlEdoublecOdoublegRsPgR(void *p = 0);
   static void *newArray_maplEstringcOpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_maplEstringcOpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_maplEstringcOpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,pair<double,double> >*)
   {
      map<string,pair<double,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,pair<double,double> >", -2, "map", 99,
                  typeid(map<string,pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,pair<double,double> >) );
      instance.SetNew(&new_maplEstringcOpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_maplEstringcOpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,pair<double,double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,pair<double,double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,pair<double,double> >*)0x0)->GetClass();
      maplEstringcOpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,pair<double,double> > : new map<string,pair<double,double> >;
   }
   static void *newArray_maplEstringcOpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,pair<double,double> >[nElements] : new map<string,pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete ((map<string,pair<double,double> >*)p);
   }
   static void deleteArray_maplEstringcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] ((map<string,pair<double,double> >*)p);
   }
   static void destruct_maplEstringcOpairlEdoublecOdoublegRsPgR(void *p) {
      typedef map<string,pair<double,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,pair<double,double> >

namespace ROOT {
   static TClass *maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_Dictionary();
   static void maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p);
   static void deleteArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p);
   static void destruct_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,map<string,RooAbsReal*> >*)
   {
      map<string,map<string,RooAbsReal*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,map<string,RooAbsReal*> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,map<string,RooAbsReal*> >", -2, "map", 99,
                  typeid(map<string,map<string,RooAbsReal*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,map<string,RooAbsReal*> >) );
      instance.SetNew(&new_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.SetDelete(&delete_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,map<string,RooAbsReal*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,map<string,RooAbsReal*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,map<string,RooAbsReal*> >*)0x0)->GetClass();
      maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,map<string,RooAbsReal*> > : new map<string,map<string,RooAbsReal*> >;
   }
   static void *newArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,map<string,RooAbsReal*> >[nElements] : new map<string,map<string,RooAbsReal*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p) {
      delete ((map<string,map<string,RooAbsReal*> >*)p);
   }
   static void deleteArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p) {
      delete [] ((map<string,map<string,RooAbsReal*> >*)p);
   }
   static void destruct_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p) {
      typedef map<string,map<string,RooAbsReal*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,map<string,RooAbsReal*> >

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
   static TClass *maplEstringcORooArgSetmUgR_Dictionary();
   static void maplEstringcORooArgSetmUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooArgSetmUgR(void *p = 0);
   static void *newArray_maplEstringcORooArgSetmUgR(Long_t size, void *p);
   static void delete_maplEstringcORooArgSetmUgR(void *p);
   static void deleteArray_maplEstringcORooArgSetmUgR(void *p);
   static void destruct_maplEstringcORooArgSetmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooArgSet*>*)
   {
      map<string,RooArgSet*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooArgSet*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooArgSet*>", -2, "map", 99,
                  typeid(map<string,RooArgSet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooArgSetmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,RooArgSet*>) );
      instance.SetNew(&new_maplEstringcORooArgSetmUgR);
      instance.SetNewArray(&newArray_maplEstringcORooArgSetmUgR);
      instance.SetDelete(&delete_maplEstringcORooArgSetmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooArgSetmUgR);
      instance.SetDestructor(&destruct_maplEstringcORooArgSetmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooArgSet*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,RooArgSet*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooArgSetmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,RooArgSet*>*)0x0)->GetClass();
      maplEstringcORooArgSetmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooArgSetmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooArgSetmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,RooArgSet*> : new map<string,RooArgSet*>;
   }
   static void *newArray_maplEstringcORooArgSetmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,RooArgSet*>[nElements] : new map<string,RooArgSet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooArgSetmUgR(void *p) {
      delete ((map<string,RooArgSet*>*)p);
   }
   static void deleteArray_maplEstringcORooArgSetmUgR(void *p) {
      delete [] ((map<string,RooArgSet*>*)p);
   }
   static void destruct_maplEstringcORooArgSetmUgR(void *p) {
      typedef map<string,RooArgSet*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,RooArgSet*>

namespace ROOT {
   static TClass *maplEstringcORooAbsRealmUgR_Dictionary();
   static void maplEstringcORooAbsRealmUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooAbsRealmUgR(void *p = 0);
   static void *newArray_maplEstringcORooAbsRealmUgR(Long_t size, void *p);
   static void delete_maplEstringcORooAbsRealmUgR(void *p);
   static void deleteArray_maplEstringcORooAbsRealmUgR(void *p);
   static void destruct_maplEstringcORooAbsRealmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooAbsReal*>*)
   {
      map<string,RooAbsReal*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooAbsReal*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooAbsReal*>", -2, "map", 99,
                  typeid(map<string,RooAbsReal*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooAbsRealmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,RooAbsReal*>) );
      instance.SetNew(&new_maplEstringcORooAbsRealmUgR);
      instance.SetNewArray(&newArray_maplEstringcORooAbsRealmUgR);
      instance.SetDelete(&delete_maplEstringcORooAbsRealmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooAbsRealmUgR);
      instance.SetDestructor(&destruct_maplEstringcORooAbsRealmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooAbsReal*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,RooAbsReal*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooAbsRealmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,RooAbsReal*>*)0x0)->GetClass();
      maplEstringcORooAbsRealmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooAbsRealmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooAbsRealmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,RooAbsReal*> : new map<string,RooAbsReal*>;
   }
   static void *newArray_maplEstringcORooAbsRealmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,RooAbsReal*>[nElements] : new map<string,RooAbsReal*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooAbsRealmUgR(void *p) {
      delete ((map<string,RooAbsReal*>*)p);
   }
   static void deleteArray_maplEstringcORooAbsRealmUgR(void *p) {
      delete [] ((map<string,RooAbsReal*>*)p);
   }
   static void destruct_maplEstringcORooAbsRealmUgR(void *p) {
      typedef map<string,RooAbsReal*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,RooAbsReal*>

namespace ROOT {
   static TClass *maplEstringcORooAbsPdfmUgR_Dictionary();
   static void maplEstringcORooAbsPdfmUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooAbsPdfmUgR(void *p = 0);
   static void *newArray_maplEstringcORooAbsPdfmUgR(Long_t size, void *p);
   static void delete_maplEstringcORooAbsPdfmUgR(void *p);
   static void deleteArray_maplEstringcORooAbsPdfmUgR(void *p);
   static void destruct_maplEstringcORooAbsPdfmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooAbsPdf*>*)
   {
      map<string,RooAbsPdf*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooAbsPdf*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooAbsPdf*>", -2, "map", 99,
                  typeid(map<string,RooAbsPdf*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooAbsPdfmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,RooAbsPdf*>) );
      instance.SetNew(&new_maplEstringcORooAbsPdfmUgR);
      instance.SetNewArray(&newArray_maplEstringcORooAbsPdfmUgR);
      instance.SetDelete(&delete_maplEstringcORooAbsPdfmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooAbsPdfmUgR);
      instance.SetDestructor(&destruct_maplEstringcORooAbsPdfmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooAbsPdf*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,RooAbsPdf*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooAbsPdfmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,RooAbsPdf*>*)0x0)->GetClass();
      maplEstringcORooAbsPdfmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooAbsPdfmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooAbsPdfmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,RooAbsPdf*> : new map<string,RooAbsPdf*>;
   }
   static void *newArray_maplEstringcORooAbsPdfmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,RooAbsPdf*>[nElements] : new map<string,RooAbsPdf*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooAbsPdfmUgR(void *p) {
      delete ((map<string,RooAbsPdf*>*)p);
   }
   static void deleteArray_maplEstringcORooAbsPdfmUgR(void *p) {
      delete [] ((map<string,RooAbsPdf*>*)p);
   }
   static void destruct_maplEstringcORooAbsPdfmUgR(void *p) {
      typedef map<string,RooAbsPdf*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,RooAbsPdf*>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 99,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace {
  void TriggerDictionaryInitialization_libHistFactory_Impl() {
    static const char* headers[] = {
"RooStats/HistFactory/Asimov.h",
"RooStats/HistFactory/Channel.h",
"RooStats/HistFactory/ConfigParser.h",
"RooStats/HistFactory/Data.h",
"RooStats/HistFactory/EstimateSummary.h",
"RooStats/HistFactory/FlexibleInterpVar.h",
"RooStats/HistFactory/HistFactoryException.h",
"RooStats/HistFactory/HistFactoryModelUtils.h",
"RooStats/HistFactory/HistFactoryNavigation.h",
"RooStats/HistFactory/HistFactorySimultaneous.h",
"RooStats/HistFactory/HistRef.h",
"RooStats/HistFactory/HistoToWorkspaceFactory.h",
"RooStats/HistFactory/HistoToWorkspaceFactoryFast.h",
"RooStats/HistFactory/LinInterpVar.h",
"RooStats/HistFactory/MakeModelAndMeasurementsFast.h",
"RooStats/HistFactory/Measurement.h",
"RooStats/HistFactory/ParamHistFunc.h",
"RooStats/HistFactory/PiecewiseInterpolation.h",
"RooStats/HistFactory/PreprocessFunction.h",
"RooStats/HistFactory/RooBarlowBeestonLL.h",
"RooStats/HistFactory/Sample.h",
"RooStats/HistFactory/Systematics.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libHistFactory dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "RooStats/HistFactory/Asimov.h"
#include "RooStats/HistFactory/Channel.h"
#include "RooStats/HistFactory/ConfigParser.h"
#include "RooStats/HistFactory/Data.h"
#include "RooStats/HistFactory/EstimateSummary.h"
#include "RooStats/HistFactory/FlexibleInterpVar.h"
#include "RooStats/HistFactory/HistFactoryException.h"
#include "RooStats/HistFactory/HistFactoryModelUtils.h"
#include "RooStats/HistFactory/HistFactoryNavigation.h"
#include "RooStats/HistFactory/HistFactorySimultaneous.h"
#include "RooStats/HistFactory/HistRef.h"
#include "RooStats/HistFactory/HistoToWorkspaceFactory.h"
#include "RooStats/HistFactory/HistoToWorkspaceFactoryFast.h"
#include "RooStats/HistFactory/LinInterpVar.h"
#include "RooStats/HistFactory/MakeModelAndMeasurementsFast.h"
#include "RooStats/HistFactory/Measurement.h"
#include "RooStats/HistFactory/ParamHistFunc.h"
#include "RooStats/HistFactory/PiecewiseInterpolation.h"
#include "RooStats/HistFactory/PreprocessFunction.h"
#include "RooStats/HistFactory/RooBarlowBeestonLL.h"
#include "RooStats/HistFactory/Sample.h"
#include "RooStats/HistFactory/Systematics.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libHistFactory",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHistFactory_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHistFactory_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHistFactory() {
  TriggerDictionaryInitialization_libHistFactory_Impl();
}
