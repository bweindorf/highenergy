// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__std_unordered_set

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
#include "unordered_set"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *unordered_setlEvoidmUgR_Dictionary();
   static void unordered_setlEvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_setlEvoidmUgR(void *p = 0);
   static void *newArray_unordered_setlEvoidmUgR(Long_t size, void *p);
   static void delete_unordered_setlEvoidmUgR(void *p);
   static void deleteArray_unordered_setlEvoidmUgR(void *p);
   static void destruct_unordered_setlEvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_set<void*>*)
   {
      unordered_set<void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_set<void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_set<void*>", -2, "unordered_set", 96,
                  typeid(unordered_set<void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_setlEvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_set<void*>) );
      instance.SetNew(&new_unordered_setlEvoidmUgR);
      instance.SetNewArray(&newArray_unordered_setlEvoidmUgR);
      instance.SetDelete(&delete_unordered_setlEvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_setlEvoidmUgR);
      instance.SetDestructor(&destruct_unordered_setlEvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_set<void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_set<void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_setlEvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_set<void*>*)0x0)->GetClass();
      unordered_setlEvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_setlEvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_setlEvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<void*> : new unordered_set<void*>;
   }
   static void *newArray_unordered_setlEvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<void*>[nElements] : new unordered_set<void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_setlEvoidmUgR(void *p) {
      delete ((unordered_set<void*>*)p);
   }
   static void deleteArray_unordered_setlEvoidmUgR(void *p) {
      delete [] ((unordered_set<void*>*)p);
   }
   static void destruct_unordered_setlEvoidmUgR(void *p) {
      typedef unordered_set<void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_set<void*>

namespace ROOT {
   static TClass *unordered_setlEstringgR_Dictionary();
   static void unordered_setlEstringgR_TClassManip(TClass*);
   static void *new_unordered_setlEstringgR(void *p = 0);
   static void *newArray_unordered_setlEstringgR(Long_t size, void *p);
   static void delete_unordered_setlEstringgR(void *p);
   static void deleteArray_unordered_setlEstringgR(void *p);
   static void destruct_unordered_setlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_set<string>*)
   {
      unordered_set<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_set<string>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_set<string>", -2, "unordered_set", 96,
                  typeid(unordered_set<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_setlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_set<string>) );
      instance.SetNew(&new_unordered_setlEstringgR);
      instance.SetNewArray(&newArray_unordered_setlEstringgR);
      instance.SetDelete(&delete_unordered_setlEstringgR);
      instance.SetDeleteArray(&deleteArray_unordered_setlEstringgR);
      instance.SetDestructor(&destruct_unordered_setlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_set<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_set<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_setlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_set<string>*)0x0)->GetClass();
      unordered_setlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_setlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_setlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<string> : new unordered_set<string>;
   }
   static void *newArray_unordered_setlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<string>[nElements] : new unordered_set<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_setlEstringgR(void *p) {
      delete ((unordered_set<string>*)p);
   }
   static void deleteArray_unordered_setlEstringgR(void *p) {
      delete [] ((unordered_set<string>*)p);
   }
   static void destruct_unordered_setlEstringgR(void *p) {
      typedef unordered_set<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_set<string>

namespace ROOT {
   static TClass *unordered_setlElonggR_Dictionary();
   static void unordered_setlElonggR_TClassManip(TClass*);
   static void *new_unordered_setlElonggR(void *p = 0);
   static void *newArray_unordered_setlElonggR(Long_t size, void *p);
   static void delete_unordered_setlElonggR(void *p);
   static void deleteArray_unordered_setlElonggR(void *p);
   static void destruct_unordered_setlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_set<long>*)
   {
      unordered_set<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_set<long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_set<long>", -2, "unordered_set", 96,
                  typeid(unordered_set<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_setlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_set<long>) );
      instance.SetNew(&new_unordered_setlElonggR);
      instance.SetNewArray(&newArray_unordered_setlElonggR);
      instance.SetDelete(&delete_unordered_setlElonggR);
      instance.SetDeleteArray(&deleteArray_unordered_setlElonggR);
      instance.SetDestructor(&destruct_unordered_setlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_set<long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_set<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_setlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_set<long>*)0x0)->GetClass();
      unordered_setlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_setlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_setlElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<long> : new unordered_set<long>;
   }
   static void *newArray_unordered_setlElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<long>[nElements] : new unordered_set<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_setlElonggR(void *p) {
      delete ((unordered_set<long>*)p);
   }
   static void deleteArray_unordered_setlElonggR(void *p) {
      delete [] ((unordered_set<long>*)p);
   }
   static void destruct_unordered_setlElonggR(void *p) {
      typedef unordered_set<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_set<long>

namespace ROOT {
   static TClass *unordered_setlEintgR_Dictionary();
   static void unordered_setlEintgR_TClassManip(TClass*);
   static void *new_unordered_setlEintgR(void *p = 0);
   static void *newArray_unordered_setlEintgR(Long_t size, void *p);
   static void delete_unordered_setlEintgR(void *p);
   static void deleteArray_unordered_setlEintgR(void *p);
   static void destruct_unordered_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_set<int>*)
   {
      unordered_set<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_set<int>", -2, "unordered_set", 96,
                  typeid(unordered_set<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_setlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_set<int>) );
      instance.SetNew(&new_unordered_setlEintgR);
      instance.SetNewArray(&newArray_unordered_setlEintgR);
      instance.SetDelete(&delete_unordered_setlEintgR);
      instance.SetDeleteArray(&deleteArray_unordered_setlEintgR);
      instance.SetDestructor(&destruct_unordered_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_set<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_set<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_set<int>*)0x0)->GetClass();
      unordered_setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_setlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<int> : new unordered_set<int>;
   }
   static void *newArray_unordered_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<int>[nElements] : new unordered_set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_setlEintgR(void *p) {
      delete ((unordered_set<int>*)p);
   }
   static void deleteArray_unordered_setlEintgR(void *p) {
      delete [] ((unordered_set<int>*)p);
   }
   static void destruct_unordered_setlEintgR(void *p) {
      typedef unordered_set<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_set<int>

namespace ROOT {
   static TClass *unordered_setlEfloatgR_Dictionary();
   static void unordered_setlEfloatgR_TClassManip(TClass*);
   static void *new_unordered_setlEfloatgR(void *p = 0);
   static void *newArray_unordered_setlEfloatgR(Long_t size, void *p);
   static void delete_unordered_setlEfloatgR(void *p);
   static void deleteArray_unordered_setlEfloatgR(void *p);
   static void destruct_unordered_setlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_set<float>*)
   {
      unordered_set<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_set<float>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_set<float>", -2, "unordered_set", 96,
                  typeid(unordered_set<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_setlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_set<float>) );
      instance.SetNew(&new_unordered_setlEfloatgR);
      instance.SetNewArray(&newArray_unordered_setlEfloatgR);
      instance.SetDelete(&delete_unordered_setlEfloatgR);
      instance.SetDeleteArray(&deleteArray_unordered_setlEfloatgR);
      instance.SetDestructor(&destruct_unordered_setlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_set<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_set<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_setlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_set<float>*)0x0)->GetClass();
      unordered_setlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_setlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_setlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<float> : new unordered_set<float>;
   }
   static void *newArray_unordered_setlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<float>[nElements] : new unordered_set<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_setlEfloatgR(void *p) {
      delete ((unordered_set<float>*)p);
   }
   static void deleteArray_unordered_setlEfloatgR(void *p) {
      delete [] ((unordered_set<float>*)p);
   }
   static void destruct_unordered_setlEfloatgR(void *p) {
      typedef unordered_set<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_set<float>

namespace ROOT {
   static TClass *unordered_setlEdoublegR_Dictionary();
   static void unordered_setlEdoublegR_TClassManip(TClass*);
   static void *new_unordered_setlEdoublegR(void *p = 0);
   static void *newArray_unordered_setlEdoublegR(Long_t size, void *p);
   static void delete_unordered_setlEdoublegR(void *p);
   static void deleteArray_unordered_setlEdoublegR(void *p);
   static void destruct_unordered_setlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_set<double>*)
   {
      unordered_set<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_set<double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_set<double>", -2, "unordered_set", 96,
                  typeid(unordered_set<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_setlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_set<double>) );
      instance.SetNew(&new_unordered_setlEdoublegR);
      instance.SetNewArray(&newArray_unordered_setlEdoublegR);
      instance.SetDelete(&delete_unordered_setlEdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_setlEdoublegR);
      instance.SetDestructor(&destruct_unordered_setlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_set<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_set<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_setlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_set<double>*)0x0)->GetClass();
      unordered_setlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_setlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_setlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<double> : new unordered_set<double>;
   }
   static void *newArray_unordered_setlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<double>[nElements] : new unordered_set<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_setlEdoublegR(void *p) {
      delete ((unordered_set<double>*)p);
   }
   static void deleteArray_unordered_setlEdoublegR(void *p) {
      delete [] ((unordered_set<double>*)p);
   }
   static void destruct_unordered_setlEdoublegR(void *p) {
      typedef unordered_set<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_set<double>

namespace ROOT {
   static TClass *unordered_setlEcharmUgR_Dictionary();
   static void unordered_setlEcharmUgR_TClassManip(TClass*);
   static void *new_unordered_setlEcharmUgR(void *p = 0);
   static void *newArray_unordered_setlEcharmUgR(Long_t size, void *p);
   static void delete_unordered_setlEcharmUgR(void *p);
   static void deleteArray_unordered_setlEcharmUgR(void *p);
   static void destruct_unordered_setlEcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_set<char*>*)
   {
      unordered_set<char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_set<char*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_set<char*>", -2, "unordered_set", 96,
                  typeid(unordered_set<char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_setlEcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_set<char*>) );
      instance.SetNew(&new_unordered_setlEcharmUgR);
      instance.SetNewArray(&newArray_unordered_setlEcharmUgR);
      instance.SetDelete(&delete_unordered_setlEcharmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_setlEcharmUgR);
      instance.SetDestructor(&destruct_unordered_setlEcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_set<char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_set<char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_setlEcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_set<char*>*)0x0)->GetClass();
      unordered_setlEcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_setlEcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_setlEcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<char*> : new unordered_set<char*>;
   }
   static void *newArray_unordered_setlEcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<char*>[nElements] : new unordered_set<char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_setlEcharmUgR(void *p) {
      delete ((unordered_set<char*>*)p);
   }
   static void deleteArray_unordered_setlEcharmUgR(void *p) {
      delete [] ((unordered_set<char*>*)p);
   }
   static void destruct_unordered_setlEcharmUgR(void *p) {
      typedef unordered_set<char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_set<char*>

namespace {
  void TriggerDictionaryInitialization_libunordered_setDict_Impl() {
    static const char* headers[] = {
"unordered_set",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libunordered_setDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "unordered_set"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libunordered_setDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libunordered_setDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libunordered_setDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libunordered_setDict() {
  TriggerDictionaryInitialization_libunordered_setDict_Impl();
}
