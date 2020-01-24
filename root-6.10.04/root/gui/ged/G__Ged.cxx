// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Ged

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
#include "HelpSMText.h"
#include "TArrowEditor.h"
#include "TAttFillEditor.h"
#include "TAttLineEditor.h"
#include "TAttMarkerEditor.h"
#include "TAttTextEditor.h"
#include "TAxisEditor.h"
#include "TCurlyArcEditor.h"
#include "TCurlyLineEditor.h"
#include "TF1Editor.h"
#include "TFrameEditor.h"
#include "TFunctionParametersDialog.h"
#include "TGedEditor.h"
#include "TGedFrame.h"
#include "TGedMarkerSelect.h"
#include "TGedPatternSelect.h"
#include "TGraphEditor.h"
#include "TH1Editor.h"
#include "TH2Editor.h"
#include "TLineEditor.h"
#include "TPadEditor.h"
#include "TPaveStatsEditor.h"
#include "TPieEditor.h"
#include "TPieSliceEditor.h"
#include "TStyleDialog.h"
#include "TStyleManager.h"
#include "TStylePreview.h"
#include "TTextEditor.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TGedFrame(void *p);
   static void deleteArray_TGedFrame(void *p);
   static void destruct_TGedFrame(void *p);
   static void streamer_TGedFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedFrame*)
   {
      ::TGedFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedFrame >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedFrame", ::TGedFrame::Class_Version(), "TGedFrame.h", 33,
                  typeid(::TGedFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGedFrame) );
      instance.SetDelete(&delete_TGedFrame);
      instance.SetDeleteArray(&deleteArray_TGedFrame);
      instance.SetDestructor(&destruct_TGedFrame);
      instance.SetStreamerFunc(&streamer_TGedFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedFrame*)
   {
      return GenerateInitInstanceLocal((::TGedFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGedNameFrame(void *p = 0);
   static void *newArray_TGedNameFrame(Long_t size, void *p);
   static void delete_TGedNameFrame(void *p);
   static void deleteArray_TGedNameFrame(void *p);
   static void destruct_TGedNameFrame(void *p);
   static void streamer_TGedNameFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedNameFrame*)
   {
      ::TGedNameFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedNameFrame >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedNameFrame", ::TGedNameFrame::Class_Version(), "TGedFrame.h", 92,
                  typeid(::TGedNameFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedNameFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGedNameFrame) );
      instance.SetNew(&new_TGedNameFrame);
      instance.SetNewArray(&newArray_TGedNameFrame);
      instance.SetDelete(&delete_TGedNameFrame);
      instance.SetDeleteArray(&deleteArray_TGedNameFrame);
      instance.SetDestructor(&destruct_TGedNameFrame);
      instance.SetStreamerFunc(&streamer_TGedNameFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedNameFrame*)
   {
      return GenerateInitInstanceLocal((::TGedNameFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedNameFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArrowEditor(void *p = 0);
   static void *newArray_TArrowEditor(Long_t size, void *p);
   static void delete_TArrowEditor(void *p);
   static void deleteArray_TArrowEditor(void *p);
   static void destruct_TArrowEditor(void *p);
   static void streamer_TArrowEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArrowEditor*)
   {
      ::TArrowEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArrowEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArrowEditor", ::TArrowEditor::Class_Version(), "TArrowEditor.h", 31,
                  typeid(::TArrowEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArrowEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TArrowEditor) );
      instance.SetNew(&new_TArrowEditor);
      instance.SetNewArray(&newArray_TArrowEditor);
      instance.SetDelete(&delete_TArrowEditor);
      instance.SetDeleteArray(&deleteArray_TArrowEditor);
      instance.SetDestructor(&destruct_TArrowEditor);
      instance.SetStreamerFunc(&streamer_TArrowEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArrowEditor*)
   {
      return GenerateInitInstanceLocal((::TArrowEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArrowEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAttFillEditor(void *p = 0);
   static void *newArray_TAttFillEditor(Long_t size, void *p);
   static void delete_TAttFillEditor(void *p);
   static void deleteArray_TAttFillEditor(void *p);
   static void destruct_TAttFillEditor(void *p);
   static void streamer_TAttFillEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttFillEditor*)
   {
      ::TAttFillEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttFillEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAttFillEditor", ::TAttFillEditor::Class_Version(), "TAttFillEditor.h", 32,
                  typeid(::TAttFillEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttFillEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAttFillEditor) );
      instance.SetNew(&new_TAttFillEditor);
      instance.SetNewArray(&newArray_TAttFillEditor);
      instance.SetDelete(&delete_TAttFillEditor);
      instance.SetDeleteArray(&deleteArray_TAttFillEditor);
      instance.SetDestructor(&destruct_TAttFillEditor);
      instance.SetStreamerFunc(&streamer_TAttFillEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttFillEditor*)
   {
      return GenerateInitInstanceLocal((::TAttFillEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAttFillEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAttLineEditor(void *p = 0);
   static void *newArray_TAttLineEditor(Long_t size, void *p);
   static void delete_TAttLineEditor(void *p);
   static void deleteArray_TAttLineEditor(void *p);
   static void destruct_TAttLineEditor(void *p);
   static void streamer_TAttLineEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttLineEditor*)
   {
      ::TAttLineEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttLineEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAttLineEditor", ::TAttLineEditor::Class_Version(), "TAttLineEditor.h", 33,
                  typeid(::TAttLineEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttLineEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAttLineEditor) );
      instance.SetNew(&new_TAttLineEditor);
      instance.SetNewArray(&newArray_TAttLineEditor);
      instance.SetDelete(&delete_TAttLineEditor);
      instance.SetDeleteArray(&deleteArray_TAttLineEditor);
      instance.SetDestructor(&destruct_TAttLineEditor);
      instance.SetStreamerFunc(&streamer_TAttLineEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttLineEditor*)
   {
      return GenerateInitInstanceLocal((::TAttLineEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAttLineEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAttMarkerEditor(void *p = 0);
   static void *newArray_TAttMarkerEditor(Long_t size, void *p);
   static void delete_TAttMarkerEditor(void *p);
   static void deleteArray_TAttMarkerEditor(void *p);
   static void destruct_TAttMarkerEditor(void *p);
   static void streamer_TAttMarkerEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttMarkerEditor*)
   {
      ::TAttMarkerEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttMarkerEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAttMarkerEditor", ::TAttMarkerEditor::Class_Version(), "TAttMarkerEditor.h", 33,
                  typeid(::TAttMarkerEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttMarkerEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAttMarkerEditor) );
      instance.SetNew(&new_TAttMarkerEditor);
      instance.SetNewArray(&newArray_TAttMarkerEditor);
      instance.SetDelete(&delete_TAttMarkerEditor);
      instance.SetDeleteArray(&deleteArray_TAttMarkerEditor);
      instance.SetDestructor(&destruct_TAttMarkerEditor);
      instance.SetStreamerFunc(&streamer_TAttMarkerEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttMarkerEditor*)
   {
      return GenerateInitInstanceLocal((::TAttMarkerEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAttMarkerEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAttTextEditor(void *p = 0);
   static void *newArray_TAttTextEditor(Long_t size, void *p);
   static void delete_TAttTextEditor(void *p);
   static void deleteArray_TAttTextEditor(void *p);
   static void destruct_TAttTextEditor(void *p);
   static void streamer_TAttTextEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttTextEditor*)
   {
      ::TAttTextEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttTextEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAttTextEditor", ::TAttTextEditor::Class_Version(), "TAttTextEditor.h", 33,
                  typeid(::TAttTextEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttTextEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAttTextEditor) );
      instance.SetNew(&new_TAttTextEditor);
      instance.SetNewArray(&newArray_TAttTextEditor);
      instance.SetDelete(&delete_TAttTextEditor);
      instance.SetDeleteArray(&deleteArray_TAttTextEditor);
      instance.SetDestructor(&destruct_TAttTextEditor);
      instance.SetStreamerFunc(&streamer_TAttTextEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttTextEditor*)
   {
      return GenerateInitInstanceLocal((::TAttTextEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAttTextEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAxisEditor(void *p = 0);
   static void *newArray_TAxisEditor(Long_t size, void *p);
   static void delete_TAxisEditor(void *p);
   static void deleteArray_TAxisEditor(void *p);
   static void destruct_TAxisEditor(void *p);
   static void streamer_TAxisEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAxisEditor*)
   {
      ::TAxisEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAxisEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAxisEditor", ::TAxisEditor::Class_Version(), "TAxisEditor.h", 35,
                  typeid(::TAxisEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAxisEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAxisEditor) );
      instance.SetNew(&new_TAxisEditor);
      instance.SetNewArray(&newArray_TAxisEditor);
      instance.SetDelete(&delete_TAxisEditor);
      instance.SetDeleteArray(&deleteArray_TAxisEditor);
      instance.SetDestructor(&destruct_TAxisEditor);
      instance.SetStreamerFunc(&streamer_TAxisEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAxisEditor*)
   {
      return GenerateInitInstanceLocal((::TAxisEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAxisEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCurlyArcEditor(void *p = 0);
   static void *newArray_TCurlyArcEditor(Long_t size, void *p);
   static void delete_TCurlyArcEditor(void *p);
   static void deleteArray_TCurlyArcEditor(void *p);
   static void destruct_TCurlyArcEditor(void *p);
   static void streamer_TCurlyArcEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCurlyArcEditor*)
   {
      ::TCurlyArcEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCurlyArcEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCurlyArcEditor", ::TCurlyArcEditor::Class_Version(), "TCurlyArcEditor.h", 28,
                  typeid(::TCurlyArcEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCurlyArcEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TCurlyArcEditor) );
      instance.SetNew(&new_TCurlyArcEditor);
      instance.SetNewArray(&newArray_TCurlyArcEditor);
      instance.SetDelete(&delete_TCurlyArcEditor);
      instance.SetDeleteArray(&deleteArray_TCurlyArcEditor);
      instance.SetDestructor(&destruct_TCurlyArcEditor);
      instance.SetStreamerFunc(&streamer_TCurlyArcEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCurlyArcEditor*)
   {
      return GenerateInitInstanceLocal((::TCurlyArcEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCurlyArcEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCurlyLineEditor(void *p = 0);
   static void *newArray_TCurlyLineEditor(Long_t size, void *p);
   static void delete_TCurlyLineEditor(void *p);
   static void deleteArray_TCurlyLineEditor(void *p);
   static void destruct_TCurlyLineEditor(void *p);
   static void streamer_TCurlyLineEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCurlyLineEditor*)
   {
      ::TCurlyLineEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCurlyLineEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCurlyLineEditor", ::TCurlyLineEditor::Class_Version(), "TCurlyLineEditor.h", 29,
                  typeid(::TCurlyLineEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCurlyLineEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TCurlyLineEditor) );
      instance.SetNew(&new_TCurlyLineEditor);
      instance.SetNewArray(&newArray_TCurlyLineEditor);
      instance.SetDelete(&delete_TCurlyLineEditor);
      instance.SetDeleteArray(&deleteArray_TCurlyLineEditor);
      instance.SetDestructor(&destruct_TCurlyLineEditor);
      instance.SetStreamerFunc(&streamer_TCurlyLineEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCurlyLineEditor*)
   {
      return GenerateInitInstanceLocal((::TCurlyLineEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCurlyLineEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF1Editor(void *p = 0);
   static void *newArray_TF1Editor(Long_t size, void *p);
   static void delete_TF1Editor(void *p);
   static void deleteArray_TF1Editor(void *p);
   static void destruct_TF1Editor(void *p);
   static void streamer_TF1Editor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF1Editor*)
   {
      ::TF1Editor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF1Editor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TF1Editor", ::TF1Editor::Class_Version(), "TF1Editor.h", 34,
                  typeid(::TF1Editor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF1Editor::Dictionary, isa_proxy, 16,
                  sizeof(::TF1Editor) );
      instance.SetNew(&new_TF1Editor);
      instance.SetNewArray(&newArray_TF1Editor);
      instance.SetDelete(&delete_TF1Editor);
      instance.SetDeleteArray(&deleteArray_TF1Editor);
      instance.SetDestructor(&destruct_TF1Editor);
      instance.SetStreamerFunc(&streamer_TF1Editor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF1Editor*)
   {
      return GenerateInitInstanceLocal((::TF1Editor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TF1Editor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFrameEditor(void *p = 0);
   static void *newArray_TFrameEditor(Long_t size, void *p);
   static void delete_TFrameEditor(void *p);
   static void deleteArray_TFrameEditor(void *p);
   static void destruct_TFrameEditor(void *p);
   static void streamer_TFrameEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFrameEditor*)
   {
      ::TFrameEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFrameEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFrameEditor", ::TFrameEditor::Class_Version(), "TFrameEditor.h", 33,
                  typeid(::TFrameEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFrameEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TFrameEditor) );
      instance.SetNew(&new_TFrameEditor);
      instance.SetNewArray(&newArray_TFrameEditor);
      instance.SetDelete(&delete_TFrameEditor);
      instance.SetDeleteArray(&deleteArray_TFrameEditor);
      instance.SetDestructor(&destruct_TFrameEditor);
      instance.SetStreamerFunc(&streamer_TFrameEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFrameEditor*)
   {
      return GenerateInitInstanceLocal((::TFrameEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFrameEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFunctionParametersDialog(void *p);
   static void deleteArray_TFunctionParametersDialog(void *p);
   static void destruct_TFunctionParametersDialog(void *p);
   static void streamer_TFunctionParametersDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFunctionParametersDialog*)
   {
      ::TFunctionParametersDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFunctionParametersDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFunctionParametersDialog", ::TFunctionParametersDialog::Class_Version(), "TFunctionParametersDialog.h", 36,
                  typeid(::TFunctionParametersDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFunctionParametersDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TFunctionParametersDialog) );
      instance.SetDelete(&delete_TFunctionParametersDialog);
      instance.SetDeleteArray(&deleteArray_TFunctionParametersDialog);
      instance.SetDestructor(&destruct_TFunctionParametersDialog);
      instance.SetStreamerFunc(&streamer_TFunctionParametersDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFunctionParametersDialog*)
   {
      return GenerateInitInstanceLocal((::TFunctionParametersDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFunctionParametersDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGedEditor(void *p = 0);
   static void *newArray_TGedEditor(Long_t size, void *p);
   static void delete_TGedEditor(void *p);
   static void deleteArray_TGedEditor(void *p);
   static void destruct_TGedEditor(void *p);
   static void streamer_TGedEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedEditor*)
   {
      ::TGedEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedEditor", ::TGedEditor::Class_Version(), "TGedEditor.h", 41,
                  typeid(::TGedEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGedEditor) );
      instance.SetNew(&new_TGedEditor);
      instance.SetNewArray(&newArray_TGedEditor);
      instance.SetDelete(&delete_TGedEditor);
      instance.SetDeleteArray(&deleteArray_TGedEditor);
      instance.SetDestructor(&destruct_TGedEditor);
      instance.SetStreamerFunc(&streamer_TGedEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedEditor*)
   {
      return GenerateInitInstanceLocal((::TGedEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPopup(void *p);
   static void deleteArray_TGedPopup(void *p);
   static void destruct_TGedPopup(void *p);
   static void streamer_TGedPopup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPopup*)
   {
      ::TGedPopup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPopup >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPopup", ::TGedPopup::Class_Version(), "TGedPatternSelect.h", 47,
                  typeid(::TGedPopup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPopup::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPopup) );
      instance.SetDelete(&delete_TGedPopup);
      instance.SetDeleteArray(&deleteArray_TGedPopup);
      instance.SetDestructor(&destruct_TGedPopup);
      instance.SetStreamerFunc(&streamer_TGedPopup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPopup*)
   {
      return GenerateInitInstanceLocal((::TGedPopup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedPopup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPatternFrame(void *p);
   static void deleteArray_TGedPatternFrame(void *p);
   static void destruct_TGedPatternFrame(void *p);
   static void streamer_TGedPatternFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPatternFrame*)
   {
      ::TGedPatternFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPatternFrame >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPatternFrame", ::TGedPatternFrame::Class_Version(), "TGedPatternSelect.h", 65,
                  typeid(::TGedPatternFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPatternFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPatternFrame) );
      instance.SetDelete(&delete_TGedPatternFrame);
      instance.SetDeleteArray(&deleteArray_TGedPatternFrame);
      instance.SetDestructor(&destruct_TGedPatternFrame);
      instance.SetStreamerFunc(&streamer_TGedPatternFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPatternFrame*)
   {
      return GenerateInitInstanceLocal((::TGedPatternFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedPatternFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPatternSelector(void *p);
   static void deleteArray_TGedPatternSelector(void *p);
   static void destruct_TGedPatternSelector(void *p);
   static void streamer_TGedPatternSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPatternSelector*)
   {
      ::TGedPatternSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPatternSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPatternSelector", ::TGedPatternSelector::Class_Version(), "TGedPatternSelect.h", 93,
                  typeid(::TGedPatternSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPatternSelector::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPatternSelector) );
      instance.SetDelete(&delete_TGedPatternSelector);
      instance.SetDeleteArray(&deleteArray_TGedPatternSelector);
      instance.SetDestructor(&destruct_TGedPatternSelector);
      instance.SetStreamerFunc(&streamer_TGedPatternSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPatternSelector*)
   {
      return GenerateInitInstanceLocal((::TGedPatternSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedPatternSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPatternPopup(void *p);
   static void deleteArray_TGedPatternPopup(void *p);
   static void destruct_TGedPatternPopup(void *p);
   static void streamer_TGedPatternPopup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPatternPopup*)
   {
      ::TGedPatternPopup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPatternPopup >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPatternPopup", ::TGedPatternPopup::Class_Version(), "TGedPatternSelect.h", 111,
                  typeid(::TGedPatternPopup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPatternPopup::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPatternPopup) );
      instance.SetDelete(&delete_TGedPatternPopup);
      instance.SetDeleteArray(&deleteArray_TGedPatternPopup);
      instance.SetDestructor(&destruct_TGedPatternPopup);
      instance.SetStreamerFunc(&streamer_TGedPatternPopup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPatternPopup*)
   {
      return GenerateInitInstanceLocal((::TGedPatternPopup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedPatternPopup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedSelect(void *p);
   static void deleteArray_TGedSelect(void *p);
   static void destruct_TGedSelect(void *p);
   static void streamer_TGedSelect(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedSelect*)
   {
      ::TGedSelect *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedSelect >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedSelect", ::TGedSelect::Class_Version(), "TGedPatternSelect.h", 125,
                  typeid(::TGedSelect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedSelect::Dictionary, isa_proxy, 16,
                  sizeof(::TGedSelect) );
      instance.SetDelete(&delete_TGedSelect);
      instance.SetDeleteArray(&deleteArray_TGedSelect);
      instance.SetDestructor(&destruct_TGedSelect);
      instance.SetStreamerFunc(&streamer_TGedSelect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedSelect*)
   {
      return GenerateInitInstanceLocal((::TGedSelect*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedSelect*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPatternSelect(void *p);
   static void deleteArray_TGedPatternSelect(void *p);
   static void destruct_TGedPatternSelect(void *p);
   static void streamer_TGedPatternSelect(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPatternSelect*)
   {
      ::TGedPatternSelect *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPatternSelect >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPatternSelect", ::TGedPatternSelect::Class_Version(), "TGedPatternSelect.h", 147,
                  typeid(::TGedPatternSelect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPatternSelect::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPatternSelect) );
      instance.SetDelete(&delete_TGedPatternSelect);
      instance.SetDeleteArray(&deleteArray_TGedPatternSelect);
      instance.SetDestructor(&destruct_TGedPatternSelect);
      instance.SetStreamerFunc(&streamer_TGedPatternSelect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPatternSelect*)
   {
      return GenerateInitInstanceLocal((::TGedPatternSelect*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedPatternSelect*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedMarkerPopup(void *p);
   static void deleteArray_TGedMarkerPopup(void *p);
   static void destruct_TGedMarkerPopup(void *p);
   static void streamer_TGedMarkerPopup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedMarkerPopup*)
   {
      ::TGedMarkerPopup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedMarkerPopup >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedMarkerPopup", ::TGedMarkerPopup::Class_Version(), "TGedMarkerSelect.h", 39,
                  typeid(::TGedMarkerPopup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedMarkerPopup::Dictionary, isa_proxy, 16,
                  sizeof(::TGedMarkerPopup) );
      instance.SetDelete(&delete_TGedMarkerPopup);
      instance.SetDeleteArray(&deleteArray_TGedMarkerPopup);
      instance.SetDestructor(&destruct_TGedMarkerPopup);
      instance.SetStreamerFunc(&streamer_TGedMarkerPopup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedMarkerPopup*)
   {
      return GenerateInitInstanceLocal((::TGedMarkerPopup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedMarkerPopup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedMarkerSelect(void *p);
   static void deleteArray_TGedMarkerSelect(void *p);
   static void destruct_TGedMarkerSelect(void *p);
   static void streamer_TGedMarkerSelect(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedMarkerSelect*)
   {
      ::TGedMarkerSelect *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedMarkerSelect >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGedMarkerSelect", ::TGedMarkerSelect::Class_Version(), "TGedMarkerSelect.h", 54,
                  typeid(::TGedMarkerSelect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedMarkerSelect::Dictionary, isa_proxy, 16,
                  sizeof(::TGedMarkerSelect) );
      instance.SetDelete(&delete_TGedMarkerSelect);
      instance.SetDeleteArray(&deleteArray_TGedMarkerSelect);
      instance.SetDestructor(&destruct_TGedMarkerSelect);
      instance.SetStreamerFunc(&streamer_TGedMarkerSelect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedMarkerSelect*)
   {
      return GenerateInitInstanceLocal((::TGedMarkerSelect*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGedMarkerSelect*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphEditor(void *p = 0);
   static void *newArray_TGraphEditor(Long_t size, void *p);
   static void delete_TGraphEditor(void *p);
   static void deleteArray_TGraphEditor(void *p);
   static void destruct_TGraphEditor(void *p);
   static void streamer_TGraphEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphEditor*)
   {
      ::TGraphEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphEditor", ::TGraphEditor::Class_Version(), "TGraphEditor.h", 32,
                  typeid(::TGraphEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGraphEditor) );
      instance.SetNew(&new_TGraphEditor);
      instance.SetNewArray(&newArray_TGraphEditor);
      instance.SetDelete(&delete_TGraphEditor);
      instance.SetDeleteArray(&deleteArray_TGraphEditor);
      instance.SetDestructor(&destruct_TGraphEditor);
      instance.SetStreamerFunc(&streamer_TGraphEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphEditor*)
   {
      return GenerateInitInstanceLocal((::TGraphEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGraphEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH1Editor(void *p = 0);
   static void *newArray_TH1Editor(Long_t size, void *p);
   static void delete_TH1Editor(void *p);
   static void deleteArray_TH1Editor(void *p);
   static void destruct_TH1Editor(void *p);
   static void streamer_TH1Editor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH1Editor*)
   {
      ::TH1Editor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH1Editor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TH1Editor", ::TH1Editor::Class_Version(), "TH1Editor.h", 40,
                  typeid(::TH1Editor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH1Editor::Dictionary, isa_proxy, 16,
                  sizeof(::TH1Editor) );
      instance.SetNew(&new_TH1Editor);
      instance.SetNewArray(&newArray_TH1Editor);
      instance.SetDelete(&delete_TH1Editor);
      instance.SetDeleteArray(&deleteArray_TH1Editor);
      instance.SetDestructor(&destruct_TH1Editor);
      instance.SetStreamerFunc(&streamer_TH1Editor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH1Editor*)
   {
      return GenerateInitInstanceLocal((::TH1Editor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TH1Editor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2Editor(void *p = 0);
   static void *newArray_TH2Editor(Long_t size, void *p);
   static void delete_TH2Editor(void *p);
   static void deleteArray_TH2Editor(void *p);
   static void destruct_TH2Editor(void *p);
   static void streamer_TH2Editor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2Editor*)
   {
      ::TH2Editor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2Editor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TH2Editor", ::TH2Editor::Class_Version(), "TH2Editor.h", 41,
                  typeid(::TH2Editor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2Editor::Dictionary, isa_proxy, 16,
                  sizeof(::TH2Editor) );
      instance.SetNew(&new_TH2Editor);
      instance.SetNewArray(&newArray_TH2Editor);
      instance.SetDelete(&delete_TH2Editor);
      instance.SetDeleteArray(&deleteArray_TH2Editor);
      instance.SetDestructor(&destruct_TH2Editor);
      instance.SetStreamerFunc(&streamer_TH2Editor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2Editor*)
   {
      return GenerateInitInstanceLocal((::TH2Editor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TH2Editor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLineEditor(void *p = 0);
   static void *newArray_TLineEditor(Long_t size, void *p);
   static void delete_TLineEditor(void *p);
   static void deleteArray_TLineEditor(void *p);
   static void destruct_TLineEditor(void *p);
   static void streamer_TLineEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLineEditor*)
   {
      ::TLineEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLineEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLineEditor", ::TLineEditor::Class_Version(), "TLineEditor.h", 29,
                  typeid(::TLineEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLineEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TLineEditor) );
      instance.SetNew(&new_TLineEditor);
      instance.SetNewArray(&newArray_TLineEditor);
      instance.SetDelete(&delete_TLineEditor);
      instance.SetDeleteArray(&deleteArray_TLineEditor);
      instance.SetDestructor(&destruct_TLineEditor);
      instance.SetStreamerFunc(&streamer_TLineEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLineEditor*)
   {
      return GenerateInitInstanceLocal((::TLineEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLineEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPadEditor(void *p = 0);
   static void *newArray_TPadEditor(Long_t size, void *p);
   static void delete_TPadEditor(void *p);
   static void deleteArray_TPadEditor(void *p);
   static void destruct_TPadEditor(void *p);
   static void streamer_TPadEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPadEditor*)
   {
      ::TPadEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPadEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPadEditor", ::TPadEditor::Class_Version(), "TPadEditor.h", 32,
                  typeid(::TPadEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPadEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TPadEditor) );
      instance.SetNew(&new_TPadEditor);
      instance.SetNewArray(&newArray_TPadEditor);
      instance.SetDelete(&delete_TPadEditor);
      instance.SetDeleteArray(&deleteArray_TPadEditor);
      instance.SetDestructor(&destruct_TPadEditor);
      instance.SetStreamerFunc(&streamer_TPadEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPadEditor*)
   {
      return GenerateInitInstanceLocal((::TPadEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPadEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPaveStatsEditor(void *p = 0);
   static void *newArray_TPaveStatsEditor(Long_t size, void *p);
   static void delete_TPaveStatsEditor(void *p);
   static void deleteArray_TPaveStatsEditor(void *p);
   static void destruct_TPaveStatsEditor(void *p);
   static void streamer_TPaveStatsEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPaveStatsEditor*)
   {
      ::TPaveStatsEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPaveStatsEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPaveStatsEditor", ::TPaveStatsEditor::Class_Version(), "TPaveStatsEditor.h", 28,
                  typeid(::TPaveStatsEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPaveStatsEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TPaveStatsEditor) );
      instance.SetNew(&new_TPaveStatsEditor);
      instance.SetNewArray(&newArray_TPaveStatsEditor);
      instance.SetDelete(&delete_TPaveStatsEditor);
      instance.SetDeleteArray(&deleteArray_TPaveStatsEditor);
      instance.SetDestructor(&destruct_TPaveStatsEditor);
      instance.SetStreamerFunc(&streamer_TPaveStatsEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPaveStatsEditor*)
   {
      return GenerateInitInstanceLocal((::TPaveStatsEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPaveStatsEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPieEditor(void *p = 0);
   static void *newArray_TPieEditor(Long_t size, void *p);
   static void delete_TPieEditor(void *p);
   static void deleteArray_TPieEditor(void *p);
   static void destruct_TPieEditor(void *p);
   static void streamer_TPieEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPieEditor*)
   {
      ::TPieEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPieEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPieEditor", ::TPieEditor::Class_Version(), "TPieEditor.h", 35,
                  typeid(::TPieEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPieEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TPieEditor) );
      instance.SetNew(&new_TPieEditor);
      instance.SetNewArray(&newArray_TPieEditor);
      instance.SetDelete(&delete_TPieEditor);
      instance.SetDeleteArray(&deleteArray_TPieEditor);
      instance.SetDestructor(&destruct_TPieEditor);
      instance.SetStreamerFunc(&streamer_TPieEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPieEditor*)
   {
      return GenerateInitInstanceLocal((::TPieEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPieEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPieSliceEditor(void *p = 0);
   static void *newArray_TPieSliceEditor(Long_t size, void *p);
   static void delete_TPieSliceEditor(void *p);
   static void deleteArray_TPieSliceEditor(void *p);
   static void destruct_TPieSliceEditor(void *p);
   static void streamer_TPieSliceEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPieSliceEditor*)
   {
      ::TPieSliceEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPieSliceEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPieSliceEditor", ::TPieSliceEditor::Class_Version(), "TPieSliceEditor.h", 28,
                  typeid(::TPieSliceEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPieSliceEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TPieSliceEditor) );
      instance.SetNew(&new_TPieSliceEditor);
      instance.SetNewArray(&newArray_TPieSliceEditor);
      instance.SetDelete(&delete_TPieSliceEditor);
      instance.SetDeleteArray(&deleteArray_TPieSliceEditor);
      instance.SetDestructor(&destruct_TPieSliceEditor);
      instance.SetStreamerFunc(&streamer_TPieSliceEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPieSliceEditor*)
   {
      return GenerateInitInstanceLocal((::TPieSliceEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPieSliceEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStyleDialog(void *p);
   static void deleteArray_TStyleDialog(void *p);
   static void destruct_TStyleDialog(void *p);
   static void streamer_TStyleDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStyleDialog*)
   {
      ::TStyleDialog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStyleDialog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStyleDialog", ::TStyleDialog::Class_Version(), "TStyleDialog.h", 36,
                  typeid(::TStyleDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStyleDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TStyleDialog) );
      instance.SetDelete(&delete_TStyleDialog);
      instance.SetDeleteArray(&deleteArray_TStyleDialog);
      instance.SetDestructor(&destruct_TStyleDialog);
      instance.SetStreamerFunc(&streamer_TStyleDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStyleDialog*)
   {
      return GenerateInitInstanceLocal((::TStyleDialog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStyleDialog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStyleManager(void *p);
   static void deleteArray_TStyleManager(void *p);
   static void destruct_TStyleManager(void *p);
   static void streamer_TStyleManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStyleManager*)
   {
      ::TStyleManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStyleManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStyleManager", ::TStyleManager::Class_Version(), "TStyleManager.h", 64,
                  typeid(::TStyleManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStyleManager::Dictionary, isa_proxy, 16,
                  sizeof(::TStyleManager) );
      instance.SetDelete(&delete_TStyleManager);
      instance.SetDeleteArray(&deleteArray_TStyleManager);
      instance.SetDestructor(&destruct_TStyleManager);
      instance.SetStreamerFunc(&streamer_TStyleManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStyleManager*)
   {
      return GenerateInitInstanceLocal((::TStyleManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStyleManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStylePreview(void *p);
   static void deleteArray_TStylePreview(void *p);
   static void destruct_TStylePreview(void *p);
   static void streamer_TStylePreview(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStylePreview*)
   {
      ::TStylePreview *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStylePreview >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStylePreview", ::TStylePreview::Class_Version(), "TStylePreview.h", 33,
                  typeid(::TStylePreview), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStylePreview::Dictionary, isa_proxy, 16,
                  sizeof(::TStylePreview) );
      instance.SetDelete(&delete_TStylePreview);
      instance.SetDeleteArray(&deleteArray_TStylePreview);
      instance.SetDestructor(&destruct_TStylePreview);
      instance.SetStreamerFunc(&streamer_TStylePreview);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStylePreview*)
   {
      return GenerateInitInstanceLocal((::TStylePreview*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TStylePreview*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTextEditor(void *p = 0);
   static void *newArray_TTextEditor(Long_t size, void *p);
   static void delete_TTextEditor(void *p);
   static void deleteArray_TTextEditor(void *p);
   static void destruct_TTextEditor(void *p);
   static void streamer_TTextEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTextEditor*)
   {
      ::TTextEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTextEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTextEditor", ::TTextEditor::Class_Version(), "TTextEditor.h", 28,
                  typeid(::TTextEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTextEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TTextEditor) );
      instance.SetNew(&new_TTextEditor);
      instance.SetNewArray(&newArray_TTextEditor);
      instance.SetDelete(&delete_TTextEditor);
      instance.SetDeleteArray(&deleteArray_TTextEditor);
      instance.SetDestructor(&destruct_TTextEditor);
      instance.SetStreamerFunc(&streamer_TTextEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTextEditor*)
   {
      return GenerateInitInstanceLocal((::TTextEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTextEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGedFrame::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedFrame::Class_Name()
{
   return "TGedFrame";
}

//______________________________________________________________________________
const char *TGedFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedFrame*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedFrame*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedFrame*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedFrame*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedNameFrame::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedNameFrame::Class_Name()
{
   return "TGedNameFrame";
}

//______________________________________________________________________________
const char *TGedNameFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedNameFrame*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedNameFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedNameFrame*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedNameFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedNameFrame*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedNameFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedNameFrame*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArrowEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArrowEditor::Class_Name()
{
   return "TArrowEditor";
}

//______________________________________________________________________________
const char *TArrowEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArrowEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArrowEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArrowEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArrowEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArrowEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArrowEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArrowEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAttFillEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttFillEditor::Class_Name()
{
   return "TAttFillEditor";
}

//______________________________________________________________________________
const char *TAttFillEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttFillEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAttFillEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttFillEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttFillEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttFillEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttFillEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttFillEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAttLineEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttLineEditor::Class_Name()
{
   return "TAttLineEditor";
}

//______________________________________________________________________________
const char *TAttLineEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttLineEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAttLineEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttLineEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttLineEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttLineEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttLineEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttLineEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAttMarkerEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttMarkerEditor::Class_Name()
{
   return "TAttMarkerEditor";
}

//______________________________________________________________________________
const char *TAttMarkerEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttMarkerEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAttMarkerEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttMarkerEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttMarkerEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttMarkerEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttMarkerEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttMarkerEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAttTextEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttTextEditor::Class_Name()
{
   return "TAttTextEditor";
}

//______________________________________________________________________________
const char *TAttTextEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttTextEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAttTextEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttTextEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttTextEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttTextEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttTextEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttTextEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAxisEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAxisEditor::Class_Name()
{
   return "TAxisEditor";
}

//______________________________________________________________________________
const char *TAxisEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxisEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAxisEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxisEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAxisEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxisEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAxisEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxisEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCurlyArcEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCurlyArcEditor::Class_Name()
{
   return "TCurlyArcEditor";
}

//______________________________________________________________________________
const char *TCurlyArcEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArcEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCurlyArcEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArcEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCurlyArcEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArcEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCurlyArcEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArcEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCurlyLineEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCurlyLineEditor::Class_Name()
{
   return "TCurlyLineEditor";
}

//______________________________________________________________________________
const char *TCurlyLineEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLineEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCurlyLineEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLineEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCurlyLineEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLineEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCurlyLineEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLineEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF1Editor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TF1Editor::Class_Name()
{
   return "TF1Editor";
}

//______________________________________________________________________________
const char *TF1Editor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1Editor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TF1Editor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1Editor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF1Editor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1Editor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF1Editor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1Editor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFrameEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFrameEditor::Class_Name()
{
   return "TFrameEditor";
}

//______________________________________________________________________________
const char *TFrameEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFrameEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFrameEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFrameEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFrameEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFrameEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFrameEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFrameEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFunctionParametersDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFunctionParametersDialog::Class_Name()
{
   return "TFunctionParametersDialog";
}

//______________________________________________________________________________
const char *TFunctionParametersDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFunctionParametersDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFunctionParametersDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFunctionParametersDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFunctionParametersDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFunctionParametersDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFunctionParametersDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFunctionParametersDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedEditor::Class_Name()
{
   return "TGedEditor";
}

//______________________________________________________________________________
const char *TGedEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPopup::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPopup::Class_Name()
{
   return "TGedPopup";
}

//______________________________________________________________________________
const char *TGedPopup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPopup*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPopup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPopup*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPopup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPopup*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPopup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPopup*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPatternFrame::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPatternFrame::Class_Name()
{
   return "TGedPatternFrame";
}

//______________________________________________________________________________
const char *TGedPatternFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternFrame*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPatternFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternFrame*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPatternFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternFrame*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPatternFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternFrame*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPatternSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPatternSelector::Class_Name()
{
   return "TGedPatternSelector";
}

//______________________________________________________________________________
const char *TGedPatternSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPatternSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPatternSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPatternSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPatternPopup::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPatternPopup::Class_Name()
{
   return "TGedPatternPopup";
}

//______________________________________________________________________________
const char *TGedPatternPopup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternPopup*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPatternPopup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternPopup*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPatternPopup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternPopup*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPatternPopup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternPopup*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedSelect::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedSelect::Class_Name()
{
   return "TGedSelect";
}

//______________________________________________________________________________
const char *TGedSelect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedSelect*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedSelect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedSelect*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedSelect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedSelect*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedSelect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedSelect*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPatternSelect::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPatternSelect::Class_Name()
{
   return "TGedPatternSelect";
}

//______________________________________________________________________________
const char *TGedPatternSelect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelect*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPatternSelect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelect*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPatternSelect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelect*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPatternSelect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelect*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedMarkerPopup::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedMarkerPopup::Class_Name()
{
   return "TGedMarkerPopup";
}

//______________________________________________________________________________
const char *TGedMarkerPopup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerPopup*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedMarkerPopup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerPopup*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedMarkerPopup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerPopup*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedMarkerPopup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerPopup*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedMarkerSelect::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedMarkerSelect::Class_Name()
{
   return "TGedMarkerSelect";
}

//______________________________________________________________________________
const char *TGedMarkerSelect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerSelect*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGedMarkerSelect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerSelect*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedMarkerSelect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerSelect*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedMarkerSelect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerSelect*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphEditor::Class_Name()
{
   return "TGraphEditor";
}

//______________________________________________________________________________
const char *TGraphEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH1Editor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TH1Editor::Class_Name()
{
   return "TH1Editor";
}

//______________________________________________________________________________
const char *TH1Editor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1Editor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TH1Editor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1Editor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH1Editor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1Editor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH1Editor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1Editor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2Editor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2Editor::Class_Name()
{
   return "TH2Editor";
}

//______________________________________________________________________________
const char *TH2Editor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2Editor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TH2Editor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2Editor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2Editor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2Editor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2Editor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2Editor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLineEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLineEditor::Class_Name()
{
   return "TLineEditor";
}

//______________________________________________________________________________
const char *TLineEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLineEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLineEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLineEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLineEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLineEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLineEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLineEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPadEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPadEditor::Class_Name()
{
   return "TPadEditor";
}

//______________________________________________________________________________
const char *TPadEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPadEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPadEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPadEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPaveStatsEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPaveStatsEditor::Class_Name()
{
   return "TPaveStatsEditor";
}

//______________________________________________________________________________
const char *TPaveStatsEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveStatsEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPaveStatsEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveStatsEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPaveStatsEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveStatsEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPaveStatsEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveStatsEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPieEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPieEditor::Class_Name()
{
   return "TPieEditor";
}

//______________________________________________________________________________
const char *TPieEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPieEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPieEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPieEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPieSliceEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPieSliceEditor::Class_Name()
{
   return "TPieSliceEditor";
}

//______________________________________________________________________________
const char *TPieSliceEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieSliceEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPieSliceEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieSliceEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPieSliceEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieSliceEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPieSliceEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieSliceEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStyleDialog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStyleDialog::Class_Name()
{
   return "TStyleDialog";
}

//______________________________________________________________________________
const char *TStyleDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStyleDialog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStyleDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStyleDialog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStyleDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStyleDialog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStyleDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStyleDialog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStyleManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStyleManager::Class_Name()
{
   return "TStyleManager";
}

//______________________________________________________________________________
const char *TStyleManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStyleManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStyleManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStyleManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStyleManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStyleManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStyleManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStyleManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStylePreview::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStylePreview::Class_Name()
{
   return "TStylePreview";
}

//______________________________________________________________________________
const char *TStylePreview::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStylePreview*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStylePreview::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStylePreview*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStylePreview::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStylePreview*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStylePreview::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStylePreview*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTextEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTextEditor::Class_Name()
{
   return "TTextEditor";
}

//______________________________________________________________________________
const char *TTextEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTextEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTextEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTextEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTextEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTextEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTextEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTextEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGedFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedFrame(void *p) {
      delete ((::TGedFrame*)p);
   }
   static void deleteArray_TGedFrame(void *p) {
      delete [] ((::TGedFrame*)p);
   }
   static void destruct_TGedFrame(void *p) {
      typedef ::TGedFrame current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedFrame(TBuffer &buf, void *obj) {
      ((::TGedFrame*)obj)->::TGedFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedFrame

//______________________________________________________________________________
void TGedNameFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedNameFrame.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGedNameFrame(void *p) {
      return  p ? new(p) ::TGedNameFrame : new ::TGedNameFrame;
   }
   static void *newArray_TGedNameFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGedNameFrame[nElements] : new ::TGedNameFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGedNameFrame(void *p) {
      delete ((::TGedNameFrame*)p);
   }
   static void deleteArray_TGedNameFrame(void *p) {
      delete [] ((::TGedNameFrame*)p);
   }
   static void destruct_TGedNameFrame(void *p) {
      typedef ::TGedNameFrame current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedNameFrame(TBuffer &buf, void *obj) {
      ((::TGedNameFrame*)obj)->::TGedNameFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedNameFrame

//______________________________________________________________________________
void TArrowEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArrowEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArrowEditor(void *p) {
      return  p ? new(p) ::TArrowEditor : new ::TArrowEditor;
   }
   static void *newArray_TArrowEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TArrowEditor[nElements] : new ::TArrowEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArrowEditor(void *p) {
      delete ((::TArrowEditor*)p);
   }
   static void deleteArray_TArrowEditor(void *p) {
      delete [] ((::TArrowEditor*)p);
   }
   static void destruct_TArrowEditor(void *p) {
      typedef ::TArrowEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TArrowEditor(TBuffer &buf, void *obj) {
      ((::TArrowEditor*)obj)->::TArrowEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TArrowEditor

//______________________________________________________________________________
void TAttFillEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttFillEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttFillEditor(void *p) {
      return  p ? new(p) ::TAttFillEditor : new ::TAttFillEditor;
   }
   static void *newArray_TAttFillEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAttFillEditor[nElements] : new ::TAttFillEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttFillEditor(void *p) {
      delete ((::TAttFillEditor*)p);
   }
   static void deleteArray_TAttFillEditor(void *p) {
      delete [] ((::TAttFillEditor*)p);
   }
   static void destruct_TAttFillEditor(void *p) {
      typedef ::TAttFillEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAttFillEditor(TBuffer &buf, void *obj) {
      ((::TAttFillEditor*)obj)->::TAttFillEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAttFillEditor

//______________________________________________________________________________
void TAttLineEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttLineEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttLineEditor(void *p) {
      return  p ? new(p) ::TAttLineEditor : new ::TAttLineEditor;
   }
   static void *newArray_TAttLineEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAttLineEditor[nElements] : new ::TAttLineEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttLineEditor(void *p) {
      delete ((::TAttLineEditor*)p);
   }
   static void deleteArray_TAttLineEditor(void *p) {
      delete [] ((::TAttLineEditor*)p);
   }
   static void destruct_TAttLineEditor(void *p) {
      typedef ::TAttLineEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAttLineEditor(TBuffer &buf, void *obj) {
      ((::TAttLineEditor*)obj)->::TAttLineEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAttLineEditor

//______________________________________________________________________________
void TAttMarkerEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttMarkerEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttMarkerEditor(void *p) {
      return  p ? new(p) ::TAttMarkerEditor : new ::TAttMarkerEditor;
   }
   static void *newArray_TAttMarkerEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAttMarkerEditor[nElements] : new ::TAttMarkerEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttMarkerEditor(void *p) {
      delete ((::TAttMarkerEditor*)p);
   }
   static void deleteArray_TAttMarkerEditor(void *p) {
      delete [] ((::TAttMarkerEditor*)p);
   }
   static void destruct_TAttMarkerEditor(void *p) {
      typedef ::TAttMarkerEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAttMarkerEditor(TBuffer &buf, void *obj) {
      ((::TAttMarkerEditor*)obj)->::TAttMarkerEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAttMarkerEditor

//______________________________________________________________________________
void TAttTextEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttTextEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttTextEditor(void *p) {
      return  p ? new(p) ::TAttTextEditor : new ::TAttTextEditor;
   }
   static void *newArray_TAttTextEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAttTextEditor[nElements] : new ::TAttTextEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttTextEditor(void *p) {
      delete ((::TAttTextEditor*)p);
   }
   static void deleteArray_TAttTextEditor(void *p) {
      delete [] ((::TAttTextEditor*)p);
   }
   static void destruct_TAttTextEditor(void *p) {
      typedef ::TAttTextEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAttTextEditor(TBuffer &buf, void *obj) {
      ((::TAttTextEditor*)obj)->::TAttTextEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAttTextEditor

//______________________________________________________________________________
void TAxisEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAxisEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAxisEditor(void *p) {
      return  p ? new(p) ::TAxisEditor : new ::TAxisEditor;
   }
   static void *newArray_TAxisEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAxisEditor[nElements] : new ::TAxisEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAxisEditor(void *p) {
      delete ((::TAxisEditor*)p);
   }
   static void deleteArray_TAxisEditor(void *p) {
      delete [] ((::TAxisEditor*)p);
   }
   static void destruct_TAxisEditor(void *p) {
      typedef ::TAxisEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAxisEditor(TBuffer &buf, void *obj) {
      ((::TAxisEditor*)obj)->::TAxisEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAxisEditor

//______________________________________________________________________________
void TCurlyArcEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCurlyArcEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCurlyArcEditor(void *p) {
      return  p ? new(p) ::TCurlyArcEditor : new ::TCurlyArcEditor;
   }
   static void *newArray_TCurlyArcEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TCurlyArcEditor[nElements] : new ::TCurlyArcEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCurlyArcEditor(void *p) {
      delete ((::TCurlyArcEditor*)p);
   }
   static void deleteArray_TCurlyArcEditor(void *p) {
      delete [] ((::TCurlyArcEditor*)p);
   }
   static void destruct_TCurlyArcEditor(void *p) {
      typedef ::TCurlyArcEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCurlyArcEditor(TBuffer &buf, void *obj) {
      ((::TCurlyArcEditor*)obj)->::TCurlyArcEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCurlyArcEditor

//______________________________________________________________________________
void TCurlyLineEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCurlyLineEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCurlyLineEditor(void *p) {
      return  p ? new(p) ::TCurlyLineEditor : new ::TCurlyLineEditor;
   }
   static void *newArray_TCurlyLineEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TCurlyLineEditor[nElements] : new ::TCurlyLineEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCurlyLineEditor(void *p) {
      delete ((::TCurlyLineEditor*)p);
   }
   static void deleteArray_TCurlyLineEditor(void *p) {
      delete [] ((::TCurlyLineEditor*)p);
   }
   static void destruct_TCurlyLineEditor(void *p) {
      typedef ::TCurlyLineEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCurlyLineEditor(TBuffer &buf, void *obj) {
      ((::TCurlyLineEditor*)obj)->::TCurlyLineEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCurlyLineEditor

//______________________________________________________________________________
void TF1Editor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TF1Editor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF1Editor(void *p) {
      return  p ? new(p) ::TF1Editor : new ::TF1Editor;
   }
   static void *newArray_TF1Editor(Long_t nElements, void *p) {
      return p ? new(p) ::TF1Editor[nElements] : new ::TF1Editor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF1Editor(void *p) {
      delete ((::TF1Editor*)p);
   }
   static void deleteArray_TF1Editor(void *p) {
      delete [] ((::TF1Editor*)p);
   }
   static void destruct_TF1Editor(void *p) {
      typedef ::TF1Editor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TF1Editor(TBuffer &buf, void *obj) {
      ((::TF1Editor*)obj)->::TF1Editor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TF1Editor

//______________________________________________________________________________
void TFrameEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFrameEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFrameEditor(void *p) {
      return  p ? new(p) ::TFrameEditor : new ::TFrameEditor;
   }
   static void *newArray_TFrameEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TFrameEditor[nElements] : new ::TFrameEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFrameEditor(void *p) {
      delete ((::TFrameEditor*)p);
   }
   static void deleteArray_TFrameEditor(void *p) {
      delete [] ((::TFrameEditor*)p);
   }
   static void destruct_TFrameEditor(void *p) {
      typedef ::TFrameEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFrameEditor(TBuffer &buf, void *obj) {
      ((::TFrameEditor*)obj)->::TFrameEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFrameEditor

//______________________________________________________________________________
void TFunctionParametersDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFunctionParametersDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFunctionParametersDialog(void *p) {
      delete ((::TFunctionParametersDialog*)p);
   }
   static void deleteArray_TFunctionParametersDialog(void *p) {
      delete [] ((::TFunctionParametersDialog*)p);
   }
   static void destruct_TFunctionParametersDialog(void *p) {
      typedef ::TFunctionParametersDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFunctionParametersDialog(TBuffer &buf, void *obj) {
      ((::TFunctionParametersDialog*)obj)->::TFunctionParametersDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFunctionParametersDialog

//______________________________________________________________________________
void TGedEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedEditor.

   TVirtualPadEditor::Streamer(R__b);
   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGedEditor(void *p) {
      return  p ? new(p) ::TGedEditor : new ::TGedEditor;
   }
   static void *newArray_TGedEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGedEditor[nElements] : new ::TGedEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGedEditor(void *p) {
      delete ((::TGedEditor*)p);
   }
   static void deleteArray_TGedEditor(void *p) {
      delete [] ((::TGedEditor*)p);
   }
   static void destruct_TGedEditor(void *p) {
      typedef ::TGedEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedEditor(TBuffer &buf, void *obj) {
      ((::TGedEditor*)obj)->::TGedEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedEditor

//______________________________________________________________________________
void TGedPopup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPopup.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPopup(void *p) {
      delete ((::TGedPopup*)p);
   }
   static void deleteArray_TGedPopup(void *p) {
      delete [] ((::TGedPopup*)p);
   }
   static void destruct_TGedPopup(void *p) {
      typedef ::TGedPopup current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPopup(TBuffer &buf, void *obj) {
      ((::TGedPopup*)obj)->::TGedPopup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPopup

//______________________________________________________________________________
void TGedPatternFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPatternFrame.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPatternFrame(void *p) {
      delete ((::TGedPatternFrame*)p);
   }
   static void deleteArray_TGedPatternFrame(void *p) {
      delete [] ((::TGedPatternFrame*)p);
   }
   static void destruct_TGedPatternFrame(void *p) {
      typedef ::TGedPatternFrame current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPatternFrame(TBuffer &buf, void *obj) {
      ((::TGedPatternFrame*)obj)->::TGedPatternFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPatternFrame

//______________________________________________________________________________
void TGedPatternSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPatternSelector.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPatternSelector(void *p) {
      delete ((::TGedPatternSelector*)p);
   }
   static void deleteArray_TGedPatternSelector(void *p) {
      delete [] ((::TGedPatternSelector*)p);
   }
   static void destruct_TGedPatternSelector(void *p) {
      typedef ::TGedPatternSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPatternSelector(TBuffer &buf, void *obj) {
      ((::TGedPatternSelector*)obj)->::TGedPatternSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPatternSelector

//______________________________________________________________________________
void TGedPatternPopup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPatternPopup.

   TGedPopup::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPatternPopup(void *p) {
      delete ((::TGedPatternPopup*)p);
   }
   static void deleteArray_TGedPatternPopup(void *p) {
      delete [] ((::TGedPatternPopup*)p);
   }
   static void destruct_TGedPatternPopup(void *p) {
      typedef ::TGedPatternPopup current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPatternPopup(TBuffer &buf, void *obj) {
      ((::TGedPatternPopup*)obj)->::TGedPatternPopup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPatternPopup

//______________________________________________________________________________
void TGedSelect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedSelect.

   TGCheckButton::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedSelect(void *p) {
      delete ((::TGedSelect*)p);
   }
   static void deleteArray_TGedSelect(void *p) {
      delete [] ((::TGedSelect*)p);
   }
   static void destruct_TGedSelect(void *p) {
      typedef ::TGedSelect current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedSelect(TBuffer &buf, void *obj) {
      ((::TGedSelect*)obj)->::TGedSelect::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedSelect

//______________________________________________________________________________
void TGedPatternSelect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPatternSelect.

   TGedSelect::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPatternSelect(void *p) {
      delete ((::TGedPatternSelect*)p);
   }
   static void deleteArray_TGedPatternSelect(void *p) {
      delete [] ((::TGedPatternSelect*)p);
   }
   static void destruct_TGedPatternSelect(void *p) {
      typedef ::TGedPatternSelect current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPatternSelect(TBuffer &buf, void *obj) {
      ((::TGedPatternSelect*)obj)->::TGedPatternSelect::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPatternSelect

//______________________________________________________________________________
void TGedMarkerPopup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedMarkerPopup.

   TGedPopup::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedMarkerPopup(void *p) {
      delete ((::TGedMarkerPopup*)p);
   }
   static void deleteArray_TGedMarkerPopup(void *p) {
      delete [] ((::TGedMarkerPopup*)p);
   }
   static void destruct_TGedMarkerPopup(void *p) {
      typedef ::TGedMarkerPopup current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedMarkerPopup(TBuffer &buf, void *obj) {
      ((::TGedMarkerPopup*)obj)->::TGedMarkerPopup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedMarkerPopup

//______________________________________________________________________________
void TGedMarkerSelect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedMarkerSelect.

   TGedSelect::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedMarkerSelect(void *p) {
      delete ((::TGedMarkerSelect*)p);
   }
   static void deleteArray_TGedMarkerSelect(void *p) {
      delete [] ((::TGedMarkerSelect*)p);
   }
   static void destruct_TGedMarkerSelect(void *p) {
      typedef ::TGedMarkerSelect current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedMarkerSelect(TBuffer &buf, void *obj) {
      ((::TGedMarkerSelect*)obj)->::TGedMarkerSelect::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedMarkerSelect

//______________________________________________________________________________
void TGraphEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphEditor(void *p) {
      return  p ? new(p) ::TGraphEditor : new ::TGraphEditor;
   }
   static void *newArray_TGraphEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphEditor[nElements] : new ::TGraphEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphEditor(void *p) {
      delete ((::TGraphEditor*)p);
   }
   static void deleteArray_TGraphEditor(void *p) {
      delete [] ((::TGraphEditor*)p);
   }
   static void destruct_TGraphEditor(void *p) {
      typedef ::TGraphEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraphEditor(TBuffer &buf, void *obj) {
      ((::TGraphEditor*)obj)->::TGraphEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraphEditor

//______________________________________________________________________________
void TH1Editor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH1Editor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH1Editor(void *p) {
      return  p ? new(p) ::TH1Editor : new ::TH1Editor;
   }
   static void *newArray_TH1Editor(Long_t nElements, void *p) {
      return p ? new(p) ::TH1Editor[nElements] : new ::TH1Editor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH1Editor(void *p) {
      delete ((::TH1Editor*)p);
   }
   static void deleteArray_TH1Editor(void *p) {
      delete [] ((::TH1Editor*)p);
   }
   static void destruct_TH1Editor(void *p) {
      typedef ::TH1Editor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH1Editor(TBuffer &buf, void *obj) {
      ((::TH1Editor*)obj)->::TH1Editor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TH1Editor

//______________________________________________________________________________
void TH2Editor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2Editor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2Editor(void *p) {
      return  p ? new(p) ::TH2Editor : new ::TH2Editor;
   }
   static void *newArray_TH2Editor(Long_t nElements, void *p) {
      return p ? new(p) ::TH2Editor[nElements] : new ::TH2Editor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2Editor(void *p) {
      delete ((::TH2Editor*)p);
   }
   static void deleteArray_TH2Editor(void *p) {
      delete [] ((::TH2Editor*)p);
   }
   static void destruct_TH2Editor(void *p) {
      typedef ::TH2Editor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH2Editor(TBuffer &buf, void *obj) {
      ((::TH2Editor*)obj)->::TH2Editor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TH2Editor

//______________________________________________________________________________
void TLineEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLineEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLineEditor(void *p) {
      return  p ? new(p) ::TLineEditor : new ::TLineEditor;
   }
   static void *newArray_TLineEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TLineEditor[nElements] : new ::TLineEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLineEditor(void *p) {
      delete ((::TLineEditor*)p);
   }
   static void deleteArray_TLineEditor(void *p) {
      delete [] ((::TLineEditor*)p);
   }
   static void destruct_TLineEditor(void *p) {
      typedef ::TLineEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLineEditor(TBuffer &buf, void *obj) {
      ((::TLineEditor*)obj)->::TLineEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLineEditor

//______________________________________________________________________________
void TPadEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPadEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPadEditor(void *p) {
      return  p ? new(p) ::TPadEditor : new ::TPadEditor;
   }
   static void *newArray_TPadEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TPadEditor[nElements] : new ::TPadEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPadEditor(void *p) {
      delete ((::TPadEditor*)p);
   }
   static void deleteArray_TPadEditor(void *p) {
      delete [] ((::TPadEditor*)p);
   }
   static void destruct_TPadEditor(void *p) {
      typedef ::TPadEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPadEditor(TBuffer &buf, void *obj) {
      ((::TPadEditor*)obj)->::TPadEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPadEditor

//______________________________________________________________________________
void TPaveStatsEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaveStatsEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPaveStatsEditor(void *p) {
      return  p ? new(p) ::TPaveStatsEditor : new ::TPaveStatsEditor;
   }
   static void *newArray_TPaveStatsEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TPaveStatsEditor[nElements] : new ::TPaveStatsEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPaveStatsEditor(void *p) {
      delete ((::TPaveStatsEditor*)p);
   }
   static void deleteArray_TPaveStatsEditor(void *p) {
      delete [] ((::TPaveStatsEditor*)p);
   }
   static void destruct_TPaveStatsEditor(void *p) {
      typedef ::TPaveStatsEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPaveStatsEditor(TBuffer &buf, void *obj) {
      ((::TPaveStatsEditor*)obj)->::TPaveStatsEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPaveStatsEditor

//______________________________________________________________________________
void TPieEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPieEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPieEditor(void *p) {
      return  p ? new(p) ::TPieEditor : new ::TPieEditor;
   }
   static void *newArray_TPieEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TPieEditor[nElements] : new ::TPieEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPieEditor(void *p) {
      delete ((::TPieEditor*)p);
   }
   static void deleteArray_TPieEditor(void *p) {
      delete [] ((::TPieEditor*)p);
   }
   static void destruct_TPieEditor(void *p) {
      typedef ::TPieEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPieEditor(TBuffer &buf, void *obj) {
      ((::TPieEditor*)obj)->::TPieEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPieEditor

//______________________________________________________________________________
void TPieSliceEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPieSliceEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPieSliceEditor(void *p) {
      return  p ? new(p) ::TPieSliceEditor : new ::TPieSliceEditor;
   }
   static void *newArray_TPieSliceEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TPieSliceEditor[nElements] : new ::TPieSliceEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPieSliceEditor(void *p) {
      delete ((::TPieSliceEditor*)p);
   }
   static void deleteArray_TPieSliceEditor(void *p) {
      delete [] ((::TPieSliceEditor*)p);
   }
   static void destruct_TPieSliceEditor(void *p) {
      typedef ::TPieSliceEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPieSliceEditor(TBuffer &buf, void *obj) {
      ((::TPieSliceEditor*)obj)->::TPieSliceEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPieSliceEditor

//______________________________________________________________________________
void TStyleDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStyleDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStyleDialog(void *p) {
      delete ((::TStyleDialog*)p);
   }
   static void deleteArray_TStyleDialog(void *p) {
      delete [] ((::TStyleDialog*)p);
   }
   static void destruct_TStyleDialog(void *p) {
      typedef ::TStyleDialog current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStyleDialog(TBuffer &buf, void *obj) {
      ((::TStyleDialog*)obj)->::TStyleDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStyleDialog

//______________________________________________________________________________
void TStyleManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStyleManager.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStyleManager(void *p) {
      delete ((::TStyleManager*)p);
   }
   static void deleteArray_TStyleManager(void *p) {
      delete [] ((::TStyleManager*)p);
   }
   static void destruct_TStyleManager(void *p) {
      typedef ::TStyleManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStyleManager(TBuffer &buf, void *obj) {
      ((::TStyleManager*)obj)->::TStyleManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStyleManager

//______________________________________________________________________________
void TStylePreview::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStylePreview.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStylePreview(void *p) {
      delete ((::TStylePreview*)p);
   }
   static void deleteArray_TStylePreview(void *p) {
      delete [] ((::TStylePreview*)p);
   }
   static void destruct_TStylePreview(void *p) {
      typedef ::TStylePreview current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStylePreview(TBuffer &buf, void *obj) {
      ((::TStylePreview*)obj)->::TStylePreview::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStylePreview

//______________________________________________________________________________
void TTextEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTextEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTextEditor(void *p) {
      return  p ? new(p) ::TTextEditor : new ::TTextEditor;
   }
   static void *newArray_TTextEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TTextEditor[nElements] : new ::TTextEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTextEditor(void *p) {
      delete ((::TTextEditor*)p);
   }
   static void deleteArray_TTextEditor(void *p) {
      delete [] ((::TTextEditor*)p);
   }
   static void destruct_TTextEditor(void *p) {
      typedef ::TTextEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTextEditor(TBuffer &buf, void *obj) {
      ((::TTextEditor*)obj)->::TTextEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTextEditor

namespace {
  void TriggerDictionaryInitialization_libGed_Impl() {
    static const char* headers[] = {
"HelpSMText.h",
"TArrowEditor.h",
"TAttFillEditor.h",
"TAttLineEditor.h",
"TAttMarkerEditor.h",
"TAttTextEditor.h",
"TAxisEditor.h",
"TCurlyArcEditor.h",
"TCurlyLineEditor.h",
"TF1Editor.h",
"TFrameEditor.h",
"TFunctionParametersDialog.h",
"TGedEditor.h",
"TGedFrame.h",
"TGedMarkerSelect.h",
"TGedPatternSelect.h",
"TGraphEditor.h",
"TH1Editor.h",
"TH2Editor.h",
"TLineEditor.h",
"TPadEditor.h",
"TPaveStatsEditor.h",
"TPieEditor.h",
"TPieSliceEditor.h",
"TStyleDialog.h",
"TStyleManager.h",
"TStylePreview.h",
"TTextEditor.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGed dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(base editor's frame)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(base editor's frame)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(base editor's frame)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedFrame.h")))  __attribute__((annotate("$clingAutoload$TArrowEditor.h")))  TGedFrame;
class __attribute__((annotate(R"ATTRDUMP(frame showing the selected object name)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedFrame.h")))  __attribute__((annotate("$clingAutoload$TArrowEditor.h")))  TGedNameFrame;
class __attribute__((annotate(R"ATTRDUMP(GUI for editing arrow attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TArrowEditor.h")))  TArrowEditor;
class __attribute__((annotate(R"ATTRDUMP(GUI for editing fill attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAttFillEditor.h")))  TAttFillEditor;
class __attribute__((annotate(R"ATTRDUMP(GUI for editing line attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAttLineEditor.h")))  TAttLineEditor;
class __attribute__((annotate(R"ATTRDUMP(GUI for editing marker attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAttMarkerEditor.h")))  TAttMarkerEditor;
class __attribute__((annotate(R"ATTRDUMP(GUI for editing text attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAttTextEditor.h")))  TAttTextEditor;
class __attribute__((annotate(R"ATTRDUMP(axis editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAxisEditor.h")))  TAxisEditor;
class __attribute__((annotate(R"ATTRDUMP(GUI for editing arrow attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TCurlyArcEditor.h")))  TCurlyArcEditor;
class __attribute__((annotate(R"ATTRDUMP(GUI for editing arrow attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TCurlyLineEditor.h")))  TCurlyLineEditor;
class __attribute__((annotate(R"ATTRDUMP(user interface for TF1 objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TF1Editor.h")))  TF1Editor;
class __attribute__((annotate(R"ATTRDUMP(editor of TFrame objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFrameEditor.h")))  TFrameEditor;
class __attribute__((annotate(R"ATTRDUMP(Function parameters dialog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFunctionParametersDialog.h")))  TFunctionParametersDialog;
class __attribute__((annotate(R"ATTRDUMP(ROOT graphics editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedEditor.h")))  TGedEditor;
class __attribute__((annotate(R"ATTRDUMP(popup window)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedPatternSelect.h")))  __attribute__((annotate("$clingAutoload$TGedMarkerSelect.h")))  TGedPopup;
class __attribute__((annotate(R"ATTRDUMP(pattern frame)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedPatternSelect.h")))  __attribute__((annotate("$clingAutoload$TGedMarkerSelect.h")))  TGedPatternFrame;
class __attribute__((annotate(R"ATTRDUMP(select pattern frame)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedPatternSelect.h")))  __attribute__((annotate("$clingAutoload$TGedMarkerSelect.h")))  TGedPatternSelector;
class __attribute__((annotate(R"ATTRDUMP(Color selector popup)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedPatternSelect.h")))  __attribute__((annotate("$clingAutoload$TGedMarkerSelect.h")))  TGedPatternPopup;
class __attribute__((annotate(R"ATTRDUMP(selection check-button)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedPatternSelect.h")))  __attribute__((annotate("$clingAutoload$TGedMarkerSelect.h")))  TGedSelect;
class __attribute__((annotate(R"ATTRDUMP(pattern selection check-button)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedPatternSelect.h")))  __attribute__((annotate("$clingAutoload$TGedMarkerSelect.h")))  TGedPatternSelect;
class __attribute__((annotate(R"ATTRDUMP(marker select popup)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedMarkerSelect.h")))  TGedMarkerPopup;
class __attribute__((annotate(R"ATTRDUMP(Marker selection button)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGedMarkerSelect.h")))  TGedMarkerSelect;
class __attribute__((annotate(R"ATTRDUMP(graph editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGraphEditor.h")))  TGraphEditor;
class __attribute__((annotate(R"ATTRDUMP(TH1 editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TH1Editor.h")))  TH1Editor;
class __attribute__((annotate(R"ATTRDUMP(TH2 editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TH2Editor.h")))  TH2Editor;
class __attribute__((annotate(R"ATTRDUMP(GUI for editing Line attributes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TLineEditor.h")))  TLineEditor;
class __attribute__((annotate(R"ATTRDUMP(editor of TPad objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPadEditor.h")))  TPadEditor;
class __attribute__((annotate(R"ATTRDUMP(GUI for editing TPaveStats)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPaveStatsEditor.h")))  TPaveStatsEditor;
class __attribute__((annotate(R"ATTRDUMP(piechart editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPieEditor.h")))  TPieEditor;
class __attribute__((annotate(R"ATTRDUMP(piechart' slice editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TPieSliceEditor.h")))  TPieSliceEditor;
class __attribute__((annotate(R"ATTRDUMP(Dialog box used by the TStyleManager class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TStyleDialog.h")))  TStyleDialog;
class __attribute__((annotate(R"ATTRDUMP(Graphical User Interface for managing styles)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TStyleManager.h")))  TStyleManager;
class __attribute__((annotate(R"ATTRDUMP(Preview window used by the TStyleManager class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TStylePreview.h")))  TStylePreview;
class __attribute__((annotate(R"ATTRDUMP(text editor)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTextEditor.h")))  TTextEditor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGed dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "HelpSMText.h"
#include "TArrowEditor.h"
#include "TAttFillEditor.h"
#include "TAttLineEditor.h"
#include "TAttMarkerEditor.h"
#include "TAttTextEditor.h"
#include "TAxisEditor.h"
#include "TCurlyArcEditor.h"
#include "TCurlyLineEditor.h"
#include "TF1Editor.h"
#include "TFrameEditor.h"
#include "TFunctionParametersDialog.h"
#include "TGedEditor.h"
#include "TGedFrame.h"
#include "TGedMarkerSelect.h"
#include "TGedPatternSelect.h"
#include "TGraphEditor.h"
#include "TH1Editor.h"
#include "TH2Editor.h"
#include "TLineEditor.h"
#include "TPadEditor.h"
#include "TPaveStatsEditor.h"
#include "TPieEditor.h"
#include "TPieSliceEditor.h"
#include "TStyleDialog.h"
#include "TStyleManager.h"
#include "TStylePreview.h"
#include "TTextEditor.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TArrowEditor", payloadCode, "@",
"TAttFillEditor", payloadCode, "@",
"TAttLineEditor", payloadCode, "@",
"TAttMarkerEditor", payloadCode, "@",
"TAttTextEditor", payloadCode, "@",
"TAxisEditor", payloadCode, "@",
"TCurlyArcEditor", payloadCode, "@",
"TCurlyLineEditor", payloadCode, "@",
"TF1Editor", payloadCode, "@",
"TFrameEditor", payloadCode, "@",
"TFunctionParametersDialog", payloadCode, "@",
"TGedEditor", payloadCode, "@",
"TGedFrame", payloadCode, "@",
"TGedMarkerPopup", payloadCode, "@",
"TGedMarkerSelect", payloadCode, "@",
"TGedNameFrame", payloadCode, "@",
"TGedPatternFrame", payloadCode, "@",
"TGedPatternPopup", payloadCode, "@",
"TGedPatternSelect", payloadCode, "@",
"TGedPatternSelector", payloadCode, "@",
"TGedPopup", payloadCode, "@",
"TGedSelect", payloadCode, "@",
"TGraphEditor", payloadCode, "@",
"TH1Editor", payloadCode, "@",
"TH2Editor", payloadCode, "@",
"TLineEditor", payloadCode, "@",
"TPadEditor", payloadCode, "@",
"TPaveStatsEditor", payloadCode, "@",
"TPieEditor", payloadCode, "@",
"TPieSliceEditor", payloadCode, "@",
"TStyleDialog", payloadCode, "@",
"TStyleManager", payloadCode, "@",
"TStylePreview", payloadCode, "@",
"TTextEditor", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGed",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGed_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGed_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGed() {
  TriggerDictionaryInitialization_libGed_Impl();
}
