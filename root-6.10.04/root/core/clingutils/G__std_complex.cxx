// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__std_complex

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
#include "root_std_complex.h"

// Header files passed via #pragma extra_include
#include "root_std_complex.h"

namespace ROOT {
   static TClass *complexlElonggR_Dictionary();
   static void complexlElonggR_TClassManip(TClass*);
   static void *new_complexlElonggR(void *p = 0);
   static void *newArray_complexlElonggR(Long_t size, void *p);
   static void delete_complexlElonggR(void *p);
   static void deleteArray_complexlElonggR(void *p);
   static void destruct_complexlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::complex<long>*)
   {
      ::complex<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::complex<long>));
      static ::ROOT::TGenericClassInfo 
         instance("complex<long>", "complex", 122,
                  typeid(::complex<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &complexlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(::complex<long>) );
      instance.SetNew(&new_complexlElonggR);
      instance.SetNewArray(&newArray_complexlElonggR);
      instance.SetDelete(&delete_complexlElonggR);
      instance.SetDeleteArray(&deleteArray_complexlElonggR);
      instance.SetDestructor(&destruct_complexlElonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::complex<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *complexlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::complex<long>*)0x0)->GetClass();
      complexlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void complexlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *complexlEintgR_Dictionary();
   static void complexlEintgR_TClassManip(TClass*);
   static void *new_complexlEintgR(void *p = 0);
   static void *newArray_complexlEintgR(Long_t size, void *p);
   static void delete_complexlEintgR(void *p);
   static void deleteArray_complexlEintgR(void *p);
   static void destruct_complexlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::complex<int>*)
   {
      ::complex<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::complex<int>));
      static ::ROOT::TGenericClassInfo 
         instance("complex<int>", "complex", 122,
                  typeid(::complex<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &complexlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::complex<int>) );
      instance.SetNew(&new_complexlEintgR);
      instance.SetNewArray(&newArray_complexlEintgR);
      instance.SetDelete(&delete_complexlEintgR);
      instance.SetDeleteArray(&deleteArray_complexlEintgR);
      instance.SetDestructor(&destruct_complexlEintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::complex<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *complexlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::complex<int>*)0x0)->GetClass();
      complexlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void complexlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *complexlEfloatgR_Dictionary();
   static void complexlEfloatgR_TClassManip(TClass*);
   static void *new_complexlEfloatgR(void *p = 0);
   static void *newArray_complexlEfloatgR(Long_t size, void *p);
   static void delete_complexlEfloatgR(void *p);
   static void deleteArray_complexlEfloatgR(void *p);
   static void destruct_complexlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::complex<float>*)
   {
      ::complex<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::complex<float>));
      static ::ROOT::TGenericClassInfo 
         instance("complex<float>", "complex", 1053,
                  typeid(::complex<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &complexlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::complex<float>) );
      instance.SetNew(&new_complexlEfloatgR);
      instance.SetNewArray(&newArray_complexlEfloatgR);
      instance.SetDelete(&delete_complexlEfloatgR);
      instance.SetDeleteArray(&deleteArray_complexlEfloatgR);
      instance.SetDestructor(&destruct_complexlEfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::complex<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *complexlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::complex<float>*)0x0)->GetClass();
      complexlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void complexlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *complexlEdoublegR_Dictionary();
   static void complexlEdoublegR_TClassManip(TClass*);
   static void *new_complexlEdoublegR(void *p = 0);
   static void *newArray_complexlEdoublegR(Long_t size, void *p);
   static void delete_complexlEdoublegR(void *p);
   static void deleteArray_complexlEdoublegR(void *p);
   static void destruct_complexlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::complex<double>*)
   {
      ::complex<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::complex<double>));
      static ::ROOT::TGenericClassInfo 
         instance("complex<double>", "complex", 1202,
                  typeid(::complex<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &complexlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::complex<double>) );
      instance.SetNew(&new_complexlEdoublegR);
      instance.SetNewArray(&newArray_complexlEdoublegR);
      instance.SetDelete(&delete_complexlEdoublegR);
      instance.SetDeleteArray(&deleteArray_complexlEdoublegR);
      instance.SetDestructor(&destruct_complexlEdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::complex<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *complexlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::complex<double>*)0x0)->GetClass();
      complexlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void complexlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *_root_std_complexlEdoublegR_Dictionary();
   static void _root_std_complexlEdoublegR_TClassManip(TClass*);
   static void *new__root_std_complexlEdoublegR(void *p = 0);
   static void *newArray__root_std_complexlEdoublegR(Long_t size, void *p);
   static void delete__root_std_complexlEdoublegR(void *p);
   static void deleteArray__root_std_complexlEdoublegR(void *p);
   static void destruct__root_std_complexlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::_root_std_complex<double>*)
   {
      ::_root_std_complex<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::_root_std_complex<double>));
      static ::ROOT::TGenericClassInfo 
         instance("_root_std_complex<double>", "root_std_complex.h", 15,
                  typeid(::_root_std_complex<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &_root_std_complexlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::_root_std_complex<double>) );
      instance.SetNew(&new__root_std_complexlEdoublegR);
      instance.SetNewArray(&newArray__root_std_complexlEdoublegR);
      instance.SetDelete(&delete__root_std_complexlEdoublegR);
      instance.SetDeleteArray(&deleteArray__root_std_complexlEdoublegR);
      instance.SetDestructor(&destruct__root_std_complexlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::_root_std_complex<double>*)
   {
      return GenerateInitInstanceLocal((::_root_std_complex<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::_root_std_complex<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *_root_std_complexlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::_root_std_complex<double>*)0x0)->GetClass();
      _root_std_complexlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void _root_std_complexlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *_root_std_complexlEfloatgR_Dictionary();
   static void _root_std_complexlEfloatgR_TClassManip(TClass*);
   static void *new__root_std_complexlEfloatgR(void *p = 0);
   static void *newArray__root_std_complexlEfloatgR(Long_t size, void *p);
   static void delete__root_std_complexlEfloatgR(void *p);
   static void deleteArray__root_std_complexlEfloatgR(void *p);
   static void destruct__root_std_complexlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::_root_std_complex<float>*)
   {
      ::_root_std_complex<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::_root_std_complex<float>));
      static ::ROOT::TGenericClassInfo 
         instance("_root_std_complex<float>", "root_std_complex.h", 15,
                  typeid(::_root_std_complex<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &_root_std_complexlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::_root_std_complex<float>) );
      instance.SetNew(&new__root_std_complexlEfloatgR);
      instance.SetNewArray(&newArray__root_std_complexlEfloatgR);
      instance.SetDelete(&delete__root_std_complexlEfloatgR);
      instance.SetDeleteArray(&deleteArray__root_std_complexlEfloatgR);
      instance.SetDestructor(&destruct__root_std_complexlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::_root_std_complex<float>*)
   {
      return GenerateInitInstanceLocal((::_root_std_complex<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::_root_std_complex<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *_root_std_complexlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::_root_std_complex<float>*)0x0)->GetClass();
      _root_std_complexlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void _root_std_complexlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *_root_std_complexlElonggR_Dictionary();
   static void _root_std_complexlElonggR_TClassManip(TClass*);
   static void *new__root_std_complexlElonggR(void *p = 0);
   static void *newArray__root_std_complexlElonggR(Long_t size, void *p);
   static void delete__root_std_complexlElonggR(void *p);
   static void deleteArray__root_std_complexlElonggR(void *p);
   static void destruct__root_std_complexlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::_root_std_complex<long>*)
   {
      ::_root_std_complex<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::_root_std_complex<long>));
      static ::ROOT::TGenericClassInfo 
         instance("_root_std_complex<long>", "root_std_complex.h", 15,
                  typeid(::_root_std_complex<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &_root_std_complexlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(::_root_std_complex<long>) );
      instance.SetNew(&new__root_std_complexlElonggR);
      instance.SetNewArray(&newArray__root_std_complexlElonggR);
      instance.SetDelete(&delete__root_std_complexlElonggR);
      instance.SetDeleteArray(&deleteArray__root_std_complexlElonggR);
      instance.SetDestructor(&destruct__root_std_complexlElonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::_root_std_complex<long>*)
   {
      return GenerateInitInstanceLocal((::_root_std_complex<long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::_root_std_complex<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *_root_std_complexlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::_root_std_complex<long>*)0x0)->GetClass();
      _root_std_complexlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void _root_std_complexlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *_root_std_complexlEintgR_Dictionary();
   static void _root_std_complexlEintgR_TClassManip(TClass*);
   static void *new__root_std_complexlEintgR(void *p = 0);
   static void *newArray__root_std_complexlEintgR(Long_t size, void *p);
   static void delete__root_std_complexlEintgR(void *p);
   static void deleteArray__root_std_complexlEintgR(void *p);
   static void destruct__root_std_complexlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::_root_std_complex<int>*)
   {
      ::_root_std_complex<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::_root_std_complex<int>));
      static ::ROOT::TGenericClassInfo 
         instance("_root_std_complex<int>", "root_std_complex.h", 15,
                  typeid(::_root_std_complex<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &_root_std_complexlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::_root_std_complex<int>) );
      instance.SetNew(&new__root_std_complexlEintgR);
      instance.SetNewArray(&newArray__root_std_complexlEintgR);
      instance.SetDelete(&delete__root_std_complexlEintgR);
      instance.SetDeleteArray(&deleteArray__root_std_complexlEintgR);
      instance.SetDestructor(&destruct__root_std_complexlEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::_root_std_complex<int>*)
   {
      return GenerateInitInstanceLocal((::_root_std_complex<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::_root_std_complex<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *_root_std_complexlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::_root_std_complex<int>*)0x0)->GetClass();
      _root_std_complexlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void _root_std_complexlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_complexlElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::complex<long> : new ::complex<long>;
   }
   static void *newArray_complexlElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::complex<long>[nElements] : new ::complex<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_complexlElonggR(void *p) {
      delete ((::complex<long>*)p);
   }
   static void deleteArray_complexlElonggR(void *p) {
      delete [] ((::complex<long>*)p);
   }
   static void destruct_complexlElonggR(void *p) {
      typedef ::complex<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::complex<long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_complexlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::complex<int> : new ::complex<int>;
   }
   static void *newArray_complexlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::complex<int>[nElements] : new ::complex<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_complexlEintgR(void *p) {
      delete ((::complex<int>*)p);
   }
   static void deleteArray_complexlEintgR(void *p) {
      delete [] ((::complex<int>*)p);
   }
   static void destruct_complexlEintgR(void *p) {
      typedef ::complex<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::complex<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_complexlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::complex<float> : new ::complex<float>;
   }
   static void *newArray_complexlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::complex<float>[nElements] : new ::complex<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_complexlEfloatgR(void *p) {
      delete ((::complex<float>*)p);
   }
   static void deleteArray_complexlEfloatgR(void *p) {
      delete [] ((::complex<float>*)p);
   }
   static void destruct_complexlEfloatgR(void *p) {
      typedef ::complex<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::complex<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_complexlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::complex<double> : new ::complex<double>;
   }
   static void *newArray_complexlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::complex<double>[nElements] : new ::complex<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_complexlEdoublegR(void *p) {
      delete ((::complex<double>*)p);
   }
   static void deleteArray_complexlEdoublegR(void *p) {
      delete [] ((::complex<double>*)p);
   }
   static void destruct_complexlEdoublegR(void *p) {
      typedef ::complex<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::complex<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new__root_std_complexlEdoublegR(void *p) {
      return  p ? new(p) ::_root_std_complex<double> : new ::_root_std_complex<double>;
   }
   static void *newArray__root_std_complexlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::_root_std_complex<double>[nElements] : new ::_root_std_complex<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete__root_std_complexlEdoublegR(void *p) {
      delete ((::_root_std_complex<double>*)p);
   }
   static void deleteArray__root_std_complexlEdoublegR(void *p) {
      delete [] ((::_root_std_complex<double>*)p);
   }
   static void destruct__root_std_complexlEdoublegR(void *p) {
      typedef ::_root_std_complex<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::_root_std_complex<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new__root_std_complexlEfloatgR(void *p) {
      return  p ? new(p) ::_root_std_complex<float> : new ::_root_std_complex<float>;
   }
   static void *newArray__root_std_complexlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::_root_std_complex<float>[nElements] : new ::_root_std_complex<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete__root_std_complexlEfloatgR(void *p) {
      delete ((::_root_std_complex<float>*)p);
   }
   static void deleteArray__root_std_complexlEfloatgR(void *p) {
      delete [] ((::_root_std_complex<float>*)p);
   }
   static void destruct__root_std_complexlEfloatgR(void *p) {
      typedef ::_root_std_complex<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::_root_std_complex<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new__root_std_complexlElonggR(void *p) {
      return  p ? new(p) ::_root_std_complex<long> : new ::_root_std_complex<long>;
   }
   static void *newArray__root_std_complexlElonggR(Long_t nElements, void *p) {
      return p ? new(p) ::_root_std_complex<long>[nElements] : new ::_root_std_complex<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete__root_std_complexlElonggR(void *p) {
      delete ((::_root_std_complex<long>*)p);
   }
   static void deleteArray__root_std_complexlElonggR(void *p) {
      delete [] ((::_root_std_complex<long>*)p);
   }
   static void destruct__root_std_complexlElonggR(void *p) {
      typedef ::_root_std_complex<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::_root_std_complex<long>

namespace ROOT {
   // Wrappers around operator new
   static void *new__root_std_complexlEintgR(void *p) {
      return  p ? new(p) ::_root_std_complex<int> : new ::_root_std_complex<int>;
   }
   static void *newArray__root_std_complexlEintgR(Long_t nElements, void *p) {
      return p ? new(p) ::_root_std_complex<int>[nElements] : new ::_root_std_complex<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete__root_std_complexlEintgR(void *p) {
      delete ((::_root_std_complex<int>*)p);
   }
   static void deleteArray__root_std_complexlEintgR(void *p) {
      delete [] ((::_root_std_complex<int>*)p);
   }
   static void destruct__root_std_complexlEintgR(void *p) {
      typedef ::_root_std_complex<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::_root_std_complex<int>

namespace {
  void TriggerDictionaryInitialization_libcomplexDict_Impl() {
    static const char* headers[] = {
"root_std_complex.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libcomplexDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "root_std_complex.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"_root_std_complex<double>", payloadCode, "@",
"_root_std_complex<float>", payloadCode, "@",
"_root_std_complex<int>", payloadCode, "@",
"_root_std_complex<long>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libcomplexDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libcomplexDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libcomplexDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libcomplexDict() {
  TriggerDictionaryInitialization_libcomplexDict_Impl();
}
