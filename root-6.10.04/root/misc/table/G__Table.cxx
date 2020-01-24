// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Table

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
#include "TCernLib.h"
#include "TChair.h"
#include "TColumnView.h"
#include "TDataSet.h"
#include "TDataSetIter.h"
#include "TDsKey.h"
#include "TFileIter.h"
#include "TFileSet.h"
#include "TGenericTable.h"
#include "TIndexTable.h"
#include "TObjectSet.h"
#include "TPoints3D.h"
#include "TPointsArray3D.h"
#include "TPolyLineShape.h"
#include "TResponseTable.h"
#include "TTable.h"
#include "TTable3Points.h"
#include "TTableDescriptor.h"
#include "TTableIter.h"
#include "TTableMap.h"
#include "TTablePadView3D.h"
#include "TTablePoints.h"
#include "TTableSorter.h"
#include "TVolume.h"
#include "TVolumePosition.h"
#include "TVolumeView.h"
#include "TVolumeViewIter.h"
#include "Ttypes.h"
#include "tableDescriptor.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TCL(void *p = 0);
   static void *newArray_TCL(Long_t size, void *p);
   static void delete_TCL(void *p);
   static void deleteArray_TCL(void *p);
   static void destruct_TCL(void *p);
   static void streamer_TCL(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCL*)
   {
      ::TCL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCL", ::TCL::Class_Version(), "TCernLib.h", 36,
                  typeid(::TCL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCL::Dictionary, isa_proxy, 16,
                  sizeof(::TCL) );
      instance.SetNew(&new_TCL);
      instance.SetNewArray(&newArray_TCL);
      instance.SetDelete(&delete_TCL);
      instance.SetDeleteArray(&deleteArray_TCL);
      instance.SetDestructor(&destruct_TCL);
      instance.SetStreamerFunc(&streamer_TCL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCL*)
   {
      return GenerateInitInstanceLocal((::TCL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDataSet(void *p = 0);
   static void *newArray_TDataSet(Long_t size, void *p);
   static void delete_TDataSet(void *p);
   static void deleteArray_TDataSet(void *p);
   static void destruct_TDataSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDataSet*)
   {
      ::TDataSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDataSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDataSet", ::TDataSet::Class_Version(), "TDataSet.h", 34,
                  typeid(::TDataSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDataSet::Dictionary, isa_proxy, 4,
                  sizeof(::TDataSet) );
      instance.SetNew(&new_TDataSet);
      instance.SetNewArray(&newArray_TDataSet);
      instance.SetDelete(&delete_TDataSet);
      instance.SetDeleteArray(&deleteArray_TDataSet);
      instance.SetDestructor(&destruct_TDataSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDataSet*)
   {
      return GenerateInitInstanceLocal((::TDataSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDataSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *tableDescriptor_st_Dictionary();
   static void tableDescriptor_st_TClassManip(TClass*);
   static void *new_tableDescriptor_st(void *p = 0);
   static void *newArray_tableDescriptor_st(Long_t size, void *p);
   static void delete_tableDescriptor_st(void *p);
   static void deleteArray_tableDescriptor_st(void *p);
   static void destruct_tableDescriptor_st(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tableDescriptor_st*)
   {
      ::tableDescriptor_st *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tableDescriptor_st));
      static ::ROOT::TGenericClassInfo 
         instance("tableDescriptor_st", "tableDescriptor.h", 59,
                  typeid(::tableDescriptor_st), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tableDescriptor_st_Dictionary, isa_proxy, 4,
                  sizeof(::tableDescriptor_st) );
      instance.SetNew(&new_tableDescriptor_st);
      instance.SetNewArray(&newArray_tableDescriptor_st);
      instance.SetDelete(&delete_tableDescriptor_st);
      instance.SetDeleteArray(&deleteArray_tableDescriptor_st);
      instance.SetDestructor(&destruct_tableDescriptor_st);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::tableDescriptor_st*)
   {
      return GenerateInitInstanceLocal((::tableDescriptor_st*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tableDescriptor_st*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tableDescriptor_st_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tableDescriptor_st*)0x0)->GetClass();
      tableDescriptor_st_TClassManip(theClass);
   return theClass;
   }

   static void tableDescriptor_st_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TTable(void *p = 0);
   static void *newArray_TTable(Long_t size, void *p);
   static void delete_TTable(void *p);
   static void deleteArray_TTable(void *p);
   static void destruct_TTable(void *p);
   static void streamer_TTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTable*)
   {
      ::TTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTable", ::TTable::Class_Version(), "TTable.h", 48,
                  typeid(::TTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTable::Dictionary, isa_proxy, 17,
                  sizeof(::TTable) );
      instance.SetNew(&new_TTable);
      instance.SetNewArray(&newArray_TTable);
      instance.SetDelete(&delete_TTable);
      instance.SetDeleteArray(&deleteArray_TTable);
      instance.SetDestructor(&destruct_TTable);
      instance.SetStreamerFunc(&streamer_TTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTable*)
   {
      return GenerateInitInstanceLocal((::TTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TTablecLcLiterator_Dictionary();
   static void TTablecLcLiterator_TClassManip(TClass*);
   static void *new_TTablecLcLiterator(void *p = 0);
   static void *newArray_TTablecLcLiterator(Long_t size, void *p);
   static void delete_TTablecLcLiterator(void *p);
   static void deleteArray_TTablecLcLiterator(void *p);
   static void destruct_TTablecLcLiterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTable::iterator*)
   {
      ::TTable::iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TTable::iterator));
      static ::ROOT::TGenericClassInfo 
         instance("TTable::iterator", "TTable.h", 179,
                  typeid(::TTable::iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TTablecLcLiterator_Dictionary, isa_proxy, 3,
                  sizeof(::TTable::iterator) );
      instance.SetNew(&new_TTablecLcLiterator);
      instance.SetNewArray(&newArray_TTablecLcLiterator);
      instance.SetDelete(&delete_TTablecLcLiterator);
      instance.SetDeleteArray(&deleteArray_TTablecLcLiterator);
      instance.SetDestructor(&destruct_TTablecLcLiterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTable::iterator*)
   {
      return GenerateInitInstanceLocal((::TTable::iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTable::iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TTablecLcLiterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TTable::iterator*)0x0)->GetClass();
      TTablecLcLiterator_TClassManip(theClass);
   return theClass;
   }

   static void TTablecLcLiterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TChair(void *p);
   static void deleteArray_TChair(void *p);
   static void destruct_TChair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TChair*)
   {
      ::TChair *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TChair >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TChair", ::TChair::Class_Version(), "TChair.h", 27,
                  typeid(::TChair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TChair::Dictionary, isa_proxy, 4,
                  sizeof(::TChair) );
      instance.SetDelete(&delete_TChair);
      instance.SetDeleteArray(&deleteArray_TChair);
      instance.SetDestructor(&destruct_TChair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TChair*)
   {
      return GenerateInitInstanceLocal((::TChair*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TChair*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TColumnView(void *p = 0);
   static void *newArray_TColumnView(Long_t size, void *p);
   static void delete_TColumnView(void *p);
   static void deleteArray_TColumnView(void *p);
   static void destruct_TColumnView(void *p);
   static void streamer_TColumnView(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TColumnView*)
   {
      ::TColumnView *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TColumnView >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TColumnView", ::TColumnView::Class_Version(), "TColumnView.h", 21,
                  typeid(::TColumnView), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TColumnView::Dictionary, isa_proxy, 16,
                  sizeof(::TColumnView) );
      instance.SetNew(&new_TColumnView);
      instance.SetNewArray(&newArray_TColumnView);
      instance.SetDelete(&delete_TColumnView);
      instance.SetDeleteArray(&deleteArray_TColumnView);
      instance.SetDestructor(&destruct_TColumnView);
      instance.SetStreamerFunc(&streamer_TColumnView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TColumnView*)
   {
      return GenerateInitInstanceLocal((::TColumnView*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TColumnView*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDataSetIter(void *p = 0);
   static void *newArray_TDataSetIter(Long_t size, void *p);
   static void delete_TDataSetIter(void *p);
   static void deleteArray_TDataSetIter(void *p);
   static void destruct_TDataSetIter(void *p);
   static void streamer_TDataSetIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDataSetIter*)
   {
      ::TDataSetIter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDataSetIter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDataSetIter", ::TDataSetIter::Class_Version(), "TDataSetIter.h", 35,
                  typeid(::TDataSetIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDataSetIter::Dictionary, isa_proxy, 16,
                  sizeof(::TDataSetIter) );
      instance.SetNew(&new_TDataSetIter);
      instance.SetNewArray(&newArray_TDataSetIter);
      instance.SetDelete(&delete_TDataSetIter);
      instance.SetDeleteArray(&deleteArray_TDataSetIter);
      instance.SetDestructor(&destruct_TDataSetIter);
      instance.SetStreamerFunc(&streamer_TDataSetIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDataSetIter*)
   {
      return GenerateInitInstanceLocal((::TDataSetIter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDataSetIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFileIter(void *p = 0);
   static void *newArray_TFileIter(Long_t size, void *p);
   static void delete_TFileIter(void *p);
   static void deleteArray_TFileIter(void *p);
   static void destruct_TFileIter(void *p);
   static void streamer_TFileIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileIter*)
   {
      ::TFileIter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileIter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFileIter", ::TFileIter::Class_Version(), "TFileIter.h", 53,
                  typeid(::TFileIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileIter::Dictionary, isa_proxy, 16,
                  sizeof(::TFileIter) );
      instance.SetNew(&new_TFileIter);
      instance.SetNewArray(&newArray_TFileIter);
      instance.SetDelete(&delete_TFileIter);
      instance.SetDeleteArray(&deleteArray_TFileIter);
      instance.SetDestructor(&destruct_TFileIter);
      instance.SetStreamerFunc(&streamer_TFileIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileIter*)
   {
      return GenerateInitInstanceLocal((::TFileIter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFileIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFileSet(void *p = 0);
   static void *newArray_TFileSet(Long_t size, void *p);
   static void delete_TFileSet(void *p);
   static void deleteArray_TFileSet(void *p);
   static void destruct_TFileSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileSet*)
   {
      ::TFileSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFileSet", ::TFileSet::Class_Version(), "TFileSet.h", 28,
                  typeid(::TFileSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileSet::Dictionary, isa_proxy, 4,
                  sizeof(::TFileSet) );
      instance.SetNew(&new_TFileSet);
      instance.SetNewArray(&newArray_TFileSet);
      instance.SetDelete(&delete_TFileSet);
      instance.SetDeleteArray(&deleteArray_TFileSet);
      instance.SetDestructor(&destruct_TFileSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileSet*)
   {
      return GenerateInitInstanceLocal((::TFileSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFileSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTableDescriptor(void *p = 0);
   static void *newArray_TTableDescriptor(Long_t size, void *p);
   static void delete_TTableDescriptor(void *p);
   static void deleteArray_TTableDescriptor(void *p);
   static void destruct_TTableDescriptor(void *p);
   static void streamer_TTableDescriptor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTableDescriptor*)
   {
      ::TTableDescriptor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTableDescriptor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTableDescriptor", ::TTableDescriptor::Class_Version(), "TTableDescriptor.h", 25,
                  typeid(::TTableDescriptor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTableDescriptor::Dictionary, isa_proxy, 17,
                  sizeof(::TTableDescriptor) );
      instance.SetNew(&new_TTableDescriptor);
      instance.SetNewArray(&newArray_TTableDescriptor);
      instance.SetDelete(&delete_TTableDescriptor);
      instance.SetDeleteArray(&deleteArray_TTableDescriptor);
      instance.SetDestructor(&destruct_TTableDescriptor);
      instance.SetStreamerFunc(&streamer_TTableDescriptor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTableDescriptor*)
   {
      return GenerateInitInstanceLocal((::TTableDescriptor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTableDescriptor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGenericTable(void *p = 0);
   static void *newArray_TGenericTable(Long_t size, void *p);
   static void delete_TGenericTable(void *p);
   static void deleteArray_TGenericTable(void *p);
   static void destruct_TGenericTable(void *p);
   static void streamer_TGenericTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenericTable*)
   {
      ::TGenericTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGenericTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGenericTable", ::TGenericTable::Class_Version(), "TGenericTable.h", 18,
                  typeid(::TGenericTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGenericTable::Dictionary, isa_proxy, 17,
                  sizeof(::TGenericTable) );
      instance.SetNew(&new_TGenericTable);
      instance.SetNewArray(&newArray_TGenericTable);
      instance.SetDelete(&delete_TGenericTable);
      instance.SetDeleteArray(&deleteArray_TGenericTable);
      instance.SetDestructor(&destruct_TGenericTable);
      instance.SetStreamerFunc(&streamer_TGenericTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenericTable*)
   {
      return GenerateInitInstanceLocal((::TGenericTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGenericTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TGenericTablecLcLiterator_Dictionary();
   static void TGenericTablecLcLiterator_TClassManip(TClass*);
   static void delete_TGenericTablecLcLiterator(void *p);
   static void deleteArray_TGenericTablecLcLiterator(void *p);
   static void destruct_TGenericTablecLcLiterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenericTable::iterator*)
   {
      ::TGenericTable::iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGenericTable::iterator));
      static ::ROOT::TGenericClassInfo 
         instance("TGenericTable::iterator", "TGenericTable.h", 26,
                  typeid(::TGenericTable::iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGenericTablecLcLiterator_Dictionary, isa_proxy, 3,
                  sizeof(::TGenericTable::iterator) );
      instance.SetDelete(&delete_TGenericTablecLcLiterator);
      instance.SetDeleteArray(&deleteArray_TGenericTablecLcLiterator);
      instance.SetDestructor(&destruct_TGenericTablecLcLiterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenericTable::iterator*)
   {
      return GenerateInitInstanceLocal((::TGenericTable::iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGenericTable::iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGenericTablecLcLiterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TGenericTable::iterator*)0x0)->GetClass();
      TGenericTablecLcLiterator_TClassManip(theClass);
   return theClass;
   }

   static void TGenericTablecLcLiterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TIndexTable(void *p = 0);
   static void *newArray_TIndexTable(Long_t size, void *p);
   static void delete_TIndexTable(void *p);
   static void deleteArray_TIndexTable(void *p);
   static void destruct_TIndexTable(void *p);
   static void streamer_TIndexTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TIndexTable*)
   {
      ::TIndexTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TIndexTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TIndexTable", ::TIndexTable::Class_Version(), "TIndexTable.h", 26,
                  typeid(::TIndexTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TIndexTable::Dictionary, isa_proxy, 17,
                  sizeof(::TIndexTable) );
      instance.SetNew(&new_TIndexTable);
      instance.SetNewArray(&newArray_TIndexTable);
      instance.SetDelete(&delete_TIndexTable);
      instance.SetDeleteArray(&deleteArray_TIndexTable);
      instance.SetDestructor(&destruct_TIndexTable);
      instance.SetStreamerFunc(&streamer_TIndexTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TIndexTable*)
   {
      return GenerateInitInstanceLocal((::TIndexTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TIndexTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TIndexTablecLcLiterator_Dictionary();
   static void TIndexTablecLcLiterator_TClassManip(TClass*);
   static void delete_TIndexTablecLcLiterator(void *p);
   static void deleteArray_TIndexTablecLcLiterator(void *p);
   static void destruct_TIndexTablecLcLiterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TIndexTable::iterator*)
   {
      ::TIndexTable::iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TIndexTable::iterator));
      static ::ROOT::TGenericClassInfo 
         instance("TIndexTable::iterator", "TIndexTable.h", 30,
                  typeid(::TIndexTable::iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TIndexTablecLcLiterator_Dictionary, isa_proxy, 3,
                  sizeof(::TIndexTable::iterator) );
      instance.SetDelete(&delete_TIndexTablecLcLiterator);
      instance.SetDeleteArray(&deleteArray_TIndexTablecLcLiterator);
      instance.SetDestructor(&destruct_TIndexTablecLcLiterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TIndexTable::iterator*)
   {
      return GenerateInitInstanceLocal((::TIndexTable::iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TIndexTable::iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TIndexTablecLcLiterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TIndexTable::iterator*)0x0)->GetClass();
      TIndexTablecLcLiterator_TClassManip(theClass);
   return theClass;
   }

   static void TIndexTablecLcLiterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TObjectSet(void *p = 0);
   static void *newArray_TObjectSet(Long_t size, void *p);
   static void delete_TObjectSet(void *p);
   static void deleteArray_TObjectSet(void *p);
   static void destruct_TObjectSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TObjectSet*)
   {
      ::TObjectSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TObjectSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TObjectSet", ::TObjectSet::Class_Version(), "TObjectSet.h", 27,
                  typeid(::TObjectSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TObjectSet::Dictionary, isa_proxy, 4,
                  sizeof(::TObjectSet) );
      instance.SetNew(&new_TObjectSet);
      instance.SetNewArray(&newArray_TObjectSet);
      instance.SetDelete(&delete_TObjectSet);
      instance.SetDeleteArray(&deleteArray_TObjectSet);
      instance.SetDestructor(&destruct_TObjectSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TObjectSet*)
   {
      return GenerateInitInstanceLocal((::TObjectSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TObjectSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPoints3D(void *p = 0);
   static void *newArray_TPoints3D(Long_t size, void *p);
   static void delete_TPoints3D(void *p);
   static void deleteArray_TPoints3D(void *p);
   static void destruct_TPoints3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPoints3D*)
   {
      ::TPoints3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPoints3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPoints3D", ::TPoints3D::Class_Version(), "TPoints3D.h", 26,
                  typeid(::TPoints3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPoints3D::Dictionary, isa_proxy, 4,
                  sizeof(::TPoints3D) );
      instance.SetNew(&new_TPoints3D);
      instance.SetNewArray(&newArray_TPoints3D);
      instance.SetDelete(&delete_TPoints3D);
      instance.SetDeleteArray(&deleteArray_TPoints3D);
      instance.SetDestructor(&destruct_TPoints3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPoints3D*)
   {
      return GenerateInitInstanceLocal((::TPoints3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPoints3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPointsArray3D(void *p = 0);
   static void *newArray_TPointsArray3D(Long_t size, void *p);
   static void delete_TPointsArray3D(void *p);
   static void deleteArray_TPointsArray3D(void *p);
   static void destruct_TPointsArray3D(void *p);
   static void streamer_TPointsArray3D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPointsArray3D*)
   {
      ::TPointsArray3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPointsArray3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPointsArray3D", ::TPointsArray3D::Class_Version(), "TPointsArray3D.h", 27,
                  typeid(::TPointsArray3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPointsArray3D::Dictionary, isa_proxy, 17,
                  sizeof(::TPointsArray3D) );
      instance.SetNew(&new_TPointsArray3D);
      instance.SetNewArray(&newArray_TPointsArray3D);
      instance.SetDelete(&delete_TPointsArray3D);
      instance.SetDeleteArray(&deleteArray_TPointsArray3D);
      instance.SetDestructor(&destruct_TPointsArray3D);
      instance.SetStreamerFunc(&streamer_TPointsArray3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPointsArray3D*)
   {
      return GenerateInitInstanceLocal((::TPointsArray3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPointsArray3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPolyLineShape(void *p = 0);
   static void *newArray_TPolyLineShape(Long_t size, void *p);
   static void delete_TPolyLineShape(void *p);
   static void deleteArray_TPolyLineShape(void *p);
   static void destruct_TPolyLineShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPolyLineShape*)
   {
      ::TPolyLineShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPolyLineShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPolyLineShape", ::TPolyLineShape::Class_Version(), "TPolyLineShape.h", 23,
                  typeid(::TPolyLineShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPolyLineShape::Dictionary, isa_proxy, 4,
                  sizeof(::TPolyLineShape) );
      instance.SetNew(&new_TPolyLineShape);
      instance.SetNewArray(&newArray_TPolyLineShape);
      instance.SetDelete(&delete_TPolyLineShape);
      instance.SetDeleteArray(&deleteArray_TPolyLineShape);
      instance.SetDestructor(&destruct_TPolyLineShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPolyLineShape*)
   {
      return GenerateInitInstanceLocal((::TPolyLineShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPolyLineShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TResponseTable(void *p = 0);
   static void *newArray_TResponseTable(Long_t size, void *p);
   static void delete_TResponseTable(void *p);
   static void deleteArray_TResponseTable(void *p);
   static void destruct_TResponseTable(void *p);
   static void streamer_TResponseTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TResponseTable*)
   {
      ::TResponseTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TResponseTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TResponseTable", ::TResponseTable::Class_Version(), "TResponseTable.h", 14,
                  typeid(::TResponseTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TResponseTable::Dictionary, isa_proxy, 17,
                  sizeof(::TResponseTable) );
      instance.SetNew(&new_TResponseTable);
      instance.SetNewArray(&newArray_TResponseTable);
      instance.SetDelete(&delete_TResponseTable);
      instance.SetDeleteArray(&deleteArray_TResponseTable);
      instance.SetDestructor(&destruct_TResponseTable);
      instance.SetStreamerFunc(&streamer_TResponseTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TResponseTable*)
   {
      return GenerateInitInstanceLocal((::TResponseTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TResponseTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTableSorter(void *p = 0);
   static void *newArray_TTableSorter(Long_t size, void *p);
   static void delete_TTableSorter(void *p);
   static void deleteArray_TTableSorter(void *p);
   static void destruct_TTableSorter(void *p);
   static void streamer_TTableSorter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTableSorter*)
   {
      ::TTableSorter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTableSorter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTableSorter", ::TTableSorter::Class_Version(), "TTableSorter.h", 46,
                  typeid(::TTableSorter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTableSorter::Dictionary, isa_proxy, 16,
                  sizeof(::TTableSorter) );
      instance.SetNew(&new_TTableSorter);
      instance.SetNewArray(&newArray_TTableSorter);
      instance.SetDelete(&delete_TTableSorter);
      instance.SetDeleteArray(&deleteArray_TTableSorter);
      instance.SetDestructor(&destruct_TTableSorter);
      instance.SetStreamerFunc(&streamer_TTableSorter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTableSorter*)
   {
      return GenerateInitInstanceLocal((::TTableSorter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTableSorter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTablePoints(void *p);
   static void deleteArray_TTablePoints(void *p);
   static void destruct_TTablePoints(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTablePoints*)
   {
      ::TTablePoints *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTablePoints >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTablePoints", ::TTablePoints::Class_Version(), "TTablePoints.h", 19,
                  typeid(::TTablePoints), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTablePoints::Dictionary, isa_proxy, 4,
                  sizeof(::TTablePoints) );
      instance.SetDelete(&delete_TTablePoints);
      instance.SetDeleteArray(&deleteArray_TTablePoints);
      instance.SetDestructor(&destruct_TTablePoints);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTablePoints*)
   {
      return GenerateInitInstanceLocal((::TTablePoints*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTablePoints*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTable3Points(void *p = 0);
   static void *newArray_TTable3Points(Long_t size, void *p);
   static void delete_TTable3Points(void *p);
   static void deleteArray_TTable3Points(void *p);
   static void destruct_TTable3Points(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTable3Points*)
   {
      ::TTable3Points *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTable3Points >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTable3Points", ::TTable3Points::Class_Version(), "TTable3Points.h", 17,
                  typeid(::TTable3Points), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTable3Points::Dictionary, isa_proxy, 4,
                  sizeof(::TTable3Points) );
      instance.SetNew(&new_TTable3Points);
      instance.SetNewArray(&newArray_TTable3Points);
      instance.SetDelete(&delete_TTable3Points);
      instance.SetDeleteArray(&deleteArray_TTable3Points);
      instance.SetDestructor(&destruct_TTable3Points);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTable3Points*)
   {
      return GenerateInitInstanceLocal((::TTable3Points*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTable3Points*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTableIter(void *p);
   static void deleteArray_TTableIter(void *p);
   static void destruct_TTableIter(void *p);
   static void streamer_TTableIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTableIter*)
   {
      ::TTableIter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTableIter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTableIter", ::TTableIter::Class_Version(), "TTableIter.h", 24,
                  typeid(::TTableIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTableIter::Dictionary, isa_proxy, 16,
                  sizeof(::TTableIter) );
      instance.SetDelete(&delete_TTableIter);
      instance.SetDeleteArray(&deleteArray_TTableIter);
      instance.SetDestructor(&destruct_TTableIter);
      instance.SetStreamerFunc(&streamer_TTableIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTableIter*)
   {
      return GenerateInitInstanceLocal((::TTableIter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTableIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTableMap(void *p = 0);
   static void *newArray_TTableMap(Long_t size, void *p);
   static void delete_TTableMap(void *p);
   static void deleteArray_TTableMap(void *p);
   static void destruct_TTableMap(void *p);
   static void streamer_TTableMap(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTableMap*)
   {
      ::TTableMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTableMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTableMap", ::TTableMap::Class_Version(), "TTableMap.h", 29,
                  typeid(::TTableMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTableMap::Dictionary, isa_proxy, 17,
                  sizeof(::TTableMap) );
      instance.SetNew(&new_TTableMap);
      instance.SetNewArray(&newArray_TTableMap);
      instance.SetDelete(&delete_TTableMap);
      instance.SetDeleteArray(&deleteArray_TTableMap);
      instance.SetDestructor(&destruct_TTableMap);
      instance.SetStreamerFunc(&streamer_TTableMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTableMap*)
   {
      return GenerateInitInstanceLocal((::TTableMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTableMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TTablePadView3D_Dictionary();
   static void TTablePadView3D_TClassManip(TClass*);
   static void *new_TTablePadView3D(void *p = 0);
   static void *newArray_TTablePadView3D(Long_t size, void *p);
   static void delete_TTablePadView3D(void *p);
   static void deleteArray_TTablePadView3D(void *p);
   static void destruct_TTablePadView3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTablePadView3D*)
   {
      ::TTablePadView3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TTablePadView3D));
      static ::ROOT::TGenericClassInfo 
         instance("TTablePadView3D", "TTablePadView3D.h", 36,
                  typeid(::TTablePadView3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TTablePadView3D_Dictionary, isa_proxy, 0,
                  sizeof(::TTablePadView3D) );
      instance.SetNew(&new_TTablePadView3D);
      instance.SetNewArray(&newArray_TTablePadView3D);
      instance.SetDelete(&delete_TTablePadView3D);
      instance.SetDeleteArray(&deleteArray_TTablePadView3D);
      instance.SetDestructor(&destruct_TTablePadView3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTablePadView3D*)
   {
      return GenerateInitInstanceLocal((::TTablePadView3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTablePadView3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TTablePadView3D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TTablePadView3D*)0x0)->GetClass();
      TTablePadView3D_TClassManip(theClass);
   return theClass;
   }

   static void TTablePadView3D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TVolume(void *p = 0);
   static void *newArray_TVolume(Long_t size, void *p);
   static void delete_TVolume(void *p);
   static void deleteArray_TVolume(void *p);
   static void destruct_TVolume(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVolume*)
   {
      ::TVolume *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVolume >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVolume", ::TVolume::Class_Version(), "TVolume.h", 36,
                  typeid(::TVolume), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVolume::Dictionary, isa_proxy, 4,
                  sizeof(::TVolume) );
      instance.SetNew(&new_TVolume);
      instance.SetNewArray(&newArray_TVolume);
      instance.SetDelete(&delete_TVolume);
      instance.SetDeleteArray(&deleteArray_TVolume);
      instance.SetDestructor(&destruct_TVolume);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVolume*)
   {
      return GenerateInitInstanceLocal((::TVolume*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVolume*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TVolumePosition(void *p = 0);
   static void *newArray_TVolumePosition(Long_t size, void *p);
   static void delete_TVolumePosition(void *p);
   static void deleteArray_TVolumePosition(void *p);
   static void destruct_TVolumePosition(void *p);
   static void streamer_TVolumePosition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVolumePosition*)
   {
      ::TVolumePosition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVolumePosition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVolumePosition", ::TVolumePosition::Class_Version(), "TVolumePosition.h", 28,
                  typeid(::TVolumePosition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVolumePosition::Dictionary, isa_proxy, 17,
                  sizeof(::TVolumePosition) );
      instance.SetNew(&new_TVolumePosition);
      instance.SetNewArray(&newArray_TVolumePosition);
      instance.SetDelete(&delete_TVolumePosition);
      instance.SetDeleteArray(&deleteArray_TVolumePosition);
      instance.SetDestructor(&destruct_TVolumePosition);
      instance.SetStreamerFunc(&streamer_TVolumePosition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVolumePosition*)
   {
      return GenerateInitInstanceLocal((::TVolumePosition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVolumePosition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TVolumeView(void *p = 0);
   static void *newArray_TVolumeView(Long_t size, void *p);
   static void delete_TVolumeView(void *p);
   static void deleteArray_TVolumeView(void *p);
   static void destruct_TVolumeView(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVolumeView*)
   {
      ::TVolumeView *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVolumeView >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVolumeView", ::TVolumeView::Class_Version(), "TVolumeView.h", 26,
                  typeid(::TVolumeView), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVolumeView::Dictionary, isa_proxy, 4,
                  sizeof(::TVolumeView) );
      instance.SetNew(&new_TVolumeView);
      instance.SetNewArray(&newArray_TVolumeView);
      instance.SetDelete(&delete_TVolumeView);
      instance.SetDeleteArray(&deleteArray_TVolumeView);
      instance.SetDestructor(&destruct_TVolumeView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVolumeView*)
   {
      return GenerateInitInstanceLocal((::TVolumeView*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVolumeView*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVolumeViewIter(void *p);
   static void deleteArray_TVolumeViewIter(void *p);
   static void destruct_TVolumeViewIter(void *p);
   static void streamer_TVolumeViewIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVolumeViewIter*)
   {
      ::TVolumeViewIter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVolumeViewIter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVolumeViewIter", ::TVolumeViewIter::Class_Version(), "TVolumeViewIter.h", 21,
                  typeid(::TVolumeViewIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVolumeViewIter::Dictionary, isa_proxy, 16,
                  sizeof(::TVolumeViewIter) );
      instance.SetDelete(&delete_TVolumeViewIter);
      instance.SetDeleteArray(&deleteArray_TVolumeViewIter);
      instance.SetDestructor(&destruct_TVolumeViewIter);
      instance.SetStreamerFunc(&streamer_TVolumeViewIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVolumeViewIter*)
   {
      return GenerateInitInstanceLocal((::TVolumeViewIter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVolumeViewIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TCL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCL::Class_Name()
{
   return "TCL";
}

//______________________________________________________________________________
const char *TCL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDataSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDataSet::Class_Name()
{
   return "TDataSet";
}

//______________________________________________________________________________
const char *TDataSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDataSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDataSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDataSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDataSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDataSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDataSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDataSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTable::Class_Name()
{
   return "TTable";
}

//______________________________________________________________________________
const char *TTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TChair::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TChair::Class_Name()
{
   return "TChair";
}

//______________________________________________________________________________
const char *TChair::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TChair*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TChair::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TChair*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TChair::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TChair*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TChair::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TChair*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TColumnView::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TColumnView::Class_Name()
{
   return "TColumnView";
}

//______________________________________________________________________________
const char *TColumnView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TColumnView*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TColumnView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TColumnView*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TColumnView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TColumnView*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TColumnView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TColumnView*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDataSetIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDataSetIter::Class_Name()
{
   return "TDataSetIter";
}

//______________________________________________________________________________
const char *TDataSetIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDataSetIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDataSetIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDataSetIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDataSetIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDataSetIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDataSetIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDataSetIter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileIter::Class_Name()
{
   return "TFileIter";
}

//______________________________________________________________________________
const char *TFileIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFileIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileIter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileSet::Class_Name()
{
   return "TFileSet";
}

//______________________________________________________________________________
const char *TFileSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFileSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTableDescriptor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTableDescriptor::Class_Name()
{
   return "TTableDescriptor";
}

//______________________________________________________________________________
const char *TTableDescriptor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableDescriptor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTableDescriptor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableDescriptor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTableDescriptor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableDescriptor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTableDescriptor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableDescriptor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGenericTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGenericTable::Class_Name()
{
   return "TGenericTable";
}

//______________________________________________________________________________
const char *TGenericTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenericTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGenericTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGenericTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGenericTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenericTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGenericTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGenericTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TIndexTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TIndexTable::Class_Name()
{
   return "TIndexTable";
}

//______________________________________________________________________________
const char *TIndexTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndexTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TIndexTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndexTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TIndexTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndexTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TIndexTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndexTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TObjectSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TObjectSet::Class_Name()
{
   return "TObjectSet";
}

//______________________________________________________________________________
const char *TObjectSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TObjectSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TObjectSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TObjectSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TObjectSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TObjectSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TObjectSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TObjectSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPoints3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPoints3D::Class_Name()
{
   return "TPoints3D";
}

//______________________________________________________________________________
const char *TPoints3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPoints3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPoints3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPoints3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPoints3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPoints3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPoints3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPoints3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPointsArray3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPointsArray3D::Class_Name()
{
   return "TPointsArray3D";
}

//______________________________________________________________________________
const char *TPointsArray3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPointsArray3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPointsArray3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPointsArray3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPointsArray3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPointsArray3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPointsArray3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPointsArray3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPolyLineShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPolyLineShape::Class_Name()
{
   return "TPolyLineShape";
}

//______________________________________________________________________________
const char *TPolyLineShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyLineShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPolyLineShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyLineShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPolyLineShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyLineShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPolyLineShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyLineShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TResponseTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TResponseTable::Class_Name()
{
   return "TResponseTable";
}

//______________________________________________________________________________
const char *TResponseTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TResponseTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TResponseTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TResponseTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TResponseTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TResponseTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TResponseTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TResponseTable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTableSorter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTableSorter::Class_Name()
{
   return "TTableSorter";
}

//______________________________________________________________________________
const char *TTableSorter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableSorter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTableSorter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableSorter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTableSorter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableSorter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTableSorter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableSorter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTablePoints::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTablePoints::Class_Name()
{
   return "TTablePoints";
}

//______________________________________________________________________________
const char *TTablePoints::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTablePoints*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTablePoints::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTablePoints*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTablePoints::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTablePoints*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTablePoints::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTablePoints*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTable3Points::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTable3Points::Class_Name()
{
   return "TTable3Points";
}

//______________________________________________________________________________
const char *TTable3Points::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTable3Points*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTable3Points::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTable3Points*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTable3Points::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTable3Points*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTable3Points::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTable3Points*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTableIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTableIter::Class_Name()
{
   return "TTableIter";
}

//______________________________________________________________________________
const char *TTableIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTableIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTableIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTableIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableIter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTableMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTableMap::Class_Name()
{
   return "TTableMap";
}

//______________________________________________________________________________
const char *TTableMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTableMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTableMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTableMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTableMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTableMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVolume::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVolume::Class_Name()
{
   return "TVolume";
}

//______________________________________________________________________________
const char *TVolume::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVolume*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVolume::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVolume*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVolume::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVolume*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVolume::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVolume*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVolumePosition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVolumePosition::Class_Name()
{
   return "TVolumePosition";
}

//______________________________________________________________________________
const char *TVolumePosition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVolumePosition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVolumePosition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVolumePosition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVolumePosition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVolumePosition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVolumePosition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVolumePosition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVolumeView::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVolumeView::Class_Name()
{
   return "TVolumeView";
}

//______________________________________________________________________________
const char *TVolumeView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVolumeView*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVolumeView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVolumeView*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVolumeView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVolumeView*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVolumeView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVolumeView*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVolumeViewIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVolumeViewIter::Class_Name()
{
   return "TVolumeViewIter";
}

//______________________________________________________________________________
const char *TVolumeViewIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVolumeViewIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVolumeViewIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVolumeViewIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVolumeViewIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVolumeViewIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVolumeViewIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVolumeViewIter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TCL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCL.

   ::Error("TCL::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCL(void *p) {
      return  p ? new(p) ::TCL : new ::TCL;
   }
   static void *newArray_TCL(Long_t nElements, void *p) {
      return p ? new(p) ::TCL[nElements] : new ::TCL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCL(void *p) {
      delete ((::TCL*)p);
   }
   static void deleteArray_TCL(void *p) {
      delete [] ((::TCL*)p);
   }
   static void destruct_TCL(void *p) {
      typedef ::TCL current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCL(TBuffer &buf, void *obj) {
      ((::TCL*)obj)->::TCL::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCL

//______________________________________________________________________________
void TDataSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDataSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDataSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDataSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDataSet(void *p) {
      return  p ? new(p) ::TDataSet : new ::TDataSet;
   }
   static void *newArray_TDataSet(Long_t nElements, void *p) {
      return p ? new(p) ::TDataSet[nElements] : new ::TDataSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDataSet(void *p) {
      delete ((::TDataSet*)p);
   }
   static void deleteArray_TDataSet(void *p) {
      delete [] ((::TDataSet*)p);
   }
   static void destruct_TDataSet(void *p) {
      typedef ::TDataSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDataSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_tableDescriptor_st(void *p) {
      return  p ? new(p) ::tableDescriptor_st : new ::tableDescriptor_st;
   }
   static void *newArray_tableDescriptor_st(Long_t nElements, void *p) {
      return p ? new(p) ::tableDescriptor_st[nElements] : new ::tableDescriptor_st[nElements];
   }
   // Wrapper around operator delete
   static void delete_tableDescriptor_st(void *p) {
      delete ((::tableDescriptor_st*)p);
   }
   static void deleteArray_tableDescriptor_st(void *p) {
      delete [] ((::tableDescriptor_st*)p);
   }
   static void destruct_tableDescriptor_st(void *p) {
      typedef ::tableDescriptor_st current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tableDescriptor_st

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTable(void *p) {
      return  p ? new(p) ::TTable : new ::TTable;
   }
   static void *newArray_TTable(Long_t nElements, void *p) {
      return p ? new(p) ::TTable[nElements] : new ::TTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTable(void *p) {
      delete ((::TTable*)p);
   }
   static void deleteArray_TTable(void *p) {
      delete [] ((::TTable*)p);
   }
   static void destruct_TTable(void *p) {
      typedef ::TTable current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTable(TBuffer &buf, void *obj) {
      ((::TTable*)obj)->::TTable::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTable

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTablecLcLiterator(void *p) {
      return  p ? new(p) ::TTable::iterator : new ::TTable::iterator;
   }
   static void *newArray_TTablecLcLiterator(Long_t nElements, void *p) {
      return p ? new(p) ::TTable::iterator[nElements] : new ::TTable::iterator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTablecLcLiterator(void *p) {
      delete ((::TTable::iterator*)p);
   }
   static void deleteArray_TTablecLcLiterator(void *p) {
      delete [] ((::TTable::iterator*)p);
   }
   static void destruct_TTablecLcLiterator(void *p) {
      typedef ::TTable::iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTable::iterator

//______________________________________________________________________________
void TChair::Streamer(TBuffer &R__b)
{
   // Stream an object of class TChair.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TChair::Class(),this);
   } else {
      R__b.WriteClassBuffer(TChair::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TChair(void *p) {
      delete ((::TChair*)p);
   }
   static void deleteArray_TChair(void *p) {
      delete [] ((::TChair*)p);
   }
   static void destruct_TChair(void *p) {
      typedef ::TChair current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TChair

//______________________________________________________________________________
void TColumnView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TColumnView.

   TChair::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TColumnView(void *p) {
      return  p ? new(p) ::TColumnView : new ::TColumnView;
   }
   static void *newArray_TColumnView(Long_t nElements, void *p) {
      return p ? new(p) ::TColumnView[nElements] : new ::TColumnView[nElements];
   }
   // Wrapper around operator delete
   static void delete_TColumnView(void *p) {
      delete ((::TColumnView*)p);
   }
   static void deleteArray_TColumnView(void *p) {
      delete [] ((::TColumnView*)p);
   }
   static void destruct_TColumnView(void *p) {
      typedef ::TColumnView current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TColumnView(TBuffer &buf, void *obj) {
      ((::TColumnView*)obj)->::TColumnView::Streamer(buf);
   }
} // end of namespace ROOT for class ::TColumnView

//______________________________________________________________________________
void TDataSetIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDataSetIter.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDataSetIter(void *p) {
      return  p ? new(p) ::TDataSetIter : new ::TDataSetIter;
   }
   static void *newArray_TDataSetIter(Long_t nElements, void *p) {
      return p ? new(p) ::TDataSetIter[nElements] : new ::TDataSetIter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDataSetIter(void *p) {
      delete ((::TDataSetIter*)p);
   }
   static void deleteArray_TDataSetIter(void *p) {
      delete [] ((::TDataSetIter*)p);
   }
   static void destruct_TDataSetIter(void *p) {
      typedef ::TDataSetIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDataSetIter(TBuffer &buf, void *obj) {
      ((::TDataSetIter*)obj)->::TDataSetIter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TDataSetIter

//______________________________________________________________________________
void TFileIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileIter.

   TListIter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFileIter(void *p) {
      return  p ? new(p) ::TFileIter : new ::TFileIter;
   }
   static void *newArray_TFileIter(Long_t nElements, void *p) {
      return p ? new(p) ::TFileIter[nElements] : new ::TFileIter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFileIter(void *p) {
      delete ((::TFileIter*)p);
   }
   static void deleteArray_TFileIter(void *p) {
      delete [] ((::TFileIter*)p);
   }
   static void destruct_TFileIter(void *p) {
      typedef ::TFileIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFileIter(TBuffer &buf, void *obj) {
      ((::TFileIter*)obj)->::TFileIter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFileIter

//______________________________________________________________________________
void TFileSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFileSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFileSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFileSet(void *p) {
      return  p ? new(p) ::TFileSet : new ::TFileSet;
   }
   static void *newArray_TFileSet(Long_t nElements, void *p) {
      return p ? new(p) ::TFileSet[nElements] : new ::TFileSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFileSet(void *p) {
      delete ((::TFileSet*)p);
   }
   static void deleteArray_TFileSet(void *p) {
      delete [] ((::TFileSet*)p);
   }
   static void destruct_TFileSet(void *p) {
      typedef ::TFileSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFileSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTableDescriptor(void *p) {
      return  p ? new(p) ::TTableDescriptor : new ::TTableDescriptor;
   }
   static void *newArray_TTableDescriptor(Long_t nElements, void *p) {
      return p ? new(p) ::TTableDescriptor[nElements] : new ::TTableDescriptor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTableDescriptor(void *p) {
      delete ((::TTableDescriptor*)p);
   }
   static void deleteArray_TTableDescriptor(void *p) {
      delete [] ((::TTableDescriptor*)p);
   }
   static void destruct_TTableDescriptor(void *p) {
      typedef ::TTableDescriptor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTableDescriptor(TBuffer &buf, void *obj) {
      ((::TTableDescriptor*)obj)->::TTableDescriptor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTableDescriptor

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGenericTable(void *p) {
      return  p ? new(p) ::TGenericTable : new ::TGenericTable;
   }
   static void *newArray_TGenericTable(Long_t nElements, void *p) {
      return p ? new(p) ::TGenericTable[nElements] : new ::TGenericTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGenericTable(void *p) {
      delete ((::TGenericTable*)p);
   }
   static void deleteArray_TGenericTable(void *p) {
      delete [] ((::TGenericTable*)p);
   }
   static void destruct_TGenericTable(void *p) {
      typedef ::TGenericTable current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGenericTable(TBuffer &buf, void *obj) {
      ((::TGenericTable*)obj)->::TGenericTable::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGenericTable

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGenericTablecLcLiterator(void *p) {
      delete ((::TGenericTable::iterator*)p);
   }
   static void deleteArray_TGenericTablecLcLiterator(void *p) {
      delete [] ((::TGenericTable::iterator*)p);
   }
   static void destruct_TGenericTablecLcLiterator(void *p) {
      typedef ::TGenericTable::iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGenericTable::iterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_TIndexTable(void *p) {
      return  p ? new(p) ::TIndexTable : new ::TIndexTable;
   }
   static void *newArray_TIndexTable(Long_t nElements, void *p) {
      return p ? new(p) ::TIndexTable[nElements] : new ::TIndexTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TIndexTable(void *p) {
      delete ((::TIndexTable*)p);
   }
   static void deleteArray_TIndexTable(void *p) {
      delete [] ((::TIndexTable*)p);
   }
   static void destruct_TIndexTable(void *p) {
      typedef ::TIndexTable current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TIndexTable(TBuffer &buf, void *obj) {
      ((::TIndexTable*)obj)->::TIndexTable::Streamer(buf);
   }
} // end of namespace ROOT for class ::TIndexTable

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TIndexTablecLcLiterator(void *p) {
      delete ((::TIndexTable::iterator*)p);
   }
   static void deleteArray_TIndexTablecLcLiterator(void *p) {
      delete [] ((::TIndexTable::iterator*)p);
   }
   static void destruct_TIndexTablecLcLiterator(void *p) {
      typedef ::TIndexTable::iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TIndexTable::iterator

//______________________________________________________________________________
void TObjectSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TObjectSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TObjectSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TObjectSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TObjectSet(void *p) {
      return  p ? new(p) ::TObjectSet : new ::TObjectSet;
   }
   static void *newArray_TObjectSet(Long_t nElements, void *p) {
      return p ? new(p) ::TObjectSet[nElements] : new ::TObjectSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TObjectSet(void *p) {
      delete ((::TObjectSet*)p);
   }
   static void deleteArray_TObjectSet(void *p) {
      delete [] ((::TObjectSet*)p);
   }
   static void destruct_TObjectSet(void *p) {
      typedef ::TObjectSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TObjectSet

//______________________________________________________________________________
void TPoints3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPoints3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPoints3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPoints3D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPoints3D(void *p) {
      return  p ? new(p) ::TPoints3D : new ::TPoints3D;
   }
   static void *newArray_TPoints3D(Long_t nElements, void *p) {
      return p ? new(p) ::TPoints3D[nElements] : new ::TPoints3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPoints3D(void *p) {
      delete ((::TPoints3D*)p);
   }
   static void deleteArray_TPoints3D(void *p) {
      delete [] ((::TPoints3D*)p);
   }
   static void destruct_TPoints3D(void *p) {
      typedef ::TPoints3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPoints3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPointsArray3D(void *p) {
      return  p ? new(p) ::TPointsArray3D : new ::TPointsArray3D;
   }
   static void *newArray_TPointsArray3D(Long_t nElements, void *p) {
      return p ? new(p) ::TPointsArray3D[nElements] : new ::TPointsArray3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPointsArray3D(void *p) {
      delete ((::TPointsArray3D*)p);
   }
   static void deleteArray_TPointsArray3D(void *p) {
      delete [] ((::TPointsArray3D*)p);
   }
   static void destruct_TPointsArray3D(void *p) {
      typedef ::TPointsArray3D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPointsArray3D(TBuffer &buf, void *obj) {
      ((::TPointsArray3D*)obj)->::TPointsArray3D::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPointsArray3D

//______________________________________________________________________________
void TPolyLineShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPolyLineShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPolyLineShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPolyLineShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPolyLineShape(void *p) {
      return  p ? new(p) ::TPolyLineShape : new ::TPolyLineShape;
   }
   static void *newArray_TPolyLineShape(Long_t nElements, void *p) {
      return p ? new(p) ::TPolyLineShape[nElements] : new ::TPolyLineShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPolyLineShape(void *p) {
      delete ((::TPolyLineShape*)p);
   }
   static void deleteArray_TPolyLineShape(void *p) {
      delete [] ((::TPolyLineShape*)p);
   }
   static void destruct_TPolyLineShape(void *p) {
      typedef ::TPolyLineShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPolyLineShape

namespace ROOT {
   // Wrappers around operator new
   static void *new_TResponseTable(void *p) {
      return  p ? new(p) ::TResponseTable : new ::TResponseTable;
   }
   static void *newArray_TResponseTable(Long_t nElements, void *p) {
      return p ? new(p) ::TResponseTable[nElements] : new ::TResponseTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TResponseTable(void *p) {
      delete ((::TResponseTable*)p);
   }
   static void deleteArray_TResponseTable(void *p) {
      delete [] ((::TResponseTable*)p);
   }
   static void destruct_TResponseTable(void *p) {
      typedef ::TResponseTable current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TResponseTable(TBuffer &buf, void *obj) {
      ((::TResponseTable*)obj)->::TResponseTable::Streamer(buf);
   }
} // end of namespace ROOT for class ::TResponseTable

//______________________________________________________________________________
void TTableSorter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTableSorter.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTableSorter(void *p) {
      return  p ? new(p) ::TTableSorter : new ::TTableSorter;
   }
   static void *newArray_TTableSorter(Long_t nElements, void *p) {
      return p ? new(p) ::TTableSorter[nElements] : new ::TTableSorter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTableSorter(void *p) {
      delete ((::TTableSorter*)p);
   }
   static void deleteArray_TTableSorter(void *p) {
      delete [] ((::TTableSorter*)p);
   }
   static void destruct_TTableSorter(void *p) {
      typedef ::TTableSorter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTableSorter(TBuffer &buf, void *obj) {
      ((::TTableSorter*)obj)->::TTableSorter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTableSorter

//______________________________________________________________________________
void TTablePoints::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTablePoints.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTablePoints::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTablePoints::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTablePoints(void *p) {
      delete ((::TTablePoints*)p);
   }
   static void deleteArray_TTablePoints(void *p) {
      delete [] ((::TTablePoints*)p);
   }
   static void destruct_TTablePoints(void *p) {
      typedef ::TTablePoints current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTablePoints

//______________________________________________________________________________
void TTable3Points::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTable3Points.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTable3Points::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTable3Points::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTable3Points(void *p) {
      return  p ? new(p) ::TTable3Points : new ::TTable3Points;
   }
   static void *newArray_TTable3Points(Long_t nElements, void *p) {
      return p ? new(p) ::TTable3Points[nElements] : new ::TTable3Points[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTable3Points(void *p) {
      delete ((::TTable3Points*)p);
   }
   static void deleteArray_TTable3Points(void *p) {
      delete [] ((::TTable3Points*)p);
   }
   static void destruct_TTable3Points(void *p) {
      typedef ::TTable3Points current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTable3Points

//______________________________________________________________________________
void TTableIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTableIter.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTableIter(void *p) {
      delete ((::TTableIter*)p);
   }
   static void deleteArray_TTableIter(void *p) {
      delete [] ((::TTableIter*)p);
   }
   static void destruct_TTableIter(void *p) {
      typedef ::TTableIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTableIter(TBuffer &buf, void *obj) {
      ((::TTableIter*)obj)->::TTableIter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTableIter

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTableMap(void *p) {
      return  p ? new(p) ::TTableMap : new ::TTableMap;
   }
   static void *newArray_TTableMap(Long_t nElements, void *p) {
      return p ? new(p) ::TTableMap[nElements] : new ::TTableMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTableMap(void *p) {
      delete ((::TTableMap*)p);
   }
   static void deleteArray_TTableMap(void *p) {
      delete [] ((::TTableMap*)p);
   }
   static void destruct_TTableMap(void *p) {
      typedef ::TTableMap current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTableMap(TBuffer &buf, void *obj) {
      ((::TTableMap*)obj)->::TTableMap::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTableMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTablePadView3D(void *p) {
      return  p ? new(p) ::TTablePadView3D : new ::TTablePadView3D;
   }
   static void *newArray_TTablePadView3D(Long_t nElements, void *p) {
      return p ? new(p) ::TTablePadView3D[nElements] : new ::TTablePadView3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTablePadView3D(void *p) {
      delete ((::TTablePadView3D*)p);
   }
   static void deleteArray_TTablePadView3D(void *p) {
      delete [] ((::TTablePadView3D*)p);
   }
   static void destruct_TTablePadView3D(void *p) {
      typedef ::TTablePadView3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTablePadView3D

//______________________________________________________________________________
void TVolume::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVolume.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVolume::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVolume::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVolume(void *p) {
      return  p ? new(p) ::TVolume : new ::TVolume;
   }
   static void *newArray_TVolume(Long_t nElements, void *p) {
      return p ? new(p) ::TVolume[nElements] : new ::TVolume[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVolume(void *p) {
      delete ((::TVolume*)p);
   }
   static void deleteArray_TVolume(void *p) {
      delete [] ((::TVolume*)p);
   }
   static void destruct_TVolume(void *p) {
      typedef ::TVolume current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVolume

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVolumePosition(void *p) {
      return  p ? new(p) ::TVolumePosition : new ::TVolumePosition;
   }
   static void *newArray_TVolumePosition(Long_t nElements, void *p) {
      return p ? new(p) ::TVolumePosition[nElements] : new ::TVolumePosition[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVolumePosition(void *p) {
      delete ((::TVolumePosition*)p);
   }
   static void deleteArray_TVolumePosition(void *p) {
      delete [] ((::TVolumePosition*)p);
   }
   static void destruct_TVolumePosition(void *p) {
      typedef ::TVolumePosition current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVolumePosition(TBuffer &buf, void *obj) {
      ((::TVolumePosition*)obj)->::TVolumePosition::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVolumePosition

//______________________________________________________________________________
void TVolumeView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVolumeView.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVolumeView::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVolumeView::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVolumeView(void *p) {
      return  p ? new(p) ::TVolumeView : new ::TVolumeView;
   }
   static void *newArray_TVolumeView(Long_t nElements, void *p) {
      return p ? new(p) ::TVolumeView[nElements] : new ::TVolumeView[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVolumeView(void *p) {
      delete ((::TVolumeView*)p);
   }
   static void deleteArray_TVolumeView(void *p) {
      delete [] ((::TVolumeView*)p);
   }
   static void destruct_TVolumeView(void *p) {
      typedef ::TVolumeView current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVolumeView

//______________________________________________________________________________
void TVolumeViewIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVolumeViewIter.

   TDataSetIter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVolumeViewIter(void *p) {
      delete ((::TVolumeViewIter*)p);
   }
   static void deleteArray_TVolumeViewIter(void *p) {
      delete [] ((::TVolumeViewIter*)p);
   }
   static void destruct_TVolumeViewIter(void *p) {
      typedef ::TVolumeViewIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVolumeViewIter(TBuffer &buf, void *obj) {
      ((::TVolumeViewIter*)obj)->::TVolumeViewIter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVolumeViewIter

namespace ROOT {
   static TClass *vectorlElonggR_Dictionary();
   static void vectorlElonggR_TClassManip(TClass*);
   static void *new_vectorlElonggR(void *p = 0);
   static void *newArray_vectorlElonggR(Long_t size, void *p);
   static void delete_vectorlElonggR(void *p);
   static void deleteArray_vectorlElonggR(void *p);
   static void destruct_vectorlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<long>*)
   {
      vector<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<long>", -2, "vector", 216,
                  typeid(vector<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<long>) );
      instance.SetNew(&new_vectorlElonggR);
      instance.SetNewArray(&newArray_vectorlElonggR);
      instance.SetDelete(&delete_vectorlElonggR);
      instance.SetDeleteArray(&deleteArray_vectorlElonggR);
      instance.SetDestructor(&destruct_vectorlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<long>*)0x0)->GetClass();
      vectorlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long> : new vector<long>;
   }
   static void *newArray_vectorlElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long>[nElements] : new vector<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElonggR(void *p) {
      delete ((vector<long>*)p);
   }
   static void deleteArray_vectorlElonggR(void *p) {
      delete [] ((vector<long>*)p);
   }
   static void destruct_vectorlElonggR(void *p) {
      typedef vector<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<long>

namespace {
  void TriggerDictionaryInitialization_libTable_Impl() {
    static const char* headers[] = {
"TCernLib.h",
"TChair.h",
"TColumnView.h",
"TDataSet.h",
"TDataSetIter.h",
"TDsKey.h",
"TFileIter.h",
"TFileSet.h",
"TGenericTable.h",
"TIndexTable.h",
"TObjectSet.h",
"TPoints3D.h",
"TPointsArray3D.h",
"TPolyLineShape.h",
"TResponseTable.h",
"TTable.h",
"TTable3Points.h",
"TTableDescriptor.h",
"TTableIter.h",
"TTableMap.h",
"TTablePadView3D.h",
"TTablePoints.h",
"TTableSorter.h",
"TVolume.h",
"TVolumePosition.h",
"TVolumeView.h",
"TVolumeViewIter.h",
"Ttypes.h",
"tableDescriptor.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libTable dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(C++ replacement for CERNLIB matrix / triangle matrix packages: F110 and F112)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TCernLib.h")))  TCL;
class __attribute__((annotate(R"ATTRDUMP(The base class to create the hierarchical data structures)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDataSet.h")))  __attribute__((annotate("$clingAutoload$TChair.h")))  TDataSet;
struct __attribute__((annotate("$clingAutoload$tableDescriptor.h")))  __attribute__((annotate("$clingAutoload$TChair.h")))  tableDescriptor_st;
class __attribute__((annotate(R"ATTRDUMP(vector of the C structures)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTable.h")))  __attribute__((annotate("$clingAutoload$TChair.h")))  TTable;
class __attribute__((annotate(R"ATTRDUMP(A base class to provide a user custom interface to TTable class objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TChair.h")))  TChair;
class __attribute__((annotate(R"ATTRDUMP(Helper to represent one TTable column)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TColumnView.h")))  TColumnView;
class __attribute__((annotate(R"ATTRDUMP(class-iterator to navigate TDataSet structure)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDataSetIter.h")))  TDataSetIter;
class __attribute__((annotate(R"ATTRDUMP(TFile class iterator)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFileIter.h")))  TFileIter;
class __attribute__((annotate(R"ATTRDUMP(TDataSet class to read the native file system directory structure in)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFileSet.h")))  TFileSet;
class __attribute__((annotate(R"ATTRDUMP(descrpitor defining the internal layout of TTable objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTableDescriptor.h")))  __attribute__((annotate("$clingAutoload$TGenericTable.h")))  TTableDescriptor;
class __attribute__((annotate(R"ATTRDUMP(Generic array of C-structure (a'la STL vector))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGenericTable.h")))  TGenericTable;
class __attribute__((annotate(R"ATTRDUMP("Index" array for TTable object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TIndexTable.h")))  TIndexTable;
class __attribute__((annotate(R"ATTRDUMP(TDataSet wrapper for TObject class objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TObjectSet.h")))  TObjectSet;
class __attribute__((annotate(R"ATTRDUMP(Defines the abstract array of 3D points)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPoints3D.h")))  TPoints3D;
class __attribute__((annotate(R"ATTRDUMP(A 3-D PolyLine)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPointsArray3D.h")))  TPointsArray3D;
class __attribute__((annotate(R"ATTRDUMP(The base class to define an abstract 3D shape of STAR "event" geometry)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPolyLineShape.h")))  TPolyLineShape;
class __attribute__((annotate(R"ATTRDUMP(Generic Geant detector response table)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TResponseTable.h")))  TResponseTable;
class __attribute__((annotate(R"ATTRDUMP(Is an "observer" class to sort the TTable objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTableSorter.h")))  __attribute__((annotate("$clingAutoload$TTable3Points.h")))  TTableSorter;
class __attribute__((annotate(R"ATTRDUMP(Defines the TTable as an element of "event" geometry)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTablePoints.h")))  __attribute__((annotate("$clingAutoload$TTable3Points.h")))  TTablePoints;
class __attribute__((annotate(R"ATTRDUMP(A 3-D Points)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTable3Points.h")))  TTable3Points;
class __attribute__((annotate(R"ATTRDUMP(Iterator over "sorted" TTable objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTableIter.h")))  TTableIter;
class __attribute__((annotate(R"ATTRDUMP("Map" array for TTable object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTableMap.h")))  TTableMap;
class __attribute__((annotate("$clingAutoload$TTablePadView3D.h")))  TTablePadView3D;
class __attribute__((annotate(R"ATTRDUMP(Description of parameters to position a 3-D geometry object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVolume.h")))  TVolume;
class __attribute__((annotate(R"ATTRDUMP(Description of parameters to position a 3-D geometry object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVolumePosition.h")))  TVolumePosition;
class __attribute__((annotate(R"ATTRDUMP(Special kind of TDataSet)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVolumeView.h")))  TVolumeView;
class __attribute__((annotate(R"ATTRDUMP(Volume view iterator)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TVolumeViewIter.h")))  TVolumeViewIter;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libTable dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TCernLib.h"
#include "TChair.h"
#include "TColumnView.h"
#include "TDataSet.h"
#include "TDataSetIter.h"
#include "TDsKey.h"
#include "TFileIter.h"
#include "TFileSet.h"
#include "TGenericTable.h"
#include "TIndexTable.h"
#include "TObjectSet.h"
#include "TPoints3D.h"
#include "TPointsArray3D.h"
#include "TPolyLineShape.h"
#include "TResponseTable.h"
#include "TTable.h"
#include "TTable3Points.h"
#include "TTableDescriptor.h"
#include "TTableIter.h"
#include "TTableMap.h"
#include "TTablePadView3D.h"
#include "TTablePoints.h"
#include "TTableSorter.h"
#include "TVolume.h"
#include "TVolumePosition.h"
#include "TVolumeView.h"
#include "TVolumeViewIter.h"
#include "Ttypes.h"
#include "tableDescriptor.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TCL", payloadCode, "@",
"TChair", payloadCode, "@",
"TColumnView", payloadCode, "@",
"TDataSet", payloadCode, "@",
"TDataSetIter", payloadCode, "@",
"TFileIter", payloadCode, "@",
"TFileSet", payloadCode, "@",
"TGenericTable", payloadCode, "@",
"TGenericTable::iterator", payloadCode, "@",
"TIndexTable", payloadCode, "@",
"TIndexTable::iterator", payloadCode, "@",
"TObjectSet", payloadCode, "@",
"TPoints3D", payloadCode, "@",
"TPointsArray3D", payloadCode, "@",
"TPolyLineShape", payloadCode, "@",
"TResponseTable", payloadCode, "@",
"TTable", payloadCode, "@",
"TTable3Points", payloadCode, "@",
"TTable::iterator", payloadCode, "@",
"TTableDescriptor", payloadCode, "@",
"TTableIter", payloadCode, "@",
"TTableMap", payloadCode, "@",
"TTablePadView3D", payloadCode, "@",
"TTablePoints", payloadCode, "@",
"TTableSorter", payloadCode, "@",
"TVolume", payloadCode, "@",
"TVolumePosition", payloadCode, "@",
"TVolumeView", payloadCode, "@",
"TVolumeViewIter", payloadCode, "@",
"tableDescriptor_st", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libTable",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTable_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTable_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTable() {
  TriggerDictionaryInitialization_libTable_Impl();
}
