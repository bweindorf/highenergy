// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__std_deque

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
#include "deque"

// Header files passed via #pragma extra_include
#include "deque"

namespace ROOT {
   static TClass *dequelEvoidmUgR_Dictionary();
   static void dequelEvoidmUgR_TClassManip(TClass*);
   static void *new_dequelEvoidmUgR(void *p = 0);
   static void *newArray_dequelEvoidmUgR(Long_t size, void *p);
   static void delete_dequelEvoidmUgR(void *p);
   static void deleteArray_dequelEvoidmUgR(void *p);
   static void destruct_dequelEvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<void*>*)
   {
      deque<void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<void*>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<void*>", -2, "deque", 831,
                  typeid(deque<void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<void*>) );
      instance.SetNew(&new_dequelEvoidmUgR);
      instance.SetNewArray(&newArray_dequelEvoidmUgR);
      instance.SetDelete(&delete_dequelEvoidmUgR);
      instance.SetDeleteArray(&deleteArray_dequelEvoidmUgR);
      instance.SetDestructor(&destruct_dequelEvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const deque<void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const deque<void*>*)0x0)->GetClass();
      dequelEvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<void*> : new deque<void*>;
   }
   static void *newArray_dequelEvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<void*>[nElements] : new deque<void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEvoidmUgR(void *p) {
      delete ((deque<void*>*)p);
   }
   static void deleteArray_dequelEvoidmUgR(void *p) {
      delete [] ((deque<void*>*)p);
   }
   static void destruct_dequelEvoidmUgR(void *p) {
      typedef deque<void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class deque<void*>

namespace ROOT {
   static TClass *dequelElonggR_Dictionary();
   static void dequelElonggR_TClassManip(TClass*);
   static void *new_dequelElonggR(void *p = 0);
   static void *newArray_dequelElonggR(Long_t size, void *p);
   static void delete_dequelElonggR(void *p);
   static void deleteArray_dequelElonggR(void *p);
   static void destruct_dequelElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<long>*)
   {
      deque<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<long>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<long>", -2, "deque", 831,
                  typeid(deque<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelElonggR_Dictionary, isa_proxy, 4,
                  sizeof(deque<long>) );
      instance.SetNew(&new_dequelElonggR);
      instance.SetNewArray(&newArray_dequelElonggR);
      instance.SetDelete(&delete_dequelElonggR);
      instance.SetDeleteArray(&deleteArray_dequelElonggR);
      instance.SetDestructor(&destruct_dequelElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const deque<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const deque<long>*)0x0)->GetClass();
      dequelElonggR_TClassManip(theClass);
   return theClass;
   }

   static void dequelElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<long> : new deque<long>;
   }
   static void *newArray_dequelElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<long>[nElements] : new deque<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelElonggR(void *p) {
      delete ((deque<long>*)p);
   }
   static void deleteArray_dequelElonggR(void *p) {
      delete [] ((deque<long>*)p);
   }
   static void destruct_dequelElonggR(void *p) {
      typedef deque<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class deque<long>

namespace ROOT {
   static TClass *dequelEintgR_Dictionary();
   static void dequelEintgR_TClassManip(TClass*);
   static void *new_dequelEintgR(void *p = 0);
   static void *newArray_dequelEintgR(Long_t size, void *p);
   static void delete_dequelEintgR(void *p);
   static void deleteArray_dequelEintgR(void *p);
   static void destruct_dequelEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<int>*)
   {
      deque<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<int>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<int>", -2, "deque", 831,
                  typeid(deque<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEintgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<int>) );
      instance.SetNew(&new_dequelEintgR);
      instance.SetNewArray(&newArray_dequelEintgR);
      instance.SetDelete(&delete_dequelEintgR);
      instance.SetDeleteArray(&deleteArray_dequelEintgR);
      instance.SetDestructor(&destruct_dequelEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const deque<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const deque<int>*)0x0)->GetClass();
      dequelEintgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<int> : new deque<int>;
   }
   static void *newArray_dequelEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<int>[nElements] : new deque<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEintgR(void *p) {
      delete ((deque<int>*)p);
   }
   static void deleteArray_dequelEintgR(void *p) {
      delete [] ((deque<int>*)p);
   }
   static void destruct_dequelEintgR(void *p) {
      typedef deque<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class deque<int>

namespace ROOT {
   static TClass *dequelEfloatgR_Dictionary();
   static void dequelEfloatgR_TClassManip(TClass*);
   static void *new_dequelEfloatgR(void *p = 0);
   static void *newArray_dequelEfloatgR(Long_t size, void *p);
   static void delete_dequelEfloatgR(void *p);
   static void deleteArray_dequelEfloatgR(void *p);
   static void destruct_dequelEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<float>*)
   {
      deque<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<float>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<float>", -2, "deque", 831,
                  typeid(deque<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<float>) );
      instance.SetNew(&new_dequelEfloatgR);
      instance.SetNewArray(&newArray_dequelEfloatgR);
      instance.SetDelete(&delete_dequelEfloatgR);
      instance.SetDeleteArray(&deleteArray_dequelEfloatgR);
      instance.SetDestructor(&destruct_dequelEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const deque<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const deque<float>*)0x0)->GetClass();
      dequelEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<float> : new deque<float>;
   }
   static void *newArray_dequelEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<float>[nElements] : new deque<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEfloatgR(void *p) {
      delete ((deque<float>*)p);
   }
   static void deleteArray_dequelEfloatgR(void *p) {
      delete [] ((deque<float>*)p);
   }
   static void destruct_dequelEfloatgR(void *p) {
      typedef deque<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class deque<float>

namespace ROOT {
   static TClass *dequelEdoublegR_Dictionary();
   static void dequelEdoublegR_TClassManip(TClass*);
   static void *new_dequelEdoublegR(void *p = 0);
   static void *newArray_dequelEdoublegR(Long_t size, void *p);
   static void delete_dequelEdoublegR(void *p);
   static void deleteArray_dequelEdoublegR(void *p);
   static void destruct_dequelEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<double>*)
   {
      deque<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<double>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<double>", -2, "deque", 831,
                  typeid(deque<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(deque<double>) );
      instance.SetNew(&new_dequelEdoublegR);
      instance.SetNewArray(&newArray_dequelEdoublegR);
      instance.SetDelete(&delete_dequelEdoublegR);
      instance.SetDeleteArray(&deleteArray_dequelEdoublegR);
      instance.SetDestructor(&destruct_dequelEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const deque<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const deque<double>*)0x0)->GetClass();
      dequelEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<double> : new deque<double>;
   }
   static void *newArray_dequelEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<double>[nElements] : new deque<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEdoublegR(void *p) {
      delete ((deque<double>*)p);
   }
   static void deleteArray_dequelEdoublegR(void *p) {
      delete [] ((deque<double>*)p);
   }
   static void destruct_dequelEdoublegR(void *p) {
      typedef deque<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class deque<double>

namespace ROOT {
   static TClass *dequelEcharmUgR_Dictionary();
   static void dequelEcharmUgR_TClassManip(TClass*);
   static void *new_dequelEcharmUgR(void *p = 0);
   static void *newArray_dequelEcharmUgR(Long_t size, void *p);
   static void delete_dequelEcharmUgR(void *p);
   static void deleteArray_dequelEcharmUgR(void *p);
   static void destruct_dequelEcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<char*>*)
   {
      deque<char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<char*>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<char*>", -2, "deque", 831,
                  typeid(deque<char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(deque<char*>) );
      instance.SetNew(&new_dequelEcharmUgR);
      instance.SetNewArray(&newArray_dequelEcharmUgR);
      instance.SetDelete(&delete_dequelEcharmUgR);
      instance.SetDeleteArray(&deleteArray_dequelEcharmUgR);
      instance.SetDestructor(&destruct_dequelEcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const deque<char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const deque<char*>*)0x0)->GetClass();
      dequelEcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<char*> : new deque<char*>;
   }
   static void *newArray_dequelEcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<char*>[nElements] : new deque<char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEcharmUgR(void *p) {
      delete ((deque<char*>*)p);
   }
   static void deleteArray_dequelEcharmUgR(void *p) {
      delete [] ((deque<char*>*)p);
   }
   static void destruct_dequelEcharmUgR(void *p) {
      typedef deque<char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class deque<char*>

namespace {
  void TriggerDictionaryInitialization_libdequeDict_Impl() {
    static const char* headers[] = {
"deque",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libdequeDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "deque"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libdequeDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libdequeDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libdequeDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libdequeDict() {
  TriggerDictionaryInitialization_libdequeDict_Impl();
}
