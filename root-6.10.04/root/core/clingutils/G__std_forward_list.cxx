// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__std_forward_list

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
#include "forward_list"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *forward_listlEvoidmUgR_Dictionary();
   static void forward_listlEvoidmUgR_TClassManip(TClass*);
   static void *new_forward_listlEvoidmUgR(void *p = 0);
   static void *newArray_forward_listlEvoidmUgR(Long_t size, void *p);
   static void delete_forward_listlEvoidmUgR(void *p);
   static void deleteArray_forward_listlEvoidmUgR(void *p);
   static void destruct_forward_listlEvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const forward_list<void*>*)
   {
      forward_list<void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(forward_list<void*>));
      static ::ROOT::TGenericClassInfo 
         instance("forward_list<void*>", -2, "forward_list", 407,
                  typeid(forward_list<void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &forward_listlEvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(forward_list<void*>) );
      instance.SetNew(&new_forward_listlEvoidmUgR);
      instance.SetNewArray(&newArray_forward_listlEvoidmUgR);
      instance.SetDelete(&delete_forward_listlEvoidmUgR);
      instance.SetDeleteArray(&deleteArray_forward_listlEvoidmUgR);
      instance.SetDestructor(&destruct_forward_listlEvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushfront< forward_list<void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const forward_list<void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *forward_listlEvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const forward_list<void*>*)0x0)->GetClass();
      forward_listlEvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void forward_listlEvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_forward_listlEvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<void*> : new forward_list<void*>;
   }
   static void *newArray_forward_listlEvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<void*>[nElements] : new forward_list<void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_forward_listlEvoidmUgR(void *p) {
      delete ((forward_list<void*>*)p);
   }
   static void deleteArray_forward_listlEvoidmUgR(void *p) {
      delete [] ((forward_list<void*>*)p);
   }
   static void destruct_forward_listlEvoidmUgR(void *p) {
      typedef forward_list<void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class forward_list<void*>

namespace ROOT {
   static TClass *forward_listlEstringgR_Dictionary();
   static void forward_listlEstringgR_TClassManip(TClass*);
   static void *new_forward_listlEstringgR(void *p = 0);
   static void *newArray_forward_listlEstringgR(Long_t size, void *p);
   static void delete_forward_listlEstringgR(void *p);
   static void deleteArray_forward_listlEstringgR(void *p);
   static void destruct_forward_listlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const forward_list<string>*)
   {
      forward_list<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(forward_list<string>));
      static ::ROOT::TGenericClassInfo 
         instance("forward_list<string>", -2, "forward_list", 407,
                  typeid(forward_list<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &forward_listlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(forward_list<string>) );
      instance.SetNew(&new_forward_listlEstringgR);
      instance.SetNewArray(&newArray_forward_listlEstringgR);
      instance.SetDelete(&delete_forward_listlEstringgR);
      instance.SetDeleteArray(&deleteArray_forward_listlEstringgR);
      instance.SetDestructor(&destruct_forward_listlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushfront< forward_list<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const forward_list<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *forward_listlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const forward_list<string>*)0x0)->GetClass();
      forward_listlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void forward_listlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_forward_listlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<string> : new forward_list<string>;
   }
   static void *newArray_forward_listlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<string>[nElements] : new forward_list<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_forward_listlEstringgR(void *p) {
      delete ((forward_list<string>*)p);
   }
   static void deleteArray_forward_listlEstringgR(void *p) {
      delete [] ((forward_list<string>*)p);
   }
   static void destruct_forward_listlEstringgR(void *p) {
      typedef forward_list<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class forward_list<string>

namespace ROOT {
   static TClass *forward_listlElonggR_Dictionary();
   static void forward_listlElonggR_TClassManip(TClass*);
   static void *new_forward_listlElonggR(void *p = 0);
   static void *newArray_forward_listlElonggR(Long_t size, void *p);
   static void delete_forward_listlElonggR(void *p);
   static void deleteArray_forward_listlElonggR(void *p);
   static void destruct_forward_listlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const forward_list<long>*)
   {
      forward_list<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(forward_list<long>));
      static ::ROOT::TGenericClassInfo 
         instance("forward_list<long>", -2, "forward_list", 407,
                  typeid(forward_list<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &forward_listlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(forward_list<long>) );
      instance.SetNew(&new_forward_listlElonggR);
      instance.SetNewArray(&newArray_forward_listlElonggR);
      instance.SetDelete(&delete_forward_listlElonggR);
      instance.SetDeleteArray(&deleteArray_forward_listlElonggR);
      instance.SetDestructor(&destruct_forward_listlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushfront< forward_list<long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const forward_list<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *forward_listlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const forward_list<long>*)0x0)->GetClass();
      forward_listlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void forward_listlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_forward_listlElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<long> : new forward_list<long>;
   }
   static void *newArray_forward_listlElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<long>[nElements] : new forward_list<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_forward_listlElonggR(void *p) {
      delete ((forward_list<long>*)p);
   }
   static void deleteArray_forward_listlElonggR(void *p) {
      delete [] ((forward_list<long>*)p);
   }
   static void destruct_forward_listlElonggR(void *p) {
      typedef forward_list<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class forward_list<long>

namespace ROOT {
   static TClass *forward_listlEintgR_Dictionary();
   static void forward_listlEintgR_TClassManip(TClass*);
   static void *new_forward_listlEintgR(void *p = 0);
   static void *newArray_forward_listlEintgR(Long_t size, void *p);
   static void delete_forward_listlEintgR(void *p);
   static void deleteArray_forward_listlEintgR(void *p);
   static void destruct_forward_listlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const forward_list<int>*)
   {
      forward_list<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(forward_list<int>));
      static ::ROOT::TGenericClassInfo 
         instance("forward_list<int>", -2, "forward_list", 407,
                  typeid(forward_list<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &forward_listlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(forward_list<int>) );
      instance.SetNew(&new_forward_listlEintgR);
      instance.SetNewArray(&newArray_forward_listlEintgR);
      instance.SetDelete(&delete_forward_listlEintgR);
      instance.SetDeleteArray(&deleteArray_forward_listlEintgR);
      instance.SetDestructor(&destruct_forward_listlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushfront< forward_list<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const forward_list<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *forward_listlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const forward_list<int>*)0x0)->GetClass();
      forward_listlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void forward_listlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_forward_listlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<int> : new forward_list<int>;
   }
   static void *newArray_forward_listlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<int>[nElements] : new forward_list<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_forward_listlEintgR(void *p) {
      delete ((forward_list<int>*)p);
   }
   static void deleteArray_forward_listlEintgR(void *p) {
      delete [] ((forward_list<int>*)p);
   }
   static void destruct_forward_listlEintgR(void *p) {
      typedef forward_list<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class forward_list<int>

namespace ROOT {
   static TClass *forward_listlEfloatgR_Dictionary();
   static void forward_listlEfloatgR_TClassManip(TClass*);
   static void *new_forward_listlEfloatgR(void *p = 0);
   static void *newArray_forward_listlEfloatgR(Long_t size, void *p);
   static void delete_forward_listlEfloatgR(void *p);
   static void deleteArray_forward_listlEfloatgR(void *p);
   static void destruct_forward_listlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const forward_list<float>*)
   {
      forward_list<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(forward_list<float>));
      static ::ROOT::TGenericClassInfo 
         instance("forward_list<float>", -2, "forward_list", 407,
                  typeid(forward_list<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &forward_listlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(forward_list<float>) );
      instance.SetNew(&new_forward_listlEfloatgR);
      instance.SetNewArray(&newArray_forward_listlEfloatgR);
      instance.SetDelete(&delete_forward_listlEfloatgR);
      instance.SetDeleteArray(&deleteArray_forward_listlEfloatgR);
      instance.SetDestructor(&destruct_forward_listlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushfront< forward_list<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const forward_list<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *forward_listlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const forward_list<float>*)0x0)->GetClass();
      forward_listlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void forward_listlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_forward_listlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<float> : new forward_list<float>;
   }
   static void *newArray_forward_listlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<float>[nElements] : new forward_list<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_forward_listlEfloatgR(void *p) {
      delete ((forward_list<float>*)p);
   }
   static void deleteArray_forward_listlEfloatgR(void *p) {
      delete [] ((forward_list<float>*)p);
   }
   static void destruct_forward_listlEfloatgR(void *p) {
      typedef forward_list<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class forward_list<float>

namespace ROOT {
   static TClass *forward_listlEdoublegR_Dictionary();
   static void forward_listlEdoublegR_TClassManip(TClass*);
   static void *new_forward_listlEdoublegR(void *p = 0);
   static void *newArray_forward_listlEdoublegR(Long_t size, void *p);
   static void delete_forward_listlEdoublegR(void *p);
   static void deleteArray_forward_listlEdoublegR(void *p);
   static void destruct_forward_listlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const forward_list<double>*)
   {
      forward_list<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(forward_list<double>));
      static ::ROOT::TGenericClassInfo 
         instance("forward_list<double>", -2, "forward_list", 407,
                  typeid(forward_list<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &forward_listlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(forward_list<double>) );
      instance.SetNew(&new_forward_listlEdoublegR);
      instance.SetNewArray(&newArray_forward_listlEdoublegR);
      instance.SetDelete(&delete_forward_listlEdoublegR);
      instance.SetDeleteArray(&deleteArray_forward_listlEdoublegR);
      instance.SetDestructor(&destruct_forward_listlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushfront< forward_list<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const forward_list<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *forward_listlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const forward_list<double>*)0x0)->GetClass();
      forward_listlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void forward_listlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_forward_listlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<double> : new forward_list<double>;
   }
   static void *newArray_forward_listlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<double>[nElements] : new forward_list<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_forward_listlEdoublegR(void *p) {
      delete ((forward_list<double>*)p);
   }
   static void deleteArray_forward_listlEdoublegR(void *p) {
      delete [] ((forward_list<double>*)p);
   }
   static void destruct_forward_listlEdoublegR(void *p) {
      typedef forward_list<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class forward_list<double>

namespace ROOT {
   static TClass *forward_listlEcharmUgR_Dictionary();
   static void forward_listlEcharmUgR_TClassManip(TClass*);
   static void *new_forward_listlEcharmUgR(void *p = 0);
   static void *newArray_forward_listlEcharmUgR(Long_t size, void *p);
   static void delete_forward_listlEcharmUgR(void *p);
   static void deleteArray_forward_listlEcharmUgR(void *p);
   static void destruct_forward_listlEcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const forward_list<char*>*)
   {
      forward_list<char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(forward_list<char*>));
      static ::ROOT::TGenericClassInfo 
         instance("forward_list<char*>", -2, "forward_list", 407,
                  typeid(forward_list<char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &forward_listlEcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(forward_list<char*>) );
      instance.SetNew(&new_forward_listlEcharmUgR);
      instance.SetNewArray(&newArray_forward_listlEcharmUgR);
      instance.SetDelete(&delete_forward_listlEcharmUgR);
      instance.SetDeleteArray(&deleteArray_forward_listlEcharmUgR);
      instance.SetDestructor(&destruct_forward_listlEcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushfront< forward_list<char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const forward_list<char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *forward_listlEcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const forward_list<char*>*)0x0)->GetClass();
      forward_listlEcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void forward_listlEcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_forward_listlEcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<char*> : new forward_list<char*>;
   }
   static void *newArray_forward_listlEcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) forward_list<char*>[nElements] : new forward_list<char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_forward_listlEcharmUgR(void *p) {
      delete ((forward_list<char*>*)p);
   }
   static void deleteArray_forward_listlEcharmUgR(void *p) {
      delete [] ((forward_list<char*>*)p);
   }
   static void destruct_forward_listlEcharmUgR(void *p) {
      typedef forward_list<char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class forward_list<char*>

namespace {
  void TriggerDictionaryInitialization_libforward_listDict_Impl() {
    static const char* headers[] = {
"forward_list",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libforward_listDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "forward_list"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libforward_listDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libforward_listDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libforward_listDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libforward_listDict() {
  TriggerDictionaryInitialization_libforward_listDict_Impl();
}
