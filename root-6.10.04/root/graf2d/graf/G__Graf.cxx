// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Graf

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
#include "TArc.h"
#include "TArrow.h"
#include "TAttImage.h"
#include "TBox.h"
#include "TCandle.h"
#include "TCrown.h"
#include "TCurlyArc.h"
#include "TCurlyLine.h"
#include "TCutG.h"
#include "TDiamond.h"
#include "TEllipse.h"
#include "TFrame.h"
#include "TGaxis.h"
#include "TGraphPolar.h"
#include "TGraphPolargram.h"
#include "TGraphQQ.h"
#include "TImage.h"
#include "TImagePlugin.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TLegendEntry.h"
#include "TLine.h"
#include "TLink.h"
#include "TMarker.h"
#include "TMathText.h"
#include "TPave.h"
#include "TPaveLabel.h"
#include "TPaveStats.h"
#include "TPaveText.h"
#include "TPavesText.h"
#include "TPie.h"
#include "TPieSlice.h"
#include "TPoints.h"
#include "TPolyLine.h"
#include "TTF.h"
#include "TText.h"
#include "TWbox.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TEllipse(void *p = 0);
   static void *newArray_TEllipse(Long_t size, void *p);
   static void delete_TEllipse(void *p);
   static void deleteArray_TEllipse(void *p);
   static void destruct_TEllipse(void *p);
   static void streamer_TEllipse(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEllipse*)
   {
      ::TEllipse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEllipse >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEllipse", ::TEllipse::Class_Version(), "TEllipse.h", 24,
                  typeid(::TEllipse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEllipse::Dictionary, isa_proxy, 17,
                  sizeof(::TEllipse) );
      instance.SetNew(&new_TEllipse);
      instance.SetNewArray(&newArray_TEllipse);
      instance.SetDelete(&delete_TEllipse);
      instance.SetDeleteArray(&deleteArray_TEllipse);
      instance.SetDestructor(&destruct_TEllipse);
      instance.SetStreamerFunc(&streamer_TEllipse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEllipse*)
   {
      return GenerateInitInstanceLocal((::TEllipse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TEllipse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArc(void *p = 0);
   static void *newArray_TArc(Long_t size, void *p);
   static void delete_TArc(void *p);
   static void deleteArray_TArc(void *p);
   static void destruct_TArc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArc*)
   {
      ::TArc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArc", ::TArc::Class_Version(), "TArc.h", 28,
                  typeid(::TArc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArc::Dictionary, isa_proxy, 4,
                  sizeof(::TArc) );
      instance.SetNew(&new_TArc);
      instance.SetNewArray(&newArray_TArc);
      instance.SetDelete(&delete_TArc);
      instance.SetDeleteArray(&deleteArray_TArc);
      instance.SetDestructor(&destruct_TArc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArc*)
   {
      return GenerateInitInstanceLocal((::TArc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLine(void *p = 0);
   static void *newArray_TLine(Long_t size, void *p);
   static void delete_TLine(void *p);
   static void deleteArray_TLine(void *p);
   static void destruct_TLine(void *p);
   static void streamer_TLine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLine*)
   {
      ::TLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLine", ::TLine::Class_Version(), "TLine.h", 23,
                  typeid(::TLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLine::Dictionary, isa_proxy, 17,
                  sizeof(::TLine) );
      instance.SetNew(&new_TLine);
      instance.SetNewArray(&newArray_TLine);
      instance.SetDelete(&delete_TLine);
      instance.SetDeleteArray(&deleteArray_TLine);
      instance.SetDestructor(&destruct_TLine);
      instance.SetStreamerFunc(&streamer_TLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLine*)
   {
      return GenerateInitInstanceLocal((::TLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArrow(void *p = 0);
   static void *newArray_TArrow(Long_t size, void *p);
   static void delete_TArrow(void *p);
   static void deleteArray_TArrow(void *p);
   static void destruct_TArrow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArrow*)
   {
      ::TArrow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArrow >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArrow", ::TArrow::Class_Version(), "TArrow.h", 29,
                  typeid(::TArrow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArrow::Dictionary, isa_proxy, 4,
                  sizeof(::TArrow) );
      instance.SetNew(&new_TArrow);
      instance.SetNewArray(&newArray_TArrow);
      instance.SetDelete(&delete_TArrow);
      instance.SetDeleteArray(&deleteArray_TArrow);
      instance.SetDestructor(&destruct_TArrow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArrow*)
   {
      return GenerateInitInstanceLocal((::TArrow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArrow*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPaletteEditor(void *p);
   static void deleteArray_TPaletteEditor(void *p);
   static void destruct_TPaletteEditor(void *p);
   static void streamer_TPaletteEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPaletteEditor*)
   {
      ::TPaletteEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPaletteEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPaletteEditor", ::TPaletteEditor::Class_Version(), "TAttImage.h", 19,
                  typeid(::TPaletteEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPaletteEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TPaletteEditor) );
      instance.SetDelete(&delete_TPaletteEditor);
      instance.SetDeleteArray(&deleteArray_TPaletteEditor);
      instance.SetDestructor(&destruct_TPaletteEditor);
      instance.SetStreamerFunc(&streamer_TPaletteEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPaletteEditor*)
   {
      return GenerateInitInstanceLocal((::TPaletteEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPaletteEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TImagePalette(void *p = 0);
   static void *newArray_TImagePalette(Long_t size, void *p);
   static void delete_TImagePalette(void *p);
   static void deleteArray_TImagePalette(void *p);
   static void destruct_TImagePalette(void *p);
   static void streamer_TImagePalette(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TImagePalette*)
   {
      ::TImagePalette *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TImagePalette >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TImagePalette", ::TImagePalette::Class_Version(), "TAttImage.h", 33,
                  typeid(::TImagePalette), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TImagePalette::Dictionary, isa_proxy, 16,
                  sizeof(::TImagePalette) );
      instance.SetNew(&new_TImagePalette);
      instance.SetNewArray(&newArray_TImagePalette);
      instance.SetDelete(&delete_TImagePalette);
      instance.SetDeleteArray(&deleteArray_TImagePalette);
      instance.SetDestructor(&destruct_TImagePalette);
      instance.SetStreamerFunc(&streamer_TImagePalette);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TImagePalette*)
   {
      return GenerateInitInstanceLocal((::TImagePalette*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TImagePalette*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAttImage(void *p = 0);
   static void *newArray_TAttImage(Long_t size, void *p);
   static void delete_TAttImage(void *p);
   static void deleteArray_TAttImage(void *p);
   static void destruct_TAttImage(void *p);
   static void streamer_TAttImage(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttImage*)
   {
      ::TAttImage *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttImage >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAttImage", ::TAttImage::Class_Version(), "TAttImage.h", 59,
                  typeid(::TAttImage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttImage::Dictionary, isa_proxy, 16,
                  sizeof(::TAttImage) );
      instance.SetNew(&new_TAttImage);
      instance.SetNewArray(&newArray_TAttImage);
      instance.SetDelete(&delete_TAttImage);
      instance.SetDeleteArray(&deleteArray_TAttImage);
      instance.SetDestructor(&destruct_TAttImage);
      instance.SetStreamerFunc(&streamer_TAttImage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttImage*)
   {
      return GenerateInitInstanceLocal((::TAttImage*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAttImage*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBox(void *p = 0);
   static void *newArray_TBox(Long_t size, void *p);
   static void delete_TBox(void *p);
   static void deleteArray_TBox(void *p);
   static void destruct_TBox(void *p);
   static void streamer_TBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBox*)
   {
      ::TBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBox", ::TBox::Class_Version(), "TBox.h", 24,
                  typeid(::TBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBox::Dictionary, isa_proxy, 17,
                  sizeof(::TBox) );
      instance.SetNew(&new_TBox);
      instance.SetNewArray(&newArray_TBox);
      instance.SetDelete(&delete_TBox);
      instance.SetDeleteArray(&deleteArray_TBox);
      instance.SetDestructor(&destruct_TBox);
      instance.SetStreamerFunc(&streamer_TBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBox*)
   {
      return GenerateInitInstanceLocal((::TBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCandle(void *p = 0);
   static void *newArray_TCandle(Long_t size, void *p);
   static void delete_TCandle(void *p);
   static void deleteArray_TCandle(void *p);
   static void destruct_TCandle(void *p);
   static void streamer_TCandle(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCandle*)
   {
      ::TCandle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCandle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCandle", ::TCandle::Class_Version(), "TCandle.h", 25,
                  typeid(::TCandle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCandle::Dictionary, isa_proxy, 17,
                  sizeof(::TCandle) );
      instance.SetNew(&new_TCandle);
      instance.SetNewArray(&newArray_TCandle);
      instance.SetDelete(&delete_TCandle);
      instance.SetDeleteArray(&deleteArray_TCandle);
      instance.SetDestructor(&destruct_TCandle);
      instance.SetStreamerFunc(&streamer_TCandle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCandle*)
   {
      return GenerateInitInstanceLocal((::TCandle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCandle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCrown(void *p = 0);
   static void *newArray_TCrown(Long_t size, void *p);
   static void delete_TCrown(void *p);
   static void deleteArray_TCrown(void *p);
   static void destruct_TCrown(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCrown*)
   {
      ::TCrown *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCrown >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCrown", ::TCrown::Class_Version(), "TCrown.h", 19,
                  typeid(::TCrown), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCrown::Dictionary, isa_proxy, 4,
                  sizeof(::TCrown) );
      instance.SetNew(&new_TCrown);
      instance.SetNewArray(&newArray_TCrown);
      instance.SetDelete(&delete_TCrown);
      instance.SetDeleteArray(&deleteArray_TCrown);
      instance.SetDestructor(&destruct_TCrown);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCrown*)
   {
      return GenerateInitInstanceLocal((::TCrown*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCrown*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPolyLine(void *p = 0);
   static void *newArray_TPolyLine(Long_t size, void *p);
   static void delete_TPolyLine(void *p);
   static void deleteArray_TPolyLine(void *p);
   static void destruct_TPolyLine(void *p);
   static void streamer_TPolyLine(TBuffer &buf, void *obj);
   static Long64_t merge_TPolyLine(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPolyLine*)
   {
      ::TPolyLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPolyLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPolyLine", ::TPolyLine::Class_Version(), "TPolyLine.h", 23,
                  typeid(::TPolyLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPolyLine::Dictionary, isa_proxy, 17,
                  sizeof(::TPolyLine) );
      instance.SetNew(&new_TPolyLine);
      instance.SetNewArray(&newArray_TPolyLine);
      instance.SetDelete(&delete_TPolyLine);
      instance.SetDeleteArray(&deleteArray_TPolyLine);
      instance.SetDestructor(&destruct_TPolyLine);
      instance.SetStreamerFunc(&streamer_TPolyLine);
      instance.SetMerge(&merge_TPolyLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPolyLine*)
   {
      return GenerateInitInstanceLocal((::TPolyLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPolyLine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCurlyLine(void *p = 0);
   static void *newArray_TCurlyLine(Long_t size, void *p);
   static void delete_TCurlyLine(void *p);
   static void deleteArray_TCurlyLine(void *p);
   static void destruct_TCurlyLine(void *p);
   static Long64_t merge_TCurlyLine(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCurlyLine*)
   {
      ::TCurlyLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCurlyLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCurlyLine", ::TCurlyLine::Class_Version(), "TCurlyLine.h", 21,
                  typeid(::TCurlyLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCurlyLine::Dictionary, isa_proxy, 4,
                  sizeof(::TCurlyLine) );
      instance.SetNew(&new_TCurlyLine);
      instance.SetNewArray(&newArray_TCurlyLine);
      instance.SetDelete(&delete_TCurlyLine);
      instance.SetDeleteArray(&deleteArray_TCurlyLine);
      instance.SetDestructor(&destruct_TCurlyLine);
      instance.SetMerge(&merge_TCurlyLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCurlyLine*)
   {
      return GenerateInitInstanceLocal((::TCurlyLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCurlyLine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCurlyArc(void *p = 0);
   static void *newArray_TCurlyArc(Long_t size, void *p);
   static void delete_TCurlyArc(void *p);
   static void deleteArray_TCurlyArc(void *p);
   static void destruct_TCurlyArc(void *p);
   static Long64_t merge_TCurlyArc(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCurlyArc*)
   {
      ::TCurlyArc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCurlyArc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCurlyArc", ::TCurlyArc::Class_Version(), "TCurlyArc.h", 20,
                  typeid(::TCurlyArc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCurlyArc::Dictionary, isa_proxy, 4,
                  sizeof(::TCurlyArc) );
      instance.SetNew(&new_TCurlyArc);
      instance.SetNewArray(&newArray_TCurlyArc);
      instance.SetDelete(&delete_TCurlyArc);
      instance.SetDeleteArray(&deleteArray_TCurlyArc);
      instance.SetDestructor(&destruct_TCurlyArc);
      instance.SetMerge(&merge_TCurlyArc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCurlyArc*)
   {
      return GenerateInitInstanceLocal((::TCurlyArc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCurlyArc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCutG(void *p = 0);
   static void *newArray_TCutG(Long_t size, void *p);
   static void delete_TCutG(void *p);
   static void deleteArray_TCutG(void *p);
   static void destruct_TCutG(void *p);
   static void streamer_TCutG(TBuffer &buf, void *obj);
   static Long64_t merge_TCutG(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCutG*)
   {
      ::TCutG *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCutG >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCutG", ::TCutG::Class_Version(), "TCutG.h", 20,
                  typeid(::TCutG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCutG::Dictionary, isa_proxy, 17,
                  sizeof(::TCutG) );
      instance.SetNew(&new_TCutG);
      instance.SetNewArray(&newArray_TCutG);
      instance.SetDelete(&delete_TCutG);
      instance.SetDeleteArray(&deleteArray_TCutG);
      instance.SetDestructor(&destruct_TCutG);
      instance.SetStreamerFunc(&streamer_TCutG);
      instance.SetMerge(&merge_TCutG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCutG*)
   {
      return GenerateInitInstanceLocal((::TCutG*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCutG*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPave(void *p = 0);
   static void *newArray_TPave(Long_t size, void *p);
   static void delete_TPave(void *p);
   static void deleteArray_TPave(void *p);
   static void destruct_TPave(void *p);
   static void streamer_TPave(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPave*)
   {
      ::TPave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPave >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPave", ::TPave::Class_Version(), "TPave.h", 19,
                  typeid(::TPave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPave::Dictionary, isa_proxy, 17,
                  sizeof(::TPave) );
      instance.SetNew(&new_TPave);
      instance.SetNewArray(&newArray_TPave);
      instance.SetDelete(&delete_TPave);
      instance.SetDeleteArray(&deleteArray_TPave);
      instance.SetDestructor(&destruct_TPave);
      instance.SetStreamerFunc(&streamer_TPave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPave*)
   {
      return GenerateInitInstanceLocal((::TPave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPave*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TText(void *p = 0);
   static void *newArray_TText(Long_t size, void *p);
   static void delete_TText(void *p);
   static void deleteArray_TText(void *p);
   static void destruct_TText(void *p);
   static void streamer_TText(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TText*)
   {
      ::TText *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TText >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TText", ::TText::Class_Version(), "TText.h", 23,
                  typeid(::TText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TText::Dictionary, isa_proxy, 17,
                  sizeof(::TText) );
      instance.SetNew(&new_TText);
      instance.SetNewArray(&newArray_TText);
      instance.SetDelete(&delete_TText);
      instance.SetDeleteArray(&deleteArray_TText);
      instance.SetDestructor(&destruct_TText);
      instance.SetStreamerFunc(&streamer_TText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TText*)
   {
      return GenerateInitInstanceLocal((::TText*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TText*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPaveText(void *p = 0);
   static void *newArray_TPaveText(Long_t size, void *p);
   static void delete_TPaveText(void *p);
   static void deleteArray_TPaveText(void *p);
   static void destruct_TPaveText(void *p);
   static void streamer_TPaveText(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPaveText*)
   {
      ::TPaveText *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPaveText >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPaveText", ::TPaveText::Class_Version(), "TPaveText.h", 21,
                  typeid(::TPaveText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPaveText::Dictionary, isa_proxy, 17,
                  sizeof(::TPaveText) );
      instance.SetNew(&new_TPaveText);
      instance.SetNewArray(&newArray_TPaveText);
      instance.SetDelete(&delete_TPaveText);
      instance.SetDeleteArray(&deleteArray_TPaveText);
      instance.SetDestructor(&destruct_TPaveText);
      instance.SetStreamerFunc(&streamer_TPaveText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPaveText*)
   {
      return GenerateInitInstanceLocal((::TPaveText*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPaveText*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDiamond(void *p = 0);
   static void *newArray_TDiamond(Long_t size, void *p);
   static void delete_TDiamond(void *p);
   static void deleteArray_TDiamond(void *p);
   static void destruct_TDiamond(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDiamond*)
   {
      ::TDiamond *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDiamond >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDiamond", ::TDiamond::Class_Version(), "TDiamond.h", 21,
                  typeid(::TDiamond), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDiamond::Dictionary, isa_proxy, 4,
                  sizeof(::TDiamond) );
      instance.SetNew(&new_TDiamond);
      instance.SetNewArray(&newArray_TDiamond);
      instance.SetDelete(&delete_TDiamond);
      instance.SetDeleteArray(&deleteArray_TDiamond);
      instance.SetDestructor(&destruct_TDiamond);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDiamond*)
   {
      return GenerateInitInstanceLocal((::TDiamond*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDiamond*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TWbox(void *p = 0);
   static void *newArray_TWbox(Long_t size, void *p);
   static void delete_TWbox(void *p);
   static void deleteArray_TWbox(void *p);
   static void destruct_TWbox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWbox*)
   {
      ::TWbox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWbox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TWbox", ::TWbox::Class_Version(), "TWbox.h", 20,
                  typeid(::TWbox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWbox::Dictionary, isa_proxy, 4,
                  sizeof(::TWbox) );
      instance.SetNew(&new_TWbox);
      instance.SetNewArray(&newArray_TWbox);
      instance.SetDelete(&delete_TWbox);
      instance.SetDeleteArray(&deleteArray_TWbox);
      instance.SetDestructor(&destruct_TWbox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWbox*)
   {
      return GenerateInitInstanceLocal((::TWbox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TWbox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFrame(void *p = 0);
   static void *newArray_TFrame(Long_t size, void *p);
   static void delete_TFrame(void *p);
   static void deleteArray_TFrame(void *p);
   static void destruct_TFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFrame*)
   {
      ::TFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFrame >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFrame", ::TFrame::Class_Version(), "TFrame.h", 19,
                  typeid(::TFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFrame::Dictionary, isa_proxy, 4,
                  sizeof(::TFrame) );
      instance.SetNew(&new_TFrame);
      instance.SetNewArray(&newArray_TFrame);
      instance.SetDelete(&delete_TFrame);
      instance.SetDeleteArray(&deleteArray_TFrame);
      instance.SetDestructor(&destruct_TFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFrame*)
   {
      return GenerateInitInstanceLocal((::TFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGaxis(void *p = 0);
   static void *newArray_TGaxis(Long_t size, void *p);
   static void delete_TGaxis(void *p);
   static void deleteArray_TGaxis(void *p);
   static void destruct_TGaxis(void *p);
   static void streamer_TGaxis(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGaxis*)
   {
      ::TGaxis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGaxis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGaxis", ::TGaxis::Class_Version(), "TGaxis.h", 24,
                  typeid(::TGaxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGaxis::Dictionary, isa_proxy, 17,
                  sizeof(::TGaxis) );
      instance.SetNew(&new_TGaxis);
      instance.SetNewArray(&newArray_TGaxis);
      instance.SetDelete(&delete_TGaxis);
      instance.SetDeleteArray(&deleteArray_TGaxis);
      instance.SetDestructor(&destruct_TGaxis);
      instance.SetStreamerFunc(&streamer_TGaxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGaxis*)
   {
      return GenerateInitInstanceLocal((::TGaxis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGaxis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphPolargram(void *p = 0);
   static void *newArray_TGraphPolargram(Long_t size, void *p);
   static void delete_TGraphPolargram(void *p);
   static void deleteArray_TGraphPolargram(void *p);
   static void destruct_TGraphPolargram(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphPolargram*)
   {
      ::TGraphPolargram *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphPolargram >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphPolargram", ::TGraphPolargram::Class_Version(), "TGraphPolargram.h", 20,
                  typeid(::TGraphPolargram), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphPolargram::Dictionary, isa_proxy, 4,
                  sizeof(::TGraphPolargram) );
      instance.SetNew(&new_TGraphPolargram);
      instance.SetNewArray(&newArray_TGraphPolargram);
      instance.SetDelete(&delete_TGraphPolargram);
      instance.SetDeleteArray(&deleteArray_TGraphPolargram);
      instance.SetDestructor(&destruct_TGraphPolargram);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphPolargram*)
   {
      return GenerateInitInstanceLocal((::TGraphPolargram*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGraphPolargram*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphPolar(void *p = 0);
   static void *newArray_TGraphPolar(Long_t size, void *p);
   static void delete_TGraphPolar(void *p);
   static void deleteArray_TGraphPolar(void *p);
   static void destruct_TGraphPolar(void *p);
   static Long64_t merge_TGraphPolar(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphPolar*)
   {
      ::TGraphPolar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphPolar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphPolar", ::TGraphPolar::Class_Version(), "TGraphPolar.h", 22,
                  typeid(::TGraphPolar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphPolar::Dictionary, isa_proxy, 4,
                  sizeof(::TGraphPolar) );
      instance.SetNew(&new_TGraphPolar);
      instance.SetNewArray(&newArray_TGraphPolar);
      instance.SetDelete(&delete_TGraphPolar);
      instance.SetDeleteArray(&deleteArray_TGraphPolar);
      instance.SetDestructor(&destruct_TGraphPolar);
      instance.SetMerge(&merge_TGraphPolar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphPolar*)
   {
      return GenerateInitInstanceLocal((::TGraphPolar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGraphPolar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphQQ(void *p = 0);
   static void *newArray_TGraphQQ(Long_t size, void *p);
   static void delete_TGraphQQ(void *p);
   static void deleteArray_TGraphQQ(void *p);
   static void destruct_TGraphQQ(void *p);
   static Long64_t merge_TGraphQQ(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphQQ*)
   {
      ::TGraphQQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphQQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphQQ", ::TGraphQQ::Class_Version(), "TGraphQQ.h", 18,
                  typeid(::TGraphQQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphQQ::Dictionary, isa_proxy, 4,
                  sizeof(::TGraphQQ) );
      instance.SetNew(&new_TGraphQQ);
      instance.SetNewArray(&newArray_TGraphQQ);
      instance.SetDelete(&delete_TGraphQQ);
      instance.SetDeleteArray(&deleteArray_TGraphQQ);
      instance.SetDestructor(&destruct_TGraphQQ);
      instance.SetMerge(&merge_TGraphQQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphQQ*)
   {
      return GenerateInitInstanceLocal((::TGraphQQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGraphQQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TImage(void *p);
   static void deleteArray_TImage(void *p);
   static void destruct_TImage(void *p);
   static void streamer_TImage(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TImage*)
   {
      ::TImage *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TImage >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TImage", ::TImage::Class_Version(), "TImage.h", 29,
                  typeid(::TImage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TImage::Dictionary, isa_proxy, 16,
                  sizeof(::TImage) );
      instance.SetDelete(&delete_TImage);
      instance.SetDeleteArray(&deleteArray_TImage);
      instance.SetDestructor(&destruct_TImage);
      instance.SetStreamerFunc(&streamer_TImage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TImage*)
   {
      return GenerateInitInstanceLocal((::TImage*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TImage*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TImagePlugin(void *p);
   static void deleteArray_TImagePlugin(void *p);
   static void destruct_TImagePlugin(void *p);
   static void streamer_TImagePlugin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TImagePlugin*)
   {
      ::TImagePlugin *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TImagePlugin >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TImagePlugin", ::TImagePlugin::Class_Version(), "TImagePlugin.h", 21,
                  typeid(::TImagePlugin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TImagePlugin::Dictionary, isa_proxy, 16,
                  sizeof(::TImagePlugin) );
      instance.SetDelete(&delete_TImagePlugin);
      instance.SetDeleteArray(&deleteArray_TImagePlugin);
      instance.SetDestructor(&destruct_TImagePlugin);
      instance.SetStreamerFunc(&streamer_TImagePlugin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TImagePlugin*)
   {
      return GenerateInitInstanceLocal((::TImagePlugin*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TImagePlugin*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLatex(void *p = 0);
   static void *newArray_TLatex(Long_t size, void *p);
   static void delete_TLatex(void *p);
   static void deleteArray_TLatex(void *p);
   static void destruct_TLatex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLatex*)
   {
      ::TLatex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLatex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLatex", ::TLatex::Class_Version(), "TLatex.h", 18,
                  typeid(::TLatex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLatex::Dictionary, isa_proxy, 4,
                  sizeof(::TLatex) );
      instance.SetNew(&new_TLatex);
      instance.SetNewArray(&newArray_TLatex);
      instance.SetDelete(&delete_TLatex);
      instance.SetDeleteArray(&deleteArray_TLatex);
      instance.SetDestructor(&destruct_TLatex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLatex*)
   {
      return GenerateInitInstanceLocal((::TLatex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLatex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLegend(void *p = 0);
   static void *newArray_TLegend(Long_t size, void *p);
   static void delete_TLegend(void *p);
   static void deleteArray_TLegend(void *p);
   static void destruct_TLegend(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLegend*)
   {
      ::TLegend *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLegend >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLegend", ::TLegend::Class_Version(), "TLegend.h", 23,
                  typeid(::TLegend), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLegend::Dictionary, isa_proxy, 4,
                  sizeof(::TLegend) );
      instance.SetNew(&new_TLegend);
      instance.SetNewArray(&newArray_TLegend);
      instance.SetDelete(&delete_TLegend);
      instance.SetDeleteArray(&deleteArray_TLegend);
      instance.SetDestructor(&destruct_TLegend);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLegend*)
   {
      return GenerateInitInstanceLocal((::TLegend*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLegend*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLegendEntry(void *p = 0);
   static void *newArray_TLegendEntry(Long_t size, void *p);
   static void delete_TLegendEntry(void *p);
   static void deleteArray_TLegendEntry(void *p);
   static void destruct_TLegendEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLegendEntry*)
   {
      ::TLegendEntry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLegendEntry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLegendEntry", ::TLegendEntry::Class_Version(), "TLegendEntry.h", 24,
                  typeid(::TLegendEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLegendEntry::Dictionary, isa_proxy, 4,
                  sizeof(::TLegendEntry) );
      instance.SetNew(&new_TLegendEntry);
      instance.SetNewArray(&newArray_TLegendEntry);
      instance.SetDelete(&delete_TLegendEntry);
      instance.SetDeleteArray(&deleteArray_TLegendEntry);
      instance.SetDestructor(&destruct_TLegendEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLegendEntry*)
   {
      return GenerateInitInstanceLocal((::TLegendEntry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLegendEntry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLink(void *p = 0);
   static void *newArray_TLink(Long_t size, void *p);
   static void delete_TLink(void *p);
   static void deleteArray_TLink(void *p);
   static void destruct_TLink(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLink*)
   {
      ::TLink *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLink >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLink", ::TLink::Class_Version(), "TLink.h", 18,
                  typeid(::TLink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLink::Dictionary, isa_proxy, 4,
                  sizeof(::TLink) );
      instance.SetNew(&new_TLink);
      instance.SetNewArray(&newArray_TLink);
      instance.SetDelete(&delete_TLink);
      instance.SetDeleteArray(&deleteArray_TLink);
      instance.SetDestructor(&destruct_TLink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLink*)
   {
      return GenerateInitInstanceLocal((::TLink*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TLink*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMarker(void *p = 0);
   static void *newArray_TMarker(Long_t size, void *p);
   static void delete_TMarker(void *p);
   static void deleteArray_TMarker(void *p);
   static void destruct_TMarker(void *p);
   static void streamer_TMarker(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMarker*)
   {
      ::TMarker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMarker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMarker", ::TMarker::Class_Version(), "TMarker.h", 23,
                  typeid(::TMarker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMarker::Dictionary, isa_proxy, 17,
                  sizeof(::TMarker) );
      instance.SetNew(&new_TMarker);
      instance.SetNewArray(&newArray_TMarker);
      instance.SetDelete(&delete_TMarker);
      instance.SetDeleteArray(&deleteArray_TMarker);
      instance.SetDestructor(&destruct_TMarker);
      instance.SetStreamerFunc(&streamer_TMarker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMarker*)
   {
      return GenerateInitInstanceLocal((::TMarker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMarker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMathText(void *p = 0);
   static void *newArray_TMathText(Long_t size, void *p);
   static void delete_TMathText(void *p);
   static void deleteArray_TMathText(void *p);
   static void destruct_TMathText(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMathText*)
   {
      ::TMathText *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMathText >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TMathText", ::TMathText::Class_Version(), "TMathText.h", 19,
                  typeid(::TMathText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMathText::Dictionary, isa_proxy, 4,
                  sizeof(::TMathText) );
      instance.SetNew(&new_TMathText);
      instance.SetNewArray(&newArray_TMathText);
      instance.SetDelete(&delete_TMathText);
      instance.SetDeleteArray(&deleteArray_TMathText);
      instance.SetDestructor(&destruct_TMathText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMathText*)
   {
      return GenerateInitInstanceLocal((::TMathText*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TMathText*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPaveLabel(void *p = 0);
   static void *newArray_TPaveLabel(Long_t size, void *p);
   static void delete_TPaveLabel(void *p);
   static void deleteArray_TPaveLabel(void *p);
   static void destruct_TPaveLabel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPaveLabel*)
   {
      ::TPaveLabel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPaveLabel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPaveLabel", ::TPaveLabel::Class_Version(), "TPaveLabel.h", 20,
                  typeid(::TPaveLabel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPaveLabel::Dictionary, isa_proxy, 4,
                  sizeof(::TPaveLabel) );
      instance.SetNew(&new_TPaveLabel);
      instance.SetNewArray(&newArray_TPaveLabel);
      instance.SetDelete(&delete_TPaveLabel);
      instance.SetDeleteArray(&deleteArray_TPaveLabel);
      instance.SetDestructor(&destruct_TPaveLabel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPaveLabel*)
   {
      return GenerateInitInstanceLocal((::TPaveLabel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPaveLabel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPaveStats(void *p = 0);
   static void *newArray_TPaveStats(Long_t size, void *p);
   static void delete_TPaveStats(void *p);
   static void deleteArray_TPaveStats(void *p);
   static void destruct_TPaveStats(void *p);
   static void streamer_TPaveStats(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPaveStats*)
   {
      ::TPaveStats *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPaveStats >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPaveStats", ::TPaveStats::Class_Version(), "TPaveStats.h", 18,
                  typeid(::TPaveStats), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPaveStats::Dictionary, isa_proxy, 17,
                  sizeof(::TPaveStats) );
      instance.SetNew(&new_TPaveStats);
      instance.SetNewArray(&newArray_TPaveStats);
      instance.SetDelete(&delete_TPaveStats);
      instance.SetDeleteArray(&deleteArray_TPaveStats);
      instance.SetDestructor(&destruct_TPaveStats);
      instance.SetStreamerFunc(&streamer_TPaveStats);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPaveStats*)
   {
      return GenerateInitInstanceLocal((::TPaveStats*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPaveStats*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPavesText(void *p = 0);
   static void *newArray_TPavesText(Long_t size, void *p);
   static void delete_TPavesText(void *p);
   static void deleteArray_TPavesText(void *p);
   static void destruct_TPavesText(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPavesText*)
   {
      ::TPavesText *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPavesText >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPavesText", ::TPavesText::Class_Version(), "TPavesText.h", 18,
                  typeid(::TPavesText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPavesText::Dictionary, isa_proxy, 4,
                  sizeof(::TPavesText) );
      instance.SetNew(&new_TPavesText);
      instance.SetNewArray(&newArray_TPavesText);
      instance.SetDelete(&delete_TPavesText);
      instance.SetDeleteArray(&deleteArray_TPavesText);
      instance.SetDestructor(&destruct_TPavesText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPavesText*)
   {
      return GenerateInitInstanceLocal((::TPavesText*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPavesText*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPie(void *p = 0);
   static void *newArray_TPie(Long_t size, void *p);
   static void delete_TPie(void *p);
   static void deleteArray_TPie(void *p);
   static void destruct_TPie(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPie*)
   {
      ::TPie *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPie >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPie", ::TPie::Class_Version(), "TPie.h", 23,
                  typeid(::TPie), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPie::Dictionary, isa_proxy, 4,
                  sizeof(::TPie) );
      instance.SetNew(&new_TPie);
      instance.SetNewArray(&newArray_TPie);
      instance.SetDelete(&delete_TPie);
      instance.SetDeleteArray(&deleteArray_TPie);
      instance.SetDestructor(&destruct_TPie);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPie*)
   {
      return GenerateInitInstanceLocal((::TPie*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPie*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPieSlice(void *p = 0);
   static void *newArray_TPieSlice(Long_t size, void *p);
   static void delete_TPieSlice(void *p);
   static void deleteArray_TPieSlice(void *p);
   static void destruct_TPieSlice(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPieSlice*)
   {
      ::TPieSlice *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPieSlice >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPieSlice", ::TPieSlice::Class_Version(), "TPieSlice.h", 18,
                  typeid(::TPieSlice), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPieSlice::Dictionary, isa_proxy, 4,
                  sizeof(::TPieSlice) );
      instance.SetNew(&new_TPieSlice);
      instance.SetNewArray(&newArray_TPieSlice);
      instance.SetDelete(&delete_TPieSlice);
      instance.SetDeleteArray(&deleteArray_TPieSlice);
      instance.SetDestructor(&destruct_TPieSlice);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPieSlice*)
   {
      return GenerateInitInstanceLocal((::TPieSlice*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPieSlice*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPoints(void *p = 0);
   static void *newArray_TPoints(Long_t size, void *p);
   static void delete_TPoints(void *p);
   static void deleteArray_TPoints(void *p);
   static void destruct_TPoints(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPoints*)
   {
      ::TPoints *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPoints >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPoints", ::TPoints::Class_Version(), "TPoints.h", 19,
                  typeid(::TPoints), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPoints::Dictionary, isa_proxy, 4,
                  sizeof(::TPoints) );
      instance.SetNew(&new_TPoints);
      instance.SetNewArray(&newArray_TPoints);
      instance.SetDelete(&delete_TPoints);
      instance.SetDeleteArray(&deleteArray_TPoints);
      instance.SetDestructor(&destruct_TPoints);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPoints*)
   {
      return GenerateInitInstanceLocal((::TPoints*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPoints*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTF(void *p = 0);
   static void *newArray_TTF(Long_t size, void *p);
   static void delete_TTF(void *p);
   static void deleteArray_TTF(void *p);
   static void destruct_TTF(void *p);
   static void streamer_TTF(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTF*)
   {
      ::TTF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTF", ::TTF::Class_Version(), "TTF.h", 53,
                  typeid(::TTF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTF::Dictionary, isa_proxy, 16,
                  sizeof(::TTF) );
      instance.SetNew(&new_TTF);
      instance.SetNewArray(&newArray_TTF);
      instance.SetDelete(&delete_TTF);
      instance.SetDeleteArray(&deleteArray_TTF);
      instance.SetDestructor(&destruct_TTF);
      instance.SetStreamerFunc(&streamer_TTF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTF*)
   {
      return GenerateInitInstanceLocal((::TTF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TEllipse::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEllipse::Class_Name()
{
   return "TEllipse";
}

//______________________________________________________________________________
const char *TEllipse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEllipse*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEllipse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEllipse*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEllipse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEllipse*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEllipse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEllipse*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArc::Class_Name()
{
   return "TArc";
}

//______________________________________________________________________________
const char *TArc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLine::Class_Name()
{
   return "TLine";
}

//______________________________________________________________________________
const char *TLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArrow::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArrow::Class_Name()
{
   return "TArrow";
}

//______________________________________________________________________________
const char *TArrow::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArrow*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArrow::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArrow*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArrow::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArrow*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArrow::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArrow*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPaletteEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPaletteEditor::Class_Name()
{
   return "TPaletteEditor";
}

//______________________________________________________________________________
const char *TPaletteEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaletteEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPaletteEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaletteEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPaletteEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaletteEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPaletteEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaletteEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TImagePalette::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TImagePalette::Class_Name()
{
   return "TImagePalette";
}

//______________________________________________________________________________
const char *TImagePalette::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TImagePalette*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TImagePalette::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TImagePalette*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TImagePalette::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TImagePalette*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TImagePalette::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TImagePalette*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAttImage::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttImage::Class_Name()
{
   return "TAttImage";
}

//______________________________________________________________________________
const char *TAttImage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttImage*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAttImage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttImage*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttImage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttImage*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttImage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttImage*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBox::Class_Name()
{
   return "TBox";
}

//______________________________________________________________________________
const char *TBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCandle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCandle::Class_Name()
{
   return "TCandle";
}

//______________________________________________________________________________
const char *TCandle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCandle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCandle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCandle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCandle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCandle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCandle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCandle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCrown::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCrown::Class_Name()
{
   return "TCrown";
}

//______________________________________________________________________________
const char *TCrown::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCrown*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCrown::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCrown*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCrown::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCrown*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCrown::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCrown*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPolyLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPolyLine::Class_Name()
{
   return "TPolyLine";
}

//______________________________________________________________________________
const char *TPolyLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPolyLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPolyLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPolyLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCurlyLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCurlyLine::Class_Name()
{
   return "TCurlyLine";
}

//______________________________________________________________________________
const char *TCurlyLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCurlyLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCurlyLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCurlyLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCurlyArc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCurlyArc::Class_Name()
{
   return "TCurlyArc";
}

//______________________________________________________________________________
const char *TCurlyArc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCurlyArc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCurlyArc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCurlyArc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCutG::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCutG::Class_Name()
{
   return "TCutG";
}

//______________________________________________________________________________
const char *TCutG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCutG*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCutG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCutG*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCutG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCutG*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCutG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCutG*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPave::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPave::Class_Name()
{
   return "TPave";
}

//______________________________________________________________________________
const char *TPave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPave*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPave*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPave*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPave*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TText::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TText::Class_Name()
{
   return "TText";
}

//______________________________________________________________________________
const char *TText::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TText*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TText::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TText*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TText::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TText*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TText::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TText*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPaveText::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPaveText::Class_Name()
{
   return "TPaveText";
}

//______________________________________________________________________________
const char *TPaveText::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveText*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPaveText::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveText*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPaveText::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveText*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPaveText::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveText*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDiamond::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDiamond::Class_Name()
{
   return "TDiamond";
}

//______________________________________________________________________________
const char *TDiamond::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDiamond*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDiamond::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDiamond*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDiamond::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDiamond*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDiamond::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDiamond*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWbox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWbox::Class_Name()
{
   return "TWbox";
}

//______________________________________________________________________________
const char *TWbox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWbox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWbox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWbox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWbox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWbox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWbox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWbox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFrame::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFrame::Class_Name()
{
   return "TFrame";
}

//______________________________________________________________________________
const char *TFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFrame*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFrame*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFrame*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFrame*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGaxis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGaxis::Class_Name()
{
   return "TGaxis";
}

//______________________________________________________________________________
const char *TGaxis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGaxis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGaxis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGaxis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGaxis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGaxis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGaxis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGaxis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphPolargram::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphPolargram::Class_Name()
{
   return "TGraphPolargram";
}

//______________________________________________________________________________
const char *TGraphPolargram::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphPolargram*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphPolargram::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphPolargram*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphPolargram::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphPolargram*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphPolargram::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphPolargram*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphPolar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphPolar::Class_Name()
{
   return "TGraphPolar";
}

//______________________________________________________________________________
const char *TGraphPolar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphPolar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphPolar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphPolar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphPolar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphPolar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphPolar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphPolar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphQQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphQQ::Class_Name()
{
   return "TGraphQQ";
}

//______________________________________________________________________________
const char *TGraphQQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphQQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphQQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphQQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphQQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphQQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphQQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphQQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TImage::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TImage::Class_Name()
{
   return "TImage";
}

//______________________________________________________________________________
const char *TImage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TImage*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TImage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TImage*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TImage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TImage*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TImage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TImage*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TImagePlugin::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TImagePlugin::Class_Name()
{
   return "TImagePlugin";
}

//______________________________________________________________________________
const char *TImagePlugin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TImagePlugin*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TImagePlugin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TImagePlugin*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TImagePlugin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TImagePlugin*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TImagePlugin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TImagePlugin*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLatex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLatex::Class_Name()
{
   return "TLatex";
}

//______________________________________________________________________________
const char *TLatex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLatex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLatex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLatex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLatex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLatex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLatex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLatex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLegend::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLegend::Class_Name()
{
   return "TLegend";
}

//______________________________________________________________________________
const char *TLegend::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLegend*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLegend::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLegend*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLegend::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLegend*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLegend::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLegend*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLegendEntry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLegendEntry::Class_Name()
{
   return "TLegendEntry";
}

//______________________________________________________________________________
const char *TLegendEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLegendEntry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLegendEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLegendEntry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLegendEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLegendEntry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLegendEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLegendEntry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLink::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLink::Class_Name()
{
   return "TLink";
}

//______________________________________________________________________________
const char *TLink::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLink*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLink::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLink*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLink::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLink*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLink::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLink*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMarker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMarker::Class_Name()
{
   return "TMarker";
}

//______________________________________________________________________________
const char *TMarker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMarker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMarker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMarker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMarker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMarker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMarker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMarker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMathText::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMathText::Class_Name()
{
   return "TMathText";
}

//______________________________________________________________________________
const char *TMathText::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMathText*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMathText::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMathText*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMathText::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMathText*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMathText::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMathText*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPaveLabel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPaveLabel::Class_Name()
{
   return "TPaveLabel";
}

//______________________________________________________________________________
const char *TPaveLabel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveLabel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPaveLabel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveLabel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPaveLabel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveLabel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPaveLabel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveLabel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPaveStats::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPaveStats::Class_Name()
{
   return "TPaveStats";
}

//______________________________________________________________________________
const char *TPaveStats::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveStats*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPaveStats::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveStats*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPaveStats::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveStats*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPaveStats::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveStats*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPavesText::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPavesText::Class_Name()
{
   return "TPavesText";
}

//______________________________________________________________________________
const char *TPavesText::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPavesText*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPavesText::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPavesText*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPavesText::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPavesText*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPavesText::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPavesText*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPie::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPie::Class_Name()
{
   return "TPie";
}

//______________________________________________________________________________
const char *TPie::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPie*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPie::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPie*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPie::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPie*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPie::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPie*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPieSlice::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPieSlice::Class_Name()
{
   return "TPieSlice";
}

//______________________________________________________________________________
const char *TPieSlice::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieSlice*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPieSlice::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieSlice*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPieSlice::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieSlice*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPieSlice::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieSlice*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPoints::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPoints::Class_Name()
{
   return "TPoints";
}

//______________________________________________________________________________
const char *TPoints::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPoints*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPoints::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPoints*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPoints::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPoints*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPoints::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPoints*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTF::Class_Name()
{
   return "TTF";
}

//______________________________________________________________________________
const char *TTF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTF*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEllipse(void *p) {
      return  p ? new(p) ::TEllipse : new ::TEllipse;
   }
   static void *newArray_TEllipse(Long_t nElements, void *p) {
      return p ? new(p) ::TEllipse[nElements] : new ::TEllipse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEllipse(void *p) {
      delete ((::TEllipse*)p);
   }
   static void deleteArray_TEllipse(void *p) {
      delete [] ((::TEllipse*)p);
   }
   static void destruct_TEllipse(void *p) {
      typedef ::TEllipse current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEllipse(TBuffer &buf, void *obj) {
      ((::TEllipse*)obj)->::TEllipse::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEllipse

//______________________________________________________________________________
void TArc::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArc::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArc(void *p) {
      return  p ? new(p) ::TArc : new ::TArc;
   }
   static void *newArray_TArc(Long_t nElements, void *p) {
      return p ? new(p) ::TArc[nElements] : new ::TArc[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArc(void *p) {
      delete ((::TArc*)p);
   }
   static void deleteArray_TArc(void *p) {
      delete [] ((::TArc*)p);
   }
   static void destruct_TArc(void *p) {
      typedef ::TArc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArc

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLine(void *p) {
      return  p ? new(p) ::TLine : new ::TLine;
   }
   static void *newArray_TLine(Long_t nElements, void *p) {
      return p ? new(p) ::TLine[nElements] : new ::TLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLine(void *p) {
      delete ((::TLine*)p);
   }
   static void deleteArray_TLine(void *p) {
      delete [] ((::TLine*)p);
   }
   static void destruct_TLine(void *p) {
      typedef ::TLine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLine(TBuffer &buf, void *obj) {
      ((::TLine*)obj)->::TLine::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLine

//______________________________________________________________________________
void TArrow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArrow.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArrow::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArrow::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArrow(void *p) {
      return  p ? new(p) ::TArrow : new ::TArrow;
   }
   static void *newArray_TArrow(Long_t nElements, void *p) {
      return p ? new(p) ::TArrow[nElements] : new ::TArrow[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArrow(void *p) {
      delete ((::TArrow*)p);
   }
   static void deleteArray_TArrow(void *p) {
      delete [] ((::TArrow*)p);
   }
   static void destruct_TArrow(void *p) {
      typedef ::TArrow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArrow

//______________________________________________________________________________
void TPaletteEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaletteEditor.

   ::Error("TPaletteEditor::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPaletteEditor(void *p) {
      delete ((::TPaletteEditor*)p);
   }
   static void deleteArray_TPaletteEditor(void *p) {
      delete [] ((::TPaletteEditor*)p);
   }
   static void destruct_TPaletteEditor(void *p) {
      typedef ::TPaletteEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPaletteEditor(TBuffer &buf, void *obj) {
      ((::TPaletteEditor*)obj)->::TPaletteEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPaletteEditor

//______________________________________________________________________________
void TImagePalette::Streamer(TBuffer &R__b)
{
   // Stream an object of class TImagePalette.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fNumPoints;
      delete [] fPoints;
      fPoints = new Double_t[fNumPoints];
      R__b.ReadFastArray(fPoints,fNumPoints);
      delete [] fColorRed;
      fColorRed = new UShort_t[fNumPoints];
      R__b.ReadFastArray(fColorRed,fNumPoints);
      delete [] fColorGreen;
      fColorGreen = new UShort_t[fNumPoints];
      R__b.ReadFastArray(fColorGreen,fNumPoints);
      delete [] fColorBlue;
      fColorBlue = new UShort_t[fNumPoints];
      R__b.ReadFastArray(fColorBlue,fNumPoints);
      delete [] fColorAlpha;
      fColorAlpha = new UShort_t[fNumPoints];
      R__b.ReadFastArray(fColorAlpha,fNumPoints);
      R__b.CheckByteCount(R__s, R__c, TImagePalette::IsA());
   } else {
      R__c = R__b.WriteVersion(TImagePalette::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fNumPoints;
      R__b.WriteFastArray(fPoints,fNumPoints);
      R__b.WriteFastArray(fColorRed,fNumPoints);
      R__b.WriteFastArray(fColorGreen,fNumPoints);
      R__b.WriteFastArray(fColorBlue,fNumPoints);
      R__b.WriteFastArray(fColorAlpha,fNumPoints);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TImagePalette(void *p) {
      return  p ? new(p) ::TImagePalette : new ::TImagePalette;
   }
   static void *newArray_TImagePalette(Long_t nElements, void *p) {
      return p ? new(p) ::TImagePalette[nElements] : new ::TImagePalette[nElements];
   }
   // Wrapper around operator delete
   static void delete_TImagePalette(void *p) {
      delete ((::TImagePalette*)p);
   }
   static void deleteArray_TImagePalette(void *p) {
      delete [] ((::TImagePalette*)p);
   }
   static void destruct_TImagePalette(void *p) {
      typedef ::TImagePalette current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TImagePalette(TBuffer &buf, void *obj) {
      ((::TImagePalette*)obj)->::TImagePalette::Streamer(buf);
   }
} // end of namespace ROOT for class ::TImagePalette

//______________________________________________________________________________
void TAttImage::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttImage.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      void *ptr_fImageQuality = (void*)&fImageQuality;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fImageQuality);
      R__b >> fImageCompression;
      R__b >> fConstRatio;
      fPalette.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TAttImage::IsA());
   } else {
      R__c = R__b.WriteVersion(TAttImage::IsA(), kTRUE);
      R__b << (Int_t)fImageQuality;
      R__b << fImageCompression;
      R__b << fConstRatio;
      fPalette.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttImage(void *p) {
      return  p ? new(p) ::TAttImage : new ::TAttImage;
   }
   static void *newArray_TAttImage(Long_t nElements, void *p) {
      return p ? new(p) ::TAttImage[nElements] : new ::TAttImage[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttImage(void *p) {
      delete ((::TAttImage*)p);
   }
   static void deleteArray_TAttImage(void *p) {
      delete [] ((::TAttImage*)p);
   }
   static void destruct_TAttImage(void *p) {
      typedef ::TAttImage current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAttImage(TBuffer &buf, void *obj) {
      ((::TAttImage*)obj)->::TAttImage::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAttImage

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBox(void *p) {
      return  p ? new(p) ::TBox : new ::TBox;
   }
   static void *newArray_TBox(Long_t nElements, void *p) {
      return p ? new(p) ::TBox[nElements] : new ::TBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBox(void *p) {
      delete ((::TBox*)p);
   }
   static void deleteArray_TBox(void *p) {
      delete [] ((::TBox*)p);
   }
   static void destruct_TBox(void *p) {
      typedef ::TBox current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBox(TBuffer &buf, void *obj) {
      ((::TBox*)obj)->::TBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCandle(void *p) {
      return  p ? new(p) ::TCandle : new ::TCandle;
   }
   static void *newArray_TCandle(Long_t nElements, void *p) {
      return p ? new(p) ::TCandle[nElements] : new ::TCandle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCandle(void *p) {
      delete ((::TCandle*)p);
   }
   static void deleteArray_TCandle(void *p) {
      delete [] ((::TCandle*)p);
   }
   static void destruct_TCandle(void *p) {
      typedef ::TCandle current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCandle(TBuffer &buf, void *obj) {
      ((::TCandle*)obj)->::TCandle::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCandle

//______________________________________________________________________________
void TCrown::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCrown.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCrown::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCrown::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCrown(void *p) {
      return  p ? new(p) ::TCrown : new ::TCrown;
   }
   static void *newArray_TCrown(Long_t nElements, void *p) {
      return p ? new(p) ::TCrown[nElements] : new ::TCrown[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCrown(void *p) {
      delete ((::TCrown*)p);
   }
   static void deleteArray_TCrown(void *p) {
      delete [] ((::TCrown*)p);
   }
   static void destruct_TCrown(void *p) {
      typedef ::TCrown current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCrown

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPolyLine(void *p) {
      return  p ? new(p) ::TPolyLine : new ::TPolyLine;
   }
   static void *newArray_TPolyLine(Long_t nElements, void *p) {
      return p ? new(p) ::TPolyLine[nElements] : new ::TPolyLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPolyLine(void *p) {
      delete ((::TPolyLine*)p);
   }
   static void deleteArray_TPolyLine(void *p) {
      delete [] ((::TPolyLine*)p);
   }
   static void destruct_TPolyLine(void *p) {
      typedef ::TPolyLine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPolyLine(TBuffer &buf, void *obj) {
      ((::TPolyLine*)obj)->::TPolyLine::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TPolyLine(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TPolyLine*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TPolyLine

//______________________________________________________________________________
void TCurlyLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCurlyLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCurlyLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCurlyLine::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCurlyLine(void *p) {
      return  p ? new(p) ::TCurlyLine : new ::TCurlyLine;
   }
   static void *newArray_TCurlyLine(Long_t nElements, void *p) {
      return p ? new(p) ::TCurlyLine[nElements] : new ::TCurlyLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCurlyLine(void *p) {
      delete ((::TCurlyLine*)p);
   }
   static void deleteArray_TCurlyLine(void *p) {
      delete [] ((::TCurlyLine*)p);
   }
   static void destruct_TCurlyLine(void *p) {
      typedef ::TCurlyLine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TCurlyLine(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TCurlyLine*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TCurlyLine

//______________________________________________________________________________
void TCurlyArc::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCurlyArc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCurlyArc::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCurlyArc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCurlyArc(void *p) {
      return  p ? new(p) ::TCurlyArc : new ::TCurlyArc;
   }
   static void *newArray_TCurlyArc(Long_t nElements, void *p) {
      return p ? new(p) ::TCurlyArc[nElements] : new ::TCurlyArc[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCurlyArc(void *p) {
      delete ((::TCurlyArc*)p);
   }
   static void deleteArray_TCurlyArc(void *p) {
      delete [] ((::TCurlyArc*)p);
   }
   static void destruct_TCurlyArc(void *p) {
      typedef ::TCurlyArc current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TCurlyArc(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TCurlyArc*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TCurlyArc

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCutG(void *p) {
      return  p ? new(p) ::TCutG : new ::TCutG;
   }
   static void *newArray_TCutG(Long_t nElements, void *p) {
      return p ? new(p) ::TCutG[nElements] : new ::TCutG[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCutG(void *p) {
      delete ((::TCutG*)p);
   }
   static void deleteArray_TCutG(void *p) {
      delete [] ((::TCutG*)p);
   }
   static void destruct_TCutG(void *p) {
      typedef ::TCutG current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCutG(TBuffer &buf, void *obj) {
      ((::TCutG*)obj)->::TCutG::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TCutG(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TCutG*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TCutG

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPave(void *p) {
      return  p ? new(p) ::TPave : new ::TPave;
   }
   static void *newArray_TPave(Long_t nElements, void *p) {
      return p ? new(p) ::TPave[nElements] : new ::TPave[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPave(void *p) {
      delete ((::TPave*)p);
   }
   static void deleteArray_TPave(void *p) {
      delete [] ((::TPave*)p);
   }
   static void destruct_TPave(void *p) {
      typedef ::TPave current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPave(TBuffer &buf, void *obj) {
      ((::TPave*)obj)->::TPave::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPave

namespace ROOT {
   // Wrappers around operator new
   static void *new_TText(void *p) {
      return  p ? new(p) ::TText : new ::TText;
   }
   static void *newArray_TText(Long_t nElements, void *p) {
      return p ? new(p) ::TText[nElements] : new ::TText[nElements];
   }
   // Wrapper around operator delete
   static void delete_TText(void *p) {
      delete ((::TText*)p);
   }
   static void deleteArray_TText(void *p) {
      delete [] ((::TText*)p);
   }
   static void destruct_TText(void *p) {
      typedef ::TText current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TText(TBuffer &buf, void *obj) {
      ((::TText*)obj)->::TText::Streamer(buf);
   }
} // end of namespace ROOT for class ::TText

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPaveText(void *p) {
      return  p ? new(p) ::TPaveText : new ::TPaveText;
   }
   static void *newArray_TPaveText(Long_t nElements, void *p) {
      return p ? new(p) ::TPaveText[nElements] : new ::TPaveText[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPaveText(void *p) {
      delete ((::TPaveText*)p);
   }
   static void deleteArray_TPaveText(void *p) {
      delete [] ((::TPaveText*)p);
   }
   static void destruct_TPaveText(void *p) {
      typedef ::TPaveText current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPaveText(TBuffer &buf, void *obj) {
      ((::TPaveText*)obj)->::TPaveText::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPaveText

//______________________________________________________________________________
void TDiamond::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDiamond.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDiamond::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDiamond::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDiamond(void *p) {
      return  p ? new(p) ::TDiamond : new ::TDiamond;
   }
   static void *newArray_TDiamond(Long_t nElements, void *p) {
      return p ? new(p) ::TDiamond[nElements] : new ::TDiamond[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDiamond(void *p) {
      delete ((::TDiamond*)p);
   }
   static void deleteArray_TDiamond(void *p) {
      delete [] ((::TDiamond*)p);
   }
   static void destruct_TDiamond(void *p) {
      typedef ::TDiamond current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDiamond

//______________________________________________________________________________
void TWbox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWbox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWbox::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWbox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWbox(void *p) {
      return  p ? new(p) ::TWbox : new ::TWbox;
   }
   static void *newArray_TWbox(Long_t nElements, void *p) {
      return p ? new(p) ::TWbox[nElements] : new ::TWbox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWbox(void *p) {
      delete ((::TWbox*)p);
   }
   static void deleteArray_TWbox(void *p) {
      delete [] ((::TWbox*)p);
   }
   static void destruct_TWbox(void *p) {
      typedef ::TWbox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TWbox

//______________________________________________________________________________
void TFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFrame.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFrame::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFrame::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFrame(void *p) {
      return  p ? new(p) ::TFrame : new ::TFrame;
   }
   static void *newArray_TFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TFrame[nElements] : new ::TFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFrame(void *p) {
      delete ((::TFrame*)p);
   }
   static void deleteArray_TFrame(void *p) {
      delete [] ((::TFrame*)p);
   }
   static void destruct_TFrame(void *p) {
      typedef ::TFrame current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFrame

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGaxis(void *p) {
      return  p ? new(p) ::TGaxis : new ::TGaxis;
   }
   static void *newArray_TGaxis(Long_t nElements, void *p) {
      return p ? new(p) ::TGaxis[nElements] : new ::TGaxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGaxis(void *p) {
      delete ((::TGaxis*)p);
   }
   static void deleteArray_TGaxis(void *p) {
      delete [] ((::TGaxis*)p);
   }
   static void destruct_TGaxis(void *p) {
      typedef ::TGaxis current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGaxis(TBuffer &buf, void *obj) {
      ((::TGaxis*)obj)->::TGaxis::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGaxis

//______________________________________________________________________________
void TGraphPolargram::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphPolargram.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGraphPolargram::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGraphPolargram::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphPolargram(void *p) {
      return  p ? new(p) ::TGraphPolargram : new ::TGraphPolargram;
   }
   static void *newArray_TGraphPolargram(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphPolargram[nElements] : new ::TGraphPolargram[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphPolargram(void *p) {
      delete ((::TGraphPolargram*)p);
   }
   static void deleteArray_TGraphPolargram(void *p) {
      delete [] ((::TGraphPolargram*)p);
   }
   static void destruct_TGraphPolargram(void *p) {
      typedef ::TGraphPolargram current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGraphPolargram

//______________________________________________________________________________
void TGraphPolar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphPolar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGraphPolar::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGraphPolar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphPolar(void *p) {
      return  p ? new(p) ::TGraphPolar : new ::TGraphPolar;
   }
   static void *newArray_TGraphPolar(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphPolar[nElements] : new ::TGraphPolar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphPolar(void *p) {
      delete ((::TGraphPolar*)p);
   }
   static void deleteArray_TGraphPolar(void *p) {
      delete [] ((::TGraphPolar*)p);
   }
   static void destruct_TGraphPolar(void *p) {
      typedef ::TGraphPolar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGraphPolar(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGraphPolar*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGraphPolar

//______________________________________________________________________________
void TGraphQQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphQQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGraphQQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGraphQQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphQQ(void *p) {
      return  p ? new(p) ::TGraphQQ : new ::TGraphQQ;
   }
   static void *newArray_TGraphQQ(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphQQ[nElements] : new ::TGraphQQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphQQ(void *p) {
      delete ((::TGraphQQ*)p);
   }
   static void deleteArray_TGraphQQ(void *p) {
      delete [] ((::TGraphQQ*)p);
   }
   static void destruct_TGraphQQ(void *p) {
      typedef ::TGraphQQ current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGraphQQ(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGraphQQ*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGraphQQ

//______________________________________________________________________________
void TImage::Streamer(TBuffer &R__b)
{
   // Stream an object of class TImage.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      TAttImage::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TImage::IsA());
   } else {
      R__c = R__b.WriteVersion(TImage::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      TAttImage::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TImage(void *p) {
      delete ((::TImage*)p);
   }
   static void deleteArray_TImage(void *p) {
      delete [] ((::TImage*)p);
   }
   static void destruct_TImage(void *p) {
      typedef ::TImage current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TImage(TBuffer &buf, void *obj) {
      ((::TImage*)obj)->::TImage::Streamer(buf);
   }
} // end of namespace ROOT for class ::TImage

//______________________________________________________________________________
void TImagePlugin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TImagePlugin.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TImagePlugin(void *p) {
      delete ((::TImagePlugin*)p);
   }
   static void deleteArray_TImagePlugin(void *p) {
      delete [] ((::TImagePlugin*)p);
   }
   static void destruct_TImagePlugin(void *p) {
      typedef ::TImagePlugin current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TImagePlugin(TBuffer &buf, void *obj) {
      ((::TImagePlugin*)obj)->::TImagePlugin::Streamer(buf);
   }
} // end of namespace ROOT for class ::TImagePlugin

//______________________________________________________________________________
void TLatex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLatex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLatex::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLatex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLatex(void *p) {
      return  p ? new(p) ::TLatex : new ::TLatex;
   }
   static void *newArray_TLatex(Long_t nElements, void *p) {
      return p ? new(p) ::TLatex[nElements] : new ::TLatex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLatex(void *p) {
      delete ((::TLatex*)p);
   }
   static void deleteArray_TLatex(void *p) {
      delete [] ((::TLatex*)p);
   }
   static void destruct_TLatex(void *p) {
      typedef ::TLatex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLatex

//______________________________________________________________________________
void TLegend::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLegend.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLegend::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLegend::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLegend(void *p) {
      return  p ? new(p) ::TLegend : new ::TLegend;
   }
   static void *newArray_TLegend(Long_t nElements, void *p) {
      return p ? new(p) ::TLegend[nElements] : new ::TLegend[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLegend(void *p) {
      delete ((::TLegend*)p);
   }
   static void deleteArray_TLegend(void *p) {
      delete [] ((::TLegend*)p);
   }
   static void destruct_TLegend(void *p) {
      typedef ::TLegend current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLegend

//______________________________________________________________________________
void TLegendEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLegendEntry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLegendEntry::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLegendEntry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLegendEntry(void *p) {
      return  p ? new(p) ::TLegendEntry : new ::TLegendEntry;
   }
   static void *newArray_TLegendEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TLegendEntry[nElements] : new ::TLegendEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLegendEntry(void *p) {
      delete ((::TLegendEntry*)p);
   }
   static void deleteArray_TLegendEntry(void *p) {
      delete [] ((::TLegendEntry*)p);
   }
   static void destruct_TLegendEntry(void *p) {
      typedef ::TLegendEntry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLegendEntry

//______________________________________________________________________________
void TLink::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLink.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLink::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLink::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLink(void *p) {
      return  p ? new(p) ::TLink : new ::TLink;
   }
   static void *newArray_TLink(Long_t nElements, void *p) {
      return p ? new(p) ::TLink[nElements] : new ::TLink[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLink(void *p) {
      delete ((::TLink*)p);
   }
   static void deleteArray_TLink(void *p) {
      delete [] ((::TLink*)p);
   }
   static void destruct_TLink(void *p) {
      typedef ::TLink current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TLink

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMarker(void *p) {
      return  p ? new(p) ::TMarker : new ::TMarker;
   }
   static void *newArray_TMarker(Long_t nElements, void *p) {
      return p ? new(p) ::TMarker[nElements] : new ::TMarker[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMarker(void *p) {
      delete ((::TMarker*)p);
   }
   static void deleteArray_TMarker(void *p) {
      delete [] ((::TMarker*)p);
   }
   static void destruct_TMarker(void *p) {
      typedef ::TMarker current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMarker(TBuffer &buf, void *obj) {
      ((::TMarker*)obj)->::TMarker::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMarker

//______________________________________________________________________________
void TMathText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMathText.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMathText::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMathText::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMathText(void *p) {
      return  p ? new(p) ::TMathText : new ::TMathText;
   }
   static void *newArray_TMathText(Long_t nElements, void *p) {
      return p ? new(p) ::TMathText[nElements] : new ::TMathText[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMathText(void *p) {
      delete ((::TMathText*)p);
   }
   static void deleteArray_TMathText(void *p) {
      delete [] ((::TMathText*)p);
   }
   static void destruct_TMathText(void *p) {
      typedef ::TMathText current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMathText

//______________________________________________________________________________
void TPaveLabel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaveLabel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPaveLabel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPaveLabel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPaveLabel(void *p) {
      return  p ? new(p) ::TPaveLabel : new ::TPaveLabel;
   }
   static void *newArray_TPaveLabel(Long_t nElements, void *p) {
      return p ? new(p) ::TPaveLabel[nElements] : new ::TPaveLabel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPaveLabel(void *p) {
      delete ((::TPaveLabel*)p);
   }
   static void deleteArray_TPaveLabel(void *p) {
      delete [] ((::TPaveLabel*)p);
   }
   static void destruct_TPaveLabel(void *p) {
      typedef ::TPaveLabel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPaveLabel

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPaveStats(void *p) {
      return  p ? new(p) ::TPaveStats : new ::TPaveStats;
   }
   static void *newArray_TPaveStats(Long_t nElements, void *p) {
      return p ? new(p) ::TPaveStats[nElements] : new ::TPaveStats[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPaveStats(void *p) {
      delete ((::TPaveStats*)p);
   }
   static void deleteArray_TPaveStats(void *p) {
      delete [] ((::TPaveStats*)p);
   }
   static void destruct_TPaveStats(void *p) {
      typedef ::TPaveStats current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPaveStats(TBuffer &buf, void *obj) {
      ((::TPaveStats*)obj)->::TPaveStats::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPaveStats

//______________________________________________________________________________
void TPavesText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPavesText.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPavesText::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPavesText::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPavesText(void *p) {
      return  p ? new(p) ::TPavesText : new ::TPavesText;
   }
   static void *newArray_TPavesText(Long_t nElements, void *p) {
      return p ? new(p) ::TPavesText[nElements] : new ::TPavesText[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPavesText(void *p) {
      delete ((::TPavesText*)p);
   }
   static void deleteArray_TPavesText(void *p) {
      delete [] ((::TPavesText*)p);
   }
   static void destruct_TPavesText(void *p) {
      typedef ::TPavesText current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPavesText

//______________________________________________________________________________
void TPie::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPie.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPie::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPie::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPie(void *p) {
      return  p ? new(p) ::TPie : new ::TPie;
   }
   static void *newArray_TPie(Long_t nElements, void *p) {
      return p ? new(p) ::TPie[nElements] : new ::TPie[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPie(void *p) {
      delete ((::TPie*)p);
   }
   static void deleteArray_TPie(void *p) {
      delete [] ((::TPie*)p);
   }
   static void destruct_TPie(void *p) {
      typedef ::TPie current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPie

//______________________________________________________________________________
void TPieSlice::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPieSlice.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPieSlice::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPieSlice::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPieSlice(void *p) {
      return  p ? new(p) ::TPieSlice : new ::TPieSlice;
   }
   static void *newArray_TPieSlice(Long_t nElements, void *p) {
      return p ? new(p) ::TPieSlice[nElements] : new ::TPieSlice[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPieSlice(void *p) {
      delete ((::TPieSlice*)p);
   }
   static void deleteArray_TPieSlice(void *p) {
      delete [] ((::TPieSlice*)p);
   }
   static void destruct_TPieSlice(void *p) {
      typedef ::TPieSlice current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPieSlice

//______________________________________________________________________________
void TPoints::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPoints.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPoints::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPoints::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPoints(void *p) {
      return  p ? new(p) ::TPoints : new ::TPoints;
   }
   static void *newArray_TPoints(Long_t nElements, void *p) {
      return p ? new(p) ::TPoints[nElements] : new ::TPoints[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPoints(void *p) {
      delete ((::TPoints*)p);
   }
   static void deleteArray_TPoints(void *p) {
      delete [] ((::TPoints*)p);
   }
   static void destruct_TPoints(void *p) {
      typedef ::TPoints current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPoints

//______________________________________________________________________________
void TTF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTF.

   ::Error("TTF::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTF(void *p) {
      return  p ? new(p) ::TTF : new ::TTF;
   }
   static void *newArray_TTF(Long_t nElements, void *p) {
      return p ? new(p) ::TTF[nElements] : new ::TTF[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTF(void *p) {
      delete ((::TTF*)p);
   }
   static void deleteArray_TTF(void *p) {
      delete [] ((::TTF*)p);
   }
   static void destruct_TTF(void *p) {
      typedef ::TTF current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTF(TBuffer &buf, void *obj) {
      ((::TTF*)obj)->::TTF::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTF

namespace {
  void TriggerDictionaryInitialization_libGraf_Impl() {
    static const char* headers[] = {
"TArc.h",
"TArrow.h",
"TAttImage.h",
"TBox.h",
"TCandle.h",
"TCrown.h",
"TCurlyArc.h",
"TCurlyLine.h",
"TCutG.h",
"TDiamond.h",
"TEllipse.h",
"TFrame.h",
"TGaxis.h",
"TGraphPolar.h",
"TGraphPolargram.h",
"TGraphQQ.h",
"TImage.h",
"TImagePlugin.h",
"TLatex.h",
"TLegend.h",
"TLegendEntry.h",
"TLine.h",
"TLink.h",
"TMarker.h",
"TMathText.h",
"TPave.h",
"TPaveLabel.h",
"TPaveStats.h",
"TPaveText.h",
"TPavesText.h",
"TPie.h",
"TPieSlice.h",
"TPoints.h",
"TPolyLine.h",
"TTF.h",
"TText.h",
"TWbox.h",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGraf dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TArc.h"
#include "TArrow.h"
#include "TAttImage.h"
#include "TBox.h"
#include "TCandle.h"
#include "TCrown.h"
#include "TCurlyArc.h"
#include "TCurlyLine.h"
#include "TCutG.h"
#include "TDiamond.h"
#include "TEllipse.h"
#include "TFrame.h"
#include "TGaxis.h"
#include "TGraphPolar.h"
#include "TGraphPolargram.h"
#include "TGraphQQ.h"
#include "TImage.h"
#include "TImagePlugin.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TLegendEntry.h"
#include "TLine.h"
#include "TLink.h"
#include "TMarker.h"
#include "TMathText.h"
#include "TPave.h"
#include "TPaveLabel.h"
#include "TPaveStats.h"
#include "TPaveText.h"
#include "TPavesText.h"
#include "TPie.h"
#include "TPieSlice.h"
#include "TPoints.h"
#include "TPolyLine.h"
#include "TTF.h"
#include "TText.h"
#include "TWbox.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGraf",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGraf_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGraf_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGraf() {
  TriggerDictionaryInitialization_libGraf_Impl();
}
