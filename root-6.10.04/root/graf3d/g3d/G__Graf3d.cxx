// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Graf3d

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
#include "TAxis3D.h"
#include "TBRIK.h"
#include "TCONE.h"
#include "TCONS.h"
#include "TCTUB.h"
#include "TELTU.h"
#include "TGTRA.h"
#include "TGeometry.h"
#include "THYPE.h"
#include "THelix.h"
#include "TMarker3DBox.h"
#include "TMaterial.h"
#include "TMixture.h"
#include "TNode.h"
#include "TNodeDiv.h"
#include "TPARA.h"
#include "TPCON.h"
#include "TPGON.h"
#include "TPointSet3D.h"
#include "TPoints3DABC.h"
#include "TPolyLine3D.h"
#include "TPolyMarker3D.h"
#include "TRotMatrix.h"
#include "TSPHE.h"
#include "TShape.h"
#include "TTRAP.h"
#include "TTRD1.h"
#include "TTRD2.h"
#include "TTUBE.h"
#include "TTUBS.h"
#include "TView3D.h"
#include "TXTRU.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TAxis3D(void *p = 0);
   static void *newArray_TAxis3D(Long_t size, void *p);
   static void delete_TAxis3D(void *p);
   static void deleteArray_TAxis3D(void *p);
   static void destruct_TAxis3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAxis3D*)
   {
      ::TAxis3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAxis3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAxis3D", ::TAxis3D::Class_Version(), "TAxis3D.h", 31,
                  typeid(::TAxis3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAxis3D::Dictionary, isa_proxy, 4,
                  sizeof(::TAxis3D) );
      instance.SetNew(&new_TAxis3D);
      instance.SetNewArray(&newArray_TAxis3D);
      instance.SetDelete(&delete_TAxis3D);
      instance.SetDeleteArray(&deleteArray_TAxis3D);
      instance.SetDestructor(&destruct_TAxis3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAxis3D*)
   {
      return GenerateInitInstanceLocal((::TAxis3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAxis3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMaterial(void *p = 0);
   static void *newArray_TMaterial(Long_t size, void *p);
   static void delete_TMaterial(void *p);
   static void deleteArray_TMaterial(void *p);
   static void destruct_TMaterial(void *p);
   static void streamer_TMaterial(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMaterial*)
   {
      ::TMaterial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMaterial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMaterial", ::TMaterial::Class_Version(), "TMaterial.h", 28,
                  typeid(::TMaterial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMaterial::Dictionary, isa_proxy, 17,
                  sizeof(::TMaterial) );
      instance.SetNew(&new_TMaterial);
      instance.SetNewArray(&newArray_TMaterial);
      instance.SetDelete(&delete_TMaterial);
      instance.SetDeleteArray(&deleteArray_TMaterial);
      instance.SetDestructor(&destruct_TMaterial);
      instance.SetStreamerFunc(&streamer_TMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMaterial*)
   {
      return GenerateInitInstanceLocal((::TMaterial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMaterial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TShape(void *p = 0);
   static void *newArray_TShape(Long_t size, void *p);
   static void delete_TShape(void *p);
   static void deleteArray_TShape(void *p);
   static void destruct_TShape(void *p);
   static void streamer_TShape(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TShape*)
   {
      ::TShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TShape", ::TShape::Class_Version(), "TShape.h", 35,
                  typeid(::TShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TShape::Dictionary, isa_proxy, 17,
                  sizeof(::TShape) );
      instance.SetNew(&new_TShape);
      instance.SetNewArray(&newArray_TShape);
      instance.SetDelete(&delete_TShape);
      instance.SetDeleteArray(&deleteArray_TShape);
      instance.SetDestructor(&destruct_TShape);
      instance.SetStreamerFunc(&streamer_TShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TShape*)
   {
      return GenerateInitInstanceLocal((::TShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBRIK(void *p = 0);
   static void *newArray_TBRIK(Long_t size, void *p);
   static void delete_TBRIK(void *p);
   static void deleteArray_TBRIK(void *p);
   static void destruct_TBRIK(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBRIK*)
   {
      ::TBRIK *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBRIK >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBRIK", ::TBRIK::Class_Version(), "TBRIK.h", 26,
                  typeid(::TBRIK), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBRIK::Dictionary, isa_proxy, 4,
                  sizeof(::TBRIK) );
      instance.SetNew(&new_TBRIK);
      instance.SetNewArray(&newArray_TBRIK);
      instance.SetDelete(&delete_TBRIK);
      instance.SetDeleteArray(&deleteArray_TBRIK);
      instance.SetDestructor(&destruct_TBRIK);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBRIK*)
   {
      return GenerateInitInstanceLocal((::TBRIK*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBRIK*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTUBE(void *p = 0);
   static void *newArray_TTUBE(Long_t size, void *p);
   static void delete_TTUBE(void *p);
   static void deleteArray_TTUBE(void *p);
   static void destruct_TTUBE(void *p);
   static void streamer_TTUBE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTUBE*)
   {
      ::TTUBE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTUBE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTUBE", ::TTUBE::Class_Version(), "TTUBE.h", 32,
                  typeid(::TTUBE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTUBE::Dictionary, isa_proxy, 17,
                  sizeof(::TTUBE) );
      instance.SetNew(&new_TTUBE);
      instance.SetNewArray(&newArray_TTUBE);
      instance.SetDelete(&delete_TTUBE);
      instance.SetDeleteArray(&deleteArray_TTUBE);
      instance.SetDestructor(&destruct_TTUBE);
      instance.SetStreamerFunc(&streamer_TTUBE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTUBE*)
   {
      return GenerateInitInstanceLocal((::TTUBE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTUBE*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCONE(void *p = 0);
   static void *newArray_TCONE(Long_t size, void *p);
   static void delete_TCONE(void *p);
   static void deleteArray_TCONE(void *p);
   static void destruct_TCONE(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCONE*)
   {
      ::TCONE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCONE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCONE", ::TCONE::Class_Version(), "TCONE.h", 28,
                  typeid(::TCONE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCONE::Dictionary, isa_proxy, 4,
                  sizeof(::TCONE) );
      instance.SetNew(&new_TCONE);
      instance.SetNewArray(&newArray_TCONE);
      instance.SetDelete(&delete_TCONE);
      instance.SetDeleteArray(&deleteArray_TCONE);
      instance.SetDestructor(&destruct_TCONE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCONE*)
   {
      return GenerateInitInstanceLocal((::TCONE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCONE*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTUBS(void *p = 0);
   static void *newArray_TTUBS(Long_t size, void *p);
   static void delete_TTUBS(void *p);
   static void deleteArray_TTUBS(void *p);
   static void destruct_TTUBS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTUBS*)
   {
      ::TTUBS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTUBS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTUBS", ::TTUBS::Class_Version(), "TTUBS.h", 29,
                  typeid(::TTUBS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTUBS::Dictionary, isa_proxy, 4,
                  sizeof(::TTUBS) );
      instance.SetNew(&new_TTUBS);
      instance.SetNewArray(&newArray_TTUBS);
      instance.SetDelete(&delete_TTUBS);
      instance.SetDeleteArray(&deleteArray_TTUBS);
      instance.SetDestructor(&destruct_TTUBS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTUBS*)
   {
      return GenerateInitInstanceLocal((::TTUBS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTUBS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCONS(void *p = 0);
   static void *newArray_TCONS(Long_t size, void *p);
   static void delete_TCONS(void *p);
   static void deleteArray_TCONS(void *p);
   static void destruct_TCONS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCONS*)
   {
      ::TCONS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCONS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCONS", ::TCONS::Class_Version(), "TCONS.h", 27,
                  typeid(::TCONS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCONS::Dictionary, isa_proxy, 4,
                  sizeof(::TCONS) );
      instance.SetNew(&new_TCONS);
      instance.SetNewArray(&newArray_TCONS);
      instance.SetDelete(&delete_TCONS);
      instance.SetDeleteArray(&deleteArray_TCONS);
      instance.SetDestructor(&destruct_TCONS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCONS*)
   {
      return GenerateInitInstanceLocal((::TCONS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCONS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCTUB(void *p = 0);
   static void *newArray_TCTUB(Long_t size, void *p);
   static void delete_TCTUB(void *p);
   static void deleteArray_TCTUB(void *p);
   static void destruct_TCTUB(void *p);
   static void streamer_TCTUB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCTUB*)
   {
      ::TCTUB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCTUB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCTUB", ::TCTUB::Class_Version(), "TCTUB.h", 29,
                  typeid(::TCTUB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCTUB::Dictionary, isa_proxy, 17,
                  sizeof(::TCTUB) );
      instance.SetNew(&new_TCTUB);
      instance.SetNewArray(&newArray_TCTUB);
      instance.SetDelete(&delete_TCTUB);
      instance.SetDeleteArray(&deleteArray_TCTUB);
      instance.SetDestructor(&destruct_TCTUB);
      instance.SetStreamerFunc(&streamer_TCTUB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCTUB*)
   {
      return GenerateInitInstanceLocal((::TCTUB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCTUB*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TELTU(void *p = 0);
   static void *newArray_TELTU(Long_t size, void *p);
   static void delete_TELTU(void *p);
   static void deleteArray_TELTU(void *p);
   static void destruct_TELTU(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TELTU*)
   {
      ::TELTU *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TELTU >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TELTU", ::TELTU::Class_Version(), "TELTU.h", 31,
                  typeid(::TELTU), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TELTU::Dictionary, isa_proxy, 4,
                  sizeof(::TELTU) );
      instance.SetNew(&new_TELTU);
      instance.SetNewArray(&newArray_TELTU);
      instance.SetDelete(&delete_TELTU);
      instance.SetDeleteArray(&deleteArray_TELTU);
      instance.SetDestructor(&destruct_TELTU);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TELTU*)
   {
      return GenerateInitInstanceLocal((::TELTU*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TELTU*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGTRA(void *p = 0);
   static void *newArray_TGTRA(Long_t size, void *p);
   static void delete_TGTRA(void *p);
   static void deleteArray_TGTRA(void *p);
   static void destruct_TGTRA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTRA*)
   {
      ::TGTRA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTRA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGTRA", ::TGTRA::Class_Version(), "TGTRA.h", 27,
                  typeid(::TGTRA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTRA::Dictionary, isa_proxy, 4,
                  sizeof(::TGTRA) );
      instance.SetNew(&new_TGTRA);
      instance.SetNewArray(&newArray_TGTRA);
      instance.SetDelete(&delete_TGTRA);
      instance.SetDeleteArray(&deleteArray_TGTRA);
      instance.SetDestructor(&destruct_TGTRA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTRA*)
   {
      return GenerateInitInstanceLocal((::TGTRA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGTRA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeometry(void *p = 0);
   static void *newArray_TGeometry(Long_t size, void *p);
   static void delete_TGeometry(void *p);
   static void deleteArray_TGeometry(void *p);
   static void destruct_TGeometry(void *p);
   static void streamer_TGeometry(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeometry*)
   {
      ::TGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeometry", ::TGeometry::Class_Version(), "TGeometry.h", 39,
                  typeid(::TGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeometry::Dictionary, isa_proxy, 17,
                  sizeof(::TGeometry) );
      instance.SetNew(&new_TGeometry);
      instance.SetNewArray(&newArray_TGeometry);
      instance.SetDelete(&delete_TGeometry);
      instance.SetDeleteArray(&deleteArray_TGeometry);
      instance.SetDestructor(&destruct_TGeometry);
      instance.SetStreamerFunc(&streamer_TGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeometry*)
   {
      return GenerateInitInstanceLocal((::TGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THYPE(void *p = 0);
   static void *newArray_THYPE(Long_t size, void *p);
   static void delete_THYPE(void *p);
   static void deleteArray_THYPE(void *p);
   static void destruct_THYPE(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THYPE*)
   {
      ::THYPE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THYPE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THYPE", ::THYPE::Class_Version(), "THYPE.h", 28,
                  typeid(::THYPE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THYPE::Dictionary, isa_proxy, 4,
                  sizeof(::THYPE) );
      instance.SetNew(&new_THYPE);
      instance.SetNewArray(&newArray_THYPE);
      instance.SetDelete(&delete_THYPE);
      instance.SetDeleteArray(&deleteArray_THYPE);
      instance.SetDestructor(&destruct_THYPE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THYPE*)
   {
      return GenerateInitInstanceLocal((::THYPE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THYPE*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPolyLine3D(void *p = 0);
   static void *newArray_TPolyLine3D(Long_t size, void *p);
   static void delete_TPolyLine3D(void *p);
   static void deleteArray_TPolyLine3D(void *p);
   static void destruct_TPolyLine3D(void *p);
   static void streamer_TPolyLine3D(TBuffer &buf, void *obj);
   static Long64_t merge_TPolyLine3D(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPolyLine3D*)
   {
      ::TPolyLine3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPolyLine3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPolyLine3D", ::TPolyLine3D::Class_Version(), "TPolyLine3D.h", 31,
                  typeid(::TPolyLine3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPolyLine3D::Dictionary, isa_proxy, 17,
                  sizeof(::TPolyLine3D) );
      instance.SetNew(&new_TPolyLine3D);
      instance.SetNewArray(&newArray_TPolyLine3D);
      instance.SetDelete(&delete_TPolyLine3D);
      instance.SetDeleteArray(&deleteArray_TPolyLine3D);
      instance.SetDestructor(&destruct_TPolyLine3D);
      instance.SetStreamerFunc(&streamer_TPolyLine3D);
      instance.SetMerge(&merge_TPolyLine3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPolyLine3D*)
   {
      return GenerateInitInstanceLocal((::TPolyLine3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPolyLine3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRotMatrix(void *p = 0);
   static void *newArray_TRotMatrix(Long_t size, void *p);
   static void delete_TRotMatrix(void *p);
   static void deleteArray_TRotMatrix(void *p);
   static void destruct_TRotMatrix(void *p);
   static void streamer_TRotMatrix(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRotMatrix*)
   {
      ::TRotMatrix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRotMatrix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRotMatrix", ::TRotMatrix::Class_Version(), "TRotMatrix.h", 28,
                  typeid(::TRotMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRotMatrix::Dictionary, isa_proxy, 17,
                  sizeof(::TRotMatrix) );
      instance.SetNew(&new_TRotMatrix);
      instance.SetNewArray(&newArray_TRotMatrix);
      instance.SetDelete(&delete_TRotMatrix);
      instance.SetDeleteArray(&deleteArray_TRotMatrix);
      instance.SetDestructor(&destruct_TRotMatrix);
      instance.SetStreamerFunc(&streamer_TRotMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRotMatrix*)
   {
      return GenerateInitInstanceLocal((::TRotMatrix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRotMatrix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THelix(void *p = 0);
   static void *newArray_THelix(Long_t size, void *p);
   static void delete_THelix(void *p);
   static void deleteArray_THelix(void *p);
   static void destruct_THelix(void *p);
   static void streamer_THelix(TBuffer &buf, void *obj);
   static Long64_t merge_THelix(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THelix*)
   {
      ::THelix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THelix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THelix", ::THelix::Class_Version(), "THelix.h", 36,
                  typeid(::THelix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THelix::Dictionary, isa_proxy, 17,
                  sizeof(::THelix) );
      instance.SetNew(&new_THelix);
      instance.SetNewArray(&newArray_THelix);
      instance.SetDelete(&delete_THelix);
      instance.SetDeleteArray(&deleteArray_THelix);
      instance.SetDestructor(&destruct_THelix);
      instance.SetStreamerFunc(&streamer_THelix);
      instance.SetMerge(&merge_THelix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THelix*)
   {
      return GenerateInitInstanceLocal((::THelix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THelix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMarker3DBox(void *p = 0);
   static void *newArray_TMarker3DBox(Long_t size, void *p);
   static void delete_TMarker3DBox(void *p);
   static void deleteArray_TMarker3DBox(void *p);
   static void destruct_TMarker3DBox(void *p);
   static void streamer_TMarker3DBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMarker3DBox*)
   {
      ::TMarker3DBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMarker3DBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMarker3DBox", ::TMarker3DBox::Class_Version(), "TMarker3DBox.h", 37,
                  typeid(::TMarker3DBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMarker3DBox::Dictionary, isa_proxy, 17,
                  sizeof(::TMarker3DBox) );
      instance.SetNew(&new_TMarker3DBox);
      instance.SetNewArray(&newArray_TMarker3DBox);
      instance.SetDelete(&delete_TMarker3DBox);
      instance.SetDeleteArray(&deleteArray_TMarker3DBox);
      instance.SetDestructor(&destruct_TMarker3DBox);
      instance.SetStreamerFunc(&streamer_TMarker3DBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMarker3DBox*)
   {
      return GenerateInitInstanceLocal((::TMarker3DBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMarker3DBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMixture(void *p = 0);
   static void *newArray_TMixture(Long_t size, void *p);
   static void delete_TMixture(void *p);
   static void deleteArray_TMixture(void *p);
   static void destruct_TMixture(void *p);
   static void streamer_TMixture(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMixture*)
   {
      ::TMixture *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMixture >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMixture", ::TMixture::Class_Version(), "TMixture.h", 27,
                  typeid(::TMixture), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMixture::Dictionary, isa_proxy, 17,
                  sizeof(::TMixture) );
      instance.SetNew(&new_TMixture);
      instance.SetNewArray(&newArray_TMixture);
      instance.SetDelete(&delete_TMixture);
      instance.SetDeleteArray(&deleteArray_TMixture);
      instance.SetDestructor(&destruct_TMixture);
      instance.SetStreamerFunc(&streamer_TMixture);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMixture*)
   {
      return GenerateInitInstanceLocal((::TMixture*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMixture*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNode(void *p = 0);
   static void *newArray_TNode(Long_t size, void *p);
   static void delete_TNode(void *p);
   static void deleteArray_TNode(void *p);
   static void destruct_TNode(void *p);
   static void streamer_TNode(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNode*)
   {
      ::TNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNode", ::TNode::Class_Version(), "TNode.h", 33,
                  typeid(::TNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNode::Dictionary, isa_proxy, 17,
                  sizeof(::TNode) );
      instance.SetNew(&new_TNode);
      instance.SetNewArray(&newArray_TNode);
      instance.SetDelete(&delete_TNode);
      instance.SetDeleteArray(&deleteArray_TNode);
      instance.SetDestructor(&destruct_TNode);
      instance.SetStreamerFunc(&streamer_TNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNode*)
   {
      return GenerateInitInstanceLocal((::TNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNodeDiv(void *p = 0);
   static void *newArray_TNodeDiv(Long_t size, void *p);
   static void delete_TNodeDiv(void *p);
   static void deleteArray_TNodeDiv(void *p);
   static void destruct_TNodeDiv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNodeDiv*)
   {
      ::TNodeDiv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNodeDiv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNodeDiv", ::TNodeDiv::Class_Version(), "TNodeDiv.h", 28,
                  typeid(::TNodeDiv), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNodeDiv::Dictionary, isa_proxy, 4,
                  sizeof(::TNodeDiv) );
      instance.SetNew(&new_TNodeDiv);
      instance.SetNewArray(&newArray_TNodeDiv);
      instance.SetDelete(&delete_TNodeDiv);
      instance.SetDeleteArray(&deleteArray_TNodeDiv);
      instance.SetDestructor(&destruct_TNodeDiv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNodeDiv*)
   {
      return GenerateInitInstanceLocal((::TNodeDiv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNodeDiv*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPARA(void *p = 0);
   static void *newArray_TPARA(Long_t size, void *p);
   static void delete_TPARA(void *p);
   static void deleteArray_TPARA(void *p);
   static void destruct_TPARA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPARA*)
   {
      ::TPARA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPARA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPARA", ::TPARA::Class_Version(), "TPARA.h", 30,
                  typeid(::TPARA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPARA::Dictionary, isa_proxy, 4,
                  sizeof(::TPARA) );
      instance.SetNew(&new_TPARA);
      instance.SetNewArray(&newArray_TPARA);
      instance.SetDelete(&delete_TPARA);
      instance.SetDeleteArray(&deleteArray_TPARA);
      instance.SetDestructor(&destruct_TPARA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPARA*)
   {
      return GenerateInitInstanceLocal((::TPARA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPARA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPCON(void *p = 0);
   static void *newArray_TPCON(Long_t size, void *p);
   static void delete_TPCON(void *p);
   static void deleteArray_TPCON(void *p);
   static void destruct_TPCON(void *p);
   static void streamer_TPCON(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPCON*)
   {
      ::TPCON *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPCON >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPCON", ::TPCON::Class_Version(), "TPCON.h", 33,
                  typeid(::TPCON), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPCON::Dictionary, isa_proxy, 17,
                  sizeof(::TPCON) );
      instance.SetNew(&new_TPCON);
      instance.SetNewArray(&newArray_TPCON);
      instance.SetDelete(&delete_TPCON);
      instance.SetDeleteArray(&deleteArray_TPCON);
      instance.SetDestructor(&destruct_TPCON);
      instance.SetStreamerFunc(&streamer_TPCON);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPCON*)
   {
      return GenerateInitInstanceLocal((::TPCON*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPCON*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPGON(void *p = 0);
   static void *newArray_TPGON(Long_t size, void *p);
   static void delete_TPGON(void *p);
   static void deleteArray_TPGON(void *p);
   static void destruct_TPGON(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPGON*)
   {
      ::TPGON *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPGON >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPGON", ::TPGON::Class_Version(), "TPGON.h", 30,
                  typeid(::TPGON), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPGON::Dictionary, isa_proxy, 4,
                  sizeof(::TPGON) );
      instance.SetNew(&new_TPGON);
      instance.SetNewArray(&newArray_TPGON);
      instance.SetDelete(&delete_TPGON);
      instance.SetDeleteArray(&deleteArray_TPGON);
      instance.SetDestructor(&destruct_TPGON);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPGON*)
   {
      return GenerateInitInstanceLocal((::TPGON*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPGON*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPolyMarker3D(void *p = 0);
   static void *newArray_TPolyMarker3D(Long_t size, void *p);
   static void delete_TPolyMarker3D(void *p);
   static void deleteArray_TPolyMarker3D(void *p);
   static void destruct_TPolyMarker3D(void *p);
   static void streamer_TPolyMarker3D(TBuffer &buf, void *obj);
   static Long64_t merge_TPolyMarker3D(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPolyMarker3D*)
   {
      ::TPolyMarker3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPolyMarker3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPolyMarker3D", ::TPolyMarker3D::Class_Version(), "TPolyMarker3D.h", 32,
                  typeid(::TPolyMarker3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPolyMarker3D::Dictionary, isa_proxy, 17,
                  sizeof(::TPolyMarker3D) );
      instance.SetNew(&new_TPolyMarker3D);
      instance.SetNewArray(&newArray_TPolyMarker3D);
      instance.SetDelete(&delete_TPolyMarker3D);
      instance.SetDeleteArray(&deleteArray_TPolyMarker3D);
      instance.SetDestructor(&destruct_TPolyMarker3D);
      instance.SetStreamerFunc(&streamer_TPolyMarker3D);
      instance.SetMerge(&merge_TPolyMarker3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPolyMarker3D*)
   {
      return GenerateInitInstanceLocal((::TPolyMarker3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPolyMarker3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPointSet3D(void *p = 0);
   static void *newArray_TPointSet3D(Long_t size, void *p);
   static void delete_TPointSet3D(void *p);
   static void deleteArray_TPointSet3D(void *p);
   static void destruct_TPointSet3D(void *p);
   static void streamer_TPointSet3D(TBuffer &buf, void *obj);
   static Long64_t merge_TPointSet3D(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPointSet3D*)
   {
      ::TPointSet3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPointSet3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPointSet3D", ::TPointSet3D::Class_Version(), "TPointSet3D.h", 21,
                  typeid(::TPointSet3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPointSet3D::Dictionary, isa_proxy, 17,
                  sizeof(::TPointSet3D) );
      instance.SetNew(&new_TPointSet3D);
      instance.SetNewArray(&newArray_TPointSet3D);
      instance.SetDelete(&delete_TPointSet3D);
      instance.SetDeleteArray(&deleteArray_TPointSet3D);
      instance.SetDestructor(&destruct_TPointSet3D);
      instance.SetStreamerFunc(&streamer_TPointSet3D);
      instance.SetMerge(&merge_TPointSet3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPointSet3D*)
   {
      return GenerateInitInstanceLocal((::TPointSet3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPointSet3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPoints3DABC(void *p);
   static void deleteArray_TPoints3DABC(void *p);
   static void destruct_TPoints3DABC(void *p);
   static void streamer_TPoints3DABC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPoints3DABC*)
   {
      ::TPoints3DABC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPoints3DABC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPoints3DABC", ::TPoints3DABC::Class_Version(), "TPoints3DABC.h", 25,
                  typeid(::TPoints3DABC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPoints3DABC::Dictionary, isa_proxy, 16,
                  sizeof(::TPoints3DABC) );
      instance.SetDelete(&delete_TPoints3DABC);
      instance.SetDeleteArray(&deleteArray_TPoints3DABC);
      instance.SetDestructor(&destruct_TPoints3DABC);
      instance.SetStreamerFunc(&streamer_TPoints3DABC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPoints3DABC*)
   {
      return GenerateInitInstanceLocal((::TPoints3DABC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPoints3DABC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSPHE(void *p = 0);
   static void *newArray_TSPHE(Long_t size, void *p);
   static void delete_TSPHE(void *p);
   static void deleteArray_TSPHE(void *p);
   static void destruct_TSPHE(void *p);
   static void streamer_TSPHE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSPHE*)
   {
      ::TSPHE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSPHE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSPHE", ::TSPHE::Class_Version(), "TSPHE.h", 28,
                  typeid(::TSPHE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSPHE::Dictionary, isa_proxy, 17,
                  sizeof(::TSPHE) );
      instance.SetNew(&new_TSPHE);
      instance.SetNewArray(&newArray_TSPHE);
      instance.SetDelete(&delete_TSPHE);
      instance.SetDeleteArray(&deleteArray_TSPHE);
      instance.SetDestructor(&destruct_TSPHE);
      instance.SetStreamerFunc(&streamer_TSPHE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSPHE*)
   {
      return GenerateInitInstanceLocal((::TSPHE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSPHE*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTRAP(void *p = 0);
   static void *newArray_TTRAP(Long_t size, void *p);
   static void delete_TTRAP(void *p);
   static void deleteArray_TTRAP(void *p);
   static void destruct_TTRAP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTRAP*)
   {
      ::TTRAP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTRAP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTRAP", ::TTRAP::Class_Version(), "TTRAP.h", 33,
                  typeid(::TTRAP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTRAP::Dictionary, isa_proxy, 4,
                  sizeof(::TTRAP) );
      instance.SetNew(&new_TTRAP);
      instance.SetNewArray(&newArray_TTRAP);
      instance.SetDelete(&delete_TTRAP);
      instance.SetDeleteArray(&deleteArray_TTRAP);
      instance.SetDestructor(&destruct_TTRAP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTRAP*)
   {
      return GenerateInitInstanceLocal((::TTRAP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTRAP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTRD1(void *p = 0);
   static void *newArray_TTRD1(Long_t size, void *p);
   static void delete_TTRD1(void *p);
   static void deleteArray_TTRD1(void *p);
   static void destruct_TTRD1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTRD1*)
   {
      ::TTRD1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTRD1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTRD1", ::TTRD1::Class_Version(), "TTRD1.h", 28,
                  typeid(::TTRD1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTRD1::Dictionary, isa_proxy, 4,
                  sizeof(::TTRD1) );
      instance.SetNew(&new_TTRD1);
      instance.SetNewArray(&newArray_TTRD1);
      instance.SetDelete(&delete_TTRD1);
      instance.SetDeleteArray(&deleteArray_TTRD1);
      instance.SetDestructor(&destruct_TTRD1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTRD1*)
   {
      return GenerateInitInstanceLocal((::TTRD1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTRD1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTRD2(void *p = 0);
   static void *newArray_TTRD2(Long_t size, void *p);
   static void delete_TTRD2(void *p);
   static void deleteArray_TTRD2(void *p);
   static void destruct_TTRD2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTRD2*)
   {
      ::TTRD2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTRD2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTRD2", ::TTRD2::Class_Version(), "TTRD2.h", 29,
                  typeid(::TTRD2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTRD2::Dictionary, isa_proxy, 4,
                  sizeof(::TTRD2) );
      instance.SetNew(&new_TTRD2);
      instance.SetNewArray(&newArray_TTRD2);
      instance.SetDelete(&delete_TTRD2);
      instance.SetDeleteArray(&deleteArray_TTRD2);
      instance.SetDestructor(&destruct_TTRD2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTRD2*)
   {
      return GenerateInitInstanceLocal((::TTRD2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTRD2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TView3D(void *p = 0);
   static void *newArray_TView3D(Long_t size, void *p);
   static void delete_TView3D(void *p);
   static void deleteArray_TView3D(void *p);
   static void destruct_TView3D(void *p);
   static void streamer_TView3D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TView3D*)
   {
      ::TView3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TView3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TView3D", ::TView3D::Class_Version(), "TView3D.h", 29,
                  typeid(::TView3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TView3D::Dictionary, isa_proxy, 17,
                  sizeof(::TView3D) );
      instance.SetNew(&new_TView3D);
      instance.SetNewArray(&newArray_TView3D);
      instance.SetDelete(&delete_TView3D);
      instance.SetDeleteArray(&deleteArray_TView3D);
      instance.SetDestructor(&destruct_TView3D);
      instance.SetStreamerFunc(&streamer_TView3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TView3D*)
   {
      return GenerateInitInstanceLocal((::TView3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TView3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TXTRU(void *p = 0);
   static void *newArray_TXTRU(Long_t size, void *p);
   static void delete_TXTRU(void *p);
   static void deleteArray_TXTRU(void *p);
   static void destruct_TXTRU(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXTRU*)
   {
      ::TXTRU *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXTRU >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TXTRU", ::TXTRU::Class_Version(), "TXTRU.h", 22,
                  typeid(::TXTRU), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXTRU::Dictionary, isa_proxy, 4,
                  sizeof(::TXTRU) );
      instance.SetNew(&new_TXTRU);
      instance.SetNewArray(&newArray_TXTRU);
      instance.SetDelete(&delete_TXTRU);
      instance.SetDeleteArray(&deleteArray_TXTRU);
      instance.SetDestructor(&destruct_TXTRU);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXTRU*)
   {
      return GenerateInitInstanceLocal((::TXTRU*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TXTRU*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAxis3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAxis3D::Class_Name()
{
   return "TAxis3D";
}

//______________________________________________________________________________
const char *TAxis3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxis3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAxis3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxis3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAxis3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxis3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAxis3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxis3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMaterial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMaterial::Class_Name()
{
   return "TMaterial";
}

//______________________________________________________________________________
const char *TMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMaterial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMaterial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMaterial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMaterial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TShape::Class_Name()
{
   return "TShape";
}

//______________________________________________________________________________
const char *TShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBRIK::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBRIK::Class_Name()
{
   return "TBRIK";
}

//______________________________________________________________________________
const char *TBRIK::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBRIK*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBRIK::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBRIK*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBRIK::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBRIK*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBRIK::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBRIK*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTUBE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTUBE::Class_Name()
{
   return "TTUBE";
}

//______________________________________________________________________________
const char *TTUBE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTUBE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTUBE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTUBE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTUBE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTUBE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTUBE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTUBE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCONE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCONE::Class_Name()
{
   return "TCONE";
}

//______________________________________________________________________________
const char *TCONE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCONE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCONE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCONE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCONE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCONE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCONE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCONE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTUBS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTUBS::Class_Name()
{
   return "TTUBS";
}

//______________________________________________________________________________
const char *TTUBS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTUBS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTUBS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTUBS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTUBS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTUBS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTUBS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTUBS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCONS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCONS::Class_Name()
{
   return "TCONS";
}

//______________________________________________________________________________
const char *TCONS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCONS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCONS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCONS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCONS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCONS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCONS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCONS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCTUB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCTUB::Class_Name()
{
   return "TCTUB";
}

//______________________________________________________________________________
const char *TCTUB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCTUB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCTUB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCTUB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCTUB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCTUB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCTUB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCTUB*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TELTU::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TELTU::Class_Name()
{
   return "TELTU";
}

//______________________________________________________________________________
const char *TELTU::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TELTU*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TELTU::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TELTU*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TELTU::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TELTU*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TELTU::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TELTU*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGTRA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTRA::Class_Name()
{
   return "TGTRA";
}

//______________________________________________________________________________
const char *TGTRA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTRA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGTRA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTRA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTRA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTRA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTRA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTRA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeometry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeometry::Class_Name()
{
   return "TGeometry";
}

//______________________________________________________________________________
const char *TGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeometry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeometry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THYPE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THYPE::Class_Name()
{
   return "THYPE";
}

//______________________________________________________________________________
const char *THYPE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THYPE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THYPE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THYPE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THYPE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THYPE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THYPE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THYPE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPolyLine3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPolyLine3D::Class_Name()
{
   return "TPolyLine3D";
}

//______________________________________________________________________________
const char *TPolyLine3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyLine3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPolyLine3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyLine3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPolyLine3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyLine3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPolyLine3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyLine3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRotMatrix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRotMatrix::Class_Name()
{
   return "TRotMatrix";
}

//______________________________________________________________________________
const char *TRotMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRotMatrix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRotMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRotMatrix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRotMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRotMatrix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRotMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRotMatrix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THelix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THelix::Class_Name()
{
   return "THelix";
}

//______________________________________________________________________________
const char *THelix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THelix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THelix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THelix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THelix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THelix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THelix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THelix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMarker3DBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMarker3DBox::Class_Name()
{
   return "TMarker3DBox";
}

//______________________________________________________________________________
const char *TMarker3DBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMarker3DBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMarker3DBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMarker3DBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMarker3DBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMarker3DBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMarker3DBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMarker3DBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMixture::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMixture::Class_Name()
{
   return "TMixture";
}

//______________________________________________________________________________
const char *TMixture::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMixture*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMixture::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMixture*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMixture::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMixture*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMixture::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMixture*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNode::Class_Name()
{
   return "TNode";
}

//______________________________________________________________________________
const char *TNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNode*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNodeDiv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNodeDiv::Class_Name()
{
   return "TNodeDiv";
}

//______________________________________________________________________________
const char *TNodeDiv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNodeDiv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNodeDiv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNodeDiv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNodeDiv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNodeDiv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNodeDiv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNodeDiv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPARA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPARA::Class_Name()
{
   return "TPARA";
}

//______________________________________________________________________________
const char *TPARA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPARA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPARA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPARA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPARA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPARA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPARA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPARA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPCON::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPCON::Class_Name()
{
   return "TPCON";
}

//______________________________________________________________________________
const char *TPCON::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPCON*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPCON::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPCON*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPCON::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPCON*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPCON::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPCON*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPGON::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPGON::Class_Name()
{
   return "TPGON";
}

//______________________________________________________________________________
const char *TPGON::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPGON*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPGON::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPGON*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPGON::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPGON*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPGON::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPGON*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPolyMarker3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPolyMarker3D::Class_Name()
{
   return "TPolyMarker3D";
}

//______________________________________________________________________________
const char *TPolyMarker3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyMarker3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPolyMarker3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyMarker3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPolyMarker3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyMarker3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPolyMarker3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyMarker3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPointSet3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPointSet3D::Class_Name()
{
   return "TPointSet3D";
}

//______________________________________________________________________________
const char *TPointSet3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPointSet3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPointSet3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPointSet3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPointSet3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPointSet3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPointSet3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPointSet3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPoints3DABC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPoints3DABC::Class_Name()
{
   return "TPoints3DABC";
}

//______________________________________________________________________________
const char *TPoints3DABC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPoints3DABC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPoints3DABC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPoints3DABC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPoints3DABC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPoints3DABC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPoints3DABC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPoints3DABC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSPHE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSPHE::Class_Name()
{
   return "TSPHE";
}

//______________________________________________________________________________
const char *TSPHE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSPHE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSPHE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSPHE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSPHE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSPHE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSPHE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSPHE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTRAP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTRAP::Class_Name()
{
   return "TTRAP";
}

//______________________________________________________________________________
const char *TTRAP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTRAP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTRAP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTRAP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTRAP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTRAP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTRAP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTRAP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTRD1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTRD1::Class_Name()
{
   return "TTRD1";
}

//______________________________________________________________________________
const char *TTRD1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTRD1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTRD1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTRD1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTRD1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTRD1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTRD1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTRD1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTRD2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTRD2::Class_Name()
{
   return "TTRD2";
}

//______________________________________________________________________________
const char *TTRD2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTRD2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTRD2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTRD2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTRD2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTRD2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTRD2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTRD2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TView3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TView3D::Class_Name()
{
   return "TView3D";
}

//______________________________________________________________________________
const char *TView3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TView3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TView3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TView3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TView3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TView3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TView3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TView3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXTRU::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TXTRU::Class_Name()
{
   return "TXTRU";
}

//______________________________________________________________________________
const char *TXTRU::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXTRU*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TXTRU::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXTRU*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXTRU::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXTRU*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXTRU::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXTRU*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAxis3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAxis3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAxis3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAxis3D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAxis3D(void *p) {
      return  p ? new(p) ::TAxis3D : new ::TAxis3D;
   }
   static void *newArray_TAxis3D(Long_t nElements, void *p) {
      return p ? new(p) ::TAxis3D[nElements] : new ::TAxis3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAxis3D(void *p) {
      delete ((::TAxis3D*)p);
   }
   static void deleteArray_TAxis3D(void *p) {
      delete [] ((::TAxis3D*)p);
   }
   static void destruct_TAxis3D(void *p) {
      typedef ::TAxis3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAxis3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMaterial(void *p) {
      return  p ? new(p) ::TMaterial : new ::TMaterial;
   }
   static void *newArray_TMaterial(Long_t nElements, void *p) {
      return p ? new(p) ::TMaterial[nElements] : new ::TMaterial[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMaterial(void *p) {
      delete ((::TMaterial*)p);
   }
   static void deleteArray_TMaterial(void *p) {
      delete [] ((::TMaterial*)p);
   }
   static void destruct_TMaterial(void *p) {
      typedef ::TMaterial current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMaterial(TBuffer &buf, void *obj) {
      ((::TMaterial*)obj)->::TMaterial::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMaterial

namespace ROOT {
   // Wrappers around operator new
   static void *new_TShape(void *p) {
      return  p ? new(p) ::TShape : new ::TShape;
   }
   static void *newArray_TShape(Long_t nElements, void *p) {
      return p ? new(p) ::TShape[nElements] : new ::TShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_TShape(void *p) {
      delete ((::TShape*)p);
   }
   static void deleteArray_TShape(void *p) {
      delete [] ((::TShape*)p);
   }
   static void destruct_TShape(void *p) {
      typedef ::TShape current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TShape(TBuffer &buf, void *obj) {
      ((::TShape*)obj)->::TShape::Streamer(buf);
   }
} // end of namespace ROOT for class ::TShape

//______________________________________________________________________________
void TBRIK::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBRIK.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBRIK::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBRIK::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBRIK(void *p) {
      return  p ? new(p) ::TBRIK : new ::TBRIK;
   }
   static void *newArray_TBRIK(Long_t nElements, void *p) {
      return p ? new(p) ::TBRIK[nElements] : new ::TBRIK[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBRIK(void *p) {
      delete ((::TBRIK*)p);
   }
   static void deleteArray_TBRIK(void *p) {
      delete [] ((::TBRIK*)p);
   }
   static void destruct_TBRIK(void *p) {
      typedef ::TBRIK current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TBRIK

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTUBE(void *p) {
      return  p ? new(p) ::TTUBE : new ::TTUBE;
   }
   static void *newArray_TTUBE(Long_t nElements, void *p) {
      return p ? new(p) ::TTUBE[nElements] : new ::TTUBE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTUBE(void *p) {
      delete ((::TTUBE*)p);
   }
   static void deleteArray_TTUBE(void *p) {
      delete [] ((::TTUBE*)p);
   }
   static void destruct_TTUBE(void *p) {
      typedef ::TTUBE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTUBE(TBuffer &buf, void *obj) {
      ((::TTUBE*)obj)->::TTUBE::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTUBE

//______________________________________________________________________________
void TCONE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCONE.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCONE::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCONE::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCONE(void *p) {
      return  p ? new(p) ::TCONE : new ::TCONE;
   }
   static void *newArray_TCONE(Long_t nElements, void *p) {
      return p ? new(p) ::TCONE[nElements] : new ::TCONE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCONE(void *p) {
      delete ((::TCONE*)p);
   }
   static void deleteArray_TCONE(void *p) {
      delete [] ((::TCONE*)p);
   }
   static void destruct_TCONE(void *p) {
      typedef ::TCONE current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCONE

//______________________________________________________________________________
void TTUBS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTUBS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTUBS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTUBS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTUBS(void *p) {
      return  p ? new(p) ::TTUBS : new ::TTUBS;
   }
   static void *newArray_TTUBS(Long_t nElements, void *p) {
      return p ? new(p) ::TTUBS[nElements] : new ::TTUBS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTUBS(void *p) {
      delete ((::TTUBS*)p);
   }
   static void deleteArray_TTUBS(void *p) {
      delete [] ((::TTUBS*)p);
   }
   static void destruct_TTUBS(void *p) {
      typedef ::TTUBS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTUBS

//______________________________________________________________________________
void TCONS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCONS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCONS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCONS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCONS(void *p) {
      return  p ? new(p) ::TCONS : new ::TCONS;
   }
   static void *newArray_TCONS(Long_t nElements, void *p) {
      return p ? new(p) ::TCONS[nElements] : new ::TCONS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCONS(void *p) {
      delete ((::TCONS*)p);
   }
   static void deleteArray_TCONS(void *p) {
      delete [] ((::TCONS*)p);
   }
   static void destruct_TCONS(void *p) {
      typedef ::TCONS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCONS

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCTUB(void *p) {
      return  p ? new(p) ::TCTUB : new ::TCTUB;
   }
   static void *newArray_TCTUB(Long_t nElements, void *p) {
      return p ? new(p) ::TCTUB[nElements] : new ::TCTUB[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCTUB(void *p) {
      delete ((::TCTUB*)p);
   }
   static void deleteArray_TCTUB(void *p) {
      delete [] ((::TCTUB*)p);
   }
   static void destruct_TCTUB(void *p) {
      typedef ::TCTUB current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCTUB(TBuffer &buf, void *obj) {
      ((::TCTUB*)obj)->::TCTUB::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCTUB

//______________________________________________________________________________
void TELTU::Streamer(TBuffer &R__b)
{
   // Stream an object of class TELTU.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TELTU::Class(),this);
   } else {
      R__b.WriteClassBuffer(TELTU::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TELTU(void *p) {
      return  p ? new(p) ::TELTU : new ::TELTU;
   }
   static void *newArray_TELTU(Long_t nElements, void *p) {
      return p ? new(p) ::TELTU[nElements] : new ::TELTU[nElements];
   }
   // Wrapper around operator delete
   static void delete_TELTU(void *p) {
      delete ((::TELTU*)p);
   }
   static void deleteArray_TELTU(void *p) {
      delete [] ((::TELTU*)p);
   }
   static void destruct_TELTU(void *p) {
      typedef ::TELTU current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TELTU

//______________________________________________________________________________
void TGTRA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTRA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGTRA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGTRA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTRA(void *p) {
      return  p ? new(p) ::TGTRA : new ::TGTRA;
   }
   static void *newArray_TGTRA(Long_t nElements, void *p) {
      return p ? new(p) ::TGTRA[nElements] : new ::TGTRA[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTRA(void *p) {
      delete ((::TGTRA*)p);
   }
   static void deleteArray_TGTRA(void *p) {
      delete [] ((::TGTRA*)p);
   }
   static void destruct_TGTRA(void *p) {
      typedef ::TGTRA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGTRA

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeometry(void *p) {
      return  p ? new(p) ::TGeometry : new ::TGeometry;
   }
   static void *newArray_TGeometry(Long_t nElements, void *p) {
      return p ? new(p) ::TGeometry[nElements] : new ::TGeometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeometry(void *p) {
      delete ((::TGeometry*)p);
   }
   static void deleteArray_TGeometry(void *p) {
      delete [] ((::TGeometry*)p);
   }
   static void destruct_TGeometry(void *p) {
      typedef ::TGeometry current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeometry(TBuffer &buf, void *obj) {
      ((::TGeometry*)obj)->::TGeometry::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeometry

//______________________________________________________________________________
void THYPE::Streamer(TBuffer &R__b)
{
   // Stream an object of class THYPE.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THYPE::Class(),this);
   } else {
      R__b.WriteClassBuffer(THYPE::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THYPE(void *p) {
      return  p ? new(p) ::THYPE : new ::THYPE;
   }
   static void *newArray_THYPE(Long_t nElements, void *p) {
      return p ? new(p) ::THYPE[nElements] : new ::THYPE[nElements];
   }
   // Wrapper around operator delete
   static void delete_THYPE(void *p) {
      delete ((::THYPE*)p);
   }
   static void deleteArray_THYPE(void *p) {
      delete [] ((::THYPE*)p);
   }
   static void destruct_THYPE(void *p) {
      typedef ::THYPE current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THYPE

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPolyLine3D(void *p) {
      return  p ? new(p) ::TPolyLine3D : new ::TPolyLine3D;
   }
   static void *newArray_TPolyLine3D(Long_t nElements, void *p) {
      return p ? new(p) ::TPolyLine3D[nElements] : new ::TPolyLine3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPolyLine3D(void *p) {
      delete ((::TPolyLine3D*)p);
   }
   static void deleteArray_TPolyLine3D(void *p) {
      delete [] ((::TPolyLine3D*)p);
   }
   static void destruct_TPolyLine3D(void *p) {
      typedef ::TPolyLine3D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPolyLine3D(TBuffer &buf, void *obj) {
      ((::TPolyLine3D*)obj)->::TPolyLine3D::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TPolyLine3D(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TPolyLine3D*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TPolyLine3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRotMatrix(void *p) {
      return  p ? new(p) ::TRotMatrix : new ::TRotMatrix;
   }
   static void *newArray_TRotMatrix(Long_t nElements, void *p) {
      return p ? new(p) ::TRotMatrix[nElements] : new ::TRotMatrix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRotMatrix(void *p) {
      delete ((::TRotMatrix*)p);
   }
   static void deleteArray_TRotMatrix(void *p) {
      delete [] ((::TRotMatrix*)p);
   }
   static void destruct_TRotMatrix(void *p) {
      typedef ::TRotMatrix current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRotMatrix(TBuffer &buf, void *obj) {
      ((::TRotMatrix*)obj)->::TRotMatrix::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRotMatrix

namespace ROOT {
   // Wrappers around operator new
   static void *new_THelix(void *p) {
      return  p ? new(p) ::THelix : new ::THelix;
   }
   static void *newArray_THelix(Long_t nElements, void *p) {
      return p ? new(p) ::THelix[nElements] : new ::THelix[nElements];
   }
   // Wrapper around operator delete
   static void delete_THelix(void *p) {
      delete ((::THelix*)p);
   }
   static void deleteArray_THelix(void *p) {
      delete [] ((::THelix*)p);
   }
   static void destruct_THelix(void *p) {
      typedef ::THelix current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THelix(TBuffer &buf, void *obj) {
      ((::THelix*)obj)->::THelix::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THelix(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THelix*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THelix

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMarker3DBox(void *p) {
      return  p ? new(p) ::TMarker3DBox : new ::TMarker3DBox;
   }
   static void *newArray_TMarker3DBox(Long_t nElements, void *p) {
      return p ? new(p) ::TMarker3DBox[nElements] : new ::TMarker3DBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMarker3DBox(void *p) {
      delete ((::TMarker3DBox*)p);
   }
   static void deleteArray_TMarker3DBox(void *p) {
      delete [] ((::TMarker3DBox*)p);
   }
   static void destruct_TMarker3DBox(void *p) {
      typedef ::TMarker3DBox current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMarker3DBox(TBuffer &buf, void *obj) {
      ((::TMarker3DBox*)obj)->::TMarker3DBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMarker3DBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMixture(void *p) {
      return  p ? new(p) ::TMixture : new ::TMixture;
   }
   static void *newArray_TMixture(Long_t nElements, void *p) {
      return p ? new(p) ::TMixture[nElements] : new ::TMixture[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMixture(void *p) {
      delete ((::TMixture*)p);
   }
   static void deleteArray_TMixture(void *p) {
      delete [] ((::TMixture*)p);
   }
   static void destruct_TMixture(void *p) {
      typedef ::TMixture current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMixture(TBuffer &buf, void *obj) {
      ((::TMixture*)obj)->::TMixture::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMixture

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNode(void *p) {
      return  p ? new(p) ::TNode : new ::TNode;
   }
   static void *newArray_TNode(Long_t nElements, void *p) {
      return p ? new(p) ::TNode[nElements] : new ::TNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNode(void *p) {
      delete ((::TNode*)p);
   }
   static void deleteArray_TNode(void *p) {
      delete [] ((::TNode*)p);
   }
   static void destruct_TNode(void *p) {
      typedef ::TNode current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNode(TBuffer &buf, void *obj) {
      ((::TNode*)obj)->::TNode::Streamer(buf);
   }
} // end of namespace ROOT for class ::TNode

//______________________________________________________________________________
void TNodeDiv::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNodeDiv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNodeDiv::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNodeDiv::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNodeDiv(void *p) {
      return  p ? new(p) ::TNodeDiv : new ::TNodeDiv;
   }
   static void *newArray_TNodeDiv(Long_t nElements, void *p) {
      return p ? new(p) ::TNodeDiv[nElements] : new ::TNodeDiv[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNodeDiv(void *p) {
      delete ((::TNodeDiv*)p);
   }
   static void deleteArray_TNodeDiv(void *p) {
      delete [] ((::TNodeDiv*)p);
   }
   static void destruct_TNodeDiv(void *p) {
      typedef ::TNodeDiv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TNodeDiv

//______________________________________________________________________________
void TPARA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPARA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPARA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPARA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPARA(void *p) {
      return  p ? new(p) ::TPARA : new ::TPARA;
   }
   static void *newArray_TPARA(Long_t nElements, void *p) {
      return p ? new(p) ::TPARA[nElements] : new ::TPARA[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPARA(void *p) {
      delete ((::TPARA*)p);
   }
   static void deleteArray_TPARA(void *p) {
      delete [] ((::TPARA*)p);
   }
   static void destruct_TPARA(void *p) {
      typedef ::TPARA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPARA

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPCON(void *p) {
      return  p ? new(p) ::TPCON : new ::TPCON;
   }
   static void *newArray_TPCON(Long_t nElements, void *p) {
      return p ? new(p) ::TPCON[nElements] : new ::TPCON[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPCON(void *p) {
      delete ((::TPCON*)p);
   }
   static void deleteArray_TPCON(void *p) {
      delete [] ((::TPCON*)p);
   }
   static void destruct_TPCON(void *p) {
      typedef ::TPCON current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPCON(TBuffer &buf, void *obj) {
      ((::TPCON*)obj)->::TPCON::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPCON

//______________________________________________________________________________
void TPGON::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPGON.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPGON::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPGON::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPGON(void *p) {
      return  p ? new(p) ::TPGON : new ::TPGON;
   }
   static void *newArray_TPGON(Long_t nElements, void *p) {
      return p ? new(p) ::TPGON[nElements] : new ::TPGON[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPGON(void *p) {
      delete ((::TPGON*)p);
   }
   static void deleteArray_TPGON(void *p) {
      delete [] ((::TPGON*)p);
   }
   static void destruct_TPGON(void *p) {
      typedef ::TPGON current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPGON

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPolyMarker3D(void *p) {
      return  p ? new(p) ::TPolyMarker3D : new ::TPolyMarker3D;
   }
   static void *newArray_TPolyMarker3D(Long_t nElements, void *p) {
      return p ? new(p) ::TPolyMarker3D[nElements] : new ::TPolyMarker3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPolyMarker3D(void *p) {
      delete ((::TPolyMarker3D*)p);
   }
   static void deleteArray_TPolyMarker3D(void *p) {
      delete [] ((::TPolyMarker3D*)p);
   }
   static void destruct_TPolyMarker3D(void *p) {
      typedef ::TPolyMarker3D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPolyMarker3D(TBuffer &buf, void *obj) {
      ((::TPolyMarker3D*)obj)->::TPolyMarker3D::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TPolyMarker3D(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TPolyMarker3D*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TPolyMarker3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPointSet3D(void *p) {
      return  p ? new(p) ::TPointSet3D : new ::TPointSet3D;
   }
   static void *newArray_TPointSet3D(Long_t nElements, void *p) {
      return p ? new(p) ::TPointSet3D[nElements] : new ::TPointSet3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPointSet3D(void *p) {
      delete ((::TPointSet3D*)p);
   }
   static void deleteArray_TPointSet3D(void *p) {
      delete [] ((::TPointSet3D*)p);
   }
   static void destruct_TPointSet3D(void *p) {
      typedef ::TPointSet3D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPointSet3D(TBuffer &buf, void *obj) {
      ((::TPointSet3D*)obj)->::TPointSet3D::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TPointSet3D(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TPointSet3D*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TPointSet3D

//______________________________________________________________________________
void TPoints3DABC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPoints3DABC.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPoints3DABC(void *p) {
      delete ((::TPoints3DABC*)p);
   }
   static void deleteArray_TPoints3DABC(void *p) {
      delete [] ((::TPoints3DABC*)p);
   }
   static void destruct_TPoints3DABC(void *p) {
      typedef ::TPoints3DABC current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPoints3DABC(TBuffer &buf, void *obj) {
      ((::TPoints3DABC*)obj)->::TPoints3DABC::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPoints3DABC

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSPHE(void *p) {
      return  p ? new(p) ::TSPHE : new ::TSPHE;
   }
   static void *newArray_TSPHE(Long_t nElements, void *p) {
      return p ? new(p) ::TSPHE[nElements] : new ::TSPHE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSPHE(void *p) {
      delete ((::TSPHE*)p);
   }
   static void deleteArray_TSPHE(void *p) {
      delete [] ((::TSPHE*)p);
   }
   static void destruct_TSPHE(void *p) {
      typedef ::TSPHE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSPHE(TBuffer &buf, void *obj) {
      ((::TSPHE*)obj)->::TSPHE::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSPHE

//______________________________________________________________________________
void TTRAP::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTRAP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTRAP::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTRAP::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTRAP(void *p) {
      return  p ? new(p) ::TTRAP : new ::TTRAP;
   }
   static void *newArray_TTRAP(Long_t nElements, void *p) {
      return p ? new(p) ::TTRAP[nElements] : new ::TTRAP[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTRAP(void *p) {
      delete ((::TTRAP*)p);
   }
   static void deleteArray_TTRAP(void *p) {
      delete [] ((::TTRAP*)p);
   }
   static void destruct_TTRAP(void *p) {
      typedef ::TTRAP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTRAP

//______________________________________________________________________________
void TTRD1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTRD1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTRD1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTRD1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTRD1(void *p) {
      return  p ? new(p) ::TTRD1 : new ::TTRD1;
   }
   static void *newArray_TTRD1(Long_t nElements, void *p) {
      return p ? new(p) ::TTRD1[nElements] : new ::TTRD1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTRD1(void *p) {
      delete ((::TTRD1*)p);
   }
   static void deleteArray_TTRD1(void *p) {
      delete [] ((::TTRD1*)p);
   }
   static void destruct_TTRD1(void *p) {
      typedef ::TTRD1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTRD1

//______________________________________________________________________________
void TTRD2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTRD2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTRD2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTRD2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTRD2(void *p) {
      return  p ? new(p) ::TTRD2 : new ::TTRD2;
   }
   static void *newArray_TTRD2(Long_t nElements, void *p) {
      return p ? new(p) ::TTRD2[nElements] : new ::TTRD2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTRD2(void *p) {
      delete ((::TTRD2*)p);
   }
   static void deleteArray_TTRD2(void *p) {
      delete [] ((::TTRD2*)p);
   }
   static void destruct_TTRD2(void *p) {
      typedef ::TTRD2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTRD2

namespace ROOT {
   // Wrappers around operator new
   static void *new_TView3D(void *p) {
      return  p ? new(p) ::TView3D : new ::TView3D;
   }
   static void *newArray_TView3D(Long_t nElements, void *p) {
      return p ? new(p) ::TView3D[nElements] : new ::TView3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TView3D(void *p) {
      delete ((::TView3D*)p);
   }
   static void deleteArray_TView3D(void *p) {
      delete [] ((::TView3D*)p);
   }
   static void destruct_TView3D(void *p) {
      typedef ::TView3D current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TView3D(TBuffer &buf, void *obj) {
      ((::TView3D*)obj)->::TView3D::Streamer(buf);
   }
} // end of namespace ROOT for class ::TView3D

//______________________________________________________________________________
void TXTRU::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXTRU.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TXTRU::Class(),this);
   } else {
      R__b.WriteClassBuffer(TXTRU::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TXTRU(void *p) {
      return  p ? new(p) ::TXTRU : new ::TXTRU;
   }
   static void *newArray_TXTRU(Long_t nElements, void *p) {
      return p ? new(p) ::TXTRU[nElements] : new ::TXTRU[nElements];
   }
   // Wrapper around operator delete
   static void delete_TXTRU(void *p) {
      delete ((::TXTRU*)p);
   }
   static void deleteArray_TXTRU(void *p) {
      delete [] ((::TXTRU*)p);
   }
   static void destruct_TXTRU(void *p) {
      typedef ::TXTRU current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TXTRU

namespace {
  void TriggerDictionaryInitialization_libGraf3d_Impl() {
    static const char* headers[] = {
"TAxis3D.h",
"TBRIK.h",
"TCONE.h",
"TCONS.h",
"TCTUB.h",
"TELTU.h",
"TGTRA.h",
"TGeometry.h",
"THYPE.h",
"THelix.h",
"TMarker3DBox.h",
"TMaterial.h",
"TMixture.h",
"TNode.h",
"TNodeDiv.h",
"TPARA.h",
"TPCON.h",
"TPGON.h",
"TPointSet3D.h",
"TPoints3DABC.h",
"TPolyLine3D.h",
"TPolyMarker3D.h",
"TRotMatrix.h",
"TSPHE.h",
"TShape.h",
"TTRAP.h",
"TTRD1.h",
"TTRD2.h",
"TTUBE.h",
"TTUBS.h",
"TView3D.h",
"TXTRU.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGraf3d dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(3-D ruler painting class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAxis3D.h")))  TAxis3D;
class __attribute__((annotate(R"ATTRDUMP(Materials used in the Geometry Shapes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMaterial.h")))  __attribute__((annotate("$clingAutoload$TBRIK.h")))  TMaterial;
class __attribute__((annotate(R"ATTRDUMP(Basic shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TShape.h")))  __attribute__((annotate("$clingAutoload$TBRIK.h")))  TShape;
class __attribute__((annotate(R"ATTRDUMP(TBRIK shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TBRIK.h")))  TBRIK;
class __attribute__((annotate(R"ATTRDUMP(TUBE shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTUBE.h")))  __attribute__((annotate("$clingAutoload$TCONE.h")))  TTUBE;
class __attribute__((annotate(R"ATTRDUMP(CONE shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TCONE.h")))  TCONE;
class __attribute__((annotate(R"ATTRDUMP(TUBS shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTUBS.h")))  __attribute__((annotate("$clingAutoload$TCONS.h")))  TTUBS;
class __attribute__((annotate(R"ATTRDUMP(CONS shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TCONS.h")))  TCONS;
class __attribute__((annotate(R"ATTRDUMP(The Cut Tube shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TCTUB.h")))  TCTUB;
class __attribute__((annotate(R"ATTRDUMP(ELTU shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TELTU.h")))  TELTU;
class __attribute__((annotate(R"ATTRDUMP(GTRA shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGTRA.h")))  TGTRA;
class __attribute__((annotate(R"ATTRDUMP(Structure for Matrices, Shapes and Nodes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeometry.h")))  TGeometry;
class __attribute__((annotate(R"ATTRDUMP(HYPE shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THYPE.h")))  THYPE;
class __attribute__((annotate(R"ATTRDUMP(A 3-D polyline)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPolyLine3D.h")))  __attribute__((annotate("$clingAutoload$THelix.h")))  TPolyLine3D;
class __attribute__((annotate(R"ATTRDUMP(Rotation Matrix for 3-D geometry objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TRotMatrix.h")))  __attribute__((annotate("$clingAutoload$THelix.h")))  TRotMatrix;
class __attribute__((annotate(R"ATTRDUMP(A Helix drawn as a PolyLine3D)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THelix.h")))  THelix;
class __attribute__((annotate(R"ATTRDUMP(A special 3-D marker designed for event display)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMarker3DBox.h")))  TMarker3DBox;
class __attribute__((annotate(R"ATTRDUMP(Mixtures used in the Geometry Shapes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TMixture.h")))  TMixture;
class __attribute__((annotate(R"ATTRDUMP(Description of parameters to position a 3-D geometry object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TNode.h")))  TNode;
class __attribute__((annotate(R"ATTRDUMP(Description of parameters to divide a 3-D geometry object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TNodeDiv.h")))  TNodeDiv;
class __attribute__((annotate(R"ATTRDUMP(PARA shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPARA.h")))  TPARA;
class __attribute__((annotate(R"ATTRDUMP(PCON shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPCON.h")))  TPCON;
class __attribute__((annotate(R"ATTRDUMP(PGON shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPGON.h")))  TPGON;
class __attribute__((annotate(R"ATTRDUMP(An array of 3-D points with the same marker)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(An array of 3-D points with the same marker)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(An array of 3-D points with the same marker)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPolyMarker3D.h")))  __attribute__((annotate("$clingAutoload$TPointSet3D.h")))  TPolyMarker3D;
class __attribute__((annotate(R"ATTRDUMP(TPolyMarker3D with direct OpenGL rendering.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(TPolyMarker3D with direct OpenGL rendering.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(TPolyMarker3D with direct OpenGL rendering.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPointSet3D.h")))  TPointSet3D;
class __attribute__((annotate(R"ATTRDUMP(A 3-D Points)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPoints3DABC.h")))  TPoints3DABC;
class __attribute__((annotate(R"ATTRDUMP(SPHE shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TSPHE.h")))  TSPHE;
class __attribute__((annotate(R"ATTRDUMP(TRAP shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTRAP.h")))  TTRAP;
class __attribute__((annotate(R"ATTRDUMP(TRD1 shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTRD1.h")))  TTRD1;
class __attribute__((annotate(R"ATTRDUMP(TRD2 shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTRD2.h")))  TTRD2;
class __attribute__((annotate(R"ATTRDUMP(3-D View)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(3-D View)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(3-D View)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TView3D.h")))  TView3D;
class __attribute__((annotate(R"ATTRDUMP(TXTRU shape)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TXTRU.h")))  TXTRU;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGraf3d dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TAxis3D.h"
#include "TBRIK.h"
#include "TCONE.h"
#include "TCONS.h"
#include "TCTUB.h"
#include "TELTU.h"
#include "TGTRA.h"
#include "TGeometry.h"
#include "THYPE.h"
#include "THelix.h"
#include "TMarker3DBox.h"
#include "TMaterial.h"
#include "TMixture.h"
#include "TNode.h"
#include "TNodeDiv.h"
#include "TPARA.h"
#include "TPCON.h"
#include "TPGON.h"
#include "TPointSet3D.h"
#include "TPoints3DABC.h"
#include "TPolyLine3D.h"
#include "TPolyMarker3D.h"
#include "TRotMatrix.h"
#include "TSPHE.h"
#include "TShape.h"
#include "TTRAP.h"
#include "TTRD1.h"
#include "TTRD2.h"
#include "TTUBE.h"
#include "TTUBS.h"
#include "TView3D.h"
#include "TXTRU.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"EHelixRangeType", payloadCode, "@",
"TAxis3D", payloadCode, "@",
"TBRIK", payloadCode, "@",
"TCONE", payloadCode, "@",
"TCONS", payloadCode, "@",
"TCTUB", payloadCode, "@",
"TELTU", payloadCode, "@",
"TGTRA", payloadCode, "@",
"TGeometry", payloadCode, "@",
"THYPE", payloadCode, "@",
"THelix", payloadCode, "@",
"TMarker3DBox", payloadCode, "@",
"TMaterial", payloadCode, "@",
"TMixture", payloadCode, "@",
"TNode", payloadCode, "@",
"TNodeDiv", payloadCode, "@",
"TPARA", payloadCode, "@",
"TPCON", payloadCode, "@",
"TPGON", payloadCode, "@",
"TPointSet3D", payloadCode, "@",
"TPoints3DABC", payloadCode, "@",
"TPolyLine3D", payloadCode, "@",
"TPolyMarker3D", payloadCode, "@",
"TRotMatrix", payloadCode, "@",
"TSPHE", payloadCode, "@",
"TShape", payloadCode, "@",
"TTRAP", payloadCode, "@",
"TTRD1", payloadCode, "@",
"TTRD2", payloadCode, "@",
"TTUBE", payloadCode, "@",
"TTUBS", payloadCode, "@",
"TView3D", payloadCode, "@",
"TXTRU", payloadCode, "@",
"gGeometry", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGraf3d",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGraf3d_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGraf3d_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGraf3d() {
  TriggerDictionaryInitialization_libGraf3d_Impl();
}
