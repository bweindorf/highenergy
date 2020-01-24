// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Gpad

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
#include "TAttCanvas.h"
#include "TButton.h"
#include "TCanvas.h"
#include "TClassTree.h"
#include "TColorWheel.h"
#include "TControlBar.h"
#include "TControlBarButton.h"
#include "TCreatePrimitives.h"
#include "TDialogCanvas.h"
#include "TGroupButton.h"
#include "TInspectCanvas.h"
#include "TPad.h"
#include "TPadPainter.h"
#include "TPaveClass.h"
#include "TRatioPlot.h"
#include "TSlider.h"
#include "TSliderBox.h"
#include "TView.h"
#include "TViewer3DPad.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TAttCanvas(void *p = 0);
   static void *newArray_TAttCanvas(Long_t size, void *p);
   static void delete_TAttCanvas(void *p);
   static void deleteArray_TAttCanvas(void *p);
   static void destruct_TAttCanvas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttCanvas*)
   {
      ::TAttCanvas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttCanvas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAttCanvas", ::TAttCanvas::Class_Version(), "TAttCanvas.h", 17,
                  typeid(::TAttCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttCanvas::Dictionary, isa_proxy, 4,
                  sizeof(::TAttCanvas) );
      instance.SetNew(&new_TAttCanvas);
      instance.SetNewArray(&newArray_TAttCanvas);
      instance.SetDelete(&delete_TAttCanvas);
      instance.SetDeleteArray(&deleteArray_TAttCanvas);
      instance.SetDestructor(&destruct_TAttCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttCanvas*)
   {
      return GenerateInitInstanceLocal((::TAttCanvas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAttCanvas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPad(void *p = 0);
   static void *newArray_TPad(Long_t size, void *p);
   static void delete_TPad(void *p);
   static void deleteArray_TPad(void *p);
   static void destruct_TPad(void *p);
   static void streamer_TPad(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPad*)
   {
      ::TPad *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPad >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPad", ::TPad::Class_Version(), "TPad.h", 29,
                  typeid(::TPad), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPad::Dictionary, isa_proxy, 17,
                  sizeof(::TPad) );
      instance.SetNew(&new_TPad);
      instance.SetNewArray(&newArray_TPad);
      instance.SetDelete(&delete_TPad);
      instance.SetDeleteArray(&deleteArray_TPad);
      instance.SetDestructor(&destruct_TPad);
      instance.SetStreamerFunc(&streamer_TPad);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPad*)
   {
      return GenerateInitInstanceLocal((::TPad*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPad*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TButton(void *p = 0);
   static void *newArray_TButton(Long_t size, void *p);
   static void delete_TButton(void *p);
   static void deleteArray_TButton(void *p);
   static void destruct_TButton(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TButton*)
   {
      ::TButton *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TButton >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TButton", ::TButton::Class_Version(), "TButton.h", 19,
                  typeid(::TButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TButton::Dictionary, isa_proxy, 4,
                  sizeof(::TButton) );
      instance.SetNew(&new_TButton);
      instance.SetNewArray(&newArray_TButton);
      instance.SetDelete(&delete_TButton);
      instance.SetDeleteArray(&deleteArray_TButton);
      instance.SetDestructor(&destruct_TButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TButton*)
   {
      return GenerateInitInstanceLocal((::TButton*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TButton*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCanvas(void *p = 0);
   static void *newArray_TCanvas(Long_t size, void *p);
   static void delete_TCanvas(void *p);
   static void deleteArray_TCanvas(void *p);
   static void destruct_TCanvas(void *p);
   static void streamer_TCanvas(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCanvas*)
   {
      ::TCanvas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCanvas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCanvas", ::TCanvas::Class_Version(), "TCanvas.h", 31,
                  typeid(::TCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCanvas::Dictionary, isa_proxy, 17,
                  sizeof(::TCanvas) );
      instance.SetNew(&new_TCanvas);
      instance.SetNewArray(&newArray_TCanvas);
      instance.SetDelete(&delete_TCanvas);
      instance.SetDeleteArray(&deleteArray_TCanvas);
      instance.SetDestructor(&destruct_TCanvas);
      instance.SetStreamerFunc(&streamer_TCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCanvas*)
   {
      return GenerateInitInstanceLocal((::TCanvas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCanvas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TClassTree(void *p = 0);
   static void *newArray_TClassTree(Long_t size, void *p);
   static void delete_TClassTree(void *p);
   static void deleteArray_TClassTree(void *p);
   static void destruct_TClassTree(void *p);
   static void streamer_TClassTree(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TClassTree*)
   {
      ::TClassTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TClassTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TClassTree", ::TClassTree::Class_Version(), "TClassTree.h", 21,
                  typeid(::TClassTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TClassTree::Dictionary, isa_proxy, 17,
                  sizeof(::TClassTree) );
      instance.SetNew(&new_TClassTree);
      instance.SetNewArray(&newArray_TClassTree);
      instance.SetDelete(&delete_TClassTree);
      instance.SetDeleteArray(&deleteArray_TClassTree);
      instance.SetDestructor(&destruct_TClassTree);
      instance.SetStreamerFunc(&streamer_TClassTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TClassTree*)
   {
      return GenerateInitInstanceLocal((::TClassTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TClassTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TColorWheel(void *p = 0);
   static void *newArray_TColorWheel(Long_t size, void *p);
   static void delete_TColorWheel(void *p);
   static void deleteArray_TColorWheel(void *p);
   static void destruct_TColorWheel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TColorWheel*)
   {
      ::TColorWheel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TColorWheel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TColorWheel", ::TColorWheel::Class_Version(), "TColorWheel.h", 24,
                  typeid(::TColorWheel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TColorWheel::Dictionary, isa_proxy, 4,
                  sizeof(::TColorWheel) );
      instance.SetNew(&new_TColorWheel);
      instance.SetNewArray(&newArray_TColorWheel);
      instance.SetDelete(&delete_TColorWheel);
      instance.SetDeleteArray(&deleteArray_TColorWheel);
      instance.SetDestructor(&destruct_TColorWheel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TColorWheel*)
   {
      return GenerateInitInstanceLocal((::TColorWheel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TColorWheel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TControlBarButton(void *p = 0);
   static void *newArray_TControlBarButton(Long_t size, void *p);
   static void delete_TControlBarButton(void *p);
   static void deleteArray_TControlBarButton(void *p);
   static void destruct_TControlBarButton(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TControlBarButton*)
   {
      ::TControlBarButton *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TControlBarButton >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TControlBarButton", ::TControlBarButton::Class_Version(), "TControlBarButton.h", 21,
                  typeid(::TControlBarButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TControlBarButton::Dictionary, isa_proxy, 4,
                  sizeof(::TControlBarButton) );
      instance.SetNew(&new_TControlBarButton);
      instance.SetNewArray(&newArray_TControlBarButton);
      instance.SetDelete(&delete_TControlBarButton);
      instance.SetDeleteArray(&deleteArray_TControlBarButton);
      instance.SetDestructor(&destruct_TControlBarButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TControlBarButton*)
   {
      return GenerateInitInstanceLocal((::TControlBarButton*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TControlBarButton*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TControlBar(void *p = 0);
   static void *newArray_TControlBar(Long_t size, void *p);
   static void delete_TControlBar(void *p);
   static void deleteArray_TControlBar(void *p);
   static void destruct_TControlBar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TControlBar*)
   {
      ::TControlBar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TControlBar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TControlBar", ::TControlBar::Class_Version(), "TControlBar.h", 22,
                  typeid(::TControlBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TControlBar::Dictionary, isa_proxy, 4,
                  sizeof(::TControlBar) );
      instance.SetNew(&new_TControlBar);
      instance.SetNewArray(&newArray_TControlBar);
      instance.SetDelete(&delete_TControlBar);
      instance.SetDeleteArray(&deleteArray_TControlBar);
      instance.SetDestructor(&destruct_TControlBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TControlBar*)
   {
      return GenerateInitInstanceLocal((::TControlBar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TControlBar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDialogCanvas(void *p = 0);
   static void *newArray_TDialogCanvas(Long_t size, void *p);
   static void delete_TDialogCanvas(void *p);
   static void deleteArray_TDialogCanvas(void *p);
   static void destruct_TDialogCanvas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDialogCanvas*)
   {
      ::TDialogCanvas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDialogCanvas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDialogCanvas", ::TDialogCanvas::Class_Version(), "TDialogCanvas.h", 19,
                  typeid(::TDialogCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDialogCanvas::Dictionary, isa_proxy, 4,
                  sizeof(::TDialogCanvas) );
      instance.SetNew(&new_TDialogCanvas);
      instance.SetNewArray(&newArray_TDialogCanvas);
      instance.SetDelete(&delete_TDialogCanvas);
      instance.SetDeleteArray(&deleteArray_TDialogCanvas);
      instance.SetDestructor(&destruct_TDialogCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDialogCanvas*)
   {
      return GenerateInitInstanceLocal((::TDialogCanvas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDialogCanvas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGroupButton(void *p = 0);
   static void *newArray_TGroupButton(Long_t size, void *p);
   static void delete_TGroupButton(void *p);
   static void deleteArray_TGroupButton(void *p);
   static void destruct_TGroupButton(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGroupButton*)
   {
      ::TGroupButton *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGroupButton >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGroupButton", ::TGroupButton::Class_Version(), "TGroupButton.h", 18,
                  typeid(::TGroupButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGroupButton::Dictionary, isa_proxy, 4,
                  sizeof(::TGroupButton) );
      instance.SetNew(&new_TGroupButton);
      instance.SetNewArray(&newArray_TGroupButton);
      instance.SetDelete(&delete_TGroupButton);
      instance.SetDeleteArray(&deleteArray_TGroupButton);
      instance.SetDestructor(&destruct_TGroupButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGroupButton*)
   {
      return GenerateInitInstanceLocal((::TGroupButton*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGroupButton*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TInspectCanvas(void *p = 0);
   static void *newArray_TInspectCanvas(Long_t size, void *p);
   static void delete_TInspectCanvas(void *p);
   static void deleteArray_TInspectCanvas(void *p);
   static void destruct_TInspectCanvas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TInspectCanvas*)
   {
      ::TInspectCanvas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TInspectCanvas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TInspectCanvas", ::TInspectCanvas::Class_Version(), "TInspectCanvas.h", 21,
                  typeid(::TInspectCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TInspectCanvas::Dictionary, isa_proxy, 4,
                  sizeof(::TInspectCanvas) );
      instance.SetNew(&new_TInspectCanvas);
      instance.SetNewArray(&newArray_TInspectCanvas);
      instance.SetDelete(&delete_TInspectCanvas);
      instance.SetDeleteArray(&deleteArray_TInspectCanvas);
      instance.SetDestructor(&destruct_TInspectCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TInspectCanvas*)
   {
      return GenerateInitInstanceLocal((::TInspectCanvas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TInspectCanvas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPadPainter(void *p = 0);
   static void *newArray_TPadPainter(Long_t size, void *p);
   static void delete_TPadPainter(void *p);
   static void deleteArray_TPadPainter(void *p);
   static void destruct_TPadPainter(void *p);
   static void streamer_TPadPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPadPainter*)
   {
      ::TPadPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPadPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPadPainter", ::TPadPainter::Class_Version(), "TPadPainter.h", 26,
                  typeid(::TPadPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPadPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TPadPainter) );
      instance.SetNew(&new_TPadPainter);
      instance.SetNewArray(&newArray_TPadPainter);
      instance.SetDelete(&delete_TPadPainter);
      instance.SetDeleteArray(&deleteArray_TPadPainter);
      instance.SetDestructor(&destruct_TPadPainter);
      instance.SetStreamerFunc(&streamer_TPadPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPadPainter*)
   {
      return GenerateInitInstanceLocal((::TPadPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPadPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPaveClass(void *p = 0);
   static void *newArray_TPaveClass(Long_t size, void *p);
   static void delete_TPaveClass(void *p);
   static void deleteArray_TPaveClass(void *p);
   static void destruct_TPaveClass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPaveClass*)
   {
      ::TPaveClass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPaveClass >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPaveClass", ::TPaveClass::Class_Version(), "TPaveClass.h", 19,
                  typeid(::TPaveClass), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPaveClass::Dictionary, isa_proxy, 4,
                  sizeof(::TPaveClass) );
      instance.SetNew(&new_TPaveClass);
      instance.SetNewArray(&newArray_TPaveClass);
      instance.SetDelete(&delete_TPaveClass);
      instance.SetDeleteArray(&deleteArray_TPaveClass);
      instance.SetDestructor(&destruct_TPaveClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPaveClass*)
   {
      return GenerateInitInstanceLocal((::TPaveClass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPaveClass*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRatioPlot(void *p = 0);
   static void *newArray_TRatioPlot(Long_t size, void *p);
   static void delete_TRatioPlot(void *p);
   static void deleteArray_TRatioPlot(void *p);
   static void destruct_TRatioPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRatioPlot*)
   {
      ::TRatioPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRatioPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRatioPlot", ::TRatioPlot::Class_Version(), "TRatioPlot.h", 44,
                  typeid(::TRatioPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRatioPlot::Dictionary, isa_proxy, 4,
                  sizeof(::TRatioPlot) );
      instance.SetNew(&new_TRatioPlot);
      instance.SetNewArray(&newArray_TRatioPlot);
      instance.SetDelete(&delete_TRatioPlot);
      instance.SetDeleteArray(&deleteArray_TRatioPlot);
      instance.SetDestructor(&destruct_TRatioPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRatioPlot*)
   {
      return GenerateInitInstanceLocal((::TRatioPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRatioPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSlider(void *p = 0);
   static void *newArray_TSlider(Long_t size, void *p);
   static void delete_TSlider(void *p);
   static void deleteArray_TSlider(void *p);
   static void destruct_TSlider(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSlider*)
   {
      ::TSlider *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSlider >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSlider", ::TSlider::Class_Version(), "TSlider.h", 18,
                  typeid(::TSlider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSlider::Dictionary, isa_proxy, 4,
                  sizeof(::TSlider) );
      instance.SetNew(&new_TSlider);
      instance.SetNewArray(&newArray_TSlider);
      instance.SetDelete(&delete_TSlider);
      instance.SetDeleteArray(&deleteArray_TSlider);
      instance.SetDestructor(&destruct_TSlider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSlider*)
   {
      return GenerateInitInstanceLocal((::TSlider*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSlider*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSliderBox(void *p = 0);
   static void *newArray_TSliderBox(Long_t size, void *p);
   static void delete_TSliderBox(void *p);
   static void deleteArray_TSliderBox(void *p);
   static void destruct_TSliderBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSliderBox*)
   {
      ::TSliderBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSliderBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSliderBox", ::TSliderBox::Class_Version(), "TSliderBox.h", 20,
                  typeid(::TSliderBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSliderBox::Dictionary, isa_proxy, 4,
                  sizeof(::TSliderBox) );
      instance.SetNew(&new_TSliderBox);
      instance.SetNewArray(&newArray_TSliderBox);
      instance.SetDelete(&delete_TSliderBox);
      instance.SetDeleteArray(&deleteArray_TSliderBox);
      instance.SetDestructor(&destruct_TSliderBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSliderBox*)
   {
      return GenerateInitInstanceLocal((::TSliderBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TSliderBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TView(void *p);
   static void deleteArray_TView(void *p);
   static void destruct_TView(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TView*)
   {
      ::TView *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TView >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TView", ::TView::Class_Version(), "TView.h", 25,
                  typeid(::TView), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TView::Dictionary, isa_proxy, 4,
                  sizeof(::TView) );
      instance.SetDelete(&delete_TView);
      instance.SetDeleteArray(&deleteArray_TView);
      instance.SetDestructor(&destruct_TView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TView*)
   {
      return GenerateInitInstanceLocal((::TView*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TView*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TViewer3DPad(void *p);
   static void deleteArray_TViewer3DPad(void *p);
   static void destruct_TViewer3DPad(void *p);
   static void streamer_TViewer3DPad(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TViewer3DPad*)
   {
      ::TViewer3DPad *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TViewer3DPad >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TViewer3DPad", ::TViewer3DPad::Class_Version(), "TViewer3DPad.h", 20,
                  typeid(::TViewer3DPad), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TViewer3DPad::Dictionary, isa_proxy, 16,
                  sizeof(::TViewer3DPad) );
      instance.SetDelete(&delete_TViewer3DPad);
      instance.SetDeleteArray(&deleteArray_TViewer3DPad);
      instance.SetDestructor(&destruct_TViewer3DPad);
      instance.SetStreamerFunc(&streamer_TViewer3DPad);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TViewer3DPad*)
   {
      return GenerateInitInstanceLocal((::TViewer3DPad*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TViewer3DPad*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAttCanvas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttCanvas::Class_Name()
{
   return "TAttCanvas";
}

//______________________________________________________________________________
const char *TAttCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttCanvas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAttCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttCanvas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttCanvas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttCanvas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPad::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPad::Class_Name()
{
   return "TPad";
}

//______________________________________________________________________________
const char *TPad::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPad*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPad::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPad*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPad::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPad*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPad::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPad*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TButton::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TButton::Class_Name()
{
   return "TButton";
}

//______________________________________________________________________________
const char *TButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TButton*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TButton*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TButton*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TButton*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCanvas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCanvas::Class_Name()
{
   return "TCanvas";
}

//______________________________________________________________________________
const char *TCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCanvas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCanvas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCanvas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCanvas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TClassTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TClassTree::Class_Name()
{
   return "TClassTree";
}

//______________________________________________________________________________
const char *TClassTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TClassTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TClassTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TClassTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TClassTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TClassTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TClassTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TClassTree*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TColorWheel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TColorWheel::Class_Name()
{
   return "TColorWheel";
}

//______________________________________________________________________________
const char *TColorWheel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TColorWheel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TColorWheel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TColorWheel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TColorWheel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TColorWheel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TColorWheel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TColorWheel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TControlBarButton::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TControlBarButton::Class_Name()
{
   return "TControlBarButton";
}

//______________________________________________________________________________
const char *TControlBarButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TControlBarButton*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TControlBarButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TControlBarButton*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TControlBarButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TControlBarButton*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TControlBarButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TControlBarButton*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TControlBar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TControlBar::Class_Name()
{
   return "TControlBar";
}

//______________________________________________________________________________
const char *TControlBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TControlBar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TControlBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TControlBar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TControlBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TControlBar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TControlBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TControlBar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDialogCanvas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDialogCanvas::Class_Name()
{
   return "TDialogCanvas";
}

//______________________________________________________________________________
const char *TDialogCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDialogCanvas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDialogCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDialogCanvas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDialogCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDialogCanvas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDialogCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDialogCanvas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGroupButton::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGroupButton::Class_Name()
{
   return "TGroupButton";
}

//______________________________________________________________________________
const char *TGroupButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGroupButton*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGroupButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGroupButton*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGroupButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGroupButton*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGroupButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGroupButton*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TInspectCanvas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TInspectCanvas::Class_Name()
{
   return "TInspectCanvas";
}

//______________________________________________________________________________
const char *TInspectCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TInspectCanvas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TInspectCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TInspectCanvas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TInspectCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TInspectCanvas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TInspectCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TInspectCanvas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPadPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPadPainter::Class_Name()
{
   return "TPadPainter";
}

//______________________________________________________________________________
const char *TPadPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPadPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPadPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPadPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPaveClass::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPaveClass::Class_Name()
{
   return "TPaveClass";
}

//______________________________________________________________________________
const char *TPaveClass::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveClass*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPaveClass::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveClass*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPaveClass::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveClass*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPaveClass::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveClass*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRatioPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRatioPlot::Class_Name()
{
   return "TRatioPlot";
}

//______________________________________________________________________________
const char *TRatioPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRatioPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRatioPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRatioPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRatioPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRatioPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRatioPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRatioPlot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSlider::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSlider::Class_Name()
{
   return "TSlider";
}

//______________________________________________________________________________
const char *TSlider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSlider*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSlider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSlider*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSlider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSlider*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSlider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSlider*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSliderBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSliderBox::Class_Name()
{
   return "TSliderBox";
}

//______________________________________________________________________________
const char *TSliderBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSliderBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSliderBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSliderBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSliderBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSliderBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSliderBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSliderBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TView::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TView::Class_Name()
{
   return "TView";
}

//______________________________________________________________________________
const char *TView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TView*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TView*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TView*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TView*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TViewer3DPad::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TViewer3DPad::Class_Name()
{
   return "TViewer3DPad";
}

//______________________________________________________________________________
const char *TViewer3DPad::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TViewer3DPad*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TViewer3DPad::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TViewer3DPad*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TViewer3DPad::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TViewer3DPad*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TViewer3DPad::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TViewer3DPad*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAttCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttCanvas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAttCanvas::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAttCanvas::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttCanvas(void *p) {
      return  p ? new(p) ::TAttCanvas : new ::TAttCanvas;
   }
   static void *newArray_TAttCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::TAttCanvas[nElements] : new ::TAttCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttCanvas(void *p) {
      delete ((::TAttCanvas*)p);
   }
   static void deleteArray_TAttCanvas(void *p) {
      delete [] ((::TAttCanvas*)p);
   }
   static void destruct_TAttCanvas(void *p) {
      typedef ::TAttCanvas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAttCanvas

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPad(void *p) {
      return  p ? new(p) ::TPad : new ::TPad;
   }
   static void *newArray_TPad(Long_t nElements, void *p) {
      return p ? new(p) ::TPad[nElements] : new ::TPad[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPad(void *p) {
      delete ((::TPad*)p);
   }
   static void deleteArray_TPad(void *p) {
      delete [] ((::TPad*)p);
   }
   static void destruct_TPad(void *p) {
      typedef ::TPad current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPad(TBuffer &buf, void *obj) {
      ((::TPad*)obj)->::TPad::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPad

//______________________________________________________________________________
void TButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TButton.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TButton::Class(),this);
   } else {
      R__b.WriteClassBuffer(TButton::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TButton(void *p) {
      return  p ? new(p) ::TButton : new ::TButton;
   }
   static void *newArray_TButton(Long_t nElements, void *p) {
      return p ? new(p) ::TButton[nElements] : new ::TButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TButton(void *p) {
      delete ((::TButton*)p);
   }
   static void deleteArray_TButton(void *p) {
      delete [] ((::TButton*)p);
   }
   static void destruct_TButton(void *p) {
      typedef ::TButton current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TButton

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCanvas(void *p) {
      return  p ? new(p) ::TCanvas : new ::TCanvas;
   }
   static void *newArray_TCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::TCanvas[nElements] : new ::TCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCanvas(void *p) {
      delete ((::TCanvas*)p);
   }
   static void deleteArray_TCanvas(void *p) {
      delete [] ((::TCanvas*)p);
   }
   static void destruct_TCanvas(void *p) {
      typedef ::TCanvas current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCanvas(TBuffer &buf, void *obj) {
      ((::TCanvas*)obj)->::TCanvas::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCanvas

namespace ROOT {
   // Wrappers around operator new
   static void *new_TClassTree(void *p) {
      return  p ? new(p) ::TClassTree : new ::TClassTree;
   }
   static void *newArray_TClassTree(Long_t nElements, void *p) {
      return p ? new(p) ::TClassTree[nElements] : new ::TClassTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TClassTree(void *p) {
      delete ((::TClassTree*)p);
   }
   static void deleteArray_TClassTree(void *p) {
      delete [] ((::TClassTree*)p);
   }
   static void destruct_TClassTree(void *p) {
      typedef ::TClassTree current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TClassTree(TBuffer &buf, void *obj) {
      ((::TClassTree*)obj)->::TClassTree::Streamer(buf);
   }
} // end of namespace ROOT for class ::TClassTree

//______________________________________________________________________________
void TColorWheel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TColorWheel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TColorWheel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TColorWheel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TColorWheel(void *p) {
      return  p ? new(p) ::TColorWheel : new ::TColorWheel;
   }
   static void *newArray_TColorWheel(Long_t nElements, void *p) {
      return p ? new(p) ::TColorWheel[nElements] : new ::TColorWheel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TColorWheel(void *p) {
      delete ((::TColorWheel*)p);
   }
   static void deleteArray_TColorWheel(void *p) {
      delete [] ((::TColorWheel*)p);
   }
   static void destruct_TColorWheel(void *p) {
      typedef ::TColorWheel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TColorWheel

//______________________________________________________________________________
void TControlBarButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TControlBarButton.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TControlBarButton::Class(),this);
   } else {
      R__b.WriteClassBuffer(TControlBarButton::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TControlBarButton(void *p) {
      return  p ? new(p) ::TControlBarButton : new ::TControlBarButton;
   }
   static void *newArray_TControlBarButton(Long_t nElements, void *p) {
      return p ? new(p) ::TControlBarButton[nElements] : new ::TControlBarButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TControlBarButton(void *p) {
      delete ((::TControlBarButton*)p);
   }
   static void deleteArray_TControlBarButton(void *p) {
      delete [] ((::TControlBarButton*)p);
   }
   static void destruct_TControlBarButton(void *p) {
      typedef ::TControlBarButton current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TControlBarButton

//______________________________________________________________________________
void TControlBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TControlBar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TControlBar::Class(),this);
   } else {
      R__b.WriteClassBuffer(TControlBar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TControlBar(void *p) {
      return  p ? new(p) ::TControlBar : new ::TControlBar;
   }
   static void *newArray_TControlBar(Long_t nElements, void *p) {
      return p ? new(p) ::TControlBar[nElements] : new ::TControlBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TControlBar(void *p) {
      delete ((::TControlBar*)p);
   }
   static void deleteArray_TControlBar(void *p) {
      delete [] ((::TControlBar*)p);
   }
   static void destruct_TControlBar(void *p) {
      typedef ::TControlBar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TControlBar

//______________________________________________________________________________
void TDialogCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDialogCanvas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDialogCanvas::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDialogCanvas::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDialogCanvas(void *p) {
      return  p ? new(p) ::TDialogCanvas : new ::TDialogCanvas;
   }
   static void *newArray_TDialogCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::TDialogCanvas[nElements] : new ::TDialogCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDialogCanvas(void *p) {
      delete ((::TDialogCanvas*)p);
   }
   static void deleteArray_TDialogCanvas(void *p) {
      delete [] ((::TDialogCanvas*)p);
   }
   static void destruct_TDialogCanvas(void *p) {
      typedef ::TDialogCanvas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDialogCanvas

//______________________________________________________________________________
void TGroupButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGroupButton.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGroupButton::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGroupButton::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGroupButton(void *p) {
      return  p ? new(p) ::TGroupButton : new ::TGroupButton;
   }
   static void *newArray_TGroupButton(Long_t nElements, void *p) {
      return p ? new(p) ::TGroupButton[nElements] : new ::TGroupButton[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGroupButton(void *p) {
      delete ((::TGroupButton*)p);
   }
   static void deleteArray_TGroupButton(void *p) {
      delete [] ((::TGroupButton*)p);
   }
   static void destruct_TGroupButton(void *p) {
      typedef ::TGroupButton current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGroupButton

//______________________________________________________________________________
void TInspectCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TInspectCanvas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TInspectCanvas::Class(),this);
   } else {
      R__b.WriteClassBuffer(TInspectCanvas::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TInspectCanvas(void *p) {
      return  p ? new(p) ::TInspectCanvas : new ::TInspectCanvas;
   }
   static void *newArray_TInspectCanvas(Long_t nElements, void *p) {
      return p ? new(p) ::TInspectCanvas[nElements] : new ::TInspectCanvas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TInspectCanvas(void *p) {
      delete ((::TInspectCanvas*)p);
   }
   static void deleteArray_TInspectCanvas(void *p) {
      delete [] ((::TInspectCanvas*)p);
   }
   static void destruct_TInspectCanvas(void *p) {
      typedef ::TInspectCanvas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TInspectCanvas

//______________________________________________________________________________
void TPadPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPadPainter.

   TVirtualPadPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPadPainter(void *p) {
      return  p ? new(p) ::TPadPainter : new ::TPadPainter;
   }
   static void *newArray_TPadPainter(Long_t nElements, void *p) {
      return p ? new(p) ::TPadPainter[nElements] : new ::TPadPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPadPainter(void *p) {
      delete ((::TPadPainter*)p);
   }
   static void deleteArray_TPadPainter(void *p) {
      delete [] ((::TPadPainter*)p);
   }
   static void destruct_TPadPainter(void *p) {
      typedef ::TPadPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPadPainter(TBuffer &buf, void *obj) {
      ((::TPadPainter*)obj)->::TPadPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPadPainter

//______________________________________________________________________________
void TPaveClass::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaveClass.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPaveClass::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPaveClass::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPaveClass(void *p) {
      return  p ? new(p) ::TPaveClass : new ::TPaveClass;
   }
   static void *newArray_TPaveClass(Long_t nElements, void *p) {
      return p ? new(p) ::TPaveClass[nElements] : new ::TPaveClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPaveClass(void *p) {
      delete ((::TPaveClass*)p);
   }
   static void deleteArray_TPaveClass(void *p) {
      delete [] ((::TPaveClass*)p);
   }
   static void destruct_TPaveClass(void *p) {
      typedef ::TPaveClass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPaveClass

//______________________________________________________________________________
void TRatioPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRatioPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TRatioPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TRatioPlot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRatioPlot(void *p) {
      return  p ? new(p) ::TRatioPlot : new ::TRatioPlot;
   }
   static void *newArray_TRatioPlot(Long_t nElements, void *p) {
      return p ? new(p) ::TRatioPlot[nElements] : new ::TRatioPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRatioPlot(void *p) {
      delete ((::TRatioPlot*)p);
   }
   static void deleteArray_TRatioPlot(void *p) {
      delete [] ((::TRatioPlot*)p);
   }
   static void destruct_TRatioPlot(void *p) {
      typedef ::TRatioPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TRatioPlot

//______________________________________________________________________________
void TSlider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSlider.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSlider::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSlider::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSlider(void *p) {
      return  p ? new(p) ::TSlider : new ::TSlider;
   }
   static void *newArray_TSlider(Long_t nElements, void *p) {
      return p ? new(p) ::TSlider[nElements] : new ::TSlider[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSlider(void *p) {
      delete ((::TSlider*)p);
   }
   static void deleteArray_TSlider(void *p) {
      delete [] ((::TSlider*)p);
   }
   static void destruct_TSlider(void *p) {
      typedef ::TSlider current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSlider

//______________________________________________________________________________
void TSliderBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSliderBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSliderBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSliderBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSliderBox(void *p) {
      return  p ? new(p) ::TSliderBox : new ::TSliderBox;
   }
   static void *newArray_TSliderBox(Long_t nElements, void *p) {
      return p ? new(p) ::TSliderBox[nElements] : new ::TSliderBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSliderBox(void *p) {
      delete ((::TSliderBox*)p);
   }
   static void deleteArray_TSliderBox(void *p) {
      delete [] ((::TSliderBox*)p);
   }
   static void destruct_TSliderBox(void *p) {
      typedef ::TSliderBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TSliderBox

//______________________________________________________________________________
void TView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TView.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TView::Class(),this);
   } else {
      R__b.WriteClassBuffer(TView::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TView(void *p) {
      delete ((::TView*)p);
   }
   static void deleteArray_TView(void *p) {
      delete [] ((::TView*)p);
   }
   static void destruct_TView(void *p) {
      typedef ::TView current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TView

//______________________________________________________________________________
void TViewer3DPad::Streamer(TBuffer &R__b)
{
   // Stream an object of class TViewer3DPad.

   TVirtualViewer3D::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TViewer3DPad(void *p) {
      delete ((::TViewer3DPad*)p);
   }
   static void deleteArray_TViewer3DPad(void *p) {
      delete [] ((::TViewer3DPad*)p);
   }
   static void destruct_TViewer3DPad(void *p) {
      typedef ::TViewer3DPad current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TViewer3DPad(TBuffer &buf, void *obj) {
      ((::TViewer3DPad*)obj)->::TViewer3DPad::Streamer(buf);
   }
} // end of namespace ROOT for class ::TViewer3DPad

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlETLinemUgR_Dictionary();
   static void vectorlETLinemUgR_TClassManip(TClass*);
   static void *new_vectorlETLinemUgR(void *p = 0);
   static void *newArray_vectorlETLinemUgR(Long_t size, void *p);
   static void delete_vectorlETLinemUgR(void *p);
   static void deleteArray_vectorlETLinemUgR(void *p);
   static void destruct_vectorlETLinemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TLine*>*)
   {
      vector<TLine*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TLine*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TLine*>", -2, "vector", 216,
                  typeid(vector<TLine*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETLinemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TLine*>) );
      instance.SetNew(&new_vectorlETLinemUgR);
      instance.SetNewArray(&newArray_vectorlETLinemUgR);
      instance.SetDelete(&delete_vectorlETLinemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETLinemUgR);
      instance.SetDestructor(&destruct_vectorlETLinemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TLine*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TLine*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETLinemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TLine*>*)0x0)->GetClass();
      vectorlETLinemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETLinemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETLinemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TLine*> : new vector<TLine*>;
   }
   static void *newArray_vectorlETLinemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TLine*>[nElements] : new vector<TLine*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETLinemUgR(void *p) {
      delete ((vector<TLine*>*)p);
   }
   static void deleteArray_vectorlETLinemUgR(void *p) {
      delete [] ((vector<TLine*>*)p);
   }
   static void destruct_vectorlETLinemUgR(void *p) {
      typedef vector<TLine*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TLine*>

namespace {
  void TriggerDictionaryInitialization_libGpad_Impl() {
    static const char* headers[] = {
"TAttCanvas.h",
"TButton.h",
"TCanvas.h",
"TClassTree.h",
"TColorWheel.h",
"TControlBar.h",
"TControlBarButton.h",
"TCreatePrimitives.h",
"TDialogCanvas.h",
"TGroupButton.h",
"TInspectCanvas.h",
"TPad.h",
"TPadPainter.h",
"TPaveClass.h",
"TRatioPlot.h",
"TSlider.h",
"TSliderBox.h",
"TView.h",
"TViewer3DPad.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGpad dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TAttCanvas.h"
#include "TButton.h"
#include "TCanvas.h"
#include "TClassTree.h"
#include "TColorWheel.h"
#include "TControlBar.h"
#include "TControlBarButton.h"
#include "TCreatePrimitives.h"
#include "TDialogCanvas.h"
#include "TGroupButton.h"
#include "TInspectCanvas.h"
#include "TPad.h"
#include "TPadPainter.h"
#include "TPaveClass.h"
#include "TRatioPlot.h"
#include "TSlider.h"
#include "TSliderBox.h"
#include "TView.h"
#include "TViewer3DPad.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGpad",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGpad_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGpad_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGpad() {
  TriggerDictionaryInitialization_libGpad_Impl();
}
