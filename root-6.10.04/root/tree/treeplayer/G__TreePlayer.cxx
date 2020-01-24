// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__TreePlayer

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
#include "TBranchProxy.h"
#include "TBranchProxyClassDescriptor.h"
#include "TBranchProxyDescriptor.h"
#include "TBranchProxyDirector.h"
#include "TChainIndex.h"
#include "TFileDrawMap.h"
#include "TFormLeafInfo.h"
#include "TFormLeafInfoReference.h"
#include "TFriendProxy.h"
#include "TFriendProxyDescriptor.h"
#include "TMPWorkerTree.h"
#include "TRefArrayProxy.h"
#include "TRefProxy.h"
#include "TSelectorDraw.h"
#include "TSelectorEntries.h"
#include "TSimpleAnalysis.h"
#include "TTreeDrawArgsParser.h"
#include "TTreeFormula.h"
#include "TTreeFormulaManager.h"
#include "TTreeGeneratorBase.h"
#include "TTreeIndex.h"
#include "TTreePerfStats.h"
#include "TTreePlayer.h"
#include "TTreeProxyGenerator.h"
#include "TTreeReader.h"
#include "TTreeReaderArray.h"
#include "TTreeReaderGenerator.h"
#include "TTreeReaderUtils.h"
#include "TTreeReaderValue.h"
#include "TTreeTableInterface.h"
#include "ROOT/TDFActionHelpers.hxx"
#include "ROOT/TDFInterface.hxx"
#include "ROOT/TDFNodes.hxx"
#include "ROOT/TDFUtils.hxx"
#include "ROOT/TDataFrame.hxx"
#include "ROOT/TResultProxy.hxx"
#include "ROOT/TTreeProcessorMP.hxx"
#include "ROOT/TTreeProcessorMT.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTBranchProxyDirector_Dictionary();
   static void ROOTcLcLInternalcLcLTBranchProxyDirector_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLTBranchProxyDirector(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTBranchProxyDirector(void *p);
   static void destruct_ROOTcLcLInternalcLcLTBranchProxyDirector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TBranchProxyDirector*)
   {
      ::ROOT::Internal::TBranchProxyDirector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TBranchProxyDirector));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TBranchProxyDirector", "TBranchProxyDirector.h", 36,
                  typeid(::ROOT::Internal::TBranchProxyDirector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTBranchProxyDirector_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TBranchProxyDirector) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTBranchProxyDirector);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTBranchProxyDirector);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTBranchProxyDirector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TBranchProxyDirector*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TBranchProxyDirector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyDirector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTBranchProxyDirector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyDirector*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTBranchProxyDirector_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTBranchProxyDirector_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLTBranchProxy_Dictionary();
   static void ROOTcLcLDetailcLcLTBranchProxy_TClassManip(TClass*);
   static void *new_ROOTcLcLDetailcLcLTBranchProxy(void *p = 0);
   static void *newArray_ROOTcLcLDetailcLcLTBranchProxy(Long_t size, void *p);
   static void delete_ROOTcLcLDetailcLcLTBranchProxy(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLTBranchProxy(void *p);
   static void destruct_ROOTcLcLDetailcLcLTBranchProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::TBranchProxy*)
   {
      ::ROOT::Detail::TBranchProxy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::TBranchProxy));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::TBranchProxy", "TBranchProxy.h", 65,
                  typeid(::ROOT::Detail::TBranchProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLTBranchProxy_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::TBranchProxy) );
      instance.SetNew(&new_ROOTcLcLDetailcLcLTBranchProxy);
      instance.SetNewArray(&newArray_ROOTcLcLDetailcLcLTBranchProxy);
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLTBranchProxy);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLTBranchProxy);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLTBranchProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::TBranchProxy*)
   {
      return GenerateInitInstanceLocal((::ROOT::Detail::TBranchProxy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Detail::TBranchProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLTBranchProxy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Detail::TBranchProxy*)0x0)->GetClass();
      ROOTcLcLDetailcLcLTBranchProxy_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLTBranchProxy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEdoublegR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEdoublegR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEdoublegR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<double>*)
   {
      ::ROOT::Internal::TImpProxy<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<double>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<double>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<double>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEfloatgR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEfloatgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEfloatgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<float>*)
   {
      ::ROOT::Internal::TImpProxy<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<float>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<float>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<float>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<unsigned int>*)
   {
      ::ROOT::Internal::TImpProxy<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<unsigned int>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<unsigned int>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TImpProxy<unsigned int>","ROOT::Internal::TImpProxy<UInt_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<unsigned int>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<unsigned long>*)
   {
      ::ROOT::Internal::TImpProxy<unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<unsigned long>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<unsigned long>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TImpProxy<unsigned long>","ROOT::Internal::TImpProxy<ULong_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<unsigned long>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<unsigned long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<unsigned long>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEULong64_tgR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEULong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<ULong64_t>*)
   {
      ::ROOT::Internal::TImpProxy<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<ULong64_t>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<ULong64_t>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<ULong64_t>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<ULong64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<ULong64_t>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<unsigned short>*)
   {
      ::ROOT::Internal::TImpProxy<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<unsigned short>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<unsigned short>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TImpProxy<unsigned short>","ROOT::Internal::TImpProxy<UShort_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<unsigned short>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<unsigned short>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<unsigned short>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<unsigned char>*)
   {
      ::ROOT::Internal::TImpProxy<unsigned char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<unsigned char>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<unsigned char>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TImpProxy<unsigned char>","ROOT::Internal::TImpProxy<UChar_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<unsigned char>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<unsigned char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<unsigned char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<unsigned char>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEintgR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEintgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEintgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEintgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEintgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<int>*)
   {
      ::ROOT::Internal::TImpProxy<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<int>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<int>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEintgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEintgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEintgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEintgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TImpProxy<int>","ROOT::Internal::TImpProxy<Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<int>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylElonggR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylElonggR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylElonggR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylElonggR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylElonggR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylElonggR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<long>*)
   {
      ::ROOT::Internal::TImpProxy<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<long>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylElonggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<long>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylElonggR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylElonggR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylElonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylElonggR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylElonggR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TImpProxy<long>","ROOT::Internal::TImpProxy<Long_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<long>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<long>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylElonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylELong64_tgR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylELong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<Long64_t>*)
   {
      ::ROOT::Internal::TImpProxy<Long64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<Long64_t>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<Long64_t>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylELong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylELong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylELong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylELong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylELong64_tgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<Long64_t>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<Long64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<Long64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<Long64_t>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEshortgR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEshortgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEshortgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEshortgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEshortgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEshortgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<short>*)
   {
      ::ROOT::Internal::TImpProxy<short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<short>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<short>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<short>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEshortgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEshortgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEshortgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEshortgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEshortgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TImpProxy<short>","ROOT::Internal::TImpProxy<Short_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<short>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<short>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<short>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<short>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEchargR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEchargR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEchargR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEchargR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEchargR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<char>*)
   {
      ::ROOT::Internal::TImpProxy<char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<char>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEchargR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<char>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEchargR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEchargR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEchargR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEchargR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TImpProxy<char>","ROOT::Internal::TImpProxy<Char_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<char>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<char>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTImpProxylEboolgR_Dictionary();
   static void ROOTcLcLInternalcLcLTImpProxylEboolgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTImpProxylEboolgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEboolgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTImpProxylEboolgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEboolgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TImpProxy<bool>*)
   {
      ::ROOT::Internal::TImpProxy<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TImpProxy<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TImpProxy<bool>", "TBranchProxy.h", 451,
                  typeid(::ROOT::Internal::TImpProxy<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTImpProxylEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TImpProxy<bool>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTImpProxylEboolgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTImpProxylEboolgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTImpProxylEboolgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTImpProxylEboolgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTImpProxylEboolgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TImpProxy<bool>","ROOT::Internal::TImpProxy<Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TImpProxy<bool>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TImpProxy<bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTImpProxylEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TImpProxy<bool>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTImpProxylEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTImpProxylEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<UInt_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<UShort_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<UChar_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Int_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Bool_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Char_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >*)
   {
      ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >", "TBranchProxy.h", 512,
                  typeid(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >","ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Short_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEdoublegR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<double>*)
   {
      ::ROOT::Internal::TClaImpProxy<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<double>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<double>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<double>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEfloatgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<float>*)
   {
      ::ROOT::Internal::TClaImpProxy<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<float>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<float>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<float>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<unsigned int>*)
   {
      ::ROOT::Internal::TClaImpProxy<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<unsigned int>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<unsigned int>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaImpProxy<unsigned int>","ROOT::Internal::TClaImpProxy<UInt_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<unsigned int>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<unsigned long>*)
   {
      ::ROOT::Internal::TClaImpProxy<unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<unsigned long>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<unsigned long>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaImpProxy<unsigned long>","ROOT::Internal::TClaImpProxy<ULong_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<unsigned long>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<unsigned long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<unsigned long>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<ULong64_t>*)
   {
      ::ROOT::Internal::TClaImpProxy<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<ULong64_t>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<ULong64_t>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<ULong64_t>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<ULong64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<ULong64_t>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<unsigned short>*)
   {
      ::ROOT::Internal::TClaImpProxy<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<unsigned short>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<unsigned short>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaImpProxy<unsigned short>","ROOT::Internal::TClaImpProxy<UShort_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<unsigned short>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<unsigned short>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<unsigned short>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<unsigned char>*)
   {
      ::ROOT::Internal::TClaImpProxy<unsigned char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<unsigned char>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<unsigned char>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaImpProxy<unsigned char>","ROOT::Internal::TClaImpProxy<UChar_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<unsigned char>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<unsigned char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<unsigned char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<unsigned char>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEintgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEintgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEintgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEintgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEintgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<int>*)
   {
      ::ROOT::Internal::TClaImpProxy<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<int>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<int>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEintgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEintgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEintgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEintgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaImpProxy<int>","ROOT::Internal::TClaImpProxy<Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<int>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylElonggR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylElonggR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylElonggR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylElonggR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylElonggR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylElonggR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<long>*)
   {
      ::ROOT::Internal::TClaImpProxy<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<long>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylElonggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<long>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylElonggR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylElonggR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylElonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylElonggR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylElonggR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaImpProxy<long>","ROOT::Internal::TClaImpProxy<Long_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<long>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<long>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylElonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<Long64_t>*)
   {
      ::ROOT::Internal::TClaImpProxy<Long64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<Long64_t>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<Long64_t>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<Long64_t>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<Long64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<Long64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<Long64_t>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEshortgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEshortgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<short>*)
   {
      ::ROOT::Internal::TClaImpProxy<short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<short>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<short>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<short>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEshortgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEshortgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEshortgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEshortgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEshortgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaImpProxy<short>","ROOT::Internal::TClaImpProxy<Short_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<short>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<short>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<short>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<short>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEchargR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEchargR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEchargR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEchargR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEchargR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<char>*)
   {
      ::ROOT::Internal::TClaImpProxy<char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<char>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEchargR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<char>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEchargR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEchargR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEchargR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEchargR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaImpProxy<char>","ROOT::Internal::TClaImpProxy<Char_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<char>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<char>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEboolgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaImpProxylEboolgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaImpProxy<bool>*)
   {
      ::ROOT::Internal::TClaImpProxy<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaImpProxy<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaImpProxy<bool>", "TBranchProxy.h", 550,
                  typeid(::ROOT::Internal::TClaImpProxy<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaImpProxylEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaImpProxy<bool>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaImpProxylEboolgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaImpProxylEboolgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaImpProxylEboolgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEboolgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaImpProxylEboolgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaImpProxy<bool>","ROOT::Internal::TClaImpProxy<Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaImpProxy<bool>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaImpProxy<bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaImpProxylEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaImpProxy<bool>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaImpProxylEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaImpProxylEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<UInt_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<UShort_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<UChar_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Int_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Char_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Bool_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >*)
   {
      ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >", "TBranchProxy.h", 653,
                  typeid(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >","ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Short_t> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor(void *p);
   static void destruct_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor(void *p);
   static void streamer_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TBranchProxyClassDescriptor*)
   {
      ::ROOT::Internal::TBranchProxyClassDescriptor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Internal::TBranchProxyClassDescriptor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TBranchProxyClassDescriptor", ::ROOT::Internal::TBranchProxyClassDescriptor::Class_Version(), "TBranchProxyClassDescriptor.h", 26,
                  typeid(::ROOT::Internal::TBranchProxyClassDescriptor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Internal::TBranchProxyClassDescriptor::Dictionary, isa_proxy, 16,
                  sizeof(::ROOT::Internal::TBranchProxyClassDescriptor) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor);
      instance.SetStreamerFunc(&streamer_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TBranchProxyClassDescriptor*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TBranchProxyClassDescriptor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyClassDescriptor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLInternalcLcLTBranchProxyDescriptor(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTBranchProxyDescriptor(void *p);
   static void destruct_ROOTcLcLInternalcLcLTBranchProxyDescriptor(void *p);
   static void streamer_ROOTcLcLInternalcLcLTBranchProxyDescriptor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TBranchProxyDescriptor*)
   {
      ::ROOT::Internal::TBranchProxyDescriptor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Internal::TBranchProxyDescriptor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TBranchProxyDescriptor", ::ROOT::Internal::TBranchProxyDescriptor::Class_Version(), "TBranchProxyDescriptor.h", 21,
                  typeid(::ROOT::Internal::TBranchProxyDescriptor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Internal::TBranchProxyDescriptor::Dictionary, isa_proxy, 16,
                  sizeof(::ROOT::Internal::TBranchProxyDescriptor) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTBranchProxyDescriptor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTBranchProxyDescriptor);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTBranchProxyDescriptor);
      instance.SetStreamerFunc(&streamer_ROOTcLcLInternalcLcLTBranchProxyDescriptor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TBranchProxyDescriptor*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TBranchProxyDescriptor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyDescriptor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TChainIndex(void *p = 0);
   static void *newArray_TChainIndex(Long_t size, void *p);
   static void delete_TChainIndex(void *p);
   static void deleteArray_TChainIndex(void *p);
   static void destruct_TChainIndex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TChainIndex*)
   {
      ::TChainIndex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TChainIndex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TChainIndex", ::TChainIndex::Class_Version(), "TChainIndex.h", 39,
                  typeid(::TChainIndex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TChainIndex::Dictionary, isa_proxy, 4,
                  sizeof(::TChainIndex) );
      instance.SetNew(&new_TChainIndex);
      instance.SetNewArray(&newArray_TChainIndex);
      instance.SetDelete(&delete_TChainIndex);
      instance.SetDeleteArray(&deleteArray_TChainIndex);
      instance.SetDestructor(&destruct_TChainIndex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TChainIndex*)
   {
      return GenerateInitInstanceLocal((::TChainIndex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TChainIndex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TChainIndexcLcLTChainIndexEntry_Dictionary();
   static void TChainIndexcLcLTChainIndexEntry_TClassManip(TClass*);
   static void *new_TChainIndexcLcLTChainIndexEntry(void *p = 0);
   static void *newArray_TChainIndexcLcLTChainIndexEntry(Long_t size, void *p);
   static void delete_TChainIndexcLcLTChainIndexEntry(void *p);
   static void deleteArray_TChainIndexcLcLTChainIndexEntry(void *p);
   static void destruct_TChainIndexcLcLTChainIndexEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TChainIndex::TChainIndexEntry*)
   {
      ::TChainIndex::TChainIndexEntry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TChainIndex::TChainIndexEntry));
      static ::ROOT::TGenericClassInfo 
         instance("TChainIndex::TChainIndexEntry", "TChainIndex.h", 42,
                  typeid(::TChainIndex::TChainIndexEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TChainIndexcLcLTChainIndexEntry_Dictionary, isa_proxy, 4,
                  sizeof(::TChainIndex::TChainIndexEntry) );
      instance.SetNew(&new_TChainIndexcLcLTChainIndexEntry);
      instance.SetNewArray(&newArray_TChainIndexcLcLTChainIndexEntry);
      instance.SetDelete(&delete_TChainIndexcLcLTChainIndexEntry);
      instance.SetDeleteArray(&deleteArray_TChainIndexcLcLTChainIndexEntry);
      instance.SetDestructor(&destruct_TChainIndexcLcLTChainIndexEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TChainIndex::TChainIndexEntry*)
   {
      return GenerateInitInstanceLocal((::TChainIndex::TChainIndexEntry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TChainIndex::TChainIndexEntry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TChainIndexcLcLTChainIndexEntry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TChainIndex::TChainIndexEntry*)0x0)->GetClass();
      TChainIndexcLcLTChainIndexEntry_TClassManip(theClass);
   return theClass;
   }

   static void TChainIndexcLcLTChainIndexEntry_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TFileDrawMap(void *p = 0);
   static void *newArray_TFileDrawMap(Long_t size, void *p);
   static void delete_TFileDrawMap(void *p);
   static void deleteArray_TFileDrawMap(void *p);
   static void destruct_TFileDrawMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileDrawMap*)
   {
      ::TFileDrawMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileDrawMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFileDrawMap", ::TFileDrawMap::Class_Version(), "TFileDrawMap.h", 32,
                  typeid(::TFileDrawMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileDrawMap::Dictionary, isa_proxy, 4,
                  sizeof(::TFileDrawMap) );
      instance.SetNew(&new_TFileDrawMap);
      instance.SetNewArray(&newArray_TFileDrawMap);
      instance.SetDelete(&delete_TFileDrawMap);
      instance.SetDeleteArray(&deleteArray_TFileDrawMap);
      instance.SetDestructor(&destruct_TFileDrawMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileDrawMap*)
   {
      return GenerateInitInstanceLocal((::TFileDrawMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFileDrawMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTFriendProxy_Dictionary();
   static void ROOTcLcLInternalcLcLTFriendProxy_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLTFriendProxy(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTFriendProxy(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTFriendProxy(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTFriendProxy(void *p);
   static void destruct_ROOTcLcLInternalcLcLTFriendProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TFriendProxy*)
   {
      ::ROOT::Internal::TFriendProxy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TFriendProxy));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TFriendProxy", "TFriendProxy.h", 22,
                  typeid(::ROOT::Internal::TFriendProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTFriendProxy_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TFriendProxy) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTFriendProxy);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTFriendProxy);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTFriendProxy);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTFriendProxy);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTFriendProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TFriendProxy*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TFriendProxy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TFriendProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTFriendProxy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TFriendProxy*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTFriendProxy_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTFriendProxy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLInternalcLcLTFriendProxyDescriptor(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTFriendProxyDescriptor(void *p);
   static void destruct_ROOTcLcLInternalcLcLTFriendProxyDescriptor(void *p);
   static void streamer_ROOTcLcLInternalcLcLTFriendProxyDescriptor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TFriendProxyDescriptor*)
   {
      ::ROOT::Internal::TFriendProxyDescriptor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Internal::TFriendProxyDescriptor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TFriendProxyDescriptor", ::ROOT::Internal::TFriendProxyDescriptor::Class_Version(), "TFriendProxyDescriptor.h", 22,
                  typeid(::ROOT::Internal::TFriendProxyDescriptor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Internal::TFriendProxyDescriptor::Dictionary, isa_proxy, 16,
                  sizeof(::ROOT::Internal::TFriendProxyDescriptor) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTFriendProxyDescriptor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTFriendProxyDescriptor);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTFriendProxyDescriptor);
      instance.SetStreamerFunc(&streamer_ROOTcLcLInternalcLcLTFriendProxyDescriptor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TFriendProxyDescriptor*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TFriendProxyDescriptor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TFriendProxyDescriptor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTTreeReaderValueBase_Dictionary();
   static void ROOTcLcLInternalcLcLTTreeReaderValueBase_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLTTreeReaderValueBase(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTTreeReaderValueBase(void *p);
   static void destruct_ROOTcLcLInternalcLcLTTreeReaderValueBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TTreeReaderValueBase*)
   {
      ::ROOT::Internal::TTreeReaderValueBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TTreeReaderValueBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TTreeReaderValueBase", "TTreeReaderValue.h", 39,
                  typeid(::ROOT::Internal::TTreeReaderValueBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTTreeReaderValueBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TTreeReaderValueBase) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTTreeReaderValueBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTTreeReaderValueBase);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTTreeReaderValueBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TTreeReaderValueBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TTreeReaderValueBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TTreeReaderValueBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTTreeReaderValueBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TTreeReaderValueBase*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTTreeReaderValueBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTTreeReaderValueBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLInternalcLcLTNamedBranchProxy(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLTNamedBranchProxy(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLTNamedBranchProxy(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTNamedBranchProxy(void *p);
   static void destruct_ROOTcLcLInternalcLcLTNamedBranchProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TNamedBranchProxy*)
   {
      ::ROOT::Internal::TNamedBranchProxy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Internal::TNamedBranchProxy >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TNamedBranchProxy", ::ROOT::Internal::TNamedBranchProxy::Class_Version(), "TTreeReaderUtils.h", 41,
                  typeid(::ROOT::Internal::TNamedBranchProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Internal::TNamedBranchProxy::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TNamedBranchProxy) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLTNamedBranchProxy);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLTNamedBranchProxy);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTNamedBranchProxy);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTNamedBranchProxy);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTNamedBranchProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TNamedBranchProxy*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TNamedBranchProxy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TNamedBranchProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeReader(void *p = 0);
   static void *newArray_TTreeReader(Long_t size, void *p);
   static void delete_TTreeReader(void *p);
   static void deleteArray_TTreeReader(void *p);
   static void destruct_TTreeReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeReader*)
   {
      ::TTreeReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeReader", ::TTreeReader::Class_Version(), "TTreeReader.h", 42,
                  typeid(::TTreeReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeReader::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeReader) );
      instance.SetNew(&new_TTreeReader);
      instance.SetNewArray(&newArray_TTreeReader);
      instance.SetDelete(&delete_TTreeReader);
      instance.SetDeleteArray(&deleteArray_TTreeReader);
      instance.SetDestructor(&destruct_TTreeReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeReader*)
   {
      return GenerateInitInstanceLocal((::TTreeReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSelectorDraw(void *p = 0);
   static void *newArray_TSelectorDraw(Long_t size, void *p);
   static void delete_TSelectorDraw(void *p);
   static void deleteArray_TSelectorDraw(void *p);
   static void destruct_TSelectorDraw(void *p);
   static void streamer_TSelectorDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSelectorDraw*)
   {
      ::TSelectorDraw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSelectorDraw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSelectorDraw", ::TSelectorDraw::Class_Version(), "TSelectorDraw.h", 31,
                  typeid(::TSelectorDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSelectorDraw::Dictionary, isa_proxy, 16,
                  sizeof(::TSelectorDraw) );
      instance.SetNew(&new_TSelectorDraw);
      instance.SetNewArray(&newArray_TSelectorDraw);
      instance.SetDelete(&delete_TSelectorDraw);
      instance.SetDeleteArray(&deleteArray_TSelectorDraw);
      instance.SetDestructor(&destruct_TSelectorDraw);
      instance.SetStreamerFunc(&streamer_TSelectorDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSelectorDraw*)
   {
      return GenerateInitInstanceLocal((::TSelectorDraw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSelectorDraw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSelectorEntries(void *p = 0);
   static void *newArray_TSelectorEntries(Long_t size, void *p);
   static void delete_TSelectorEntries(void *p);
   static void deleteArray_TSelectorEntries(void *p);
   static void destruct_TSelectorEntries(void *p);
   static void streamer_TSelectorEntries(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSelectorEntries*)
   {
      ::TSelectorEntries *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSelectorEntries >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSelectorEntries", ::TSelectorEntries::Class_Version(), "TSelectorEntries.h", 34,
                  typeid(::TSelectorEntries), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSelectorEntries::Dictionary, isa_proxy, 16,
                  sizeof(::TSelectorEntries) );
      instance.SetNew(&new_TSelectorEntries);
      instance.SetNewArray(&newArray_TSelectorEntries);
      instance.SetDelete(&delete_TSelectorEntries);
      instance.SetDeleteArray(&deleteArray_TSelectorEntries);
      instance.SetDestructor(&destruct_TSelectorEntries);
      instance.SetStreamerFunc(&streamer_TSelectorEntries);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSelectorEntries*)
   {
      return GenerateInitInstanceLocal((::TSelectorEntries*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSelectorEntries*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TSimpleAnalysis_Dictionary();
   static void TSimpleAnalysis_TClassManip(TClass*);
   static void delete_TSimpleAnalysis(void *p);
   static void deleteArray_TSimpleAnalysis(void *p);
   static void destruct_TSimpleAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSimpleAnalysis*)
   {
      ::TSimpleAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TSimpleAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("TSimpleAnalysis", "TSimpleAnalysis.h", 33,
                  typeid(::TSimpleAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TSimpleAnalysis_Dictionary, isa_proxy, 4,
                  sizeof(::TSimpleAnalysis) );
      instance.SetDelete(&delete_TSimpleAnalysis);
      instance.SetDeleteArray(&deleteArray_TSimpleAnalysis);
      instance.SetDestructor(&destruct_TSimpleAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSimpleAnalysis*)
   {
      return GenerateInitInstanceLocal((::TSimpleAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSimpleAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TSimpleAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TSimpleAnalysis*)0x0)->GetClass();
      TSimpleAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void TSimpleAnalysis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeDrawArgsParser(void *p = 0);
   static void *newArray_TTreeDrawArgsParser(Long_t size, void *p);
   static void delete_TTreeDrawArgsParser(void *p);
   static void deleteArray_TTreeDrawArgsParser(void *p);
   static void destruct_TTreeDrawArgsParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeDrawArgsParser*)
   {
      ::TTreeDrawArgsParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeDrawArgsParser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeDrawArgsParser", ::TTreeDrawArgsParser::Class_Version(), "TTreeDrawArgsParser.h", 29,
                  typeid(::TTreeDrawArgsParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeDrawArgsParser::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeDrawArgsParser) );
      instance.SetNew(&new_TTreeDrawArgsParser);
      instance.SetNewArray(&newArray_TTreeDrawArgsParser);
      instance.SetDelete(&delete_TTreeDrawArgsParser);
      instance.SetDeleteArray(&deleteArray_TTreeDrawArgsParser);
      instance.SetDestructor(&destruct_TTreeDrawArgsParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeDrawArgsParser*)
   {
      return GenerateInitInstanceLocal((::TTreeDrawArgsParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeDrawArgsParser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeFormula(void *p = 0);
   static void *newArray_TTreeFormula(Long_t size, void *p);
   static void delete_TTreeFormula(void *p);
   static void deleteArray_TTreeFormula(void *p);
   static void destruct_TTreeFormula(void *p);
   static void streamer_TTreeFormula(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeFormula*)
   {
      ::TTreeFormula *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeFormula >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeFormula", ::TTreeFormula::Class_Version(), "TTreeFormula.h", 58,
                  typeid(::TTreeFormula), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeFormula::Dictionary, isa_proxy, 17,
                  sizeof(::TTreeFormula) );
      instance.SetNew(&new_TTreeFormula);
      instance.SetNewArray(&newArray_TTreeFormula);
      instance.SetDelete(&delete_TTreeFormula);
      instance.SetDeleteArray(&deleteArray_TTreeFormula);
      instance.SetDestructor(&destruct_TTreeFormula);
      instance.SetStreamerFunc(&streamer_TTreeFormula);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeFormula*)
   {
      return GenerateInitInstanceLocal((::TTreeFormula*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeFormula*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeFormulaManager(void *p = 0);
   static void streamer_TTreeFormulaManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeFormulaManager*)
   {
      ::TTreeFormulaManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeFormulaManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeFormulaManager", ::TTreeFormulaManager::Class_Version(), "TTreeFormulaManager.h", 32,
                  typeid(::TTreeFormulaManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeFormulaManager::Dictionary, isa_proxy, 16,
                  sizeof(::TTreeFormulaManager) );
      instance.SetNew(&new_TTreeFormulaManager);
      instance.SetStreamerFunc(&streamer_TTreeFormulaManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeFormulaManager*)
   {
      return GenerateInitInstanceLocal((::TTreeFormulaManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeFormulaManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeIndex(void *p = 0);
   static void *newArray_TTreeIndex(Long_t size, void *p);
   static void delete_TTreeIndex(void *p);
   static void deleteArray_TTreeIndex(void *p);
   static void destruct_TTreeIndex(void *p);
   static void streamer_TTreeIndex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeIndex*)
   {
      ::TTreeIndex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeIndex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeIndex", ::TTreeIndex::Class_Version(), "TTreeIndex.h", 28,
                  typeid(::TTreeIndex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeIndex::Dictionary, isa_proxy, 17,
                  sizeof(::TTreeIndex) );
      instance.SetNew(&new_TTreeIndex);
      instance.SetNewArray(&newArray_TTreeIndex);
      instance.SetDelete(&delete_TTreeIndex);
      instance.SetDeleteArray(&deleteArray_TTreeIndex);
      instance.SetDestructor(&destruct_TTreeIndex);
      instance.SetStreamerFunc(&streamer_TTreeIndex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeIndex*)
   {
      return GenerateInitInstanceLocal((::TTreeIndex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeIndex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreePerfStats(void *p = 0);
   static void *newArray_TTreePerfStats(Long_t size, void *p);
   static void delete_TTreePerfStats(void *p);
   static void deleteArray_TTreePerfStats(void *p);
   static void destruct_TTreePerfStats(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreePerfStats*)
   {
      ::TTreePerfStats *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreePerfStats >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreePerfStats", ::TTreePerfStats::Class_Version(), "TTreePerfStats.h", 36,
                  typeid(::TTreePerfStats), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreePerfStats::Dictionary, isa_proxy, 4,
                  sizeof(::TTreePerfStats) );
      instance.SetNew(&new_TTreePerfStats);
      instance.SetNewArray(&newArray_TTreePerfStats);
      instance.SetDelete(&delete_TTreePerfStats);
      instance.SetDeleteArray(&deleteArray_TTreePerfStats);
      instance.SetDestructor(&destruct_TTreePerfStats);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreePerfStats*)
   {
      return GenerateInitInstanceLocal((::TTreePerfStats*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreePerfStats*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreePlayer(void *p = 0);
   static void *newArray_TTreePlayer(Long_t size, void *p);
   static void delete_TTreePlayer(void *p);
   static void deleteArray_TTreePlayer(void *p);
   static void destruct_TTreePlayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreePlayer*)
   {
      ::TTreePlayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreePlayer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreePlayer", ::TTreePlayer::Class_Version(), "TTreePlayer.h", 37,
                  typeid(::TTreePlayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreePlayer::Dictionary, isa_proxy, 4,
                  sizeof(::TTreePlayer) );
      instance.SetNew(&new_TTreePlayer);
      instance.SetNewArray(&newArray_TTreePlayer);
      instance.SetDelete(&delete_TTreePlayer);
      instance.SetDeleteArray(&deleteArray_TTreePlayer);
      instance.SetDestructor(&destruct_TTreePlayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreePlayer*)
   {
      return GenerateInitInstanceLocal((::TTreePlayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreePlayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLTTreeReaderArrayBase_Dictionary();
   static void ROOTcLcLInternalcLcLTTreeReaderArrayBase_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLTTreeReaderArrayBase(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTTreeReaderArrayBase(void *p);
   static void destruct_ROOTcLcLInternalcLcLTTreeReaderArrayBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::TTreeReaderArrayBase*)
   {
      ::ROOT::Internal::TTreeReaderArrayBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::TTreeReaderArrayBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::TTreeReaderArrayBase", "TTreeReaderArray.h", 31,
                  typeid(::ROOT::Internal::TTreeReaderArrayBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLTTreeReaderArrayBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::TTreeReaderArrayBase) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTTreeReaderArrayBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTTreeReaderArrayBase);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTTreeReaderArrayBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::TTreeReaderArrayBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::TTreeReaderArrayBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::TTreeReaderArrayBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLTTreeReaderArrayBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TTreeReaderArrayBase*)0x0)->GetClass();
      ROOTcLcLInternalcLcLTTreeReaderArrayBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLTTreeReaderArrayBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeTableInterface(void *p = 0);
   static void *newArray_TTreeTableInterface(Long_t size, void *p);
   static void delete_TTreeTableInterface(void *p);
   static void deleteArray_TTreeTableInterface(void *p);
   static void destruct_TTreeTableInterface(void *p);
   static void streamer_TTreeTableInterface(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeTableInterface*)
   {
      ::TTreeTableInterface *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeTableInterface >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeTableInterface", ::TTreeTableInterface::Class_Version(), "TTreeTableInterface.h", 25,
                  typeid(::TTreeTableInterface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeTableInterface::Dictionary, isa_proxy, 16,
                  sizeof(::TTreeTableInterface) );
      instance.SetNew(&new_TTreeTableInterface);
      instance.SetNewArray(&newArray_TTreeTableInterface);
      instance.SetDelete(&delete_TTreeTableInterface);
      instance.SetDeleteArray(&deleteArray_TTreeTableInterface);
      instance.SetDestructor(&destruct_TTreeTableInterface);
      instance.SetStreamerFunc(&streamer_TTreeTableInterface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeTableInterface*)
   {
      return GenerateInitInstanceLocal((::TTreeTableInterface*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeTableInterface*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLTDFcLcLTLoopManager_Dictionary();
   static void ROOTcLcLDetailcLcLTDFcLcLTLoopManager_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLTDFcLcLTLoopManager(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLTDFcLcLTLoopManager(void *p);
   static void destruct_ROOTcLcLDetailcLcLTDFcLcLTLoopManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::TDF::TLoopManager*)
   {
      ::ROOT::Detail::TDF::TLoopManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::TDF::TLoopManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::TDF::TLoopManager", "ROOT/TDFNodes.hxx", 50,
                  typeid(::ROOT::Detail::TDF::TLoopManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLTDFcLcLTLoopManager_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::TDF::TLoopManager) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLTDFcLcLTLoopManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLTDFcLcLTLoopManager);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLTDFcLcLTLoopManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::TDF::TLoopManager*)
   {
      return GenerateInitInstanceLocal((::ROOT::Detail::TDF::TLoopManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Detail::TDF::TLoopManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLTDFcLcLTLoopManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Detail::TDF::TLoopManager*)0x0)->GetClass();
      ROOTcLcLDetailcLcLTDFcLcLTLoopManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLTDFcLcLTLoopManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>*)
   {
      ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>", "ROOT/TDFInterface.hxx", 93,
                  typeid(::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>*)
   {
      ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>", "ROOT/TDFInterface.hxx", 93,
                  typeid(::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLTDataFrame_Dictionary();
   static void ROOTcLcLExperimentalcLcLTDataFrame_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLTDataFrame(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLTDataFrame(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLTDataFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::TDataFrame*)
   {
      ::ROOT::Experimental::TDataFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::TDataFrame));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::TDataFrame", "ROOT/TDataFrame.hxx", 36,
                  typeid(::ROOT::Experimental::TDataFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLTDataFrame_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Experimental::TDataFrame) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLTDataFrame);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLTDataFrame);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLTDataFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::TDataFrame*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::TDataFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::TDataFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLTDataFrame_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TDataFrame*)0x0)->GetClass();
      ROOTcLcLExperimentalcLcLTDataFrame_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLTDataFrame_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLTTreeProcessorMT_Dictionary();
   static void ROOTcLcLTTreeProcessorMT_TClassManip(TClass*);
   static void delete_ROOTcLcLTTreeProcessorMT(void *p);
   static void deleteArray_ROOTcLcLTTreeProcessorMT(void *p);
   static void destruct_ROOTcLcLTTreeProcessorMT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::TTreeProcessorMT*)
   {
      ::ROOT::TTreeProcessorMT *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::TTreeProcessorMT));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::TTreeProcessorMT", "ROOT/TTreeProcessorMT.hxx", 273,
                  typeid(::ROOT::TTreeProcessorMT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLTTreeProcessorMT_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::TTreeProcessorMT) );
      instance.SetDelete(&delete_ROOTcLcLTTreeProcessorMT);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLTTreeProcessorMT);
      instance.SetDestructor(&destruct_ROOTcLcLTTreeProcessorMT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::TTreeProcessorMT*)
   {
      return GenerateInitInstanceLocal((::ROOT::TTreeProcessorMT*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::TTreeProcessorMT*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLTTreeProcessorMT_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::TTreeProcessorMT*)0x0)->GetClass();
      ROOTcLcLTTreeProcessorMT_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLTTreeProcessorMT_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
atomic_TClass_ptr TBranchProxyClassDescriptor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBranchProxyClassDescriptor::Class_Name()
{
   return "ROOT::Internal::TBranchProxyClassDescriptor";
}

//______________________________________________________________________________
const char *TBranchProxyClassDescriptor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyClassDescriptor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBranchProxyClassDescriptor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyClassDescriptor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBranchProxyClassDescriptor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyClassDescriptor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBranchProxyClassDescriptor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyClassDescriptor*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
atomic_TClass_ptr TBranchProxyDescriptor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBranchProxyDescriptor::Class_Name()
{
   return "ROOT::Internal::TBranchProxyDescriptor";
}

//______________________________________________________________________________
const char *TBranchProxyDescriptor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyDescriptor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBranchProxyDescriptor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyDescriptor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBranchProxyDescriptor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyDescriptor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBranchProxyDescriptor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TBranchProxyDescriptor*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
//______________________________________________________________________________
atomic_TClass_ptr TChainIndex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TChainIndex::Class_Name()
{
   return "TChainIndex";
}

//______________________________________________________________________________
const char *TChainIndex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TChainIndex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TChainIndex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TChainIndex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TChainIndex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TChainIndex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TChainIndex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TChainIndex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileDrawMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileDrawMap::Class_Name()
{
   return "TFileDrawMap";
}

//______________________________________________________________________________
const char *TFileDrawMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileDrawMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFileDrawMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileDrawMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileDrawMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileDrawMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileDrawMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileDrawMap*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
atomic_TClass_ptr TFriendProxyDescriptor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFriendProxyDescriptor::Class_Name()
{
   return "ROOT::Internal::TFriendProxyDescriptor";
}

//______________________________________________________________________________
const char *TFriendProxyDescriptor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TFriendProxyDescriptor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFriendProxyDescriptor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TFriendProxyDescriptor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFriendProxyDescriptor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TFriendProxyDescriptor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFriendProxyDescriptor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TFriendProxyDescriptor*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
atomic_TClass_ptr TNamedBranchProxy::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNamedBranchProxy::Class_Name()
{
   return "ROOT::Internal::TNamedBranchProxy";
}

//______________________________________________________________________________
const char *TNamedBranchProxy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TNamedBranchProxy*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNamedBranchProxy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TNamedBranchProxy*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNamedBranchProxy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TNamedBranchProxy*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNamedBranchProxy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::TNamedBranchProxy*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
//______________________________________________________________________________
atomic_TClass_ptr TTreeReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeReader::Class_Name()
{
   return "TTreeReader";
}

//______________________________________________________________________________
const char *TTreeReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSelectorDraw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSelectorDraw::Class_Name()
{
   return "TSelectorDraw";
}

//______________________________________________________________________________
const char *TSelectorDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorDraw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSelectorDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorDraw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSelectorDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorDraw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSelectorDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorDraw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSelectorEntries::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSelectorEntries::Class_Name()
{
   return "TSelectorEntries";
}

//______________________________________________________________________________
const char *TSelectorEntries::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorEntries*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSelectorEntries::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSelectorEntries*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSelectorEntries::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorEntries*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSelectorEntries::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSelectorEntries*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeDrawArgsParser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeDrawArgsParser::Class_Name()
{
   return "TTreeDrawArgsParser";
}

//______________________________________________________________________________
const char *TTreeDrawArgsParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeDrawArgsParser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeDrawArgsParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeDrawArgsParser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeDrawArgsParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeDrawArgsParser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeDrawArgsParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeDrawArgsParser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeFormula::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeFormula::Class_Name()
{
   return "TTreeFormula";
}

//______________________________________________________________________________
const char *TTreeFormula::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeFormula*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeFormula::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeFormula*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeFormula::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeFormula*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeFormula::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeFormula*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeFormulaManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeFormulaManager::Class_Name()
{
   return "TTreeFormulaManager";
}

//______________________________________________________________________________
const char *TTreeFormulaManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeFormulaManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeFormulaManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeFormulaManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeFormulaManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeFormulaManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeFormulaManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeFormulaManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeIndex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeIndex::Class_Name()
{
   return "TTreeIndex";
}

//______________________________________________________________________________
const char *TTreeIndex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeIndex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeIndex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeIndex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeIndex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeIndex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeIndex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeIndex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreePerfStats::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreePerfStats::Class_Name()
{
   return "TTreePerfStats";
}

//______________________________________________________________________________
const char *TTreePerfStats::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreePerfStats*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreePerfStats::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreePerfStats*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreePerfStats::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreePerfStats*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreePerfStats::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreePerfStats*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreePlayer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreePlayer::Class_Name()
{
   return "TTreePlayer";
}

//______________________________________________________________________________
const char *TTreePlayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreePlayer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreePlayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreePlayer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreePlayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreePlayer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreePlayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreePlayer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeTableInterface::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeTableInterface::Class_Name()
{
   return "TTreeTableInterface";
}

//______________________________________________________________________________
const char *TTreeTableInterface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeTableInterface*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeTableInterface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeTableInterface*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeTableInterface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeTableInterface*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeTableInterface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeTableInterface*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTBranchProxyDirector(void *p) {
      delete ((::ROOT::Internal::TBranchProxyDirector*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTBranchProxyDirector(void *p) {
      delete [] ((::ROOT::Internal::TBranchProxyDirector*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTBranchProxyDirector(void *p) {
      typedef ::ROOT::Internal::TBranchProxyDirector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TBranchProxyDirector

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLDetailcLcLTBranchProxy(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Detail::TBranchProxy : new ::ROOT::Detail::TBranchProxy;
   }
   static void *newArray_ROOTcLcLDetailcLcLTBranchProxy(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Detail::TBranchProxy[nElements] : new ::ROOT::Detail::TBranchProxy[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLTBranchProxy(void *p) {
      delete ((::ROOT::Detail::TBranchProxy*)p);
   }
   static void deleteArray_ROOTcLcLDetailcLcLTBranchProxy(void *p) {
      delete [] ((::ROOT::Detail::TBranchProxy*)p);
   }
   static void destruct_ROOTcLcLDetailcLcLTBranchProxy(void *p) {
      typedef ::ROOT::Detail::TBranchProxy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::TBranchProxy

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<double> : new ::ROOT::Internal::TImpProxy<double>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<double>[nElements] : new ::ROOT::Internal::TImpProxy<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEdoublegR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<double>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEdoublegR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<double>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEdoublegR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<float> : new ::ROOT::Internal::TImpProxy<float>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<float>[nElements] : new ::ROOT::Internal::TImpProxy<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEfloatgR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<float>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEfloatgR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<float>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEfloatgR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<unsigned int> : new ::ROOT::Internal::TImpProxy<unsigned int>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<unsigned int>[nElements] : new ::ROOT::Internal::TImpProxy<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<unsigned int>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<unsigned int>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPintgR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<unsigned long> : new ::ROOT::Internal::TImpProxy<unsigned long>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<unsigned long>[nElements] : new ::ROOT::Internal::TImpProxy<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<unsigned long>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<unsigned long>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPlonggR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<unsigned long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<ULong64_t> : new ::ROOT::Internal::TImpProxy<ULong64_t>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<ULong64_t>[nElements] : new ::ROOT::Internal::TImpProxy<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<ULong64_t>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<ULong64_t>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEULong64_tgR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<ULong64_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<unsigned short> : new ::ROOT::Internal::TImpProxy<unsigned short>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<unsigned short>[nElements] : new ::ROOT::Internal::TImpProxy<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<unsigned short>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<unsigned short>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPshortgR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<unsigned short>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<unsigned char> : new ::ROOT::Internal::TImpProxy<unsigned char>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<unsigned char>[nElements] : new ::ROOT::Internal::TImpProxy<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<unsigned char>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<unsigned char>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEunsignedsPchargR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<unsigned char>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<int> : new ::ROOT::Internal::TImpProxy<int>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<int>[nElements] : new ::ROOT::Internal::TImpProxy<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEintgR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<int>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEintgR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<int>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEintgR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<long> : new ::ROOT::Internal::TImpProxy<long>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<long>[nElements] : new ::ROOT::Internal::TImpProxy<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylElonggR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<long>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylElonggR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<long>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylElonggR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<Long64_t> : new ::ROOT::Internal::TImpProxy<Long64_t>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<Long64_t>[nElements] : new ::ROOT::Internal::TImpProxy<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<Long64_t>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<Long64_t>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylELong64_tgR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<Long64_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<short> : new ::ROOT::Internal::TImpProxy<short>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<short>[nElements] : new ::ROOT::Internal::TImpProxy<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEshortgR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<short>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEshortgR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<short>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEshortgR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<short>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<char> : new ::ROOT::Internal::TImpProxy<char>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<char>[nElements] : new ::ROOT::Internal::TImpProxy<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEchargR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<char>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEchargR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<char>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEchargR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<char>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTImpProxylEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<bool> : new ::ROOT::Internal::TImpProxy<bool>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTImpProxylEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TImpProxy<bool>[nElements] : new ::ROOT::Internal::TImpProxy<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTImpProxylEboolgR(void *p) {
      delete ((::ROOT::Internal::TImpProxy<bool>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTImpProxylEboolgR(void *p) {
      delete [] ((::ROOT::Internal::TImpProxy<bool>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTImpProxylEboolgR(void *p) {
      typedef ::ROOT::Internal::TImpProxy<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TImpProxy<bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<double,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<float,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<int,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<long,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<bool,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<char,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> > : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >[nElements] : new ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TArrayProxy<ROOT::Internal::TArrayType<short,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<double> : new ::ROOT::Internal::TClaImpProxy<double>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<double>[nElements] : new ::ROOT::Internal::TClaImpProxy<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<double>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<double>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEdoublegR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<float> : new ::ROOT::Internal::TClaImpProxy<float>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<float>[nElements] : new ::ROOT::Internal::TClaImpProxy<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<float>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<float>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEfloatgR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<unsigned int> : new ::ROOT::Internal::TClaImpProxy<unsigned int>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<unsigned int>[nElements] : new ::ROOT::Internal::TClaImpProxy<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<unsigned int>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<unsigned int>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPintgR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<unsigned long> : new ::ROOT::Internal::TClaImpProxy<unsigned long>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<unsigned long>[nElements] : new ::ROOT::Internal::TClaImpProxy<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<unsigned long>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<unsigned long>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPlonggR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<unsigned long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<ULong64_t> : new ::ROOT::Internal::TClaImpProxy<ULong64_t>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<ULong64_t>[nElements] : new ::ROOT::Internal::TClaImpProxy<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<ULong64_t>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<ULong64_t>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEULong64_tgR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<ULong64_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<unsigned short> : new ::ROOT::Internal::TClaImpProxy<unsigned short>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<unsigned short>[nElements] : new ::ROOT::Internal::TClaImpProxy<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<unsigned short>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<unsigned short>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPshortgR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<unsigned short>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<unsigned char> : new ::ROOT::Internal::TClaImpProxy<unsigned char>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<unsigned char>[nElements] : new ::ROOT::Internal::TClaImpProxy<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<unsigned char>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<unsigned char>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEunsignedsPchargR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<unsigned char>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<int> : new ::ROOT::Internal::TClaImpProxy<int>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<int>[nElements] : new ::ROOT::Internal::TClaImpProxy<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEintgR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<int>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEintgR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<int>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEintgR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<long> : new ::ROOT::Internal::TClaImpProxy<long>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<long>[nElements] : new ::ROOT::Internal::TClaImpProxy<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylElonggR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<long>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylElonggR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<long>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylElonggR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<Long64_t> : new ::ROOT::Internal::TClaImpProxy<Long64_t>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<Long64_t>[nElements] : new ::ROOT::Internal::TClaImpProxy<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<Long64_t>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<Long64_t>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylELong64_tgR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<Long64_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<short> : new ::ROOT::Internal::TClaImpProxy<short>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<short>[nElements] : new ::ROOT::Internal::TClaImpProxy<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<short>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<short>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEshortgR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<short>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<char> : new ::ROOT::Internal::TClaImpProxy<char>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<char>[nElements] : new ::ROOT::Internal::TClaImpProxy<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEchargR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<char>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEchargR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<char>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEchargR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<char>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<bool> : new ::ROOT::Internal::TClaImpProxy<bool>;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaImpProxy<bool>[nElements] : new ::ROOT::Internal::TClaImpProxy<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(void *p) {
      delete ((::ROOT::Internal::TClaImpProxy<bool>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(void *p) {
      delete [] ((::ROOT::Internal::TClaImpProxy<bool>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaImpProxylEboolgR(void *p) {
      typedef ::ROOT::Internal::TClaImpProxy<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaImpProxy<bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEdoublecO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<double,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEfloatcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<float,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPintcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned int,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPlongcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned long,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEULong64_tcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<ULong64_t,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPshortcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned short,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEunsignedsPcharcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<unsigned char,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEintcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<int,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelElongcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<long,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelELong64_tcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<Long64_t,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEcharcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<char,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEboolcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<bool,0> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> > : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >[nElements] : new ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p) {
      delete ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p) {
      delete [] ((::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTClaArrayProxylEROOTcLcLInternalcLcLTArrayTypelEshortcO0gRsPgR(void *p) {
      typedef ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TClaArrayProxy<ROOT::Internal::TArrayType<short,0> >

namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
void TBranchProxyClassDescriptor::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Internal::TBranchProxyClassDescriptor.

   TNamed::Streamer(R__b);
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor(void *p) {
      delete ((::ROOT::Internal::TBranchProxyClassDescriptor*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor(void *p) {
      delete [] ((::ROOT::Internal::TBranchProxyClassDescriptor*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor(void *p) {
      typedef ::ROOT::Internal::TBranchProxyClassDescriptor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLInternalcLcLTBranchProxyClassDescriptor(TBuffer &buf, void *obj) {
      ((::ROOT::Internal::TBranchProxyClassDescriptor*)obj)->::ROOT::Internal::TBranchProxyClassDescriptor::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Internal::TBranchProxyClassDescriptor

namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
void TBranchProxyDescriptor::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Internal::TBranchProxyDescriptor.

   TNamed::Streamer(R__b);
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTBranchProxyDescriptor(void *p) {
      delete ((::ROOT::Internal::TBranchProxyDescriptor*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTBranchProxyDescriptor(void *p) {
      delete [] ((::ROOT::Internal::TBranchProxyDescriptor*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTBranchProxyDescriptor(void *p) {
      typedef ::ROOT::Internal::TBranchProxyDescriptor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLInternalcLcLTBranchProxyDescriptor(TBuffer &buf, void *obj) {
      ((::ROOT::Internal::TBranchProxyDescriptor*)obj)->::ROOT::Internal::TBranchProxyDescriptor::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Internal::TBranchProxyDescriptor

//______________________________________________________________________________
void TChainIndex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TChainIndex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TChainIndex::Class(),this);
   } else {
      R__b.WriteClassBuffer(TChainIndex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TChainIndex(void *p) {
      return  p ? new(p) ::TChainIndex : new ::TChainIndex;
   }
   static void *newArray_TChainIndex(Long_t nElements, void *p) {
      return p ? new(p) ::TChainIndex[nElements] : new ::TChainIndex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TChainIndex(void *p) {
      delete ((::TChainIndex*)p);
   }
   static void deleteArray_TChainIndex(void *p) {
      delete [] ((::TChainIndex*)p);
   }
   static void destruct_TChainIndex(void *p) {
      typedef ::TChainIndex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TChainIndex

namespace ROOT {
   // Wrappers around operator new
   static void *new_TChainIndexcLcLTChainIndexEntry(void *p) {
      return  p ? new(p) ::TChainIndex::TChainIndexEntry : new ::TChainIndex::TChainIndexEntry;
   }
   static void *newArray_TChainIndexcLcLTChainIndexEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TChainIndex::TChainIndexEntry[nElements] : new ::TChainIndex::TChainIndexEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TChainIndexcLcLTChainIndexEntry(void *p) {
      delete ((::TChainIndex::TChainIndexEntry*)p);
   }
   static void deleteArray_TChainIndexcLcLTChainIndexEntry(void *p) {
      delete [] ((::TChainIndex::TChainIndexEntry*)p);
   }
   static void destruct_TChainIndexcLcLTChainIndexEntry(void *p) {
      typedef ::TChainIndex::TChainIndexEntry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TChainIndex::TChainIndexEntry

//______________________________________________________________________________
void TFileDrawMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileDrawMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFileDrawMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFileDrawMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFileDrawMap(void *p) {
      return  p ? new(p) ::TFileDrawMap : new ::TFileDrawMap;
   }
   static void *newArray_TFileDrawMap(Long_t nElements, void *p) {
      return p ? new(p) ::TFileDrawMap[nElements] : new ::TFileDrawMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFileDrawMap(void *p) {
      delete ((::TFileDrawMap*)p);
   }
   static void deleteArray_TFileDrawMap(void *p) {
      delete [] ((::TFileDrawMap*)p);
   }
   static void destruct_TFileDrawMap(void *p) {
      typedef ::TFileDrawMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFileDrawMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTFriendProxy(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TFriendProxy : new ::ROOT::Internal::TFriendProxy;
   }
   static void *newArray_ROOTcLcLInternalcLcLTFriendProxy(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::TFriendProxy[nElements] : new ::ROOT::Internal::TFriendProxy[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTFriendProxy(void *p) {
      delete ((::ROOT::Internal::TFriendProxy*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTFriendProxy(void *p) {
      delete [] ((::ROOT::Internal::TFriendProxy*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTFriendProxy(void *p) {
      typedef ::ROOT::Internal::TFriendProxy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TFriendProxy

namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
void TFriendProxyDescriptor::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Internal::TFriendProxyDescriptor.

   TNamed::Streamer(R__b);
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTFriendProxyDescriptor(void *p) {
      delete ((::ROOT::Internal::TFriendProxyDescriptor*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTFriendProxyDescriptor(void *p) {
      delete [] ((::ROOT::Internal::TFriendProxyDescriptor*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTFriendProxyDescriptor(void *p) {
      typedef ::ROOT::Internal::TFriendProxyDescriptor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLInternalcLcLTFriendProxyDescriptor(TBuffer &buf, void *obj) {
      ((::ROOT::Internal::TFriendProxyDescriptor*)obj)->::ROOT::Internal::TFriendProxyDescriptor::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Internal::TFriendProxyDescriptor

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTTreeReaderValueBase(void *p) {
      delete ((::ROOT::Internal::TTreeReaderValueBase*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTTreeReaderValueBase(void *p) {
      delete [] ((::ROOT::Internal::TTreeReaderValueBase*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTTreeReaderValueBase(void *p) {
      typedef ::ROOT::Internal::TTreeReaderValueBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TTreeReaderValueBase

namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
void TNamedBranchProxy::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Internal::TNamedBranchProxy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Internal::TNamedBranchProxy::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Internal::TNamedBranchProxy::Class(),this);
   }
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLTNamedBranchProxy(void *p) {
      return  p ? new(p) ::ROOT::Internal::TNamedBranchProxy : new ::ROOT::Internal::TNamedBranchProxy;
   }
   static void *newArray_ROOTcLcLInternalcLcLTNamedBranchProxy(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Internal::TNamedBranchProxy[nElements] : new ::ROOT::Internal::TNamedBranchProxy[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTNamedBranchProxy(void *p) {
      delete ((::ROOT::Internal::TNamedBranchProxy*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTNamedBranchProxy(void *p) {
      delete [] ((::ROOT::Internal::TNamedBranchProxy*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTNamedBranchProxy(void *p) {
      typedef ::ROOT::Internal::TNamedBranchProxy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TNamedBranchProxy

//______________________________________________________________________________
void TTreeReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeReader(void *p) {
      return  p ? new(p) ::TTreeReader : new ::TTreeReader;
   }
   static void *newArray_TTreeReader(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeReader[nElements] : new ::TTreeReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeReader(void *p) {
      delete ((::TTreeReader*)p);
   }
   static void deleteArray_TTreeReader(void *p) {
      delete [] ((::TTreeReader*)p);
   }
   static void destruct_TTreeReader(void *p) {
      typedef ::TTreeReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeReader

//______________________________________________________________________________
void TSelectorDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSelectorDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TSelector::Streamer(R__b);
      R__b >> fTree;
      R__b >> fSelect;
      R__b >> fManager;
      R__b >> fTreeElist;
      R__b >> fMultiplicity;
      R__b >> fDimension;
      R__b >> fSelectedRows;
      R__b >> fOldEstimate;
      R__b >> fForceRead;
      R__b >> fWeight;
      R__b >> fValSize;
      R__b >> fSelectMultiple;
      R__b >> fCleanElist;
      R__b >> fObjEval;
      R__b >> fCurrentSubEntry;
      R__b.CheckByteCount(R__s, R__c, TSelectorDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(TSelectorDraw::IsA(), kTRUE);
      TSelector::Streamer(R__b);
      R__b << fTree;
      R__b << fSelect;
      R__b << fManager;
      R__b << fTreeElist;
      R__b << fMultiplicity;
      R__b << fDimension;
      R__b << fSelectedRows;
      R__b << fOldEstimate;
      R__b << fForceRead;
      R__b << fWeight;
      R__b << fValSize;
      R__b << fSelectMultiple;
      R__b << fCleanElist;
      R__b << fObjEval;
      R__b << fCurrentSubEntry;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSelectorDraw(void *p) {
      return  p ? new(p) ::TSelectorDraw : new ::TSelectorDraw;
   }
   static void *newArray_TSelectorDraw(Long_t nElements, void *p) {
      return p ? new(p) ::TSelectorDraw[nElements] : new ::TSelectorDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSelectorDraw(void *p) {
      delete ((::TSelectorDraw*)p);
   }
   static void deleteArray_TSelectorDraw(void *p) {
      delete [] ((::TSelectorDraw*)p);
   }
   static void destruct_TSelectorDraw(void *p) {
      typedef ::TSelectorDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSelectorDraw(TBuffer &buf, void *obj) {
      ((::TSelectorDraw*)obj)->::TSelectorDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSelectorDraw

//______________________________________________________________________________
void TSelectorEntries::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSelectorEntries.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TSelector::Streamer(R__b);
      R__b >> fOwnInput;
      R__b >> fSelect;
      R__b >> fSelectedRows;
      R__b >> fSelectMultiple;
      R__b.CheckByteCount(R__s, R__c, TSelectorEntries::IsA());
   } else {
      R__c = R__b.WriteVersion(TSelectorEntries::IsA(), kTRUE);
      TSelector::Streamer(R__b);
      R__b << fOwnInput;
      R__b << fSelect;
      R__b << fSelectedRows;
      R__b << fSelectMultiple;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSelectorEntries(void *p) {
      return  p ? new(p) ::TSelectorEntries : new ::TSelectorEntries;
   }
   static void *newArray_TSelectorEntries(Long_t nElements, void *p) {
      return p ? new(p) ::TSelectorEntries[nElements] : new ::TSelectorEntries[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSelectorEntries(void *p) {
      delete ((::TSelectorEntries*)p);
   }
   static void deleteArray_TSelectorEntries(void *p) {
      delete [] ((::TSelectorEntries*)p);
   }
   static void destruct_TSelectorEntries(void *p) {
      typedef ::TSelectorEntries current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSelectorEntries(TBuffer &buf, void *obj) {
      ((::TSelectorEntries*)obj)->::TSelectorEntries::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSelectorEntries

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSimpleAnalysis(void *p) {
      delete ((::TSimpleAnalysis*)p);
   }
   static void deleteArray_TSimpleAnalysis(void *p) {
      delete [] ((::TSimpleAnalysis*)p);
   }
   static void destruct_TSimpleAnalysis(void *p) {
      typedef ::TSimpleAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSimpleAnalysis

//______________________________________________________________________________
void TTreeDrawArgsParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeDrawArgsParser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeDrawArgsParser::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeDrawArgsParser::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeDrawArgsParser(void *p) {
      return  p ? new(p) ::TTreeDrawArgsParser : new ::TTreeDrawArgsParser;
   }
   static void *newArray_TTreeDrawArgsParser(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeDrawArgsParser[nElements] : new ::TTreeDrawArgsParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeDrawArgsParser(void *p) {
      delete ((::TTreeDrawArgsParser*)p);
   }
   static void deleteArray_TTreeDrawArgsParser(void *p) {
      delete [] ((::TTreeDrawArgsParser*)p);
   }
   static void destruct_TTreeDrawArgsParser(void *p) {
      typedef ::TTreeDrawArgsParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeDrawArgsParser

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeFormula(void *p) {
      return  p ? new(p) ::TTreeFormula : new ::TTreeFormula;
   }
   static void *newArray_TTreeFormula(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeFormula[nElements] : new ::TTreeFormula[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeFormula(void *p) {
      delete ((::TTreeFormula*)p);
   }
   static void deleteArray_TTreeFormula(void *p) {
      delete [] ((::TTreeFormula*)p);
   }
   static void destruct_TTreeFormula(void *p) {
      typedef ::TTreeFormula current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTreeFormula(TBuffer &buf, void *obj) {
      ((::TTreeFormula*)obj)->::TTreeFormula::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTreeFormula

//______________________________________________________________________________
void TTreeFormulaManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeFormulaManager.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeFormulaManager(void *p) {
      return  p ? new(p) ::TTreeFormulaManager : new ::TTreeFormulaManager;
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTreeFormulaManager(TBuffer &buf, void *obj) {
      ((::TTreeFormulaManager*)obj)->::TTreeFormulaManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTreeFormulaManager

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeIndex(void *p) {
      return  p ? new(p) ::TTreeIndex : new ::TTreeIndex;
   }
   static void *newArray_TTreeIndex(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeIndex[nElements] : new ::TTreeIndex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeIndex(void *p) {
      delete ((::TTreeIndex*)p);
   }
   static void deleteArray_TTreeIndex(void *p) {
      delete [] ((::TTreeIndex*)p);
   }
   static void destruct_TTreeIndex(void *p) {
      typedef ::TTreeIndex current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTreeIndex(TBuffer &buf, void *obj) {
      ((::TTreeIndex*)obj)->::TTreeIndex::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTreeIndex

//______________________________________________________________________________
void TTreePerfStats::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreePerfStats.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreePerfStats::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreePerfStats::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreePerfStats(void *p) {
      return  p ? new(p) ::TTreePerfStats : new ::TTreePerfStats;
   }
   static void *newArray_TTreePerfStats(Long_t nElements, void *p) {
      return p ? new(p) ::TTreePerfStats[nElements] : new ::TTreePerfStats[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreePerfStats(void *p) {
      delete ((::TTreePerfStats*)p);
   }
   static void deleteArray_TTreePerfStats(void *p) {
      delete [] ((::TTreePerfStats*)p);
   }
   static void destruct_TTreePerfStats(void *p) {
      typedef ::TTreePerfStats current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreePerfStats

//______________________________________________________________________________
void TTreePlayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreePlayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreePlayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreePlayer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreePlayer(void *p) {
      return  p ? new(p) ::TTreePlayer : new ::TTreePlayer;
   }
   static void *newArray_TTreePlayer(Long_t nElements, void *p) {
      return p ? new(p) ::TTreePlayer[nElements] : new ::TTreePlayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreePlayer(void *p) {
      delete ((::TTreePlayer*)p);
   }
   static void deleteArray_TTreePlayer(void *p) {
      delete [] ((::TTreePlayer*)p);
   }
   static void destruct_TTreePlayer(void *p) {
      typedef ::TTreePlayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreePlayer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTTreeReaderArrayBase(void *p) {
      delete ((::ROOT::Internal::TTreeReaderArrayBase*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLTTreeReaderArrayBase(void *p) {
      delete [] ((::ROOT::Internal::TTreeReaderArrayBase*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLTTreeReaderArrayBase(void *p) {
      typedef ::ROOT::Internal::TTreeReaderArrayBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::TTreeReaderArrayBase

//______________________________________________________________________________
void TTreeTableInterface::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeTableInterface.

   TVirtualTableInterface::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeTableInterface(void *p) {
      return  p ? new(p) ::TTreeTableInterface : new ::TTreeTableInterface;
   }
   static void *newArray_TTreeTableInterface(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeTableInterface[nElements] : new ::TTreeTableInterface[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeTableInterface(void *p) {
      delete ((::TTreeTableInterface*)p);
   }
   static void deleteArray_TTreeTableInterface(void *p) {
      delete [] ((::TTreeTableInterface*)p);
   }
   static void destruct_TTreeTableInterface(void *p) {
      typedef ::TTreeTableInterface current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTreeTableInterface(TBuffer &buf, void *obj) {
      ((::TTreeTableInterface*)obj)->::TTreeTableInterface::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTreeTableInterface

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLTDFcLcLTLoopManager(void *p) {
      delete ((::ROOT::Detail::TDF::TLoopManager*)p);
   }
   static void deleteArray_ROOTcLcLDetailcLcLTDFcLcLTLoopManager(void *p) {
      delete [] ((::ROOT::Detail::TDF::TLoopManager*)p);
   }
   static void destruct_ROOTcLcLDetailcLcLTDFcLcLTLoopManager(void *p) {
      typedef ::ROOT::Detail::TDF::TLoopManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::TDF::TLoopManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR(void *p) {
      delete ((::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR(void *p) {
      delete [] ((::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTFilterBasegR(void *p) {
      typedef ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TFilterBase>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR(void *p) {
      delete ((::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR(void *p) {
      delete [] ((::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLTDFcLcLTInterfacelEROOTcLcLDetailcLcLTDFcLcLTCustomColumnBasegR(void *p) {
      typedef ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::TDF::TInterface<ROOT::Detail::TDF::TCustomColumnBase>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLTDataFrame(void *p) {
      delete ((::ROOT::Experimental::TDataFrame*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLTDataFrame(void *p) {
      delete [] ((::ROOT::Experimental::TDataFrame*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLTDataFrame(void *p) {
      typedef ::ROOT::Experimental::TDataFrame current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::TDataFrame

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLTTreeProcessorMT(void *p) {
      delete ((::ROOT::TTreeProcessorMT*)p);
   }
   static void deleteArray_ROOTcLcLTTreeProcessorMT(void *p) {
      delete [] ((::ROOT::TTreeProcessorMT*)p);
   }
   static void destruct_ROOTcLcLTTreeProcessorMT(void *p) {
      typedef ::ROOT::TTreeProcessorMT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::TTreeProcessorMT

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
   static TClass *vectorlETChainIndexcLcLTChainIndexEntrygR_Dictionary();
   static void vectorlETChainIndexcLcLTChainIndexEntrygR_TClassManip(TClass*);
   static void *new_vectorlETChainIndexcLcLTChainIndexEntrygR(void *p = 0);
   static void *newArray_vectorlETChainIndexcLcLTChainIndexEntrygR(Long_t size, void *p);
   static void delete_vectorlETChainIndexcLcLTChainIndexEntrygR(void *p);
   static void deleteArray_vectorlETChainIndexcLcLTChainIndexEntrygR(void *p);
   static void destruct_vectorlETChainIndexcLcLTChainIndexEntrygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TChainIndex::TChainIndexEntry>*)
   {
      vector<TChainIndex::TChainIndexEntry> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TChainIndex::TChainIndexEntry>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TChainIndex::TChainIndexEntry>", -2, "vector", 216,
                  typeid(vector<TChainIndex::TChainIndexEntry>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETChainIndexcLcLTChainIndexEntrygR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TChainIndex::TChainIndexEntry>) );
      instance.SetNew(&new_vectorlETChainIndexcLcLTChainIndexEntrygR);
      instance.SetNewArray(&newArray_vectorlETChainIndexcLcLTChainIndexEntrygR);
      instance.SetDelete(&delete_vectorlETChainIndexcLcLTChainIndexEntrygR);
      instance.SetDeleteArray(&deleteArray_vectorlETChainIndexcLcLTChainIndexEntrygR);
      instance.SetDestructor(&destruct_vectorlETChainIndexcLcLTChainIndexEntrygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TChainIndex::TChainIndexEntry> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TChainIndex::TChainIndexEntry>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETChainIndexcLcLTChainIndexEntrygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TChainIndex::TChainIndexEntry>*)0x0)->GetClass();
      vectorlETChainIndexcLcLTChainIndexEntrygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETChainIndexcLcLTChainIndexEntrygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETChainIndexcLcLTChainIndexEntrygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TChainIndex::TChainIndexEntry> : new vector<TChainIndex::TChainIndexEntry>;
   }
   static void *newArray_vectorlETChainIndexcLcLTChainIndexEntrygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TChainIndex::TChainIndexEntry>[nElements] : new vector<TChainIndex::TChainIndexEntry>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETChainIndexcLcLTChainIndexEntrygR(void *p) {
      delete ((vector<TChainIndex::TChainIndexEntry>*)p);
   }
   static void deleteArray_vectorlETChainIndexcLcLTChainIndexEntrygR(void *p) {
      delete [] ((vector<TChainIndex::TChainIndexEntry>*)p);
   }
   static void destruct_vectorlETChainIndexcLcLTChainIndexEntrygR(void *p) {
      typedef vector<TChainIndex::TChainIndexEntry> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TChainIndex::TChainIndexEntry>

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
   static TClass *maplEstringcOpairlEstringcOstringgRsPgR_Dictionary();
   static void maplEstringcOpairlEstringcOstringgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOpairlEstringcOstringgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOpairlEstringcOstringgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOpairlEstringcOstringgRsPgR(void *p);
   static void deleteArray_maplEstringcOpairlEstringcOstringgRsPgR(void *p);
   static void destruct_maplEstringcOpairlEstringcOstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,pair<string,string> >*)
   {
      map<string,pair<string,string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,pair<string,string> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,pair<string,string> >", -2, "map", 99,
                  typeid(map<string,pair<string,string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOpairlEstringcOstringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,pair<string,string> >) );
      instance.SetNew(&new_maplEstringcOpairlEstringcOstringgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOpairlEstringcOstringgRsPgR);
      instance.SetDelete(&delete_maplEstringcOpairlEstringcOstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOpairlEstringcOstringgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOpairlEstringcOstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,pair<string,string> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,pair<string,string> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOpairlEstringcOstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,pair<string,string> >*)0x0)->GetClass();
      maplEstringcOpairlEstringcOstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOpairlEstringcOstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOpairlEstringcOstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,pair<string,string> > : new map<string,pair<string,string> >;
   }
   static void *newArray_maplEstringcOpairlEstringcOstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,pair<string,string> >[nElements] : new map<string,pair<string,string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOpairlEstringcOstringgRsPgR(void *p) {
      delete ((map<string,pair<string,string> >*)p);
   }
   static void deleteArray_maplEstringcOpairlEstringcOstringgRsPgR(void *p) {
      delete [] ((map<string,pair<string,string> >*)p);
   }
   static void destruct_maplEstringcOpairlEstringcOstringgRsPgR(void *p) {
      typedef map<string,pair<string,string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,pair<string,string> >

namespace ROOT {
   static TClass *listlEROOTcLcLInternalcLcLTFriendProxymUgR_Dictionary();
   static void listlEROOTcLcLInternalcLcLTFriendProxymUgR_TClassManip(TClass*);
   static void *new_listlEROOTcLcLInternalcLcLTFriendProxymUgR(void *p = 0);
   static void *newArray_listlEROOTcLcLInternalcLcLTFriendProxymUgR(Long_t size, void *p);
   static void delete_listlEROOTcLcLInternalcLcLTFriendProxymUgR(void *p);
   static void deleteArray_listlEROOTcLcLInternalcLcLTFriendProxymUgR(void *p);
   static void destruct_listlEROOTcLcLInternalcLcLTFriendProxymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ROOT::Internal::TFriendProxy*>*)
   {
      list<ROOT::Internal::TFriendProxy*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ROOT::Internal::TFriendProxy*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ROOT::Internal::TFriendProxy*>", -2, "list", 503,
                  typeid(list<ROOT::Internal::TFriendProxy*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEROOTcLcLInternalcLcLTFriendProxymUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<ROOT::Internal::TFriendProxy*>) );
      instance.SetNew(&new_listlEROOTcLcLInternalcLcLTFriendProxymUgR);
      instance.SetNewArray(&newArray_listlEROOTcLcLInternalcLcLTFriendProxymUgR);
      instance.SetDelete(&delete_listlEROOTcLcLInternalcLcLTFriendProxymUgR);
      instance.SetDeleteArray(&deleteArray_listlEROOTcLcLInternalcLcLTFriendProxymUgR);
      instance.SetDestructor(&destruct_listlEROOTcLcLInternalcLcLTFriendProxymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ROOT::Internal::TFriendProxy*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<ROOT::Internal::TFriendProxy*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEROOTcLcLInternalcLcLTFriendProxymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<ROOT::Internal::TFriendProxy*>*)0x0)->GetClass();
      listlEROOTcLcLInternalcLcLTFriendProxymUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEROOTcLcLInternalcLcLTFriendProxymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEROOTcLcLInternalcLcLTFriendProxymUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Internal::TFriendProxy*> : new list<ROOT::Internal::TFriendProxy*>;
   }
   static void *newArray_listlEROOTcLcLInternalcLcLTFriendProxymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Internal::TFriendProxy*>[nElements] : new list<ROOT::Internal::TFriendProxy*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEROOTcLcLInternalcLcLTFriendProxymUgR(void *p) {
      delete ((list<ROOT::Internal::TFriendProxy*>*)p);
   }
   static void deleteArray_listlEROOTcLcLInternalcLcLTFriendProxymUgR(void *p) {
      delete [] ((list<ROOT::Internal::TFriendProxy*>*)p);
   }
   static void destruct_listlEROOTcLcLInternalcLcLTFriendProxymUgR(void *p) {
      typedef list<ROOT::Internal::TFriendProxy*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<ROOT::Internal::TFriendProxy*>

namespace ROOT {
   static TClass *listlEROOTcLcLDetailcLcLTBranchProxymUgR_Dictionary();
   static void listlEROOTcLcLDetailcLcLTBranchProxymUgR_TClassManip(TClass*);
   static void *new_listlEROOTcLcLDetailcLcLTBranchProxymUgR(void *p = 0);
   static void *newArray_listlEROOTcLcLDetailcLcLTBranchProxymUgR(Long_t size, void *p);
   static void delete_listlEROOTcLcLDetailcLcLTBranchProxymUgR(void *p);
   static void deleteArray_listlEROOTcLcLDetailcLcLTBranchProxymUgR(void *p);
   static void destruct_listlEROOTcLcLDetailcLcLTBranchProxymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ROOT::Detail::TBranchProxy*>*)
   {
      list<ROOT::Detail::TBranchProxy*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ROOT::Detail::TBranchProxy*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ROOT::Detail::TBranchProxy*>", -2, "list", 503,
                  typeid(list<ROOT::Detail::TBranchProxy*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEROOTcLcLDetailcLcLTBranchProxymUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<ROOT::Detail::TBranchProxy*>) );
      instance.SetNew(&new_listlEROOTcLcLDetailcLcLTBranchProxymUgR);
      instance.SetNewArray(&newArray_listlEROOTcLcLDetailcLcLTBranchProxymUgR);
      instance.SetDelete(&delete_listlEROOTcLcLDetailcLcLTBranchProxymUgR);
      instance.SetDeleteArray(&deleteArray_listlEROOTcLcLDetailcLcLTBranchProxymUgR);
      instance.SetDestructor(&destruct_listlEROOTcLcLDetailcLcLTBranchProxymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ROOT::Detail::TBranchProxy*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<ROOT::Detail::TBranchProxy*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEROOTcLcLDetailcLcLTBranchProxymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<ROOT::Detail::TBranchProxy*>*)0x0)->GetClass();
      listlEROOTcLcLDetailcLcLTBranchProxymUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEROOTcLcLDetailcLcLTBranchProxymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEROOTcLcLDetailcLcLTBranchProxymUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Detail::TBranchProxy*> : new list<ROOT::Detail::TBranchProxy*>;
   }
   static void *newArray_listlEROOTcLcLDetailcLcLTBranchProxymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ROOT::Detail::TBranchProxy*>[nElements] : new list<ROOT::Detail::TBranchProxy*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEROOTcLcLDetailcLcLTBranchProxymUgR(void *p) {
      delete ((list<ROOT::Detail::TBranchProxy*>*)p);
   }
   static void deleteArray_listlEROOTcLcLDetailcLcLTBranchProxymUgR(void *p) {
      delete [] ((list<ROOT::Detail::TBranchProxy*>*)p);
   }
   static void destruct_listlEROOTcLcLDetailcLcLTBranchProxymUgR(void *p) {
      typedef list<ROOT::Detail::TBranchProxy*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<ROOT::Detail::TBranchProxy*>

namespace {
  void TriggerDictionaryInitialization_libTreePlayer_Impl() {
    static const char* headers[] = {
"TBranchProxy.h",
"TBranchProxyClassDescriptor.h",
"TBranchProxyDescriptor.h",
"TBranchProxyDirector.h",
"TChainIndex.h",
"TFileDrawMap.h",
"TFormLeafInfo.h",
"TFormLeafInfoReference.h",
"TFriendProxy.h",
"TFriendProxyDescriptor.h",
"TMPWorkerTree.h",
"TRefArrayProxy.h",
"TRefProxy.h",
"TSelectorDraw.h",
"TSelectorEntries.h",
"TSimpleAnalysis.h",
"TTreeDrawArgsParser.h",
"TTreeFormula.h",
"TTreeFormulaManager.h",
"TTreeGeneratorBase.h",
"TTreeIndex.h",
"TTreePerfStats.h",
"TTreePlayer.h",
"TTreeProxyGenerator.h",
"TTreeReader.h",
"TTreeReaderArray.h",
"TTreeReaderGenerator.h",
"TTreeReaderUtils.h",
"TTreeReaderValue.h",
"TTreeTableInterface.h",
"ROOT/TDFActionHelpers.hxx",
"ROOT/TDFInterface.hxx",
"ROOT/TDFNodes.hxx",
"ROOT/TDFUtils.hxx",
"ROOT/TDataFrame.hxx",
"ROOT/TResultProxy.hxx",
"ROOT/TTreeProcessorMP.hxx",
"ROOT/TTreeProcessorMT.hxx",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libTreePlayer dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TBranchProxy.h"
#include "TBranchProxyClassDescriptor.h"
#include "TBranchProxyDescriptor.h"
#include "TBranchProxyDirector.h"
#include "TChainIndex.h"
#include "TFileDrawMap.h"
#include "TFormLeafInfo.h"
#include "TFormLeafInfoReference.h"
#include "TFriendProxy.h"
#include "TFriendProxyDescriptor.h"
#include "TMPWorkerTree.h"
#include "TRefArrayProxy.h"
#include "TRefProxy.h"
#include "TSelectorDraw.h"
#include "TSelectorEntries.h"
#include "TSimpleAnalysis.h"
#include "TTreeDrawArgsParser.h"
#include "TTreeFormula.h"
#include "TTreeFormulaManager.h"
#include "TTreeGeneratorBase.h"
#include "TTreeIndex.h"
#include "TTreePerfStats.h"
#include "TTreePlayer.h"
#include "TTreeProxyGenerator.h"
#include "TTreeReader.h"
#include "TTreeReaderArray.h"
#include "TTreeReaderGenerator.h"
#include "TTreeReaderUtils.h"
#include "TTreeReaderValue.h"
#include "TTreeTableInterface.h"
#include "ROOT/TDFActionHelpers.hxx"
#include "ROOT/TDFInterface.hxx"
#include "ROOT/TDFNodes.hxx"
#include "ROOT/TDFUtils.hxx"
#include "ROOT/TDataFrame.hxx"
#include "ROOT/TResultProxy.hxx"
#include "ROOT/TTreeProcessorMP.hxx"
#include "ROOT/TTreeProcessorMT.hxx"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libTreePlayer",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTreePlayer_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTreePlayer_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTreePlayer() {
  TriggerDictionaryInitialization_libTreePlayer_Impl();
}
