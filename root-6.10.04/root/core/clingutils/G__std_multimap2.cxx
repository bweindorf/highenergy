// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__std_multimap2

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
#include "map"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *multimaplElongcOvoidmUgR_Dictionary();
   static void multimaplElongcOvoidmUgR_TClassManip(TClass*);
   static void *new_multimaplElongcOvoidmUgR(void *p = 0);
   static void *newArray_multimaplElongcOvoidmUgR(Long_t size, void *p);
   static void delete_multimaplElongcOvoidmUgR(void *p);
   static void deleteArray_multimaplElongcOvoidmUgR(void *p);
   static void destruct_multimaplElongcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<long,void*>*)
   {
      multimap<long,void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<long,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<long,void*>", -2, "map", 98,
                  typeid(multimap<long,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplElongcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<long,void*>) );
      instance.SetNew(&new_multimaplElongcOvoidmUgR);
      instance.SetNewArray(&newArray_multimaplElongcOvoidmUgR);
      instance.SetDelete(&delete_multimaplElongcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_multimaplElongcOvoidmUgR);
      instance.SetDestructor(&destruct_multimaplElongcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<long,void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<long,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplElongcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<long,void*>*)0x0)->GetClass();
      multimaplElongcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplElongcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplElongcOvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,void*> : new multimap<long,void*>;
   }
   static void *newArray_multimaplElongcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,void*>[nElements] : new multimap<long,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplElongcOvoidmUgR(void *p) {
      delete ((multimap<long,void*>*)p);
   }
   static void deleteArray_multimaplElongcOvoidmUgR(void *p) {
      delete [] ((multimap<long,void*>*)p);
   }
   static void destruct_multimaplElongcOvoidmUgR(void *p) {
      typedef multimap<long,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<long,void*>

namespace ROOT {
   static TClass *multimaplElongcOlonggR_Dictionary();
   static void multimaplElongcOlonggR_TClassManip(TClass*);
   static void *new_multimaplElongcOlonggR(void *p = 0);
   static void *newArray_multimaplElongcOlonggR(Long_t size, void *p);
   static void delete_multimaplElongcOlonggR(void *p);
   static void deleteArray_multimaplElongcOlonggR(void *p);
   static void destruct_multimaplElongcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<long,long>*)
   {
      multimap<long,long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<long,long>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<long,long>", -2, "map", 98,
                  typeid(multimap<long,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplElongcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<long,long>) );
      instance.SetNew(&new_multimaplElongcOlonggR);
      instance.SetNewArray(&newArray_multimaplElongcOlonggR);
      instance.SetDelete(&delete_multimaplElongcOlonggR);
      instance.SetDeleteArray(&deleteArray_multimaplElongcOlonggR);
      instance.SetDestructor(&destruct_multimaplElongcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<long,long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<long,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplElongcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<long,long>*)0x0)->GetClass();
      multimaplElongcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplElongcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplElongcOlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,long> : new multimap<long,long>;
   }
   static void *newArray_multimaplElongcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,long>[nElements] : new multimap<long,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplElongcOlonggR(void *p) {
      delete ((multimap<long,long>*)p);
   }
   static void deleteArray_multimaplElongcOlonggR(void *p) {
      delete [] ((multimap<long,long>*)p);
   }
   static void destruct_multimaplElongcOlonggR(void *p) {
      typedef multimap<long,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<long,long>

namespace ROOT {
   static TClass *multimaplElongcOintgR_Dictionary();
   static void multimaplElongcOintgR_TClassManip(TClass*);
   static void *new_multimaplElongcOintgR(void *p = 0);
   static void *newArray_multimaplElongcOintgR(Long_t size, void *p);
   static void delete_multimaplElongcOintgR(void *p);
   static void deleteArray_multimaplElongcOintgR(void *p);
   static void destruct_multimaplElongcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<long,int>*)
   {
      multimap<long,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<long,int>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<long,int>", -2, "map", 98,
                  typeid(multimap<long,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplElongcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<long,int>) );
      instance.SetNew(&new_multimaplElongcOintgR);
      instance.SetNewArray(&newArray_multimaplElongcOintgR);
      instance.SetDelete(&delete_multimaplElongcOintgR);
      instance.SetDeleteArray(&deleteArray_multimaplElongcOintgR);
      instance.SetDestructor(&destruct_multimaplElongcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<long,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<long,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplElongcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<long,int>*)0x0)->GetClass();
      multimaplElongcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplElongcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplElongcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,int> : new multimap<long,int>;
   }
   static void *newArray_multimaplElongcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,int>[nElements] : new multimap<long,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplElongcOintgR(void *p) {
      delete ((multimap<long,int>*)p);
   }
   static void deleteArray_multimaplElongcOintgR(void *p) {
      delete [] ((multimap<long,int>*)p);
   }
   static void destruct_multimaplElongcOintgR(void *p) {
      typedef multimap<long,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<long,int>

namespace ROOT {
   static TClass *multimaplElongcOdoublegR_Dictionary();
   static void multimaplElongcOdoublegR_TClassManip(TClass*);
   static void *new_multimaplElongcOdoublegR(void *p = 0);
   static void *newArray_multimaplElongcOdoublegR(Long_t size, void *p);
   static void delete_multimaplElongcOdoublegR(void *p);
   static void deleteArray_multimaplElongcOdoublegR(void *p);
   static void destruct_multimaplElongcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<long,double>*)
   {
      multimap<long,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<long,double>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<long,double>", -2, "map", 98,
                  typeid(multimap<long,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplElongcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<long,double>) );
      instance.SetNew(&new_multimaplElongcOdoublegR);
      instance.SetNewArray(&newArray_multimaplElongcOdoublegR);
      instance.SetDelete(&delete_multimaplElongcOdoublegR);
      instance.SetDeleteArray(&deleteArray_multimaplElongcOdoublegR);
      instance.SetDestructor(&destruct_multimaplElongcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<long,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<long,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplElongcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<long,double>*)0x0)->GetClass();
      multimaplElongcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplElongcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplElongcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,double> : new multimap<long,double>;
   }
   static void *newArray_multimaplElongcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,double>[nElements] : new multimap<long,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplElongcOdoublegR(void *p) {
      delete ((multimap<long,double>*)p);
   }
   static void deleteArray_multimaplElongcOdoublegR(void *p) {
      delete [] ((multimap<long,double>*)p);
   }
   static void destruct_multimaplElongcOdoublegR(void *p) {
      typedef multimap<long,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<long,double>

namespace ROOT {
   static TClass *multimaplElongcOcharmUgR_Dictionary();
   static void multimaplElongcOcharmUgR_TClassManip(TClass*);
   static void *new_multimaplElongcOcharmUgR(void *p = 0);
   static void *newArray_multimaplElongcOcharmUgR(Long_t size, void *p);
   static void delete_multimaplElongcOcharmUgR(void *p);
   static void deleteArray_multimaplElongcOcharmUgR(void *p);
   static void destruct_multimaplElongcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<long,char*>*)
   {
      multimap<long,char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<long,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<long,char*>", -2, "map", 98,
                  typeid(multimap<long,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplElongcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<long,char*>) );
      instance.SetNew(&new_multimaplElongcOcharmUgR);
      instance.SetNewArray(&newArray_multimaplElongcOcharmUgR);
      instance.SetDelete(&delete_multimaplElongcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_multimaplElongcOcharmUgR);
      instance.SetDestructor(&destruct_multimaplElongcOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<long,char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<long,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplElongcOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<long,char*>*)0x0)->GetClass();
      multimaplElongcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplElongcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplElongcOcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,char*> : new multimap<long,char*>;
   }
   static void *newArray_multimaplElongcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<long,char*>[nElements] : new multimap<long,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplElongcOcharmUgR(void *p) {
      delete ((multimap<long,char*>*)p);
   }
   static void deleteArray_multimaplElongcOcharmUgR(void *p) {
      delete [] ((multimap<long,char*>*)p);
   }
   static void destruct_multimaplElongcOcharmUgR(void *p) {
      typedef multimap<long,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<long,char*>

namespace ROOT {
   static TClass *multimaplEdoublecOvoidmUgR_Dictionary();
   static void multimaplEdoublecOvoidmUgR_TClassManip(TClass*);
   static void *new_multimaplEdoublecOvoidmUgR(void *p = 0);
   static void *newArray_multimaplEdoublecOvoidmUgR(Long_t size, void *p);
   static void delete_multimaplEdoublecOvoidmUgR(void *p);
   static void deleteArray_multimaplEdoublecOvoidmUgR(void *p);
   static void destruct_multimaplEdoublecOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<double,void*>*)
   {
      multimap<double,void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<double,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<double,void*>", -2, "map", 98,
                  typeid(multimap<double,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEdoublecOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<double,void*>) );
      instance.SetNew(&new_multimaplEdoublecOvoidmUgR);
      instance.SetNewArray(&newArray_multimaplEdoublecOvoidmUgR);
      instance.SetDelete(&delete_multimaplEdoublecOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_multimaplEdoublecOvoidmUgR);
      instance.SetDestructor(&destruct_multimaplEdoublecOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<double,void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<double,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEdoublecOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<double,void*>*)0x0)->GetClass();
      multimaplEdoublecOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEdoublecOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEdoublecOvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,void*> : new multimap<double,void*>;
   }
   static void *newArray_multimaplEdoublecOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,void*>[nElements] : new multimap<double,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEdoublecOvoidmUgR(void *p) {
      delete ((multimap<double,void*>*)p);
   }
   static void deleteArray_multimaplEdoublecOvoidmUgR(void *p) {
      delete [] ((multimap<double,void*>*)p);
   }
   static void destruct_multimaplEdoublecOvoidmUgR(void *p) {
      typedef multimap<double,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<double,void*>

namespace ROOT {
   static TClass *multimaplEdoublecOlonggR_Dictionary();
   static void multimaplEdoublecOlonggR_TClassManip(TClass*);
   static void *new_multimaplEdoublecOlonggR(void *p = 0);
   static void *newArray_multimaplEdoublecOlonggR(Long_t size, void *p);
   static void delete_multimaplEdoublecOlonggR(void *p);
   static void deleteArray_multimaplEdoublecOlonggR(void *p);
   static void destruct_multimaplEdoublecOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<double,long>*)
   {
      multimap<double,long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<double,long>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<double,long>", -2, "map", 98,
                  typeid(multimap<double,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEdoublecOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<double,long>) );
      instance.SetNew(&new_multimaplEdoublecOlonggR);
      instance.SetNewArray(&newArray_multimaplEdoublecOlonggR);
      instance.SetDelete(&delete_multimaplEdoublecOlonggR);
      instance.SetDeleteArray(&deleteArray_multimaplEdoublecOlonggR);
      instance.SetDestructor(&destruct_multimaplEdoublecOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<double,long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<double,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEdoublecOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<double,long>*)0x0)->GetClass();
      multimaplEdoublecOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEdoublecOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEdoublecOlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,long> : new multimap<double,long>;
   }
   static void *newArray_multimaplEdoublecOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,long>[nElements] : new multimap<double,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEdoublecOlonggR(void *p) {
      delete ((multimap<double,long>*)p);
   }
   static void deleteArray_multimaplEdoublecOlonggR(void *p) {
      delete [] ((multimap<double,long>*)p);
   }
   static void destruct_multimaplEdoublecOlonggR(void *p) {
      typedef multimap<double,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<double,long>

namespace ROOT {
   static TClass *multimaplEdoublecOintgR_Dictionary();
   static void multimaplEdoublecOintgR_TClassManip(TClass*);
   static void *new_multimaplEdoublecOintgR(void *p = 0);
   static void *newArray_multimaplEdoublecOintgR(Long_t size, void *p);
   static void delete_multimaplEdoublecOintgR(void *p);
   static void deleteArray_multimaplEdoublecOintgR(void *p);
   static void destruct_multimaplEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<double,int>*)
   {
      multimap<double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<double,int>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<double,int>", -2, "map", 98,
                  typeid(multimap<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<double,int>) );
      instance.SetNew(&new_multimaplEdoublecOintgR);
      instance.SetNewArray(&newArray_multimaplEdoublecOintgR);
      instance.SetDelete(&delete_multimaplEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_multimaplEdoublecOintgR);
      instance.SetDestructor(&destruct_multimaplEdoublecOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<double,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<double,int>*)0x0)->GetClass();
      multimaplEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEdoublecOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,int> : new multimap<double,int>;
   }
   static void *newArray_multimaplEdoublecOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,int>[nElements] : new multimap<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEdoublecOintgR(void *p) {
      delete ((multimap<double,int>*)p);
   }
   static void deleteArray_multimaplEdoublecOintgR(void *p) {
      delete [] ((multimap<double,int>*)p);
   }
   static void destruct_multimaplEdoublecOintgR(void *p) {
      typedef multimap<double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<double,int>

namespace ROOT {
   static TClass *multimaplEdoublecOdoublegR_Dictionary();
   static void multimaplEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_multimaplEdoublecOdoublegR(void *p = 0);
   static void *newArray_multimaplEdoublecOdoublegR(Long_t size, void *p);
   static void delete_multimaplEdoublecOdoublegR(void *p);
   static void deleteArray_multimaplEdoublecOdoublegR(void *p);
   static void destruct_multimaplEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<double,double>*)
   {
      multimap<double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<double,double>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<double,double>", -2, "map", 98,
                  typeid(multimap<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<double,double>) );
      instance.SetNew(&new_multimaplEdoublecOdoublegR);
      instance.SetNewArray(&newArray_multimaplEdoublecOdoublegR);
      instance.SetDelete(&delete_multimaplEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_multimaplEdoublecOdoublegR);
      instance.SetDestructor(&destruct_multimaplEdoublecOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<double,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<double,double>*)0x0)->GetClass();
      multimaplEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEdoublecOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,double> : new multimap<double,double>;
   }
   static void *newArray_multimaplEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,double>[nElements] : new multimap<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEdoublecOdoublegR(void *p) {
      delete ((multimap<double,double>*)p);
   }
   static void deleteArray_multimaplEdoublecOdoublegR(void *p) {
      delete [] ((multimap<double,double>*)p);
   }
   static void destruct_multimaplEdoublecOdoublegR(void *p) {
      typedef multimap<double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<double,double>

namespace ROOT {
   static TClass *multimaplEdoublecOcharmUgR_Dictionary();
   static void multimaplEdoublecOcharmUgR_TClassManip(TClass*);
   static void *new_multimaplEdoublecOcharmUgR(void *p = 0);
   static void *newArray_multimaplEdoublecOcharmUgR(Long_t size, void *p);
   static void delete_multimaplEdoublecOcharmUgR(void *p);
   static void deleteArray_multimaplEdoublecOcharmUgR(void *p);
   static void destruct_multimaplEdoublecOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<double,char*>*)
   {
      multimap<double,char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<double,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<double,char*>", -2, "map", 98,
                  typeid(multimap<double,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEdoublecOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<double,char*>) );
      instance.SetNew(&new_multimaplEdoublecOcharmUgR);
      instance.SetNewArray(&newArray_multimaplEdoublecOcharmUgR);
      instance.SetDelete(&delete_multimaplEdoublecOcharmUgR);
      instance.SetDeleteArray(&deleteArray_multimaplEdoublecOcharmUgR);
      instance.SetDestructor(&destruct_multimaplEdoublecOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<double,char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<double,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEdoublecOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<double,char*>*)0x0)->GetClass();
      multimaplEdoublecOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEdoublecOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEdoublecOcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,char*> : new multimap<double,char*>;
   }
   static void *newArray_multimaplEdoublecOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,char*>[nElements] : new multimap<double,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEdoublecOcharmUgR(void *p) {
      delete ((multimap<double,char*>*)p);
   }
   static void deleteArray_multimaplEdoublecOcharmUgR(void *p) {
      delete [] ((multimap<double,char*>*)p);
   }
   static void destruct_multimaplEdoublecOcharmUgR(void *p) {
      typedef multimap<double,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<double,char*>

namespace {
  void TriggerDictionaryInitialization_libmultimap2Dict_Impl() {
    static const char* headers[] = {
"map",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libmultimap2Dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "map"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libmultimap2Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libmultimap2Dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libmultimap2Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libmultimap2Dict() {
  TriggerDictionaryInitialization_libmultimap2Dict_Impl();
}
