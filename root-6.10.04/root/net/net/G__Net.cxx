// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Net

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
#include "NetErrors.h"
#include "RRemoteProtocol.h"
#include "TApplicationRemote.h"
#include "TApplicationServer.h"
#include "TFTP.h"
#include "TFileStager.h"
#include "TGrid.h"
#include "TGridCollection.h"
#include "TGridJDL.h"
#include "TGridJob.h"
#include "TGridJobStatus.h"
#include "TGridJobStatusList.h"
#include "TGridResult.h"
#include "TMessage.h"
#include "TMonitor.h"
#include "TNetFile.h"
#include "TNetFileStager.h"
#include "TPServerSocket.h"
#include "TPSocket.h"
#include "TParallelMergingFile.h"
#include "TS3HTTPRequest.h"
#include "TS3WebFile.h"
#include "TSQLColumnInfo.h"
#include "TSQLMonitoring.h"
#include "TSQLResult.h"
#include "TSQLRow.h"
#include "TSQLServer.h"
#include "TSQLStatement.h"
#include "TSQLTableInfo.h"
#include "TSSLSocket.h"
#include "TSecContext.h"
#include "TServerSocket.h"
#include "TSocket.h"
#include "TUDPSocket.h"
#include "TWebFile.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TMessage(void *p = 0);
   static void *newArray_TMessage(Long_t size, void *p);
   static void delete_TMessage(void *p);
   static void deleteArray_TMessage(void *p);
   static void destruct_TMessage(void *p);
   static void streamer_TMessage(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMessage*)
   {
      ::TMessage *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMessage >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMessage", ::TMessage::Class_Version(), "TMessage.h", 32,
                  typeid(::TMessage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMessage::Dictionary, isa_proxy, 16,
                  sizeof(::TMessage) );
      instance.SetNew(&new_TMessage);
      instance.SetNewArray(&newArray_TMessage);
      instance.SetDelete(&delete_TMessage);
      instance.SetDeleteArray(&deleteArray_TMessage);
      instance.SetDestructor(&destruct_TMessage);
      instance.SetStreamerFunc(&streamer_TMessage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMessage*)
   {
      return GenerateInitInstanceLocal((::TMessage*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMessage*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TApplicationRemote(void *p);
   static void deleteArray_TApplicationRemote(void *p);
   static void destruct_TApplicationRemote(void *p);
   static void streamer_TApplicationRemote(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TApplicationRemote*)
   {
      ::TApplicationRemote *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TApplicationRemote >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TApplicationRemote", ::TApplicationRemote::Class_Version(), "TApplicationRemote.h", 42,
                  typeid(::TApplicationRemote), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TApplicationRemote::Dictionary, isa_proxy, 16,
                  sizeof(::TApplicationRemote) );
      instance.SetDelete(&delete_TApplicationRemote);
      instance.SetDeleteArray(&deleteArray_TApplicationRemote);
      instance.SetDestructor(&destruct_TApplicationRemote);
      instance.SetStreamerFunc(&streamer_TApplicationRemote);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TApplicationRemote*)
   {
      return GenerateInitInstanceLocal((::TApplicationRemote*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TApplicationRemote*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TApplicationServer(void *p);
   static void deleteArray_TApplicationServer(void *p);
   static void destruct_TApplicationServer(void *p);
   static void streamer_TApplicationServer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TApplicationServer*)
   {
      ::TApplicationServer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TApplicationServer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TApplicationServer", ::TApplicationServer::Class_Version(), "TApplicationServer.h", 34,
                  typeid(::TApplicationServer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TApplicationServer::Dictionary, isa_proxy, 16,
                  sizeof(::TApplicationServer) );
      instance.SetDelete(&delete_TApplicationServer);
      instance.SetDeleteArray(&deleteArray_TApplicationServer);
      instance.SetDestructor(&destruct_TApplicationServer);
      instance.SetStreamerFunc(&streamer_TApplicationServer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TApplicationServer*)
   {
      return GenerateInitInstanceLocal((::TApplicationServer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TApplicationServer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFTP(void *p);
   static void deleteArray_TFTP(void *p);
   static void destruct_TFTP(void *p);
   static void streamer_TFTP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFTP*)
   {
      ::TFTP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFTP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFTP", ::TFTP::Class_Version(), "TFTP.h", 34,
                  typeid(::TFTP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFTP::Dictionary, isa_proxy, 16,
                  sizeof(::TFTP) );
      instance.SetDelete(&delete_TFTP);
      instance.SetDeleteArray(&deleteArray_TFTP);
      instance.SetDestructor(&destruct_TFTP);
      instance.SetStreamerFunc(&streamer_TFTP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFTP*)
   {
      return GenerateInitInstanceLocal((::TFTP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFTP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFileStager(void *p);
   static void deleteArray_TFileStager(void *p);
   static void destruct_TFileStager(void *p);
   static void streamer_TFileStager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileStager*)
   {
      ::TFileStager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileStager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFileStager", ::TFileStager::Class_Version(), "TFileStager.h", 36,
                  typeid(::TFileStager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileStager::Dictionary, isa_proxy, 16,
                  sizeof(::TFileStager) );
      instance.SetDelete(&delete_TFileStager);
      instance.SetDeleteArray(&deleteArray_TFileStager);
      instance.SetDestructor(&destruct_TFileStager);
      instance.SetStreamerFunc(&streamer_TFileStager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileStager*)
   {
      return GenerateInitInstanceLocal((::TFileStager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFileStager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGridJob(void *p);
   static void deleteArray_TGridJob(void *p);
   static void destruct_TGridJob(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGridJob*)
   {
      ::TGridJob *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGridJob >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGridJob", ::TGridJob::Class_Version(), "TGridJob.h", 31,
                  typeid(::TGridJob), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGridJob::Dictionary, isa_proxy, 4,
                  sizeof(::TGridJob) );
      instance.SetDelete(&delete_TGridJob);
      instance.SetDeleteArray(&deleteArray_TGridJob);
      instance.SetDestructor(&destruct_TGridJob);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGridJob*)
   {
      return GenerateInitInstanceLocal((::TGridJob*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGridJob*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGrid(void *p = 0);
   static void *newArray_TGrid(Long_t size, void *p);
   static void delete_TGrid(void *p);
   static void deleteArray_TGrid(void *p);
   static void destruct_TGrid(void *p);
   static void streamer_TGrid(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGrid*)
   {
      ::TGrid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGrid >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGrid", ::TGrid::Class_Version(), "TGrid.h", 45,
                  typeid(::TGrid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGrid::Dictionary, isa_proxy, 16,
                  sizeof(::TGrid) );
      instance.SetNew(&new_TGrid);
      instance.SetNewArray(&newArray_TGrid);
      instance.SetDelete(&delete_TGrid);
      instance.SetDeleteArray(&deleteArray_TGrid);
      instance.SetDestructor(&destruct_TGrid);
      instance.SetStreamerFunc(&streamer_TGrid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGrid*)
   {
      return GenerateInitInstanceLocal((::TGrid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGrid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGridCollection(void *p = 0);
   static void *newArray_TGridCollection(Long_t size, void *p);
   static void delete_TGridCollection(void *p);
   static void deleteArray_TGridCollection(void *p);
   static void destruct_TGridCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGridCollection*)
   {
      ::TGridCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGridCollection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGridCollection", ::TGridCollection::Class_Version(), "TGridCollection.h", 34,
                  typeid(::TGridCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGridCollection::Dictionary, isa_proxy, 4,
                  sizeof(::TGridCollection) );
      instance.SetNew(&new_TGridCollection);
      instance.SetNewArray(&newArray_TGridCollection);
      instance.SetDelete(&delete_TGridCollection);
      instance.SetDeleteArray(&deleteArray_TGridCollection);
      instance.SetDestructor(&destruct_TGridCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGridCollection*)
   {
      return GenerateInitInstanceLocal((::TGridCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGridCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGridJDL(void *p);
   static void deleteArray_TGridJDL(void *p);
   static void destruct_TGridJDL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGridJDL*)
   {
      ::TGridJDL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGridJDL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGridJDL", ::TGridJDL::Class_Version(), "TGridJDL.h", 32,
                  typeid(::TGridJDL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGridJDL::Dictionary, isa_proxy, 4,
                  sizeof(::TGridJDL) );
      instance.SetDelete(&delete_TGridJDL);
      instance.SetDeleteArray(&deleteArray_TGridJDL);
      instance.SetDestructor(&destruct_TGridJDL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGridJDL*)
   {
      return GenerateInitInstanceLocal((::TGridJDL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGridJDL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGridJobStatus(void *p);
   static void deleteArray_TGridJobStatus(void *p);
   static void destruct_TGridJobStatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGridJobStatus*)
   {
      ::TGridJobStatus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGridJobStatus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGridJobStatus", ::TGridJobStatus::Class_Version(), "TGridJobStatus.h", 26,
                  typeid(::TGridJobStatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGridJobStatus::Dictionary, isa_proxy, 4,
                  sizeof(::TGridJobStatus) );
      instance.SetDelete(&delete_TGridJobStatus);
      instance.SetDeleteArray(&deleteArray_TGridJobStatus);
      instance.SetDestructor(&destruct_TGridJobStatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGridJobStatus*)
   {
      return GenerateInitInstanceLocal((::TGridJobStatus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGridJobStatus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGridJobStatusList(void *p = 0);
   static void *newArray_TGridJobStatusList(Long_t size, void *p);
   static void delete_TGridJobStatusList(void *p);
   static void deleteArray_TGridJobStatusList(void *p);
   static void destruct_TGridJobStatusList(void *p);
   static Long64_t merge_TGridJobStatusList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGridJobStatusList*)
   {
      ::TGridJobStatusList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGridJobStatusList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGridJobStatusList", ::TGridJobStatusList::Class_Version(), "TGridJobStatusList.h", 30,
                  typeid(::TGridJobStatusList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGridJobStatusList::Dictionary, isa_proxy, 4,
                  sizeof(::TGridJobStatusList) );
      instance.SetNew(&new_TGridJobStatusList);
      instance.SetNewArray(&newArray_TGridJobStatusList);
      instance.SetDelete(&delete_TGridJobStatusList);
      instance.SetDeleteArray(&deleteArray_TGridJobStatusList);
      instance.SetDestructor(&destruct_TGridJobStatusList);
      instance.SetMerge(&merge_TGridJobStatusList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGridJobStatusList*)
   {
      return GenerateInitInstanceLocal((::TGridJobStatusList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGridJobStatusList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGridResult(void *p = 0);
   static void *newArray_TGridResult(Long_t size, void *p);
   static void delete_TGridResult(void *p);
   static void deleteArray_TGridResult(void *p);
   static void destruct_TGridResult(void *p);
   static Long64_t merge_TGridResult(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGridResult*)
   {
      ::TGridResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGridResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGridResult", ::TGridResult::Class_Version(), "TGridResult.h", 31,
                  typeid(::TGridResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGridResult::Dictionary, isa_proxy, 4,
                  sizeof(::TGridResult) );
      instance.SetNew(&new_TGridResult);
      instance.SetNewArray(&newArray_TGridResult);
      instance.SetDelete(&delete_TGridResult);
      instance.SetDeleteArray(&deleteArray_TGridResult);
      instance.SetDestructor(&destruct_TGridResult);
      instance.SetMerge(&merge_TGridResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGridResult*)
   {
      return GenerateInitInstanceLocal((::TGridResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGridResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMonitor(void *p = 0);
   static void *newArray_TMonitor(Long_t size, void *p);
   static void delete_TMonitor(void *p);
   static void deleteArray_TMonitor(void *p);
   static void destruct_TMonitor(void *p);
   static void streamer_TMonitor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMonitor*)
   {
      ::TMonitor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMonitor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMonitor", ::TMonitor::Class_Version(), "TMonitor.h", 36,
                  typeid(::TMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMonitor::Dictionary, isa_proxy, 16,
                  sizeof(::TMonitor) );
      instance.SetNew(&new_TMonitor);
      instance.SetNewArray(&newArray_TMonitor);
      instance.SetDelete(&delete_TMonitor);
      instance.SetDeleteArray(&deleteArray_TMonitor);
      instance.SetDestructor(&destruct_TMonitor);
      instance.SetStreamerFunc(&streamer_TMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMonitor*)
   {
      return GenerateInitInstanceLocal((::TMonitor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMonitor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNetFile(void *p = 0);
   static void *newArray_TNetFile(Long_t size, void *p);
   static void delete_TNetFile(void *p);
   static void deleteArray_TNetFile(void *p);
   static void destruct_TNetFile(void *p);
   static void streamer_TNetFile(TBuffer &buf, void *obj);
   static void reset_TNetFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNetFile*)
   {
      ::TNetFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNetFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNetFile", ::TNetFile::Class_Version(), "TNetFile.h", 34,
                  typeid(::TNetFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNetFile::Dictionary, isa_proxy, 16,
                  sizeof(::TNetFile) );
      instance.SetNew(&new_TNetFile);
      instance.SetNewArray(&newArray_TNetFile);
      instance.SetDelete(&delete_TNetFile);
      instance.SetDeleteArray(&deleteArray_TNetFile);
      instance.SetDestructor(&destruct_TNetFile);
      instance.SetStreamerFunc(&streamer_TNetFile);
      instance.SetResetAfterMerge(&reset_TNetFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNetFile*)
   {
      return GenerateInitInstanceLocal((::TNetFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNetFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNetSystem(void *p = 0);
   static void *newArray_TNetSystem(Long_t size, void *p);
   static void delete_TNetSystem(void *p);
   static void deleteArray_TNetSystem(void *p);
   static void destruct_TNetSystem(void *p);
   static void streamer_TNetSystem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNetSystem*)
   {
      ::TNetSystem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNetSystem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNetSystem", ::TNetSystem::Class_Version(), "TNetFile.h", 85,
                  typeid(::TNetSystem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNetSystem::Dictionary, isa_proxy, 16,
                  sizeof(::TNetSystem) );
      instance.SetNew(&new_TNetSystem);
      instance.SetNewArray(&newArray_TNetSystem);
      instance.SetDelete(&delete_TNetSystem);
      instance.SetDeleteArray(&deleteArray_TNetSystem);
      instance.SetDestructor(&destruct_TNetSystem);
      instance.SetStreamerFunc(&streamer_TNetSystem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNetSystem*)
   {
      return GenerateInitInstanceLocal((::TNetSystem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNetSystem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNetFileStager(void *p = 0);
   static void *newArray_TNetFileStager(Long_t size, void *p);
   static void delete_TNetFileStager(void *p);
   static void deleteArray_TNetFileStager(void *p);
   static void destruct_TNetFileStager(void *p);
   static void streamer_TNetFileStager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNetFileStager*)
   {
      ::TNetFileStager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNetFileStager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNetFileStager", ::TNetFileStager::Class_Version(), "TNetFileStager.h", 28,
                  typeid(::TNetFileStager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNetFileStager::Dictionary, isa_proxy, 16,
                  sizeof(::TNetFileStager) );
      instance.SetNew(&new_TNetFileStager);
      instance.SetNewArray(&newArray_TNetFileStager);
      instance.SetDelete(&delete_TNetFileStager);
      instance.SetDeleteArray(&deleteArray_TNetFileStager);
      instance.SetDestructor(&destruct_TNetFileStager);
      instance.SetStreamerFunc(&streamer_TNetFileStager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNetFileStager*)
   {
      return GenerateInitInstanceLocal((::TNetFileStager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNetFileStager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSecContext(void *p);
   static void deleteArray_TSecContext(void *p);
   static void destruct_TSecContext(void *p);
   static void streamer_TSecContext(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSecContext*)
   {
      ::TSecContext *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSecContext >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSecContext", ::TSecContext::Class_Version(), "TSecContext.h", 36,
                  typeid(::TSecContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSecContext::Dictionary, isa_proxy, 16,
                  sizeof(::TSecContext) );
      instance.SetDelete(&delete_TSecContext);
      instance.SetDeleteArray(&deleteArray_TSecContext);
      instance.SetDestructor(&destruct_TSecContext);
      instance.SetStreamerFunc(&streamer_TSecContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSecContext*)
   {
      return GenerateInitInstanceLocal((::TSecContext*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSecContext*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSecContextCleanup(void *p);
   static void deleteArray_TSecContextCleanup(void *p);
   static void destruct_TSecContextCleanup(void *p);
   static void streamer_TSecContextCleanup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSecContextCleanup*)
   {
      ::TSecContextCleanup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSecContextCleanup >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSecContextCleanup", ::TSecContextCleanup::Class_Version(), "TSecContext.h", 109,
                  typeid(::TSecContextCleanup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSecContextCleanup::Dictionary, isa_proxy, 16,
                  sizeof(::TSecContextCleanup) );
      instance.SetDelete(&delete_TSecContextCleanup);
      instance.SetDeleteArray(&deleteArray_TSecContextCleanup);
      instance.SetDestructor(&destruct_TSecContextCleanup);
      instance.SetStreamerFunc(&streamer_TSecContextCleanup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSecContextCleanup*)
   {
      return GenerateInitInstanceLocal((::TSecContextCleanup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSecContextCleanup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSocket(void *p);
   static void deleteArray_TSocket(void *p);
   static void destruct_TSocket(void *p);
   static void streamer_TSocket(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSocket*)
   {
      ::TSocket *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSocket >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSocket", ::TSocket::Class_Version(), "TSocket.h", 60,
                  typeid(::TSocket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSocket::Dictionary, isa_proxy, 16,
                  sizeof(::TSocket) );
      instance.SetDelete(&delete_TSocket);
      instance.SetDeleteArray(&deleteArray_TSocket);
      instance.SetDestructor(&destruct_TSocket);
      instance.SetStreamerFunc(&streamer_TSocket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSocket*)
   {
      return GenerateInitInstanceLocal((::TSocket*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSocket*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TServerSocket(void *p);
   static void deleteArray_TServerSocket(void *p);
   static void destruct_TServerSocket(void *p);
   static void streamer_TServerSocket(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TServerSocket*)
   {
      ::TServerSocket *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TServerSocket >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TServerSocket", ::TServerSocket::Class_Version(), "TServerSocket.h", 42,
                  typeid(::TServerSocket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TServerSocket::Dictionary, isa_proxy, 16,
                  sizeof(::TServerSocket) );
      instance.SetDelete(&delete_TServerSocket);
      instance.SetDeleteArray(&deleteArray_TServerSocket);
      instance.SetDestructor(&destruct_TServerSocket);
      instance.SetStreamerFunc(&streamer_TServerSocket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TServerSocket*)
   {
      return GenerateInitInstanceLocal((::TServerSocket*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TServerSocket*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPServerSocket(void *p);
   static void deleteArray_TPServerSocket(void *p);
   static void destruct_TPServerSocket(void *p);
   static void streamer_TPServerSocket(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPServerSocket*)
   {
      ::TPServerSocket *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPServerSocket >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPServerSocket", ::TPServerSocket::Class_Version(), "TPServerSocket.h", 33,
                  typeid(::TPServerSocket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPServerSocket::Dictionary, isa_proxy, 16,
                  sizeof(::TPServerSocket) );
      instance.SetDelete(&delete_TPServerSocket);
      instance.SetDeleteArray(&deleteArray_TPServerSocket);
      instance.SetDestructor(&destruct_TPServerSocket);
      instance.SetStreamerFunc(&streamer_TPServerSocket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPServerSocket*)
   {
      return GenerateInitInstanceLocal((::TPServerSocket*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPServerSocket*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPSocket(void *p);
   static void deleteArray_TPSocket(void *p);
   static void destruct_TPSocket(void *p);
   static void streamer_TPSocket(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPSocket*)
   {
      ::TPSocket *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPSocket >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPSocket", ::TPSocket::Class_Version(), "TPSocket.h", 33,
                  typeid(::TPSocket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPSocket::Dictionary, isa_proxy, 16,
                  sizeof(::TPSocket) );
      instance.SetDelete(&delete_TPSocket);
      instance.SetDeleteArray(&deleteArray_TPSocket);
      instance.SetDestructor(&destruct_TPSocket);
      instance.SetStreamerFunc(&streamer_TPSocket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPSocket*)
   {
      return GenerateInitInstanceLocal((::TPSocket*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPSocket*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TParallelMergingFile(void *p);
   static void deleteArray_TParallelMergingFile(void *p);
   static void destruct_TParallelMergingFile(void *p);
   static void reset_TParallelMergingFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParallelMergingFile*)
   {
      ::TParallelMergingFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParallelMergingFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TParallelMergingFile", ::TParallelMergingFile::Class_Version(), "TParallelMergingFile.h", 38,
                  typeid(::TParallelMergingFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParallelMergingFile::Dictionary, isa_proxy, 4,
                  sizeof(::TParallelMergingFile) );
      instance.SetDelete(&delete_TParallelMergingFile);
      instance.SetDeleteArray(&deleteArray_TParallelMergingFile);
      instance.SetDestructor(&destruct_TParallelMergingFile);
      instance.SetResetAfterMerge(&reset_TParallelMergingFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParallelMergingFile*)
   {
      return GenerateInitInstanceLocal((::TParallelMergingFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TParallelMergingFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TS3HTTPRequest(void *p = 0);
   static void *newArray_TS3HTTPRequest(Long_t size, void *p);
   static void delete_TS3HTTPRequest(void *p);
   static void deleteArray_TS3HTTPRequest(void *p);
   static void destruct_TS3HTTPRequest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TS3HTTPRequest*)
   {
      ::TS3HTTPRequest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TS3HTTPRequest >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TS3HTTPRequest", ::TS3HTTPRequest::Class_Version(), "TS3HTTPRequest.h", 45,
                  typeid(::TS3HTTPRequest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TS3HTTPRequest::Dictionary, isa_proxy, 4,
                  sizeof(::TS3HTTPRequest) );
      instance.SetNew(&new_TS3HTTPRequest);
      instance.SetNewArray(&newArray_TS3HTTPRequest);
      instance.SetDelete(&delete_TS3HTTPRequest);
      instance.SetDeleteArray(&deleteArray_TS3HTTPRequest);
      instance.SetDestructor(&destruct_TS3HTTPRequest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TS3HTTPRequest*)
   {
      return GenerateInitInstanceLocal((::TS3HTTPRequest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TS3HTTPRequest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TWebFile(void *p);
   static void deleteArray_TWebFile(void *p);
   static void destruct_TWebFile(void *p);
   static void streamer_TWebFile(TBuffer &buf, void *obj);
   static void reset_TWebFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebFile*)
   {
      ::TWebFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TWebFile", ::TWebFile::Class_Version(), "TWebFile.h", 33,
                  typeid(::TWebFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebFile::Dictionary, isa_proxy, 16,
                  sizeof(::TWebFile) );
      instance.SetDelete(&delete_TWebFile);
      instance.SetDeleteArray(&deleteArray_TWebFile);
      instance.SetDestructor(&destruct_TWebFile);
      instance.SetStreamerFunc(&streamer_TWebFile);
      instance.SetResetAfterMerge(&reset_TWebFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebFile*)
   {
      return GenerateInitInstanceLocal((::TWebFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebSystem(void *p = 0);
   static void *newArray_TWebSystem(Long_t size, void *p);
   static void delete_TWebSystem(void *p);
   static void deleteArray_TWebSystem(void *p);
   static void destruct_TWebSystem(void *p);
   static void streamer_TWebSystem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebSystem*)
   {
      ::TWebSystem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebSystem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TWebSystem", ::TWebSystem::Class_Version(), "TWebFile.h", 98,
                  typeid(::TWebSystem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebSystem::Dictionary, isa_proxy, 16,
                  sizeof(::TWebSystem) );
      instance.SetNew(&new_TWebSystem);
      instance.SetNewArray(&newArray_TWebSystem);
      instance.SetDelete(&delete_TWebSystem);
      instance.SetDeleteArray(&deleteArray_TWebSystem);
      instance.SetDestructor(&destruct_TWebSystem);
      instance.SetStreamerFunc(&streamer_TWebSystem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebSystem*)
   {
      return GenerateInitInstanceLocal((::TWebSystem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWebSystem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TS3WebFile(void *p);
   static void deleteArray_TS3WebFile(void *p);
   static void destruct_TS3WebFile(void *p);
   static void reset_TS3WebFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TS3WebFile*)
   {
      ::TS3WebFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TS3WebFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TS3WebFile", ::TS3WebFile::Class_Version(), "TS3WebFile.h", 68,
                  typeid(::TS3WebFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TS3WebFile::Dictionary, isa_proxy, 4,
                  sizeof(::TS3WebFile) );
      instance.SetDelete(&delete_TS3WebFile);
      instance.SetDeleteArray(&deleteArray_TS3WebFile);
      instance.SetDestructor(&destruct_TS3WebFile);
      instance.SetResetAfterMerge(&reset_TS3WebFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TS3WebFile*)
   {
      return GenerateInitInstanceLocal((::TS3WebFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TS3WebFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLColumnInfo(void *p = 0);
   static void *newArray_TSQLColumnInfo(Long_t size, void *p);
   static void delete_TSQLColumnInfo(void *p);
   static void deleteArray_TSQLColumnInfo(void *p);
   static void destruct_TSQLColumnInfo(void *p);
   static void streamer_TSQLColumnInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLColumnInfo*)
   {
      ::TSQLColumnInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLColumnInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLColumnInfo", ::TSQLColumnInfo::Class_Version(), "TSQLColumnInfo.h", 17,
                  typeid(::TSQLColumnInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLColumnInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLColumnInfo) );
      instance.SetNew(&new_TSQLColumnInfo);
      instance.SetNewArray(&newArray_TSQLColumnInfo);
      instance.SetDelete(&delete_TSQLColumnInfo);
      instance.SetDeleteArray(&deleteArray_TSQLColumnInfo);
      instance.SetDestructor(&destruct_TSQLColumnInfo);
      instance.SetStreamerFunc(&streamer_TSQLColumnInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLColumnInfo*)
   {
      return GenerateInitInstanceLocal((::TSQLColumnInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLColumnInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSQLMonitoringWriter(void *p);
   static void deleteArray_TSQLMonitoringWriter(void *p);
   static void destruct_TSQLMonitoringWriter(void *p);
   static void streamer_TSQLMonitoringWriter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLMonitoringWriter*)
   {
      ::TSQLMonitoringWriter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLMonitoringWriter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLMonitoringWriter", ::TSQLMonitoringWriter::Class_Version(), "TSQLMonitoring.h", 30,
                  typeid(::TSQLMonitoringWriter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLMonitoringWriter::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLMonitoringWriter) );
      instance.SetDelete(&delete_TSQLMonitoringWriter);
      instance.SetDeleteArray(&deleteArray_TSQLMonitoringWriter);
      instance.SetDestructor(&destruct_TSQLMonitoringWriter);
      instance.SetStreamerFunc(&streamer_TSQLMonitoringWriter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLMonitoringWriter*)
   {
      return GenerateInitInstanceLocal((::TSQLMonitoringWriter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLMonitoringWriter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSQLResult(void *p);
   static void deleteArray_TSQLResult(void *p);
   static void destruct_TSQLResult(void *p);
   static void streamer_TSQLResult(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLResult*)
   {
      ::TSQLResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLResult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLResult", ::TSQLResult::Class_Version(), "TSQLResult.h", 32,
                  typeid(::TSQLResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLResult::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLResult) );
      instance.SetDelete(&delete_TSQLResult);
      instance.SetDeleteArray(&deleteArray_TSQLResult);
      instance.SetDestructor(&destruct_TSQLResult);
      instance.SetStreamerFunc(&streamer_TSQLResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLResult*)
   {
      return GenerateInitInstanceLocal((::TSQLResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLResult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSQLRow(void *p);
   static void deleteArray_TSQLRow(void *p);
   static void destruct_TSQLRow(void *p);
   static void streamer_TSQLRow(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLRow*)
   {
      ::TSQLRow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLRow >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLRow", ::TSQLRow::Class_Version(), "TSQLRow.h", 30,
                  typeid(::TSQLRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLRow::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLRow) );
      instance.SetDelete(&delete_TSQLRow);
      instance.SetDeleteArray(&deleteArray_TSQLRow);
      instance.SetDestructor(&destruct_TSQLRow);
      instance.SetStreamerFunc(&streamer_TSQLRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLRow*)
   {
      return GenerateInitInstanceLocal((::TSQLRow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLRow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSQLServer(void *p);
   static void deleteArray_TSQLServer(void *p);
   static void destruct_TSQLServer(void *p);
   static void streamer_TSQLServer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLServer*)
   {
      ::TSQLServer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLServer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLServer", ::TSQLServer::Class_Version(), "TSQLServer.h", 41,
                  typeid(::TSQLServer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLServer::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLServer) );
      instance.SetDelete(&delete_TSQLServer);
      instance.SetDeleteArray(&deleteArray_TSQLServer);
      instance.SetDestructor(&destruct_TSQLServer);
      instance.SetStreamerFunc(&streamer_TSQLServer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLServer*)
   {
      return GenerateInitInstanceLocal((::TSQLServer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLServer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSQLStatement(void *p);
   static void deleteArray_TSQLStatement(void *p);
   static void destruct_TSQLStatement(void *p);
   static void streamer_TSQLStatement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLStatement*)
   {
      ::TSQLStatement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLStatement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLStatement", ::TSQLStatement::Class_Version(), "TSQLStatement.h", 20,
                  typeid(::TSQLStatement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLStatement::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLStatement) );
      instance.SetDelete(&delete_TSQLStatement);
      instance.SetDeleteArray(&deleteArray_TSQLStatement);
      instance.SetDestructor(&destruct_TSQLStatement);
      instance.SetStreamerFunc(&streamer_TSQLStatement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLStatement*)
   {
      return GenerateInitInstanceLocal((::TSQLStatement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLStatement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSQLTableInfo(void *p = 0);
   static void *newArray_TSQLTableInfo(Long_t size, void *p);
   static void delete_TSQLTableInfo(void *p);
   static void deleteArray_TSQLTableInfo(void *p);
   static void destruct_TSQLTableInfo(void *p);
   static void streamer_TSQLTableInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLTableInfo*)
   {
      ::TSQLTableInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLTableInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLTableInfo", ::TSQLTableInfo::Class_Version(), "TSQLTableInfo.h", 20,
                  typeid(::TSQLTableInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLTableInfo::Dictionary, isa_proxy, 16,
                  sizeof(::TSQLTableInfo) );
      instance.SetNew(&new_TSQLTableInfo);
      instance.SetNewArray(&newArray_TSQLTableInfo);
      instance.SetDelete(&delete_TSQLTableInfo);
      instance.SetDeleteArray(&deleteArray_TSQLTableInfo);
      instance.SetDestructor(&destruct_TSQLTableInfo);
      instance.SetStreamerFunc(&streamer_TSQLTableInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLTableInfo*)
   {
      return GenerateInitInstanceLocal((::TSQLTableInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSQLTableInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSSLSocket(void *p);
   static void deleteArray_TSSLSocket(void *p);
   static void destruct_TSSLSocket(void *p);
   static void streamer_TSSLSocket(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSSLSocket*)
   {
      ::TSSLSocket *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSSLSocket >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSSLSocket", ::TSSLSocket::Class_Version(), "TSSLSocket.h", 28,
                  typeid(::TSSLSocket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSSLSocket::Dictionary, isa_proxy, 16,
                  sizeof(::TSSLSocket) );
      instance.SetDelete(&delete_TSSLSocket);
      instance.SetDeleteArray(&deleteArray_TSSLSocket);
      instance.SetDestructor(&destruct_TSSLSocket);
      instance.SetStreamerFunc(&streamer_TSSLSocket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSSLSocket*)
   {
      return GenerateInitInstanceLocal((::TSSLSocket*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSSLSocket*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TUDPSocket(void *p);
   static void deleteArray_TUDPSocket(void *p);
   static void destruct_TUDPSocket(void *p);
   static void streamer_TUDPSocket(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TUDPSocket*)
   {
      ::TUDPSocket *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TUDPSocket >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TUDPSocket", ::TUDPSocket::Class_Version(), "TUDPSocket.h", 37,
                  typeid(::TUDPSocket), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TUDPSocket::Dictionary, isa_proxy, 16,
                  sizeof(::TUDPSocket) );
      instance.SetDelete(&delete_TUDPSocket);
      instance.SetDeleteArray(&deleteArray_TUDPSocket);
      instance.SetDestructor(&destruct_TUDPSocket);
      instance.SetStreamerFunc(&streamer_TUDPSocket);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TUDPSocket*)
   {
      return GenerateInitInstanceLocal((::TUDPSocket*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TUDPSocket*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMessage::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMessage::Class_Name()
{
   return "TMessage";
}

//______________________________________________________________________________
const char *TMessage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMessage*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMessage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMessage*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMessage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMessage*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMessage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMessage*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TApplicationRemote::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TApplicationRemote::Class_Name()
{
   return "TApplicationRemote";
}

//______________________________________________________________________________
const char *TApplicationRemote::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TApplicationRemote*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TApplicationRemote::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TApplicationRemote*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TApplicationRemote::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TApplicationRemote*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TApplicationRemote::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TApplicationRemote*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TApplicationServer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TApplicationServer::Class_Name()
{
   return "TApplicationServer";
}

//______________________________________________________________________________
const char *TApplicationServer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TApplicationServer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TApplicationServer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TApplicationServer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TApplicationServer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TApplicationServer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TApplicationServer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TApplicationServer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFTP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFTP::Class_Name()
{
   return "TFTP";
}

//______________________________________________________________________________
const char *TFTP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFTP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFTP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFTP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFTP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFTP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFTP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFTP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileStager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileStager::Class_Name()
{
   return "TFileStager";
}

//______________________________________________________________________________
const char *TFileStager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileStager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFileStager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileStager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileStager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileStager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileStager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileStager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGridJob::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGridJob::Class_Name()
{
   return "TGridJob";
}

//______________________________________________________________________________
const char *TGridJob::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridJob*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGridJob::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridJob*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGridJob::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridJob*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGridJob::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridJob*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGrid::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGrid::Class_Name()
{
   return "TGrid";
}

//______________________________________________________________________________
const char *TGrid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGrid*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGrid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGrid*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGrid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGrid*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGrid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGrid*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGridCollection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGridCollection::Class_Name()
{
   return "TGridCollection";
}

//______________________________________________________________________________
const char *TGridCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridCollection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGridCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridCollection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGridCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridCollection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGridCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridCollection*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGridJDL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGridJDL::Class_Name()
{
   return "TGridJDL";
}

//______________________________________________________________________________
const char *TGridJDL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridJDL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGridJDL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridJDL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGridJDL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridJDL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGridJDL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridJDL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGridJobStatus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGridJobStatus::Class_Name()
{
   return "TGridJobStatus";
}

//______________________________________________________________________________
const char *TGridJobStatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridJobStatus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGridJobStatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridJobStatus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGridJobStatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridJobStatus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGridJobStatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridJobStatus*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGridJobStatusList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGridJobStatusList::Class_Name()
{
   return "TGridJobStatusList";
}

//______________________________________________________________________________
const char *TGridJobStatusList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridJobStatusList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGridJobStatusList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridJobStatusList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGridJobStatusList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridJobStatusList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGridJobStatusList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridJobStatusList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGridResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGridResult::Class_Name()
{
   return "TGridResult";
}

//______________________________________________________________________________
const char *TGridResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGridResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGridResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGridResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGridResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGridResult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMonitor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMonitor::Class_Name()
{
   return "TMonitor";
}

//______________________________________________________________________________
const char *TMonitor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMonitor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMonitor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMonitor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMonitor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMonitor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMonitor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMonitor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNetFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNetFile::Class_Name()
{
   return "TNetFile";
}

//______________________________________________________________________________
const char *TNetFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNetFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNetFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNetFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNetSystem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNetSystem::Class_Name()
{
   return "TNetSystem";
}

//______________________________________________________________________________
const char *TNetSystem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetSystem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNetSystem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetSystem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNetSystem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetSystem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNetSystem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetSystem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNetFileStager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNetFileStager::Class_Name()
{
   return "TNetFileStager";
}

//______________________________________________________________________________
const char *TNetFileStager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetFileStager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNetFileStager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetFileStager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNetFileStager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetFileStager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNetFileStager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetFileStager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSecContext::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSecContext::Class_Name()
{
   return "TSecContext";
}

//______________________________________________________________________________
const char *TSecContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSecContext*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSecContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSecContext*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSecContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSecContext*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSecContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSecContext*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSecContextCleanup::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSecContextCleanup::Class_Name()
{
   return "TSecContextCleanup";
}

//______________________________________________________________________________
const char *TSecContextCleanup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSecContextCleanup*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSecContextCleanup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSecContextCleanup*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSecContextCleanup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSecContextCleanup*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSecContextCleanup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSecContextCleanup*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSocket::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSocket::Class_Name()
{
   return "TSocket";
}

//______________________________________________________________________________
const char *TSocket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSocket*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSocket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSocket*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSocket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSocket*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSocket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSocket*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TServerSocket::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TServerSocket::Class_Name()
{
   return "TServerSocket";
}

//______________________________________________________________________________
const char *TServerSocket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TServerSocket*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TServerSocket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TServerSocket*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TServerSocket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TServerSocket*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TServerSocket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TServerSocket*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPServerSocket::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPServerSocket::Class_Name()
{
   return "TPServerSocket";
}

//______________________________________________________________________________
const char *TPServerSocket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPServerSocket*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPServerSocket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPServerSocket*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPServerSocket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPServerSocket*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPServerSocket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPServerSocket*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPSocket::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPSocket::Class_Name()
{
   return "TPSocket";
}

//______________________________________________________________________________
const char *TPSocket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPSocket*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPSocket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPSocket*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPSocket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPSocket*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPSocket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPSocket*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParallelMergingFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TParallelMergingFile::Class_Name()
{
   return "TParallelMergingFile";
}

//______________________________________________________________________________
const char *TParallelMergingFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelMergingFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TParallelMergingFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelMergingFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParallelMergingFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelMergingFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParallelMergingFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelMergingFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TS3HTTPRequest::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TS3HTTPRequest::Class_Name()
{
   return "TS3HTTPRequest";
}

//______________________________________________________________________________
const char *TS3HTTPRequest::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TS3HTTPRequest*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TS3HTTPRequest::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TS3HTTPRequest*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TS3HTTPRequest::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TS3HTTPRequest*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TS3HTTPRequest::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TS3HTTPRequest*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebFile::Class_Name()
{
   return "TWebFile";
}

//______________________________________________________________________________
const char *TWebFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWebFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebSystem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebSystem::Class_Name()
{
   return "TWebSystem";
}

//______________________________________________________________________________
const char *TWebSystem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebSystem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWebSystem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebSystem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebSystem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebSystem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebSystem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebSystem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TS3WebFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TS3WebFile::Class_Name()
{
   return "TS3WebFile";
}

//______________________________________________________________________________
const char *TS3WebFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TS3WebFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TS3WebFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TS3WebFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TS3WebFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TS3WebFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TS3WebFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TS3WebFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLColumnInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLColumnInfo::Class_Name()
{
   return "TSQLColumnInfo";
}

//______________________________________________________________________________
const char *TSQLColumnInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLColumnInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLColumnInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLColumnInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLColumnInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLColumnInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLColumnInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLColumnInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLMonitoringWriter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLMonitoringWriter::Class_Name()
{
   return "TSQLMonitoringWriter";
}

//______________________________________________________________________________
const char *TSQLMonitoringWriter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLMonitoringWriter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLMonitoringWriter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLMonitoringWriter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLMonitoringWriter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLMonitoringWriter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLMonitoringWriter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLMonitoringWriter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLResult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLResult::Class_Name()
{
   return "TSQLResult";
}

//______________________________________________________________________________
const char *TSQLResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLResult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLResult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLResult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLResult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLRow::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLRow::Class_Name()
{
   return "TSQLRow";
}

//______________________________________________________________________________
const char *TSQLRow::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLRow*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLRow::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLRow*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLRow::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLRow*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLRow::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLRow*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLServer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLServer::Class_Name()
{
   return "TSQLServer";
}

//______________________________________________________________________________
const char *TSQLServer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLServer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLServer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLServer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLServer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLServer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLServer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLServer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLStatement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLStatement::Class_Name()
{
   return "TSQLStatement";
}

//______________________________________________________________________________
const char *TSQLStatement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLStatement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLStatement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLStatement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLStatement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLStatement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLStatement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLStatement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLTableInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLTableInfo::Class_Name()
{
   return "TSQLTableInfo";
}

//______________________________________________________________________________
const char *TSQLTableInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLTableInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLTableInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLTableInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLTableInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLTableInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLTableInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLTableInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSSLSocket::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSSLSocket::Class_Name()
{
   return "TSSLSocket";
}

//______________________________________________________________________________
const char *TSSLSocket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSSLSocket*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSSLSocket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSSLSocket*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSSLSocket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSSLSocket*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSSLSocket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSSLSocket*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TUDPSocket::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUDPSocket::Class_Name()
{
   return "TUDPSocket";
}

//______________________________________________________________________________
const char *TUDPSocket::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUDPSocket*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUDPSocket::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TUDPSocket*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUDPSocket::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUDPSocket*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUDPSocket::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TUDPSocket*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TMessage::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMessage.

   TBufferFile::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMessage(void *p) {
      return  p ? new(p) ::TMessage : new ::TMessage;
   }
   static void *newArray_TMessage(Long_t nElements, void *p) {
      return p ? new(p) ::TMessage[nElements] : new ::TMessage[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMessage(void *p) {
      delete ((::TMessage*)p);
   }
   static void deleteArray_TMessage(void *p) {
      delete [] ((::TMessage*)p);
   }
   static void destruct_TMessage(void *p) {
      typedef ::TMessage current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMessage(TBuffer &buf, void *obj) {
      ((::TMessage*)obj)->::TMessage::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMessage

//______________________________________________________________________________
void TApplicationRemote::Streamer(TBuffer &R__b)
{
   // Stream an object of class TApplicationRemote.

   TApplication::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TApplicationRemote(void *p) {
      delete ((::TApplicationRemote*)p);
   }
   static void deleteArray_TApplicationRemote(void *p) {
      delete [] ((::TApplicationRemote*)p);
   }
   static void destruct_TApplicationRemote(void *p) {
      typedef ::TApplicationRemote current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TApplicationRemote(TBuffer &buf, void *obj) {
      ((::TApplicationRemote*)obj)->::TApplicationRemote::Streamer(buf);
   }
} // end of namespace ROOT for class ::TApplicationRemote

//______________________________________________________________________________
void TApplicationServer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TApplicationServer.

   TApplication::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TApplicationServer(void *p) {
      delete ((::TApplicationServer*)p);
   }
   static void deleteArray_TApplicationServer(void *p) {
      delete [] ((::TApplicationServer*)p);
   }
   static void destruct_TApplicationServer(void *p) {
      typedef ::TApplicationServer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TApplicationServer(TBuffer &buf, void *obj) {
      ((::TApplicationServer*)obj)->::TApplicationServer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TApplicationServer

//______________________________________________________________________________
void TFTP::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFTP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fHost.Streamer(R__b);
      fUser.Streamer(R__b);
      R__b >> fPort;
      R__b >> fParallel;
      R__b >> fWindowSize;
      R__b >> fProtocol;
      R__b >> fLastBlock;
      R__b >> fBlockSize;
      R__b >> fMode;
      R__b >> fRestartAt;
      fCurrentFile.Streamer(R__b);
      R__b >> fBytesWrite;
      R__b >> fBytesRead;
      R__b >> fDir;
      R__b.CheckByteCount(R__s, R__c, TFTP::IsA());
   } else {
      R__c = R__b.WriteVersion(TFTP::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fHost.Streamer(R__b);
      fUser.Streamer(R__b);
      R__b << fPort;
      R__b << fParallel;
      R__b << fWindowSize;
      R__b << fProtocol;
      R__b << fLastBlock;
      R__b << fBlockSize;
      R__b << fMode;
      R__b << fRestartAt;
      fCurrentFile.Streamer(R__b);
      R__b << fBytesWrite;
      R__b << fBytesRead;
      R__b << fDir;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFTP(void *p) {
      delete ((::TFTP*)p);
   }
   static void deleteArray_TFTP(void *p) {
      delete [] ((::TFTP*)p);
   }
   static void destruct_TFTP(void *p) {
      typedef ::TFTP current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFTP(TBuffer &buf, void *obj) {
      ((::TFTP*)obj)->::TFTP::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFTP

//______________________________________________________________________________
void TFileStager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileStager.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFileStager(void *p) {
      delete ((::TFileStager*)p);
   }
   static void deleteArray_TFileStager(void *p) {
      delete [] ((::TFileStager*)p);
   }
   static void destruct_TFileStager(void *p) {
      typedef ::TFileStager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFileStager(TBuffer &buf, void *obj) {
      ((::TFileStager*)obj)->::TFileStager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFileStager

//______________________________________________________________________________
void TGridJob::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGridJob.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGridJob::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGridJob::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGridJob(void *p) {
      delete ((::TGridJob*)p);
   }
   static void deleteArray_TGridJob(void *p) {
      delete [] ((::TGridJob*)p);
   }
   static void destruct_TGridJob(void *p) {
      typedef ::TGridJob current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGridJob

//______________________________________________________________________________
void TGrid::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGrid.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGrid(void *p) {
      return  p ? new(p) ::TGrid : new ::TGrid;
   }
   static void *newArray_TGrid(Long_t nElements, void *p) {
      return p ? new(p) ::TGrid[nElements] : new ::TGrid[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGrid(void *p) {
      delete ((::TGrid*)p);
   }
   static void deleteArray_TGrid(void *p) {
      delete [] ((::TGrid*)p);
   }
   static void destruct_TGrid(void *p) {
      typedef ::TGrid current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGrid(TBuffer &buf, void *obj) {
      ((::TGrid*)obj)->::TGrid::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGrid

//______________________________________________________________________________
void TGridCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGridCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGridCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGridCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGridCollection(void *p) {
      return  p ? new(p) ::TGridCollection : new ::TGridCollection;
   }
   static void *newArray_TGridCollection(Long_t nElements, void *p) {
      return p ? new(p) ::TGridCollection[nElements] : new ::TGridCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGridCollection(void *p) {
      delete ((::TGridCollection*)p);
   }
   static void deleteArray_TGridCollection(void *p) {
      delete [] ((::TGridCollection*)p);
   }
   static void destruct_TGridCollection(void *p) {
      typedef ::TGridCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGridCollection

//______________________________________________________________________________
void TGridJDL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGridJDL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGridJDL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGridJDL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGridJDL(void *p) {
      delete ((::TGridJDL*)p);
   }
   static void deleteArray_TGridJDL(void *p) {
      delete [] ((::TGridJDL*)p);
   }
   static void destruct_TGridJDL(void *p) {
      typedef ::TGridJDL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGridJDL

//______________________________________________________________________________
void TGridJobStatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGridJobStatus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGridJobStatus::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGridJobStatus::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGridJobStatus(void *p) {
      delete ((::TGridJobStatus*)p);
   }
   static void deleteArray_TGridJobStatus(void *p) {
      delete [] ((::TGridJobStatus*)p);
   }
   static void destruct_TGridJobStatus(void *p) {
      typedef ::TGridJobStatus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGridJobStatus

//______________________________________________________________________________
void TGridJobStatusList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGridJobStatusList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGridJobStatusList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGridJobStatusList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGridJobStatusList(void *p) {
      return  p ? new(p) ::TGridJobStatusList : new ::TGridJobStatusList;
   }
   static void *newArray_TGridJobStatusList(Long_t nElements, void *p) {
      return p ? new(p) ::TGridJobStatusList[nElements] : new ::TGridJobStatusList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGridJobStatusList(void *p) {
      delete ((::TGridJobStatusList*)p);
   }
   static void deleteArray_TGridJobStatusList(void *p) {
      delete [] ((::TGridJobStatusList*)p);
   }
   static void destruct_TGridJobStatusList(void *p) {
      typedef ::TGridJobStatusList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGridJobStatusList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGridJobStatusList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGridJobStatusList

//______________________________________________________________________________
void TGridResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGridResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGridResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGridResult::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGridResult(void *p) {
      return  p ? new(p) ::TGridResult : new ::TGridResult;
   }
   static void *newArray_TGridResult(Long_t nElements, void *p) {
      return p ? new(p) ::TGridResult[nElements] : new ::TGridResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGridResult(void *p) {
      delete ((::TGridResult*)p);
   }
   static void deleteArray_TGridResult(void *p) {
      delete [] ((::TGridResult*)p);
   }
   static void destruct_TGridResult(void *p) {
      typedef ::TGridResult current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGridResult(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGridResult*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGridResult

//______________________________________________________________________________
void TMonitor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMonitor.

   TObject::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMonitor(void *p) {
      return  p ? new(p) ::TMonitor : new ::TMonitor;
   }
   static void *newArray_TMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::TMonitor[nElements] : new ::TMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMonitor(void *p) {
      delete ((::TMonitor*)p);
   }
   static void deleteArray_TMonitor(void *p) {
      delete [] ((::TMonitor*)p);
   }
   static void destruct_TMonitor(void *p) {
      typedef ::TMonitor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMonitor(TBuffer &buf, void *obj) {
      ((::TMonitor*)obj)->::TMonitor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMonitor

//______________________________________________________________________________
void TNetFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNetFile.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TFile::Streamer(R__b);
      fEndpointUrl.Streamer(R__b);
      fUser.Streamer(R__b);
      R__b >> fSocket;
      R__b >> fProtocol;
      R__b >> fErrorCode;
      R__b >> fNetopt;
      R__b.CheckByteCount(R__s, R__c, TNetFile::IsA());
   } else {
      R__c = R__b.WriteVersion(TNetFile::IsA(), kTRUE);
      TFile::Streamer(R__b);
      fEndpointUrl.Streamer(R__b);
      fUser.Streamer(R__b);
      R__b << fSocket;
      R__b << fProtocol;
      R__b << fErrorCode;
      R__b << fNetopt;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNetFile(void *p) {
      return  p ? new(p) ::TNetFile : new ::TNetFile;
   }
   static void *newArray_TNetFile(Long_t nElements, void *p) {
      return p ? new(p) ::TNetFile[nElements] : new ::TNetFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNetFile(void *p) {
      delete ((::TNetFile*)p);
   }
   static void deleteArray_TNetFile(void *p) {
      delete [] ((::TNetFile*)p);
   }
   static void destruct_TNetFile(void *p) {
      typedef ::TNetFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNetFile(TBuffer &buf, void *obj) {
      ((::TNetFile*)obj)->::TNetFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TNetFile(void *obj,TFileMergeInfo *info) {
      ((::TNetFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TNetFile

//______________________________________________________________________________
void TNetSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNetSystem.

   TSystem::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNetSystem(void *p) {
      return  p ? new(p) ::TNetSystem : new ::TNetSystem;
   }
   static void *newArray_TNetSystem(Long_t nElements, void *p) {
      return p ? new(p) ::TNetSystem[nElements] : new ::TNetSystem[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNetSystem(void *p) {
      delete ((::TNetSystem*)p);
   }
   static void deleteArray_TNetSystem(void *p) {
      delete [] ((::TNetSystem*)p);
   }
   static void destruct_TNetSystem(void *p) {
      typedef ::TNetSystem current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNetSystem(TBuffer &buf, void *obj) {
      ((::TNetSystem*)obj)->::TNetSystem::Streamer(buf);
   }
} // end of namespace ROOT for class ::TNetSystem

//______________________________________________________________________________
void TNetFileStager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNetFileStager.

   TFileStager::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNetFileStager(void *p) {
      return  p ? new(p) ::TNetFileStager : new ::TNetFileStager;
   }
   static void *newArray_TNetFileStager(Long_t nElements, void *p) {
      return p ? new(p) ::TNetFileStager[nElements] : new ::TNetFileStager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNetFileStager(void *p) {
      delete ((::TNetFileStager*)p);
   }
   static void deleteArray_TNetFileStager(void *p) {
      delete [] ((::TNetFileStager*)p);
   }
   static void destruct_TNetFileStager(void *p) {
      typedef ::TNetFileStager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNetFileStager(TBuffer &buf, void *obj) {
      ((::TNetFileStager*)obj)->::TNetFileStager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TNetFileStager

//______________________________________________________________________________
void TSecContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSecContext.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSecContext(void *p) {
      delete ((::TSecContext*)p);
   }
   static void deleteArray_TSecContext(void *p) {
      delete [] ((::TSecContext*)p);
   }
   static void destruct_TSecContext(void *p) {
      typedef ::TSecContext current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSecContext(TBuffer &buf, void *obj) {
      ((::TSecContext*)obj)->::TSecContext::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSecContext

//______________________________________________________________________________
void TSecContextCleanup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSecContextCleanup.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSecContextCleanup(void *p) {
      delete ((::TSecContextCleanup*)p);
   }
   static void deleteArray_TSecContextCleanup(void *p) {
      delete [] ((::TSecContextCleanup*)p);
   }
   static void destruct_TSecContextCleanup(void *p) {
      typedef ::TSecContextCleanup current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSecContextCleanup(TBuffer &buf, void *obj) {
      ((::TSecContextCleanup*)obj)->::TSecContextCleanup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSecContextCleanup

//______________________________________________________________________________
void TSocket::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSocket.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSocket(void *p) {
      delete ((::TSocket*)p);
   }
   static void deleteArray_TSocket(void *p) {
      delete [] ((::TSocket*)p);
   }
   static void destruct_TSocket(void *p) {
      typedef ::TSocket current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSocket(TBuffer &buf, void *obj) {
      ((::TSocket*)obj)->::TSocket::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSocket

//______________________________________________________________________________
void TServerSocket::Streamer(TBuffer &R__b)
{
   // Stream an object of class TServerSocket.

   TSocket::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TServerSocket(void *p) {
      delete ((::TServerSocket*)p);
   }
   static void deleteArray_TServerSocket(void *p) {
      delete [] ((::TServerSocket*)p);
   }
   static void destruct_TServerSocket(void *p) {
      typedef ::TServerSocket current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TServerSocket(TBuffer &buf, void *obj) {
      ((::TServerSocket*)obj)->::TServerSocket::Streamer(buf);
   }
} // end of namespace ROOT for class ::TServerSocket

//______________________________________________________________________________
void TPServerSocket::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPServerSocket.

   TServerSocket::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPServerSocket(void *p) {
      delete ((::TPServerSocket*)p);
   }
   static void deleteArray_TPServerSocket(void *p) {
      delete [] ((::TPServerSocket*)p);
   }
   static void destruct_TPServerSocket(void *p) {
      typedef ::TPServerSocket current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPServerSocket(TBuffer &buf, void *obj) {
      ((::TPServerSocket*)obj)->::TPServerSocket::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPServerSocket

//______________________________________________________________________________
void TPSocket::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPSocket.

   TSocket::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPSocket(void *p) {
      delete ((::TPSocket*)p);
   }
   static void deleteArray_TPSocket(void *p) {
      delete [] ((::TPSocket*)p);
   }
   static void destruct_TPSocket(void *p) {
      typedef ::TPSocket current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPSocket(TBuffer &buf, void *obj) {
      ((::TPSocket*)obj)->::TPSocket::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPSocket

//______________________________________________________________________________
void TParallelMergingFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParallelMergingFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TParallelMergingFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TParallelMergingFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TParallelMergingFile(void *p) {
      delete ((::TParallelMergingFile*)p);
   }
   static void deleteArray_TParallelMergingFile(void *p) {
      delete [] ((::TParallelMergingFile*)p);
   }
   static void destruct_TParallelMergingFile(void *p) {
      typedef ::TParallelMergingFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the Reset function.
   static void reset_TParallelMergingFile(void *obj,TFileMergeInfo *info) {
      ((::TParallelMergingFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TParallelMergingFile

//______________________________________________________________________________
void TS3HTTPRequest::Streamer(TBuffer &R__b)
{
   // Stream an object of class TS3HTTPRequest.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TS3HTTPRequest::Class(),this);
   } else {
      R__b.WriteClassBuffer(TS3HTTPRequest::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TS3HTTPRequest(void *p) {
      return  p ? new(p) ::TS3HTTPRequest : new ::TS3HTTPRequest;
   }
   static void *newArray_TS3HTTPRequest(Long_t nElements, void *p) {
      return p ? new(p) ::TS3HTTPRequest[nElements] : new ::TS3HTTPRequest[nElements];
   }
   // Wrapper around operator delete
   static void delete_TS3HTTPRequest(void *p) {
      delete ((::TS3HTTPRequest*)p);
   }
   static void deleteArray_TS3HTTPRequest(void *p) {
      delete [] ((::TS3HTTPRequest*)p);
   }
   static void destruct_TS3HTTPRequest(void *p) {
      typedef ::TS3HTTPRequest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TS3HTTPRequest

//______________________________________________________________________________
void TWebFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebFile.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TFile::Streamer(R__b);
      R__b >> fSize;
      R__b >> fSocket;
      fProxy.Streamer(R__b);
      R__b >> fHasModRoot;
      R__b >> fHTTP11;
      R__b >> fNoProxy;
      fMsgReadBuffer.Streamer(R__b);
      fMsgReadBuffer10.Streamer(R__b);
      fMsgGetHead.Streamer(R__b);
      fBasicUrl.Streamer(R__b);
      fUrlOrg.Streamer(R__b);
      fBasicUrlOrg.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TWebFile::IsA());
   } else {
      R__c = R__b.WriteVersion(TWebFile::IsA(), kTRUE);
      TFile::Streamer(R__b);
      R__b << fSize;
      R__b << fSocket;
      fProxy.Streamer(R__b);
      R__b << fHasModRoot;
      R__b << fHTTP11;
      R__b << fNoProxy;
      fMsgReadBuffer.Streamer(R__b);
      fMsgReadBuffer10.Streamer(R__b);
      fMsgGetHead.Streamer(R__b);
      fBasicUrl.Streamer(R__b);
      fUrlOrg.Streamer(R__b);
      fBasicUrlOrg.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebFile(void *p) {
      delete ((::TWebFile*)p);
   }
   static void deleteArray_TWebFile(void *p) {
      delete [] ((::TWebFile*)p);
   }
   static void destruct_TWebFile(void *p) {
      typedef ::TWebFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TWebFile(TBuffer &buf, void *obj) {
      ((::TWebFile*)obj)->::TWebFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TWebFile(void *obj,TFileMergeInfo *info) {
      ((::TWebFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TWebFile

//______________________________________________________________________________
void TWebSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebSystem.

   TSystem::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebSystem(void *p) {
      return  p ? new(p) ::TWebSystem : new ::TWebSystem;
   }
   static void *newArray_TWebSystem(Long_t nElements, void *p) {
      return p ? new(p) ::TWebSystem[nElements] : new ::TWebSystem[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebSystem(void *p) {
      delete ((::TWebSystem*)p);
   }
   static void deleteArray_TWebSystem(void *p) {
      delete [] ((::TWebSystem*)p);
   }
   static void destruct_TWebSystem(void *p) {
      typedef ::TWebSystem current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TWebSystem(TBuffer &buf, void *obj) {
      ((::TWebSystem*)obj)->::TWebSystem::Streamer(buf);
   }
} // end of namespace ROOT for class ::TWebSystem

//______________________________________________________________________________
void TS3WebFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TS3WebFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TS3WebFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TS3WebFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TS3WebFile(void *p) {
      delete ((::TS3WebFile*)p);
   }
   static void deleteArray_TS3WebFile(void *p) {
      delete [] ((::TS3WebFile*)p);
   }
   static void destruct_TS3WebFile(void *p) {
      typedef ::TS3WebFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the Reset function.
   static void reset_TS3WebFile(void *obj,TFileMergeInfo *info) {
      ((::TS3WebFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TS3WebFile

//______________________________________________________________________________
void TSQLColumnInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLColumnInfo.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLColumnInfo(void *p) {
      return  p ? new(p) ::TSQLColumnInfo : new ::TSQLColumnInfo;
   }
   static void *newArray_TSQLColumnInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLColumnInfo[nElements] : new ::TSQLColumnInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLColumnInfo(void *p) {
      delete ((::TSQLColumnInfo*)p);
   }
   static void deleteArray_TSQLColumnInfo(void *p) {
      delete [] ((::TSQLColumnInfo*)p);
   }
   static void destruct_TSQLColumnInfo(void *p) {
      typedef ::TSQLColumnInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLColumnInfo(TBuffer &buf, void *obj) {
      ((::TSQLColumnInfo*)obj)->::TSQLColumnInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLColumnInfo

//______________________________________________________________________________
void TSQLMonitoringWriter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLMonitoringWriter.

   TVirtualMonitoringWriter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSQLMonitoringWriter(void *p) {
      delete ((::TSQLMonitoringWriter*)p);
   }
   static void deleteArray_TSQLMonitoringWriter(void *p) {
      delete [] ((::TSQLMonitoringWriter*)p);
   }
   static void destruct_TSQLMonitoringWriter(void *p) {
      typedef ::TSQLMonitoringWriter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLMonitoringWriter(TBuffer &buf, void *obj) {
      ((::TSQLMonitoringWriter*)obj)->::TSQLMonitoringWriter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLMonitoringWriter

//______________________________________________________________________________
void TSQLResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLResult.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSQLResult(void *p) {
      delete ((::TSQLResult*)p);
   }
   static void deleteArray_TSQLResult(void *p) {
      delete [] ((::TSQLResult*)p);
   }
   static void destruct_TSQLResult(void *p) {
      typedef ::TSQLResult current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLResult(TBuffer &buf, void *obj) {
      ((::TSQLResult*)obj)->::TSQLResult::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLResult

//______________________________________________________________________________
void TSQLRow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLRow.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSQLRow(void *p) {
      delete ((::TSQLRow*)p);
   }
   static void deleteArray_TSQLRow(void *p) {
      delete [] ((::TSQLRow*)p);
   }
   static void destruct_TSQLRow(void *p) {
      typedef ::TSQLRow current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLRow(TBuffer &buf, void *obj) {
      ((::TSQLRow*)obj)->::TSQLRow::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLRow

//______________________________________________________________________________
void TSQLServer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLServer.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSQLServer(void *p) {
      delete ((::TSQLServer*)p);
   }
   static void deleteArray_TSQLServer(void *p) {
      delete [] ((::TSQLServer*)p);
   }
   static void destruct_TSQLServer(void *p) {
      typedef ::TSQLServer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLServer(TBuffer &buf, void *obj) {
      ((::TSQLServer*)obj)->::TSQLServer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLServer

//______________________________________________________________________________
void TSQLStatement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLStatement.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSQLStatement(void *p) {
      delete ((::TSQLStatement*)p);
   }
   static void deleteArray_TSQLStatement(void *p) {
      delete [] ((::TSQLStatement*)p);
   }
   static void destruct_TSQLStatement(void *p) {
      typedef ::TSQLStatement current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLStatement(TBuffer &buf, void *obj) {
      ((::TSQLStatement*)obj)->::TSQLStatement::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLStatement

//______________________________________________________________________________
void TSQLTableInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLTableInfo.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSQLTableInfo(void *p) {
      return  p ? new(p) ::TSQLTableInfo : new ::TSQLTableInfo;
   }
   static void *newArray_TSQLTableInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TSQLTableInfo[nElements] : new ::TSQLTableInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSQLTableInfo(void *p) {
      delete ((::TSQLTableInfo*)p);
   }
   static void deleteArray_TSQLTableInfo(void *p) {
      delete [] ((::TSQLTableInfo*)p);
   }
   static void destruct_TSQLTableInfo(void *p) {
      typedef ::TSQLTableInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSQLTableInfo(TBuffer &buf, void *obj) {
      ((::TSQLTableInfo*)obj)->::TSQLTableInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSQLTableInfo

//______________________________________________________________________________
void TSSLSocket::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSSLSocket.

   TSocket::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSSLSocket(void *p) {
      delete ((::TSSLSocket*)p);
   }
   static void deleteArray_TSSLSocket(void *p) {
      delete [] ((::TSSLSocket*)p);
   }
   static void destruct_TSSLSocket(void *p) {
      typedef ::TSSLSocket current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSSLSocket(TBuffer &buf, void *obj) {
      ((::TSSLSocket*)obj)->::TSSLSocket::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSSLSocket

//______________________________________________________________________________
void TUDPSocket::Streamer(TBuffer &R__b)
{
   // Stream an object of class TUDPSocket.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TUDPSocket(void *p) {
      delete ((::TUDPSocket*)p);
   }
   static void deleteArray_TUDPSocket(void *p) {
      delete [] ((::TUDPSocket*)p);
   }
   static void destruct_TUDPSocket(void *p) {
      typedef ::TUDPSocket current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TUDPSocket(TBuffer &buf, void *obj) {
      ((::TUDPSocket*)obj)->::TUDPSocket::Streamer(buf);
   }
} // end of namespace ROOT for class ::TUDPSocket

namespace {
  void TriggerDictionaryInitialization_libNet_Impl() {
    static const char* headers[] = {
"NetErrors.h",
"RRemoteProtocol.h",
"TApplicationRemote.h",
"TApplicationServer.h",
"TFTP.h",
"TFileStager.h",
"TGrid.h",
"TGridCollection.h",
"TGridJDL.h",
"TGridJob.h",
"TGridJobStatus.h",
"TGridJobStatusList.h",
"TGridResult.h",
"TMessage.h",
"TMonitor.h",
"TNetFile.h",
"TNetFileStager.h",
"TPServerSocket.h",
"TPSocket.h",
"TParallelMergingFile.h",
"TS3HTTPRequest.h",
"TS3WebFile.h",
"TSQLColumnInfo.h",
"TSQLMonitoring.h",
"TSQLResult.h",
"TSQLRow.h",
"TSQLServer.h",
"TSQLStatement.h",
"TSQLTableInfo.h",
"TSSLSocket.h",
"TSecContext.h",
"TServerSocket.h",
"TSocket.h",
"TUDPSocket.h",
"TWebFile.h",
0
    };
    static const char* includePaths[] = {
"/usr/include",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libNet dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef R__SSL
  #define R__SSL 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "NetErrors.h"
#include "RRemoteProtocol.h"
#include "TApplicationRemote.h"
#include "TApplicationServer.h"
#include "TFTP.h"
#include "TFileStager.h"
#include "TGrid.h"
#include "TGridCollection.h"
#include "TGridJDL.h"
#include "TGridJob.h"
#include "TGridJobStatus.h"
#include "TGridJobStatusList.h"
#include "TGridResult.h"
#include "TMessage.h"
#include "TMonitor.h"
#include "TNetFile.h"
#include "TNetFileStager.h"
#include "TPServerSocket.h"
#include "TPSocket.h"
#include "TParallelMergingFile.h"
#include "TS3HTTPRequest.h"
#include "TS3WebFile.h"
#include "TSQLColumnInfo.h"
#include "TSQLMonitoring.h"
#include "TSQLResult.h"
#include "TSQLRow.h"
#include "TSQLServer.h"
#include "TSQLStatement.h"
#include "TSQLTableInfo.h"
#include "TSSLSocket.h"
#include "TSecContext.h"
#include "TServerSocket.h"
#include "TSocket.h"
#include "TUDPSocket.h"
#include "TWebFile.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libNet",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libNet_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libNet_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libNet() {
  TriggerDictionaryInitialization_libNet_Impl();
}
