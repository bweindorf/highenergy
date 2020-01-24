// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__IO

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
#include "TArchiveFile.h"
#include "TBufferFile.h"
#include "TBufferJSON.h"
#include "TCollectionProxyFactory.h"
#include "TContainerConverters.h"
#include "TDirectoryFile.h"
#include "TEmulatedCollectionProxy.h"
#include "TEmulatedMapProxy.h"
#include "TFPBlock.h"
#include "TFile.h"
#include "TFileCacheRead.h"
#include "TFileCacheWrite.h"
#include "TFileMerger.h"
#include "TFilePrefetch.h"
#include "TFree.h"
#include "TGenCollectionProxy.h"
#include "TGenCollectionStreamer.h"
#include "TKey.h"
#include "TKeyMapFile.h"
#include "TLockFile.h"
#include "TMakeProject.h"
#include "TMapFile.h"
#include "TMemFile.h"
#include "TStreamerInfo.h"
#include "TStreamerInfoActions.h"
#include "TVirtualArray.h"
#include "TVirtualCollectionIterators.h"
#include "TVirtualObject.h"
#include "TZIPFile.h"
#include "ROOT/TBufferMerger.hxx"

// Header files passed via #pragma extra_include

namespace TStreamerInfoActions {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TStreamerInfoActions_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TStreamerInfoActions", 0 /*version*/, "TBuffer.h", 36,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &TStreamerInfoActions_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TStreamerInfoActions_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void delete_TArchiveFile(void *p);
   static void deleteArray_TArchiveFile(void *p);
   static void destruct_TArchiveFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArchiveFile*)
   {
      ::TArchiveFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArchiveFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArchiveFile", ::TArchiveFile::Class_Version(), "TArchiveFile.h", 24,
                  typeid(::TArchiveFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArchiveFile::Dictionary, isa_proxy, 4,
                  sizeof(::TArchiveFile) );
      instance.SetDelete(&delete_TArchiveFile);
      instance.SetDeleteArray(&deleteArray_TArchiveFile);
      instance.SetDestructor(&destruct_TArchiveFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArchiveFile*)
   {
      return GenerateInitInstanceLocal((::TArchiveFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArchiveFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArchiveMember(void *p = 0);
   static void *newArray_TArchiveMember(Long_t size, void *p);
   static void delete_TArchiveMember(void *p);
   static void deleteArray_TArchiveMember(void *p);
   static void destruct_TArchiveMember(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArchiveMember*)
   {
      ::TArchiveMember *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArchiveMember >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArchiveMember", ::TArchiveMember::Class_Version(), "TArchiveFile.h", 65,
                  typeid(::TArchiveMember), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArchiveMember::Dictionary, isa_proxy, 4,
                  sizeof(::TArchiveMember) );
      instance.SetNew(&new_TArchiveMember);
      instance.SetNewArray(&newArray_TArchiveMember);
      instance.SetDelete(&delete_TArchiveMember);
      instance.SetDeleteArray(&deleteArray_TArchiveMember);
      instance.SetDestructor(&destruct_TArchiveMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArchiveMember*)
   {
      return GenerateInitInstanceLocal((::TArchiveMember*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArchiveMember*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TBufferFile(void *p);
   static void deleteArray_TBufferFile(void *p);
   static void destruct_TBufferFile(void *p);
   static void streamer_TBufferFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBufferFile*)
   {
      ::TBufferFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBufferFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBufferFile", ::TBufferFile::Class_Version(), "TBufferFile.h", 47,
                  typeid(::TBufferFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBufferFile::Dictionary, isa_proxy, 16,
                  sizeof(::TBufferFile) );
      instance.SetDelete(&delete_TBufferFile);
      instance.SetDeleteArray(&deleteArray_TBufferFile);
      instance.SetDestructor(&destruct_TBufferFile);
      instance.SetStreamerFunc(&streamer_TBufferFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBufferFile*)
   {
      return GenerateInitInstanceLocal((::TBufferFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBufferFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBufferJSON(void *p = 0);
   static void *newArray_TBufferJSON(Long_t size, void *p);
   static void delete_TBufferJSON(void *p);
   static void deleteArray_TBufferJSON(void *p);
   static void destruct_TBufferJSON(void *p);
   static void streamer_TBufferJSON(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBufferJSON*)
   {
      ::TBufferJSON *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBufferJSON >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBufferJSON", ::TBufferJSON::Class_Version(), "TBufferJSON.h", 30,
                  typeid(::TBufferJSON), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBufferJSON::Dictionary, isa_proxy, 16,
                  sizeof(::TBufferJSON) );
      instance.SetNew(&new_TBufferJSON);
      instance.SetNewArray(&newArray_TBufferJSON);
      instance.SetDelete(&delete_TBufferJSON);
      instance.SetDeleteArray(&deleteArray_TBufferJSON);
      instance.SetDestructor(&destruct_TBufferJSON);
      instance.SetStreamerFunc(&streamer_TBufferJSON);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBufferJSON*)
   {
      return GenerateInitInstanceLocal((::TBufferJSON*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBufferJSON*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TGenCollectionProxy_Dictionary();
   static void TGenCollectionProxy_TClassManip(TClass*);
   static void delete_TGenCollectionProxy(void *p);
   static void deleteArray_TGenCollectionProxy(void *p);
   static void destruct_TGenCollectionProxy(void *p);
   static void streamer_TGenCollectionProxy(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenCollectionProxy*)
   {
      ::TGenCollectionProxy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGenCollectionProxy));
      static ::ROOT::TGenericClassInfo 
         instance("TGenCollectionProxy", "TGenCollectionProxy.h", 28,
                  typeid(::TGenCollectionProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGenCollectionProxy_Dictionary, isa_proxy, 17,
                  sizeof(::TGenCollectionProxy) );
      instance.SetDelete(&delete_TGenCollectionProxy);
      instance.SetDeleteArray(&deleteArray_TGenCollectionProxy);
      instance.SetDestructor(&destruct_TGenCollectionProxy);
      instance.SetStreamerFunc(&streamer_TGenCollectionProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenCollectionProxy*)
   {
      return GenerateInitInstanceLocal((::TGenCollectionProxy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGenCollectionProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGenCollectionProxy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TGenCollectionProxy*)0x0)->GetClass();
      TGenCollectionProxy_TClassManip(theClass);
   return theClass;
   }

   static void TGenCollectionProxy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGenCollectionProxycLcLValue_Dictionary();
   static void TGenCollectionProxycLcLValue_TClassManip(TClass*);
   static void delete_TGenCollectionProxycLcLValue(void *p);
   static void deleteArray_TGenCollectionProxycLcLValue(void *p);
   static void destruct_TGenCollectionProxycLcLValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenCollectionProxy::Value*)
   {
      ::TGenCollectionProxy::Value *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGenCollectionProxy::Value));
      static ::ROOT::TGenericClassInfo 
         instance("TGenCollectionProxy::Value", "TGenCollectionProxy.h", 59,
                  typeid(::TGenCollectionProxy::Value), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGenCollectionProxycLcLValue_Dictionary, isa_proxy, 1,
                  sizeof(::TGenCollectionProxy::Value) );
      instance.SetDelete(&delete_TGenCollectionProxycLcLValue);
      instance.SetDeleteArray(&deleteArray_TGenCollectionProxycLcLValue);
      instance.SetDestructor(&destruct_TGenCollectionProxycLcLValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenCollectionProxy::Value*)
   {
      return GenerateInitInstanceLocal((::TGenCollectionProxy::Value*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGenCollectionProxy::Value*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGenCollectionProxycLcLValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TGenCollectionProxy::Value*)0x0)->GetClass();
      TGenCollectionProxycLcLValue_TClassManip(theClass);
   return theClass;
   }

   static void TGenCollectionProxycLcLValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGenCollectionProxycLcLMethod_Dictionary();
   static void TGenCollectionProxycLcLMethod_TClassManip(TClass*);
   static void *new_TGenCollectionProxycLcLMethod(void *p = 0);
   static void *newArray_TGenCollectionProxycLcLMethod(Long_t size, void *p);
   static void delete_TGenCollectionProxycLcLMethod(void *p);
   static void deleteArray_TGenCollectionProxycLcLMethod(void *p);
   static void destruct_TGenCollectionProxycLcLMethod(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenCollectionProxy::Method*)
   {
      ::TGenCollectionProxy::Method *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGenCollectionProxy::Method));
      static ::ROOT::TGenericClassInfo 
         instance("TGenCollectionProxy::Method", "TGenCollectionProxy.h", 192,
                  typeid(::TGenCollectionProxy::Method), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGenCollectionProxycLcLMethod_Dictionary, isa_proxy, 1,
                  sizeof(::TGenCollectionProxy::Method) );
      instance.SetNew(&new_TGenCollectionProxycLcLMethod);
      instance.SetNewArray(&newArray_TGenCollectionProxycLcLMethod);
      instance.SetDelete(&delete_TGenCollectionProxycLcLMethod);
      instance.SetDeleteArray(&deleteArray_TGenCollectionProxycLcLMethod);
      instance.SetDestructor(&destruct_TGenCollectionProxycLcLMethod);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenCollectionProxy::Method*)
   {
      return GenerateInitInstanceLocal((::TGenCollectionProxy::Method*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGenCollectionProxy::Method*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGenCollectionProxycLcLMethod_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TGenCollectionProxy::Method*)0x0)->GetClass();
      TGenCollectionProxycLcLMethod_TClassManip(theClass);
   return theClass;
   }

   static void TGenCollectionProxycLcLMethod_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TCollectionProxyFactory_Dictionary();
   static void TCollectionProxyFactory_TClassManip(TClass*);
   static void *new_TCollectionProxyFactory(void *p = 0);
   static void *newArray_TCollectionProxyFactory(Long_t size, void *p);
   static void delete_TCollectionProxyFactory(void *p);
   static void deleteArray_TCollectionProxyFactory(void *p);
   static void destruct_TCollectionProxyFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionProxyFactory*)
   {
      ::TCollectionProxyFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TCollectionProxyFactory));
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionProxyFactory", "TCollectionProxyFactory.h", 67,
                  typeid(::TCollectionProxyFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TCollectionProxyFactory_Dictionary, isa_proxy, 1,
                  sizeof(::TCollectionProxyFactory) );
      instance.SetNew(&new_TCollectionProxyFactory);
      instance.SetNewArray(&newArray_TCollectionProxyFactory);
      instance.SetDelete(&delete_TCollectionProxyFactory);
      instance.SetDeleteArray(&deleteArray_TCollectionProxyFactory);
      instance.SetDestructor(&destruct_TCollectionProxyFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionProxyFactory*)
   {
      return GenerateInitInstanceLocal((::TCollectionProxyFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCollectionProxyFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TCollectionProxyFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TCollectionProxyFactory*)0x0)->GetClass();
      TCollectionProxyFactory_TClassManip(theClass);
   return theClass;
   }

   static void TCollectionProxyFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TCollectionStreamer_Dictionary();
   static void TCollectionStreamer_TClassManip(TClass*);
   static void *new_TCollectionStreamer(void *p = 0);
   static void *newArray_TCollectionStreamer(Long_t size, void *p);
   static void delete_TCollectionStreamer(void *p);
   static void deleteArray_TCollectionStreamer(void *p);
   static void destruct_TCollectionStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionStreamer*)
   {
      ::TCollectionStreamer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TCollectionStreamer));
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionStreamer", "TCollectionProxyFactory.h", 127,
                  typeid(::TCollectionStreamer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TCollectionStreamer_Dictionary, isa_proxy, 1,
                  sizeof(::TCollectionStreamer) );
      instance.SetNew(&new_TCollectionStreamer);
      instance.SetNewArray(&newArray_TCollectionStreamer);
      instance.SetDelete(&delete_TCollectionStreamer);
      instance.SetDeleteArray(&deleteArray_TCollectionStreamer);
      instance.SetDestructor(&destruct_TCollectionStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionStreamer*)
   {
      return GenerateInitInstanceLocal((::TCollectionStreamer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCollectionStreamer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TCollectionStreamer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TCollectionStreamer*)0x0)->GetClass();
      TCollectionStreamer_TClassManip(theClass);
   return theClass;
   }

   static void TCollectionStreamer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TCollectionClassStreamer_Dictionary();
   static void TCollectionClassStreamer_TClassManip(TClass*);
   static void *new_TCollectionClassStreamer(void *p = 0);
   static void *newArray_TCollectionClassStreamer(Long_t size, void *p);
   static void delete_TCollectionClassStreamer(void *p);
   static void deleteArray_TCollectionClassStreamer(void *p);
   static void destruct_TCollectionClassStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionClassStreamer*)
   {
      ::TCollectionClassStreamer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TCollectionClassStreamer));
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionClassStreamer", "TCollectionProxyFactory.h", 159,
                  typeid(::TCollectionClassStreamer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TCollectionClassStreamer_Dictionary, isa_proxy, 1,
                  sizeof(::TCollectionClassStreamer) );
      instance.SetNew(&new_TCollectionClassStreamer);
      instance.SetNewArray(&newArray_TCollectionClassStreamer);
      instance.SetDelete(&delete_TCollectionClassStreamer);
      instance.SetDeleteArray(&deleteArray_TCollectionClassStreamer);
      instance.SetDestructor(&destruct_TCollectionClassStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionClassStreamer*)
   {
      return GenerateInitInstanceLocal((::TCollectionClassStreamer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCollectionClassStreamer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TCollectionClassStreamer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TCollectionClassStreamer*)0x0)->GetClass();
      TCollectionClassStreamer_TClassManip(theClass);
   return theClass;
   }

   static void TCollectionClassStreamer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TCollectionMemberStreamer_Dictionary();
   static void TCollectionMemberStreamer_TClassManip(TClass*);
   static void *new_TCollectionMemberStreamer(void *p = 0);
   static void *newArray_TCollectionMemberStreamer(Long_t size, void *p);
   static void delete_TCollectionMemberStreamer(void *p);
   static void deleteArray_TCollectionMemberStreamer(void *p);
   static void destruct_TCollectionMemberStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionMemberStreamer*)
   {
      ::TCollectionMemberStreamer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TCollectionMemberStreamer));
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionMemberStreamer", "TCollectionProxyFactory.h", 207,
                  typeid(::TCollectionMemberStreamer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TCollectionMemberStreamer_Dictionary, isa_proxy, 1,
                  sizeof(::TCollectionMemberStreamer) );
      instance.SetNew(&new_TCollectionMemberStreamer);
      instance.SetNewArray(&newArray_TCollectionMemberStreamer);
      instance.SetDelete(&delete_TCollectionMemberStreamer);
      instance.SetDeleteArray(&deleteArray_TCollectionMemberStreamer);
      instance.SetDestructor(&destruct_TCollectionMemberStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionMemberStreamer*)
   {
      return GenerateInitInstanceLocal((::TCollectionMemberStreamer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCollectionMemberStreamer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TCollectionMemberStreamer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TCollectionMemberStreamer*)0x0)->GetClass();
      TCollectionMemberStreamer_TClassManip(theClass);
   return theClass;
   }

   static void TCollectionMemberStreamer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TDirectoryFile(void *p = 0);
   static void *newArray_TDirectoryFile(Long_t size, void *p);
   static void delete_TDirectoryFile(void *p);
   static void deleteArray_TDirectoryFile(void *p);
   static void destruct_TDirectoryFile(void *p);
   static void streamer_TDirectoryFile(TBuffer &buf, void *obj);
   static void reset_TDirectoryFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDirectoryFile*)
   {
      ::TDirectoryFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDirectoryFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDirectoryFile", ::TDirectoryFile::Class_Version(), "TDirectoryFile.h", 31,
                  typeid(::TDirectoryFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDirectoryFile::Dictionary, isa_proxy, 17,
                  sizeof(::TDirectoryFile) );
      instance.SetNew(&new_TDirectoryFile);
      instance.SetNewArray(&newArray_TDirectoryFile);
      instance.SetDelete(&delete_TDirectoryFile);
      instance.SetDeleteArray(&deleteArray_TDirectoryFile);
      instance.SetDestructor(&destruct_TDirectoryFile);
      instance.SetStreamerFunc(&streamer_TDirectoryFile);
      instance.SetResetAfterMerge(&reset_TDirectoryFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDirectoryFile*)
   {
      return GenerateInitInstanceLocal((::TDirectoryFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDirectoryFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TEmulatedCollectionProxy_Dictionary();
   static void TEmulatedCollectionProxy_TClassManip(TClass*);
   static void delete_TEmulatedCollectionProxy(void *p);
   static void deleteArray_TEmulatedCollectionProxy(void *p);
   static void destruct_TEmulatedCollectionProxy(void *p);
   static void streamer_TEmulatedCollectionProxy(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEmulatedCollectionProxy*)
   {
      ::TEmulatedCollectionProxy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TEmulatedCollectionProxy));
      static ::ROOT::TGenericClassInfo 
         instance("TEmulatedCollectionProxy", "TEmulatedCollectionProxy.h", 16,
                  typeid(::TEmulatedCollectionProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEmulatedCollectionProxy_Dictionary, isa_proxy, 17,
                  sizeof(::TEmulatedCollectionProxy) );
      instance.SetDelete(&delete_TEmulatedCollectionProxy);
      instance.SetDeleteArray(&deleteArray_TEmulatedCollectionProxy);
      instance.SetDestructor(&destruct_TEmulatedCollectionProxy);
      instance.SetStreamerFunc(&streamer_TEmulatedCollectionProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEmulatedCollectionProxy*)
   {
      return GenerateInitInstanceLocal((::TEmulatedCollectionProxy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEmulatedCollectionProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEmulatedCollectionProxy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TEmulatedCollectionProxy*)0x0)->GetClass();
      TEmulatedCollectionProxy_TClassManip(theClass);
   return theClass;
   }

   static void TEmulatedCollectionProxy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEmulatedMapProxy_Dictionary();
   static void TEmulatedMapProxy_TClassManip(TClass*);
   static void delete_TEmulatedMapProxy(void *p);
   static void deleteArray_TEmulatedMapProxy(void *p);
   static void destruct_TEmulatedMapProxy(void *p);
   static void streamer_TEmulatedMapProxy(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEmulatedMapProxy*)
   {
      ::TEmulatedMapProxy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TEmulatedMapProxy));
      static ::ROOT::TGenericClassInfo 
         instance("TEmulatedMapProxy", "TEmulatedMapProxy.h", 16,
                  typeid(::TEmulatedMapProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEmulatedMapProxy_Dictionary, isa_proxy, 17,
                  sizeof(::TEmulatedMapProxy) );
      instance.SetDelete(&delete_TEmulatedMapProxy);
      instance.SetDeleteArray(&deleteArray_TEmulatedMapProxy);
      instance.SetDestructor(&destruct_TEmulatedMapProxy);
      instance.SetStreamerFunc(&streamer_TEmulatedMapProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEmulatedMapProxy*)
   {
      return GenerateInitInstanceLocal((::TEmulatedMapProxy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEmulatedMapProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEmulatedMapProxy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TEmulatedMapProxy*)0x0)->GetClass();
      TEmulatedMapProxy_TClassManip(theClass);
   return theClass;
   }

   static void TEmulatedMapProxy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TFPBlock(void *p);
   static void deleteArray_TFPBlock(void *p);
   static void destruct_TFPBlock(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFPBlock*)
   {
      ::TFPBlock *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFPBlock >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFPBlock", ::TFPBlock::Class_Version(), "TFPBlock.h", 22,
                  typeid(::TFPBlock), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFPBlock::Dictionary, isa_proxy, 4,
                  sizeof(::TFPBlock) );
      instance.SetDelete(&delete_TFPBlock);
      instance.SetDeleteArray(&deleteArray_TFPBlock);
      instance.SetDestructor(&destruct_TFPBlock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFPBlock*)
   {
      return GenerateInitInstanceLocal((::TFPBlock*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFPBlock*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFile(void *p = 0);
   static void *newArray_TFile(Long_t size, void *p);
   static void delete_TFile(void *p);
   static void deleteArray_TFile(void *p);
   static void destruct_TFile(void *p);
   static void streamer_TFile(TBuffer &buf, void *obj);
   static void reset_TFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFile*)
   {
      ::TFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFile", ::TFile::Class_Version(), "TFile.h", 46,
                  typeid(::TFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFile::Dictionary, isa_proxy, 17,
                  sizeof(::TFile) );
      instance.SetNew(&new_TFile);
      instance.SetNewArray(&newArray_TFile);
      instance.SetDelete(&delete_TFile);
      instance.SetDeleteArray(&deleteArray_TFile);
      instance.SetDestructor(&destruct_TFile);
      instance.SetStreamerFunc(&streamer_TFile);
      instance.SetResetAfterMerge(&reset_TFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFile*)
   {
      return GenerateInitInstanceLocal((::TFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFileCacheRead(void *p = 0);
   static void *newArray_TFileCacheRead(Long_t size, void *p);
   static void delete_TFileCacheRead(void *p);
   static void deleteArray_TFileCacheRead(void *p);
   static void destruct_TFileCacheRead(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileCacheRead*)
   {
      ::TFileCacheRead *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileCacheRead >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFileCacheRead", ::TFileCacheRead::Class_Version(), "TFileCacheRead.h", 22,
                  typeid(::TFileCacheRead), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileCacheRead::Dictionary, isa_proxy, 4,
                  sizeof(::TFileCacheRead) );
      instance.SetNew(&new_TFileCacheRead);
      instance.SetNewArray(&newArray_TFileCacheRead);
      instance.SetDelete(&delete_TFileCacheRead);
      instance.SetDeleteArray(&deleteArray_TFileCacheRead);
      instance.SetDestructor(&destruct_TFileCacheRead);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileCacheRead*)
   {
      return GenerateInitInstanceLocal((::TFileCacheRead*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFileCacheRead*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFileCacheWrite(void *p = 0);
   static void *newArray_TFileCacheWrite(Long_t size, void *p);
   static void delete_TFileCacheWrite(void *p);
   static void deleteArray_TFileCacheWrite(void *p);
   static void destruct_TFileCacheWrite(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileCacheWrite*)
   {
      ::TFileCacheWrite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileCacheWrite >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFileCacheWrite", ::TFileCacheWrite::Class_Version(), "TFileCacheWrite.h", 19,
                  typeid(::TFileCacheWrite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileCacheWrite::Dictionary, isa_proxy, 4,
                  sizeof(::TFileCacheWrite) );
      instance.SetNew(&new_TFileCacheWrite);
      instance.SetNewArray(&newArray_TFileCacheWrite);
      instance.SetDelete(&delete_TFileCacheWrite);
      instance.SetDeleteArray(&deleteArray_TFileCacheWrite);
      instance.SetDestructor(&destruct_TFileCacheWrite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileCacheWrite*)
   {
      return GenerateInitInstanceLocal((::TFileCacheWrite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFileCacheWrite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFileMerger(void *p = 0);
   static void *newArray_TFileMerger(Long_t size, void *p);
   static void delete_TFileMerger(void *p);
   static void deleteArray_TFileMerger(void *p);
   static void destruct_TFileMerger(void *p);
   static Long64_t merge_TFileMerger(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileMerger*)
   {
      ::TFileMerger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileMerger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFileMerger", ::TFileMerger::Class_Version(), "TFileMerger.h", 24,
                  typeid(::TFileMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileMerger::Dictionary, isa_proxy, 4,
                  sizeof(::TFileMerger) );
      instance.SetNew(&new_TFileMerger);
      instance.SetNewArray(&newArray_TFileMerger);
      instance.SetDelete(&delete_TFileMerger);
      instance.SetDeleteArray(&deleteArray_TFileMerger);
      instance.SetDestructor(&destruct_TFileMerger);
      instance.SetMerge(&merge_TFileMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileMerger*)
   {
      return GenerateInitInstanceLocal((::TFileMerger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFileMerger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFilePrefetch(void *p);
   static void deleteArray_TFilePrefetch(void *p);
   static void destruct_TFilePrefetch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFilePrefetch*)
   {
      ::TFilePrefetch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFilePrefetch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFilePrefetch", ::TFilePrefetch::Class_Version(), "TFilePrefetch.h", 31,
                  typeid(::TFilePrefetch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFilePrefetch::Dictionary, isa_proxy, 4,
                  sizeof(::TFilePrefetch) );
      instance.SetDelete(&delete_TFilePrefetch);
      instance.SetDeleteArray(&deleteArray_TFilePrefetch);
      instance.SetDestructor(&destruct_TFilePrefetch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFilePrefetch*)
   {
      return GenerateInitInstanceLocal((::TFilePrefetch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFilePrefetch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFree(void *p = 0);
   static void *newArray_TFree(Long_t size, void *p);
   static void delete_TFree(void *p);
   static void deleteArray_TFree(void *p);
   static void destruct_TFree(void *p);
   static void streamer_TFree(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFree*)
   {
      ::TFree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFree", ::TFree::Class_Version(), "TFree.h", 27,
                  typeid(::TFree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFree::Dictionary, isa_proxy, 16,
                  sizeof(::TFree) );
      instance.SetNew(&new_TFree);
      instance.SetNewArray(&newArray_TFree);
      instance.SetDelete(&delete_TFree);
      instance.SetDeleteArray(&deleteArray_TFree);
      instance.SetDestructor(&destruct_TFree);
      instance.SetStreamerFunc(&streamer_TFree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFree*)
   {
      return GenerateInitInstanceLocal((::TFree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TKey(void *p = 0);
   static void *newArray_TKey(Long_t size, void *p);
   static void delete_TKey(void *p);
   static void deleteArray_TKey(void *p);
   static void destruct_TKey(void *p);
   static void streamer_TKey(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKey*)
   {
      ::TKey *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKey >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TKey", ::TKey::Class_Version(), "TKey.h", 24,
                  typeid(::TKey), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKey::Dictionary, isa_proxy, 17,
                  sizeof(::TKey) );
      instance.SetNew(&new_TKey);
      instance.SetNewArray(&newArray_TKey);
      instance.SetDelete(&delete_TKey);
      instance.SetDeleteArray(&deleteArray_TKey);
      instance.SetDestructor(&destruct_TKey);
      instance.SetStreamerFunc(&streamer_TKey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKey*)
   {
      return GenerateInitInstanceLocal((::TKey*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TKey*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TKeyMapFile(void *p = 0);
   static void *newArray_TKeyMapFile(Long_t size, void *p);
   static void delete_TKeyMapFile(void *p);
   static void deleteArray_TKeyMapFile(void *p);
   static void destruct_TKeyMapFile(void *p);
   static void streamer_TKeyMapFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKeyMapFile*)
   {
      ::TKeyMapFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKeyMapFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TKeyMapFile", ::TKeyMapFile::Class_Version(), "TKeyMapFile.h", 20,
                  typeid(::TKeyMapFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKeyMapFile::Dictionary, isa_proxy, 16,
                  sizeof(::TKeyMapFile) );
      instance.SetNew(&new_TKeyMapFile);
      instance.SetNewArray(&newArray_TKeyMapFile);
      instance.SetDelete(&delete_TKeyMapFile);
      instance.SetDeleteArray(&deleteArray_TKeyMapFile);
      instance.SetDestructor(&destruct_TKeyMapFile);
      instance.SetStreamerFunc(&streamer_TKeyMapFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKeyMapFile*)
   {
      return GenerateInitInstanceLocal((::TKeyMapFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TKeyMapFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TLockFile(void *p);
   static void deleteArray_TLockFile(void *p);
   static void destruct_TLockFile(void *p);
   static void streamer_TLockFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLockFile*)
   {
      ::TLockFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLockFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLockFile", ::TLockFile::Class_Version(), "TLockFile.h", 19,
                  typeid(::TLockFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLockFile::Dictionary, isa_proxy, 16,
                  sizeof(::TLockFile) );
      instance.SetDelete(&delete_TLockFile);
      instance.SetDeleteArray(&deleteArray_TLockFile);
      instance.SetDestructor(&destruct_TLockFile);
      instance.SetStreamerFunc(&streamer_TLockFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLockFile*)
   {
      return GenerateInitInstanceLocal((::TLockFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLockFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMapFile(void *p);
   static void deleteArray_TMapFile(void *p);
   static void destruct_TMapFile(void *p);
   static void streamer_TMapFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMapFile*)
   {
      ::TMapFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMapFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMapFile", ::TMapFile::Class_Version(), "TMapFile.h", 26,
                  typeid(::TMapFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMapFile::Dictionary, isa_proxy, 16,
                  sizeof(::TMapFile) );
      instance.SetDelete(&delete_TMapFile);
      instance.SetDeleteArray(&deleteArray_TMapFile);
      instance.SetDestructor(&destruct_TMapFile);
      instance.SetStreamerFunc(&streamer_TMapFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMapFile*)
   {
      return GenerateInitInstanceLocal((::TMapFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMapFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMapRec_Dictionary();
   static void TMapRec_TClassManip(TClass*);
   static void delete_TMapRec(void *p);
   static void deleteArray_TMapRec(void *p);
   static void destruct_TMapRec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMapRec*)
   {
      ::TMapRec *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMapRec));
      static ::ROOT::TGenericClassInfo 
         instance("TMapRec", "TMapFile.h", 128,
                  typeid(::TMapRec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMapRec_Dictionary, isa_proxy, 0,
                  sizeof(::TMapRec) );
      instance.SetDelete(&delete_TMapRec);
      instance.SetDeleteArray(&deleteArray_TMapRec);
      instance.SetDestructor(&destruct_TMapRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMapRec*)
   {
      return GenerateInitInstanceLocal((::TMapRec*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMapRec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMapRec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMapRec*)0x0)->GetClass();
      TMapRec_TClassManip(theClass);
   return theClass;
   }

   static void TMapRec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TMemFile(void *p);
   static void deleteArray_TMemFile(void *p);
   static void destruct_TMemFile(void *p);
   static void streamer_TMemFile(TBuffer &buf, void *obj);
   static void reset_TMemFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMemFile*)
   {
      ::TMemFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMemFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMemFile", ::TMemFile::Class_Version(), "TMemFile.h", 17,
                  typeid(::TMemFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMemFile::Dictionary, isa_proxy, 16,
                  sizeof(::TMemFile) );
      instance.SetDelete(&delete_TMemFile);
      instance.SetDeleteArray(&deleteArray_TMemFile);
      instance.SetDestructor(&destruct_TMemFile);
      instance.SetStreamerFunc(&streamer_TMemFile);
      instance.SetResetAfterMerge(&reset_TMemFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMemFile*)
   {
      return GenerateInitInstanceLocal((::TMemFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMemFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TStreamerInfo(void *p = 0);
   static void *newArray_TStreamerInfo(Long_t size, void *p);
   static void delete_TStreamerInfo(void *p);
   static void deleteArray_TStreamerInfo(void *p);
   static void destruct_TStreamerInfo(void *p);
   static void streamer_TStreamerInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStreamerInfo*)
   {
      ::TStreamerInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStreamerInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStreamerInfo", ::TStreamerInfo::Class_Version(), "TStreamerInfo.h", 43,
                  typeid(::TStreamerInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStreamerInfo::Dictionary, isa_proxy, 17,
                  sizeof(::TStreamerInfo) );
      instance.SetNew(&new_TStreamerInfo);
      instance.SetNewArray(&newArray_TStreamerInfo);
      instance.SetDelete(&delete_TStreamerInfo);
      instance.SetDeleteArray(&deleteArray_TStreamerInfo);
      instance.SetDestructor(&destruct_TStreamerInfo);
      instance.SetStreamerFunc(&streamer_TStreamerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStreamerInfo*)
   {
      return GenerateInitInstanceLocal((::TStreamerInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStreamerInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TStreamerInfoActionscLcLTConfiguration_Dictionary();
   static void TStreamerInfoActionscLcLTConfiguration_TClassManip(TClass*);
   static void delete_TStreamerInfoActionscLcLTConfiguration(void *p);
   static void deleteArray_TStreamerInfoActionscLcLTConfiguration(void *p);
   static void destruct_TStreamerInfoActionscLcLTConfiguration(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStreamerInfoActions::TConfiguration*)
   {
      ::TStreamerInfoActions::TConfiguration *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TStreamerInfoActions::TConfiguration));
      static ::ROOT::TGenericClassInfo 
         instance("TStreamerInfoActions::TConfiguration", "TStreamerInfoActions.h", 28,
                  typeid(::TStreamerInfoActions::TConfiguration), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TStreamerInfoActionscLcLTConfiguration_Dictionary, isa_proxy, 1,
                  sizeof(::TStreamerInfoActions::TConfiguration) );
      instance.SetDelete(&delete_TStreamerInfoActionscLcLTConfiguration);
      instance.SetDeleteArray(&deleteArray_TStreamerInfoActionscLcLTConfiguration);
      instance.SetDestructor(&destruct_TStreamerInfoActionscLcLTConfiguration);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStreamerInfoActions::TConfiguration*)
   {
      return GenerateInitInstanceLocal((::TStreamerInfoActions::TConfiguration*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguration*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TStreamerInfoActionscLcLTConfiguration_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguration*)0x0)->GetClass();
      TStreamerInfoActionscLcLTConfiguration_TClassManip(theClass);
   return theClass;
   }

   static void TStreamerInfoActionscLcLTConfiguration_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TStreamerInfoActionscLcLTConfiguredAction(void *p = 0);
   static void *newArray_TStreamerInfoActionscLcLTConfiguredAction(Long_t size, void *p);
   static void delete_TStreamerInfoActionscLcLTConfiguredAction(void *p);
   static void deleteArray_TStreamerInfoActionscLcLTConfiguredAction(void *p);
   static void destruct_TStreamerInfoActionscLcLTConfiguredAction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStreamerInfoActions::TConfiguredAction*)
   {
      ::TStreamerInfoActions::TConfiguredAction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStreamerInfoActions::TConfiguredAction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStreamerInfoActions::TConfiguredAction", ::TStreamerInfoActions::TConfiguredAction::Class_Version(), "TStreamerInfoActions.h", 67,
                  typeid(::TStreamerInfoActions::TConfiguredAction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStreamerInfoActions::TConfiguredAction::Dictionary, isa_proxy, 4,
                  sizeof(::TStreamerInfoActions::TConfiguredAction) );
      instance.SetNew(&new_TStreamerInfoActionscLcLTConfiguredAction);
      instance.SetNewArray(&newArray_TStreamerInfoActionscLcLTConfiguredAction);
      instance.SetDelete(&delete_TStreamerInfoActionscLcLTConfiguredAction);
      instance.SetDeleteArray(&deleteArray_TStreamerInfoActionscLcLTConfiguredAction);
      instance.SetDestructor(&destruct_TStreamerInfoActionscLcLTConfiguredAction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStreamerInfoActions::TConfiguredAction*)
   {
      return GenerateInitInstanceLocal((::TStreamerInfoActions::TConfiguredAction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguredAction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStreamerInfoActionscLcLTActionSequence(void *p);
   static void deleteArray_TStreamerInfoActionscLcLTActionSequence(void *p);
   static void destruct_TStreamerInfoActionscLcLTActionSequence(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStreamerInfoActions::TActionSequence*)
   {
      ::TStreamerInfoActions::TActionSequence *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStreamerInfoActions::TActionSequence >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStreamerInfoActions::TActionSequence", ::TStreamerInfoActions::TActionSequence::Class_Version(), "TStreamerInfoActions.h", 131,
                  typeid(::TStreamerInfoActions::TActionSequence), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStreamerInfoActions::TActionSequence::Dictionary, isa_proxy, 4,
                  sizeof(::TStreamerInfoActions::TActionSequence) );
      instance.SetDelete(&delete_TStreamerInfoActionscLcLTActionSequence);
      instance.SetDeleteArray(&deleteArray_TStreamerInfoActionscLcLTActionSequence);
      instance.SetDestructor(&destruct_TStreamerInfoActionscLcLTActionSequence);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStreamerInfoActions::TActionSequence*)
   {
      return GenerateInitInstanceLocal((::TStreamerInfoActions::TActionSequence*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStreamerInfoActions::TActionSequence*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TVirtualArray_Dictionary();
   static void TVirtualArray_TClassManip(TClass*);
   static void delete_TVirtualArray(void *p);
   static void deleteArray_TVirtualArray(void *p);
   static void destruct_TVirtualArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualArray*)
   {
      ::TVirtualArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TVirtualArray));
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualArray", 0, "TVirtualArray.h", 26,
                  typeid(::TVirtualArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TVirtualArray_Dictionary, isa_proxy, 9,
                  sizeof(::TVirtualArray) );
      instance.SetDelete(&delete_TVirtualArray);
      instance.SetDeleteArray(&deleteArray_TVirtualArray);
      instance.SetDestructor(&destruct_TVirtualArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualArray*)
   {
      return GenerateInitInstanceLocal((::TVirtualArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TVirtualArray_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TVirtualArray*)0x0)->GetClass();
      TVirtualArray_TClassManip(theClass);
   return theClass;
   }

   static void TVirtualArray_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TVirtualObject_Dictionary();
   static void TVirtualObject_TClassManip(TClass*);
   static void delete_TVirtualObject(void *p);
   static void deleteArray_TVirtualObject(void *p);
   static void destruct_TVirtualObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualObject*)
   {
      ::TVirtualObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TVirtualObject));
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualObject", 0, "TVirtualObject.h", 26,
                  typeid(::TVirtualObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TVirtualObject_Dictionary, isa_proxy, 9,
                  sizeof(::TVirtualObject) );
      instance.SetDelete(&delete_TVirtualObject);
      instance.SetDeleteArray(&deleteArray_TVirtualObject);
      instance.SetDestructor(&destruct_TVirtualObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualObject*)
   {
      return GenerateInitInstanceLocal((::TVirtualObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TVirtualObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TVirtualObject_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TVirtualObject*)0x0)->GetClass();
      TVirtualObject_TClassManip(theClass);
   return theClass;
   }

   static void TVirtualObject_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TZIPFile(void *p = 0);
   static void *newArray_TZIPFile(Long_t size, void *p);
   static void delete_TZIPFile(void *p);
   static void deleteArray_TZIPFile(void *p);
   static void destruct_TZIPFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TZIPFile*)
   {
      ::TZIPFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TZIPFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TZIPFile", ::TZIPFile::Class_Version(), "TZIPFile.h", 20,
                  typeid(::TZIPFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TZIPFile::Dictionary, isa_proxy, 4,
                  sizeof(::TZIPFile) );
      instance.SetNew(&new_TZIPFile);
      instance.SetNewArray(&newArray_TZIPFile);
      instance.SetDelete(&delete_TZIPFile);
      instance.SetDeleteArray(&deleteArray_TZIPFile);
      instance.SetDestructor(&destruct_TZIPFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TZIPFile*)
   {
      return GenerateInitInstanceLocal((::TZIPFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TZIPFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TZIPMember(void *p = 0);
   static void *newArray_TZIPMember(Long_t size, void *p);
   static void delete_TZIPMember(void *p);
   static void deleteArray_TZIPMember(void *p);
   static void destruct_TZIPMember(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TZIPMember*)
   {
      ::TZIPMember *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TZIPMember >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TZIPMember", ::TZIPMember::Class_Version(), "TZIPFile.h", 156,
                  typeid(::TZIPMember), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TZIPMember::Dictionary, isa_proxy, 4,
                  sizeof(::TZIPMember) );
      instance.SetNew(&new_TZIPMember);
      instance.SetNewArray(&newArray_TZIPMember);
      instance.SetDelete(&delete_TZIPMember);
      instance.SetDeleteArray(&deleteArray_TZIPMember);
      instance.SetDestructor(&destruct_TZIPMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TZIPMember*)
   {
      return GenerateInitInstanceLocal((::TZIPMember*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TZIPMember*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLExperimentalcLcLTBufferMerger(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLTBufferMerger(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLTBufferMerger(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLTBufferMerger(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::TBufferMerger*)
   {
      ::ROOT::Experimental::TBufferMerger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::TBufferMerger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::TBufferMerger", ::ROOT::Experimental::TBufferMerger::Class_Version(), "ROOT/TBufferMerger.hxx", 44,
                  typeid(::ROOT::Experimental::TBufferMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::TBufferMerger::Dictionary, isa_proxy, 16,
                  sizeof(::ROOT::Experimental::TBufferMerger) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLTBufferMerger);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLTBufferMerger);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLTBufferMerger);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLTBufferMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::TBufferMerger*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::TBufferMerger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMerger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLExperimentalcLcLTBufferMergerFile(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLTBufferMergerFile(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLTBufferMergerFile(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLTBufferMergerFile(TBuffer &buf, void *obj);
   static void reset_ROOTcLcLExperimentalcLcLTBufferMergerFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::TBufferMergerFile*)
   {
      ::ROOT::Experimental::TBufferMergerFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::TBufferMergerFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::TBufferMergerFile", ::ROOT::Experimental::TBufferMergerFile::Class_Version(), "ROOT/TBufferMerger.hxx", 105,
                  typeid(::ROOT::Experimental::TBufferMergerFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::TBufferMergerFile::Dictionary, isa_proxy, 16,
                  sizeof(::ROOT::Experimental::TBufferMergerFile) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLTBufferMergerFile);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLTBufferMergerFile);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLTBufferMergerFile);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLTBufferMergerFile);
      instance.SetResetAfterMerge(&reset_ROOTcLcLExperimentalcLcLTBufferMergerFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::TBufferMergerFile*)
   {
      return GenerateInitInstanceLocal((::ROOT::Experimental::TBufferMergerFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMergerFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArchiveFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArchiveFile::Class_Name()
{
   return "TArchiveFile";
}

//______________________________________________________________________________
const char *TArchiveFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArchiveFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArchiveFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArchiveFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArchiveFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArchiveFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArchiveFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArchiveFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArchiveMember::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArchiveMember::Class_Name()
{
   return "TArchiveMember";
}

//______________________________________________________________________________
const char *TArchiveMember::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArchiveMember*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArchiveMember::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArchiveMember*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArchiveMember::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArchiveMember*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArchiveMember::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArchiveMember*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBufferFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferFile::Class_Name()
{
   return "TBufferFile";
}

//______________________________________________________________________________
const char *TBufferFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBufferJSON::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferJSON::Class_Name()
{
   return "TBufferJSON";
}

//______________________________________________________________________________
const char *TBufferJSON::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferJSON*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferJSON::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferJSON*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferJSON::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferJSON*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferJSON::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferJSON*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDirectoryFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDirectoryFile::Class_Name()
{
   return "TDirectoryFile";
}

//______________________________________________________________________________
const char *TDirectoryFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDirectoryFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDirectoryFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDirectoryFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDirectoryFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDirectoryFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDirectoryFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDirectoryFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFPBlock::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFPBlock::Class_Name()
{
   return "TFPBlock";
}

//______________________________________________________________________________
const char *TFPBlock::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFPBlock*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFPBlock::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFPBlock*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFPBlock::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFPBlock*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFPBlock::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFPBlock*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFile::Class_Name()
{
   return "TFile";
}

//______________________________________________________________________________
const char *TFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileCacheRead::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileCacheRead::Class_Name()
{
   return "TFileCacheRead";
}

//______________________________________________________________________________
const char *TFileCacheRead::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheRead*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFileCacheRead::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheRead*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileCacheRead::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheRead*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileCacheRead::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheRead*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileCacheWrite::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileCacheWrite::Class_Name()
{
   return "TFileCacheWrite";
}

//______________________________________________________________________________
const char *TFileCacheWrite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheWrite*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFileCacheWrite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheWrite*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileCacheWrite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheWrite*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileCacheWrite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheWrite*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileMerger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileMerger::Class_Name()
{
   return "TFileMerger";
}

//______________________________________________________________________________
const char *TFileMerger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileMerger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFileMerger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileMerger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileMerger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileMerger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileMerger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileMerger*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFilePrefetch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFilePrefetch::Class_Name()
{
   return "TFilePrefetch";
}

//______________________________________________________________________________
const char *TFilePrefetch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFilePrefetch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFilePrefetch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFilePrefetch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFilePrefetch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFilePrefetch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFilePrefetch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFilePrefetch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFree::Class_Name()
{
   return "TFree";
}

//______________________________________________________________________________
const char *TFree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFree*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TKey::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TKey::Class_Name()
{
   return "TKey";
}

//______________________________________________________________________________
const char *TKey::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKey*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TKey::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKey*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKey::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKey*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKey::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKey*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TKeyMapFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TKeyMapFile::Class_Name()
{
   return "TKeyMapFile";
}

//______________________________________________________________________________
const char *TKeyMapFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKeyMapFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TKeyMapFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKeyMapFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKeyMapFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKeyMapFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKeyMapFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKeyMapFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLockFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLockFile::Class_Name()
{
   return "TLockFile";
}

//______________________________________________________________________________
const char *TLockFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLockFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLockFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLockFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLockFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLockFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLockFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLockFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMapFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMapFile::Class_Name()
{
   return "TMapFile";
}

//______________________________________________________________________________
const char *TMapFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMapFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMapFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMapFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMapFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMapFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMapFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMapFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMemFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMemFile::Class_Name()
{
   return "TMemFile";
}

//______________________________________________________________________________
const char *TMemFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMemFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMemFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMemFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMemFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMemFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMemFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMemFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStreamerInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerInfo::Class_Name()
{
   return "TStreamerInfo";
}

//______________________________________________________________________________
const char *TStreamerInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfo*)0x0)->GetClass(); }
   return fgIsA;
}

namespace TStreamerInfoActions {
//______________________________________________________________________________
atomic_TClass_ptr TConfiguredAction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TConfiguredAction::Class_Name()
{
   return "TStreamerInfoActions::TConfiguredAction";
}

//______________________________________________________________________________
const char *TConfiguredAction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguredAction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TConfiguredAction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguredAction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TConfiguredAction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguredAction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TConfiguredAction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguredAction*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TStreamerInfoActions
namespace TStreamerInfoActions {
//______________________________________________________________________________
atomic_TClass_ptr TActionSequence::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TActionSequence::Class_Name()
{
   return "TStreamerInfoActions::TActionSequence";
}

//______________________________________________________________________________
const char *TActionSequence::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TActionSequence*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TActionSequence::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TActionSequence*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActionSequence::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TActionSequence*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActionSequence::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TActionSequence*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace TStreamerInfoActions
//______________________________________________________________________________
atomic_TClass_ptr TZIPFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TZIPFile::Class_Name()
{
   return "TZIPFile";
}

//______________________________________________________________________________
const char *TZIPFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TZIPFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TZIPFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TZIPFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TZIPFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TZIPFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TZIPFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TZIPFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TZIPMember::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TZIPMember::Class_Name()
{
   return "TZIPMember";
}

//______________________________________________________________________________
const char *TZIPMember::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TZIPMember*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TZIPMember::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TZIPMember*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TZIPMember::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TZIPMember*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TZIPMember::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TZIPMember*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr TBufferMerger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferMerger::Class_Name()
{
   return "ROOT::Experimental::TBufferMerger";
}

//______________________________________________________________________________
const char *TBufferMerger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMerger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferMerger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMerger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferMerger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMerger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferMerger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMerger*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr TBufferMergerFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferMergerFile::Class_Name()
{
   return "ROOT::Experimental::TBufferMergerFile";
}

//______________________________________________________________________________
const char *TBufferMergerFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMergerFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferMergerFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMergerFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferMergerFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMergerFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferMergerFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::TBufferMergerFile*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
//______________________________________________________________________________
void TArchiveFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArchiveFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArchiveFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArchiveFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArchiveFile(void *p) {
      delete ((::TArchiveFile*)p);
   }
   static void deleteArray_TArchiveFile(void *p) {
      delete [] ((::TArchiveFile*)p);
   }
   static void destruct_TArchiveFile(void *p) {
      typedef ::TArchiveFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArchiveFile

//______________________________________________________________________________
void TArchiveMember::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArchiveMember.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArchiveMember::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArchiveMember::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArchiveMember(void *p) {
      return  p ? new(p) ::TArchiveMember : new ::TArchiveMember;
   }
   static void *newArray_TArchiveMember(Long_t nElements, void *p) {
      return p ? new(p) ::TArchiveMember[nElements] : new ::TArchiveMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArchiveMember(void *p) {
      delete ((::TArchiveMember*)p);
   }
   static void deleteArray_TArchiveMember(void *p) {
      delete [] ((::TArchiveMember*)p);
   }
   static void destruct_TArchiveMember(void *p) {
      typedef ::TArchiveMember current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArchiveMember

//______________________________________________________________________________
void TBufferFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBufferFile.

   TBuffer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TBufferFile(void *p) {
      delete ((::TBufferFile*)p);
   }
   static void deleteArray_TBufferFile(void *p) {
      delete [] ((::TBufferFile*)p);
   }
   static void destruct_TBufferFile(void *p) {
      typedef ::TBufferFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBufferFile(TBuffer &buf, void *obj) {
      ((::TBufferFile*)obj)->::TBufferFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBufferFile

//______________________________________________________________________________
void TBufferJSON::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBufferJSON.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TBuffer::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TBufferJSON::IsA());
   } else {
      R__c = R__b.WriteVersion(TBufferJSON::IsA(), kTRUE);
      TBuffer::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBufferJSON(void *p) {
      return  p ? new(p) ::TBufferJSON : new ::TBufferJSON;
   }
   static void *newArray_TBufferJSON(Long_t nElements, void *p) {
      return p ? new(p) ::TBufferJSON[nElements] : new ::TBufferJSON[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBufferJSON(void *p) {
      delete ((::TBufferJSON*)p);
   }
   static void deleteArray_TBufferJSON(void *p) {
      delete [] ((::TBufferJSON*)p);
   }
   static void destruct_TBufferJSON(void *p) {
      typedef ::TBufferJSON current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBufferJSON(TBuffer &buf, void *obj) {
      ((::TBufferJSON*)obj)->::TBufferJSON::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBufferJSON

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGenCollectionProxy(void *p) {
      delete ((::TGenCollectionProxy*)p);
   }
   static void deleteArray_TGenCollectionProxy(void *p) {
      delete [] ((::TGenCollectionProxy*)p);
   }
   static void destruct_TGenCollectionProxy(void *p) {
      typedef ::TGenCollectionProxy current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGenCollectionProxy(TBuffer &buf, void *obj) {
      ((::TGenCollectionProxy*)obj)->::TGenCollectionProxy::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGenCollectionProxy

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGenCollectionProxycLcLValue(void *p) {
      delete ((::TGenCollectionProxy::Value*)p);
   }
   static void deleteArray_TGenCollectionProxycLcLValue(void *p) {
      delete [] ((::TGenCollectionProxy::Value*)p);
   }
   static void destruct_TGenCollectionProxycLcLValue(void *p) {
      typedef ::TGenCollectionProxy::Value current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGenCollectionProxy::Value

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGenCollectionProxycLcLMethod(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TGenCollectionProxy::Method : new ::TGenCollectionProxy::Method;
   }
   static void *newArray_TGenCollectionProxycLcLMethod(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TGenCollectionProxy::Method[nElements] : new ::TGenCollectionProxy::Method[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGenCollectionProxycLcLMethod(void *p) {
      delete ((::TGenCollectionProxy::Method*)p);
   }
   static void deleteArray_TGenCollectionProxycLcLMethod(void *p) {
      delete [] ((::TGenCollectionProxy::Method*)p);
   }
   static void destruct_TGenCollectionProxycLcLMethod(void *p) {
      typedef ::TGenCollectionProxy::Method current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGenCollectionProxy::Method

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCollectionProxyFactory(void *p) {
      return  p ? new(p) ::TCollectionProxyFactory : new ::TCollectionProxyFactory;
   }
   static void *newArray_TCollectionProxyFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TCollectionProxyFactory[nElements] : new ::TCollectionProxyFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCollectionProxyFactory(void *p) {
      delete ((::TCollectionProxyFactory*)p);
   }
   static void deleteArray_TCollectionProxyFactory(void *p) {
      delete [] ((::TCollectionProxyFactory*)p);
   }
   static void destruct_TCollectionProxyFactory(void *p) {
      typedef ::TCollectionProxyFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionProxyFactory

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCollectionStreamer(void *p) {
      return  p ? new(p) ::TCollectionStreamer : new ::TCollectionStreamer;
   }
   static void *newArray_TCollectionStreamer(Long_t nElements, void *p) {
      return p ? new(p) ::TCollectionStreamer[nElements] : new ::TCollectionStreamer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCollectionStreamer(void *p) {
      delete ((::TCollectionStreamer*)p);
   }
   static void deleteArray_TCollectionStreamer(void *p) {
      delete [] ((::TCollectionStreamer*)p);
   }
   static void destruct_TCollectionStreamer(void *p) {
      typedef ::TCollectionStreamer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionStreamer

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCollectionClassStreamer(void *p) {
      return  p ? new(p) ::TCollectionClassStreamer : new ::TCollectionClassStreamer;
   }
   static void *newArray_TCollectionClassStreamer(Long_t nElements, void *p) {
      return p ? new(p) ::TCollectionClassStreamer[nElements] : new ::TCollectionClassStreamer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCollectionClassStreamer(void *p) {
      delete ((::TCollectionClassStreamer*)p);
   }
   static void deleteArray_TCollectionClassStreamer(void *p) {
      delete [] ((::TCollectionClassStreamer*)p);
   }
   static void destruct_TCollectionClassStreamer(void *p) {
      typedef ::TCollectionClassStreamer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionClassStreamer

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCollectionMemberStreamer(void *p) {
      return  p ? new(p) ::TCollectionMemberStreamer : new ::TCollectionMemberStreamer;
   }
   static void *newArray_TCollectionMemberStreamer(Long_t nElements, void *p) {
      return p ? new(p) ::TCollectionMemberStreamer[nElements] : new ::TCollectionMemberStreamer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCollectionMemberStreamer(void *p) {
      delete ((::TCollectionMemberStreamer*)p);
   }
   static void deleteArray_TCollectionMemberStreamer(void *p) {
      delete [] ((::TCollectionMemberStreamer*)p);
   }
   static void destruct_TCollectionMemberStreamer(void *p) {
      typedef ::TCollectionMemberStreamer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionMemberStreamer

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDirectoryFile(void *p) {
      return  p ? new(p) ::TDirectoryFile : new ::TDirectoryFile;
   }
   static void *newArray_TDirectoryFile(Long_t nElements, void *p) {
      return p ? new(p) ::TDirectoryFile[nElements] : new ::TDirectoryFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDirectoryFile(void *p) {
      delete ((::TDirectoryFile*)p);
   }
   static void deleteArray_TDirectoryFile(void *p) {
      delete [] ((::TDirectoryFile*)p);
   }
   static void destruct_TDirectoryFile(void *p) {
      typedef ::TDirectoryFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDirectoryFile(TBuffer &buf, void *obj) {
      ((::TDirectoryFile*)obj)->::TDirectoryFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TDirectoryFile(void *obj,TFileMergeInfo *info) {
      ((::TDirectoryFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TDirectoryFile

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEmulatedCollectionProxy(void *p) {
      delete ((::TEmulatedCollectionProxy*)p);
   }
   static void deleteArray_TEmulatedCollectionProxy(void *p) {
      delete [] ((::TEmulatedCollectionProxy*)p);
   }
   static void destruct_TEmulatedCollectionProxy(void *p) {
      typedef ::TEmulatedCollectionProxy current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEmulatedCollectionProxy(TBuffer &buf, void *obj) {
      ((::TEmulatedCollectionProxy*)obj)->::TEmulatedCollectionProxy::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEmulatedCollectionProxy

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEmulatedMapProxy(void *p) {
      delete ((::TEmulatedMapProxy*)p);
   }
   static void deleteArray_TEmulatedMapProxy(void *p) {
      delete [] ((::TEmulatedMapProxy*)p);
   }
   static void destruct_TEmulatedMapProxy(void *p) {
      typedef ::TEmulatedMapProxy current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEmulatedMapProxy(TBuffer &buf, void *obj) {
      ((::TEmulatedMapProxy*)obj)->::TEmulatedMapProxy::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEmulatedMapProxy

//______________________________________________________________________________
void TFPBlock::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFPBlock.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFPBlock::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFPBlock::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFPBlock(void *p) {
      delete ((::TFPBlock*)p);
   }
   static void deleteArray_TFPBlock(void *p) {
      delete [] ((::TFPBlock*)p);
   }
   static void destruct_TFPBlock(void *p) {
      typedef ::TFPBlock current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFPBlock

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFile(void *p) {
      return  p ? new(p) ::TFile : new ::TFile;
   }
   static void *newArray_TFile(Long_t nElements, void *p) {
      return p ? new(p) ::TFile[nElements] : new ::TFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFile(void *p) {
      delete ((::TFile*)p);
   }
   static void deleteArray_TFile(void *p) {
      delete [] ((::TFile*)p);
   }
   static void destruct_TFile(void *p) {
      typedef ::TFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFile(TBuffer &buf, void *obj) {
      ((::TFile*)obj)->::TFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TFile(void *obj,TFileMergeInfo *info) {
      ((::TFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TFile

//______________________________________________________________________________
void TFileCacheRead::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileCacheRead.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFileCacheRead::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFileCacheRead::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFileCacheRead(void *p) {
      return  p ? new(p) ::TFileCacheRead : new ::TFileCacheRead;
   }
   static void *newArray_TFileCacheRead(Long_t nElements, void *p) {
      return p ? new(p) ::TFileCacheRead[nElements] : new ::TFileCacheRead[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFileCacheRead(void *p) {
      delete ((::TFileCacheRead*)p);
   }
   static void deleteArray_TFileCacheRead(void *p) {
      delete [] ((::TFileCacheRead*)p);
   }
   static void destruct_TFileCacheRead(void *p) {
      typedef ::TFileCacheRead current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFileCacheRead

//______________________________________________________________________________
void TFileCacheWrite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileCacheWrite.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFileCacheWrite::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFileCacheWrite::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFileCacheWrite(void *p) {
      return  p ? new(p) ::TFileCacheWrite : new ::TFileCacheWrite;
   }
   static void *newArray_TFileCacheWrite(Long_t nElements, void *p) {
      return p ? new(p) ::TFileCacheWrite[nElements] : new ::TFileCacheWrite[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFileCacheWrite(void *p) {
      delete ((::TFileCacheWrite*)p);
   }
   static void deleteArray_TFileCacheWrite(void *p) {
      delete [] ((::TFileCacheWrite*)p);
   }
   static void destruct_TFileCacheWrite(void *p) {
      typedef ::TFileCacheWrite current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFileCacheWrite

//______________________________________________________________________________
void TFileMerger::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileMerger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFileMerger::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFileMerger::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFileMerger(void *p) {
      return  p ? new(p) ::TFileMerger : new ::TFileMerger;
   }
   static void *newArray_TFileMerger(Long_t nElements, void *p) {
      return p ? new(p) ::TFileMerger[nElements] : new ::TFileMerger[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFileMerger(void *p) {
      delete ((::TFileMerger*)p);
   }
   static void deleteArray_TFileMerger(void *p) {
      delete [] ((::TFileMerger*)p);
   }
   static void destruct_TFileMerger(void *p) {
      typedef ::TFileMerger current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TFileMerger(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TFileMerger*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TFileMerger

//______________________________________________________________________________
void TFilePrefetch::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFilePrefetch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFilePrefetch::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFilePrefetch::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFilePrefetch(void *p) {
      delete ((::TFilePrefetch*)p);
   }
   static void deleteArray_TFilePrefetch(void *p) {
      delete [] ((::TFilePrefetch*)p);
   }
   static void destruct_TFilePrefetch(void *p) {
      typedef ::TFilePrefetch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFilePrefetch

//______________________________________________________________________________
void TFree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFree.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fFirst;
      R__b >> fLast;
      R__b.CheckByteCount(R__s, R__c, TFree::IsA());
   } else {
      R__c = R__b.WriteVersion(TFree::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fFirst;
      R__b << fLast;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFree(void *p) {
      return  p ? new(p) ::TFree : new ::TFree;
   }
   static void *newArray_TFree(Long_t nElements, void *p) {
      return p ? new(p) ::TFree[nElements] : new ::TFree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFree(void *p) {
      delete ((::TFree*)p);
   }
   static void deleteArray_TFree(void *p) {
      delete [] ((::TFree*)p);
   }
   static void destruct_TFree(void *p) {
      typedef ::TFree current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFree(TBuffer &buf, void *obj) {
      ((::TFree*)obj)->::TFree::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFree

namespace ROOT {
   // Wrappers around operator new
   static void *new_TKey(void *p) {
      return  p ? new(p) ::TKey : new ::TKey;
   }
   static void *newArray_TKey(Long_t nElements, void *p) {
      return p ? new(p) ::TKey[nElements] : new ::TKey[nElements];
   }
   // Wrapper around operator delete
   static void delete_TKey(void *p) {
      delete ((::TKey*)p);
   }
   static void deleteArray_TKey(void *p) {
      delete [] ((::TKey*)p);
   }
   static void destruct_TKey(void *p) {
      typedef ::TKey current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TKey(TBuffer &buf, void *obj) {
      ((::TKey*)obj)->::TKey::Streamer(buf);
   }
} // end of namespace ROOT for class ::TKey

//______________________________________________________________________________
void TKeyMapFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKeyMapFile.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TKeyMapFile(void *p) {
      return  p ? new(p) ::TKeyMapFile : new ::TKeyMapFile;
   }
   static void *newArray_TKeyMapFile(Long_t nElements, void *p) {
      return p ? new(p) ::TKeyMapFile[nElements] : new ::TKeyMapFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TKeyMapFile(void *p) {
      delete ((::TKeyMapFile*)p);
   }
   static void deleteArray_TKeyMapFile(void *p) {
      delete [] ((::TKeyMapFile*)p);
   }
   static void destruct_TKeyMapFile(void *p) {
      typedef ::TKeyMapFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TKeyMapFile(TBuffer &buf, void *obj) {
      ((::TKeyMapFile*)obj)->::TKeyMapFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TKeyMapFile

//______________________________________________________________________________
void TLockFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLockFile.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TLockFile(void *p) {
      delete ((::TLockFile*)p);
   }
   static void deleteArray_TLockFile(void *p) {
      delete [] ((::TLockFile*)p);
   }
   static void destruct_TLockFile(void *p) {
      typedef ::TLockFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLockFile(TBuffer &buf, void *obj) {
      ((::TLockFile*)obj)->::TLockFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLockFile

//______________________________________________________________________________
void TMapFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMapFile.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMapFile(void *p) {
      delete ((::TMapFile*)p);
   }
   static void deleteArray_TMapFile(void *p) {
      delete [] ((::TMapFile*)p);
   }
   static void destruct_TMapFile(void *p) {
      typedef ::TMapFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMapFile(TBuffer &buf, void *obj) {
      ((::TMapFile*)obj)->::TMapFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMapFile

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMapRec(void *p) {
      delete ((::TMapRec*)p);
   }
   static void deleteArray_TMapRec(void *p) {
      delete [] ((::TMapRec*)p);
   }
   static void destruct_TMapRec(void *p) {
      typedef ::TMapRec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMapRec

//______________________________________________________________________________
void TMemFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMemFile.

   TFile::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMemFile(void *p) {
      delete ((::TMemFile*)p);
   }
   static void deleteArray_TMemFile(void *p) {
      delete [] ((::TMemFile*)p);
   }
   static void destruct_TMemFile(void *p) {
      typedef ::TMemFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMemFile(TBuffer &buf, void *obj) {
      ((::TMemFile*)obj)->::TMemFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TMemFile(void *obj,TFileMergeInfo *info) {
      ((::TMemFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TMemFile

namespace ROOT {
   // Wrappers around operator new
   static void *new_TStreamerInfo(void *p) {
      return  p ? new(p) ::TStreamerInfo : new ::TStreamerInfo;
   }
   static void *newArray_TStreamerInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TStreamerInfo[nElements] : new ::TStreamerInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TStreamerInfo(void *p) {
      delete ((::TStreamerInfo*)p);
   }
   static void deleteArray_TStreamerInfo(void *p) {
      delete [] ((::TStreamerInfo*)p);
   }
   static void destruct_TStreamerInfo(void *p) {
      typedef ::TStreamerInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStreamerInfo(TBuffer &buf, void *obj) {
      ((::TStreamerInfo*)obj)->::TStreamerInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStreamerInfo

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStreamerInfoActionscLcLTConfiguration(void *p) {
      delete ((::TStreamerInfoActions::TConfiguration*)p);
   }
   static void deleteArray_TStreamerInfoActionscLcLTConfiguration(void *p) {
      delete [] ((::TStreamerInfoActions::TConfiguration*)p);
   }
   static void destruct_TStreamerInfoActionscLcLTConfiguration(void *p) {
      typedef ::TStreamerInfoActions::TConfiguration current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TStreamerInfoActions::TConfiguration

namespace TStreamerInfoActions {
//______________________________________________________________________________
void TConfiguredAction::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStreamerInfoActions::TConfiguredAction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TStreamerInfoActions::TConfiguredAction::Class(),this);
   } else {
      R__b.WriteClassBuffer(TStreamerInfoActions::TConfiguredAction::Class(),this);
   }
}

} // namespace TStreamerInfoActions
namespace ROOT {
   // Wrappers around operator new
   static void *new_TStreamerInfoActionscLcLTConfiguredAction(void *p) {
      return  p ? new(p) ::TStreamerInfoActions::TConfiguredAction : new ::TStreamerInfoActions::TConfiguredAction;
   }
   static void *newArray_TStreamerInfoActionscLcLTConfiguredAction(Long_t nElements, void *p) {
      return p ? new(p) ::TStreamerInfoActions::TConfiguredAction[nElements] : new ::TStreamerInfoActions::TConfiguredAction[nElements];
   }
   // Wrapper around operator delete
   static void delete_TStreamerInfoActionscLcLTConfiguredAction(void *p) {
      delete ((::TStreamerInfoActions::TConfiguredAction*)p);
   }
   static void deleteArray_TStreamerInfoActionscLcLTConfiguredAction(void *p) {
      delete [] ((::TStreamerInfoActions::TConfiguredAction*)p);
   }
   static void destruct_TStreamerInfoActionscLcLTConfiguredAction(void *p) {
      typedef ::TStreamerInfoActions::TConfiguredAction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TStreamerInfoActions::TConfiguredAction

namespace TStreamerInfoActions {
//______________________________________________________________________________
void TActionSequence::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStreamerInfoActions::TActionSequence.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TStreamerInfoActions::TActionSequence::Class(),this);
   } else {
      R__b.WriteClassBuffer(TStreamerInfoActions::TActionSequence::Class(),this);
   }
}

} // namespace TStreamerInfoActions
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStreamerInfoActionscLcLTActionSequence(void *p) {
      delete ((::TStreamerInfoActions::TActionSequence*)p);
   }
   static void deleteArray_TStreamerInfoActionscLcLTActionSequence(void *p) {
      delete [] ((::TStreamerInfoActions::TActionSequence*)p);
   }
   static void destruct_TStreamerInfoActionscLcLTActionSequence(void *p) {
      typedef ::TStreamerInfoActions::TActionSequence current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TStreamerInfoActions::TActionSequence

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualArray(void *p) {
      delete ((::TVirtualArray*)p);
   }
   static void deleteArray_TVirtualArray(void *p) {
      delete [] ((::TVirtualArray*)p);
   }
   static void destruct_TVirtualArray(void *p) {
      typedef ::TVirtualArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualArray

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualObject(void *p) {
      delete ((::TVirtualObject*)p);
   }
   static void deleteArray_TVirtualObject(void *p) {
      delete [] ((::TVirtualObject*)p);
   }
   static void destruct_TVirtualObject(void *p) {
      typedef ::TVirtualObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualObject

//______________________________________________________________________________
void TZIPFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TZIPFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TZIPFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TZIPFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TZIPFile(void *p) {
      return  p ? new(p) ::TZIPFile : new ::TZIPFile;
   }
   static void *newArray_TZIPFile(Long_t nElements, void *p) {
      return p ? new(p) ::TZIPFile[nElements] : new ::TZIPFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TZIPFile(void *p) {
      delete ((::TZIPFile*)p);
   }
   static void deleteArray_TZIPFile(void *p) {
      delete [] ((::TZIPFile*)p);
   }
   static void destruct_TZIPFile(void *p) {
      typedef ::TZIPFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TZIPFile

//______________________________________________________________________________
void TZIPMember::Streamer(TBuffer &R__b)
{
   // Stream an object of class TZIPMember.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TZIPMember::Class(),this);
   } else {
      R__b.WriteClassBuffer(TZIPMember::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TZIPMember(void *p) {
      return  p ? new(p) ::TZIPMember : new ::TZIPMember;
   }
   static void *newArray_TZIPMember(Long_t nElements, void *p) {
      return p ? new(p) ::TZIPMember[nElements] : new ::TZIPMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_TZIPMember(void *p) {
      delete ((::TZIPMember*)p);
   }
   static void deleteArray_TZIPMember(void *p) {
      delete [] ((::TZIPMember*)p);
   }
   static void destruct_TZIPMember(void *p) {
      typedef ::TZIPMember current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TZIPMember

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void TBufferMerger::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::TBufferMerger.

   ::Error("ROOT::Experimental::TBufferMerger::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLTBufferMerger(void *p) {
      delete ((::ROOT::Experimental::TBufferMerger*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLTBufferMerger(void *p) {
      delete [] ((::ROOT::Experimental::TBufferMerger*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLTBufferMerger(void *p) {
      typedef ::ROOT::Experimental::TBufferMerger current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLTBufferMerger(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::TBufferMerger*)obj)->::ROOT::Experimental::TBufferMerger::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::TBufferMerger

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void TBufferMergerFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::TBufferMergerFile.

   TMemFile::Streamer(R__b);
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLTBufferMergerFile(void *p) {
      delete ((::ROOT::Experimental::TBufferMergerFile*)p);
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLTBufferMergerFile(void *p) {
      delete [] ((::ROOT::Experimental::TBufferMergerFile*)p);
   }
   static void destruct_ROOTcLcLExperimentalcLcLTBufferMergerFile(void *p) {
      typedef ::ROOT::Experimental::TBufferMergerFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLTBufferMergerFile(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::TBufferMergerFile*)obj)->::ROOT::Experimental::TBufferMergerFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_ROOTcLcLExperimentalcLcLTBufferMergerFile(void *obj,TFileMergeInfo *info) {
      ((::ROOT::Experimental::TBufferMergerFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::TBufferMergerFile

namespace {
  void TriggerDictionaryInitialization_libRIO_Impl() {
    static const char* headers[] = {
"TArchiveFile.h",
"TBufferFile.h",
"TBufferJSON.h",
"TCollectionProxyFactory.h",
"TContainerConverters.h",
"TDirectoryFile.h",
"TEmulatedCollectionProxy.h",
"TEmulatedMapProxy.h",
"TFPBlock.h",
"TFile.h",
"TFileCacheRead.h",
"TFileCacheWrite.h",
"TFileMerger.h",
"TFilePrefetch.h",
"TFree.h",
"TGenCollectionProxy.h",
"TGenCollectionStreamer.h",
"TKey.h",
"TKeyMapFile.h",
"TLockFile.h",
"TMakeProject.h",
"TMapFile.h",
"TMemFile.h",
"TStreamerInfo.h",
"TStreamerInfoActions.h",
"TVirtualArray.h",
"TVirtualCollectionIterators.h",
"TVirtualObject.h",
"TZIPFile.h",
"ROOT/TBufferMerger.hxx",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRIO dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TArchiveFile.h"
#include "TBufferFile.h"
#include "TBufferJSON.h"
#include "TCollectionProxyFactory.h"
#include "TContainerConverters.h"
#include "TDirectoryFile.h"
#include "TEmulatedCollectionProxy.h"
#include "TEmulatedMapProxy.h"
#include "TFPBlock.h"
#include "TFile.h"
#include "TFileCacheRead.h"
#include "TFileCacheWrite.h"
#include "TFileMerger.h"
#include "TFilePrefetch.h"
#include "TFree.h"
#include "TGenCollectionProxy.h"
#include "TGenCollectionStreamer.h"
#include "TKey.h"
#include "TKeyMapFile.h"
#include "TLockFile.h"
#include "TMakeProject.h"
#include "TMapFile.h"
#include "TMemFile.h"
#include "TStreamerInfo.h"
#include "TStreamerInfoActions.h"
#include "TVirtualArray.h"
#include "TVirtualCollectionIterators.h"
#include "TVirtualObject.h"
#include "TZIPFile.h"
#include "ROOT/TBufferMerger.hxx"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ROOT::Experimental::TBufferMerger", payloadCode, "@",
"ROOT::Experimental::TBufferMergerFile", payloadCode, "@",
"TArchiveFile", payloadCode, "@",
"TArchiveMember", payloadCode, "@",
"TBufferFile", payloadCode, "@",
"TBufferJSON", payloadCode, "@",
"TCollectionClassStreamer", payloadCode, "@",
"TCollectionMemberStreamer", payloadCode, "@",
"TCollectionProxyFactory", payloadCode, "@",
"TCollectionStreamer", payloadCode, "@",
"TDirectoryFile", payloadCode, "@",
"TEmulatedCollectionProxy", payloadCode, "@",
"TEmulatedMapProxy", payloadCode, "@",
"TFPBlock", payloadCode, "@",
"TFile", payloadCode, "@",
"TFileCacheRead", payloadCode, "@",
"TFileCacheWrite", payloadCode, "@",
"TFileMerger", payloadCode, "@",
"TFilePrefetch", payloadCode, "@",
"TFree", payloadCode, "@",
"TGenCollectionProxy", payloadCode, "@",
"TGenCollectionProxy::Method", payloadCode, "@",
"TGenCollectionProxy::Value", payloadCode, "@",
"TKey", payloadCode, "@",
"TKeyMapFile", payloadCode, "@",
"TLockFile", payloadCode, "@",
"TMapFile", payloadCode, "@",
"TMapRec", payloadCode, "@",
"TMemFile", payloadCode, "@",
"TStreamerInfo", payloadCode, "@",
"TStreamerInfoActions::TActionSequence", payloadCode, "@",
"TStreamerInfoActions::TConfiguration", payloadCode, "@",
"TStreamerInfoActions::TConfiguredAction", payloadCode, "@",
"TVirtualArray", payloadCode, "@",
"TVirtualObject", payloadCode, "@",
"TZIPFile", payloadCode, "@",
"TZIPMember", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRIO",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRIO_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRIO_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRIO() {
  TriggerDictionaryInitialization_libRIO_Impl();
}
