// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__std_unordered_map

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
#include "unordered_map"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *unordered_maplEstringcOvoidmUgR_Dictionary();
   static void unordered_maplEstringcOvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOvoidmUgR(void *p = 0);
   static void *newArray_unordered_maplEstringcOvoidmUgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOvoidmUgR(void *p);
   static void deleteArray_unordered_maplEstringcOvoidmUgR(void *p);
   static void destruct_unordered_maplEstringcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,void*>*)
   {
      unordered_map<string,void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,void*>", -2, "unordered_map", 101,
                  typeid(unordered_map<string,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<string,void*>) );
      instance.SetNew(&new_unordered_maplEstringcOvoidmUgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOvoidmUgR);
      instance.SetDelete(&delete_unordered_maplEstringcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOvoidmUgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<string,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<string,void*>*)0x0)->GetClass();
      unordered_maplEstringcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,void*> : new unordered_map<string,void*>;
   }
   static void *newArray_unordered_maplEstringcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,void*>[nElements] : new unordered_map<string,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOvoidmUgR(void *p) {
      delete ((unordered_map<string,void*>*)p);
   }
   static void deleteArray_unordered_maplEstringcOvoidmUgR(void *p) {
      delete [] ((unordered_map<string,void*>*)p);
   }
   static void destruct_unordered_maplEstringcOvoidmUgR(void *p) {
      typedef unordered_map<string,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,void*>

namespace ROOT {
   static TClass *unordered_maplEstringcOlonggR_Dictionary();
   static void unordered_maplEstringcOlonggR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOlonggR(void *p = 0);
   static void *newArray_unordered_maplEstringcOlonggR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOlonggR(void *p);
   static void deleteArray_unordered_maplEstringcOlonggR(void *p);
   static void destruct_unordered_maplEstringcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,long>*)
   {
      unordered_map<string,long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,long>", -2, "unordered_map", 101,
                  typeid(unordered_map<string,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<string,long>) );
      instance.SetNew(&new_unordered_maplEstringcOlonggR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOlonggR);
      instance.SetDelete(&delete_unordered_maplEstringcOlonggR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOlonggR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<string,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<string,long>*)0x0)->GetClass();
      unordered_maplEstringcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,long> : new unordered_map<string,long>;
   }
   static void *newArray_unordered_maplEstringcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,long>[nElements] : new unordered_map<string,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOlonggR(void *p) {
      delete ((unordered_map<string,long>*)p);
   }
   static void deleteArray_unordered_maplEstringcOlonggR(void *p) {
      delete [] ((unordered_map<string,long>*)p);
   }
   static void destruct_unordered_maplEstringcOlonggR(void *p) {
      typedef unordered_map<string,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,long>

namespace ROOT {
   static TClass *unordered_maplEstringcOintgR_Dictionary();
   static void unordered_maplEstringcOintgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOintgR(void *p = 0);
   static void *newArray_unordered_maplEstringcOintgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOintgR(void *p);
   static void deleteArray_unordered_maplEstringcOintgR(void *p);
   static void destruct_unordered_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,int>*)
   {
      unordered_map<string,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,int>", -2, "unordered_map", 101,
                  typeid(unordered_map<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<string,int>) );
      instance.SetNew(&new_unordered_maplEstringcOintgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOintgR);
      instance.SetDelete(&delete_unordered_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOintgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<string,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<string,int>*)0x0)->GetClass();
      unordered_maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,int> : new unordered_map<string,int>;
   }
   static void *newArray_unordered_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,int>[nElements] : new unordered_map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOintgR(void *p) {
      delete ((unordered_map<string,int>*)p);
   }
   static void deleteArray_unordered_maplEstringcOintgR(void *p) {
      delete [] ((unordered_map<string,int>*)p);
   }
   static void destruct_unordered_maplEstringcOintgR(void *p) {
      typedef unordered_map<string,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,int>

namespace ROOT {
   static TClass *unordered_maplEstringcOfloatgR_Dictionary();
   static void unordered_maplEstringcOfloatgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOfloatgR(void *p = 0);
   static void *newArray_unordered_maplEstringcOfloatgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOfloatgR(void *p);
   static void deleteArray_unordered_maplEstringcOfloatgR(void *p);
   static void destruct_unordered_maplEstringcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,float>*)
   {
      unordered_map<string,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,float>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,float>", -2, "unordered_map", 101,
                  typeid(unordered_map<string,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<string,float>) );
      instance.SetNew(&new_unordered_maplEstringcOfloatgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOfloatgR);
      instance.SetDelete(&delete_unordered_maplEstringcOfloatgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOfloatgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<string,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<string,float>*)0x0)->GetClass();
      unordered_maplEstringcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,float> : new unordered_map<string,float>;
   }
   static void *newArray_unordered_maplEstringcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,float>[nElements] : new unordered_map<string,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOfloatgR(void *p) {
      delete ((unordered_map<string,float>*)p);
   }
   static void deleteArray_unordered_maplEstringcOfloatgR(void *p) {
      delete [] ((unordered_map<string,float>*)p);
   }
   static void destruct_unordered_maplEstringcOfloatgR(void *p) {
      typedef unordered_map<string,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,float>

namespace ROOT {
   static TClass *unordered_maplEstringcOdoublegR_Dictionary();
   static void unordered_maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOdoublegR(void *p = 0);
   static void *newArray_unordered_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOdoublegR(void *p);
   static void deleteArray_unordered_maplEstringcOdoublegR(void *p);
   static void destruct_unordered_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,double>*)
   {
      unordered_map<string,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,double>", -2, "unordered_map", 101,
                  typeid(unordered_map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<string,double>) );
      instance.SetNew(&new_unordered_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOdoublegR);
      instance.SetDelete(&delete_unordered_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<string,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<string,double>*)0x0)->GetClass();
      unordered_maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,double> : new unordered_map<string,double>;
   }
   static void *newArray_unordered_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,double>[nElements] : new unordered_map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOdoublegR(void *p) {
      delete ((unordered_map<string,double>*)p);
   }
   static void deleteArray_unordered_maplEstringcOdoublegR(void *p) {
      delete [] ((unordered_map<string,double>*)p);
   }
   static void destruct_unordered_maplEstringcOdoublegR(void *p) {
      typedef unordered_map<string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,double>

namespace ROOT {
   static TClass *unordered_maplElongcOvoidmUgR_Dictionary();
   static void unordered_maplElongcOvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_maplElongcOvoidmUgR(void *p = 0);
   static void *newArray_unordered_maplElongcOvoidmUgR(Long_t size, void *p);
   static void delete_unordered_maplElongcOvoidmUgR(void *p);
   static void deleteArray_unordered_maplElongcOvoidmUgR(void *p);
   static void destruct_unordered_maplElongcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<long,void*>*)
   {
      unordered_map<long,void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<long,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<long,void*>", -2, "unordered_map", 101,
                  typeid(unordered_map<long,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplElongcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<long,void*>) );
      instance.SetNew(&new_unordered_maplElongcOvoidmUgR);
      instance.SetNewArray(&newArray_unordered_maplElongcOvoidmUgR);
      instance.SetDelete(&delete_unordered_maplElongcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplElongcOvoidmUgR);
      instance.SetDestructor(&destruct_unordered_maplElongcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<long,void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<long,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplElongcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<long,void*>*)0x0)->GetClass();
      unordered_maplElongcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplElongcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplElongcOvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,void*> : new unordered_map<long,void*>;
   }
   static void *newArray_unordered_maplElongcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,void*>[nElements] : new unordered_map<long,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplElongcOvoidmUgR(void *p) {
      delete ((unordered_map<long,void*>*)p);
   }
   static void deleteArray_unordered_maplElongcOvoidmUgR(void *p) {
      delete [] ((unordered_map<long,void*>*)p);
   }
   static void destruct_unordered_maplElongcOvoidmUgR(void *p) {
      typedef unordered_map<long,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<long,void*>

namespace ROOT {
   static TClass *unordered_maplElongcOlonggR_Dictionary();
   static void unordered_maplElongcOlonggR_TClassManip(TClass*);
   static void *new_unordered_maplElongcOlonggR(void *p = 0);
   static void *newArray_unordered_maplElongcOlonggR(Long_t size, void *p);
   static void delete_unordered_maplElongcOlonggR(void *p);
   static void deleteArray_unordered_maplElongcOlonggR(void *p);
   static void destruct_unordered_maplElongcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<long,long>*)
   {
      unordered_map<long,long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<long,long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<long,long>", -2, "unordered_map", 101,
                  typeid(unordered_map<long,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplElongcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<long,long>) );
      instance.SetNew(&new_unordered_maplElongcOlonggR);
      instance.SetNewArray(&newArray_unordered_maplElongcOlonggR);
      instance.SetDelete(&delete_unordered_maplElongcOlonggR);
      instance.SetDeleteArray(&deleteArray_unordered_maplElongcOlonggR);
      instance.SetDestructor(&destruct_unordered_maplElongcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<long,long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<long,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplElongcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<long,long>*)0x0)->GetClass();
      unordered_maplElongcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplElongcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplElongcOlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,long> : new unordered_map<long,long>;
   }
   static void *newArray_unordered_maplElongcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,long>[nElements] : new unordered_map<long,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplElongcOlonggR(void *p) {
      delete ((unordered_map<long,long>*)p);
   }
   static void deleteArray_unordered_maplElongcOlonggR(void *p) {
      delete [] ((unordered_map<long,long>*)p);
   }
   static void destruct_unordered_maplElongcOlonggR(void *p) {
      typedef unordered_map<long,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<long,long>

namespace ROOT {
   static TClass *unordered_maplElongcOintgR_Dictionary();
   static void unordered_maplElongcOintgR_TClassManip(TClass*);
   static void *new_unordered_maplElongcOintgR(void *p = 0);
   static void *newArray_unordered_maplElongcOintgR(Long_t size, void *p);
   static void delete_unordered_maplElongcOintgR(void *p);
   static void deleteArray_unordered_maplElongcOintgR(void *p);
   static void destruct_unordered_maplElongcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<long,int>*)
   {
      unordered_map<long,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<long,int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<long,int>", -2, "unordered_map", 101,
                  typeid(unordered_map<long,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplElongcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<long,int>) );
      instance.SetNew(&new_unordered_maplElongcOintgR);
      instance.SetNewArray(&newArray_unordered_maplElongcOintgR);
      instance.SetDelete(&delete_unordered_maplElongcOintgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplElongcOintgR);
      instance.SetDestructor(&destruct_unordered_maplElongcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<long,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<long,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplElongcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<long,int>*)0x0)->GetClass();
      unordered_maplElongcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplElongcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplElongcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,int> : new unordered_map<long,int>;
   }
   static void *newArray_unordered_maplElongcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,int>[nElements] : new unordered_map<long,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplElongcOintgR(void *p) {
      delete ((unordered_map<long,int>*)p);
   }
   static void deleteArray_unordered_maplElongcOintgR(void *p) {
      delete [] ((unordered_map<long,int>*)p);
   }
   static void destruct_unordered_maplElongcOintgR(void *p) {
      typedef unordered_map<long,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<long,int>

namespace ROOT {
   static TClass *unordered_maplElongcOfloatgR_Dictionary();
   static void unordered_maplElongcOfloatgR_TClassManip(TClass*);
   static void *new_unordered_maplElongcOfloatgR(void *p = 0);
   static void *newArray_unordered_maplElongcOfloatgR(Long_t size, void *p);
   static void delete_unordered_maplElongcOfloatgR(void *p);
   static void deleteArray_unordered_maplElongcOfloatgR(void *p);
   static void destruct_unordered_maplElongcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<long,float>*)
   {
      unordered_map<long,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<long,float>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<long,float>", -2, "unordered_map", 101,
                  typeid(unordered_map<long,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplElongcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<long,float>) );
      instance.SetNew(&new_unordered_maplElongcOfloatgR);
      instance.SetNewArray(&newArray_unordered_maplElongcOfloatgR);
      instance.SetDelete(&delete_unordered_maplElongcOfloatgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplElongcOfloatgR);
      instance.SetDestructor(&destruct_unordered_maplElongcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<long,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<long,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplElongcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<long,float>*)0x0)->GetClass();
      unordered_maplElongcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplElongcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplElongcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,float> : new unordered_map<long,float>;
   }
   static void *newArray_unordered_maplElongcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,float>[nElements] : new unordered_map<long,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplElongcOfloatgR(void *p) {
      delete ((unordered_map<long,float>*)p);
   }
   static void deleteArray_unordered_maplElongcOfloatgR(void *p) {
      delete [] ((unordered_map<long,float>*)p);
   }
   static void destruct_unordered_maplElongcOfloatgR(void *p) {
      typedef unordered_map<long,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<long,float>

namespace ROOT {
   static TClass *unordered_maplElongcOdoublegR_Dictionary();
   static void unordered_maplElongcOdoublegR_TClassManip(TClass*);
   static void *new_unordered_maplElongcOdoublegR(void *p = 0);
   static void *newArray_unordered_maplElongcOdoublegR(Long_t size, void *p);
   static void delete_unordered_maplElongcOdoublegR(void *p);
   static void deleteArray_unordered_maplElongcOdoublegR(void *p);
   static void destruct_unordered_maplElongcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<long,double>*)
   {
      unordered_map<long,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<long,double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<long,double>", -2, "unordered_map", 101,
                  typeid(unordered_map<long,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplElongcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<long,double>) );
      instance.SetNew(&new_unordered_maplElongcOdoublegR);
      instance.SetNewArray(&newArray_unordered_maplElongcOdoublegR);
      instance.SetDelete(&delete_unordered_maplElongcOdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_maplElongcOdoublegR);
      instance.SetDestructor(&destruct_unordered_maplElongcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<long,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<long,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplElongcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<long,double>*)0x0)->GetClass();
      unordered_maplElongcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplElongcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplElongcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,double> : new unordered_map<long,double>;
   }
   static void *newArray_unordered_maplElongcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,double>[nElements] : new unordered_map<long,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplElongcOdoublegR(void *p) {
      delete ((unordered_map<long,double>*)p);
   }
   static void deleteArray_unordered_maplElongcOdoublegR(void *p) {
      delete [] ((unordered_map<long,double>*)p);
   }
   static void destruct_unordered_maplElongcOdoublegR(void *p) {
      typedef unordered_map<long,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<long,double>

namespace ROOT {
   static TClass *unordered_maplElongcOcharmUgR_Dictionary();
   static void unordered_maplElongcOcharmUgR_TClassManip(TClass*);
   static void *new_unordered_maplElongcOcharmUgR(void *p = 0);
   static void *newArray_unordered_maplElongcOcharmUgR(Long_t size, void *p);
   static void delete_unordered_maplElongcOcharmUgR(void *p);
   static void deleteArray_unordered_maplElongcOcharmUgR(void *p);
   static void destruct_unordered_maplElongcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<long,char*>*)
   {
      unordered_map<long,char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<long,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<long,char*>", -2, "unordered_map", 101,
                  typeid(unordered_map<long,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplElongcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<long,char*>) );
      instance.SetNew(&new_unordered_maplElongcOcharmUgR);
      instance.SetNewArray(&newArray_unordered_maplElongcOcharmUgR);
      instance.SetDelete(&delete_unordered_maplElongcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplElongcOcharmUgR);
      instance.SetDestructor(&destruct_unordered_maplElongcOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<long,char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<long,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplElongcOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<long,char*>*)0x0)->GetClass();
      unordered_maplElongcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplElongcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplElongcOcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,char*> : new unordered_map<long,char*>;
   }
   static void *newArray_unordered_maplElongcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<long,char*>[nElements] : new unordered_map<long,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplElongcOcharmUgR(void *p) {
      delete ((unordered_map<long,char*>*)p);
   }
   static void deleteArray_unordered_maplElongcOcharmUgR(void *p) {
      delete [] ((unordered_map<long,char*>*)p);
   }
   static void destruct_unordered_maplElongcOcharmUgR(void *p) {
      typedef unordered_map<long,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<long,char*>

namespace ROOT {
   static TClass *unordered_maplEintcOintgR_Dictionary();
   static void unordered_maplEintcOintgR_TClassManip(TClass*);
   static void *new_unordered_maplEintcOintgR(void *p = 0);
   static void *newArray_unordered_maplEintcOintgR(Long_t size, void *p);
   static void delete_unordered_maplEintcOintgR(void *p);
   static void deleteArray_unordered_maplEintcOintgR(void *p);
   static void destruct_unordered_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<int,int>*)
   {
      unordered_map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<int,int>", -2, "unordered_map", 101,
                  typeid(unordered_map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<int,int>) );
      instance.SetNew(&new_unordered_maplEintcOintgR);
      instance.SetNewArray(&newArray_unordered_maplEintcOintgR);
      instance.SetDelete(&delete_unordered_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEintcOintgR);
      instance.SetDestructor(&destruct_unordered_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<int,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<int,int>*)0x0)->GetClass();
      unordered_maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<int,int> : new unordered_map<int,int>;
   }
   static void *newArray_unordered_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<int,int>[nElements] : new unordered_map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEintcOintgR(void *p) {
      delete ((unordered_map<int,int>*)p);
   }
   static void deleteArray_unordered_maplEintcOintgR(void *p) {
      delete [] ((unordered_map<int,int>*)p);
   }
   static void destruct_unordered_maplEintcOintgR(void *p) {
      typedef unordered_map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<int,int>

namespace ROOT {
   static TClass *unordered_maplEdoublecOvoidmUgR_Dictionary();
   static void unordered_maplEdoublecOvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_maplEdoublecOvoidmUgR(void *p = 0);
   static void *newArray_unordered_maplEdoublecOvoidmUgR(Long_t size, void *p);
   static void delete_unordered_maplEdoublecOvoidmUgR(void *p);
   static void deleteArray_unordered_maplEdoublecOvoidmUgR(void *p);
   static void destruct_unordered_maplEdoublecOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<double,void*>*)
   {
      unordered_map<double,void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<double,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<double,void*>", -2, "unordered_map", 101,
                  typeid(unordered_map<double,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEdoublecOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<double,void*>) );
      instance.SetNew(&new_unordered_maplEdoublecOvoidmUgR);
      instance.SetNewArray(&newArray_unordered_maplEdoublecOvoidmUgR);
      instance.SetDelete(&delete_unordered_maplEdoublecOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEdoublecOvoidmUgR);
      instance.SetDestructor(&destruct_unordered_maplEdoublecOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<double,void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<double,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEdoublecOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<double,void*>*)0x0)->GetClass();
      unordered_maplEdoublecOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEdoublecOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEdoublecOvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,void*> : new unordered_map<double,void*>;
   }
   static void *newArray_unordered_maplEdoublecOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,void*>[nElements] : new unordered_map<double,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEdoublecOvoidmUgR(void *p) {
      delete ((unordered_map<double,void*>*)p);
   }
   static void deleteArray_unordered_maplEdoublecOvoidmUgR(void *p) {
      delete [] ((unordered_map<double,void*>*)p);
   }
   static void destruct_unordered_maplEdoublecOvoidmUgR(void *p) {
      typedef unordered_map<double,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<double,void*>

namespace ROOT {
   static TClass *unordered_maplEdoublecOlonggR_Dictionary();
   static void unordered_maplEdoublecOlonggR_TClassManip(TClass*);
   static void *new_unordered_maplEdoublecOlonggR(void *p = 0);
   static void *newArray_unordered_maplEdoublecOlonggR(Long_t size, void *p);
   static void delete_unordered_maplEdoublecOlonggR(void *p);
   static void deleteArray_unordered_maplEdoublecOlonggR(void *p);
   static void destruct_unordered_maplEdoublecOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<double,long>*)
   {
      unordered_map<double,long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<double,long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<double,long>", -2, "unordered_map", 101,
                  typeid(unordered_map<double,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEdoublecOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<double,long>) );
      instance.SetNew(&new_unordered_maplEdoublecOlonggR);
      instance.SetNewArray(&newArray_unordered_maplEdoublecOlonggR);
      instance.SetDelete(&delete_unordered_maplEdoublecOlonggR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEdoublecOlonggR);
      instance.SetDestructor(&destruct_unordered_maplEdoublecOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<double,long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<double,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEdoublecOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<double,long>*)0x0)->GetClass();
      unordered_maplEdoublecOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEdoublecOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEdoublecOlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,long> : new unordered_map<double,long>;
   }
   static void *newArray_unordered_maplEdoublecOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,long>[nElements] : new unordered_map<double,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEdoublecOlonggR(void *p) {
      delete ((unordered_map<double,long>*)p);
   }
   static void deleteArray_unordered_maplEdoublecOlonggR(void *p) {
      delete [] ((unordered_map<double,long>*)p);
   }
   static void destruct_unordered_maplEdoublecOlonggR(void *p) {
      typedef unordered_map<double,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<double,long>

namespace ROOT {
   static TClass *unordered_maplEdoublecOintgR_Dictionary();
   static void unordered_maplEdoublecOintgR_TClassManip(TClass*);
   static void *new_unordered_maplEdoublecOintgR(void *p = 0);
   static void *newArray_unordered_maplEdoublecOintgR(Long_t size, void *p);
   static void delete_unordered_maplEdoublecOintgR(void *p);
   static void deleteArray_unordered_maplEdoublecOintgR(void *p);
   static void destruct_unordered_maplEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<double,int>*)
   {
      unordered_map<double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<double,int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<double,int>", -2, "unordered_map", 101,
                  typeid(unordered_map<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<double,int>) );
      instance.SetNew(&new_unordered_maplEdoublecOintgR);
      instance.SetNewArray(&newArray_unordered_maplEdoublecOintgR);
      instance.SetDelete(&delete_unordered_maplEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEdoublecOintgR);
      instance.SetDestructor(&destruct_unordered_maplEdoublecOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<double,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<double,int>*)0x0)->GetClass();
      unordered_maplEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEdoublecOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,int> : new unordered_map<double,int>;
   }
   static void *newArray_unordered_maplEdoublecOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,int>[nElements] : new unordered_map<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEdoublecOintgR(void *p) {
      delete ((unordered_map<double,int>*)p);
   }
   static void deleteArray_unordered_maplEdoublecOintgR(void *p) {
      delete [] ((unordered_map<double,int>*)p);
   }
   static void destruct_unordered_maplEdoublecOintgR(void *p) {
      typedef unordered_map<double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<double,int>

namespace ROOT {
   static TClass *unordered_maplEdoublecOfloatgR_Dictionary();
   static void unordered_maplEdoublecOfloatgR_TClassManip(TClass*);
   static void *new_unordered_maplEdoublecOfloatgR(void *p = 0);
   static void *newArray_unordered_maplEdoublecOfloatgR(Long_t size, void *p);
   static void delete_unordered_maplEdoublecOfloatgR(void *p);
   static void deleteArray_unordered_maplEdoublecOfloatgR(void *p);
   static void destruct_unordered_maplEdoublecOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<double,float>*)
   {
      unordered_map<double,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<double,float>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<double,float>", -2, "unordered_map", 101,
                  typeid(unordered_map<double,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEdoublecOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<double,float>) );
      instance.SetNew(&new_unordered_maplEdoublecOfloatgR);
      instance.SetNewArray(&newArray_unordered_maplEdoublecOfloatgR);
      instance.SetDelete(&delete_unordered_maplEdoublecOfloatgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEdoublecOfloatgR);
      instance.SetDestructor(&destruct_unordered_maplEdoublecOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<double,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<double,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEdoublecOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<double,float>*)0x0)->GetClass();
      unordered_maplEdoublecOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEdoublecOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEdoublecOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,float> : new unordered_map<double,float>;
   }
   static void *newArray_unordered_maplEdoublecOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,float>[nElements] : new unordered_map<double,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEdoublecOfloatgR(void *p) {
      delete ((unordered_map<double,float>*)p);
   }
   static void deleteArray_unordered_maplEdoublecOfloatgR(void *p) {
      delete [] ((unordered_map<double,float>*)p);
   }
   static void destruct_unordered_maplEdoublecOfloatgR(void *p) {
      typedef unordered_map<double,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<double,float>

namespace ROOT {
   static TClass *unordered_maplEdoublecOdoublegR_Dictionary();
   static void unordered_maplEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_unordered_maplEdoublecOdoublegR(void *p = 0);
   static void *newArray_unordered_maplEdoublecOdoublegR(Long_t size, void *p);
   static void delete_unordered_maplEdoublecOdoublegR(void *p);
   static void deleteArray_unordered_maplEdoublecOdoublegR(void *p);
   static void destruct_unordered_maplEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<double,double>*)
   {
      unordered_map<double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<double,double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<double,double>", -2, "unordered_map", 101,
                  typeid(unordered_map<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<double,double>) );
      instance.SetNew(&new_unordered_maplEdoublecOdoublegR);
      instance.SetNewArray(&newArray_unordered_maplEdoublecOdoublegR);
      instance.SetDelete(&delete_unordered_maplEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEdoublecOdoublegR);
      instance.SetDestructor(&destruct_unordered_maplEdoublecOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<double,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<double,double>*)0x0)->GetClass();
      unordered_maplEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEdoublecOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,double> : new unordered_map<double,double>;
   }
   static void *newArray_unordered_maplEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,double>[nElements] : new unordered_map<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEdoublecOdoublegR(void *p) {
      delete ((unordered_map<double,double>*)p);
   }
   static void deleteArray_unordered_maplEdoublecOdoublegR(void *p) {
      delete [] ((unordered_map<double,double>*)p);
   }
   static void destruct_unordered_maplEdoublecOdoublegR(void *p) {
      typedef unordered_map<double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<double,double>

namespace ROOT {
   static TClass *unordered_maplEdoublecOcharmUgR_Dictionary();
   static void unordered_maplEdoublecOcharmUgR_TClassManip(TClass*);
   static void *new_unordered_maplEdoublecOcharmUgR(void *p = 0);
   static void *newArray_unordered_maplEdoublecOcharmUgR(Long_t size, void *p);
   static void delete_unordered_maplEdoublecOcharmUgR(void *p);
   static void deleteArray_unordered_maplEdoublecOcharmUgR(void *p);
   static void destruct_unordered_maplEdoublecOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<double,char*>*)
   {
      unordered_map<double,char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<double,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<double,char*>", -2, "unordered_map", 101,
                  typeid(unordered_map<double,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEdoublecOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<double,char*>) );
      instance.SetNew(&new_unordered_maplEdoublecOcharmUgR);
      instance.SetNewArray(&newArray_unordered_maplEdoublecOcharmUgR);
      instance.SetDelete(&delete_unordered_maplEdoublecOcharmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEdoublecOcharmUgR);
      instance.SetDestructor(&destruct_unordered_maplEdoublecOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<double,char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<double,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEdoublecOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<double,char*>*)0x0)->GetClass();
      unordered_maplEdoublecOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEdoublecOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEdoublecOcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,char*> : new unordered_map<double,char*>;
   }
   static void *newArray_unordered_maplEdoublecOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,char*>[nElements] : new unordered_map<double,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEdoublecOcharmUgR(void *p) {
      delete ((unordered_map<double,char*>*)p);
   }
   static void deleteArray_unordered_maplEdoublecOcharmUgR(void *p) {
      delete [] ((unordered_map<double,char*>*)p);
   }
   static void destruct_unordered_maplEdoublecOcharmUgR(void *p) {
      typedef unordered_map<double,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<double,char*>

namespace ROOT {
   static TClass *unordered_maplEcharmUcOvoidmUgR_Dictionary();
   static void unordered_maplEcharmUcOvoidmUgR_TClassManip(TClass*);
   static void *new_unordered_maplEcharmUcOvoidmUgR(void *p = 0);
   static void *newArray_unordered_maplEcharmUcOvoidmUgR(Long_t size, void *p);
   static void delete_unordered_maplEcharmUcOvoidmUgR(void *p);
   static void deleteArray_unordered_maplEcharmUcOvoidmUgR(void *p);
   static void destruct_unordered_maplEcharmUcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<char*,void*>*)
   {
      unordered_map<char*,void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<char*,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<char*,void*>", -2, "unordered_map", 101,
                  typeid(unordered_map<char*,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEcharmUcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<char*,void*>) );
      instance.SetNew(&new_unordered_maplEcharmUcOvoidmUgR);
      instance.SetNewArray(&newArray_unordered_maplEcharmUcOvoidmUgR);
      instance.SetDelete(&delete_unordered_maplEcharmUcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEcharmUcOvoidmUgR);
      instance.SetDestructor(&destruct_unordered_maplEcharmUcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<char*,void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<char*,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEcharmUcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<char*,void*>*)0x0)->GetClass();
      unordered_maplEcharmUcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEcharmUcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEcharmUcOvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,void*> : new unordered_map<char*,void*>;
   }
   static void *newArray_unordered_maplEcharmUcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,void*>[nElements] : new unordered_map<char*,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEcharmUcOvoidmUgR(void *p) {
      delete ((unordered_map<char*,void*>*)p);
   }
   static void deleteArray_unordered_maplEcharmUcOvoidmUgR(void *p) {
      delete [] ((unordered_map<char*,void*>*)p);
   }
   static void destruct_unordered_maplEcharmUcOvoidmUgR(void *p) {
      typedef unordered_map<char*,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<char*,void*>

namespace ROOT {
   static TClass *unordered_maplEcharmUcOlonggR_Dictionary();
   static void unordered_maplEcharmUcOlonggR_TClassManip(TClass*);
   static void *new_unordered_maplEcharmUcOlonggR(void *p = 0);
   static void *newArray_unordered_maplEcharmUcOlonggR(Long_t size, void *p);
   static void delete_unordered_maplEcharmUcOlonggR(void *p);
   static void deleteArray_unordered_maplEcharmUcOlonggR(void *p);
   static void destruct_unordered_maplEcharmUcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<char*,long>*)
   {
      unordered_map<char*,long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<char*,long>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<char*,long>", -2, "unordered_map", 101,
                  typeid(unordered_map<char*,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEcharmUcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<char*,long>) );
      instance.SetNew(&new_unordered_maplEcharmUcOlonggR);
      instance.SetNewArray(&newArray_unordered_maplEcharmUcOlonggR);
      instance.SetDelete(&delete_unordered_maplEcharmUcOlonggR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEcharmUcOlonggR);
      instance.SetDestructor(&destruct_unordered_maplEcharmUcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<char*,long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<char*,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEcharmUcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<char*,long>*)0x0)->GetClass();
      unordered_maplEcharmUcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEcharmUcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEcharmUcOlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,long> : new unordered_map<char*,long>;
   }
   static void *newArray_unordered_maplEcharmUcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,long>[nElements] : new unordered_map<char*,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEcharmUcOlonggR(void *p) {
      delete ((unordered_map<char*,long>*)p);
   }
   static void deleteArray_unordered_maplEcharmUcOlonggR(void *p) {
      delete [] ((unordered_map<char*,long>*)p);
   }
   static void destruct_unordered_maplEcharmUcOlonggR(void *p) {
      typedef unordered_map<char*,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<char*,long>

namespace ROOT {
   static TClass *unordered_maplEcharmUcOintgR_Dictionary();
   static void unordered_maplEcharmUcOintgR_TClassManip(TClass*);
   static void *new_unordered_maplEcharmUcOintgR(void *p = 0);
   static void *newArray_unordered_maplEcharmUcOintgR(Long_t size, void *p);
   static void delete_unordered_maplEcharmUcOintgR(void *p);
   static void deleteArray_unordered_maplEcharmUcOintgR(void *p);
   static void destruct_unordered_maplEcharmUcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<char*,int>*)
   {
      unordered_map<char*,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<char*,int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<char*,int>", -2, "unordered_map", 101,
                  typeid(unordered_map<char*,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEcharmUcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<char*,int>) );
      instance.SetNew(&new_unordered_maplEcharmUcOintgR);
      instance.SetNewArray(&newArray_unordered_maplEcharmUcOintgR);
      instance.SetDelete(&delete_unordered_maplEcharmUcOintgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEcharmUcOintgR);
      instance.SetDestructor(&destruct_unordered_maplEcharmUcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<char*,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<char*,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEcharmUcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<char*,int>*)0x0)->GetClass();
      unordered_maplEcharmUcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEcharmUcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEcharmUcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,int> : new unordered_map<char*,int>;
   }
   static void *newArray_unordered_maplEcharmUcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,int>[nElements] : new unordered_map<char*,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEcharmUcOintgR(void *p) {
      delete ((unordered_map<char*,int>*)p);
   }
   static void deleteArray_unordered_maplEcharmUcOintgR(void *p) {
      delete [] ((unordered_map<char*,int>*)p);
   }
   static void destruct_unordered_maplEcharmUcOintgR(void *p) {
      typedef unordered_map<char*,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<char*,int>

namespace ROOT {
   static TClass *unordered_maplEcharmUcOfloatgR_Dictionary();
   static void unordered_maplEcharmUcOfloatgR_TClassManip(TClass*);
   static void *new_unordered_maplEcharmUcOfloatgR(void *p = 0);
   static void *newArray_unordered_maplEcharmUcOfloatgR(Long_t size, void *p);
   static void delete_unordered_maplEcharmUcOfloatgR(void *p);
   static void deleteArray_unordered_maplEcharmUcOfloatgR(void *p);
   static void destruct_unordered_maplEcharmUcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<char*,float>*)
   {
      unordered_map<char*,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<char*,float>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<char*,float>", -2, "unordered_map", 101,
                  typeid(unordered_map<char*,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEcharmUcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<char*,float>) );
      instance.SetNew(&new_unordered_maplEcharmUcOfloatgR);
      instance.SetNewArray(&newArray_unordered_maplEcharmUcOfloatgR);
      instance.SetDelete(&delete_unordered_maplEcharmUcOfloatgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEcharmUcOfloatgR);
      instance.SetDestructor(&destruct_unordered_maplEcharmUcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<char*,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<char*,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEcharmUcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<char*,float>*)0x0)->GetClass();
      unordered_maplEcharmUcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEcharmUcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEcharmUcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,float> : new unordered_map<char*,float>;
   }
   static void *newArray_unordered_maplEcharmUcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,float>[nElements] : new unordered_map<char*,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEcharmUcOfloatgR(void *p) {
      delete ((unordered_map<char*,float>*)p);
   }
   static void deleteArray_unordered_maplEcharmUcOfloatgR(void *p) {
      delete [] ((unordered_map<char*,float>*)p);
   }
   static void destruct_unordered_maplEcharmUcOfloatgR(void *p) {
      typedef unordered_map<char*,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<char*,float>

namespace ROOT {
   static TClass *unordered_maplEcharmUcOdoublegR_Dictionary();
   static void unordered_maplEcharmUcOdoublegR_TClassManip(TClass*);
   static void *new_unordered_maplEcharmUcOdoublegR(void *p = 0);
   static void *newArray_unordered_maplEcharmUcOdoublegR(Long_t size, void *p);
   static void delete_unordered_maplEcharmUcOdoublegR(void *p);
   static void deleteArray_unordered_maplEcharmUcOdoublegR(void *p);
   static void destruct_unordered_maplEcharmUcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<char*,double>*)
   {
      unordered_map<char*,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<char*,double>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<char*,double>", -2, "unordered_map", 101,
                  typeid(unordered_map<char*,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEcharmUcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<char*,double>) );
      instance.SetNew(&new_unordered_maplEcharmUcOdoublegR);
      instance.SetNewArray(&newArray_unordered_maplEcharmUcOdoublegR);
      instance.SetDelete(&delete_unordered_maplEcharmUcOdoublegR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEcharmUcOdoublegR);
      instance.SetDestructor(&destruct_unordered_maplEcharmUcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<char*,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<char*,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEcharmUcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<char*,double>*)0x0)->GetClass();
      unordered_maplEcharmUcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEcharmUcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEcharmUcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,double> : new unordered_map<char*,double>;
   }
   static void *newArray_unordered_maplEcharmUcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,double>[nElements] : new unordered_map<char*,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEcharmUcOdoublegR(void *p) {
      delete ((unordered_map<char*,double>*)p);
   }
   static void deleteArray_unordered_maplEcharmUcOdoublegR(void *p) {
      delete [] ((unordered_map<char*,double>*)p);
   }
   static void destruct_unordered_maplEcharmUcOdoublegR(void *p) {
      typedef unordered_map<char*,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<char*,double>

namespace ROOT {
   static TClass *unordered_maplEcharmUcOcharmUgR_Dictionary();
   static void unordered_maplEcharmUcOcharmUgR_TClassManip(TClass*);
   static void *new_unordered_maplEcharmUcOcharmUgR(void *p = 0);
   static void *newArray_unordered_maplEcharmUcOcharmUgR(Long_t size, void *p);
   static void delete_unordered_maplEcharmUcOcharmUgR(void *p);
   static void deleteArray_unordered_maplEcharmUcOcharmUgR(void *p);
   static void destruct_unordered_maplEcharmUcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<char*,char*>*)
   {
      unordered_map<char*,char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<char*,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<char*,char*>", -2, "unordered_map", 101,
                  typeid(unordered_map<char*,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEcharmUcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<char*,char*>) );
      instance.SetNew(&new_unordered_maplEcharmUcOcharmUgR);
      instance.SetNewArray(&newArray_unordered_maplEcharmUcOcharmUgR);
      instance.SetDelete(&delete_unordered_maplEcharmUcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEcharmUcOcharmUgR);
      instance.SetDestructor(&destruct_unordered_maplEcharmUcOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<char*,char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<char*,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEcharmUcOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<char*,char*>*)0x0)->GetClass();
      unordered_maplEcharmUcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEcharmUcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEcharmUcOcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,char*> : new unordered_map<char*,char*>;
   }
   static void *newArray_unordered_maplEcharmUcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<char*,char*>[nElements] : new unordered_map<char*,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEcharmUcOcharmUgR(void *p) {
      delete ((unordered_map<char*,char*>*)p);
   }
   static void deleteArray_unordered_maplEcharmUcOcharmUgR(void *p) {
      delete [] ((unordered_map<char*,char*>*)p);
   }
   static void destruct_unordered_maplEcharmUcOcharmUgR(void *p) {
      typedef unordered_map<char*,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<char*,char*>

namespace {
  void TriggerDictionaryInitialization_libunordered_mapDict_Impl() {
    static const char* headers[] = {
"unordered_map",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libunordered_mapDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "unordered_map"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libunordered_mapDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libunordered_mapDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libunordered_mapDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libunordered_mapDict() {
  TriggerDictionaryInitialization_libunordered_mapDict_Impl();
}
