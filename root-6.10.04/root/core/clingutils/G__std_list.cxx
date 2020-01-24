// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__std_list

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
#include "list"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *listlEvoidmUgR_Dictionary();
   static void listlEvoidmUgR_TClassManip(TClass*);
   static void *new_listlEvoidmUgR(void *p = 0);
   static void *newArray_listlEvoidmUgR(Long_t size, void *p);
   static void delete_listlEvoidmUgR(void *p);
   static void deleteArray_listlEvoidmUgR(void *p);
   static void destruct_listlEvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<void*>*)
   {
      list<void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<void*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<void*>", -2, "list", 503,
                  typeid(list<void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(list<void*>) );
      instance.SetNew(&new_listlEvoidmUgR);
      instance.SetNewArray(&newArray_listlEvoidmUgR);
      instance.SetDelete(&delete_listlEvoidmUgR);
      instance.SetDeleteArray(&deleteArray_listlEvoidmUgR);
      instance.SetDestructor(&destruct_listlEvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<void*>*)0x0)->GetClass();
      listlEvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<void*> : new list<void*>;
   }
   static void *newArray_listlEvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<void*>[nElements] : new list<void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEvoidmUgR(void *p) {
      delete ((list<void*>*)p);
   }
   static void deleteArray_listlEvoidmUgR(void *p) {
      delete [] ((list<void*>*)p);
   }
   static void destruct_listlEvoidmUgR(void *p) {
      typedef list<void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<void*>

namespace ROOT {
   static TClass *listlEstringgR_Dictionary();
   static void listlEstringgR_TClassManip(TClass*);
   static void *new_listlEstringgR(void *p = 0);
   static void *newArray_listlEstringgR(Long_t size, void *p);
   static void delete_listlEstringgR(void *p);
   static void deleteArray_listlEstringgR(void *p);
   static void destruct_listlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<string>*)
   {
      list<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<string>));
      static ::ROOT::TGenericClassInfo 
         instance("list<string>", -2, "list", 503,
                  typeid(list<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(list<string>) );
      instance.SetNew(&new_listlEstringgR);
      instance.SetNewArray(&newArray_listlEstringgR);
      instance.SetDelete(&delete_listlEstringgR);
      instance.SetDeleteArray(&deleteArray_listlEstringgR);
      instance.SetDestructor(&destruct_listlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<string>*)0x0)->GetClass();
      listlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<string> : new list<string>;
   }
   static void *newArray_listlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<string>[nElements] : new list<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEstringgR(void *p) {
      delete ((list<string>*)p);
   }
   static void deleteArray_listlEstringgR(void *p) {
      delete [] ((list<string>*)p);
   }
   static void destruct_listlEstringgR(void *p) {
      typedef list<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<string>

namespace ROOT {
   static TClass *listlElonggR_Dictionary();
   static void listlElonggR_TClassManip(TClass*);
   static void *new_listlElonggR(void *p = 0);
   static void *newArray_listlElonggR(Long_t size, void *p);
   static void delete_listlElonggR(void *p);
   static void deleteArray_listlElonggR(void *p);
   static void destruct_listlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<long>*)
   {
      list<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<long>));
      static ::ROOT::TGenericClassInfo 
         instance("list<long>", -2, "list", 503,
                  typeid(list<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(list<long>) );
      instance.SetNew(&new_listlElonggR);
      instance.SetNewArray(&newArray_listlElonggR);
      instance.SetDelete(&delete_listlElonggR);
      instance.SetDeleteArray(&deleteArray_listlElonggR);
      instance.SetDestructor(&destruct_listlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<long>*)0x0)->GetClass();
      listlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void listlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<long> : new list<long>;
   }
   static void *newArray_listlElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<long>[nElements] : new list<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlElonggR(void *p) {
      delete ((list<long>*)p);
   }
   static void deleteArray_listlElonggR(void *p) {
      delete [] ((list<long>*)p);
   }
   static void destruct_listlElonggR(void *p) {
      typedef list<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<long>

namespace ROOT {
   static TClass *listlEintgR_Dictionary();
   static void listlEintgR_TClassManip(TClass*);
   static void *new_listlEintgR(void *p = 0);
   static void *newArray_listlEintgR(Long_t size, void *p);
   static void delete_listlEintgR(void *p);
   static void deleteArray_listlEintgR(void *p);
   static void destruct_listlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<int>*)
   {
      list<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<int>));
      static ::ROOT::TGenericClassInfo 
         instance("list<int>", -2, "list", 503,
                  typeid(list<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(list<int>) );
      instance.SetNew(&new_listlEintgR);
      instance.SetNewArray(&newArray_listlEintgR);
      instance.SetDelete(&delete_listlEintgR);
      instance.SetDeleteArray(&deleteArray_listlEintgR);
      instance.SetDestructor(&destruct_listlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<int>*)0x0)->GetClass();
      listlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<int> : new list<int>;
   }
   static void *newArray_listlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<int>[nElements] : new list<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEintgR(void *p) {
      delete ((list<int>*)p);
   }
   static void deleteArray_listlEintgR(void *p) {
      delete [] ((list<int>*)p);
   }
   static void destruct_listlEintgR(void *p) {
      typedef list<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<int>

namespace ROOT {
   static TClass *listlEfloatgR_Dictionary();
   static void listlEfloatgR_TClassManip(TClass*);
   static void *new_listlEfloatgR(void *p = 0);
   static void *newArray_listlEfloatgR(Long_t size, void *p);
   static void delete_listlEfloatgR(void *p);
   static void deleteArray_listlEfloatgR(void *p);
   static void destruct_listlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<float>*)
   {
      list<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<float>));
      static ::ROOT::TGenericClassInfo 
         instance("list<float>", -2, "list", 503,
                  typeid(list<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(list<float>) );
      instance.SetNew(&new_listlEfloatgR);
      instance.SetNewArray(&newArray_listlEfloatgR);
      instance.SetDelete(&delete_listlEfloatgR);
      instance.SetDeleteArray(&deleteArray_listlEfloatgR);
      instance.SetDestructor(&destruct_listlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<float>*)0x0)->GetClass();
      listlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<float> : new list<float>;
   }
   static void *newArray_listlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<float>[nElements] : new list<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEfloatgR(void *p) {
      delete ((list<float>*)p);
   }
   static void deleteArray_listlEfloatgR(void *p) {
      delete [] ((list<float>*)p);
   }
   static void destruct_listlEfloatgR(void *p) {
      typedef list<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<float>

namespace ROOT {
   static TClass *listlEdoublegR_Dictionary();
   static void listlEdoublegR_TClassManip(TClass*);
   static void *new_listlEdoublegR(void *p = 0);
   static void *newArray_listlEdoublegR(Long_t size, void *p);
   static void delete_listlEdoublegR(void *p);
   static void deleteArray_listlEdoublegR(void *p);
   static void destruct_listlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<double>*)
   {
      list<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<double>));
      static ::ROOT::TGenericClassInfo 
         instance("list<double>", -2, "list", 503,
                  typeid(list<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(list<double>) );
      instance.SetNew(&new_listlEdoublegR);
      instance.SetNewArray(&newArray_listlEdoublegR);
      instance.SetDelete(&delete_listlEdoublegR);
      instance.SetDeleteArray(&deleteArray_listlEdoublegR);
      instance.SetDestructor(&destruct_listlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<double>*)0x0)->GetClass();
      listlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void listlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<double> : new list<double>;
   }
   static void *newArray_listlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<double>[nElements] : new list<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEdoublegR(void *p) {
      delete ((list<double>*)p);
   }
   static void deleteArray_listlEdoublegR(void *p) {
      delete [] ((list<double>*)p);
   }
   static void destruct_listlEdoublegR(void *p) {
      typedef list<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<double>

namespace ROOT {
   static TClass *listlEcharmUgR_Dictionary();
   static void listlEcharmUgR_TClassManip(TClass*);
   static void *new_listlEcharmUgR(void *p = 0);
   static void *newArray_listlEcharmUgR(Long_t size, void *p);
   static void delete_listlEcharmUgR(void *p);
   static void deleteArray_listlEcharmUgR(void *p);
   static void destruct_listlEcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<char*>*)
   {
      list<char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<char*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<char*>", -2, "list", 503,
                  typeid(list<char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(list<char*>) );
      instance.SetNew(&new_listlEcharmUgR);
      instance.SetNewArray(&newArray_listlEcharmUgR);
      instance.SetDelete(&delete_listlEcharmUgR);
      instance.SetDeleteArray(&deleteArray_listlEcharmUgR);
      instance.SetDestructor(&destruct_listlEcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<char*>*)0x0)->GetClass();
      listlEcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<char*> : new list<char*>;
   }
   static void *newArray_listlEcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<char*>[nElements] : new list<char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEcharmUgR(void *p) {
      delete ((list<char*>*)p);
   }
   static void deleteArray_listlEcharmUgR(void *p) {
      delete [] ((list<char*>*)p);
   }
   static void destruct_listlEcharmUgR(void *p) {
      typedef list<char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<char*>

namespace {
  void TriggerDictionaryInitialization_liblistDict_Impl() {
    static const char* headers[] = {
"list",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "liblistDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "list"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("liblistDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_liblistDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_liblistDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_liblistDict() {
  TriggerDictionaryInitialization_liblistDict_Impl();
}
