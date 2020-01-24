// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__std_multiset

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
#include "set"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *multisetlEvoidmUgR_Dictionary();
   static void multisetlEvoidmUgR_TClassManip(TClass*);
   static void *new_multisetlEvoidmUgR(void *p = 0);
   static void *newArray_multisetlEvoidmUgR(Long_t size, void *p);
   static void delete_multisetlEvoidmUgR(void *p);
   static void deleteArray_multisetlEvoidmUgR(void *p);
   static void destruct_multisetlEvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multiset<void*>*)
   {
      multiset<void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multiset<void*>));
      static ::ROOT::TGenericClassInfo 
         instance("multiset<void*>", -2, "set", 95,
                  typeid(multiset<void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multisetlEvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(multiset<void*>) );
      instance.SetNew(&new_multisetlEvoidmUgR);
      instance.SetNewArray(&newArray_multisetlEvoidmUgR);
      instance.SetDelete(&delete_multisetlEvoidmUgR);
      instance.SetDeleteArray(&deleteArray_multisetlEvoidmUgR);
      instance.SetDestructor(&destruct_multisetlEvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< multiset<void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multiset<void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multisetlEvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multiset<void*>*)0x0)->GetClass();
      multisetlEvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void multisetlEvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multisetlEvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<void*> : new multiset<void*>;
   }
   static void *newArray_multisetlEvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<void*>[nElements] : new multiset<void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multisetlEvoidmUgR(void *p) {
      delete ((multiset<void*>*)p);
   }
   static void deleteArray_multisetlEvoidmUgR(void *p) {
      delete [] ((multiset<void*>*)p);
   }
   static void destruct_multisetlEvoidmUgR(void *p) {
      typedef multiset<void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multiset<void*>

namespace ROOT {
   static TClass *multisetlEstringgR_Dictionary();
   static void multisetlEstringgR_TClassManip(TClass*);
   static void *new_multisetlEstringgR(void *p = 0);
   static void *newArray_multisetlEstringgR(Long_t size, void *p);
   static void delete_multisetlEstringgR(void *p);
   static void deleteArray_multisetlEstringgR(void *p);
   static void destruct_multisetlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multiset<string>*)
   {
      multiset<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multiset<string>));
      static ::ROOT::TGenericClassInfo 
         instance("multiset<string>", -2, "set", 95,
                  typeid(multiset<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multisetlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(multiset<string>) );
      instance.SetNew(&new_multisetlEstringgR);
      instance.SetNewArray(&newArray_multisetlEstringgR);
      instance.SetDelete(&delete_multisetlEstringgR);
      instance.SetDeleteArray(&deleteArray_multisetlEstringgR);
      instance.SetDestructor(&destruct_multisetlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< multiset<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multiset<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multisetlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multiset<string>*)0x0)->GetClass();
      multisetlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void multisetlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multisetlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<string> : new multiset<string>;
   }
   static void *newArray_multisetlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<string>[nElements] : new multiset<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multisetlEstringgR(void *p) {
      delete ((multiset<string>*)p);
   }
   static void deleteArray_multisetlEstringgR(void *p) {
      delete [] ((multiset<string>*)p);
   }
   static void destruct_multisetlEstringgR(void *p) {
      typedef multiset<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multiset<string>

namespace ROOT {
   static TClass *multisetlElonggR_Dictionary();
   static void multisetlElonggR_TClassManip(TClass*);
   static void *new_multisetlElonggR(void *p = 0);
   static void *newArray_multisetlElonggR(Long_t size, void *p);
   static void delete_multisetlElonggR(void *p);
   static void deleteArray_multisetlElonggR(void *p);
   static void destruct_multisetlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multiset<long>*)
   {
      multiset<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multiset<long>));
      static ::ROOT::TGenericClassInfo 
         instance("multiset<long>", -2, "set", 95,
                  typeid(multiset<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multisetlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(multiset<long>) );
      instance.SetNew(&new_multisetlElonggR);
      instance.SetNewArray(&newArray_multisetlElonggR);
      instance.SetDelete(&delete_multisetlElonggR);
      instance.SetDeleteArray(&deleteArray_multisetlElonggR);
      instance.SetDestructor(&destruct_multisetlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< multiset<long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multiset<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multisetlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multiset<long>*)0x0)->GetClass();
      multisetlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void multisetlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multisetlElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<long> : new multiset<long>;
   }
   static void *newArray_multisetlElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<long>[nElements] : new multiset<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multisetlElonggR(void *p) {
      delete ((multiset<long>*)p);
   }
   static void deleteArray_multisetlElonggR(void *p) {
      delete [] ((multiset<long>*)p);
   }
   static void destruct_multisetlElonggR(void *p) {
      typedef multiset<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multiset<long>

namespace ROOT {
   static TClass *multisetlEintgR_Dictionary();
   static void multisetlEintgR_TClassManip(TClass*);
   static void *new_multisetlEintgR(void *p = 0);
   static void *newArray_multisetlEintgR(Long_t size, void *p);
   static void delete_multisetlEintgR(void *p);
   static void deleteArray_multisetlEintgR(void *p);
   static void destruct_multisetlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multiset<int>*)
   {
      multiset<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multiset<int>));
      static ::ROOT::TGenericClassInfo 
         instance("multiset<int>", -2, "set", 95,
                  typeid(multiset<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multisetlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(multiset<int>) );
      instance.SetNew(&new_multisetlEintgR);
      instance.SetNewArray(&newArray_multisetlEintgR);
      instance.SetDelete(&delete_multisetlEintgR);
      instance.SetDeleteArray(&deleteArray_multisetlEintgR);
      instance.SetDestructor(&destruct_multisetlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< multiset<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multiset<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multisetlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multiset<int>*)0x0)->GetClass();
      multisetlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void multisetlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multisetlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<int> : new multiset<int>;
   }
   static void *newArray_multisetlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<int>[nElements] : new multiset<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multisetlEintgR(void *p) {
      delete ((multiset<int>*)p);
   }
   static void deleteArray_multisetlEintgR(void *p) {
      delete [] ((multiset<int>*)p);
   }
   static void destruct_multisetlEintgR(void *p) {
      typedef multiset<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multiset<int>

namespace ROOT {
   static TClass *multisetlEfloatgR_Dictionary();
   static void multisetlEfloatgR_TClassManip(TClass*);
   static void *new_multisetlEfloatgR(void *p = 0);
   static void *newArray_multisetlEfloatgR(Long_t size, void *p);
   static void delete_multisetlEfloatgR(void *p);
   static void deleteArray_multisetlEfloatgR(void *p);
   static void destruct_multisetlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multiset<float>*)
   {
      multiset<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multiset<float>));
      static ::ROOT::TGenericClassInfo 
         instance("multiset<float>", -2, "set", 95,
                  typeid(multiset<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multisetlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(multiset<float>) );
      instance.SetNew(&new_multisetlEfloatgR);
      instance.SetNewArray(&newArray_multisetlEfloatgR);
      instance.SetDelete(&delete_multisetlEfloatgR);
      instance.SetDeleteArray(&deleteArray_multisetlEfloatgR);
      instance.SetDestructor(&destruct_multisetlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< multiset<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multiset<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multisetlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multiset<float>*)0x0)->GetClass();
      multisetlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void multisetlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multisetlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<float> : new multiset<float>;
   }
   static void *newArray_multisetlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<float>[nElements] : new multiset<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multisetlEfloatgR(void *p) {
      delete ((multiset<float>*)p);
   }
   static void deleteArray_multisetlEfloatgR(void *p) {
      delete [] ((multiset<float>*)p);
   }
   static void destruct_multisetlEfloatgR(void *p) {
      typedef multiset<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multiset<float>

namespace ROOT {
   static TClass *multisetlEdoublegR_Dictionary();
   static void multisetlEdoublegR_TClassManip(TClass*);
   static void *new_multisetlEdoublegR(void *p = 0);
   static void *newArray_multisetlEdoublegR(Long_t size, void *p);
   static void delete_multisetlEdoublegR(void *p);
   static void deleteArray_multisetlEdoublegR(void *p);
   static void destruct_multisetlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multiset<double>*)
   {
      multiset<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multiset<double>));
      static ::ROOT::TGenericClassInfo 
         instance("multiset<double>", -2, "set", 95,
                  typeid(multiset<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multisetlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(multiset<double>) );
      instance.SetNew(&new_multisetlEdoublegR);
      instance.SetNewArray(&newArray_multisetlEdoublegR);
      instance.SetDelete(&delete_multisetlEdoublegR);
      instance.SetDeleteArray(&deleteArray_multisetlEdoublegR);
      instance.SetDestructor(&destruct_multisetlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< multiset<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multiset<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multisetlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multiset<double>*)0x0)->GetClass();
      multisetlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void multisetlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multisetlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<double> : new multiset<double>;
   }
   static void *newArray_multisetlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<double>[nElements] : new multiset<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multisetlEdoublegR(void *p) {
      delete ((multiset<double>*)p);
   }
   static void deleteArray_multisetlEdoublegR(void *p) {
      delete [] ((multiset<double>*)p);
   }
   static void destruct_multisetlEdoublegR(void *p) {
      typedef multiset<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multiset<double>

namespace ROOT {
   static TClass *multisetlEcharmUgR_Dictionary();
   static void multisetlEcharmUgR_TClassManip(TClass*);
   static void *new_multisetlEcharmUgR(void *p = 0);
   static void *newArray_multisetlEcharmUgR(Long_t size, void *p);
   static void delete_multisetlEcharmUgR(void *p);
   static void deleteArray_multisetlEcharmUgR(void *p);
   static void destruct_multisetlEcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multiset<char*>*)
   {
      multiset<char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multiset<char*>));
      static ::ROOT::TGenericClassInfo 
         instance("multiset<char*>", -2, "set", 95,
                  typeid(multiset<char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multisetlEcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(multiset<char*>) );
      instance.SetNew(&new_multisetlEcharmUgR);
      instance.SetNewArray(&newArray_multisetlEcharmUgR);
      instance.SetDelete(&delete_multisetlEcharmUgR);
      instance.SetDeleteArray(&deleteArray_multisetlEcharmUgR);
      instance.SetDestructor(&destruct_multisetlEcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< multiset<char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multiset<char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multisetlEcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multiset<char*>*)0x0)->GetClass();
      multisetlEcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void multisetlEcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multisetlEcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<char*> : new multiset<char*>;
   }
   static void *newArray_multisetlEcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multiset<char*>[nElements] : new multiset<char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multisetlEcharmUgR(void *p) {
      delete ((multiset<char*>*)p);
   }
   static void deleteArray_multisetlEcharmUgR(void *p) {
      delete [] ((multiset<char*>*)p);
   }
   static void destruct_multisetlEcharmUgR(void *p) {
      typedef multiset<char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multiset<char*>

namespace {
  void TriggerDictionaryInitialization_libmultisetDict_Impl() {
    static const char* headers[] = {
"set",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libmultisetDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "set"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libmultisetDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libmultisetDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libmultisetDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libmultisetDict() {
  TriggerDictionaryInitialization_libmultisetDict_Impl();
}
