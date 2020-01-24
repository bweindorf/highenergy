// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GeomBuilder

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
#include "TGeoVolumeEditor.h"
#include "TGeoBBoxEditor.h"
#include "TGeoMediumEditor.h"
#include "TGeoNodeEditor.h"
#include "TGeoMatrixEditor.h"
#include "TGeoManagerEditor.h"
#include "TGeoTubeEditor.h"
#include "TGeoConeEditor.h"
#include "TGeoTrd1Editor.h"
#include "TGeoTrd2Editor.h"
#include "TGeoMaterialEditor.h"
#include "TGeoTabManager.h"
#include "TGeoSphereEditor.h"
#include "TGeoPconEditor.h"
#include "TGeoParaEditor.h"
#include "TGeoTorusEditor.h"
#include "TGeoEltuEditor.h"
#include "TGeoHypeEditor.h"
#include "TGeoPgonEditor.h"
#include "TGeoTrapEditor.h"
#include "TGeoGedFrame.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TGeoGedFrame(void *p);
   static void deleteArray_TGeoGedFrame(void *p);
   static void destruct_TGeoGedFrame(void *p);
   static void streamer_TGeoGedFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoGedFrame*)
   {
      ::TGeoGedFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoGedFrame >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoGedFrame", ::TGeoGedFrame::Class_Version(), "TGeoGedFrame.h", 21,
                  typeid(::TGeoGedFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoGedFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoGedFrame) );
      instance.SetDelete(&delete_TGeoGedFrame);
      instance.SetDeleteArray(&deleteArray_TGeoGedFrame);
      instance.SetDestructor(&destruct_TGeoGedFrame);
      instance.SetStreamerFunc(&streamer_TGeoGedFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoGedFrame*)
   {
      return GenerateInitInstanceLocal((::TGeoGedFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoGedFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoVolumeEditor(void *p = 0);
   static void *newArray_TGeoVolumeEditor(Long_t size, void *p);
   static void delete_TGeoVolumeEditor(void *p);
   static void deleteArray_TGeoVolumeEditor(void *p);
   static void destruct_TGeoVolumeEditor(void *p);
   static void streamer_TGeoVolumeEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVolumeEditor*)
   {
      ::TGeoVolumeEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVolumeEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVolumeEditor", ::TGeoVolumeEditor::Class_Version(), "TGeoVolumeEditor.h", 44,
                  typeid(::TGeoVolumeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVolumeEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoVolumeEditor) );
      instance.SetNew(&new_TGeoVolumeEditor);
      instance.SetNewArray(&newArray_TGeoVolumeEditor);
      instance.SetDelete(&delete_TGeoVolumeEditor);
      instance.SetDeleteArray(&deleteArray_TGeoVolumeEditor);
      instance.SetDestructor(&destruct_TGeoVolumeEditor);
      instance.SetStreamerFunc(&streamer_TGeoVolumeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVolumeEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoVolumeEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoVolumeEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoBBoxEditor(void *p = 0);
   static void *newArray_TGeoBBoxEditor(Long_t size, void *p);
   static void delete_TGeoBBoxEditor(void *p);
   static void deleteArray_TGeoBBoxEditor(void *p);
   static void destruct_TGeoBBoxEditor(void *p);
   static void streamer_TGeoBBoxEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBBoxEditor*)
   {
      ::TGeoBBoxEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBBoxEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBBoxEditor", ::TGeoBBoxEditor::Class_Version(), "TGeoBBoxEditor.h", 35,
                  typeid(::TGeoBBoxEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBBoxEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoBBoxEditor) );
      instance.SetNew(&new_TGeoBBoxEditor);
      instance.SetNewArray(&newArray_TGeoBBoxEditor);
      instance.SetDelete(&delete_TGeoBBoxEditor);
      instance.SetDeleteArray(&deleteArray_TGeoBBoxEditor);
      instance.SetDestructor(&destruct_TGeoBBoxEditor);
      instance.SetStreamerFunc(&streamer_TGeoBBoxEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBBoxEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoBBoxEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoBBoxEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMediumEditor(void *p = 0);
   static void *newArray_TGeoMediumEditor(Long_t size, void *p);
   static void delete_TGeoMediumEditor(void *p);
   static void deleteArray_TGeoMediumEditor(void *p);
   static void destruct_TGeoMediumEditor(void *p);
   static void streamer_TGeoMediumEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMediumEditor*)
   {
      ::TGeoMediumEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMediumEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMediumEditor", ::TGeoMediumEditor::Class_Version(), "TGeoMediumEditor.h", 38,
                  typeid(::TGeoMediumEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMediumEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoMediumEditor) );
      instance.SetNew(&new_TGeoMediumEditor);
      instance.SetNewArray(&newArray_TGeoMediumEditor);
      instance.SetDelete(&delete_TGeoMediumEditor);
      instance.SetDeleteArray(&deleteArray_TGeoMediumEditor);
      instance.SetDestructor(&destruct_TGeoMediumEditor);
      instance.SetStreamerFunc(&streamer_TGeoMediumEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMediumEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoMediumEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMediumEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNodeEditor(void *p = 0);
   static void *newArray_TGeoNodeEditor(Long_t size, void *p);
   static void delete_TGeoNodeEditor(void *p);
   static void deleteArray_TGeoNodeEditor(void *p);
   static void destruct_TGeoNodeEditor(void *p);
   static void streamer_TGeoNodeEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNodeEditor*)
   {
      ::TGeoNodeEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNodeEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNodeEditor", ::TGeoNodeEditor::Class_Version(), "TGeoNodeEditor.h", 38,
                  typeid(::TGeoNodeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNodeEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoNodeEditor) );
      instance.SetNew(&new_TGeoNodeEditor);
      instance.SetNewArray(&newArray_TGeoNodeEditor);
      instance.SetDelete(&delete_TGeoNodeEditor);
      instance.SetDeleteArray(&deleteArray_TGeoNodeEditor);
      instance.SetDestructor(&destruct_TGeoNodeEditor);
      instance.SetStreamerFunc(&streamer_TGeoNodeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNodeEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoNodeEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoNodeEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTranslationEditor(void *p = 0);
   static void *newArray_TGeoTranslationEditor(Long_t size, void *p);
   static void delete_TGeoTranslationEditor(void *p);
   static void deleteArray_TGeoTranslationEditor(void *p);
   static void destruct_TGeoTranslationEditor(void *p);
   static void streamer_TGeoTranslationEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTranslationEditor*)
   {
      ::TGeoTranslationEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTranslationEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTranslationEditor", ::TGeoTranslationEditor::Class_Version(), "TGeoMatrixEditor.h", 37,
                  typeid(::TGeoTranslationEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTranslationEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTranslationEditor) );
      instance.SetNew(&new_TGeoTranslationEditor);
      instance.SetNewArray(&newArray_TGeoTranslationEditor);
      instance.SetDelete(&delete_TGeoTranslationEditor);
      instance.SetDeleteArray(&deleteArray_TGeoTranslationEditor);
      instance.SetDestructor(&destruct_TGeoTranslationEditor);
      instance.SetStreamerFunc(&streamer_TGeoTranslationEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTranslationEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoTranslationEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTranslationEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoRotationEditor(void *p = 0);
   static void *newArray_TGeoRotationEditor(Long_t size, void *p);
   static void delete_TGeoRotationEditor(void *p);
   static void deleteArray_TGeoRotationEditor(void *p);
   static void destruct_TGeoRotationEditor(void *p);
   static void streamer_TGeoRotationEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoRotationEditor*)
   {
      ::TGeoRotationEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoRotationEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoRotationEditor", ::TGeoRotationEditor::Class_Version(), "TGeoMatrixEditor.h", 87,
                  typeid(::TGeoRotationEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoRotationEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoRotationEditor) );
      instance.SetNew(&new_TGeoRotationEditor);
      instance.SetNewArray(&newArray_TGeoRotationEditor);
      instance.SetDelete(&delete_TGeoRotationEditor);
      instance.SetDeleteArray(&deleteArray_TGeoRotationEditor);
      instance.SetDestructor(&destruct_TGeoRotationEditor);
      instance.SetStreamerFunc(&streamer_TGeoRotationEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoRotationEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoRotationEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoRotationEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCombiTransEditor(void *p = 0);
   static void *newArray_TGeoCombiTransEditor(Long_t size, void *p);
   static void delete_TGeoCombiTransEditor(void *p);
   static void deleteArray_TGeoCombiTransEditor(void *p);
   static void destruct_TGeoCombiTransEditor(void *p);
   static void streamer_TGeoCombiTransEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCombiTransEditor*)
   {
      ::TGeoCombiTransEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCombiTransEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCombiTransEditor", ::TGeoCombiTransEditor::Class_Version(), "TGeoMatrixEditor.h", 145,
                  typeid(::TGeoCombiTransEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCombiTransEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoCombiTransEditor) );
      instance.SetNew(&new_TGeoCombiTransEditor);
      instance.SetNewArray(&newArray_TGeoCombiTransEditor);
      instance.SetDelete(&delete_TGeoCombiTransEditor);
      instance.SetDeleteArray(&deleteArray_TGeoCombiTransEditor);
      instance.SetDestructor(&destruct_TGeoCombiTransEditor);
      instance.SetStreamerFunc(&streamer_TGeoCombiTransEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCombiTransEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoCombiTransEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoCombiTransEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoManagerEditor(void *p = 0);
   static void *newArray_TGeoManagerEditor(Long_t size, void *p);
   static void delete_TGeoManagerEditor(void *p);
   static void deleteArray_TGeoManagerEditor(void *p);
   static void destruct_TGeoManagerEditor(void *p);
   static void streamer_TGeoManagerEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoManagerEditor*)
   {
      ::TGeoManagerEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoManagerEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoManagerEditor", ::TGeoManagerEditor::Class_Version(), "TGeoManagerEditor.h", 44,
                  typeid(::TGeoManagerEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoManagerEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoManagerEditor) );
      instance.SetNew(&new_TGeoManagerEditor);
      instance.SetNewArray(&newArray_TGeoManagerEditor);
      instance.SetDelete(&delete_TGeoManagerEditor);
      instance.SetDeleteArray(&deleteArray_TGeoManagerEditor);
      instance.SetDestructor(&destruct_TGeoManagerEditor);
      instance.SetStreamerFunc(&streamer_TGeoManagerEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoManagerEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoManagerEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoManagerEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTubeEditor(void *p = 0);
   static void *newArray_TGeoTubeEditor(Long_t size, void *p);
   static void delete_TGeoTubeEditor(void *p);
   static void deleteArray_TGeoTubeEditor(void *p);
   static void destruct_TGeoTubeEditor(void *p);
   static void streamer_TGeoTubeEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTubeEditor*)
   {
      ::TGeoTubeEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTubeEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTubeEditor", ::TGeoTubeEditor::Class_Version(), "TGeoTubeEditor.h", 35,
                  typeid(::TGeoTubeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTubeEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTubeEditor) );
      instance.SetNew(&new_TGeoTubeEditor);
      instance.SetNewArray(&newArray_TGeoTubeEditor);
      instance.SetDelete(&delete_TGeoTubeEditor);
      instance.SetDeleteArray(&deleteArray_TGeoTubeEditor);
      instance.SetDestructor(&destruct_TGeoTubeEditor);
      instance.SetStreamerFunc(&streamer_TGeoTubeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTubeEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoTubeEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTubeEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTubeSegEditor(void *p = 0);
   static void *newArray_TGeoTubeSegEditor(Long_t size, void *p);
   static void delete_TGeoTubeSegEditor(void *p);
   static void deleteArray_TGeoTubeSegEditor(void *p);
   static void destruct_TGeoTubeSegEditor(void *p);
   static void streamer_TGeoTubeSegEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTubeSegEditor*)
   {
      ::TGeoTubeSegEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTubeSegEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTubeSegEditor", ::TGeoTubeSegEditor::Class_Version(), "TGeoTubeEditor.h", 89,
                  typeid(::TGeoTubeSegEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTubeSegEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTubeSegEditor) );
      instance.SetNew(&new_TGeoTubeSegEditor);
      instance.SetNewArray(&newArray_TGeoTubeSegEditor);
      instance.SetDelete(&delete_TGeoTubeSegEditor);
      instance.SetDeleteArray(&deleteArray_TGeoTubeSegEditor);
      instance.SetDestructor(&destruct_TGeoTubeSegEditor);
      instance.SetStreamerFunc(&streamer_TGeoTubeSegEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTubeSegEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoTubeSegEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTubeSegEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCtubEditor(void *p = 0);
   static void *newArray_TGeoCtubEditor(Long_t size, void *p);
   static void delete_TGeoCtubEditor(void *p);
   static void deleteArray_TGeoCtubEditor(void *p);
   static void destruct_TGeoCtubEditor(void *p);
   static void streamer_TGeoCtubEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCtubEditor*)
   {
      ::TGeoCtubEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCtubEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCtubEditor", ::TGeoCtubEditor::Class_Version(), "TGeoTubeEditor.h", 127,
                  typeid(::TGeoCtubEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCtubEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoCtubEditor) );
      instance.SetNew(&new_TGeoCtubEditor);
      instance.SetNewArray(&newArray_TGeoCtubEditor);
      instance.SetDelete(&delete_TGeoCtubEditor);
      instance.SetDeleteArray(&deleteArray_TGeoCtubEditor);
      instance.SetDestructor(&destruct_TGeoCtubEditor);
      instance.SetStreamerFunc(&streamer_TGeoCtubEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCtubEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoCtubEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoCtubEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoConeEditor(void *p = 0);
   static void *newArray_TGeoConeEditor(Long_t size, void *p);
   static void delete_TGeoConeEditor(void *p);
   static void deleteArray_TGeoConeEditor(void *p);
   static void destruct_TGeoConeEditor(void *p);
   static void streamer_TGeoConeEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoConeEditor*)
   {
      ::TGeoConeEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoConeEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoConeEditor", ::TGeoConeEditor::Class_Version(), "TGeoConeEditor.h", 36,
                  typeid(::TGeoConeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoConeEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoConeEditor) );
      instance.SetNew(&new_TGeoConeEditor);
      instance.SetNewArray(&newArray_TGeoConeEditor);
      instance.SetDelete(&delete_TGeoConeEditor);
      instance.SetDeleteArray(&deleteArray_TGeoConeEditor);
      instance.SetDestructor(&destruct_TGeoConeEditor);
      instance.SetStreamerFunc(&streamer_TGeoConeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoConeEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoConeEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoConeEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoConeSegEditor(void *p = 0);
   static void *newArray_TGeoConeSegEditor(Long_t size, void *p);
   static void delete_TGeoConeSegEditor(void *p);
   static void deleteArray_TGeoConeSegEditor(void *p);
   static void destruct_TGeoConeSegEditor(void *p);
   static void streamer_TGeoConeSegEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoConeSegEditor*)
   {
      ::TGeoConeSegEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoConeSegEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoConeSegEditor", ::TGeoConeSegEditor::Class_Version(), "TGeoConeEditor.h", 95,
                  typeid(::TGeoConeSegEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoConeSegEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoConeSegEditor) );
      instance.SetNew(&new_TGeoConeSegEditor);
      instance.SetNewArray(&newArray_TGeoConeSegEditor);
      instance.SetDelete(&delete_TGeoConeSegEditor);
      instance.SetDeleteArray(&deleteArray_TGeoConeSegEditor);
      instance.SetDestructor(&destruct_TGeoConeSegEditor);
      instance.SetStreamerFunc(&streamer_TGeoConeSegEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoConeSegEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoConeSegEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoConeSegEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrd1Editor(void *p = 0);
   static void *newArray_TGeoTrd1Editor(Long_t size, void *p);
   static void delete_TGeoTrd1Editor(void *p);
   static void deleteArray_TGeoTrd1Editor(void *p);
   static void destruct_TGeoTrd1Editor(void *p);
   static void streamer_TGeoTrd1Editor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrd1Editor*)
   {
      ::TGeoTrd1Editor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrd1Editor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrd1Editor", ::TGeoTrd1Editor::Class_Version(), "TGeoTrd1Editor.h", 35,
                  typeid(::TGeoTrd1Editor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrd1Editor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTrd1Editor) );
      instance.SetNew(&new_TGeoTrd1Editor);
      instance.SetNewArray(&newArray_TGeoTrd1Editor);
      instance.SetDelete(&delete_TGeoTrd1Editor);
      instance.SetDeleteArray(&deleteArray_TGeoTrd1Editor);
      instance.SetDestructor(&destruct_TGeoTrd1Editor);
      instance.SetStreamerFunc(&streamer_TGeoTrd1Editor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrd1Editor*)
   {
      return GenerateInitInstanceLocal((::TGeoTrd1Editor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTrd1Editor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrd2Editor(void *p = 0);
   static void *newArray_TGeoTrd2Editor(Long_t size, void *p);
   static void delete_TGeoTrd2Editor(void *p);
   static void deleteArray_TGeoTrd2Editor(void *p);
   static void destruct_TGeoTrd2Editor(void *p);
   static void streamer_TGeoTrd2Editor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrd2Editor*)
   {
      ::TGeoTrd2Editor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrd2Editor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrd2Editor", ::TGeoTrd2Editor::Class_Version(), "TGeoTrd2Editor.h", 35,
                  typeid(::TGeoTrd2Editor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrd2Editor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTrd2Editor) );
      instance.SetNew(&new_TGeoTrd2Editor);
      instance.SetNewArray(&newArray_TGeoTrd2Editor);
      instance.SetDelete(&delete_TGeoTrd2Editor);
      instance.SetDeleteArray(&deleteArray_TGeoTrd2Editor);
      instance.SetDestructor(&destruct_TGeoTrd2Editor);
      instance.SetStreamerFunc(&streamer_TGeoTrd2Editor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrd2Editor*)
   {
      return GenerateInitInstanceLocal((::TGeoTrd2Editor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTrd2Editor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMaterialEditor(void *p = 0);
   static void *newArray_TGeoMaterialEditor(Long_t size, void *p);
   static void delete_TGeoMaterialEditor(void *p);
   static void deleteArray_TGeoMaterialEditor(void *p);
   static void destruct_TGeoMaterialEditor(void *p);
   static void streamer_TGeoMaterialEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMaterialEditor*)
   {
      ::TGeoMaterialEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMaterialEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMaterialEditor", ::TGeoMaterialEditor::Class_Version(), "TGeoMaterialEditor.h", 35,
                  typeid(::TGeoMaterialEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMaterialEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoMaterialEditor) );
      instance.SetNew(&new_TGeoMaterialEditor);
      instance.SetNewArray(&newArray_TGeoMaterialEditor);
      instance.SetDelete(&delete_TGeoMaterialEditor);
      instance.SetDeleteArray(&deleteArray_TGeoMaterialEditor);
      instance.SetDestructor(&destruct_TGeoMaterialEditor);
      instance.SetStreamerFunc(&streamer_TGeoMaterialEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMaterialEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoMaterialEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMaterialEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMixtureEditor(void *p = 0);
   static void *newArray_TGeoMixtureEditor(Long_t size, void *p);
   static void delete_TGeoMixtureEditor(void *p);
   static void deleteArray_TGeoMixtureEditor(void *p);
   static void destruct_TGeoMixtureEditor(void *p);
   static void streamer_TGeoMixtureEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMixtureEditor*)
   {
      ::TGeoMixtureEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMixtureEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMixtureEditor", ::TGeoMixtureEditor::Class_Version(), "TGeoMaterialEditor.h", 99,
                  typeid(::TGeoMixtureEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMixtureEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoMixtureEditor) );
      instance.SetNew(&new_TGeoMixtureEditor);
      instance.SetNewArray(&newArray_TGeoMixtureEditor);
      instance.SetDelete(&delete_TGeoMixtureEditor);
      instance.SetDeleteArray(&deleteArray_TGeoMixtureEditor);
      instance.SetDestructor(&destruct_TGeoMixtureEditor);
      instance.SetStreamerFunc(&streamer_TGeoMixtureEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMixtureEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoMixtureEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMixtureEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoTabManager(void *p);
   static void deleteArray_TGeoTabManager(void *p);
   static void destruct_TGeoTabManager(void *p);
   static void streamer_TGeoTabManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTabManager*)
   {
      ::TGeoTabManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTabManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTabManager", ::TGeoTabManager::Class_Version(), "TGeoTabManager.h", 50,
                  typeid(::TGeoTabManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTabManager::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTabManager) );
      instance.SetDelete(&delete_TGeoTabManager);
      instance.SetDeleteArray(&deleteArray_TGeoTabManager);
      instance.SetDestructor(&destruct_TGeoTabManager);
      instance.SetStreamerFunc(&streamer_TGeoTabManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTabManager*)
   {
      return GenerateInitInstanceLocal((::TGeoTabManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTabManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoTreeDialog(void *p);
   static void deleteArray_TGeoTreeDialog(void *p);
   static void destruct_TGeoTreeDialog(void *p);
   static void streamer_TGeoTreeDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTreeDialog*)
   {
      ::TGeoTreeDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTreeDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTreeDialog", ::TGeoTreeDialog::Class_Version(), "TGeoTabManager.h", 100,
                  typeid(::TGeoTreeDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTreeDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTreeDialog) );
      instance.SetDelete(&delete_TGeoTreeDialog);
      instance.SetDeleteArray(&deleteArray_TGeoTreeDialog);
      instance.SetDestructor(&destruct_TGeoTreeDialog);
      instance.SetStreamerFunc(&streamer_TGeoTreeDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTreeDialog*)
   {
      return GenerateInitInstanceLocal((::TGeoTreeDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTreeDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoVolumeDialog(void *p);
   static void deleteArray_TGeoVolumeDialog(void *p);
   static void destruct_TGeoVolumeDialog(void *p);
   static void streamer_TGeoVolumeDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVolumeDialog*)
   {
      ::TGeoVolumeDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVolumeDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVolumeDialog", ::TGeoVolumeDialog::Class_Version(), "TGeoTabManager.h", 133,
                  typeid(::TGeoVolumeDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVolumeDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoVolumeDialog) );
      instance.SetDelete(&delete_TGeoVolumeDialog);
      instance.SetDeleteArray(&deleteArray_TGeoVolumeDialog);
      instance.SetDestructor(&destruct_TGeoVolumeDialog);
      instance.SetStreamerFunc(&streamer_TGeoVolumeDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVolumeDialog*)
   {
      return GenerateInitInstanceLocal((::TGeoVolumeDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoVolumeDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoShapeDialog(void *p);
   static void deleteArray_TGeoShapeDialog(void *p);
   static void destruct_TGeoShapeDialog(void *p);
   static void streamer_TGeoShapeDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoShapeDialog*)
   {
      ::TGeoShapeDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoShapeDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoShapeDialog", ::TGeoShapeDialog::Class_Version(), "TGeoTabManager.h", 158,
                  typeid(::TGeoShapeDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoShapeDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoShapeDialog) );
      instance.SetDelete(&delete_TGeoShapeDialog);
      instance.SetDeleteArray(&deleteArray_TGeoShapeDialog);
      instance.SetDestructor(&destruct_TGeoShapeDialog);
      instance.SetStreamerFunc(&streamer_TGeoShapeDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoShapeDialog*)
   {
      return GenerateInitInstanceLocal((::TGeoShapeDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoShapeDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoMediumDialog(void *p);
   static void deleteArray_TGeoMediumDialog(void *p);
   static void destruct_TGeoMediumDialog(void *p);
   static void streamer_TGeoMediumDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMediumDialog*)
   {
      ::TGeoMediumDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMediumDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMediumDialog", ::TGeoMediumDialog::Class_Version(), "TGeoTabManager.h", 183,
                  typeid(::TGeoMediumDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMediumDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoMediumDialog) );
      instance.SetDelete(&delete_TGeoMediumDialog);
      instance.SetDeleteArray(&deleteArray_TGeoMediumDialog);
      instance.SetDestructor(&destruct_TGeoMediumDialog);
      instance.SetStreamerFunc(&streamer_TGeoMediumDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMediumDialog*)
   {
      return GenerateInitInstanceLocal((::TGeoMediumDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMediumDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoMaterialDialog(void *p);
   static void deleteArray_TGeoMaterialDialog(void *p);
   static void destruct_TGeoMaterialDialog(void *p);
   static void streamer_TGeoMaterialDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMaterialDialog*)
   {
      ::TGeoMaterialDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMaterialDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMaterialDialog", ::TGeoMaterialDialog::Class_Version(), "TGeoTabManager.h", 208,
                  typeid(::TGeoMaterialDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMaterialDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoMaterialDialog) );
      instance.SetDelete(&delete_TGeoMaterialDialog);
      instance.SetDeleteArray(&deleteArray_TGeoMaterialDialog);
      instance.SetDestructor(&destruct_TGeoMaterialDialog);
      instance.SetStreamerFunc(&streamer_TGeoMaterialDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMaterialDialog*)
   {
      return GenerateInitInstanceLocal((::TGeoMaterialDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMaterialDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoMatrixDialog(void *p);
   static void deleteArray_TGeoMatrixDialog(void *p);
   static void destruct_TGeoMatrixDialog(void *p);
   static void streamer_TGeoMatrixDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMatrixDialog*)
   {
      ::TGeoMatrixDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMatrixDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMatrixDialog", ::TGeoMatrixDialog::Class_Version(), "TGeoTabManager.h", 233,
                  typeid(::TGeoMatrixDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMatrixDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoMatrixDialog) );
      instance.SetDelete(&delete_TGeoMatrixDialog);
      instance.SetDeleteArray(&deleteArray_TGeoMatrixDialog);
      instance.SetDestructor(&destruct_TGeoMatrixDialog);
      instance.SetStreamerFunc(&streamer_TGeoMatrixDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMatrixDialog*)
   {
      return GenerateInitInstanceLocal((::TGeoMatrixDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoMatrixDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoTransientPanel(void *p);
   static void deleteArray_TGeoTransientPanel(void *p);
   static void destruct_TGeoTransientPanel(void *p);
   static void streamer_TGeoTransientPanel(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTransientPanel*)
   {
      ::TGeoTransientPanel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTransientPanel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTransientPanel", ::TGeoTransientPanel::Class_Version(), "TGeoTabManager.h", 258,
                  typeid(::TGeoTransientPanel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTransientPanel::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTransientPanel) );
      instance.SetDelete(&delete_TGeoTransientPanel);
      instance.SetDeleteArray(&deleteArray_TGeoTransientPanel);
      instance.SetDestructor(&destruct_TGeoTransientPanel);
      instance.SetStreamerFunc(&streamer_TGeoTransientPanel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTransientPanel*)
   {
      return GenerateInitInstanceLocal((::TGeoTransientPanel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTransientPanel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoSphereEditor(void *p = 0);
   static void *newArray_TGeoSphereEditor(Long_t size, void *p);
   static void delete_TGeoSphereEditor(void *p);
   static void deleteArray_TGeoSphereEditor(void *p);
   static void destruct_TGeoSphereEditor(void *p);
   static void streamer_TGeoSphereEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoSphereEditor*)
   {
      ::TGeoSphereEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoSphereEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoSphereEditor", ::TGeoSphereEditor::Class_Version(), "TGeoSphereEditor.h", 36,
                  typeid(::TGeoSphereEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoSphereEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoSphereEditor) );
      instance.SetNew(&new_TGeoSphereEditor);
      instance.SetNewArray(&newArray_TGeoSphereEditor);
      instance.SetDelete(&delete_TGeoSphereEditor);
      instance.SetDeleteArray(&deleteArray_TGeoSphereEditor);
      instance.SetDestructor(&destruct_TGeoSphereEditor);
      instance.SetStreamerFunc(&streamer_TGeoSphereEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoSphereEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoSphereEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoSphereEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPconEditor(void *p = 0);
   static void *newArray_TGeoPconEditor(Long_t size, void *p);
   static void delete_TGeoPconEditor(void *p);
   static void deleteArray_TGeoPconEditor(void *p);
   static void destruct_TGeoPconEditor(void *p);
   static void streamer_TGeoPconEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPconEditor*)
   {
      ::TGeoPconEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPconEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPconEditor", ::TGeoPconEditor::Class_Version(), "TGeoPconEditor.h", 37,
                  typeid(::TGeoPconEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPconEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoPconEditor) );
      instance.SetNew(&new_TGeoPconEditor);
      instance.SetNewArray(&newArray_TGeoPconEditor);
      instance.SetDelete(&delete_TGeoPconEditor);
      instance.SetDeleteArray(&deleteArray_TGeoPconEditor);
      instance.SetDestructor(&destruct_TGeoPconEditor);
      instance.SetStreamerFunc(&streamer_TGeoPconEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPconEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoPconEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPconEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoPconSection(void *p);
   static void deleteArray_TGeoPconSection(void *p);
   static void destruct_TGeoPconSection(void *p);
   static void streamer_TGeoPconSection(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPconSection*)
   {
      ::TGeoPconSection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPconSection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPconSection", ::TGeoPconSection::Class_Version(), "TGeoPconEditor.h", 97,
                  typeid(::TGeoPconSection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPconSection::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoPconSection) );
      instance.SetDelete(&delete_TGeoPconSection);
      instance.SetDeleteArray(&deleteArray_TGeoPconSection);
      instance.SetDestructor(&destruct_TGeoPconSection);
      instance.SetStreamerFunc(&streamer_TGeoPconSection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPconSection*)
   {
      return GenerateInitInstanceLocal((::TGeoPconSection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPconSection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoParaEditor(void *p = 0);
   static void *newArray_TGeoParaEditor(Long_t size, void *p);
   static void delete_TGeoParaEditor(void *p);
   static void deleteArray_TGeoParaEditor(void *p);
   static void destruct_TGeoParaEditor(void *p);
   static void streamer_TGeoParaEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoParaEditor*)
   {
      ::TGeoParaEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoParaEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoParaEditor", ::TGeoParaEditor::Class_Version(), "TGeoParaEditor.h", 35,
                  typeid(::TGeoParaEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoParaEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoParaEditor) );
      instance.SetNew(&new_TGeoParaEditor);
      instance.SetNewArray(&newArray_TGeoParaEditor);
      instance.SetDelete(&delete_TGeoParaEditor);
      instance.SetDeleteArray(&deleteArray_TGeoParaEditor);
      instance.SetDestructor(&destruct_TGeoParaEditor);
      instance.SetStreamerFunc(&streamer_TGeoParaEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoParaEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoParaEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoParaEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTorusEditor(void *p = 0);
   static void *newArray_TGeoTorusEditor(Long_t size, void *p);
   static void delete_TGeoTorusEditor(void *p);
   static void deleteArray_TGeoTorusEditor(void *p);
   static void destruct_TGeoTorusEditor(void *p);
   static void streamer_TGeoTorusEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTorusEditor*)
   {
      ::TGeoTorusEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTorusEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTorusEditor", ::TGeoTorusEditor::Class_Version(), "TGeoTorusEditor.h", 35,
                  typeid(::TGeoTorusEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTorusEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTorusEditor) );
      instance.SetNew(&new_TGeoTorusEditor);
      instance.SetNewArray(&newArray_TGeoTorusEditor);
      instance.SetDelete(&delete_TGeoTorusEditor);
      instance.SetDeleteArray(&deleteArray_TGeoTorusEditor);
      instance.SetDestructor(&destruct_TGeoTorusEditor);
      instance.SetStreamerFunc(&streamer_TGeoTorusEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTorusEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoTorusEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTorusEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoEltuEditor(void *p = 0);
   static void *newArray_TGeoEltuEditor(Long_t size, void *p);
   static void delete_TGeoEltuEditor(void *p);
   static void deleteArray_TGeoEltuEditor(void *p);
   static void destruct_TGeoEltuEditor(void *p);
   static void streamer_TGeoEltuEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoEltuEditor*)
   {
      ::TGeoEltuEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoEltuEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoEltuEditor", ::TGeoEltuEditor::Class_Version(), "TGeoEltuEditor.h", 35,
                  typeid(::TGeoEltuEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoEltuEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoEltuEditor) );
      instance.SetNew(&new_TGeoEltuEditor);
      instance.SetNewArray(&newArray_TGeoEltuEditor);
      instance.SetDelete(&delete_TGeoEltuEditor);
      instance.SetDeleteArray(&deleteArray_TGeoEltuEditor);
      instance.SetDestructor(&destruct_TGeoEltuEditor);
      instance.SetStreamerFunc(&streamer_TGeoEltuEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoEltuEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoEltuEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoEltuEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoHypeEditor(void *p = 0);
   static void *newArray_TGeoHypeEditor(Long_t size, void *p);
   static void delete_TGeoHypeEditor(void *p);
   static void deleteArray_TGeoHypeEditor(void *p);
   static void destruct_TGeoHypeEditor(void *p);
   static void streamer_TGeoHypeEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoHypeEditor*)
   {
      ::TGeoHypeEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoHypeEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoHypeEditor", ::TGeoHypeEditor::Class_Version(), "TGeoHypeEditor.h", 35,
                  typeid(::TGeoHypeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoHypeEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoHypeEditor) );
      instance.SetNew(&new_TGeoHypeEditor);
      instance.SetNewArray(&newArray_TGeoHypeEditor);
      instance.SetDelete(&delete_TGeoHypeEditor);
      instance.SetDeleteArray(&deleteArray_TGeoHypeEditor);
      instance.SetDestructor(&destruct_TGeoHypeEditor);
      instance.SetStreamerFunc(&streamer_TGeoHypeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoHypeEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoHypeEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoHypeEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPgonEditor(void *p = 0);
   static void *newArray_TGeoPgonEditor(Long_t size, void *p);
   static void delete_TGeoPgonEditor(void *p);
   static void deleteArray_TGeoPgonEditor(void *p);
   static void destruct_TGeoPgonEditor(void *p);
   static void streamer_TGeoPgonEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPgonEditor*)
   {
      ::TGeoPgonEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPgonEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPgonEditor", ::TGeoPgonEditor::Class_Version(), "TGeoPgonEditor.h", 28,
                  typeid(::TGeoPgonEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPgonEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoPgonEditor) );
      instance.SetNew(&new_TGeoPgonEditor);
      instance.SetNewArray(&newArray_TGeoPgonEditor);
      instance.SetDelete(&delete_TGeoPgonEditor);
      instance.SetDeleteArray(&deleteArray_TGeoPgonEditor);
      instance.SetDestructor(&destruct_TGeoPgonEditor);
      instance.SetStreamerFunc(&streamer_TGeoPgonEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPgonEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoPgonEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoPgonEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrapEditor(void *p = 0);
   static void *newArray_TGeoTrapEditor(Long_t size, void *p);
   static void delete_TGeoTrapEditor(void *p);
   static void deleteArray_TGeoTrapEditor(void *p);
   static void destruct_TGeoTrapEditor(void *p);
   static void streamer_TGeoTrapEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrapEditor*)
   {
      ::TGeoTrapEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrapEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrapEditor", ::TGeoTrapEditor::Class_Version(), "TGeoTrapEditor.h", 35,
                  typeid(::TGeoTrapEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrapEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoTrapEditor) );
      instance.SetNew(&new_TGeoTrapEditor);
      instance.SetNewArray(&newArray_TGeoTrapEditor);
      instance.SetDelete(&delete_TGeoTrapEditor);
      instance.SetDeleteArray(&deleteArray_TGeoTrapEditor);
      instance.SetDestructor(&destruct_TGeoTrapEditor);
      instance.SetStreamerFunc(&streamer_TGeoTrapEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrapEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoTrapEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoTrapEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoGtraEditor(void *p = 0);
   static void *newArray_TGeoGtraEditor(Long_t size, void *p);
   static void delete_TGeoGtraEditor(void *p);
   static void deleteArray_TGeoGtraEditor(void *p);
   static void destruct_TGeoGtraEditor(void *p);
   static void streamer_TGeoGtraEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoGtraEditor*)
   {
      ::TGeoGtraEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoGtraEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoGtraEditor", ::TGeoGtraEditor::Class_Version(), "TGeoTrapEditor.h", 96,
                  typeid(::TGeoGtraEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoGtraEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoGtraEditor) );
      instance.SetNew(&new_TGeoGtraEditor);
      instance.SetNewArray(&newArray_TGeoGtraEditor);
      instance.SetDelete(&delete_TGeoGtraEditor);
      instance.SetDeleteArray(&deleteArray_TGeoGtraEditor);
      instance.SetDestructor(&destruct_TGeoGtraEditor);
      instance.SetStreamerFunc(&streamer_TGeoGtraEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoGtraEditor*)
   {
      return GenerateInitInstanceLocal((::TGeoGtraEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGeoGtraEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGeoGedFrame::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoGedFrame::Class_Name()
{
   return "TGeoGedFrame";
}

//______________________________________________________________________________
const char *TGeoGedFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGedFrame*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoGedFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGedFrame*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoGedFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGedFrame*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoGedFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGedFrame*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVolumeEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVolumeEditor::Class_Name()
{
   return "TGeoVolumeEditor";
}

//______________________________________________________________________________
const char *TGeoVolumeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVolumeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVolumeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVolumeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBBoxEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBBoxEditor::Class_Name()
{
   return "TGeoBBoxEditor";
}

//______________________________________________________________________________
const char *TGeoBBoxEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBoxEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBBoxEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBoxEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBBoxEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBoxEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBBoxEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBoxEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMediumEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMediumEditor::Class_Name()
{
   return "TGeoMediumEditor";
}

//______________________________________________________________________________
const char *TGeoMediumEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMediumEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMediumEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMediumEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMediumEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMediumEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMediumEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMediumEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNodeEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNodeEditor::Class_Name()
{
   return "TGeoNodeEditor";
}

//______________________________________________________________________________
const char *TGeoNodeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNodeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNodeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNodeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTranslationEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTranslationEditor::Class_Name()
{
   return "TGeoTranslationEditor";
}

//______________________________________________________________________________
const char *TGeoTranslationEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslationEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTranslationEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslationEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTranslationEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslationEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTranslationEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslationEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoRotationEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoRotationEditor::Class_Name()
{
   return "TGeoRotationEditor";
}

//______________________________________________________________________________
const char *TGeoRotationEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotationEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoRotationEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotationEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoRotationEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotationEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoRotationEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotationEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCombiTransEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCombiTransEditor::Class_Name()
{
   return "TGeoCombiTransEditor";
}

//______________________________________________________________________________
const char *TGeoCombiTransEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTransEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCombiTransEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTransEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCombiTransEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTransEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCombiTransEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTransEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoManagerEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoManagerEditor::Class_Name()
{
   return "TGeoManagerEditor";
}

//______________________________________________________________________________
const char *TGeoManagerEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoManagerEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoManagerEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoManagerEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoManagerEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoManagerEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoManagerEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoManagerEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTubeEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTubeEditor::Class_Name()
{
   return "TGeoTubeEditor";
}

//______________________________________________________________________________
const char *TGeoTubeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTubeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTubeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTubeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTubeSegEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTubeSegEditor::Class_Name()
{
   return "TGeoTubeSegEditor";
}

//______________________________________________________________________________
const char *TGeoTubeSegEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSegEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTubeSegEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSegEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTubeSegEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSegEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTubeSegEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSegEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCtubEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCtubEditor::Class_Name()
{
   return "TGeoCtubEditor";
}

//______________________________________________________________________________
const char *TGeoCtubEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtubEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCtubEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtubEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCtubEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtubEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCtubEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtubEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoConeEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoConeEditor::Class_Name()
{
   return "TGeoConeEditor";
}

//______________________________________________________________________________
const char *TGeoConeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoConeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoConeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoConeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoConeSegEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoConeSegEditor::Class_Name()
{
   return "TGeoConeSegEditor";
}

//______________________________________________________________________________
const char *TGeoConeSegEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSegEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoConeSegEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSegEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoConeSegEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSegEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoConeSegEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSegEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrd1Editor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrd1Editor::Class_Name()
{
   return "TGeoTrd1Editor";
}

//______________________________________________________________________________
const char *TGeoTrd1Editor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1Editor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrd1Editor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1Editor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrd1Editor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1Editor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrd1Editor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1Editor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrd2Editor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrd2Editor::Class_Name()
{
   return "TGeoTrd2Editor";
}

//______________________________________________________________________________
const char *TGeoTrd2Editor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2Editor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrd2Editor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2Editor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrd2Editor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2Editor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrd2Editor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2Editor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMaterialEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMaterialEditor::Class_Name()
{
   return "TGeoMaterialEditor";
}

//______________________________________________________________________________
const char *TGeoMaterialEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterialEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMaterialEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterialEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMaterialEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterialEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMaterialEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterialEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMixtureEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMixtureEditor::Class_Name()
{
   return "TGeoMixtureEditor";
}

//______________________________________________________________________________
const char *TGeoMixtureEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixtureEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMixtureEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixtureEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMixtureEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixtureEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMixtureEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixtureEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTabManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTabManager::Class_Name()
{
   return "TGeoTabManager";
}

//______________________________________________________________________________
const char *TGeoTabManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTabManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTabManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTabManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTabManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTabManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTabManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTabManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTreeDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTreeDialog::Class_Name()
{
   return "TGeoTreeDialog";
}

//______________________________________________________________________________
const char *TGeoTreeDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTreeDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTreeDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTreeDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTreeDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTreeDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTreeDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTreeDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVolumeDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVolumeDialog::Class_Name()
{
   return "TGeoVolumeDialog";
}

//______________________________________________________________________________
const char *TGeoVolumeDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVolumeDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVolumeDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVolumeDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoShapeDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoShapeDialog::Class_Name()
{
   return "TGeoShapeDialog";
}

//______________________________________________________________________________
const char *TGeoShapeDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoShapeDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoShapeDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoShapeDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMediumDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMediumDialog::Class_Name()
{
   return "TGeoMediumDialog";
}

//______________________________________________________________________________
const char *TGeoMediumDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMediumDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMediumDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMediumDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMediumDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMediumDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMediumDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMediumDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMaterialDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMaterialDialog::Class_Name()
{
   return "TGeoMaterialDialog";
}

//______________________________________________________________________________
const char *TGeoMaterialDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterialDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMaterialDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterialDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMaterialDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterialDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMaterialDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterialDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMatrixDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMatrixDialog::Class_Name()
{
   return "TGeoMatrixDialog";
}

//______________________________________________________________________________
const char *TGeoMatrixDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrixDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMatrixDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrixDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMatrixDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrixDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMatrixDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrixDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTransientPanel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTransientPanel::Class_Name()
{
   return "TGeoTransientPanel";
}

//______________________________________________________________________________
const char *TGeoTransientPanel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTransientPanel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTransientPanel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTransientPanel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTransientPanel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTransientPanel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTransientPanel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTransientPanel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoSphereEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoSphereEditor::Class_Name()
{
   return "TGeoSphereEditor";
}

//______________________________________________________________________________
const char *TGeoSphereEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphereEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoSphereEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphereEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoSphereEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphereEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoSphereEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphereEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPconEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPconEditor::Class_Name()
{
   return "TGeoPconEditor";
}

//______________________________________________________________________________
const char *TGeoPconEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPconEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPconEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPconEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPconEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPconEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPconEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPconEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPconSection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPconSection::Class_Name()
{
   return "TGeoPconSection";
}

//______________________________________________________________________________
const char *TGeoPconSection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPconSection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPconSection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPconSection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPconSection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPconSection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPconSection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPconSection*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoParaEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoParaEditor::Class_Name()
{
   return "TGeoParaEditor";
}

//______________________________________________________________________________
const char *TGeoParaEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoParaEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoParaEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoParaEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTorusEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTorusEditor::Class_Name()
{
   return "TGeoTorusEditor";
}

//______________________________________________________________________________
const char *TGeoTorusEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorusEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTorusEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorusEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTorusEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorusEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTorusEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorusEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoEltuEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoEltuEditor::Class_Name()
{
   return "TGeoEltuEditor";
}

//______________________________________________________________________________
const char *TGeoEltuEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltuEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoEltuEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltuEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoEltuEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltuEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoEltuEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltuEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoHypeEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoHypeEditor::Class_Name()
{
   return "TGeoHypeEditor";
}

//______________________________________________________________________________
const char *TGeoHypeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHypeEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoHypeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHypeEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoHypeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHypeEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoHypeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHypeEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPgonEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPgonEditor::Class_Name()
{
   return "TGeoPgonEditor";
}

//______________________________________________________________________________
const char *TGeoPgonEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgonEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPgonEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgonEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPgonEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgonEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPgonEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgonEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrapEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrapEditor::Class_Name()
{
   return "TGeoTrapEditor";
}

//______________________________________________________________________________
const char *TGeoTrapEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrapEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrapEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrapEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrapEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrapEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrapEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrapEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoGtraEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoGtraEditor::Class_Name()
{
   return "TGeoGtraEditor";
}

//______________________________________________________________________________
const char *TGeoGtraEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtraEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoGtraEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtraEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoGtraEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtraEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoGtraEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtraEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGeoGedFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoGedFrame.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoGedFrame(void *p) {
      delete ((::TGeoGedFrame*)p);
   }
   static void deleteArray_TGeoGedFrame(void *p) {
      delete [] ((::TGeoGedFrame*)p);
   }
   static void destruct_TGeoGedFrame(void *p) {
      typedef ::TGeoGedFrame current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoGedFrame(TBuffer &buf, void *obj) {
      ((::TGeoGedFrame*)obj)->::TGeoGedFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoGedFrame

//______________________________________________________________________________
void TGeoVolumeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoVolumeEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoVolumeEditor(void *p) {
      return  p ? new(p) ::TGeoVolumeEditor : new ::TGeoVolumeEditor;
   }
   static void *newArray_TGeoVolumeEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoVolumeEditor[nElements] : new ::TGeoVolumeEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoVolumeEditor(void *p) {
      delete ((::TGeoVolumeEditor*)p);
   }
   static void deleteArray_TGeoVolumeEditor(void *p) {
      delete [] ((::TGeoVolumeEditor*)p);
   }
   static void destruct_TGeoVolumeEditor(void *p) {
      typedef ::TGeoVolumeEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoVolumeEditor(TBuffer &buf, void *obj) {
      ((::TGeoVolumeEditor*)obj)->::TGeoVolumeEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoVolumeEditor

//______________________________________________________________________________
void TGeoBBoxEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBBoxEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoBBoxEditor(void *p) {
      return  p ? new(p) ::TGeoBBoxEditor : new ::TGeoBBoxEditor;
   }
   static void *newArray_TGeoBBoxEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoBBoxEditor[nElements] : new ::TGeoBBoxEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoBBoxEditor(void *p) {
      delete ((::TGeoBBoxEditor*)p);
   }
   static void deleteArray_TGeoBBoxEditor(void *p) {
      delete [] ((::TGeoBBoxEditor*)p);
   }
   static void destruct_TGeoBBoxEditor(void *p) {
      typedef ::TGeoBBoxEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoBBoxEditor(TBuffer &buf, void *obj) {
      ((::TGeoBBoxEditor*)obj)->::TGeoBBoxEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoBBoxEditor

//______________________________________________________________________________
void TGeoMediumEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMediumEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMediumEditor(void *p) {
      return  p ? new(p) ::TGeoMediumEditor : new ::TGeoMediumEditor;
   }
   static void *newArray_TGeoMediumEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMediumEditor[nElements] : new ::TGeoMediumEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMediumEditor(void *p) {
      delete ((::TGeoMediumEditor*)p);
   }
   static void deleteArray_TGeoMediumEditor(void *p) {
      delete [] ((::TGeoMediumEditor*)p);
   }
   static void destruct_TGeoMediumEditor(void *p) {
      typedef ::TGeoMediumEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoMediumEditor(TBuffer &buf, void *obj) {
      ((::TGeoMediumEditor*)obj)->::TGeoMediumEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoMediumEditor

//______________________________________________________________________________
void TGeoNodeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNodeEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNodeEditor(void *p) {
      return  p ? new(p) ::TGeoNodeEditor : new ::TGeoNodeEditor;
   }
   static void *newArray_TGeoNodeEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNodeEditor[nElements] : new ::TGeoNodeEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNodeEditor(void *p) {
      delete ((::TGeoNodeEditor*)p);
   }
   static void deleteArray_TGeoNodeEditor(void *p) {
      delete [] ((::TGeoNodeEditor*)p);
   }
   static void destruct_TGeoNodeEditor(void *p) {
      typedef ::TGeoNodeEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoNodeEditor(TBuffer &buf, void *obj) {
      ((::TGeoNodeEditor*)obj)->::TGeoNodeEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoNodeEditor

//______________________________________________________________________________
void TGeoTranslationEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTranslationEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTranslationEditor(void *p) {
      return  p ? new(p) ::TGeoTranslationEditor : new ::TGeoTranslationEditor;
   }
   static void *newArray_TGeoTranslationEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTranslationEditor[nElements] : new ::TGeoTranslationEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTranslationEditor(void *p) {
      delete ((::TGeoTranslationEditor*)p);
   }
   static void deleteArray_TGeoTranslationEditor(void *p) {
      delete [] ((::TGeoTranslationEditor*)p);
   }
   static void destruct_TGeoTranslationEditor(void *p) {
      typedef ::TGeoTranslationEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTranslationEditor(TBuffer &buf, void *obj) {
      ((::TGeoTranslationEditor*)obj)->::TGeoTranslationEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTranslationEditor

//______________________________________________________________________________
void TGeoRotationEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoRotationEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoRotationEditor(void *p) {
      return  p ? new(p) ::TGeoRotationEditor : new ::TGeoRotationEditor;
   }
   static void *newArray_TGeoRotationEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoRotationEditor[nElements] : new ::TGeoRotationEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoRotationEditor(void *p) {
      delete ((::TGeoRotationEditor*)p);
   }
   static void deleteArray_TGeoRotationEditor(void *p) {
      delete [] ((::TGeoRotationEditor*)p);
   }
   static void destruct_TGeoRotationEditor(void *p) {
      typedef ::TGeoRotationEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoRotationEditor(TBuffer &buf, void *obj) {
      ((::TGeoRotationEditor*)obj)->::TGeoRotationEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoRotationEditor

//______________________________________________________________________________
void TGeoCombiTransEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCombiTransEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCombiTransEditor(void *p) {
      return  p ? new(p) ::TGeoCombiTransEditor : new ::TGeoCombiTransEditor;
   }
   static void *newArray_TGeoCombiTransEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCombiTransEditor[nElements] : new ::TGeoCombiTransEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCombiTransEditor(void *p) {
      delete ((::TGeoCombiTransEditor*)p);
   }
   static void deleteArray_TGeoCombiTransEditor(void *p) {
      delete [] ((::TGeoCombiTransEditor*)p);
   }
   static void destruct_TGeoCombiTransEditor(void *p) {
      typedef ::TGeoCombiTransEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoCombiTransEditor(TBuffer &buf, void *obj) {
      ((::TGeoCombiTransEditor*)obj)->::TGeoCombiTransEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoCombiTransEditor

//______________________________________________________________________________
void TGeoManagerEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoManagerEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoManagerEditor(void *p) {
      return  p ? new(p) ::TGeoManagerEditor : new ::TGeoManagerEditor;
   }
   static void *newArray_TGeoManagerEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoManagerEditor[nElements] : new ::TGeoManagerEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoManagerEditor(void *p) {
      delete ((::TGeoManagerEditor*)p);
   }
   static void deleteArray_TGeoManagerEditor(void *p) {
      delete [] ((::TGeoManagerEditor*)p);
   }
   static void destruct_TGeoManagerEditor(void *p) {
      typedef ::TGeoManagerEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoManagerEditor(TBuffer &buf, void *obj) {
      ((::TGeoManagerEditor*)obj)->::TGeoManagerEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoManagerEditor

//______________________________________________________________________________
void TGeoTubeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTubeEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTubeEditor(void *p) {
      return  p ? new(p) ::TGeoTubeEditor : new ::TGeoTubeEditor;
   }
   static void *newArray_TGeoTubeEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTubeEditor[nElements] : new ::TGeoTubeEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTubeEditor(void *p) {
      delete ((::TGeoTubeEditor*)p);
   }
   static void deleteArray_TGeoTubeEditor(void *p) {
      delete [] ((::TGeoTubeEditor*)p);
   }
   static void destruct_TGeoTubeEditor(void *p) {
      typedef ::TGeoTubeEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTubeEditor(TBuffer &buf, void *obj) {
      ((::TGeoTubeEditor*)obj)->::TGeoTubeEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTubeEditor

//______________________________________________________________________________
void TGeoTubeSegEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTubeSegEditor.

   TGeoTubeEditor::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTubeSegEditor(void *p) {
      return  p ? new(p) ::TGeoTubeSegEditor : new ::TGeoTubeSegEditor;
   }
   static void *newArray_TGeoTubeSegEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTubeSegEditor[nElements] : new ::TGeoTubeSegEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTubeSegEditor(void *p) {
      delete ((::TGeoTubeSegEditor*)p);
   }
   static void deleteArray_TGeoTubeSegEditor(void *p) {
      delete [] ((::TGeoTubeSegEditor*)p);
   }
   static void destruct_TGeoTubeSegEditor(void *p) {
      typedef ::TGeoTubeSegEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTubeSegEditor(TBuffer &buf, void *obj) {
      ((::TGeoTubeSegEditor*)obj)->::TGeoTubeSegEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTubeSegEditor

//______________________________________________________________________________
void TGeoCtubEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCtubEditor.

   TGeoTubeSegEditor::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCtubEditor(void *p) {
      return  p ? new(p) ::TGeoCtubEditor : new ::TGeoCtubEditor;
   }
   static void *newArray_TGeoCtubEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCtubEditor[nElements] : new ::TGeoCtubEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCtubEditor(void *p) {
      delete ((::TGeoCtubEditor*)p);
   }
   static void deleteArray_TGeoCtubEditor(void *p) {
      delete [] ((::TGeoCtubEditor*)p);
   }
   static void destruct_TGeoCtubEditor(void *p) {
      typedef ::TGeoCtubEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoCtubEditor(TBuffer &buf, void *obj) {
      ((::TGeoCtubEditor*)obj)->::TGeoCtubEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoCtubEditor

//______________________________________________________________________________
void TGeoConeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoConeEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoConeEditor(void *p) {
      return  p ? new(p) ::TGeoConeEditor : new ::TGeoConeEditor;
   }
   static void *newArray_TGeoConeEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoConeEditor[nElements] : new ::TGeoConeEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoConeEditor(void *p) {
      delete ((::TGeoConeEditor*)p);
   }
   static void deleteArray_TGeoConeEditor(void *p) {
      delete [] ((::TGeoConeEditor*)p);
   }
   static void destruct_TGeoConeEditor(void *p) {
      typedef ::TGeoConeEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoConeEditor(TBuffer &buf, void *obj) {
      ((::TGeoConeEditor*)obj)->::TGeoConeEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoConeEditor

//______________________________________________________________________________
void TGeoConeSegEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoConeSegEditor.

   TGeoConeEditor::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoConeSegEditor(void *p) {
      return  p ? new(p) ::TGeoConeSegEditor : new ::TGeoConeSegEditor;
   }
   static void *newArray_TGeoConeSegEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoConeSegEditor[nElements] : new ::TGeoConeSegEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoConeSegEditor(void *p) {
      delete ((::TGeoConeSegEditor*)p);
   }
   static void deleteArray_TGeoConeSegEditor(void *p) {
      delete [] ((::TGeoConeSegEditor*)p);
   }
   static void destruct_TGeoConeSegEditor(void *p) {
      typedef ::TGeoConeSegEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoConeSegEditor(TBuffer &buf, void *obj) {
      ((::TGeoConeSegEditor*)obj)->::TGeoConeSegEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoConeSegEditor

//______________________________________________________________________________
void TGeoTrd1Editor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrd1Editor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrd1Editor(void *p) {
      return  p ? new(p) ::TGeoTrd1Editor : new ::TGeoTrd1Editor;
   }
   static void *newArray_TGeoTrd1Editor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrd1Editor[nElements] : new ::TGeoTrd1Editor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrd1Editor(void *p) {
      delete ((::TGeoTrd1Editor*)p);
   }
   static void deleteArray_TGeoTrd1Editor(void *p) {
      delete [] ((::TGeoTrd1Editor*)p);
   }
   static void destruct_TGeoTrd1Editor(void *p) {
      typedef ::TGeoTrd1Editor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTrd1Editor(TBuffer &buf, void *obj) {
      ((::TGeoTrd1Editor*)obj)->::TGeoTrd1Editor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTrd1Editor

//______________________________________________________________________________
void TGeoTrd2Editor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrd2Editor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrd2Editor(void *p) {
      return  p ? new(p) ::TGeoTrd2Editor : new ::TGeoTrd2Editor;
   }
   static void *newArray_TGeoTrd2Editor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrd2Editor[nElements] : new ::TGeoTrd2Editor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrd2Editor(void *p) {
      delete ((::TGeoTrd2Editor*)p);
   }
   static void deleteArray_TGeoTrd2Editor(void *p) {
      delete [] ((::TGeoTrd2Editor*)p);
   }
   static void destruct_TGeoTrd2Editor(void *p) {
      typedef ::TGeoTrd2Editor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTrd2Editor(TBuffer &buf, void *obj) {
      ((::TGeoTrd2Editor*)obj)->::TGeoTrd2Editor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTrd2Editor

//______________________________________________________________________________
void TGeoMaterialEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMaterialEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMaterialEditor(void *p) {
      return  p ? new(p) ::TGeoMaterialEditor : new ::TGeoMaterialEditor;
   }
   static void *newArray_TGeoMaterialEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMaterialEditor[nElements] : new ::TGeoMaterialEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMaterialEditor(void *p) {
      delete ((::TGeoMaterialEditor*)p);
   }
   static void deleteArray_TGeoMaterialEditor(void *p) {
      delete [] ((::TGeoMaterialEditor*)p);
   }
   static void destruct_TGeoMaterialEditor(void *p) {
      typedef ::TGeoMaterialEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoMaterialEditor(TBuffer &buf, void *obj) {
      ((::TGeoMaterialEditor*)obj)->::TGeoMaterialEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoMaterialEditor

//______________________________________________________________________________
void TGeoMixtureEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMixtureEditor.

   TGeoMaterialEditor::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMixtureEditor(void *p) {
      return  p ? new(p) ::TGeoMixtureEditor : new ::TGeoMixtureEditor;
   }
   static void *newArray_TGeoMixtureEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMixtureEditor[nElements] : new ::TGeoMixtureEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMixtureEditor(void *p) {
      delete ((::TGeoMixtureEditor*)p);
   }
   static void deleteArray_TGeoMixtureEditor(void *p) {
      delete [] ((::TGeoMixtureEditor*)p);
   }
   static void destruct_TGeoMixtureEditor(void *p) {
      typedef ::TGeoMixtureEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoMixtureEditor(TBuffer &buf, void *obj) {
      ((::TGeoMixtureEditor*)obj)->::TGeoMixtureEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoMixtureEditor

//______________________________________________________________________________
void TGeoTabManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTabManager.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoTabManager(void *p) {
      delete ((::TGeoTabManager*)p);
   }
   static void deleteArray_TGeoTabManager(void *p) {
      delete [] ((::TGeoTabManager*)p);
   }
   static void destruct_TGeoTabManager(void *p) {
      typedef ::TGeoTabManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTabManager(TBuffer &buf, void *obj) {
      ((::TGeoTabManager*)obj)->::TGeoTabManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTabManager

//______________________________________________________________________________
void TGeoTreeDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTreeDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoTreeDialog(void *p) {
      delete ((::TGeoTreeDialog*)p);
   }
   static void deleteArray_TGeoTreeDialog(void *p) {
      delete [] ((::TGeoTreeDialog*)p);
   }
   static void destruct_TGeoTreeDialog(void *p) {
      typedef ::TGeoTreeDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTreeDialog(TBuffer &buf, void *obj) {
      ((::TGeoTreeDialog*)obj)->::TGeoTreeDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTreeDialog

//______________________________________________________________________________
void TGeoVolumeDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoVolumeDialog.

   TGeoTreeDialog::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoVolumeDialog(void *p) {
      delete ((::TGeoVolumeDialog*)p);
   }
   static void deleteArray_TGeoVolumeDialog(void *p) {
      delete [] ((::TGeoVolumeDialog*)p);
   }
   static void destruct_TGeoVolumeDialog(void *p) {
      typedef ::TGeoVolumeDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoVolumeDialog(TBuffer &buf, void *obj) {
      ((::TGeoVolumeDialog*)obj)->::TGeoVolumeDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoVolumeDialog

//______________________________________________________________________________
void TGeoShapeDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoShapeDialog.

   TGeoTreeDialog::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoShapeDialog(void *p) {
      delete ((::TGeoShapeDialog*)p);
   }
   static void deleteArray_TGeoShapeDialog(void *p) {
      delete [] ((::TGeoShapeDialog*)p);
   }
   static void destruct_TGeoShapeDialog(void *p) {
      typedef ::TGeoShapeDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoShapeDialog(TBuffer &buf, void *obj) {
      ((::TGeoShapeDialog*)obj)->::TGeoShapeDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoShapeDialog

//______________________________________________________________________________
void TGeoMediumDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMediumDialog.

   TGeoTreeDialog::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoMediumDialog(void *p) {
      delete ((::TGeoMediumDialog*)p);
   }
   static void deleteArray_TGeoMediumDialog(void *p) {
      delete [] ((::TGeoMediumDialog*)p);
   }
   static void destruct_TGeoMediumDialog(void *p) {
      typedef ::TGeoMediumDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoMediumDialog(TBuffer &buf, void *obj) {
      ((::TGeoMediumDialog*)obj)->::TGeoMediumDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoMediumDialog

//______________________________________________________________________________
void TGeoMaterialDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMaterialDialog.

   TGeoTreeDialog::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoMaterialDialog(void *p) {
      delete ((::TGeoMaterialDialog*)p);
   }
   static void deleteArray_TGeoMaterialDialog(void *p) {
      delete [] ((::TGeoMaterialDialog*)p);
   }
   static void destruct_TGeoMaterialDialog(void *p) {
      typedef ::TGeoMaterialDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoMaterialDialog(TBuffer &buf, void *obj) {
      ((::TGeoMaterialDialog*)obj)->::TGeoMaterialDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoMaterialDialog

//______________________________________________________________________________
void TGeoMatrixDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMatrixDialog.

   TGeoTreeDialog::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoMatrixDialog(void *p) {
      delete ((::TGeoMatrixDialog*)p);
   }
   static void deleteArray_TGeoMatrixDialog(void *p) {
      delete [] ((::TGeoMatrixDialog*)p);
   }
   static void destruct_TGeoMatrixDialog(void *p) {
      typedef ::TGeoMatrixDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoMatrixDialog(TBuffer &buf, void *obj) {
      ((::TGeoMatrixDialog*)obj)->::TGeoMatrixDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoMatrixDialog

//______________________________________________________________________________
void TGeoTransientPanel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTransientPanel.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoTransientPanel(void *p) {
      delete ((::TGeoTransientPanel*)p);
   }
   static void deleteArray_TGeoTransientPanel(void *p) {
      delete [] ((::TGeoTransientPanel*)p);
   }
   static void destruct_TGeoTransientPanel(void *p) {
      typedef ::TGeoTransientPanel current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTransientPanel(TBuffer &buf, void *obj) {
      ((::TGeoTransientPanel*)obj)->::TGeoTransientPanel::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTransientPanel

//______________________________________________________________________________
void TGeoSphereEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoSphereEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoSphereEditor(void *p) {
      return  p ? new(p) ::TGeoSphereEditor : new ::TGeoSphereEditor;
   }
   static void *newArray_TGeoSphereEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoSphereEditor[nElements] : new ::TGeoSphereEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoSphereEditor(void *p) {
      delete ((::TGeoSphereEditor*)p);
   }
   static void deleteArray_TGeoSphereEditor(void *p) {
      delete [] ((::TGeoSphereEditor*)p);
   }
   static void destruct_TGeoSphereEditor(void *p) {
      typedef ::TGeoSphereEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoSphereEditor(TBuffer &buf, void *obj) {
      ((::TGeoSphereEditor*)obj)->::TGeoSphereEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoSphereEditor

//______________________________________________________________________________
void TGeoPconEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPconEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPconEditor(void *p) {
      return  p ? new(p) ::TGeoPconEditor : new ::TGeoPconEditor;
   }
   static void *newArray_TGeoPconEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPconEditor[nElements] : new ::TGeoPconEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPconEditor(void *p) {
      delete ((::TGeoPconEditor*)p);
   }
   static void deleteArray_TGeoPconEditor(void *p) {
      delete [] ((::TGeoPconEditor*)p);
   }
   static void destruct_TGeoPconEditor(void *p) {
      typedef ::TGeoPconEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoPconEditor(TBuffer &buf, void *obj) {
      ((::TGeoPconEditor*)obj)->::TGeoPconEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoPconEditor

//______________________________________________________________________________
void TGeoPconSection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPconSection.

   TGCompositeFrame::Streamer(R__b);
   TGWidget::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoPconSection(void *p) {
      delete ((::TGeoPconSection*)p);
   }
   static void deleteArray_TGeoPconSection(void *p) {
      delete [] ((::TGeoPconSection*)p);
   }
   static void destruct_TGeoPconSection(void *p) {
      typedef ::TGeoPconSection current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoPconSection(TBuffer &buf, void *obj) {
      ((::TGeoPconSection*)obj)->::TGeoPconSection::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoPconSection

//______________________________________________________________________________
void TGeoParaEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoParaEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoParaEditor(void *p) {
      return  p ? new(p) ::TGeoParaEditor : new ::TGeoParaEditor;
   }
   static void *newArray_TGeoParaEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoParaEditor[nElements] : new ::TGeoParaEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoParaEditor(void *p) {
      delete ((::TGeoParaEditor*)p);
   }
   static void deleteArray_TGeoParaEditor(void *p) {
      delete [] ((::TGeoParaEditor*)p);
   }
   static void destruct_TGeoParaEditor(void *p) {
      typedef ::TGeoParaEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoParaEditor(TBuffer &buf, void *obj) {
      ((::TGeoParaEditor*)obj)->::TGeoParaEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoParaEditor

//______________________________________________________________________________
void TGeoTorusEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTorusEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTorusEditor(void *p) {
      return  p ? new(p) ::TGeoTorusEditor : new ::TGeoTorusEditor;
   }
   static void *newArray_TGeoTorusEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTorusEditor[nElements] : new ::TGeoTorusEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTorusEditor(void *p) {
      delete ((::TGeoTorusEditor*)p);
   }
   static void deleteArray_TGeoTorusEditor(void *p) {
      delete [] ((::TGeoTorusEditor*)p);
   }
   static void destruct_TGeoTorusEditor(void *p) {
      typedef ::TGeoTorusEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTorusEditor(TBuffer &buf, void *obj) {
      ((::TGeoTorusEditor*)obj)->::TGeoTorusEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTorusEditor

//______________________________________________________________________________
void TGeoEltuEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoEltuEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoEltuEditor(void *p) {
      return  p ? new(p) ::TGeoEltuEditor : new ::TGeoEltuEditor;
   }
   static void *newArray_TGeoEltuEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoEltuEditor[nElements] : new ::TGeoEltuEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoEltuEditor(void *p) {
      delete ((::TGeoEltuEditor*)p);
   }
   static void deleteArray_TGeoEltuEditor(void *p) {
      delete [] ((::TGeoEltuEditor*)p);
   }
   static void destruct_TGeoEltuEditor(void *p) {
      typedef ::TGeoEltuEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoEltuEditor(TBuffer &buf, void *obj) {
      ((::TGeoEltuEditor*)obj)->::TGeoEltuEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoEltuEditor

//______________________________________________________________________________
void TGeoHypeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoHypeEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoHypeEditor(void *p) {
      return  p ? new(p) ::TGeoHypeEditor : new ::TGeoHypeEditor;
   }
   static void *newArray_TGeoHypeEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoHypeEditor[nElements] : new ::TGeoHypeEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoHypeEditor(void *p) {
      delete ((::TGeoHypeEditor*)p);
   }
   static void deleteArray_TGeoHypeEditor(void *p) {
      delete [] ((::TGeoHypeEditor*)p);
   }
   static void destruct_TGeoHypeEditor(void *p) {
      typedef ::TGeoHypeEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoHypeEditor(TBuffer &buf, void *obj) {
      ((::TGeoHypeEditor*)obj)->::TGeoHypeEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoHypeEditor

//______________________________________________________________________________
void TGeoPgonEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPgonEditor.

   TGeoPconEditor::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPgonEditor(void *p) {
      return  p ? new(p) ::TGeoPgonEditor : new ::TGeoPgonEditor;
   }
   static void *newArray_TGeoPgonEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPgonEditor[nElements] : new ::TGeoPgonEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPgonEditor(void *p) {
      delete ((::TGeoPgonEditor*)p);
   }
   static void deleteArray_TGeoPgonEditor(void *p) {
      delete [] ((::TGeoPgonEditor*)p);
   }
   static void destruct_TGeoPgonEditor(void *p) {
      typedef ::TGeoPgonEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoPgonEditor(TBuffer &buf, void *obj) {
      ((::TGeoPgonEditor*)obj)->::TGeoPgonEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoPgonEditor

//______________________________________________________________________________
void TGeoTrapEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrapEditor.

   TGeoGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrapEditor(void *p) {
      return  p ? new(p) ::TGeoTrapEditor : new ::TGeoTrapEditor;
   }
   static void *newArray_TGeoTrapEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrapEditor[nElements] : new ::TGeoTrapEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrapEditor(void *p) {
      delete ((::TGeoTrapEditor*)p);
   }
   static void deleteArray_TGeoTrapEditor(void *p) {
      delete [] ((::TGeoTrapEditor*)p);
   }
   static void destruct_TGeoTrapEditor(void *p) {
      typedef ::TGeoTrapEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoTrapEditor(TBuffer &buf, void *obj) {
      ((::TGeoTrapEditor*)obj)->::TGeoTrapEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoTrapEditor

//______________________________________________________________________________
void TGeoGtraEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoGtraEditor.

   TGeoTrapEditor::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoGtraEditor(void *p) {
      return  p ? new(p) ::TGeoGtraEditor : new ::TGeoGtraEditor;
   }
   static void *newArray_TGeoGtraEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoGtraEditor[nElements] : new ::TGeoGtraEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoGtraEditor(void *p) {
      delete ((::TGeoGtraEditor*)p);
   }
   static void deleteArray_TGeoGtraEditor(void *p) {
      delete [] ((::TGeoGtraEditor*)p);
   }
   static void destruct_TGeoGtraEditor(void *p) {
      typedef ::TGeoGtraEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoGtraEditor(TBuffer &buf, void *obj) {
      ((::TGeoGtraEditor*)obj)->::TGeoGtraEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoGtraEditor

namespace {
  void TriggerDictionaryInitialization_libGeomBuilder_Impl() {
    static const char* headers[] = {
"TGeoVolumeEditor.h",
"TGeoBBoxEditor.h",
"TGeoMediumEditor.h",
"TGeoNodeEditor.h",
"TGeoMatrixEditor.h",
"TGeoManagerEditor.h",
"TGeoTubeEditor.h",
"TGeoConeEditor.h",
"TGeoTrd1Editor.h",
"TGeoTrd2Editor.h",
"TGeoMaterialEditor.h",
"TGeoTabManager.h",
"TGeoSphereEditor.h",
"TGeoPconEditor.h",
"TGeoParaEditor.h",
"TGeoTorusEditor.h",
"TGeoEltuEditor.h",
"TGeoHypeEditor.h",
"TGeoPgonEditor.h",
"TGeoTrapEditor.h",
"TGeoGedFrame.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGeomBuilder dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Common base-class for geombuilder editors.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoGedFrame.h")))  __attribute__((annotate("$clingAutoload$TGeoVolumeEditor.h")))  TGeoGedFrame;
class __attribute__((annotate(R"ATTRDUMP(TGeoVolume editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoVolumeEditor.h")))  TGeoVolumeEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoBBox editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoBBoxEditor.h")))  TGeoBBoxEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoMedium editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMediumEditor.h")))  TGeoMediumEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoNode editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoNodeEditor.h")))  TGeoNodeEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoTranslation editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrixEditor.h")))  TGeoTranslationEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoRotation editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrixEditor.h")))  TGeoRotationEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoCombiTrans editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMatrixEditor.h")))  TGeoCombiTransEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoManager editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoManagerEditor.h")))  TGeoManagerEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoTube editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTubeEditor.h")))  TGeoTubeEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoTubeSeg editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTubeEditor.h")))  TGeoTubeSegEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoCtub editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTubeEditor.h")))  TGeoCtubEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoCone editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoConeEditor.h")))  TGeoConeEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoConeSeg editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoConeEditor.h")))  TGeoConeSegEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoTrd1 editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTrd1Editor.h")))  TGeoTrd1Editor;
class __attribute__((annotate(R"ATTRDUMP(TGeoTrd2 editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTrd2Editor.h")))  TGeoTrd2Editor;
class __attribute__((annotate(R"ATTRDUMP(TGeoMaterial editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMaterialEditor.h")))  TGeoMaterialEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoMixture editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoMaterialEditor.h")))  TGeoMixtureEditor;
class __attribute__((annotate(R"ATTRDUMP(Tab manager for geometry editors)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTabManager.h")))  TGeoTabManager;
class __attribute__((annotate(R"ATTRDUMP(List-Tree based dialog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTabManager.h")))  TGeoTreeDialog;
class __attribute__((annotate(R"ATTRDUMP(List-Tree based volume dialog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTabManager.h")))  TGeoVolumeDialog;
class __attribute__((annotate(R"ATTRDUMP(List-Tree based shape dialog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTabManager.h")))  TGeoShapeDialog;
class __attribute__((annotate(R"ATTRDUMP(List-Tree based medium dialog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTabManager.h")))  TGeoMediumDialog;
class __attribute__((annotate(R"ATTRDUMP(List-Tree based material dialog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTabManager.h")))  TGeoMaterialDialog;
class __attribute__((annotate(R"ATTRDUMP(List-Tree based matrix dialog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTabManager.h")))  TGeoMatrixDialog;
class __attribute__((annotate(R"ATTRDUMP(List-Tree based dialog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTabManager.h")))  TGeoTransientPanel;
class __attribute__((annotate(R"ATTRDUMP(TGeoSphere editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoSphereEditor.h")))  TGeoSphereEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoPcon editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPconEditor.h")))  TGeoPconEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoPcon section)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPconEditor.h")))  TGeoPconSection;
class __attribute__((annotate(R"ATTRDUMP(TGeoPara editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoParaEditor.h")))  TGeoParaEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoTorus editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTorusEditor.h")))  TGeoTorusEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoEltu editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoEltuEditor.h")))  TGeoEltuEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoHype editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoHypeEditor.h")))  TGeoHypeEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoPgon editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoPgonEditor.h")))  TGeoPgonEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoTrap editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTrapEditor.h")))  TGeoTrapEditor;
class __attribute__((annotate(R"ATTRDUMP(TGeoGtra editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGeoTrapEditor.h")))  TGeoGtraEditor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGeomBuilder dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TGeoVolumeEditor.h"
#include "TGeoBBoxEditor.h"
#include "TGeoMediumEditor.h"
#include "TGeoNodeEditor.h"
#include "TGeoMatrixEditor.h"
#include "TGeoManagerEditor.h"
#include "TGeoTubeEditor.h"
#include "TGeoConeEditor.h"
#include "TGeoTrd1Editor.h"
#include "TGeoTrd2Editor.h"
#include "TGeoMaterialEditor.h"
#include "TGeoTabManager.h"
#include "TGeoSphereEditor.h"
#include "TGeoPconEditor.h"
#include "TGeoParaEditor.h"
#include "TGeoTorusEditor.h"
#include "TGeoEltuEditor.h"
#include "TGeoHypeEditor.h"
#include "TGeoPgonEditor.h"
#include "TGeoTrapEditor.h"
#include "TGeoGedFrame.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TGeoBBoxEditor", payloadCode, "@",
"TGeoCombiTransEditor", payloadCode, "@",
"TGeoConeEditor", payloadCode, "@",
"TGeoConeSegEditor", payloadCode, "@",
"TGeoCtubEditor", payloadCode, "@",
"TGeoEltuEditor", payloadCode, "@",
"TGeoGedFrame", payloadCode, "@",
"TGeoGtraEditor", payloadCode, "@",
"TGeoHypeEditor", payloadCode, "@",
"TGeoManagerEditor", payloadCode, "@",
"TGeoMaterialDialog", payloadCode, "@",
"TGeoMaterialEditor", payloadCode, "@",
"TGeoMatrixDialog", payloadCode, "@",
"TGeoMediumDialog", payloadCode, "@",
"TGeoMediumEditor", payloadCode, "@",
"TGeoMixtureEditor", payloadCode, "@",
"TGeoNodeEditor", payloadCode, "@",
"TGeoParaEditor", payloadCode, "@",
"TGeoPconEditor", payloadCode, "@",
"TGeoPconSection", payloadCode, "@",
"TGeoPgonEditor", payloadCode, "@",
"TGeoRotationEditor", payloadCode, "@",
"TGeoShapeDialog", payloadCode, "@",
"TGeoSphereEditor", payloadCode, "@",
"TGeoTabManager", payloadCode, "@",
"TGeoTorusEditor", payloadCode, "@",
"TGeoTransientPanel", payloadCode, "@",
"TGeoTranslationEditor", payloadCode, "@",
"TGeoTrapEditor", payloadCode, "@",
"TGeoTrd1Editor", payloadCode, "@",
"TGeoTrd2Editor", payloadCode, "@",
"TGeoTreeDialog", payloadCode, "@",
"TGeoTubeEditor", payloadCode, "@",
"TGeoTubeSegEditor", payloadCode, "@",
"TGeoVolumeDialog", payloadCode, "@",
"TGeoVolumeEditor", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGeomBuilder",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGeomBuilder_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGeomBuilder_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGeomBuilder() {
  TriggerDictionaryInitialization_libGeomBuilder_Impl();
}
