// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__std_map2

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
   static TClass *maplElongcOvoidmUgR_Dictionary();
   static void maplElongcOvoidmUgR_TClassManip(TClass*);
   static void *new_maplElongcOvoidmUgR(void *p = 0);
   static void *newArray_maplElongcOvoidmUgR(Long_t size, void *p);
   static void delete_maplElongcOvoidmUgR(void *p);
   static void deleteArray_maplElongcOvoidmUgR(void *p);
   static void destruct_maplElongcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<long,void*>*)
   {
      map<long,void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<long,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<long,void*>", -2, "map", 99,
                  typeid(map<long,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplElongcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<long,void*>) );
      instance.SetNew(&new_maplElongcOvoidmUgR);
      instance.SetNewArray(&newArray_maplElongcOvoidmUgR);
      instance.SetDelete(&delete_maplElongcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_maplElongcOvoidmUgR);
      instance.SetDestructor(&destruct_maplElongcOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<long,void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<long,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElongcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<long,void*>*)0x0)->GetClass();
      maplElongcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplElongcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElongcOvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,void*> : new map<long,void*>;
   }
   static void *newArray_maplElongcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,void*>[nElements] : new map<long,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElongcOvoidmUgR(void *p) {
      delete ((map<long,void*>*)p);
   }
   static void deleteArray_maplElongcOvoidmUgR(void *p) {
      delete [] ((map<long,void*>*)p);
   }
   static void destruct_maplElongcOvoidmUgR(void *p) {
      typedef map<long,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<long,void*>

namespace ROOT {
   static TClass *maplElongcOlonggR_Dictionary();
   static void maplElongcOlonggR_TClassManip(TClass*);
   static void *new_maplElongcOlonggR(void *p = 0);
   static void *newArray_maplElongcOlonggR(Long_t size, void *p);
   static void delete_maplElongcOlonggR(void *p);
   static void deleteArray_maplElongcOlonggR(void *p);
   static void destruct_maplElongcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<long,long>*)
   {
      map<long,long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<long,long>));
      static ::ROOT::TGenericClassInfo 
         instance("map<long,long>", -2, "map", 99,
                  typeid(map<long,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplElongcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(map<long,long>) );
      instance.SetNew(&new_maplElongcOlonggR);
      instance.SetNewArray(&newArray_maplElongcOlonggR);
      instance.SetDelete(&delete_maplElongcOlonggR);
      instance.SetDeleteArray(&deleteArray_maplElongcOlonggR);
      instance.SetDestructor(&destruct_maplElongcOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<long,long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<long,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElongcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<long,long>*)0x0)->GetClass();
      maplElongcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void maplElongcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElongcOlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,long> : new map<long,long>;
   }
   static void *newArray_maplElongcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,long>[nElements] : new map<long,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElongcOlonggR(void *p) {
      delete ((map<long,long>*)p);
   }
   static void deleteArray_maplElongcOlonggR(void *p) {
      delete [] ((map<long,long>*)p);
   }
   static void destruct_maplElongcOlonggR(void *p) {
      typedef map<long,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<long,long>

namespace ROOT {
   static TClass *maplElongcOintgR_Dictionary();
   static void maplElongcOintgR_TClassManip(TClass*);
   static void *new_maplElongcOintgR(void *p = 0);
   static void *newArray_maplElongcOintgR(Long_t size, void *p);
   static void delete_maplElongcOintgR(void *p);
   static void deleteArray_maplElongcOintgR(void *p);
   static void destruct_maplElongcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<long,int>*)
   {
      map<long,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<long,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<long,int>", -2, "map", 99,
                  typeid(map<long,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplElongcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(map<long,int>) );
      instance.SetNew(&new_maplElongcOintgR);
      instance.SetNewArray(&newArray_maplElongcOintgR);
      instance.SetDelete(&delete_maplElongcOintgR);
      instance.SetDeleteArray(&deleteArray_maplElongcOintgR);
      instance.SetDestructor(&destruct_maplElongcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<long,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<long,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElongcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<long,int>*)0x0)->GetClass();
      maplElongcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplElongcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElongcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,int> : new map<long,int>;
   }
   static void *newArray_maplElongcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,int>[nElements] : new map<long,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElongcOintgR(void *p) {
      delete ((map<long,int>*)p);
   }
   static void deleteArray_maplElongcOintgR(void *p) {
      delete [] ((map<long,int>*)p);
   }
   static void destruct_maplElongcOintgR(void *p) {
      typedef map<long,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<long,int>

namespace ROOT {
   static TClass *maplElongcOfloatgR_Dictionary();
   static void maplElongcOfloatgR_TClassManip(TClass*);
   static void *new_maplElongcOfloatgR(void *p = 0);
   static void *newArray_maplElongcOfloatgR(Long_t size, void *p);
   static void delete_maplElongcOfloatgR(void *p);
   static void deleteArray_maplElongcOfloatgR(void *p);
   static void destruct_maplElongcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<long,float>*)
   {
      map<long,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<long,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<long,float>", -2, "map", 99,
                  typeid(map<long,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplElongcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(map<long,float>) );
      instance.SetNew(&new_maplElongcOfloatgR);
      instance.SetNewArray(&newArray_maplElongcOfloatgR);
      instance.SetDelete(&delete_maplElongcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplElongcOfloatgR);
      instance.SetDestructor(&destruct_maplElongcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<long,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<long,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElongcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<long,float>*)0x0)->GetClass();
      maplElongcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplElongcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElongcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,float> : new map<long,float>;
   }
   static void *newArray_maplElongcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,float>[nElements] : new map<long,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElongcOfloatgR(void *p) {
      delete ((map<long,float>*)p);
   }
   static void deleteArray_maplElongcOfloatgR(void *p) {
      delete [] ((map<long,float>*)p);
   }
   static void destruct_maplElongcOfloatgR(void *p) {
      typedef map<long,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<long,float>

namespace ROOT {
   static TClass *maplElongcOdoublegR_Dictionary();
   static void maplElongcOdoublegR_TClassManip(TClass*);
   static void *new_maplElongcOdoublegR(void *p = 0);
   static void *newArray_maplElongcOdoublegR(Long_t size, void *p);
   static void delete_maplElongcOdoublegR(void *p);
   static void deleteArray_maplElongcOdoublegR(void *p);
   static void destruct_maplElongcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<long,double>*)
   {
      map<long,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<long,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<long,double>", -2, "map", 99,
                  typeid(map<long,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplElongcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(map<long,double>) );
      instance.SetNew(&new_maplElongcOdoublegR);
      instance.SetNewArray(&newArray_maplElongcOdoublegR);
      instance.SetDelete(&delete_maplElongcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplElongcOdoublegR);
      instance.SetDestructor(&destruct_maplElongcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<long,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<long,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElongcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<long,double>*)0x0)->GetClass();
      maplElongcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplElongcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElongcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,double> : new map<long,double>;
   }
   static void *newArray_maplElongcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,double>[nElements] : new map<long,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElongcOdoublegR(void *p) {
      delete ((map<long,double>*)p);
   }
   static void deleteArray_maplElongcOdoublegR(void *p) {
      delete [] ((map<long,double>*)p);
   }
   static void destruct_maplElongcOdoublegR(void *p) {
      typedef map<long,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<long,double>

namespace ROOT {
   static TClass *maplElongcOcharmUgR_Dictionary();
   static void maplElongcOcharmUgR_TClassManip(TClass*);
   static void *new_maplElongcOcharmUgR(void *p = 0);
   static void *newArray_maplElongcOcharmUgR(Long_t size, void *p);
   static void delete_maplElongcOcharmUgR(void *p);
   static void deleteArray_maplElongcOcharmUgR(void *p);
   static void destruct_maplElongcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<long,char*>*)
   {
      map<long,char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<long,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<long,char*>", -2, "map", 99,
                  typeid(map<long,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplElongcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<long,char*>) );
      instance.SetNew(&new_maplElongcOcharmUgR);
      instance.SetNewArray(&newArray_maplElongcOcharmUgR);
      instance.SetDelete(&delete_maplElongcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_maplElongcOcharmUgR);
      instance.SetDestructor(&destruct_maplElongcOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<long,char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<long,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElongcOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<long,char*>*)0x0)->GetClass();
      maplElongcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplElongcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElongcOcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,char*> : new map<long,char*>;
   }
   static void *newArray_maplElongcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<long,char*>[nElements] : new map<long,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElongcOcharmUgR(void *p) {
      delete ((map<long,char*>*)p);
   }
   static void deleteArray_maplElongcOcharmUgR(void *p) {
      delete [] ((map<long,char*>*)p);
   }
   static void destruct_maplElongcOcharmUgR(void *p) {
      typedef map<long,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<long,char*>

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
                  &maplEintcOintgR_Dictionary, isa_proxy, 4,
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

namespace ROOT {
   static TClass *maplEdoublecOvoidmUgR_Dictionary();
   static void maplEdoublecOvoidmUgR_TClassManip(TClass*);
   static void *new_maplEdoublecOvoidmUgR(void *p = 0);
   static void *newArray_maplEdoublecOvoidmUgR(Long_t size, void *p);
   static void delete_maplEdoublecOvoidmUgR(void *p);
   static void deleteArray_maplEdoublecOvoidmUgR(void *p);
   static void destruct_maplEdoublecOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,void*>*)
   {
      map<double,void*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,void*>", -2, "map", 99,
                  typeid(map<double,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<double,void*>) );
      instance.SetNew(&new_maplEdoublecOvoidmUgR);
      instance.SetNewArray(&newArray_maplEdoublecOvoidmUgR);
      instance.SetDelete(&delete_maplEdoublecOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOvoidmUgR);
      instance.SetDestructor(&destruct_maplEdoublecOvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,void*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,void*>*)0x0)->GetClass();
      maplEdoublecOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOvoidmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,void*> : new map<double,void*>;
   }
   static void *newArray_maplEdoublecOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,void*>[nElements] : new map<double,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOvoidmUgR(void *p) {
      delete ((map<double,void*>*)p);
   }
   static void deleteArray_maplEdoublecOvoidmUgR(void *p) {
      delete [] ((map<double,void*>*)p);
   }
   static void destruct_maplEdoublecOvoidmUgR(void *p) {
      typedef map<double,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,void*>

namespace ROOT {
   static TClass *maplEdoublecOlonggR_Dictionary();
   static void maplEdoublecOlonggR_TClassManip(TClass*);
   static void *new_maplEdoublecOlonggR(void *p = 0);
   static void *newArray_maplEdoublecOlonggR(Long_t size, void *p);
   static void delete_maplEdoublecOlonggR(void *p);
   static void deleteArray_maplEdoublecOlonggR(void *p);
   static void destruct_maplEdoublecOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,long>*)
   {
      map<double,long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,long>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,long>", -2, "map", 99,
                  typeid(map<double,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(map<double,long>) );
      instance.SetNew(&new_maplEdoublecOlonggR);
      instance.SetNewArray(&newArray_maplEdoublecOlonggR);
      instance.SetDelete(&delete_maplEdoublecOlonggR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOlonggR);
      instance.SetDestructor(&destruct_maplEdoublecOlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,long>*)0x0)->GetClass();
      maplEdoublecOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,long> : new map<double,long>;
   }
   static void *newArray_maplEdoublecOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,long>[nElements] : new map<double,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOlonggR(void *p) {
      delete ((map<double,long>*)p);
   }
   static void deleteArray_maplEdoublecOlonggR(void *p) {
      delete [] ((map<double,long>*)p);
   }
   static void destruct_maplEdoublecOlonggR(void *p) {
      typedef map<double,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,long>

namespace ROOT {
   static TClass *maplEdoublecOintgR_Dictionary();
   static void maplEdoublecOintgR_TClassManip(TClass*);
   static void *new_maplEdoublecOintgR(void *p = 0);
   static void *newArray_maplEdoublecOintgR(Long_t size, void *p);
   static void delete_maplEdoublecOintgR(void *p);
   static void deleteArray_maplEdoublecOintgR(void *p);
   static void destruct_maplEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,int>*)
   {
      map<double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,int>", -2, "map", 99,
                  typeid(map<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(map<double,int>) );
      instance.SetNew(&new_maplEdoublecOintgR);
      instance.SetNewArray(&newArray_maplEdoublecOintgR);
      instance.SetDelete(&delete_maplEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOintgR);
      instance.SetDestructor(&destruct_maplEdoublecOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,int>*)0x0)->GetClass();
      maplEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,int> : new map<double,int>;
   }
   static void *newArray_maplEdoublecOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,int>[nElements] : new map<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOintgR(void *p) {
      delete ((map<double,int>*)p);
   }
   static void deleteArray_maplEdoublecOintgR(void *p) {
      delete [] ((map<double,int>*)p);
   }
   static void destruct_maplEdoublecOintgR(void *p) {
      typedef map<double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,int>

namespace ROOT {
   static TClass *maplEdoublecOfloatgR_Dictionary();
   static void maplEdoublecOfloatgR_TClassManip(TClass*);
   static void *new_maplEdoublecOfloatgR(void *p = 0);
   static void *newArray_maplEdoublecOfloatgR(Long_t size, void *p);
   static void delete_maplEdoublecOfloatgR(void *p);
   static void deleteArray_maplEdoublecOfloatgR(void *p);
   static void destruct_maplEdoublecOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,float>*)
   {
      map<double,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,float>", -2, "map", 99,
                  typeid(map<double,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(map<double,float>) );
      instance.SetNew(&new_maplEdoublecOfloatgR);
      instance.SetNewArray(&newArray_maplEdoublecOfloatgR);
      instance.SetDelete(&delete_maplEdoublecOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOfloatgR);
      instance.SetDestructor(&destruct_maplEdoublecOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,float>*)0x0)->GetClass();
      maplEdoublecOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,float> : new map<double,float>;
   }
   static void *newArray_maplEdoublecOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,float>[nElements] : new map<double,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOfloatgR(void *p) {
      delete ((map<double,float>*)p);
   }
   static void deleteArray_maplEdoublecOfloatgR(void *p) {
      delete [] ((map<double,float>*)p);
   }
   static void destruct_maplEdoublecOfloatgR(void *p) {
      typedef map<double,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,float>

namespace ROOT {
   static TClass *maplEdoublecOdoublegR_Dictionary();
   static void maplEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_maplEdoublecOdoublegR(void *p = 0);
   static void *newArray_maplEdoublecOdoublegR(Long_t size, void *p);
   static void delete_maplEdoublecOdoublegR(void *p);
   static void deleteArray_maplEdoublecOdoublegR(void *p);
   static void destruct_maplEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,double>*)
   {
      map<double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,double>", -2, "map", 99,
                  typeid(map<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(map<double,double>) );
      instance.SetNew(&new_maplEdoublecOdoublegR);
      instance.SetNewArray(&newArray_maplEdoublecOdoublegR);
      instance.SetDelete(&delete_maplEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOdoublegR);
      instance.SetDestructor(&destruct_maplEdoublecOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,double>*)0x0)->GetClass();
      maplEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,double> : new map<double,double>;
   }
   static void *newArray_maplEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,double>[nElements] : new map<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOdoublegR(void *p) {
      delete ((map<double,double>*)p);
   }
   static void deleteArray_maplEdoublecOdoublegR(void *p) {
      delete [] ((map<double,double>*)p);
   }
   static void destruct_maplEdoublecOdoublegR(void *p) {
      typedef map<double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,double>

namespace ROOT {
   static TClass *maplEdoublecOcharmUgR_Dictionary();
   static void maplEdoublecOcharmUgR_TClassManip(TClass*);
   static void *new_maplEdoublecOcharmUgR(void *p = 0);
   static void *newArray_maplEdoublecOcharmUgR(Long_t size, void *p);
   static void delete_maplEdoublecOcharmUgR(void *p);
   static void deleteArray_maplEdoublecOcharmUgR(void *p);
   static void destruct_maplEdoublecOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,char*>*)
   {
      map<double,char*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,char*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,char*>", -2, "map", 99,
                  typeid(map<double,char*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<double,char*>) );
      instance.SetNew(&new_maplEdoublecOcharmUgR);
      instance.SetNewArray(&newArray_maplEdoublecOcharmUgR);
      instance.SetDelete(&delete_maplEdoublecOcharmUgR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOcharmUgR);
      instance.SetDestructor(&destruct_maplEdoublecOcharmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,char*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOcharmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,char*>*)0x0)->GetClass();
      maplEdoublecOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOcharmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,char*> : new map<double,char*>;
   }
   static void *newArray_maplEdoublecOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,char*>[nElements] : new map<double,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOcharmUgR(void *p) {
      delete ((map<double,char*>*)p);
   }
   static void deleteArray_maplEdoublecOcharmUgR(void *p) {
      delete [] ((map<double,char*>*)p);
   }
   static void destruct_maplEdoublecOcharmUgR(void *p) {
      typedef map<double,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,char*>

namespace {
  void TriggerDictionaryInitialization_libmap2Dict_Impl() {
    static const char* headers[] = {
"map",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libmap2Dict dictionary payload"

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
      TROOT::RegisterModule("libmap2Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libmap2Dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libmap2Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libmap2Dict() {
  TriggerDictionaryInitialization_libmap2Dict_Impl();
}
