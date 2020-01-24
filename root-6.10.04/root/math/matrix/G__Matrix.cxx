// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Matrix

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
#include "TDecompBK.h"
#include "TDecompBase.h"
#include "TDecompChol.h"
#include "TDecompLU.h"
#include "TDecompQRH.h"
#include "TDecompSVD.h"
#include "TDecompSparse.h"
#include "TMatrix.h"
#include "TMatrixD.h"
#include "TMatrixDBase.h"
#include "TMatrixDBasefwd.h"
#include "TMatrixDEigen.h"
#include "TMatrixDLazy.h"
#include "TMatrixDSparse.h"
#include "TMatrixDSparsefwd.h"
#include "TMatrixDSym.h"
#include "TMatrixDSymEigen.h"
#include "TMatrixDSymfwd.h"
#include "TMatrixDUtils.h"
#include "TMatrixDUtilsfwd.h"
#include "TMatrixDfwd.h"
#include "TMatrixF.h"
#include "TMatrixFBase.h"
#include "TMatrixFBasefwd.h"
#include "TMatrixFLazy.h"
#include "TMatrixFSparse.h"
#include "TMatrixFSparsefwd.h"
#include "TMatrixFSym.h"
#include "TMatrixFSymfwd.h"
#include "TMatrixFUtils.h"
#include "TMatrixFUtilsfwd.h"
#include "TMatrixFfwd.h"
#include "TMatrixT.h"
#include "TMatrixTBase.h"
#include "TMatrixTCramerInv.h"
#include "TMatrixTLazy.h"
#include "TMatrixTSparse.h"
#include "TMatrixTSym.h"
#include "TMatrixTSymCramerInv.h"
#include "TMatrixTUtils.h"
#include "TVector.h"
#include "TVectorD.h"
#include "TVectorDfwd.h"
#include "TVectorF.h"
#include "TVectorFfwd.h"
#include "TVectorT.h"
#include "TVectorfwd.h"

// Header files passed via #pragma extra_include

namespace TMatrixTCramerInv {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TMatrixTCramerInv_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TMatrixTCramerInv", 0 /*version*/, "TMatrixTCramerInv.h", 30,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &TMatrixTCramerInv_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TMatrixTCramerInv_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace TMatrixTSymCramerInv {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TMatrixTSymCramerInv_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TMatrixTSymCramerInv", 0 /*version*/, "TMatrixTSymCramerInv.h", 30,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &TMatrixTSymCramerInv_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TMatrixTSymCramerInv_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *TMatrixTBaselEfloatgR_Dictionary();
   static void TMatrixTBaselEfloatgR_TClassManip(TClass*);
   static void delete_TMatrixTBaselEfloatgR(void *p);
   static void deleteArray_TMatrixTBaselEfloatgR(void *p);
   static void destruct_TMatrixTBaselEfloatgR(void *p);
   static void streamer_TMatrixTBaselEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTBase<float>*)
   {
      ::TMatrixTBase<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTBase<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTBase<float>", ::TMatrixTBase<float>::Class_Version(), "TMatrixTBase.h", 83,
                  typeid(::TMatrixTBase<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTBaselEfloatgR_Dictionary, isa_proxy, 17,
                  sizeof(::TMatrixTBase<float>) );
      instance.SetDelete(&delete_TMatrixTBaselEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTBaselEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTBaselEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTBaselEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTBase<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTBase<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTBase<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTBaselEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<float>*)0x0)->GetClass();
      TMatrixTBaselEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTBaselEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTBaselEdoublegR_Dictionary();
   static void TMatrixTBaselEdoublegR_TClassManip(TClass*);
   static void delete_TMatrixTBaselEdoublegR(void *p);
   static void deleteArray_TMatrixTBaselEdoublegR(void *p);
   static void destruct_TMatrixTBaselEdoublegR(void *p);
   static void streamer_TMatrixTBaselEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTBase<double>*)
   {
      ::TMatrixTBase<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTBase<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTBase<double>", ::TMatrixTBase<double>::Class_Version(), "TMatrixTBase.h", 83,
                  typeid(::TMatrixTBase<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTBaselEdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::TMatrixTBase<double>) );
      instance.SetDelete(&delete_TMatrixTBaselEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTBaselEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTBaselEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTBaselEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTBase<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTBase<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTBase<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTBaselEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<double>*)0x0)->GetClass();
      TMatrixTBaselEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTBaselEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TVectorTlEfloatgR_Dictionary();
   static void TVectorTlEfloatgR_TClassManip(TClass*);
   static void *new_TVectorTlEfloatgR(void *p = 0);
   static void *newArray_TVectorTlEfloatgR(Long_t size, void *p);
   static void delete_TVectorTlEfloatgR(void *p);
   static void deleteArray_TVectorTlEfloatgR(void *p);
   static void destruct_TVectorTlEfloatgR(void *p);
   static void streamer_TVectorTlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVectorT<float>*)
   {
      ::TVectorT<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVectorT<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVectorT<float>", ::TVectorT<float>::Class_Version(), "TVectorT.h", 27,
                  typeid(::TVectorT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TVectorTlEfloatgR_Dictionary, isa_proxy, 17,
                  sizeof(::TVectorT<float>) );
      instance.SetNew(&new_TVectorTlEfloatgR);
      instance.SetNewArray(&newArray_TVectorTlEfloatgR);
      instance.SetDelete(&delete_TVectorTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TVectorTlEfloatgR);
      instance.SetDestructor(&destruct_TVectorTlEfloatgR);
      instance.SetStreamerFunc(&streamer_TVectorTlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVectorT<float>*)
   {
      return GenerateInitInstanceLocal((::TVectorT<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVectorT<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TVectorTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TVectorT<float>*)0x0)->GetClass();
      TVectorTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TVectorTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TVectorTlEdoublegR_Dictionary();
   static void TVectorTlEdoublegR_TClassManip(TClass*);
   static void *new_TVectorTlEdoublegR(void *p = 0);
   static void *newArray_TVectorTlEdoublegR(Long_t size, void *p);
   static void delete_TVectorTlEdoublegR(void *p);
   static void deleteArray_TVectorTlEdoublegR(void *p);
   static void destruct_TVectorTlEdoublegR(void *p);
   static void streamer_TVectorTlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVectorT<double>*)
   {
      ::TVectorT<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVectorT<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVectorT<double>", ::TVectorT<double>::Class_Version(), "TVectorT.h", 27,
                  typeid(::TVectorT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TVectorTlEdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::TVectorT<double>) );
      instance.SetNew(&new_TVectorTlEdoublegR);
      instance.SetNewArray(&newArray_TVectorTlEdoublegR);
      instance.SetDelete(&delete_TVectorTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TVectorTlEdoublegR);
      instance.SetDestructor(&destruct_TVectorTlEdoublegR);
      instance.SetStreamerFunc(&streamer_TVectorTlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVectorT<double>*)
   {
      return GenerateInitInstanceLocal((::TVectorT<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVectorT<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TVectorTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TVectorT<double>*)0x0)->GetClass();
      TVectorTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TVectorTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTlEdoublegR_Dictionary();
   static void TMatrixTlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTlEdoublegR(void *p);
   static void deleteArray_TMatrixTlEdoublegR(void *p);
   static void destruct_TMatrixTlEdoublegR(void *p);
   static void streamer_TMatrixTlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixT<double>*)
   {
      ::TMatrixT<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixT<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixT<double>", ::TMatrixT<double>::Class_Version(), "TMatrixT.h", 39,
                  typeid(::TMatrixT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTlEdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::TMatrixT<double>) );
      instance.SetNew(&new_TMatrixTlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTlEdoublegR);
      instance.SetDelete(&delete_TMatrixTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixT<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixT<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixT<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<double>*)0x0)->GetClass();
      TMatrixTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTlEfloatgR_Dictionary();
   static void TMatrixTlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTlEfloatgR(void *p);
   static void deleteArray_TMatrixTlEfloatgR(void *p);
   static void destruct_TMatrixTlEfloatgR(void *p);
   static void streamer_TMatrixTlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixT<float>*)
   {
      ::TMatrixT<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixT<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixT<float>", ::TMatrixT<float>::Class_Version(), "TMatrixT.h", 39,
                  typeid(::TMatrixT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTlEfloatgR_Dictionary, isa_proxy, 17,
                  sizeof(::TMatrixT<float>) );
      instance.SetNew(&new_TMatrixTlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTlEfloatgR);
      instance.SetDelete(&delete_TMatrixTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixT<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixT<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixT<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<float>*)0x0)->GetClass();
      TMatrixTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSymlEdoublegR_Dictionary();
   static void TMatrixTSymlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTSymlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTSymlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTSymlEdoublegR(void *p);
   static void deleteArray_TMatrixTSymlEdoublegR(void *p);
   static void destruct_TMatrixTSymlEdoublegR(void *p);
   static void streamer_TMatrixTSymlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSym<double>*)
   {
      ::TMatrixTSym<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSym<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSym<double>", ::TMatrixTSym<double>::Class_Version(), "TMatrixTSym.h", 34,
                  typeid(::TMatrixTSym<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSymlEdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::TMatrixTSym<double>) );
      instance.SetNew(&new_TMatrixTSymlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTSymlEdoublegR);
      instance.SetDelete(&delete_TMatrixTSymlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSymlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTSymlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTSymlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSym<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSym<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSym<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSymlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<double>*)0x0)->GetClass();
      TMatrixTSymlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSymlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSymlEfloatgR_Dictionary();
   static void TMatrixTSymlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTSymlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTSymlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTSymlEfloatgR(void *p);
   static void deleteArray_TMatrixTSymlEfloatgR(void *p);
   static void destruct_TMatrixTSymlEfloatgR(void *p);
   static void streamer_TMatrixTSymlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSym<float>*)
   {
      ::TMatrixTSym<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSym<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSym<float>", ::TMatrixTSym<float>::Class_Version(), "TMatrixTSym.h", 34,
                  typeid(::TMatrixTSym<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSymlEfloatgR_Dictionary, isa_proxy, 17,
                  sizeof(::TMatrixTSym<float>) );
      instance.SetNew(&new_TMatrixTSymlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTSymlEfloatgR);
      instance.SetDelete(&delete_TMatrixTSymlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSymlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTSymlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTSymlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSym<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSym<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSym<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSymlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<float>*)0x0)->GetClass();
      TMatrixTSymlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSymlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparselEdoublegR_Dictionary();
   static void TMatrixTSparselEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTSparselEdoublegR(void *p = 0);
   static void *newArray_TMatrixTSparselEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTSparselEdoublegR(void *p);
   static void deleteArray_TMatrixTSparselEdoublegR(void *p);
   static void destruct_TMatrixTSparselEdoublegR(void *p);
   static void streamer_TMatrixTSparselEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparse<double>*)
   {
      ::TMatrixTSparse<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparse<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparse<double>", ::TMatrixTSparse<double>::Class_Version(), "TMatrixTSparse.h", 35,
                  typeid(::TMatrixTSparse<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparselEdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::TMatrixTSparse<double>) );
      instance.SetNew(&new_TMatrixTSparselEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTSparselEdoublegR);
      instance.SetDelete(&delete_TMatrixTSparselEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparselEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTSparselEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparselEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparse<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparse<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparse<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparselEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<double>*)0x0)->GetClass();
      TMatrixTSparselEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparselEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparselEfloatgR_Dictionary();
   static void TMatrixTSparselEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTSparselEfloatgR(void *p = 0);
   static void *newArray_TMatrixTSparselEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTSparselEfloatgR(void *p);
   static void deleteArray_TMatrixTSparselEfloatgR(void *p);
   static void destruct_TMatrixTSparselEfloatgR(void *p);
   static void streamer_TMatrixTSparselEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparse<float>*)
   {
      ::TMatrixTSparse<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparse<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparse<float>", ::TMatrixTSparse<float>::Class_Version(), "TMatrixTSparse.h", 35,
                  typeid(::TMatrixTSparse<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparselEfloatgR_Dictionary, isa_proxy, 17,
                  sizeof(::TMatrixTSparse<float>) );
      instance.SetNew(&new_TMatrixTSparselEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTSparselEfloatgR);
      instance.SetDelete(&delete_TMatrixTSparselEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparselEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTSparselEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparselEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparse<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparse<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparse<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparselEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<float>*)0x0)->GetClass();
      TMatrixTSparselEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparselEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTRow_constlEdoublegR_Dictionary();
   static void TMatrixTRow_constlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTRow_constlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTRow_constlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTRow_constlEdoublegR(void *p);
   static void deleteArray_TMatrixTRow_constlEdoublegR(void *p);
   static void destruct_TMatrixTRow_constlEdoublegR(void *p);
   static void streamer_TMatrixTRow_constlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTRow_const<double>*)
   {
      ::TMatrixTRow_const<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTRow_const<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTRow_const<double>", ::TMatrixTRow_const<double>::Class_Version(), "TMatrixTUtils.h", 114,
                  typeid(::TMatrixTRow_const<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTRow_constlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTRow_const<double>) );
      instance.SetNew(&new_TMatrixTRow_constlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTRow_constlEdoublegR);
      instance.SetDelete(&delete_TMatrixTRow_constlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTRow_constlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTRow_constlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTRow_constlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTRow_const<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTRow_const<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTRow_const<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTRow_constlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<double>*)0x0)->GetClass();
      TMatrixTRow_constlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTRow_constlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTRow_constlEfloatgR_Dictionary();
   static void TMatrixTRow_constlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTRow_constlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTRow_constlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTRow_constlEfloatgR(void *p);
   static void deleteArray_TMatrixTRow_constlEfloatgR(void *p);
   static void destruct_TMatrixTRow_constlEfloatgR(void *p);
   static void streamer_TMatrixTRow_constlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTRow_const<float>*)
   {
      ::TMatrixTRow_const<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTRow_const<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTRow_const<float>", ::TMatrixTRow_const<float>::Class_Version(), "TMatrixTUtils.h", 114,
                  typeid(::TMatrixTRow_const<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTRow_constlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTRow_const<float>) );
      instance.SetNew(&new_TMatrixTRow_constlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTRow_constlEfloatgR);
      instance.SetDelete(&delete_TMatrixTRow_constlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTRow_constlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTRow_constlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTRow_constlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTRow_const<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTRow_const<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTRow_const<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTRow_constlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<float>*)0x0)->GetClass();
      TMatrixTRow_constlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTRow_constlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTRowlEdoublegR_Dictionary();
   static void TMatrixTRowlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTRowlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTRowlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTRowlEdoublegR(void *p);
   static void deleteArray_TMatrixTRowlEdoublegR(void *p);
   static void destruct_TMatrixTRowlEdoublegR(void *p);
   static void streamer_TMatrixTRowlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTRow<double>*)
   {
      ::TMatrixTRow<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTRow<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTRow<double>", ::TMatrixTRow<double>::Class_Version(), "TMatrixTUtils.h", 153,
                  typeid(::TMatrixTRow<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTRowlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTRow<double>) );
      instance.SetNew(&new_TMatrixTRowlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTRowlEdoublegR);
      instance.SetDelete(&delete_TMatrixTRowlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTRowlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTRowlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTRowlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTRow<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTRow<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTRow<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTRowlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<double>*)0x0)->GetClass();
      TMatrixTRowlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTRowlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTRowlEfloatgR_Dictionary();
   static void TMatrixTRowlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTRowlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTRowlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTRowlEfloatgR(void *p);
   static void deleteArray_TMatrixTRowlEfloatgR(void *p);
   static void destruct_TMatrixTRowlEfloatgR(void *p);
   static void streamer_TMatrixTRowlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTRow<float>*)
   {
      ::TMatrixTRow<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTRow<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTRow<float>", ::TMatrixTRow<float>::Class_Version(), "TMatrixTUtils.h", 153,
                  typeid(::TMatrixTRow<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTRowlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTRow<float>) );
      instance.SetNew(&new_TMatrixTRowlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTRowlEfloatgR);
      instance.SetDelete(&delete_TMatrixTRowlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTRowlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTRowlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTRowlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTRow<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTRow<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTRow<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTRowlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<float>*)0x0)->GetClass();
      TMatrixTRowlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTRowlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTColumn_constlEdoublegR_Dictionary();
   static void TMatrixTColumn_constlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTColumn_constlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTColumn_constlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTColumn_constlEdoublegR(void *p);
   static void deleteArray_TMatrixTColumn_constlEdoublegR(void *p);
   static void destruct_TMatrixTColumn_constlEdoublegR(void *p);
   static void streamer_TMatrixTColumn_constlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTColumn_const<double>*)
   {
      ::TMatrixTColumn_const<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTColumn_const<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTColumn_const<double>", ::TMatrixTColumn_const<double>::Class_Version(), "TMatrixTUtils.h", 214,
                  typeid(::TMatrixTColumn_const<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTColumn_constlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTColumn_const<double>) );
      instance.SetNew(&new_TMatrixTColumn_constlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTColumn_constlEdoublegR);
      instance.SetDelete(&delete_TMatrixTColumn_constlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTColumn_constlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTColumn_constlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTColumn_constlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTColumn_const<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTColumn_const<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTColumn_const<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTColumn_constlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<double>*)0x0)->GetClass();
      TMatrixTColumn_constlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTColumn_constlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTColumn_constlEfloatgR_Dictionary();
   static void TMatrixTColumn_constlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTColumn_constlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTColumn_constlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTColumn_constlEfloatgR(void *p);
   static void deleteArray_TMatrixTColumn_constlEfloatgR(void *p);
   static void destruct_TMatrixTColumn_constlEfloatgR(void *p);
   static void streamer_TMatrixTColumn_constlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTColumn_const<float>*)
   {
      ::TMatrixTColumn_const<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTColumn_const<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTColumn_const<float>", ::TMatrixTColumn_const<float>::Class_Version(), "TMatrixTUtils.h", 214,
                  typeid(::TMatrixTColumn_const<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTColumn_constlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTColumn_const<float>) );
      instance.SetNew(&new_TMatrixTColumn_constlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTColumn_constlEfloatgR);
      instance.SetDelete(&delete_TMatrixTColumn_constlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTColumn_constlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTColumn_constlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTColumn_constlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTColumn_const<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTColumn_const<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTColumn_const<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTColumn_constlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<float>*)0x0)->GetClass();
      TMatrixTColumn_constlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTColumn_constlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTColumnlEdoublegR_Dictionary();
   static void TMatrixTColumnlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTColumnlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTColumnlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTColumnlEdoublegR(void *p);
   static void deleteArray_TMatrixTColumnlEdoublegR(void *p);
   static void destruct_TMatrixTColumnlEdoublegR(void *p);
   static void streamer_TMatrixTColumnlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTColumn<double>*)
   {
      ::TMatrixTColumn<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTColumn<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTColumn<double>", ::TMatrixTColumn<double>::Class_Version(), "TMatrixTUtils.h", 253,
                  typeid(::TMatrixTColumn<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTColumnlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTColumn<double>) );
      instance.SetNew(&new_TMatrixTColumnlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTColumnlEdoublegR);
      instance.SetDelete(&delete_TMatrixTColumnlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTColumnlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTColumnlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTColumnlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTColumn<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTColumn<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTColumn<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTColumnlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<double>*)0x0)->GetClass();
      TMatrixTColumnlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTColumnlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTColumnlEfloatgR_Dictionary();
   static void TMatrixTColumnlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTColumnlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTColumnlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTColumnlEfloatgR(void *p);
   static void deleteArray_TMatrixTColumnlEfloatgR(void *p);
   static void destruct_TMatrixTColumnlEfloatgR(void *p);
   static void streamer_TMatrixTColumnlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTColumn<float>*)
   {
      ::TMatrixTColumn<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTColumn<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTColumn<float>", ::TMatrixTColumn<float>::Class_Version(), "TMatrixTUtils.h", 253,
                  typeid(::TMatrixTColumn<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTColumnlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTColumn<float>) );
      instance.SetNew(&new_TMatrixTColumnlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTColumnlEfloatgR);
      instance.SetDelete(&delete_TMatrixTColumnlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTColumnlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTColumnlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTColumnlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTColumn<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTColumn<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTColumn<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTColumnlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<float>*)0x0)->GetClass();
      TMatrixTColumnlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTColumnlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTDiag_constlEdoublegR_Dictionary();
   static void TMatrixTDiag_constlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTDiag_constlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTDiag_constlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTDiag_constlEdoublegR(void *p);
   static void deleteArray_TMatrixTDiag_constlEdoublegR(void *p);
   static void destruct_TMatrixTDiag_constlEdoublegR(void *p);
   static void streamer_TMatrixTDiag_constlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTDiag_const<double>*)
   {
      ::TMatrixTDiag_const<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTDiag_const<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTDiag_const<double>", ::TMatrixTDiag_const<double>::Class_Version(), "TMatrixTUtils.h", 316,
                  typeid(::TMatrixTDiag_const<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTDiag_constlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTDiag_const<double>) );
      instance.SetNew(&new_TMatrixTDiag_constlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTDiag_constlEdoublegR);
      instance.SetDelete(&delete_TMatrixTDiag_constlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTDiag_constlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTDiag_constlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTDiag_constlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTDiag_const<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTDiag_const<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTDiag_const<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTDiag_constlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<double>*)0x0)->GetClass();
      TMatrixTDiag_constlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTDiag_constlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTDiag_constlEfloatgR_Dictionary();
   static void TMatrixTDiag_constlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTDiag_constlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTDiag_constlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTDiag_constlEfloatgR(void *p);
   static void deleteArray_TMatrixTDiag_constlEfloatgR(void *p);
   static void destruct_TMatrixTDiag_constlEfloatgR(void *p);
   static void streamer_TMatrixTDiag_constlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTDiag_const<float>*)
   {
      ::TMatrixTDiag_const<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTDiag_const<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTDiag_const<float>", ::TMatrixTDiag_const<float>::Class_Version(), "TMatrixTUtils.h", 316,
                  typeid(::TMatrixTDiag_const<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTDiag_constlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTDiag_const<float>) );
      instance.SetNew(&new_TMatrixTDiag_constlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTDiag_constlEfloatgR);
      instance.SetDelete(&delete_TMatrixTDiag_constlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTDiag_constlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTDiag_constlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTDiag_constlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTDiag_const<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTDiag_const<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTDiag_const<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTDiag_constlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<float>*)0x0)->GetClass();
      TMatrixTDiag_constlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTDiag_constlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTDiaglEdoublegR_Dictionary();
   static void TMatrixTDiaglEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTDiaglEdoublegR(void *p = 0);
   static void *newArray_TMatrixTDiaglEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTDiaglEdoublegR(void *p);
   static void deleteArray_TMatrixTDiaglEdoublegR(void *p);
   static void destruct_TMatrixTDiaglEdoublegR(void *p);
   static void streamer_TMatrixTDiaglEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTDiag<double>*)
   {
      ::TMatrixTDiag<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTDiag<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTDiag<double>", ::TMatrixTDiag<double>::Class_Version(), "TMatrixTUtils.h", 353,
                  typeid(::TMatrixTDiag<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTDiaglEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTDiag<double>) );
      instance.SetNew(&new_TMatrixTDiaglEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTDiaglEdoublegR);
      instance.SetDelete(&delete_TMatrixTDiaglEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTDiaglEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTDiaglEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTDiaglEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTDiag<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTDiag<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTDiag<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTDiaglEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<double>*)0x0)->GetClass();
      TMatrixTDiaglEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTDiaglEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTDiaglEfloatgR_Dictionary();
   static void TMatrixTDiaglEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTDiaglEfloatgR(void *p = 0);
   static void *newArray_TMatrixTDiaglEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTDiaglEfloatgR(void *p);
   static void deleteArray_TMatrixTDiaglEfloatgR(void *p);
   static void destruct_TMatrixTDiaglEfloatgR(void *p);
   static void streamer_TMatrixTDiaglEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTDiag<float>*)
   {
      ::TMatrixTDiag<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTDiag<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTDiag<float>", ::TMatrixTDiag<float>::Class_Version(), "TMatrixTUtils.h", 353,
                  typeid(::TMatrixTDiag<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTDiaglEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTDiag<float>) );
      instance.SetNew(&new_TMatrixTDiaglEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTDiaglEfloatgR);
      instance.SetDelete(&delete_TMatrixTDiaglEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTDiaglEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTDiaglEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTDiaglEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTDiag<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTDiag<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTDiag<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTDiaglEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<float>*)0x0)->GetClass();
      TMatrixTDiaglEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTDiaglEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTFlat_constlEdoublegR_Dictionary();
   static void TMatrixTFlat_constlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTFlat_constlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTFlat_constlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTFlat_constlEdoublegR(void *p);
   static void deleteArray_TMatrixTFlat_constlEdoublegR(void *p);
   static void destruct_TMatrixTFlat_constlEdoublegR(void *p);
   static void streamer_TMatrixTFlat_constlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTFlat_const<double>*)
   {
      ::TMatrixTFlat_const<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTFlat_const<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTFlat_const<double>", ::TMatrixTFlat_const<double>::Class_Version(), "TMatrixTUtils.h", 406,
                  typeid(::TMatrixTFlat_const<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTFlat_constlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTFlat_const<double>) );
      instance.SetNew(&new_TMatrixTFlat_constlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTFlat_constlEdoublegR);
      instance.SetDelete(&delete_TMatrixTFlat_constlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTFlat_constlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTFlat_constlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTFlat_constlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTFlat_const<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTFlat_const<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTFlat_const<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTFlat_constlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<double>*)0x0)->GetClass();
      TMatrixTFlat_constlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTFlat_constlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTFlat_constlEfloatgR_Dictionary();
   static void TMatrixTFlat_constlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTFlat_constlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTFlat_constlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTFlat_constlEfloatgR(void *p);
   static void deleteArray_TMatrixTFlat_constlEfloatgR(void *p);
   static void destruct_TMatrixTFlat_constlEfloatgR(void *p);
   static void streamer_TMatrixTFlat_constlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTFlat_const<float>*)
   {
      ::TMatrixTFlat_const<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTFlat_const<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTFlat_const<float>", ::TMatrixTFlat_const<float>::Class_Version(), "TMatrixTUtils.h", 406,
                  typeid(::TMatrixTFlat_const<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTFlat_constlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTFlat_const<float>) );
      instance.SetNew(&new_TMatrixTFlat_constlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTFlat_constlEfloatgR);
      instance.SetDelete(&delete_TMatrixTFlat_constlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTFlat_constlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTFlat_constlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTFlat_constlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTFlat_const<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTFlat_const<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTFlat_const<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTFlat_constlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<float>*)0x0)->GetClass();
      TMatrixTFlat_constlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTFlat_constlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTFlatlEdoublegR_Dictionary();
   static void TMatrixTFlatlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTFlatlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTFlatlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTFlatlEdoublegR(void *p);
   static void deleteArray_TMatrixTFlatlEdoublegR(void *p);
   static void destruct_TMatrixTFlatlEdoublegR(void *p);
   static void streamer_TMatrixTFlatlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTFlat<double>*)
   {
      ::TMatrixTFlat<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTFlat<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTFlat<double>", ::TMatrixTFlat<double>::Class_Version(), "TMatrixTUtils.h", 439,
                  typeid(::TMatrixTFlat<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTFlatlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTFlat<double>) );
      instance.SetNew(&new_TMatrixTFlatlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTFlatlEdoublegR);
      instance.SetDelete(&delete_TMatrixTFlatlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTFlatlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTFlatlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTFlatlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTFlat<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTFlat<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTFlat<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTFlatlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<double>*)0x0)->GetClass();
      TMatrixTFlatlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTFlatlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTFlatlEfloatgR_Dictionary();
   static void TMatrixTFlatlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTFlatlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTFlatlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTFlatlEfloatgR(void *p);
   static void deleteArray_TMatrixTFlatlEfloatgR(void *p);
   static void destruct_TMatrixTFlatlEfloatgR(void *p);
   static void streamer_TMatrixTFlatlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTFlat<float>*)
   {
      ::TMatrixTFlat<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTFlat<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTFlat<float>", ::TMatrixTFlat<float>::Class_Version(), "TMatrixTUtils.h", 439,
                  typeid(::TMatrixTFlat<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTFlatlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTFlat<float>) );
      instance.SetNew(&new_TMatrixTFlatlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTFlatlEfloatgR);
      instance.SetDelete(&delete_TMatrixTFlatlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTFlatlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTFlatlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTFlatlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTFlat<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTFlat<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTFlat<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTFlatlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<float>*)0x0)->GetClass();
      TMatrixTFlatlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTFlatlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSub_constlEdoublegR_Dictionary();
   static void TMatrixTSub_constlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTSub_constlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTSub_constlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTSub_constlEdoublegR(void *p);
   static void deleteArray_TMatrixTSub_constlEdoublegR(void *p);
   static void destruct_TMatrixTSub_constlEdoublegR(void *p);
   static void streamer_TMatrixTSub_constlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSub_const<double>*)
   {
      ::TMatrixTSub_const<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSub_const<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSub_const<double>", ::TMatrixTSub_const<double>::Class_Version(), "TMatrixTUtils.h", 492,
                  typeid(::TMatrixTSub_const<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSub_constlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSub_const<double>) );
      instance.SetNew(&new_TMatrixTSub_constlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTSub_constlEdoublegR);
      instance.SetDelete(&delete_TMatrixTSub_constlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSub_constlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTSub_constlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTSub_constlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSub_const<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSub_const<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSub_const<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSub_constlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<double>*)0x0)->GetClass();
      TMatrixTSub_constlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSub_constlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSub_constlEfloatgR_Dictionary();
   static void TMatrixTSub_constlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTSub_constlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTSub_constlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTSub_constlEfloatgR(void *p);
   static void deleteArray_TMatrixTSub_constlEfloatgR(void *p);
   static void destruct_TMatrixTSub_constlEfloatgR(void *p);
   static void streamer_TMatrixTSub_constlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSub_const<float>*)
   {
      ::TMatrixTSub_const<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSub_const<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSub_const<float>", ::TMatrixTSub_const<float>::Class_Version(), "TMatrixTUtils.h", 492,
                  typeid(::TMatrixTSub_const<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSub_constlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSub_const<float>) );
      instance.SetNew(&new_TMatrixTSub_constlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTSub_constlEfloatgR);
      instance.SetDelete(&delete_TMatrixTSub_constlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSub_constlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTSub_constlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTSub_constlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSub_const<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSub_const<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSub_const<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSub_constlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<float>*)0x0)->GetClass();
      TMatrixTSub_constlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSub_constlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSublEdoublegR_Dictionary();
   static void TMatrixTSublEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTSublEdoublegR(void *p = 0);
   static void *newArray_TMatrixTSublEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTSublEdoublegR(void *p);
   static void deleteArray_TMatrixTSublEdoublegR(void *p);
   static void destruct_TMatrixTSublEdoublegR(void *p);
   static void streamer_TMatrixTSublEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSub<double>*)
   {
      ::TMatrixTSub<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSub<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSub<double>", ::TMatrixTSub<double>::Class_Version(), "TMatrixTUtils.h", 531,
                  typeid(::TMatrixTSub<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSublEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSub<double>) );
      instance.SetNew(&new_TMatrixTSublEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTSublEdoublegR);
      instance.SetDelete(&delete_TMatrixTSublEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSublEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTSublEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTSublEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSub<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSub<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSub<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSublEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<double>*)0x0)->GetClass();
      TMatrixTSublEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSublEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSublEfloatgR_Dictionary();
   static void TMatrixTSublEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTSublEfloatgR(void *p = 0);
   static void *newArray_TMatrixTSublEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTSublEfloatgR(void *p);
   static void deleteArray_TMatrixTSublEfloatgR(void *p);
   static void destruct_TMatrixTSublEfloatgR(void *p);
   static void streamer_TMatrixTSublEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSub<float>*)
   {
      ::TMatrixTSub<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSub<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSub<float>", ::TMatrixTSub<float>::Class_Version(), "TMatrixTUtils.h", 531,
                  typeid(::TMatrixTSub<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSublEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSub<float>) );
      instance.SetNew(&new_TMatrixTSublEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTSublEfloatgR);
      instance.SetDelete(&delete_TMatrixTSublEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSublEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTSublEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTSublEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSub<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSub<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSub<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSublEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<float>*)0x0)->GetClass();
      TMatrixTSublEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSublEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparseRow_constlEdoublegR_Dictionary();
   static void TMatrixTSparseRow_constlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTSparseRow_constlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTSparseRow_constlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTSparseRow_constlEdoublegR(void *p);
   static void deleteArray_TMatrixTSparseRow_constlEdoublegR(void *p);
   static void destruct_TMatrixTSparseRow_constlEdoublegR(void *p);
   static void streamer_TMatrixTSparseRow_constlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparseRow_const<double>*)
   {
      ::TMatrixTSparseRow_const<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparseRow_const<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparseRow_const<double>", ::TMatrixTSparseRow_const<double>::Class_Version(), "TMatrixTUtils.h", 585,
                  typeid(::TMatrixTSparseRow_const<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparseRow_constlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSparseRow_const<double>) );
      instance.SetNew(&new_TMatrixTSparseRow_constlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTSparseRow_constlEdoublegR);
      instance.SetDelete(&delete_TMatrixTSparseRow_constlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparseRow_constlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTSparseRow_constlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparseRow_constlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparseRow_const<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparseRow_const<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparseRow_constlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<double>*)0x0)->GetClass();
      TMatrixTSparseRow_constlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparseRow_constlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparseRow_constlEfloatgR_Dictionary();
   static void TMatrixTSparseRow_constlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTSparseRow_constlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTSparseRow_constlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTSparseRow_constlEfloatgR(void *p);
   static void deleteArray_TMatrixTSparseRow_constlEfloatgR(void *p);
   static void destruct_TMatrixTSparseRow_constlEfloatgR(void *p);
   static void streamer_TMatrixTSparseRow_constlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparseRow_const<float>*)
   {
      ::TMatrixTSparseRow_const<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparseRow_const<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparseRow_const<float>", ::TMatrixTSparseRow_const<float>::Class_Version(), "TMatrixTUtils.h", 585,
                  typeid(::TMatrixTSparseRow_const<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparseRow_constlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSparseRow_const<float>) );
      instance.SetNew(&new_TMatrixTSparseRow_constlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTSparseRow_constlEfloatgR);
      instance.SetDelete(&delete_TMatrixTSparseRow_constlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparseRow_constlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTSparseRow_constlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparseRow_constlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparseRow_const<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparseRow_const<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparseRow_constlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<float>*)0x0)->GetClass();
      TMatrixTSparseRow_constlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparseRow_constlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparseRowlEdoublegR_Dictionary();
   static void TMatrixTSparseRowlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTSparseRowlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTSparseRowlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTSparseRowlEdoublegR(void *p);
   static void deleteArray_TMatrixTSparseRowlEdoublegR(void *p);
   static void destruct_TMatrixTSparseRowlEdoublegR(void *p);
   static void streamer_TMatrixTSparseRowlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparseRow<double>*)
   {
      ::TMatrixTSparseRow<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparseRow<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparseRow<double>", ::TMatrixTSparseRow<double>::Class_Version(), "TMatrixTUtils.h", 615,
                  typeid(::TMatrixTSparseRow<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparseRowlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSparseRow<double>) );
      instance.SetNew(&new_TMatrixTSparseRowlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTSparseRowlEdoublegR);
      instance.SetDelete(&delete_TMatrixTSparseRowlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparseRowlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTSparseRowlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparseRowlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparseRow<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparseRow<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparseRow<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparseRowlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<double>*)0x0)->GetClass();
      TMatrixTSparseRowlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparseRowlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparseRowlEfloatgR_Dictionary();
   static void TMatrixTSparseRowlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTSparseRowlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTSparseRowlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTSparseRowlEfloatgR(void *p);
   static void deleteArray_TMatrixTSparseRowlEfloatgR(void *p);
   static void destruct_TMatrixTSparseRowlEfloatgR(void *p);
   static void streamer_TMatrixTSparseRowlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparseRow<float>*)
   {
      ::TMatrixTSparseRow<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparseRow<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparseRow<float>", ::TMatrixTSparseRow<float>::Class_Version(), "TMatrixTUtils.h", 615,
                  typeid(::TMatrixTSparseRow<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparseRowlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSparseRow<float>) );
      instance.SetNew(&new_TMatrixTSparseRowlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTSparseRowlEfloatgR);
      instance.SetDelete(&delete_TMatrixTSparseRowlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparseRowlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTSparseRowlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparseRowlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparseRow<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparseRow<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparseRow<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparseRowlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<float>*)0x0)->GetClass();
      TMatrixTSparseRowlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparseRowlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparseDiag_constlEdoublegR_Dictionary();
   static void TMatrixTSparseDiag_constlEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTSparseDiag_constlEdoublegR(void *p = 0);
   static void *newArray_TMatrixTSparseDiag_constlEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTSparseDiag_constlEdoublegR(void *p);
   static void deleteArray_TMatrixTSparseDiag_constlEdoublegR(void *p);
   static void destruct_TMatrixTSparseDiag_constlEdoublegR(void *p);
   static void streamer_TMatrixTSparseDiag_constlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparseDiag_const<double>*)
   {
      ::TMatrixTSparseDiag_const<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparseDiag_const<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparseDiag_const<double>", ::TMatrixTSparseDiag_const<double>::Class_Version(), "TMatrixTUtils.h", 651,
                  typeid(::TMatrixTSparseDiag_const<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparseDiag_constlEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSparseDiag_const<double>) );
      instance.SetNew(&new_TMatrixTSparseDiag_constlEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTSparseDiag_constlEdoublegR);
      instance.SetDelete(&delete_TMatrixTSparseDiag_constlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparseDiag_constlEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTSparseDiag_constlEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparseDiag_constlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparseDiag_const<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparseDiag_const<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparseDiag_constlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<double>*)0x0)->GetClass();
      TMatrixTSparseDiag_constlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparseDiag_constlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparseDiag_constlEfloatgR_Dictionary();
   static void TMatrixTSparseDiag_constlEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTSparseDiag_constlEfloatgR(void *p = 0);
   static void *newArray_TMatrixTSparseDiag_constlEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTSparseDiag_constlEfloatgR(void *p);
   static void deleteArray_TMatrixTSparseDiag_constlEfloatgR(void *p);
   static void destruct_TMatrixTSparseDiag_constlEfloatgR(void *p);
   static void streamer_TMatrixTSparseDiag_constlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparseDiag_const<float>*)
   {
      ::TMatrixTSparseDiag_const<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparseDiag_const<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparseDiag_const<float>", ::TMatrixTSparseDiag_const<float>::Class_Version(), "TMatrixTUtils.h", 651,
                  typeid(::TMatrixTSparseDiag_const<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparseDiag_constlEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSparseDiag_const<float>) );
      instance.SetNew(&new_TMatrixTSparseDiag_constlEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTSparseDiag_constlEfloatgR);
      instance.SetDelete(&delete_TMatrixTSparseDiag_constlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparseDiag_constlEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTSparseDiag_constlEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparseDiag_constlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparseDiag_const<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparseDiag_const<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparseDiag_constlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<float>*)0x0)->GetClass();
      TMatrixTSparseDiag_constlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparseDiag_constlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparseDiaglEdoublegR_Dictionary();
   static void TMatrixTSparseDiaglEdoublegR_TClassManip(TClass*);
   static void *new_TMatrixTSparseDiaglEdoublegR(void *p = 0);
   static void *newArray_TMatrixTSparseDiaglEdoublegR(Long_t size, void *p);
   static void delete_TMatrixTSparseDiaglEdoublegR(void *p);
   static void deleteArray_TMatrixTSparseDiaglEdoublegR(void *p);
   static void destruct_TMatrixTSparseDiaglEdoublegR(void *p);
   static void streamer_TMatrixTSparseDiaglEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparseDiag<double>*)
   {
      ::TMatrixTSparseDiag<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparseDiag<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparseDiag<double>", ::TMatrixTSparseDiag<double>::Class_Version(), "TMatrixTUtils.h", 677,
                  typeid(::TMatrixTSparseDiag<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparseDiaglEdoublegR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSparseDiag<double>) );
      instance.SetNew(&new_TMatrixTSparseDiaglEdoublegR);
      instance.SetNewArray(&newArray_TMatrixTSparseDiaglEdoublegR);
      instance.SetDelete(&delete_TMatrixTSparseDiaglEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparseDiaglEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTSparseDiaglEdoublegR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparseDiaglEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparseDiag<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparseDiag<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparseDiaglEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<double>*)0x0)->GetClass();
      TMatrixTSparseDiaglEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparseDiaglEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSparseDiaglEfloatgR_Dictionary();
   static void TMatrixTSparseDiaglEfloatgR_TClassManip(TClass*);
   static void *new_TMatrixTSparseDiaglEfloatgR(void *p = 0);
   static void *newArray_TMatrixTSparseDiaglEfloatgR(Long_t size, void *p);
   static void delete_TMatrixTSparseDiaglEfloatgR(void *p);
   static void deleteArray_TMatrixTSparseDiaglEfloatgR(void *p);
   static void destruct_TMatrixTSparseDiaglEfloatgR(void *p);
   static void streamer_TMatrixTSparseDiaglEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSparseDiag<float>*)
   {
      ::TMatrixTSparseDiag<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSparseDiag<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSparseDiag<float>", ::TMatrixTSparseDiag<float>::Class_Version(), "TMatrixTUtils.h", 677,
                  typeid(::TMatrixTSparseDiag<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSparseDiaglEfloatgR_Dictionary, isa_proxy, 16,
                  sizeof(::TMatrixTSparseDiag<float>) );
      instance.SetNew(&new_TMatrixTSparseDiaglEfloatgR);
      instance.SetNewArray(&newArray_TMatrixTSparseDiaglEfloatgR);
      instance.SetDelete(&delete_TMatrixTSparseDiaglEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSparseDiaglEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTSparseDiaglEfloatgR);
      instance.SetStreamerFunc(&streamer_TMatrixTSparseDiaglEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSparseDiag<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSparseDiag<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSparseDiaglEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<float>*)0x0)->GetClass();
      TMatrixTSparseDiaglEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSparseDiaglEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTLazylEdoublegR_Dictionary();
   static void TMatrixTLazylEdoublegR_TClassManip(TClass*);
   static void delete_TMatrixTLazylEdoublegR(void *p);
   static void deleteArray_TMatrixTLazylEdoublegR(void *p);
   static void destruct_TMatrixTLazylEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTLazy<double>*)
   {
      ::TMatrixTLazy<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTLazy<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTLazy<double>", ::TMatrixTLazy<double>::Class_Version(), "TMatrixTLazy.h", 43,
                  typeid(::TMatrixTLazy<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTLazylEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TMatrixTLazy<double>) );
      instance.SetDelete(&delete_TMatrixTLazylEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTLazylEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTLazylEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTLazy<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTLazy<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTLazy<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTLazylEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<double>*)0x0)->GetClass();
      TMatrixTLazylEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTLazylEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTLazylEfloatgR_Dictionary();
   static void TMatrixTLazylEfloatgR_TClassManip(TClass*);
   static void delete_TMatrixTLazylEfloatgR(void *p);
   static void deleteArray_TMatrixTLazylEfloatgR(void *p);
   static void destruct_TMatrixTLazylEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTLazy<float>*)
   {
      ::TMatrixTLazy<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTLazy<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTLazy<float>", ::TMatrixTLazy<float>::Class_Version(), "TMatrixTLazy.h", 43,
                  typeid(::TMatrixTLazy<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTLazylEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TMatrixTLazy<float>) );
      instance.SetDelete(&delete_TMatrixTLazylEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTLazylEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTLazylEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTLazy<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTLazy<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTLazy<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTLazylEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<float>*)0x0)->GetClass();
      TMatrixTLazylEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTLazylEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSymLazylEdoublegR_Dictionary();
   static void TMatrixTSymLazylEdoublegR_TClassManip(TClass*);
   static void delete_TMatrixTSymLazylEdoublegR(void *p);
   static void deleteArray_TMatrixTSymLazylEdoublegR(void *p);
   static void destruct_TMatrixTSymLazylEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSymLazy<double>*)
   {
      ::TMatrixTSymLazy<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSymLazy<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSymLazy<double>", ::TMatrixTSymLazy<double>::Class_Version(), "TMatrixTLazy.h", 86,
                  typeid(::TMatrixTSymLazy<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSymLazylEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TMatrixTSymLazy<double>) );
      instance.SetDelete(&delete_TMatrixTSymLazylEdoublegR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSymLazylEdoublegR);
      instance.SetDestructor(&destruct_TMatrixTSymLazylEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSymLazy<double>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSymLazy<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSymLazy<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSymLazylEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<double>*)0x0)->GetClass();
      TMatrixTSymLazylEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSymLazylEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMatrixTSymLazylEfloatgR_Dictionary();
   static void TMatrixTSymLazylEfloatgR_TClassManip(TClass*);
   static void delete_TMatrixTSymLazylEfloatgR(void *p);
   static void deleteArray_TMatrixTSymLazylEfloatgR(void *p);
   static void destruct_TMatrixTSymLazylEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixTSymLazy<float>*)
   {
      ::TMatrixTSymLazy<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixTSymLazy<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixTSymLazy<float>", ::TMatrixTSymLazy<float>::Class_Version(), "TMatrixTLazy.h", 86,
                  typeid(::TMatrixTSymLazy<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMatrixTSymLazylEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TMatrixTSymLazy<float>) );
      instance.SetDelete(&delete_TMatrixTSymLazylEfloatgR);
      instance.SetDeleteArray(&deleteArray_TMatrixTSymLazylEfloatgR);
      instance.SetDestructor(&destruct_TMatrixTSymLazylEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixTSymLazy<float>*)
   {
      return GenerateInitInstanceLocal((::TMatrixTSymLazy<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixTSymLazy<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMatrixTSymLazylEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<float>*)0x0)->GetClass();
      TMatrixTSymLazylEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TMatrixTSymLazylEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TDecompBase(void *p);
   static void deleteArray_TDecompBase(void *p);
   static void destruct_TDecompBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDecompBase*)
   {
      ::TDecompBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDecompBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDecompBase", ::TDecompBase::Class_Version(), "TDecompBase.h", 33,
                  typeid(::TDecompBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDecompBase::Dictionary, isa_proxy, 4,
                  sizeof(::TDecompBase) );
      instance.SetDelete(&delete_TDecompBase);
      instance.SetDeleteArray(&deleteArray_TDecompBase);
      instance.SetDestructor(&destruct_TDecompBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDecompBase*)
   {
      return GenerateInitInstanceLocal((::TDecompBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDecompBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDecompBK(void *p = 0);
   static void *newArray_TDecompBK(Long_t size, void *p);
   static void delete_TDecompBK(void *p);
   static void deleteArray_TDecompBK(void *p);
   static void destruct_TDecompBK(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDecompBK*)
   {
      ::TDecompBK *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDecompBK >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDecompBK", ::TDecompBK::Class_Version(), "TDecompBK.h", 26,
                  typeid(::TDecompBK), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDecompBK::Dictionary, isa_proxy, 4,
                  sizeof(::TDecompBK) );
      instance.SetNew(&new_TDecompBK);
      instance.SetNewArray(&newArray_TDecompBK);
      instance.SetDelete(&delete_TDecompBK);
      instance.SetDeleteArray(&deleteArray_TDecompBK);
      instance.SetDestructor(&destruct_TDecompBK);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDecompBK*)
   {
      return GenerateInitInstanceLocal((::TDecompBK*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDecompBK*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDecompChol(void *p = 0);
   static void *newArray_TDecompChol(Long_t size, void *p);
   static void delete_TDecompChol(void *p);
   static void deleteArray_TDecompChol(void *p);
   static void destruct_TDecompChol(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDecompChol*)
   {
      ::TDecompChol *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDecompChol >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDecompChol", ::TDecompChol::Class_Version(), "TDecompChol.h", 24,
                  typeid(::TDecompChol), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDecompChol::Dictionary, isa_proxy, 4,
                  sizeof(::TDecompChol) );
      instance.SetNew(&new_TDecompChol);
      instance.SetNewArray(&newArray_TDecompChol);
      instance.SetDelete(&delete_TDecompChol);
      instance.SetDeleteArray(&deleteArray_TDecompChol);
      instance.SetDestructor(&destruct_TDecompChol);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDecompChol*)
   {
      return GenerateInitInstanceLocal((::TDecompChol*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDecompChol*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDecompLU(void *p = 0);
   static void *newArray_TDecompLU(Long_t size, void *p);
   static void delete_TDecompLU(void *p);
   static void deleteArray_TDecompLU(void *p);
   static void destruct_TDecompLU(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDecompLU*)
   {
      ::TDecompLU *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDecompLU >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDecompLU", ::TDecompLU::Class_Version(), "TDecompLU.h", 23,
                  typeid(::TDecompLU), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDecompLU::Dictionary, isa_proxy, 4,
                  sizeof(::TDecompLU) );
      instance.SetNew(&new_TDecompLU);
      instance.SetNewArray(&newArray_TDecompLU);
      instance.SetDelete(&delete_TDecompLU);
      instance.SetDeleteArray(&deleteArray_TDecompLU);
      instance.SetDestructor(&destruct_TDecompLU);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDecompLU*)
   {
      return GenerateInitInstanceLocal((::TDecompLU*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDecompLU*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDecompQRH(void *p = 0);
   static void *newArray_TDecompQRH(Long_t size, void *p);
   static void delete_TDecompQRH(void *p);
   static void deleteArray_TDecompQRH(void *p);
   static void destruct_TDecompQRH(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDecompQRH*)
   {
      ::TDecompQRH *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDecompQRH >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDecompQRH", ::TDecompQRH::Class_Version(), "TDecompQRH.h", 25,
                  typeid(::TDecompQRH), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDecompQRH::Dictionary, isa_proxy, 4,
                  sizeof(::TDecompQRH) );
      instance.SetNew(&new_TDecompQRH);
      instance.SetNewArray(&newArray_TDecompQRH);
      instance.SetDelete(&delete_TDecompQRH);
      instance.SetDeleteArray(&deleteArray_TDecompQRH);
      instance.SetDestructor(&destruct_TDecompQRH);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDecompQRH*)
   {
      return GenerateInitInstanceLocal((::TDecompQRH*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDecompQRH*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDecompSVD(void *p = 0);
   static void *newArray_TDecompSVD(Long_t size, void *p);
   static void delete_TDecompSVD(void *p);
   static void deleteArray_TDecompSVD(void *p);
   static void destruct_TDecompSVD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDecompSVD*)
   {
      ::TDecompSVD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDecompSVD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDecompSVD", ::TDecompSVD::Class_Version(), "TDecompSVD.h", 23,
                  typeid(::TDecompSVD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDecompSVD::Dictionary, isa_proxy, 4,
                  sizeof(::TDecompSVD) );
      instance.SetNew(&new_TDecompSVD);
      instance.SetNewArray(&newArray_TDecompSVD);
      instance.SetDelete(&delete_TDecompSVD);
      instance.SetDeleteArray(&deleteArray_TDecompSVD);
      instance.SetDestructor(&destruct_TDecompSVD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDecompSVD*)
   {
      return GenerateInitInstanceLocal((::TDecompSVD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDecompSVD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDecompSparse(void *p = 0);
   static void *newArray_TDecompSparse(Long_t size, void *p);
   static void delete_TDecompSparse(void *p);
   static void deleteArray_TDecompSparse(void *p);
   static void destruct_TDecompSparse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDecompSparse*)
   {
      ::TDecompSparse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDecompSparse >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDecompSparse", ::TDecompSparse::Class_Version(), "TDecompSparse.h", 43,
                  typeid(::TDecompSparse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDecompSparse::Dictionary, isa_proxy, 4,
                  sizeof(::TDecompSparse) );
      instance.SetNew(&new_TDecompSparse);
      instance.SetNewArray(&newArray_TDecompSparse);
      instance.SetDelete(&delete_TDecompSparse);
      instance.SetDeleteArray(&deleteArray_TDecompSparse);
      instance.SetDestructor(&destruct_TDecompSparse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDecompSparse*)
   {
      return GenerateInitInstanceLocal((::TDecompSparse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDecompSparse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMatrixDEigen(void *p = 0);
   static void *newArray_TMatrixDEigen(Long_t size, void *p);
   static void delete_TMatrixDEigen(void *p);
   static void deleteArray_TMatrixDEigen(void *p);
   static void destruct_TMatrixDEigen(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixDEigen*)
   {
      ::TMatrixDEigen *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixDEigen >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixDEigen", ::TMatrixDEigen::Class_Version(), "TMatrixDEigen.h", 26,
                  typeid(::TMatrixDEigen), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMatrixDEigen::Dictionary, isa_proxy, 4,
                  sizeof(::TMatrixDEigen) );
      instance.SetNew(&new_TMatrixDEigen);
      instance.SetNewArray(&newArray_TMatrixDEigen);
      instance.SetDelete(&delete_TMatrixDEigen);
      instance.SetDeleteArray(&deleteArray_TMatrixDEigen);
      instance.SetDestructor(&destruct_TMatrixDEigen);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixDEigen*)
   {
      return GenerateInitInstanceLocal((::TMatrixDEigen*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixDEigen*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *THaarMatrixTlEdoublegR_Dictionary();
   static void THaarMatrixTlEdoublegR_TClassManip(TClass*);
   static void *new_THaarMatrixTlEdoublegR(void *p = 0);
   static void *newArray_THaarMatrixTlEdoublegR(Long_t size, void *p);
   static void delete_THaarMatrixTlEdoublegR(void *p);
   static void deleteArray_THaarMatrixTlEdoublegR(void *p);
   static void destruct_THaarMatrixTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaarMatrixT<double>*)
   {
      ::THaarMatrixT<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaarMatrixT<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaarMatrixT<double>", ::THaarMatrixT<double>::Class_Version(), "TMatrixTLazy.h", 122,
                  typeid(::THaarMatrixT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THaarMatrixTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::THaarMatrixT<double>) );
      instance.SetNew(&new_THaarMatrixTlEdoublegR);
      instance.SetNewArray(&newArray_THaarMatrixTlEdoublegR);
      instance.SetDelete(&delete_THaarMatrixTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_THaarMatrixTlEdoublegR);
      instance.SetDestructor(&destruct_THaarMatrixTlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaarMatrixT<double>*)
   {
      return GenerateInitInstanceLocal((::THaarMatrixT<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaarMatrixT<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THaarMatrixTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<double>*)0x0)->GetClass();
      THaarMatrixTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void THaarMatrixTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THaarMatrixTlEfloatgR_Dictionary();
   static void THaarMatrixTlEfloatgR_TClassManip(TClass*);
   static void *new_THaarMatrixTlEfloatgR(void *p = 0);
   static void *newArray_THaarMatrixTlEfloatgR(Long_t size, void *p);
   static void delete_THaarMatrixTlEfloatgR(void *p);
   static void deleteArray_THaarMatrixTlEfloatgR(void *p);
   static void destruct_THaarMatrixTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaarMatrixT<float>*)
   {
      ::THaarMatrixT<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaarMatrixT<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaarMatrixT<float>", ::THaarMatrixT<float>::Class_Version(), "TMatrixTLazy.h", 122,
                  typeid(::THaarMatrixT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THaarMatrixTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::THaarMatrixT<float>) );
      instance.SetNew(&new_THaarMatrixTlEfloatgR);
      instance.SetNewArray(&newArray_THaarMatrixTlEfloatgR);
      instance.SetDelete(&delete_THaarMatrixTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_THaarMatrixTlEfloatgR);
      instance.SetDestructor(&destruct_THaarMatrixTlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaarMatrixT<float>*)
   {
      return GenerateInitInstanceLocal((::THaarMatrixT<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaarMatrixT<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THaarMatrixTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<float>*)0x0)->GetClass();
      THaarMatrixTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void THaarMatrixTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THilbertMatrixTlEdoublegR_Dictionary();
   static void THilbertMatrixTlEdoublegR_TClassManip(TClass*);
   static void *new_THilbertMatrixTlEdoublegR(void *p = 0);
   static void *newArray_THilbertMatrixTlEdoublegR(Long_t size, void *p);
   static void delete_THilbertMatrixTlEdoublegR(void *p);
   static void deleteArray_THilbertMatrixTlEdoublegR(void *p);
   static void destruct_THilbertMatrixTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THilbertMatrixT<double>*)
   {
      ::THilbertMatrixT<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THilbertMatrixT<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THilbertMatrixT<double>", ::THilbertMatrixT<double>::Class_Version(), "TMatrixTLazy.h", 141,
                  typeid(::THilbertMatrixT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THilbertMatrixTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::THilbertMatrixT<double>) );
      instance.SetNew(&new_THilbertMatrixTlEdoublegR);
      instance.SetNewArray(&newArray_THilbertMatrixTlEdoublegR);
      instance.SetDelete(&delete_THilbertMatrixTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_THilbertMatrixTlEdoublegR);
      instance.SetDestructor(&destruct_THilbertMatrixTlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THilbertMatrixT<double>*)
   {
      return GenerateInitInstanceLocal((::THilbertMatrixT<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THilbertMatrixT<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THilbertMatrixTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<double>*)0x0)->GetClass();
      THilbertMatrixTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void THilbertMatrixTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THilbertMatrixTlEfloatgR_Dictionary();
   static void THilbertMatrixTlEfloatgR_TClassManip(TClass*);
   static void *new_THilbertMatrixTlEfloatgR(void *p = 0);
   static void *newArray_THilbertMatrixTlEfloatgR(Long_t size, void *p);
   static void delete_THilbertMatrixTlEfloatgR(void *p);
   static void deleteArray_THilbertMatrixTlEfloatgR(void *p);
   static void destruct_THilbertMatrixTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THilbertMatrixT<float>*)
   {
      ::THilbertMatrixT<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THilbertMatrixT<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THilbertMatrixT<float>", ::THilbertMatrixT<float>::Class_Version(), "TMatrixTLazy.h", 141,
                  typeid(::THilbertMatrixT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THilbertMatrixTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::THilbertMatrixT<float>) );
      instance.SetNew(&new_THilbertMatrixTlEfloatgR);
      instance.SetNewArray(&newArray_THilbertMatrixTlEfloatgR);
      instance.SetDelete(&delete_THilbertMatrixTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_THilbertMatrixTlEfloatgR);
      instance.SetDestructor(&destruct_THilbertMatrixTlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THilbertMatrixT<float>*)
   {
      return GenerateInitInstanceLocal((::THilbertMatrixT<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THilbertMatrixT<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THilbertMatrixTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<float>*)0x0)->GetClass();
      THilbertMatrixTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void THilbertMatrixTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THilbertMatrixTSymlEdoublegR_Dictionary();
   static void THilbertMatrixTSymlEdoublegR_TClassManip(TClass*);
   static void *new_THilbertMatrixTSymlEdoublegR(void *p = 0);
   static void *newArray_THilbertMatrixTSymlEdoublegR(Long_t size, void *p);
   static void delete_THilbertMatrixTSymlEdoublegR(void *p);
   static void deleteArray_THilbertMatrixTSymlEdoublegR(void *p);
   static void destruct_THilbertMatrixTSymlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THilbertMatrixTSym<double>*)
   {
      ::THilbertMatrixTSym<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THilbertMatrixTSym<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THilbertMatrixTSym<double>", ::THilbertMatrixTSym<double>::Class_Version(), "TMatrixTLazy.h", 161,
                  typeid(::THilbertMatrixTSym<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THilbertMatrixTSymlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::THilbertMatrixTSym<double>) );
      instance.SetNew(&new_THilbertMatrixTSymlEdoublegR);
      instance.SetNewArray(&newArray_THilbertMatrixTSymlEdoublegR);
      instance.SetDelete(&delete_THilbertMatrixTSymlEdoublegR);
      instance.SetDeleteArray(&deleteArray_THilbertMatrixTSymlEdoublegR);
      instance.SetDestructor(&destruct_THilbertMatrixTSymlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THilbertMatrixTSym<double>*)
   {
      return GenerateInitInstanceLocal((::THilbertMatrixTSym<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THilbertMatrixTSym<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THilbertMatrixTSymlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<double>*)0x0)->GetClass();
      THilbertMatrixTSymlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void THilbertMatrixTSymlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THilbertMatrixTSymlEfloatgR_Dictionary();
   static void THilbertMatrixTSymlEfloatgR_TClassManip(TClass*);
   static void *new_THilbertMatrixTSymlEfloatgR(void *p = 0);
   static void *newArray_THilbertMatrixTSymlEfloatgR(Long_t size, void *p);
   static void delete_THilbertMatrixTSymlEfloatgR(void *p);
   static void deleteArray_THilbertMatrixTSymlEfloatgR(void *p);
   static void destruct_THilbertMatrixTSymlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THilbertMatrixTSym<float>*)
   {
      ::THilbertMatrixTSym<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THilbertMatrixTSym<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THilbertMatrixTSym<float>", ::THilbertMatrixTSym<float>::Class_Version(), "TMatrixTLazy.h", 161,
                  typeid(::THilbertMatrixTSym<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THilbertMatrixTSymlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::THilbertMatrixTSym<float>) );
      instance.SetNew(&new_THilbertMatrixTSymlEfloatgR);
      instance.SetNewArray(&newArray_THilbertMatrixTSymlEfloatgR);
      instance.SetDelete(&delete_THilbertMatrixTSymlEfloatgR);
      instance.SetDeleteArray(&deleteArray_THilbertMatrixTSymlEfloatgR);
      instance.SetDestructor(&destruct_THilbertMatrixTSymlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THilbertMatrixTSym<float>*)
   {
      return GenerateInitInstanceLocal((::THilbertMatrixTSym<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THilbertMatrixTSym<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THilbertMatrixTSymlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<float>*)0x0)->GetClass();
      THilbertMatrixTSymlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void THilbertMatrixTSymlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TMatrixDSymEigen(void *p = 0);
   static void *newArray_TMatrixDSymEigen(Long_t size, void *p);
   static void delete_TMatrixDSymEigen(void *p);
   static void deleteArray_TMatrixDSymEigen(void *p);
   static void destruct_TMatrixDSymEigen(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMatrixDSymEigen*)
   {
      ::TMatrixDSymEigen *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMatrixDSymEigen >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMatrixDSymEigen", ::TMatrixDSymEigen::Class_Version(), "TMatrixDSymEigen.h", 27,
                  typeid(::TMatrixDSymEigen), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMatrixDSymEigen::Dictionary, isa_proxy, 4,
                  sizeof(::TMatrixDSymEigen) );
      instance.SetNew(&new_TMatrixDSymEigen);
      instance.SetNewArray(&newArray_TMatrixDSymEigen);
      instance.SetDelete(&delete_TMatrixDSymEigen);
      instance.SetDeleteArray(&deleteArray_TMatrixDSymEigen);
      instance.SetDestructor(&destruct_TMatrixDSymEigen);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMatrixDSymEigen*)
   {
      return GenerateInitInstanceLocal((::TMatrixDSymEigen*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMatrixDSymEigen*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTBase<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTBase<float>::Class_Name()
{
   return "TMatrixTBase<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTBase<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTBase<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTBase<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTBase<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTBase<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTBase<double>::Class_Name()
{
   return "TMatrixTBase<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTBase<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTBase<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTBase<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTBase<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTBase<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TVectorT<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TVectorT<float>::Class_Name()
{
   return "TVectorT<float>";
}

//______________________________________________________________________________
template <> const char *TVectorT<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVectorT<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TVectorT<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVectorT<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TVectorT<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVectorT<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TVectorT<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVectorT<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TVectorT<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TVectorT<double>::Class_Name()
{
   return "TVectorT<double>";
}

//______________________________________________________________________________
template <> const char *TVectorT<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVectorT<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TVectorT<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVectorT<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TVectorT<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVectorT<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TVectorT<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVectorT<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixT<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixT<double>::Class_Name()
{
   return "TMatrixT<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixT<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixT<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixT<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixT<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixT<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixT<float>::Class_Name()
{
   return "TMatrixT<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixT<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixT<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixT<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixT<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixT<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSym<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSym<double>::Class_Name()
{
   return "TMatrixTSym<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSym<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSym<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSym<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSym<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSym<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSym<float>::Class_Name()
{
   return "TMatrixTSym<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSym<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSym<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSym<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSym<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSym<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparse<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparse<double>::Class_Name()
{
   return "TMatrixTSparse<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparse<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparse<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparse<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparse<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparse<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparse<float>::Class_Name()
{
   return "TMatrixTSparse<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparse<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparse<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparse<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparse<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparse<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTRow_const<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTRow_const<double>::Class_Name()
{
   return "TMatrixTRow_const<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTRow_const<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTRow_const<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTRow_const<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTRow_const<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTRow_const<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTRow_const<float>::Class_Name()
{
   return "TMatrixTRow_const<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTRow_const<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTRow_const<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTRow_const<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTRow_const<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow_const<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTRow<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTRow<double>::Class_Name()
{
   return "TMatrixTRow<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTRow<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTRow<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTRow<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTRow<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTRow<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTRow<float>::Class_Name()
{
   return "TMatrixTRow<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTRow<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTRow<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTRow<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTRow<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTRow<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTColumn_const<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTColumn_const<double>::Class_Name()
{
   return "TMatrixTColumn_const<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTColumn_const<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTColumn_const<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTColumn_const<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTColumn_const<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTColumn_const<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTColumn_const<float>::Class_Name()
{
   return "TMatrixTColumn_const<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTColumn_const<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTColumn_const<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTColumn_const<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTColumn_const<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn_const<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTColumn<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTColumn<double>::Class_Name()
{
   return "TMatrixTColumn<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTColumn<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTColumn<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTColumn<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTColumn<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTColumn<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTColumn<float>::Class_Name()
{
   return "TMatrixTColumn<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTColumn<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTColumn<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTColumn<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTColumn<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTColumn<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTDiag_const<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTDiag_const<double>::Class_Name()
{
   return "TMatrixTDiag_const<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTDiag_const<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTDiag_const<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTDiag_const<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTDiag_const<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTDiag_const<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTDiag_const<float>::Class_Name()
{
   return "TMatrixTDiag_const<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTDiag_const<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTDiag_const<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTDiag_const<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTDiag_const<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag_const<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTDiag<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTDiag<double>::Class_Name()
{
   return "TMatrixTDiag<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTDiag<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTDiag<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTDiag<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTDiag<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTDiag<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTDiag<float>::Class_Name()
{
   return "TMatrixTDiag<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTDiag<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTDiag<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTDiag<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTDiag<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTDiag<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTFlat_const<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTFlat_const<double>::Class_Name()
{
   return "TMatrixTFlat_const<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTFlat_const<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTFlat_const<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTFlat_const<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTFlat_const<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTFlat_const<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTFlat_const<float>::Class_Name()
{
   return "TMatrixTFlat_const<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTFlat_const<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTFlat_const<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTFlat_const<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTFlat_const<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat_const<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTFlat<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTFlat<double>::Class_Name()
{
   return "TMatrixTFlat<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTFlat<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTFlat<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTFlat<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTFlat<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTFlat<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTFlat<float>::Class_Name()
{
   return "TMatrixTFlat<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTFlat<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTFlat<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTFlat<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTFlat<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTFlat<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSub_const<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSub_const<double>::Class_Name()
{
   return "TMatrixTSub_const<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSub_const<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSub_const<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSub_const<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSub_const<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSub_const<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSub_const<float>::Class_Name()
{
   return "TMatrixTSub_const<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSub_const<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSub_const<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSub_const<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSub_const<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub_const<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSub<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSub<double>::Class_Name()
{
   return "TMatrixTSub<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSub<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSub<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSub<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSub<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSub<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSub<float>::Class_Name()
{
   return "TMatrixTSub<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSub<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSub<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSub<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSub<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSub<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparseRow_const<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparseRow_const<double>::Class_Name()
{
   return "TMatrixTSparseRow_const<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparseRow_const<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparseRow_const<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseRow_const<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseRow_const<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparseRow_const<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparseRow_const<float>::Class_Name()
{
   return "TMatrixTSparseRow_const<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparseRow_const<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparseRow_const<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseRow_const<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseRow_const<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow_const<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparseRow<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparseRow<double>::Class_Name()
{
   return "TMatrixTSparseRow<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparseRow<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparseRow<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseRow<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseRow<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparseRow<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparseRow<float>::Class_Name()
{
   return "TMatrixTSparseRow<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparseRow<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparseRow<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseRow<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseRow<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseRow<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparseDiag_const<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparseDiag_const<double>::Class_Name()
{
   return "TMatrixTSparseDiag_const<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparseDiag_const<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparseDiag_const<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseDiag_const<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseDiag_const<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparseDiag_const<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparseDiag_const<float>::Class_Name()
{
   return "TMatrixTSparseDiag_const<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparseDiag_const<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparseDiag_const<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseDiag_const<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseDiag_const<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag_const<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparseDiag<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparseDiag<double>::Class_Name()
{
   return "TMatrixTSparseDiag<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparseDiag<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparseDiag<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseDiag<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseDiag<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSparseDiag<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSparseDiag<float>::Class_Name()
{
   return "TMatrixTSparseDiag<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSparseDiag<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSparseDiag<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseDiag<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSparseDiag<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSparseDiag<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTLazy<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTLazy<double>::Class_Name()
{
   return "TMatrixTLazy<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTLazy<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTLazy<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTLazy<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTLazy<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTLazy<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTLazy<float>::Class_Name()
{
   return "TMatrixTLazy<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTLazy<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTLazy<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTLazy<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTLazy<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTLazy<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSymLazy<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSymLazy<double>::Class_Name()
{
   return "TMatrixTSymLazy<double>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSymLazy<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSymLazy<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSymLazy<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSymLazy<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TMatrixTSymLazy<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TMatrixTSymLazy<float>::Class_Name()
{
   return "TMatrixTSymLazy<float>";
}

//______________________________________________________________________________
template <> const char *TMatrixTSymLazy<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TMatrixTSymLazy<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TMatrixTSymLazy<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TMatrixTSymLazy<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixTSymLazy<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDecompBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDecompBase::Class_Name()
{
   return "TDecompBase";
}

//______________________________________________________________________________
const char *TDecompBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDecompBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDecompBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDecompBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDecompBK::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDecompBK::Class_Name()
{
   return "TDecompBK";
}

//______________________________________________________________________________
const char *TDecompBK::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompBK*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDecompBK::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompBK*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDecompBK::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompBK*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDecompBK::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompBK*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDecompChol::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDecompChol::Class_Name()
{
   return "TDecompChol";
}

//______________________________________________________________________________
const char *TDecompChol::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompChol*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDecompChol::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompChol*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDecompChol::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompChol*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDecompChol::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompChol*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDecompLU::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDecompLU::Class_Name()
{
   return "TDecompLU";
}

//______________________________________________________________________________
const char *TDecompLU::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompLU*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDecompLU::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompLU*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDecompLU::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompLU*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDecompLU::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompLU*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDecompQRH::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDecompQRH::Class_Name()
{
   return "TDecompQRH";
}

//______________________________________________________________________________
const char *TDecompQRH::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompQRH*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDecompQRH::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompQRH*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDecompQRH::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompQRH*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDecompQRH::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompQRH*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDecompSVD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDecompSVD::Class_Name()
{
   return "TDecompSVD";
}

//______________________________________________________________________________
const char *TDecompSVD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompSVD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDecompSVD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompSVD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDecompSVD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompSVD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDecompSVD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompSVD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDecompSparse::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDecompSparse::Class_Name()
{
   return "TDecompSparse";
}

//______________________________________________________________________________
const char *TDecompSparse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompSparse*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDecompSparse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDecompSparse*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDecompSparse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompSparse*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDecompSparse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDecompSparse*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMatrixDEigen::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMatrixDEigen::Class_Name()
{
   return "TMatrixDEigen";
}

//______________________________________________________________________________
const char *TMatrixDEigen::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixDEigen*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMatrixDEigen::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixDEigen*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMatrixDEigen::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixDEigen*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMatrixDEigen::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixDEigen*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THaarMatrixT<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THaarMatrixT<double>::Class_Name()
{
   return "THaarMatrixT<double>";
}

//______________________________________________________________________________
template <> const char *THaarMatrixT<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THaarMatrixT<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THaarMatrixT<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THaarMatrixT<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THaarMatrixT<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THaarMatrixT<float>::Class_Name()
{
   return "THaarMatrixT<float>";
}

//______________________________________________________________________________
template <> const char *THaarMatrixT<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THaarMatrixT<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THaarMatrixT<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THaarMatrixT<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaarMatrixT<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THilbertMatrixT<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THilbertMatrixT<double>::Class_Name()
{
   return "THilbertMatrixT<double>";
}

//______________________________________________________________________________
template <> const char *THilbertMatrixT<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THilbertMatrixT<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THilbertMatrixT<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THilbertMatrixT<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THilbertMatrixT<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THilbertMatrixT<float>::Class_Name()
{
   return "THilbertMatrixT<float>";
}

//______________________________________________________________________________
template <> const char *THilbertMatrixT<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THilbertMatrixT<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THilbertMatrixT<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THilbertMatrixT<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixT<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THilbertMatrixTSym<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THilbertMatrixTSym<double>::Class_Name()
{
   return "THilbertMatrixTSym<double>";
}

//______________________________________________________________________________
template <> const char *THilbertMatrixTSym<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THilbertMatrixTSym<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THilbertMatrixTSym<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THilbertMatrixTSym<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<double>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THilbertMatrixTSym<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THilbertMatrixTSym<float>::Class_Name()
{
   return "THilbertMatrixTSym<float>";
}

//______________________________________________________________________________
template <> const char *THilbertMatrixTSym<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THilbertMatrixTSym<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THilbertMatrixTSym<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THilbertMatrixTSym<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THilbertMatrixTSym<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMatrixDSymEigen::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMatrixDSymEigen::Class_Name()
{
   return "TMatrixDSymEigen";
}

//______________________________________________________________________________
const char *TMatrixDSymEigen::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixDSymEigen*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMatrixDSymEigen::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMatrixDSymEigen*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMatrixDSymEigen::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixDSymEigen*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMatrixDSymEigen::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMatrixDSymEigen*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMatrixTBaselEfloatgR(void *p) {
      delete ((::TMatrixTBase<float>*)p);
   }
   static void deleteArray_TMatrixTBaselEfloatgR(void *p) {
      delete [] ((::TMatrixTBase<float>*)p);
   }
   static void destruct_TMatrixTBaselEfloatgR(void *p) {
      typedef ::TMatrixTBase<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTBaselEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTBase<float>*)obj)->::TMatrixTBase<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTBase<float>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMatrixTBaselEdoublegR(void *p) {
      delete ((::TMatrixTBase<double>*)p);
   }
   static void deleteArray_TMatrixTBaselEdoublegR(void *p) {
      delete [] ((::TMatrixTBase<double>*)p);
   }
   static void destruct_TMatrixTBaselEdoublegR(void *p) {
      typedef ::TMatrixTBase<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTBaselEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTBase<double>*)obj)->::TMatrixTBase<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTBase<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVectorTlEfloatgR(void *p) {
      return  p ? new(p) ::TVectorT<float> : new ::TVectorT<float>;
   }
   static void *newArray_TVectorTlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TVectorT<float>[nElements] : new ::TVectorT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVectorTlEfloatgR(void *p) {
      delete ((::TVectorT<float>*)p);
   }
   static void deleteArray_TVectorTlEfloatgR(void *p) {
      delete [] ((::TVectorT<float>*)p);
   }
   static void destruct_TVectorTlEfloatgR(void *p) {
      typedef ::TVectorT<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVectorTlEfloatgR(TBuffer &buf, void *obj) {
      ((::TVectorT<float>*)obj)->::TVectorT<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVectorT<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVectorTlEdoublegR(void *p) {
      return  p ? new(p) ::TVectorT<double> : new ::TVectorT<double>;
   }
   static void *newArray_TVectorTlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TVectorT<double>[nElements] : new ::TVectorT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVectorTlEdoublegR(void *p) {
      delete ((::TVectorT<double>*)p);
   }
   static void deleteArray_TVectorTlEdoublegR(void *p) {
      delete [] ((::TVectorT<double>*)p);
   }
   static void destruct_TVectorTlEdoublegR(void *p) {
      typedef ::TVectorT<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TVectorTlEdoublegR(TBuffer &buf, void *obj) {
      ((::TVectorT<double>*)obj)->::TVectorT<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TVectorT<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixT<double> : new ::TMatrixT<double>;
   }
   static void *newArray_TMatrixTlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixT<double>[nElements] : new ::TMatrixT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTlEdoublegR(void *p) {
      delete ((::TMatrixT<double>*)p);
   }
   static void deleteArray_TMatrixTlEdoublegR(void *p) {
      delete [] ((::TMatrixT<double>*)p);
   }
   static void destruct_TMatrixTlEdoublegR(void *p) {
      typedef ::TMatrixT<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixT<double>*)obj)->::TMatrixT<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixT<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixT<float> : new ::TMatrixT<float>;
   }
   static void *newArray_TMatrixTlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixT<float>[nElements] : new ::TMatrixT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTlEfloatgR(void *p) {
      delete ((::TMatrixT<float>*)p);
   }
   static void deleteArray_TMatrixTlEfloatgR(void *p) {
      delete [] ((::TMatrixT<float>*)p);
   }
   static void destruct_TMatrixTlEfloatgR(void *p) {
      typedef ::TMatrixT<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixT<float>*)obj)->::TMatrixT<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixT<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSymlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTSym<double> : new ::TMatrixTSym<double>;
   }
   static void *newArray_TMatrixTSymlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSym<double>[nElements] : new ::TMatrixTSym<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSymlEdoublegR(void *p) {
      delete ((::TMatrixTSym<double>*)p);
   }
   static void deleteArray_TMatrixTSymlEdoublegR(void *p) {
      delete [] ((::TMatrixTSym<double>*)p);
   }
   static void destruct_TMatrixTSymlEdoublegR(void *p) {
      typedef ::TMatrixTSym<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSymlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTSym<double>*)obj)->::TMatrixTSym<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSym<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSymlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTSym<float> : new ::TMatrixTSym<float>;
   }
   static void *newArray_TMatrixTSymlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSym<float>[nElements] : new ::TMatrixTSym<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSymlEfloatgR(void *p) {
      delete ((::TMatrixTSym<float>*)p);
   }
   static void deleteArray_TMatrixTSymlEfloatgR(void *p) {
      delete [] ((::TMatrixTSym<float>*)p);
   }
   static void destruct_TMatrixTSymlEfloatgR(void *p) {
      typedef ::TMatrixTSym<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSymlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTSym<float>*)obj)->::TMatrixTSym<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSym<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparselEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTSparse<double> : new ::TMatrixTSparse<double>;
   }
   static void *newArray_TMatrixTSparselEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparse<double>[nElements] : new ::TMatrixTSparse<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparselEdoublegR(void *p) {
      delete ((::TMatrixTSparse<double>*)p);
   }
   static void deleteArray_TMatrixTSparselEdoublegR(void *p) {
      delete [] ((::TMatrixTSparse<double>*)p);
   }
   static void destruct_TMatrixTSparselEdoublegR(void *p) {
      typedef ::TMatrixTSparse<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparselEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparse<double>*)obj)->::TMatrixTSparse<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparse<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparselEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTSparse<float> : new ::TMatrixTSparse<float>;
   }
   static void *newArray_TMatrixTSparselEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparse<float>[nElements] : new ::TMatrixTSparse<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparselEfloatgR(void *p) {
      delete ((::TMatrixTSparse<float>*)p);
   }
   static void deleteArray_TMatrixTSparselEfloatgR(void *p) {
      delete [] ((::TMatrixTSparse<float>*)p);
   }
   static void destruct_TMatrixTSparselEfloatgR(void *p) {
      typedef ::TMatrixTSparse<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparselEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparse<float>*)obj)->::TMatrixTSparse<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparse<float>

//______________________________________________________________________________
template <> void TMatrixTRow_const<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTRow_const<double>.

   ::Error("TMatrixTRow_const<double>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTRow_constlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTRow_const<double> : new ::TMatrixTRow_const<double>;
   }
   static void *newArray_TMatrixTRow_constlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTRow_const<double>[nElements] : new ::TMatrixTRow_const<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTRow_constlEdoublegR(void *p) {
      delete ((::TMatrixTRow_const<double>*)p);
   }
   static void deleteArray_TMatrixTRow_constlEdoublegR(void *p) {
      delete [] ((::TMatrixTRow_const<double>*)p);
   }
   static void destruct_TMatrixTRow_constlEdoublegR(void *p) {
      typedef ::TMatrixTRow_const<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTRow_constlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTRow_const<double>*)obj)->::TMatrixTRow_const<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTRow_const<double>

//______________________________________________________________________________
template <> void TMatrixTRow_const<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTRow_const<float>.

   ::Error("TMatrixTRow_const<float>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTRow_constlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTRow_const<float> : new ::TMatrixTRow_const<float>;
   }
   static void *newArray_TMatrixTRow_constlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTRow_const<float>[nElements] : new ::TMatrixTRow_const<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTRow_constlEfloatgR(void *p) {
      delete ((::TMatrixTRow_const<float>*)p);
   }
   static void deleteArray_TMatrixTRow_constlEfloatgR(void *p) {
      delete [] ((::TMatrixTRow_const<float>*)p);
   }
   static void destruct_TMatrixTRow_constlEfloatgR(void *p) {
      typedef ::TMatrixTRow_const<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTRow_constlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTRow_const<float>*)obj)->::TMatrixTRow_const<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTRow_const<float>

//______________________________________________________________________________
template <> void TMatrixTRow<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTRow<double>.

   TMatrixTRow_const<double>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTRowlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTRow<double> : new ::TMatrixTRow<double>;
   }
   static void *newArray_TMatrixTRowlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTRow<double>[nElements] : new ::TMatrixTRow<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTRowlEdoublegR(void *p) {
      delete ((::TMatrixTRow<double>*)p);
   }
   static void deleteArray_TMatrixTRowlEdoublegR(void *p) {
      delete [] ((::TMatrixTRow<double>*)p);
   }
   static void destruct_TMatrixTRowlEdoublegR(void *p) {
      typedef ::TMatrixTRow<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTRowlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTRow<double>*)obj)->::TMatrixTRow<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTRow<double>

//______________________________________________________________________________
template <> void TMatrixTRow<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTRow<float>.

   TMatrixTRow_const<float>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTRowlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTRow<float> : new ::TMatrixTRow<float>;
   }
   static void *newArray_TMatrixTRowlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTRow<float>[nElements] : new ::TMatrixTRow<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTRowlEfloatgR(void *p) {
      delete ((::TMatrixTRow<float>*)p);
   }
   static void deleteArray_TMatrixTRowlEfloatgR(void *p) {
      delete [] ((::TMatrixTRow<float>*)p);
   }
   static void destruct_TMatrixTRowlEfloatgR(void *p) {
      typedef ::TMatrixTRow<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTRowlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTRow<float>*)obj)->::TMatrixTRow<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTRow<float>

//______________________________________________________________________________
template <> void TMatrixTColumn_const<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTColumn_const<double>.

   ::Error("TMatrixTColumn_const<double>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTColumn_constlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTColumn_const<double> : new ::TMatrixTColumn_const<double>;
   }
   static void *newArray_TMatrixTColumn_constlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTColumn_const<double>[nElements] : new ::TMatrixTColumn_const<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTColumn_constlEdoublegR(void *p) {
      delete ((::TMatrixTColumn_const<double>*)p);
   }
   static void deleteArray_TMatrixTColumn_constlEdoublegR(void *p) {
      delete [] ((::TMatrixTColumn_const<double>*)p);
   }
   static void destruct_TMatrixTColumn_constlEdoublegR(void *p) {
      typedef ::TMatrixTColumn_const<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTColumn_constlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTColumn_const<double>*)obj)->::TMatrixTColumn_const<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTColumn_const<double>

//______________________________________________________________________________
template <> void TMatrixTColumn_const<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTColumn_const<float>.

   ::Error("TMatrixTColumn_const<float>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTColumn_constlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTColumn_const<float> : new ::TMatrixTColumn_const<float>;
   }
   static void *newArray_TMatrixTColumn_constlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTColumn_const<float>[nElements] : new ::TMatrixTColumn_const<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTColumn_constlEfloatgR(void *p) {
      delete ((::TMatrixTColumn_const<float>*)p);
   }
   static void deleteArray_TMatrixTColumn_constlEfloatgR(void *p) {
      delete [] ((::TMatrixTColumn_const<float>*)p);
   }
   static void destruct_TMatrixTColumn_constlEfloatgR(void *p) {
      typedef ::TMatrixTColumn_const<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTColumn_constlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTColumn_const<float>*)obj)->::TMatrixTColumn_const<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTColumn_const<float>

//______________________________________________________________________________
template <> void TMatrixTColumn<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTColumn<double>.

   TMatrixTColumn_const<double>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTColumnlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTColumn<double> : new ::TMatrixTColumn<double>;
   }
   static void *newArray_TMatrixTColumnlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTColumn<double>[nElements] : new ::TMatrixTColumn<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTColumnlEdoublegR(void *p) {
      delete ((::TMatrixTColumn<double>*)p);
   }
   static void deleteArray_TMatrixTColumnlEdoublegR(void *p) {
      delete [] ((::TMatrixTColumn<double>*)p);
   }
   static void destruct_TMatrixTColumnlEdoublegR(void *p) {
      typedef ::TMatrixTColumn<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTColumnlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTColumn<double>*)obj)->::TMatrixTColumn<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTColumn<double>

//______________________________________________________________________________
template <> void TMatrixTColumn<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTColumn<float>.

   TMatrixTColumn_const<float>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTColumnlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTColumn<float> : new ::TMatrixTColumn<float>;
   }
   static void *newArray_TMatrixTColumnlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTColumn<float>[nElements] : new ::TMatrixTColumn<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTColumnlEfloatgR(void *p) {
      delete ((::TMatrixTColumn<float>*)p);
   }
   static void deleteArray_TMatrixTColumnlEfloatgR(void *p) {
      delete [] ((::TMatrixTColumn<float>*)p);
   }
   static void destruct_TMatrixTColumnlEfloatgR(void *p) {
      typedef ::TMatrixTColumn<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTColumnlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTColumn<float>*)obj)->::TMatrixTColumn<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTColumn<float>

//______________________________________________________________________________
template <> void TMatrixTDiag_const<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTDiag_const<double>.

   ::Error("TMatrixTDiag_const<double>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTDiag_constlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTDiag_const<double> : new ::TMatrixTDiag_const<double>;
   }
   static void *newArray_TMatrixTDiag_constlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTDiag_const<double>[nElements] : new ::TMatrixTDiag_const<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTDiag_constlEdoublegR(void *p) {
      delete ((::TMatrixTDiag_const<double>*)p);
   }
   static void deleteArray_TMatrixTDiag_constlEdoublegR(void *p) {
      delete [] ((::TMatrixTDiag_const<double>*)p);
   }
   static void destruct_TMatrixTDiag_constlEdoublegR(void *p) {
      typedef ::TMatrixTDiag_const<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTDiag_constlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTDiag_const<double>*)obj)->::TMatrixTDiag_const<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTDiag_const<double>

//______________________________________________________________________________
template <> void TMatrixTDiag_const<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTDiag_const<float>.

   ::Error("TMatrixTDiag_const<float>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTDiag_constlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTDiag_const<float> : new ::TMatrixTDiag_const<float>;
   }
   static void *newArray_TMatrixTDiag_constlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTDiag_const<float>[nElements] : new ::TMatrixTDiag_const<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTDiag_constlEfloatgR(void *p) {
      delete ((::TMatrixTDiag_const<float>*)p);
   }
   static void deleteArray_TMatrixTDiag_constlEfloatgR(void *p) {
      delete [] ((::TMatrixTDiag_const<float>*)p);
   }
   static void destruct_TMatrixTDiag_constlEfloatgR(void *p) {
      typedef ::TMatrixTDiag_const<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTDiag_constlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTDiag_const<float>*)obj)->::TMatrixTDiag_const<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTDiag_const<float>

//______________________________________________________________________________
template <> void TMatrixTDiag<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTDiag<double>.

   TMatrixTDiag_const<double>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTDiaglEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTDiag<double> : new ::TMatrixTDiag<double>;
   }
   static void *newArray_TMatrixTDiaglEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTDiag<double>[nElements] : new ::TMatrixTDiag<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTDiaglEdoublegR(void *p) {
      delete ((::TMatrixTDiag<double>*)p);
   }
   static void deleteArray_TMatrixTDiaglEdoublegR(void *p) {
      delete [] ((::TMatrixTDiag<double>*)p);
   }
   static void destruct_TMatrixTDiaglEdoublegR(void *p) {
      typedef ::TMatrixTDiag<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTDiaglEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTDiag<double>*)obj)->::TMatrixTDiag<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTDiag<double>

//______________________________________________________________________________
template <> void TMatrixTDiag<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTDiag<float>.

   TMatrixTDiag_const<float>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTDiaglEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTDiag<float> : new ::TMatrixTDiag<float>;
   }
   static void *newArray_TMatrixTDiaglEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTDiag<float>[nElements] : new ::TMatrixTDiag<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTDiaglEfloatgR(void *p) {
      delete ((::TMatrixTDiag<float>*)p);
   }
   static void deleteArray_TMatrixTDiaglEfloatgR(void *p) {
      delete [] ((::TMatrixTDiag<float>*)p);
   }
   static void destruct_TMatrixTDiaglEfloatgR(void *p) {
      typedef ::TMatrixTDiag<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTDiaglEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTDiag<float>*)obj)->::TMatrixTDiag<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTDiag<float>

//______________________________________________________________________________
template <> void TMatrixTFlat_const<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTFlat_const<double>.

   ::Error("TMatrixTFlat_const<double>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTFlat_constlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTFlat_const<double> : new ::TMatrixTFlat_const<double>;
   }
   static void *newArray_TMatrixTFlat_constlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTFlat_const<double>[nElements] : new ::TMatrixTFlat_const<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTFlat_constlEdoublegR(void *p) {
      delete ((::TMatrixTFlat_const<double>*)p);
   }
   static void deleteArray_TMatrixTFlat_constlEdoublegR(void *p) {
      delete [] ((::TMatrixTFlat_const<double>*)p);
   }
   static void destruct_TMatrixTFlat_constlEdoublegR(void *p) {
      typedef ::TMatrixTFlat_const<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTFlat_constlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTFlat_const<double>*)obj)->::TMatrixTFlat_const<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTFlat_const<double>

//______________________________________________________________________________
template <> void TMatrixTFlat_const<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTFlat_const<float>.

   ::Error("TMatrixTFlat_const<float>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTFlat_constlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTFlat_const<float> : new ::TMatrixTFlat_const<float>;
   }
   static void *newArray_TMatrixTFlat_constlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTFlat_const<float>[nElements] : new ::TMatrixTFlat_const<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTFlat_constlEfloatgR(void *p) {
      delete ((::TMatrixTFlat_const<float>*)p);
   }
   static void deleteArray_TMatrixTFlat_constlEfloatgR(void *p) {
      delete [] ((::TMatrixTFlat_const<float>*)p);
   }
   static void destruct_TMatrixTFlat_constlEfloatgR(void *p) {
      typedef ::TMatrixTFlat_const<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTFlat_constlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTFlat_const<float>*)obj)->::TMatrixTFlat_const<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTFlat_const<float>

//______________________________________________________________________________
template <> void TMatrixTFlat<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTFlat<double>.

   TMatrixTFlat_const<double>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTFlatlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTFlat<double> : new ::TMatrixTFlat<double>;
   }
   static void *newArray_TMatrixTFlatlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTFlat<double>[nElements] : new ::TMatrixTFlat<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTFlatlEdoublegR(void *p) {
      delete ((::TMatrixTFlat<double>*)p);
   }
   static void deleteArray_TMatrixTFlatlEdoublegR(void *p) {
      delete [] ((::TMatrixTFlat<double>*)p);
   }
   static void destruct_TMatrixTFlatlEdoublegR(void *p) {
      typedef ::TMatrixTFlat<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTFlatlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTFlat<double>*)obj)->::TMatrixTFlat<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTFlat<double>

//______________________________________________________________________________
template <> void TMatrixTFlat<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTFlat<float>.

   TMatrixTFlat_const<float>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTFlatlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTFlat<float> : new ::TMatrixTFlat<float>;
   }
   static void *newArray_TMatrixTFlatlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTFlat<float>[nElements] : new ::TMatrixTFlat<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTFlatlEfloatgR(void *p) {
      delete ((::TMatrixTFlat<float>*)p);
   }
   static void deleteArray_TMatrixTFlatlEfloatgR(void *p) {
      delete [] ((::TMatrixTFlat<float>*)p);
   }
   static void destruct_TMatrixTFlatlEfloatgR(void *p) {
      typedef ::TMatrixTFlat<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTFlatlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTFlat<float>*)obj)->::TMatrixTFlat<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTFlat<float>

//______________________________________________________________________________
template <> void TMatrixTSub_const<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSub_const<double>.

   ::Error("TMatrixTSub_const<double>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSub_constlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTSub_const<double> : new ::TMatrixTSub_const<double>;
   }
   static void *newArray_TMatrixTSub_constlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSub_const<double>[nElements] : new ::TMatrixTSub_const<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSub_constlEdoublegR(void *p) {
      delete ((::TMatrixTSub_const<double>*)p);
   }
   static void deleteArray_TMatrixTSub_constlEdoublegR(void *p) {
      delete [] ((::TMatrixTSub_const<double>*)p);
   }
   static void destruct_TMatrixTSub_constlEdoublegR(void *p) {
      typedef ::TMatrixTSub_const<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSub_constlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTSub_const<double>*)obj)->::TMatrixTSub_const<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSub_const<double>

//______________________________________________________________________________
template <> void TMatrixTSub_const<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSub_const<float>.

   ::Error("TMatrixTSub_const<float>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSub_constlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTSub_const<float> : new ::TMatrixTSub_const<float>;
   }
   static void *newArray_TMatrixTSub_constlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSub_const<float>[nElements] : new ::TMatrixTSub_const<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSub_constlEfloatgR(void *p) {
      delete ((::TMatrixTSub_const<float>*)p);
   }
   static void deleteArray_TMatrixTSub_constlEfloatgR(void *p) {
      delete [] ((::TMatrixTSub_const<float>*)p);
   }
   static void destruct_TMatrixTSub_constlEfloatgR(void *p) {
      typedef ::TMatrixTSub_const<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSub_constlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTSub_const<float>*)obj)->::TMatrixTSub_const<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSub_const<float>

//______________________________________________________________________________
template <> void TMatrixTSub<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSub<double>.

   TMatrixTSub_const<double>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSublEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTSub<double> : new ::TMatrixTSub<double>;
   }
   static void *newArray_TMatrixTSublEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSub<double>[nElements] : new ::TMatrixTSub<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSublEdoublegR(void *p) {
      delete ((::TMatrixTSub<double>*)p);
   }
   static void deleteArray_TMatrixTSublEdoublegR(void *p) {
      delete [] ((::TMatrixTSub<double>*)p);
   }
   static void destruct_TMatrixTSublEdoublegR(void *p) {
      typedef ::TMatrixTSub<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSublEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTSub<double>*)obj)->::TMatrixTSub<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSub<double>

//______________________________________________________________________________
template <> void TMatrixTSub<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSub<float>.

   TMatrixTSub_const<float>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSublEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTSub<float> : new ::TMatrixTSub<float>;
   }
   static void *newArray_TMatrixTSublEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSub<float>[nElements] : new ::TMatrixTSub<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSublEfloatgR(void *p) {
      delete ((::TMatrixTSub<float>*)p);
   }
   static void deleteArray_TMatrixTSublEfloatgR(void *p) {
      delete [] ((::TMatrixTSub<float>*)p);
   }
   static void destruct_TMatrixTSublEfloatgR(void *p) {
      typedef ::TMatrixTSub<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSublEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTSub<float>*)obj)->::TMatrixTSub<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSub<float>

//______________________________________________________________________________
template <> void TMatrixTSparseRow_const<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSparseRow_const<double>.

   ::Error("TMatrixTSparseRow_const<double>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparseRow_constlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTSparseRow_const<double> : new ::TMatrixTSparseRow_const<double>;
   }
   static void *newArray_TMatrixTSparseRow_constlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparseRow_const<double>[nElements] : new ::TMatrixTSparseRow_const<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparseRow_constlEdoublegR(void *p) {
      delete ((::TMatrixTSparseRow_const<double>*)p);
   }
   static void deleteArray_TMatrixTSparseRow_constlEdoublegR(void *p) {
      delete [] ((::TMatrixTSparseRow_const<double>*)p);
   }
   static void destruct_TMatrixTSparseRow_constlEdoublegR(void *p) {
      typedef ::TMatrixTSparseRow_const<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparseRow_constlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparseRow_const<double>*)obj)->::TMatrixTSparseRow_const<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparseRow_const<double>

//______________________________________________________________________________
template <> void TMatrixTSparseRow_const<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSparseRow_const<float>.

   ::Error("TMatrixTSparseRow_const<float>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparseRow_constlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTSparseRow_const<float> : new ::TMatrixTSparseRow_const<float>;
   }
   static void *newArray_TMatrixTSparseRow_constlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparseRow_const<float>[nElements] : new ::TMatrixTSparseRow_const<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparseRow_constlEfloatgR(void *p) {
      delete ((::TMatrixTSparseRow_const<float>*)p);
   }
   static void deleteArray_TMatrixTSparseRow_constlEfloatgR(void *p) {
      delete [] ((::TMatrixTSparseRow_const<float>*)p);
   }
   static void destruct_TMatrixTSparseRow_constlEfloatgR(void *p) {
      typedef ::TMatrixTSparseRow_const<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparseRow_constlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparseRow_const<float>*)obj)->::TMatrixTSparseRow_const<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparseRow_const<float>

//______________________________________________________________________________
template <> void TMatrixTSparseRow<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSparseRow<double>.

   TMatrixTSparseRow_const<double>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparseRowlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTSparseRow<double> : new ::TMatrixTSparseRow<double>;
   }
   static void *newArray_TMatrixTSparseRowlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparseRow<double>[nElements] : new ::TMatrixTSparseRow<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparseRowlEdoublegR(void *p) {
      delete ((::TMatrixTSparseRow<double>*)p);
   }
   static void deleteArray_TMatrixTSparseRowlEdoublegR(void *p) {
      delete [] ((::TMatrixTSparseRow<double>*)p);
   }
   static void destruct_TMatrixTSparseRowlEdoublegR(void *p) {
      typedef ::TMatrixTSparseRow<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparseRowlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparseRow<double>*)obj)->::TMatrixTSparseRow<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparseRow<double>

//______________________________________________________________________________
template <> void TMatrixTSparseRow<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSparseRow<float>.

   TMatrixTSparseRow_const<float>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparseRowlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTSparseRow<float> : new ::TMatrixTSparseRow<float>;
   }
   static void *newArray_TMatrixTSparseRowlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparseRow<float>[nElements] : new ::TMatrixTSparseRow<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparseRowlEfloatgR(void *p) {
      delete ((::TMatrixTSparseRow<float>*)p);
   }
   static void deleteArray_TMatrixTSparseRowlEfloatgR(void *p) {
      delete [] ((::TMatrixTSparseRow<float>*)p);
   }
   static void destruct_TMatrixTSparseRowlEfloatgR(void *p) {
      typedef ::TMatrixTSparseRow<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparseRowlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparseRow<float>*)obj)->::TMatrixTSparseRow<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparseRow<float>

//______________________________________________________________________________
template <> void TMatrixTSparseDiag_const<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSparseDiag_const<double>.

   ::Error("TMatrixTSparseDiag_const<double>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparseDiag_constlEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTSparseDiag_const<double> : new ::TMatrixTSparseDiag_const<double>;
   }
   static void *newArray_TMatrixTSparseDiag_constlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparseDiag_const<double>[nElements] : new ::TMatrixTSparseDiag_const<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparseDiag_constlEdoublegR(void *p) {
      delete ((::TMatrixTSparseDiag_const<double>*)p);
   }
   static void deleteArray_TMatrixTSparseDiag_constlEdoublegR(void *p) {
      delete [] ((::TMatrixTSparseDiag_const<double>*)p);
   }
   static void destruct_TMatrixTSparseDiag_constlEdoublegR(void *p) {
      typedef ::TMatrixTSparseDiag_const<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparseDiag_constlEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparseDiag_const<double>*)obj)->::TMatrixTSparseDiag_const<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparseDiag_const<double>

//______________________________________________________________________________
template <> void TMatrixTSparseDiag_const<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSparseDiag_const<float>.

   ::Error("TMatrixTSparseDiag_const<float>::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparseDiag_constlEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTSparseDiag_const<float> : new ::TMatrixTSparseDiag_const<float>;
   }
   static void *newArray_TMatrixTSparseDiag_constlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparseDiag_const<float>[nElements] : new ::TMatrixTSparseDiag_const<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparseDiag_constlEfloatgR(void *p) {
      delete ((::TMatrixTSparseDiag_const<float>*)p);
   }
   static void deleteArray_TMatrixTSparseDiag_constlEfloatgR(void *p) {
      delete [] ((::TMatrixTSparseDiag_const<float>*)p);
   }
   static void destruct_TMatrixTSparseDiag_constlEfloatgR(void *p) {
      typedef ::TMatrixTSparseDiag_const<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparseDiag_constlEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparseDiag_const<float>*)obj)->::TMatrixTSparseDiag_const<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparseDiag_const<float>

//______________________________________________________________________________
template <> void TMatrixTSparseDiag<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSparseDiag<double>.

   TMatrixTSparseDiag_const<double>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparseDiaglEdoublegR(void *p) {
      return  p ? new(p) ::TMatrixTSparseDiag<double> : new ::TMatrixTSparseDiag<double>;
   }
   static void *newArray_TMatrixTSparseDiaglEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparseDiag<double>[nElements] : new ::TMatrixTSparseDiag<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparseDiaglEdoublegR(void *p) {
      delete ((::TMatrixTSparseDiag<double>*)p);
   }
   static void deleteArray_TMatrixTSparseDiaglEdoublegR(void *p) {
      delete [] ((::TMatrixTSparseDiag<double>*)p);
   }
   static void destruct_TMatrixTSparseDiaglEdoublegR(void *p) {
      typedef ::TMatrixTSparseDiag<double> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparseDiaglEdoublegR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparseDiag<double>*)obj)->::TMatrixTSparseDiag<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparseDiag<double>

//______________________________________________________________________________
template <> void TMatrixTSparseDiag<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSparseDiag<float>.

   TMatrixTSparseDiag_const<float>::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixTSparseDiaglEfloatgR(void *p) {
      return  p ? new(p) ::TMatrixTSparseDiag<float> : new ::TMatrixTSparseDiag<float>;
   }
   static void *newArray_TMatrixTSparseDiaglEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixTSparseDiag<float>[nElements] : new ::TMatrixTSparseDiag<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixTSparseDiaglEfloatgR(void *p) {
      delete ((::TMatrixTSparseDiag<float>*)p);
   }
   static void deleteArray_TMatrixTSparseDiaglEfloatgR(void *p) {
      delete [] ((::TMatrixTSparseDiag<float>*)p);
   }
   static void destruct_TMatrixTSparseDiaglEfloatgR(void *p) {
      typedef ::TMatrixTSparseDiag<float> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMatrixTSparseDiaglEfloatgR(TBuffer &buf, void *obj) {
      ((::TMatrixTSparseDiag<float>*)obj)->::TMatrixTSparseDiag<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMatrixTSparseDiag<float>

//______________________________________________________________________________
template <> void TMatrixTLazy<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTLazy<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMatrixTLazy<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMatrixTLazy<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMatrixTLazylEdoublegR(void *p) {
      delete ((::TMatrixTLazy<double>*)p);
   }
   static void deleteArray_TMatrixTLazylEdoublegR(void *p) {
      delete [] ((::TMatrixTLazy<double>*)p);
   }
   static void destruct_TMatrixTLazylEdoublegR(void *p) {
      typedef ::TMatrixTLazy<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMatrixTLazy<double>

//______________________________________________________________________________
template <> void TMatrixTLazy<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTLazy<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMatrixTLazy<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMatrixTLazy<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMatrixTLazylEfloatgR(void *p) {
      delete ((::TMatrixTLazy<float>*)p);
   }
   static void deleteArray_TMatrixTLazylEfloatgR(void *p) {
      delete [] ((::TMatrixTLazy<float>*)p);
   }
   static void destruct_TMatrixTLazylEfloatgR(void *p) {
      typedef ::TMatrixTLazy<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMatrixTLazy<float>

//______________________________________________________________________________
template <> void TMatrixTSymLazy<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSymLazy<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMatrixTSymLazy<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMatrixTSymLazy<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMatrixTSymLazylEdoublegR(void *p) {
      delete ((::TMatrixTSymLazy<double>*)p);
   }
   static void deleteArray_TMatrixTSymLazylEdoublegR(void *p) {
      delete [] ((::TMatrixTSymLazy<double>*)p);
   }
   static void destruct_TMatrixTSymLazylEdoublegR(void *p) {
      typedef ::TMatrixTSymLazy<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMatrixTSymLazy<double>

//______________________________________________________________________________
template <> void TMatrixTSymLazy<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixTSymLazy<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMatrixTSymLazy<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMatrixTSymLazy<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMatrixTSymLazylEfloatgR(void *p) {
      delete ((::TMatrixTSymLazy<float>*)p);
   }
   static void deleteArray_TMatrixTSymLazylEfloatgR(void *p) {
      delete [] ((::TMatrixTSymLazy<float>*)p);
   }
   static void destruct_TMatrixTSymLazylEfloatgR(void *p) {
      typedef ::TMatrixTSymLazy<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMatrixTSymLazy<float>

//______________________________________________________________________________
void TDecompBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDecompBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDecompBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDecompBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDecompBase(void *p) {
      delete ((::TDecompBase*)p);
   }
   static void deleteArray_TDecompBase(void *p) {
      delete [] ((::TDecompBase*)p);
   }
   static void destruct_TDecompBase(void *p) {
      typedef ::TDecompBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDecompBase

//______________________________________________________________________________
void TDecompBK::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDecompBK.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDecompBK::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDecompBK::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDecompBK(void *p) {
      return  p ? new(p) ::TDecompBK : new ::TDecompBK;
   }
   static void *newArray_TDecompBK(Long_t nElements, void *p) {
      return p ? new(p) ::TDecompBK[nElements] : new ::TDecompBK[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDecompBK(void *p) {
      delete ((::TDecompBK*)p);
   }
   static void deleteArray_TDecompBK(void *p) {
      delete [] ((::TDecompBK*)p);
   }
   static void destruct_TDecompBK(void *p) {
      typedef ::TDecompBK current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDecompBK

//______________________________________________________________________________
void TDecompChol::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDecompChol.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDecompChol::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDecompChol::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDecompChol(void *p) {
      return  p ? new(p) ::TDecompChol : new ::TDecompChol;
   }
   static void *newArray_TDecompChol(Long_t nElements, void *p) {
      return p ? new(p) ::TDecompChol[nElements] : new ::TDecompChol[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDecompChol(void *p) {
      delete ((::TDecompChol*)p);
   }
   static void deleteArray_TDecompChol(void *p) {
      delete [] ((::TDecompChol*)p);
   }
   static void destruct_TDecompChol(void *p) {
      typedef ::TDecompChol current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDecompChol

//______________________________________________________________________________
void TDecompLU::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDecompLU.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDecompLU::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDecompLU::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDecompLU(void *p) {
      return  p ? new(p) ::TDecompLU : new ::TDecompLU;
   }
   static void *newArray_TDecompLU(Long_t nElements, void *p) {
      return p ? new(p) ::TDecompLU[nElements] : new ::TDecompLU[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDecompLU(void *p) {
      delete ((::TDecompLU*)p);
   }
   static void deleteArray_TDecompLU(void *p) {
      delete [] ((::TDecompLU*)p);
   }
   static void destruct_TDecompLU(void *p) {
      typedef ::TDecompLU current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDecompLU

//______________________________________________________________________________
void TDecompQRH::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDecompQRH.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDecompQRH::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDecompQRH::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDecompQRH(void *p) {
      return  p ? new(p) ::TDecompQRH : new ::TDecompQRH;
   }
   static void *newArray_TDecompQRH(Long_t nElements, void *p) {
      return p ? new(p) ::TDecompQRH[nElements] : new ::TDecompQRH[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDecompQRH(void *p) {
      delete ((::TDecompQRH*)p);
   }
   static void deleteArray_TDecompQRH(void *p) {
      delete [] ((::TDecompQRH*)p);
   }
   static void destruct_TDecompQRH(void *p) {
      typedef ::TDecompQRH current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDecompQRH

//______________________________________________________________________________
void TDecompSVD::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDecompSVD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDecompSVD::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDecompSVD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDecompSVD(void *p) {
      return  p ? new(p) ::TDecompSVD : new ::TDecompSVD;
   }
   static void *newArray_TDecompSVD(Long_t nElements, void *p) {
      return p ? new(p) ::TDecompSVD[nElements] : new ::TDecompSVD[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDecompSVD(void *p) {
      delete ((::TDecompSVD*)p);
   }
   static void deleteArray_TDecompSVD(void *p) {
      delete [] ((::TDecompSVD*)p);
   }
   static void destruct_TDecompSVD(void *p) {
      typedef ::TDecompSVD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDecompSVD

//______________________________________________________________________________
void TDecompSparse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDecompSparse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDecompSparse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDecompSparse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDecompSparse(void *p) {
      return  p ? new(p) ::TDecompSparse : new ::TDecompSparse;
   }
   static void *newArray_TDecompSparse(Long_t nElements, void *p) {
      return p ? new(p) ::TDecompSparse[nElements] : new ::TDecompSparse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDecompSparse(void *p) {
      delete ((::TDecompSparse*)p);
   }
   static void deleteArray_TDecompSparse(void *p) {
      delete [] ((::TDecompSparse*)p);
   }
   static void destruct_TDecompSparse(void *p) {
      typedef ::TDecompSparse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDecompSparse

//______________________________________________________________________________
void TMatrixDEigen::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixDEigen.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMatrixDEigen::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMatrixDEigen::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixDEigen(void *p) {
      return  p ? new(p) ::TMatrixDEigen : new ::TMatrixDEigen;
   }
   static void *newArray_TMatrixDEigen(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixDEigen[nElements] : new ::TMatrixDEigen[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixDEigen(void *p) {
      delete ((::TMatrixDEigen*)p);
   }
   static void deleteArray_TMatrixDEigen(void *p) {
      delete [] ((::TMatrixDEigen*)p);
   }
   static void destruct_TMatrixDEigen(void *p) {
      typedef ::TMatrixDEigen current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMatrixDEigen

//______________________________________________________________________________
template <> void THaarMatrixT<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaarMatrixT<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaarMatrixT<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaarMatrixT<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaarMatrixTlEdoublegR(void *p) {
      return  p ? new(p) ::THaarMatrixT<double> : new ::THaarMatrixT<double>;
   }
   static void *newArray_THaarMatrixTlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::THaarMatrixT<double>[nElements] : new ::THaarMatrixT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaarMatrixTlEdoublegR(void *p) {
      delete ((::THaarMatrixT<double>*)p);
   }
   static void deleteArray_THaarMatrixTlEdoublegR(void *p) {
      delete [] ((::THaarMatrixT<double>*)p);
   }
   static void destruct_THaarMatrixTlEdoublegR(void *p) {
      typedef ::THaarMatrixT<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaarMatrixT<double>

//______________________________________________________________________________
template <> void THaarMatrixT<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaarMatrixT<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaarMatrixT<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaarMatrixT<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaarMatrixTlEfloatgR(void *p) {
      return  p ? new(p) ::THaarMatrixT<float> : new ::THaarMatrixT<float>;
   }
   static void *newArray_THaarMatrixTlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::THaarMatrixT<float>[nElements] : new ::THaarMatrixT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaarMatrixTlEfloatgR(void *p) {
      delete ((::THaarMatrixT<float>*)p);
   }
   static void deleteArray_THaarMatrixTlEfloatgR(void *p) {
      delete [] ((::THaarMatrixT<float>*)p);
   }
   static void destruct_THaarMatrixTlEfloatgR(void *p) {
      typedef ::THaarMatrixT<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaarMatrixT<float>

//______________________________________________________________________________
template <> void THilbertMatrixT<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THilbertMatrixT<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THilbertMatrixT<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THilbertMatrixT<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THilbertMatrixTlEdoublegR(void *p) {
      return  p ? new(p) ::THilbertMatrixT<double> : new ::THilbertMatrixT<double>;
   }
   static void *newArray_THilbertMatrixTlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::THilbertMatrixT<double>[nElements] : new ::THilbertMatrixT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THilbertMatrixTlEdoublegR(void *p) {
      delete ((::THilbertMatrixT<double>*)p);
   }
   static void deleteArray_THilbertMatrixTlEdoublegR(void *p) {
      delete [] ((::THilbertMatrixT<double>*)p);
   }
   static void destruct_THilbertMatrixTlEdoublegR(void *p) {
      typedef ::THilbertMatrixT<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THilbertMatrixT<double>

//______________________________________________________________________________
template <> void THilbertMatrixT<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THilbertMatrixT<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THilbertMatrixT<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THilbertMatrixT<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THilbertMatrixTlEfloatgR(void *p) {
      return  p ? new(p) ::THilbertMatrixT<float> : new ::THilbertMatrixT<float>;
   }
   static void *newArray_THilbertMatrixTlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::THilbertMatrixT<float>[nElements] : new ::THilbertMatrixT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THilbertMatrixTlEfloatgR(void *p) {
      delete ((::THilbertMatrixT<float>*)p);
   }
   static void deleteArray_THilbertMatrixTlEfloatgR(void *p) {
      delete [] ((::THilbertMatrixT<float>*)p);
   }
   static void destruct_THilbertMatrixTlEfloatgR(void *p) {
      typedef ::THilbertMatrixT<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THilbertMatrixT<float>

//______________________________________________________________________________
template <> void THilbertMatrixTSym<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THilbertMatrixTSym<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THilbertMatrixTSym<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THilbertMatrixTSym<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THilbertMatrixTSymlEdoublegR(void *p) {
      return  p ? new(p) ::THilbertMatrixTSym<double> : new ::THilbertMatrixTSym<double>;
   }
   static void *newArray_THilbertMatrixTSymlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::THilbertMatrixTSym<double>[nElements] : new ::THilbertMatrixTSym<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THilbertMatrixTSymlEdoublegR(void *p) {
      delete ((::THilbertMatrixTSym<double>*)p);
   }
   static void deleteArray_THilbertMatrixTSymlEdoublegR(void *p) {
      delete [] ((::THilbertMatrixTSym<double>*)p);
   }
   static void destruct_THilbertMatrixTSymlEdoublegR(void *p) {
      typedef ::THilbertMatrixTSym<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THilbertMatrixTSym<double>

//______________________________________________________________________________
template <> void THilbertMatrixTSym<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THilbertMatrixTSym<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THilbertMatrixTSym<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THilbertMatrixTSym<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THilbertMatrixTSymlEfloatgR(void *p) {
      return  p ? new(p) ::THilbertMatrixTSym<float> : new ::THilbertMatrixTSym<float>;
   }
   static void *newArray_THilbertMatrixTSymlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::THilbertMatrixTSym<float>[nElements] : new ::THilbertMatrixTSym<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THilbertMatrixTSymlEfloatgR(void *p) {
      delete ((::THilbertMatrixTSym<float>*)p);
   }
   static void deleteArray_THilbertMatrixTSymlEfloatgR(void *p) {
      delete [] ((::THilbertMatrixTSym<float>*)p);
   }
   static void destruct_THilbertMatrixTSymlEfloatgR(void *p) {
      typedef ::THilbertMatrixTSym<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THilbertMatrixTSym<float>

//______________________________________________________________________________
void TMatrixDSymEigen::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMatrixDSymEigen.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMatrixDSymEigen::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMatrixDSymEigen::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMatrixDSymEigen(void *p) {
      return  p ? new(p) ::TMatrixDSymEigen : new ::TMatrixDSymEigen;
   }
   static void *newArray_TMatrixDSymEigen(Long_t nElements, void *p) {
      return p ? new(p) ::TMatrixDSymEigen[nElements] : new ::TMatrixDSymEigen[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMatrixDSymEigen(void *p) {
      delete ((::TMatrixDSymEigen*)p);
   }
   static void deleteArray_TMatrixDSymEigen(void *p) {
      delete [] ((::TMatrixDSymEigen*)p);
   }
   static void destruct_TMatrixDSymEigen(void *p) {
      typedef ::TMatrixDSymEigen current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMatrixDSymEigen

namespace {
  void TriggerDictionaryInitialization_libMatrix_Impl() {
    static const char* headers[] = {
"TDecompBK.h",
"TDecompBase.h",
"TDecompChol.h",
"TDecompLU.h",
"TDecompQRH.h",
"TDecompSVD.h",
"TDecompSparse.h",
"TMatrix.h",
"TMatrixD.h",
"TMatrixDBase.h",
"TMatrixDBasefwd.h",
"TMatrixDEigen.h",
"TMatrixDLazy.h",
"TMatrixDSparse.h",
"TMatrixDSparsefwd.h",
"TMatrixDSym.h",
"TMatrixDSymEigen.h",
"TMatrixDSymfwd.h",
"TMatrixDUtils.h",
"TMatrixDUtilsfwd.h",
"TMatrixDfwd.h",
"TMatrixF.h",
"TMatrixFBase.h",
"TMatrixFBasefwd.h",
"TMatrixFLazy.h",
"TMatrixFSparse.h",
"TMatrixFSparsefwd.h",
"TMatrixFSym.h",
"TMatrixFSymfwd.h",
"TMatrixFUtils.h",
"TMatrixFUtilsfwd.h",
"TMatrixFfwd.h",
"TMatrixT.h",
"TMatrixTBase.h",
"TMatrixTCramerInv.h",
"TMatrixTLazy.h",
"TMatrixTSparse.h",
"TMatrixTSym.h",
"TMatrixTSymCramerInv.h",
"TMatrixTUtils.h",
"TVector.h",
"TVectorD.h",
"TVectorDfwd.h",
"TVectorF.h",
"TVectorFfwd.h",
"TVectorT.h",
"TVectorfwd.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMatrix dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TDecompBK.h"
#include "TDecompBase.h"
#include "TDecompChol.h"
#include "TDecompLU.h"
#include "TDecompQRH.h"
#include "TDecompSVD.h"
#include "TDecompSparse.h"
#include "TMatrix.h"
#include "TMatrixD.h"
#include "TMatrixDBase.h"
#include "TMatrixDBasefwd.h"
#include "TMatrixDEigen.h"
#include "TMatrixDLazy.h"
#include "TMatrixDSparse.h"
#include "TMatrixDSparsefwd.h"
#include "TMatrixDSym.h"
#include "TMatrixDSymEigen.h"
#include "TMatrixDSymfwd.h"
#include "TMatrixDUtils.h"
#include "TMatrixDUtilsfwd.h"
#include "TMatrixDfwd.h"
#include "TMatrixF.h"
#include "TMatrixFBase.h"
#include "TMatrixFBasefwd.h"
#include "TMatrixFLazy.h"
#include "TMatrixFSparse.h"
#include "TMatrixFSparsefwd.h"
#include "TMatrixFSym.h"
#include "TMatrixFSymfwd.h"
#include "TMatrixFUtils.h"
#include "TMatrixFUtilsfwd.h"
#include "TMatrixFfwd.h"
#include "TMatrixT.h"
#include "TMatrixTBase.h"
#include "TMatrixTCramerInv.h"
#include "TMatrixTLazy.h"
#include "TMatrixTSparse.h"
#include "TMatrixTSym.h"
#include "TMatrixTSymCramerInv.h"
#include "TMatrixTUtils.h"
#include "TVector.h"
#include "TVectorD.h"
#include "TVectorDfwd.h"
#include "TVectorF.h"
#include "TVectorFfwd.h"
#include "TVectorT.h"
#include "TVectorfwd.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMatrix",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMatrix_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMatrix_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMatrix() {
  TriggerDictionaryInitialization_libMatrix_Impl();
}
