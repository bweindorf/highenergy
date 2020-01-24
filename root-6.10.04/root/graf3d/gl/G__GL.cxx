// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GL

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
#include "TArcBall.h"
#include "TF2GL.h"
#include "TGL5D.h"
#include "TGL5DDataSetEditor.h"
#include "TGLAdapter.h"
#include "TGLAnnotation.h"
#include "TGLAutoRotator.h"
#include "TGLAxis.h"
#include "TGLAxisPainter.h"
#include "TGLBoundingBox.h"
#include "TGLBoxPainter.h"
#include "TGLCamera.h"
#include "TGLCameraGuide.h"
#include "TGLCameraOverlay.h"
#include "TGLClip.h"
#include "TGLClipSetEditor.h"
#include "TGLContext.h"
#include "TGLCylinder.h"
#include "TGLEmbeddedViewer.h"
#include "TGLEventHandler.h"
#include "TGLFBO.h"
#include "TGLFaceSet.h"
#include "TGLFontManager.h"
#include "TGLFormat.h"
#include "TGLH2PolyPainter.h"
#include "TGLHistPainter.h"
#include "TGLLegoPainter.h"
#include "TGLLightSet.h"
#include "TGLLightSetEditor.h"
#include "TGLLockable.h"
#include "TGLLogicalShape.h"
#include "TGLManip.h"
#include "TGLManipSet.h"
#include "TGLObject.h"
#include "TGLOrthoCamera.h"
#include "TGLOutput.h"
#include "TGLOverlay.h"
#include "TGLOverlayButton.h"
#include "TGLPShapeObj.h"
#include "TGLPShapeObjEditor.h"
#include "TGLPShapeRef.h"
#include "TGLPadPainter.h"
#include "TGLPadUtils.h"
#include "TGLParametric.h"
#include "TGLParametricEquationGL.h"
#include "TGLPerspectiveCamera.h"
#include "TGLPhysicalShape.h"
#include "TGLPlot3D.h"
#include "TGLPlotBox.h"
#include "TGLPlotCamera.h"
#include "TGLPlotPainter.h"
#include "TGLPolyLine.h"
#include "TGLPolyMarker.h"
#include "TGLQuadric.h"
#include "TGLRnrCtx.h"
#include "TGLRotateManip.h"
#include "TGLSAFrame.h"
#include "TGLSAViewer.h"
#include "TGLScaleManip.h"
#include "TGLScene.h"
#include "TGLSceneBase.h"
#include "TGLSceneInfo.h"
#include "TGLScenePad.h"
#include "TGLSelectBuffer.h"
#include "TGLSelectRecord.h"
#include "TGLSphere.h"
#include "TGLStopwatch.h"
#include "TGLSurfacePainter.h"
#include "TGLTF3Painter.h"
#include "TGLTH3Composition.h"
#include "TGLText.h"
#include "TGLTransManip.h"
#include "TGLUtil.h"
#include "TGLViewer.h"
#include "TGLViewerBase.h"
#include "TGLViewerEditor.h"
#include "TGLVoxelPainter.h"
#include "TGLWidget.h"
#include "TH2GL.h"
#include "TH3GL.h"
#include "TPointSet3DGL.h"
#include "TX11GL.h"
#include "RConfigure.h"

// Header files passed via #pragma extra_include

namespace Rgl {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *Rgl_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("Rgl", 0 /*version*/, "TGLUtil.h", 31,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &Rgl_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *Rgl_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_TArcBall(void *p = 0);
   static void *newArray_TArcBall(Long_t size, void *p);
   static void delete_TArcBall(void *p);
   static void deleteArray_TArcBall(void *p);
   static void destruct_TArcBall(void *p);
   static void streamer_TArcBall(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArcBall*)
   {
      ::TArcBall *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArcBall >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArcBall", ::TArcBall::Class_Version(), "TArcBall.h", 19,
                  typeid(::TArcBall), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArcBall::Dictionary, isa_proxy, 16,
                  sizeof(::TArcBall) );
      instance.SetNew(&new_TArcBall);
      instance.SetNewArray(&newArray_TArcBall);
      instance.SetDelete(&delete_TArcBall);
      instance.SetDeleteArray(&deleteArray_TArcBall);
      instance.SetDestructor(&destruct_TArcBall);
      instance.SetStreamerFunc(&streamer_TArcBall);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArcBall*)
   {
      return GenerateInitInstanceLocal((::TArcBall*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArcBall*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLVertex3(void *p = 0);
   static void *newArray_TGLVertex3(Long_t size, void *p);
   static void delete_TGLVertex3(void *p);
   static void deleteArray_TGLVertex3(void *p);
   static void destruct_TGLVertex3(void *p);
   static void streamer_TGLVertex3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLVertex3*)
   {
      ::TGLVertex3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLVertex3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLVertex3", ::TGLVertex3::Class_Version(), "TGLUtil.h", 82,
                  typeid(::TGLVertex3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLVertex3::Dictionary, isa_proxy, 16,
                  sizeof(::TGLVertex3) );
      instance.SetNew(&new_TGLVertex3);
      instance.SetNewArray(&newArray_TGLVertex3);
      instance.SetDelete(&delete_TGLVertex3);
      instance.SetDeleteArray(&deleteArray_TGLVertex3);
      instance.SetDestructor(&destruct_TGLVertex3);
      instance.SetStreamerFunc(&streamer_TGLVertex3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLVertex3*)
   {
      return GenerateInitInstanceLocal((::TGLVertex3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLVertex3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLVector3(void *p = 0);
   static void *newArray_TGLVector3(Long_t size, void *p);
   static void delete_TGLVector3(void *p);
   static void deleteArray_TGLVector3(void *p);
   static void destruct_TGLVector3(void *p);
   static void streamer_TGLVector3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLVector3*)
   {
      ::TGLVector3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLVector3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLVector3", ::TGLVector3::Class_Version(), "TGLUtil.h", 246,
                  typeid(::TGLVector3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLVector3::Dictionary, isa_proxy, 16,
                  sizeof(::TGLVector3) );
      instance.SetNew(&new_TGLVector3);
      instance.SetNewArray(&newArray_TGLVector3);
      instance.SetDelete(&delete_TGLVector3);
      instance.SetDeleteArray(&deleteArray_TGLVector3);
      instance.SetDestructor(&destruct_TGLVector3);
      instance.SetStreamerFunc(&streamer_TGLVector3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLVector3*)
   {
      return GenerateInitInstanceLocal((::TGLVector3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLVector3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLLine3(void *p);
   static void deleteArray_TGLLine3(void *p);
   static void destruct_TGLLine3(void *p);
   static void streamer_TGLLine3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLLine3*)
   {
      ::TGLLine3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLLine3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLLine3", ::TGLLine3::Class_Version(), "TGLUtil.h", 387,
                  typeid(::TGLLine3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLLine3::Dictionary, isa_proxy, 16,
                  sizeof(::TGLLine3) );
      instance.SetDelete(&delete_TGLLine3);
      instance.SetDeleteArray(&deleteArray_TGLLine3);
      instance.SetDestructor(&destruct_TGLLine3);
      instance.SetStreamerFunc(&streamer_TGLLine3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLLine3*)
   {
      return GenerateInitInstanceLocal((::TGLLine3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLLine3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLRect(void *p = 0);
   static void *newArray_TGLRect(Long_t size, void *p);
   static void delete_TGLRect(void *p);
   static void deleteArray_TGLRect(void *p);
   static void destruct_TGLRect(void *p);
   static void streamer_TGLRect(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLRect*)
   {
      ::TGLRect *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLRect >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLRect", ::TGLRect::Class_Version(), "TGLUtil.h", 422,
                  typeid(::TGLRect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLRect::Dictionary, isa_proxy, 16,
                  sizeof(::TGLRect) );
      instance.SetNew(&new_TGLRect);
      instance.SetNewArray(&newArray_TGLRect);
      instance.SetDelete(&delete_TGLRect);
      instance.SetDeleteArray(&deleteArray_TGLRect);
      instance.SetDestructor(&destruct_TGLRect);
      instance.SetStreamerFunc(&streamer_TGLRect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLRect*)
   {
      return GenerateInitInstanceLocal((::TGLRect*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLRect*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLPlane(void *p = 0);
   static void *newArray_TGLPlane(Long_t size, void *p);
   static void delete_TGLPlane(void *p);
   static void deleteArray_TGLPlane(void *p);
   static void destruct_TGLPlane(void *p);
   static void streamer_TGLPlane(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPlane*)
   {
      ::TGLPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPlane", ::TGLPlane::Class_Version(), "TGLUtil.h", 525,
                  typeid(::TGLPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPlane::Dictionary, isa_proxy, 16,
                  sizeof(::TGLPlane) );
      instance.SetNew(&new_TGLPlane);
      instance.SetNewArray(&newArray_TGLPlane);
      instance.SetDelete(&delete_TGLPlane);
      instance.SetDeleteArray(&deleteArray_TGLPlane);
      instance.SetDestructor(&destruct_TGLPlane);
      instance.SetStreamerFunc(&streamer_TGLPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPlane*)
   {
      return GenerateInitInstanceLocal((::TGLPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLMatrix(void *p = 0);
   static void *newArray_TGLMatrix(Long_t size, void *p);
   static void delete_TGLMatrix(void *p);
   static void deleteArray_TGLMatrix(void *p);
   static void destruct_TGLMatrix(void *p);
   static void streamer_TGLMatrix(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLMatrix*)
   {
      ::TGLMatrix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLMatrix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLMatrix", ::TGLMatrix::Class_Version(), "TGLUtil.h", 596,
                  typeid(::TGLMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLMatrix::Dictionary, isa_proxy, 16,
                  sizeof(::TGLMatrix) );
      instance.SetNew(&new_TGLMatrix);
      instance.SetNewArray(&newArray_TGLMatrix);
      instance.SetDelete(&delete_TGLMatrix);
      instance.SetDeleteArray(&deleteArray_TGLMatrix);
      instance.SetDestructor(&destruct_TGLMatrix);
      instance.SetStreamerFunc(&streamer_TGLMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLMatrix*)
   {
      return GenerateInitInstanceLocal((::TGLMatrix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLMatrix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLColor(void *p = 0);
   static void *newArray_TGLColor(Long_t size, void *p);
   static void delete_TGLColor(void *p);
   static void deleteArray_TGLColor(void *p);
   static void destruct_TGLColor(void *p);
   static void streamer_TGLColor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLColor*)
   {
      ::TGLColor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLColor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLColor", ::TGLColor::Class_Version(), "TGLUtil.h", 783,
                  typeid(::TGLColor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLColor::Dictionary, isa_proxy, 16,
                  sizeof(::TGLColor) );
      instance.SetNew(&new_TGLColor);
      instance.SetNewArray(&newArray_TGLColor);
      instance.SetDelete(&delete_TGLColor);
      instance.SetDeleteArray(&deleteArray_TGLColor);
      instance.SetDestructor(&destruct_TGLColor);
      instance.SetStreamerFunc(&streamer_TGLColor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLColor*)
   {
      return GenerateInitInstanceLocal((::TGLColor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLColor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLColorSet(void *p = 0);
   static void *newArray_TGLColorSet(Long_t size, void *p);
   static void delete_TGLColorSet(void *p);
   static void deleteArray_TGLColorSet(void *p);
   static void destruct_TGLColorSet(void *p);
   static void streamer_TGLColorSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLColorSet*)
   {
      ::TGLColorSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLColorSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLColorSet", ::TGLColorSet::Class_Version(), "TGLUtil.h", 834,
                  typeid(::TGLColorSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLColorSet::Dictionary, isa_proxy, 16,
                  sizeof(::TGLColorSet) );
      instance.SetNew(&new_TGLColorSet);
      instance.SetNewArray(&newArray_TGLColorSet);
      instance.SetDelete(&delete_TGLColorSet);
      instance.SetDeleteArray(&deleteArray_TGLColorSet);
      instance.SetDestructor(&destruct_TGLColorSet);
      instance.SetStreamerFunc(&streamer_TGLColorSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLColorSet*)
   {
      return GenerateInitInstanceLocal((::TGLColorSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLColorSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLUtil(void *p);
   static void deleteArray_TGLUtil(void *p);
   static void destruct_TGLUtil(void *p);
   static void streamer_TGLUtil(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLUtil*)
   {
      ::TGLUtil *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLUtil >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLUtil", ::TGLUtil::Class_Version(), "TGLUtil.h", 876,
                  typeid(::TGLUtil), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLUtil::Dictionary, isa_proxy, 16,
                  sizeof(::TGLUtil) );
      instance.SetDelete(&delete_TGLUtil);
      instance.SetDeleteArray(&deleteArray_TGLUtil);
      instance.SetDestructor(&destruct_TGLUtil);
      instance.SetStreamerFunc(&streamer_TGLUtil);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLUtil*)
   {
      return GenerateInitInstanceLocal((::TGLUtil*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLUtil*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLUtilcLcLTColorLocker(void *p = 0);
   static void *newArray_TGLUtilcLcLTColorLocker(Long_t size, void *p);
   static void delete_TGLUtilcLcLTColorLocker(void *p);
   static void deleteArray_TGLUtilcLcLTColorLocker(void *p);
   static void destruct_TGLUtilcLcLTColorLocker(void *p);
   static void streamer_TGLUtilcLcLTColorLocker(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLUtil::TColorLocker*)
   {
      ::TGLUtil::TColorLocker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLUtil::TColorLocker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLUtil::TColorLocker", ::TGLUtil::TColorLocker::Class_Version(), "TGLUtil.h", 879,
                  typeid(::TGLUtil::TColorLocker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLUtil::TColorLocker::Dictionary, isa_proxy, 16,
                  sizeof(::TGLUtil::TColorLocker) );
      instance.SetNew(&new_TGLUtilcLcLTColorLocker);
      instance.SetNewArray(&newArray_TGLUtilcLcLTColorLocker);
      instance.SetDelete(&delete_TGLUtilcLcLTColorLocker);
      instance.SetDeleteArray(&deleteArray_TGLUtilcLcLTColorLocker);
      instance.SetDestructor(&destruct_TGLUtilcLcLTColorLocker);
      instance.SetStreamerFunc(&streamer_TGLUtilcLcLTColorLocker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLUtil::TColorLocker*)
   {
      return GenerateInitInstanceLocal((::TGLUtil::TColorLocker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLUtil::TColorLocker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLUtilcLcLTDrawQualityModifier(void *p);
   static void deleteArray_TGLUtilcLcLTDrawQualityModifier(void *p);
   static void destruct_TGLUtilcLcLTDrawQualityModifier(void *p);
   static void streamer_TGLUtilcLcLTDrawQualityModifier(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLUtil::TDrawQualityModifier*)
   {
      ::TGLUtil::TDrawQualityModifier *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLUtil::TDrawQualityModifier >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLUtil::TDrawQualityModifier", ::TGLUtil::TDrawQualityModifier::Class_Version(), "TGLUtil.h", 888,
                  typeid(::TGLUtil::TDrawQualityModifier), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLUtil::TDrawQualityModifier::Dictionary, isa_proxy, 16,
                  sizeof(::TGLUtil::TDrawQualityModifier) );
      instance.SetDelete(&delete_TGLUtilcLcLTDrawQualityModifier);
      instance.SetDeleteArray(&deleteArray_TGLUtilcLcLTDrawQualityModifier);
      instance.SetDestructor(&destruct_TGLUtilcLcLTDrawQualityModifier);
      instance.SetStreamerFunc(&streamer_TGLUtilcLcLTDrawQualityModifier);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLUtil::TDrawQualityModifier*)
   {
      return GenerateInitInstanceLocal((::TGLUtil::TDrawQualityModifier*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityModifier*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLUtilcLcLTDrawQualityScaler(void *p);
   static void deleteArray_TGLUtilcLcLTDrawQualityScaler(void *p);
   static void destruct_TGLUtilcLcLTDrawQualityScaler(void *p);
   static void streamer_TGLUtilcLcLTDrawQualityScaler(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLUtil::TDrawQualityScaler*)
   {
      ::TGLUtil::TDrawQualityScaler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLUtil::TDrawQualityScaler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLUtil::TDrawQualityScaler", ::TGLUtil::TDrawQualityScaler::Class_Version(), "TGLUtil.h", 901,
                  typeid(::TGLUtil::TDrawQualityScaler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLUtil::TDrawQualityScaler::Dictionary, isa_proxy, 16,
                  sizeof(::TGLUtil::TDrawQualityScaler) );
      instance.SetDelete(&delete_TGLUtilcLcLTDrawQualityScaler);
      instance.SetDeleteArray(&deleteArray_TGLUtilcLcLTDrawQualityScaler);
      instance.SetDestructor(&destruct_TGLUtilcLcLTDrawQualityScaler);
      instance.SetStreamerFunc(&streamer_TGLUtilcLcLTDrawQualityScaler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLUtil::TDrawQualityScaler*)
   {
      return GenerateInitInstanceLocal((::TGLUtil::TDrawQualityScaler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityScaler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLSelectionBuffer(void *p = 0);
   static void *newArray_TGLSelectionBuffer(Long_t size, void *p);
   static void delete_TGLSelectionBuffer(void *p);
   static void deleteArray_TGLSelectionBuffer(void *p);
   static void destruct_TGLSelectionBuffer(void *p);
   static void streamer_TGLSelectionBuffer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSelectionBuffer*)
   {
      ::TGLSelectionBuffer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSelectionBuffer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSelectionBuffer", ::TGLSelectionBuffer::Class_Version(), "TGLUtil.h", 1131,
                  typeid(::TGLSelectionBuffer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSelectionBuffer::Dictionary, isa_proxy, 16,
                  sizeof(::TGLSelectionBuffer) );
      instance.SetNew(&new_TGLSelectionBuffer);
      instance.SetNewArray(&newArray_TGLSelectionBuffer);
      instance.SetDelete(&delete_TGLSelectionBuffer);
      instance.SetDeleteArray(&deleteArray_TGLSelectionBuffer);
      instance.SetDestructor(&destruct_TGLSelectionBuffer);
      instance.SetStreamerFunc(&streamer_TGLSelectionBuffer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSelectionBuffer*)
   {
      return GenerateInitInstanceLocal((::TGLSelectionBuffer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSelectionBuffer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLBoundingBox(void *p = 0);
   static void *newArray_TGLBoundingBox(Long_t size, void *p);
   static void delete_TGLBoundingBox(void *p);
   static void deleteArray_TGLBoundingBox(void *p);
   static void destruct_TGLBoundingBox(void *p);
   static void streamer_TGLBoundingBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLBoundingBox*)
   {
      ::TGLBoundingBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLBoundingBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLBoundingBox", ::TGLBoundingBox::Class_Version(), "TGLBoundingBox.h", 30,
                  typeid(::TGLBoundingBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLBoundingBox::Dictionary, isa_proxy, 16,
                  sizeof(::TGLBoundingBox) );
      instance.SetNew(&new_TGLBoundingBox);
      instance.SetNewArray(&newArray_TGLBoundingBox);
      instance.SetDelete(&delete_TGLBoundingBox);
      instance.SetDeleteArray(&deleteArray_TGLBoundingBox);
      instance.SetDestructor(&destruct_TGLBoundingBox);
      instance.SetStreamerFunc(&streamer_TGLBoundingBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLBoundingBox*)
   {
      return GenerateInitInstanceLocal((::TGLBoundingBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLBoundingBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLLogicalShape(void *p);
   static void deleteArray_TGLLogicalShape(void *p);
   static void destruct_TGLLogicalShape(void *p);
   static void streamer_TGLLogicalShape(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLLogicalShape*)
   {
      ::TGLLogicalShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLLogicalShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLLogicalShape", ::TGLLogicalShape::Class_Version(), "TGLLogicalShape.h", 29,
                  typeid(::TGLLogicalShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLLogicalShape::Dictionary, isa_proxy, 16,
                  sizeof(::TGLLogicalShape) );
      instance.SetDelete(&delete_TGLLogicalShape);
      instance.SetDeleteArray(&deleteArray_TGLLogicalShape);
      instance.SetDestructor(&destruct_TGLLogicalShape);
      instance.SetStreamerFunc(&streamer_TGLLogicalShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLLogicalShape*)
   {
      return GenerateInitInstanceLocal((::TGLLogicalShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLLogicalShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLObject(void *p);
   static void deleteArray_TGLObject(void *p);
   static void destruct_TGLObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLObject*)
   {
      ::TGLObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLObject", ::TGLObject::Class_Version(), "TGLObject.h", 21,
                  typeid(::TGLObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLObject::Dictionary, isa_proxy, 4,
                  sizeof(::TGLObject) );
      instance.SetDelete(&delete_TGLObject);
      instance.SetDeleteArray(&deleteArray_TGLObject);
      instance.SetDestructor(&destruct_TGLObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLObject*)
   {
      return GenerateInitInstanceLocal((::TGLObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLPlotBox(void *p);
   static void deleteArray_TGLPlotBox(void *p);
   static void destruct_TGLPlotBox(void *p);
   static void streamer_TGLPlotBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPlotBox*)
   {
      ::TGLPlotBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPlotBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPlotBox", ::TGLPlotBox::Class_Version(), "TGLPlotBox.h", 26,
                  typeid(::TGLPlotBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPlotBox::Dictionary, isa_proxy, 16,
                  sizeof(::TGLPlotBox) );
      instance.SetDelete(&delete_TGLPlotBox);
      instance.SetDeleteArray(&deleteArray_TGLPlotBox);
      instance.SetDestructor(&destruct_TGLPlotBox);
      instance.SetStreamerFunc(&streamer_TGLPlotBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPlotBox*)
   {
      return GenerateInitInstanceLocal((::TGLPlotBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPlotBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLBoxCut(void *p);
   static void deleteArray_TGLBoxCut(void *p);
   static void destruct_TGLBoxCut(void *p);
   static void streamer_TGLBoxCut(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLBoxCut*)
   {
      ::TGLBoxCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLBoxCut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLBoxCut", ::TGLBoxCut::Class_Version(), "TGLPlotPainter.h", 38,
                  typeid(::TGLBoxCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLBoxCut::Dictionary, isa_proxy, 16,
                  sizeof(::TGLBoxCut) );
      instance.SetDelete(&delete_TGLBoxCut);
      instance.SetDeleteArray(&deleteArray_TGLBoxCut);
      instance.SetDestructor(&destruct_TGLBoxCut);
      instance.SetStreamerFunc(&streamer_TGLBoxCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLBoxCut*)
   {
      return GenerateInitInstanceLocal((::TGLBoxCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLBoxCut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLTH3Slice(void *p);
   static void deleteArray_TGLTH3Slice(void *p);
   static void destruct_TGLTH3Slice(void *p);
   static void streamer_TGLTH3Slice(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLTH3Slice*)
   {
      ::TGLTH3Slice *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLTH3Slice >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLTH3Slice", ::TGLTH3Slice::Class_Version(), "TGLPlotPainter.h", 99,
                  typeid(::TGLTH3Slice), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLTH3Slice::Dictionary, isa_proxy, 16,
                  sizeof(::TGLTH3Slice) );
      instance.SetDelete(&delete_TGLTH3Slice);
      instance.SetDeleteArray(&deleteArray_TGLTH3Slice);
      instance.SetDestructor(&destruct_TGLTH3Slice);
      instance.SetStreamerFunc(&streamer_TGLTH3Slice);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLTH3Slice*)
   {
      return GenerateInitInstanceLocal((::TGLTH3Slice*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLTH3Slice*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLPlotPainter(void *p);
   static void deleteArray_TGLPlotPainter(void *p);
   static void destruct_TGLPlotPainter(void *p);
   static void streamer_TGLPlotPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPlotPainter*)
   {
      ::TGLPlotPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPlotPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPlotPainter", ::TGLPlotPainter::Class_Version(), "TGLPlotPainter.h", 181,
                  typeid(::TGLPlotPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPlotPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLPlotPainter) );
      instance.SetDelete(&delete_TGLPlotPainter);
      instance.SetDeleteArray(&deleteArray_TGLPlotPainter);
      instance.SetDestructor(&destruct_TGLPlotPainter);
      instance.SetStreamerFunc(&streamer_TGLPlotPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPlotPainter*)
   {
      return GenerateInitInstanceLocal((::TGLPlotPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPlotPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLPlotCoordinates(void *p = 0);
   static void *newArray_TGLPlotCoordinates(Long_t size, void *p);
   static void delete_TGLPlotCoordinates(void *p);
   static void deleteArray_TGLPlotCoordinates(void *p);
   static void destruct_TGLPlotCoordinates(void *p);
   static void streamer_TGLPlotCoordinates(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPlotCoordinates*)
   {
      ::TGLPlotCoordinates *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPlotCoordinates >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPlotCoordinates", ::TGLPlotCoordinates::Class_Version(), "TGLPlotPainter.h", 310,
                  typeid(::TGLPlotCoordinates), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPlotCoordinates::Dictionary, isa_proxy, 16,
                  sizeof(::TGLPlotCoordinates) );
      instance.SetNew(&new_TGLPlotCoordinates);
      instance.SetNewArray(&newArray_TGLPlotCoordinates);
      instance.SetDelete(&delete_TGLPlotCoordinates);
      instance.SetDeleteArray(&deleteArray_TGLPlotCoordinates);
      instance.SetDestructor(&destruct_TGLPlotCoordinates);
      instance.SetStreamerFunc(&streamer_TGLPlotCoordinates);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPlotCoordinates*)
   {
      return GenerateInitInstanceLocal((::TGLPlotCoordinates*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPlotCoordinates*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLPlot3D(void *p);
   static void deleteArray_TGLPlot3D(void *p);
   static void destruct_TGLPlot3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPlot3D*)
   {
      ::TGLPlot3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPlot3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPlot3D", ::TGLPlot3D::Class_Version(), "TGLPlot3D.h", 22,
                  typeid(::TGLPlot3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPlot3D::Dictionary, isa_proxy, 4,
                  sizeof(::TGLPlot3D) );
      instance.SetDelete(&delete_TGLPlot3D);
      instance.SetDeleteArray(&deleteArray_TGLPlot3D);
      instance.SetDestructor(&destruct_TGLPlot3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPlot3D*)
   {
      return GenerateInitInstanceLocal((::TGLPlot3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPlot3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF2GL(void *p = 0);
   static void *newArray_TF2GL(Long_t size, void *p);
   static void delete_TF2GL(void *p);
   static void deleteArray_TF2GL(void *p);
   static void destruct_TF2GL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF2GL*)
   {
      ::TF2GL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF2GL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TF2GL", ::TF2GL::Class_Version(), "TF2GL.h", 21,
                  typeid(::TF2GL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF2GL::Dictionary, isa_proxy, 4,
                  sizeof(::TF2GL) );
      instance.SetNew(&new_TF2GL);
      instance.SetNewArray(&newArray_TF2GL);
      instance.SetDelete(&delete_TF2GL);
      instance.SetDeleteArray(&deleteArray_TF2GL);
      instance.SetDestructor(&destruct_TF2GL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF2GL*)
   {
      return GenerateInitInstanceLocal((::TF2GL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TF2GL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLPlotCamera(void *p = 0);
   static void *newArray_TGLPlotCamera(Long_t size, void *p);
   static void delete_TGLPlotCamera(void *p);
   static void deleteArray_TGLPlotCamera(void *p);
   static void destruct_TGLPlotCamera(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPlotCamera*)
   {
      ::TGLPlotCamera *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPlotCamera >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPlotCamera", ::TGLPlotCamera::Class_Version(), "TGLPlotCamera.h", 21,
                  typeid(::TGLPlotCamera), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPlotCamera::Dictionary, isa_proxy, 4,
                  sizeof(::TGLPlotCamera) );
      instance.SetNew(&new_TGLPlotCamera);
      instance.SetNewArray(&newArray_TGLPlotCamera);
      instance.SetDelete(&delete_TGLPlotCamera);
      instance.SetDeleteArray(&deleteArray_TGLPlotCamera);
      instance.SetDestructor(&destruct_TGLPlotCamera);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPlotCamera*)
   {
      return GenerateInitInstanceLocal((::TGLPlotCamera*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPlotCamera*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLHistPainter(void *p);
   static void deleteArray_TGLHistPainter(void *p);
   static void destruct_TGLHistPainter(void *p);
   static void streamer_TGLHistPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLHistPainter*)
   {
      ::TGLHistPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLHistPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLHistPainter", ::TGLHistPainter::Class_Version(), "TGLHistPainter.h", 40,
                  typeid(::TGLHistPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLHistPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLHistPainter) );
      instance.SetDelete(&delete_TGLHistPainter);
      instance.SetDeleteArray(&deleteArray_TGLHistPainter);
      instance.SetDestructor(&destruct_TGLHistPainter);
      instance.SetStreamerFunc(&streamer_TGLHistPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLHistPainter*)
   {
      return GenerateInitInstanceLocal((::TGLHistPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLHistPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGL5DDataSet(void *p);
   static void deleteArray_TGL5DDataSet(void *p);
   static void destruct_TGL5DDataSet(void *p);
   static void streamer_TGL5DDataSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGL5DDataSet*)
   {
      ::TGL5DDataSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGL5DDataSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGL5DDataSet", ::TGL5DDataSet::Class_Version(), "TGL5D.h", 28,
                  typeid(::TGL5DDataSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGL5DDataSet::Dictionary, isa_proxy, 16,
                  sizeof(::TGL5DDataSet) );
      instance.SetDelete(&delete_TGL5DDataSet);
      instance.SetDeleteArray(&deleteArray_TGL5DDataSet);
      instance.SetDestructor(&destruct_TGL5DDataSet);
      instance.SetStreamerFunc(&streamer_TGL5DDataSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGL5DDataSet*)
   {
      return GenerateInitInstanceLocal((::TGL5DDataSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGL5DDataSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGL5DDataSetEditor(void *p = 0);
   static void *newArray_TGL5DDataSetEditor(Long_t size, void *p);
   static void delete_TGL5DDataSetEditor(void *p);
   static void deleteArray_TGL5DDataSetEditor(void *p);
   static void destruct_TGL5DDataSetEditor(void *p);
   static void streamer_TGL5DDataSetEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGL5DDataSetEditor*)
   {
      ::TGL5DDataSetEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGL5DDataSetEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGL5DDataSetEditor", ::TGL5DDataSetEditor::Class_Version(), "TGL5DDataSetEditor.h", 30,
                  typeid(::TGL5DDataSetEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGL5DDataSetEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGL5DDataSetEditor) );
      instance.SetNew(&new_TGL5DDataSetEditor);
      instance.SetNewArray(&newArray_TGL5DDataSetEditor);
      instance.SetDelete(&delete_TGL5DDataSetEditor);
      instance.SetDeleteArray(&deleteArray_TGL5DDataSetEditor);
      instance.SetDestructor(&destruct_TGL5DDataSetEditor);
      instance.SetStreamerFunc(&streamer_TGL5DDataSetEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGL5DDataSetEditor*)
   {
      return GenerateInitInstanceLocal((::TGL5DDataSetEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGL5DDataSetEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLAdapter(void *p = 0);
   static void *newArray_TGLAdapter(Long_t size, void *p);
   static void delete_TGLAdapter(void *p);
   static void deleteArray_TGLAdapter(void *p);
   static void destruct_TGLAdapter(void *p);
   static void streamer_TGLAdapter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLAdapter*)
   {
      ::TGLAdapter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLAdapter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLAdapter", ::TGLAdapter::Class_Version(), "TGLAdapter.h", 17,
                  typeid(::TGLAdapter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLAdapter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLAdapter) );
      instance.SetNew(&new_TGLAdapter);
      instance.SetNewArray(&newArray_TGLAdapter);
      instance.SetDelete(&delete_TGLAdapter);
      instance.SetDeleteArray(&deleteArray_TGLAdapter);
      instance.SetDestructor(&destruct_TGLAdapter);
      instance.SetStreamerFunc(&streamer_TGLAdapter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLAdapter*)
   {
      return GenerateInitInstanceLocal((::TGLAdapter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLAdapter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLOverlayElement(void *p);
   static void deleteArray_TGLOverlayElement(void *p);
   static void destruct_TGLOverlayElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLOverlayElement*)
   {
      ::TGLOverlayElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLOverlayElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLOverlayElement", ::TGLOverlayElement::Class_Version(), "TGLOverlay.h", 22,
                  typeid(::TGLOverlayElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLOverlayElement::Dictionary, isa_proxy, 4,
                  sizeof(::TGLOverlayElement) );
      instance.SetDelete(&delete_TGLOverlayElement);
      instance.SetDeleteArray(&deleteArray_TGLOverlayElement);
      instance.SetDestructor(&destruct_TGLOverlayElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLOverlayElement*)
   {
      return GenerateInitInstanceLocal((::TGLOverlayElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLOverlayElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLOverlayList(void *p = 0);
   static void *newArray_TGLOverlayList(Long_t size, void *p);
   static void delete_TGLOverlayList(void *p);
   static void deleteArray_TGLOverlayList(void *p);
   static void destruct_TGLOverlayList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLOverlayList*)
   {
      ::TGLOverlayList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLOverlayList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLOverlayList", ::TGLOverlayList::Class_Version(), "TGLOverlay.h", 65,
                  typeid(::TGLOverlayList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLOverlayList::Dictionary, isa_proxy, 4,
                  sizeof(::TGLOverlayList) );
      instance.SetNew(&new_TGLOverlayList);
      instance.SetNewArray(&newArray_TGLOverlayList);
      instance.SetDelete(&delete_TGLOverlayList);
      instance.SetDeleteArray(&deleteArray_TGLOverlayList);
      instance.SetDestructor(&destruct_TGLOverlayList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLOverlayList*)
   {
      return GenerateInitInstanceLocal((::TGLOverlayList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLOverlayList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLFont(void *p = 0);
   static void *newArray_TGLFont(Long_t size, void *p);
   static void delete_TGLFont(void *p);
   static void deleteArray_TGLFont(void *p);
   static void destruct_TGLFont(void *p);
   static void streamer_TGLFont(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLFont*)
   {
      ::TGLFont *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLFont >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLFont", ::TGLFont::Class_Version(), "TGLFontManager.h", 23,
                  typeid(::TGLFont), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLFont::Dictionary, isa_proxy, 16,
                  sizeof(::TGLFont) );
      instance.SetNew(&new_TGLFont);
      instance.SetNewArray(&newArray_TGLFont);
      instance.SetDelete(&delete_TGLFont);
      instance.SetDeleteArray(&deleteArray_TGLFont);
      instance.SetDestructor(&destruct_TGLFont);
      instance.SetStreamerFunc(&streamer_TGLFont);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLFont*)
   {
      return GenerateInitInstanceLocal((::TGLFont*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLFont*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLFontManager(void *p = 0);
   static void *newArray_TGLFontManager(Long_t size, void *p);
   static void delete_TGLFontManager(void *p);
   static void deleteArray_TGLFontManager(void *p);
   static void destruct_TGLFontManager(void *p);
   static void streamer_TGLFontManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLFontManager*)
   {
      ::TGLFontManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLFontManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLFontManager", ::TGLFontManager::Class_Version(), "TGLFontManager.h", 119,
                  typeid(::TGLFontManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLFontManager::Dictionary, isa_proxy, 16,
                  sizeof(::TGLFontManager) );
      instance.SetNew(&new_TGLFontManager);
      instance.SetNewArray(&newArray_TGLFontManager);
      instance.SetDelete(&delete_TGLFontManager);
      instance.SetDeleteArray(&deleteArray_TGLFontManager);
      instance.SetDestructor(&destruct_TGLFontManager);
      instance.SetStreamerFunc(&streamer_TGLFontManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLFontManager*)
   {
      return GenerateInitInstanceLocal((::TGLFontManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLFontManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLAnnotation(void *p);
   static void deleteArray_TGLAnnotation(void *p);
   static void destruct_TGLAnnotation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLAnnotation*)
   {
      ::TGLAnnotation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLAnnotation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLAnnotation", ::TGLAnnotation::Class_Version(), "TGLAnnotation.h", 25,
                  typeid(::TGLAnnotation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLAnnotation::Dictionary, isa_proxy, 4,
                  sizeof(::TGLAnnotation) );
      instance.SetDelete(&delete_TGLAnnotation);
      instance.SetDeleteArray(&deleteArray_TGLAnnotation);
      instance.SetDestructor(&destruct_TGLAnnotation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLAnnotation*)
   {
      return GenerateInitInstanceLocal((::TGLAnnotation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLAnnotation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLAutoRotator(void *p);
   static void deleteArray_TGLAutoRotator(void *p);
   static void destruct_TGLAutoRotator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLAutoRotator*)
   {
      ::TGLAutoRotator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLAutoRotator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLAutoRotator", ::TGLAutoRotator::Class_Version(), "TGLAutoRotator.h", 23,
                  typeid(::TGLAutoRotator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLAutoRotator::Dictionary, isa_proxy, 4,
                  sizeof(::TGLAutoRotator) );
      instance.SetDelete(&delete_TGLAutoRotator);
      instance.SetDeleteArray(&deleteArray_TGLAutoRotator);
      instance.SetDestructor(&destruct_TGLAutoRotator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLAutoRotator*)
   {
      return GenerateInitInstanceLocal((::TGLAutoRotator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLAutoRotator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLAxis(void *p = 0);
   static void *newArray_TGLAxis(Long_t size, void *p);
   static void delete_TGLAxis(void *p);
   static void deleteArray_TGLAxis(void *p);
   static void destruct_TGLAxis(void *p);
   static void streamer_TGLAxis(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLAxis*)
   {
      ::TGLAxis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLAxis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLAxis", ::TGLAxis::Class_Version(), "TGLAxis.h", 22,
                  typeid(::TGLAxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLAxis::Dictionary, isa_proxy, 16,
                  sizeof(::TGLAxis) );
      instance.SetNew(&new_TGLAxis);
      instance.SetNewArray(&newArray_TGLAxis);
      instance.SetDelete(&delete_TGLAxis);
      instance.SetDeleteArray(&deleteArray_TGLAxis);
      instance.SetDestructor(&destruct_TGLAxis);
      instance.SetStreamerFunc(&streamer_TGLAxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLAxis*)
   {
      return GenerateInitInstanceLocal((::TGLAxis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLAxis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLAxisPainter(void *p = 0);
   static void *newArray_TGLAxisPainter(Long_t size, void *p);
   static void delete_TGLAxisPainter(void *p);
   static void deleteArray_TGLAxisPainter(void *p);
   static void destruct_TGLAxisPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLAxisPainter*)
   {
      ::TGLAxisPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLAxisPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLAxisPainter", ::TGLAxisPainter::Class_Version(), "TGLAxisPainter.h", 29,
                  typeid(::TGLAxisPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLAxisPainter::Dictionary, isa_proxy, 4,
                  sizeof(::TGLAxisPainter) );
      instance.SetNew(&new_TGLAxisPainter);
      instance.SetNewArray(&newArray_TGLAxisPainter);
      instance.SetDelete(&delete_TGLAxisPainter);
      instance.SetDeleteArray(&deleteArray_TGLAxisPainter);
      instance.SetDestructor(&destruct_TGLAxisPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLAxisPainter*)
   {
      return GenerateInitInstanceLocal((::TGLAxisPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLAxisPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLAxisPainterBox(void *p = 0);
   static void *newArray_TGLAxisPainterBox(Long_t size, void *p);
   static void delete_TGLAxisPainterBox(void *p);
   static void deleteArray_TGLAxisPainterBox(void *p);
   static void destruct_TGLAxisPainterBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLAxisPainterBox*)
   {
      ::TGLAxisPainterBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLAxisPainterBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLAxisPainterBox", ::TGLAxisPainterBox::Class_Version(), "TGLAxisPainter.h", 138,
                  typeid(::TGLAxisPainterBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLAxisPainterBox::Dictionary, isa_proxy, 4,
                  sizeof(::TGLAxisPainterBox) );
      instance.SetNew(&new_TGLAxisPainterBox);
      instance.SetNewArray(&newArray_TGLAxisPainterBox);
      instance.SetDelete(&delete_TGLAxisPainterBox);
      instance.SetDeleteArray(&deleteArray_TGLAxisPainterBox);
      instance.SetDestructor(&destruct_TGLAxisPainterBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLAxisPainterBox*)
   {
      return GenerateInitInstanceLocal((::TGLAxisPainterBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLAxisPainterBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLQuadric(void *p = 0);
   static void *newArray_TGLQuadric(Long_t size, void *p);
   static void delete_TGLQuadric(void *p);
   static void deleteArray_TGLQuadric(void *p);
   static void destruct_TGLQuadric(void *p);
   static void streamer_TGLQuadric(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLQuadric*)
   {
      ::TGLQuadric *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLQuadric >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLQuadric", ::TGLQuadric::Class_Version(), "TGLQuadric.h", 27,
                  typeid(::TGLQuadric), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLQuadric::Dictionary, isa_proxy, 16,
                  sizeof(::TGLQuadric) );
      instance.SetNew(&new_TGLQuadric);
      instance.SetNewArray(&newArray_TGLQuadric);
      instance.SetDelete(&delete_TGLQuadric);
      instance.SetDeleteArray(&deleteArray_TGLQuadric);
      instance.SetDestructor(&destruct_TGLQuadric);
      instance.SetStreamerFunc(&streamer_TGLQuadric);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLQuadric*)
   {
      return GenerateInitInstanceLocal((::TGLQuadric*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLQuadric*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLBoxPainter(void *p);
   static void deleteArray_TGLBoxPainter(void *p);
   static void destruct_TGLBoxPainter(void *p);
   static void streamer_TGLBoxPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLBoxPainter*)
   {
      ::TGLBoxPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLBoxPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLBoxPainter", ::TGLBoxPainter::Class_Version(), "TGLBoxPainter.h", 32,
                  typeid(::TGLBoxPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLBoxPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLBoxPainter) );
      instance.SetDelete(&delete_TGLBoxPainter);
      instance.SetDeleteArray(&deleteArray_TGLBoxPainter);
      instance.SetDestructor(&destruct_TGLBoxPainter);
      instance.SetStreamerFunc(&streamer_TGLBoxPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLBoxPainter*)
   {
      return GenerateInitInstanceLocal((::TGLBoxPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLBoxPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLCamera(void *p);
   static void deleteArray_TGLCamera(void *p);
   static void destruct_TGLCamera(void *p);
   static void streamer_TGLCamera(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLCamera*)
   {
      ::TGLCamera *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLCamera >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLCamera", ::TGLCamera::Class_Version(), "TGLCamera.h", 43,
                  typeid(::TGLCamera), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLCamera::Dictionary, isa_proxy, 16,
                  sizeof(::TGLCamera) );
      instance.SetDelete(&delete_TGLCamera);
      instance.SetDeleteArray(&deleteArray_TGLCamera);
      instance.SetDestructor(&destruct_TGLCamera);
      instance.SetStreamerFunc(&streamer_TGLCamera);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLCamera*)
   {
      return GenerateInitInstanceLocal((::TGLCamera*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLCamera*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLCameraGuide(void *p);
   static void deleteArray_TGLCameraGuide(void *p);
   static void destruct_TGLCameraGuide(void *p);
   static void streamer_TGLCameraGuide(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLCameraGuide*)
   {
      ::TGLCameraGuide *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLCameraGuide >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLCameraGuide", ::TGLCameraGuide::Class_Version(), "TGLCameraGuide.h", 17,
                  typeid(::TGLCameraGuide), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLCameraGuide::Dictionary, isa_proxy, 16,
                  sizeof(::TGLCameraGuide) );
      instance.SetDelete(&delete_TGLCameraGuide);
      instance.SetDeleteArray(&deleteArray_TGLCameraGuide);
      instance.SetDestructor(&destruct_TGLCameraGuide);
      instance.SetStreamerFunc(&streamer_TGLCameraGuide);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLCameraGuide*)
   {
      return GenerateInitInstanceLocal((::TGLCameraGuide*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLCameraGuide*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLCameraOverlay(void *p = 0);
   static void *newArray_TGLCameraOverlay(Long_t size, void *p);
   static void delete_TGLCameraOverlay(void *p);
   static void deleteArray_TGLCameraOverlay(void *p);
   static void destruct_TGLCameraOverlay(void *p);
   static void streamer_TGLCameraOverlay(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLCameraOverlay*)
   {
      ::TGLCameraOverlay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLCameraOverlay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLCameraOverlay", ::TGLCameraOverlay::Class_Version(), "TGLCameraOverlay.h", 25,
                  typeid(::TGLCameraOverlay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLCameraOverlay::Dictionary, isa_proxy, 16,
                  sizeof(::TGLCameraOverlay) );
      instance.SetNew(&new_TGLCameraOverlay);
      instance.SetNewArray(&newArray_TGLCameraOverlay);
      instance.SetDelete(&delete_TGLCameraOverlay);
      instance.SetDeleteArray(&deleteArray_TGLCameraOverlay);
      instance.SetDestructor(&destruct_TGLCameraOverlay);
      instance.SetStreamerFunc(&streamer_TGLCameraOverlay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLCameraOverlay*)
   {
      return GenerateInitInstanceLocal((::TGLCameraOverlay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLCameraOverlay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLPhysicalShape(void *p);
   static void deleteArray_TGLPhysicalShape(void *p);
   static void destruct_TGLPhysicalShape(void *p);
   static void streamer_TGLPhysicalShape(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPhysicalShape*)
   {
      ::TGLPhysicalShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPhysicalShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPhysicalShape", ::TGLPhysicalShape::Class_Version(), "TGLPhysicalShape.h", 31,
                  typeid(::TGLPhysicalShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPhysicalShape::Dictionary, isa_proxy, 16,
                  sizeof(::TGLPhysicalShape) );
      instance.SetDelete(&delete_TGLPhysicalShape);
      instance.SetDeleteArray(&deleteArray_TGLPhysicalShape);
      instance.SetDestructor(&destruct_TGLPhysicalShape);
      instance.SetStreamerFunc(&streamer_TGLPhysicalShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPhysicalShape*)
   {
      return GenerateInitInstanceLocal((::TGLPhysicalShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPhysicalShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLClip(void *p);
   static void deleteArray_TGLClip(void *p);
   static void destruct_TGLClip(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLClip*)
   {
      ::TGLClip *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLClip >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLClip", ::TGLClip::Class_Version(), "TGLClip.h", 31,
                  typeid(::TGLClip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLClip::Dictionary, isa_proxy, 4,
                  sizeof(::TGLClip) );
      instance.SetDelete(&delete_TGLClip);
      instance.SetDeleteArray(&deleteArray_TGLClip);
      instance.SetDestructor(&destruct_TGLClip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLClip*)
   {
      return GenerateInitInstanceLocal((::TGLClip*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLClip*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLClipPlane(void *p = 0);
   static void *newArray_TGLClipPlane(Long_t size, void *p);
   static void delete_TGLClipPlane(void *p);
   static void deleteArray_TGLClipPlane(void *p);
   static void destruct_TGLClipPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLClipPlane*)
   {
      ::TGLClipPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLClipPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLClipPlane", ::TGLClipPlane::Class_Version(), "TGLClip.h", 85,
                  typeid(::TGLClipPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLClipPlane::Dictionary, isa_proxy, 4,
                  sizeof(::TGLClipPlane) );
      instance.SetNew(&new_TGLClipPlane);
      instance.SetNewArray(&newArray_TGLClipPlane);
      instance.SetDelete(&delete_TGLClipPlane);
      instance.SetDeleteArray(&deleteArray_TGLClipPlane);
      instance.SetDestructor(&destruct_TGLClipPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLClipPlane*)
   {
      return GenerateInitInstanceLocal((::TGLClipPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLClipPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLClipBox(void *p = 0);
   static void *newArray_TGLClipBox(Long_t size, void *p);
   static void delete_TGLClipBox(void *p);
   static void deleteArray_TGLClipBox(void *p);
   static void destruct_TGLClipBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLClipBox*)
   {
      ::TGLClipBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLClipBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLClipBox", ::TGLClipBox::Class_Version(), "TGLClip.h", 113,
                  typeid(::TGLClipBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLClipBox::Dictionary, isa_proxy, 4,
                  sizeof(::TGLClipBox) );
      instance.SetNew(&new_TGLClipBox);
      instance.SetNewArray(&newArray_TGLClipBox);
      instance.SetDelete(&delete_TGLClipBox);
      instance.SetDeleteArray(&deleteArray_TGLClipBox);
      instance.SetDestructor(&destruct_TGLClipBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLClipBox*)
   {
      return GenerateInitInstanceLocal((::TGLClipBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLClipBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLClipSet(void *p = 0);
   static void *newArray_TGLClipSet(Long_t size, void *p);
   static void delete_TGLClipSet(void *p);
   static void deleteArray_TGLClipSet(void *p);
   static void destruct_TGLClipSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLClipSet*)
   {
      ::TGLClipSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLClipSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLClipSet", ::TGLClipSet::Class_Version(), "TGLClip.h", 139,
                  typeid(::TGLClipSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLClipSet::Dictionary, isa_proxy, 4,
                  sizeof(::TGLClipSet) );
      instance.SetNew(&new_TGLClipSet);
      instance.SetNewArray(&newArray_TGLClipSet);
      instance.SetDelete(&delete_TGLClipSet);
      instance.SetDeleteArray(&deleteArray_TGLClipSet);
      instance.SetDestructor(&destruct_TGLClipSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLClipSet*)
   {
      return GenerateInitInstanceLocal((::TGLClipSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLClipSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLClipSetSubEditor(void *p);
   static void deleteArray_TGLClipSetSubEditor(void *p);
   static void destruct_TGLClipSetSubEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLClipSetSubEditor*)
   {
      ::TGLClipSetSubEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLClipSetSubEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLClipSetSubEditor", ::TGLClipSetSubEditor::Class_Version(), "TGLClipSetEditor.h", 26,
                  typeid(::TGLClipSetSubEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLClipSetSubEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TGLClipSetSubEditor) );
      instance.SetDelete(&delete_TGLClipSetSubEditor);
      instance.SetDeleteArray(&deleteArray_TGLClipSetSubEditor);
      instance.SetDestructor(&destruct_TGLClipSetSubEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLClipSetSubEditor*)
   {
      return GenerateInitInstanceLocal((::TGLClipSetSubEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLClipSetSubEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLClipSetEditor(void *p = 0);
   static void *newArray_TGLClipSetEditor(Long_t size, void *p);
   static void delete_TGLClipSetEditor(void *p);
   static void deleteArray_TGLClipSetEditor(void *p);
   static void destruct_TGLClipSetEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLClipSetEditor*)
   {
      ::TGLClipSetEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLClipSetEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLClipSetEditor", ::TGLClipSetEditor::Class_Version(), "TGLClipSetEditor.h", 68,
                  typeid(::TGLClipSetEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLClipSetEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TGLClipSetEditor) );
      instance.SetNew(&new_TGLClipSetEditor);
      instance.SetNewArray(&newArray_TGLClipSetEditor);
      instance.SetDelete(&delete_TGLClipSetEditor);
      instance.SetDeleteArray(&deleteArray_TGLClipSetEditor);
      instance.SetDestructor(&destruct_TGLClipSetEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLClipSetEditor*)
   {
      return GenerateInitInstanceLocal((::TGLClipSetEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLClipSetEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLFormat(void *p = 0);
   static void *newArray_TGLFormat(Long_t size, void *p);
   static void delete_TGLFormat(void *p);
   static void deleteArray_TGLFormat(void *p);
   static void destruct_TGLFormat(void *p);
   static void streamer_TGLFormat(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLFormat*)
   {
      ::TGLFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLFormat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLFormat", ::TGLFormat::Class_Version(), "TGLFormat.h", 35,
                  typeid(::TGLFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLFormat::Dictionary, isa_proxy, 16,
                  sizeof(::TGLFormat) );
      instance.SetNew(&new_TGLFormat);
      instance.SetNewArray(&newArray_TGLFormat);
      instance.SetDelete(&delete_TGLFormat);
      instance.SetDeleteArray(&deleteArray_TGLFormat);
      instance.SetDestructor(&destruct_TGLFormat);
      instance.SetStreamerFunc(&streamer_TGLFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLFormat*)
   {
      return GenerateInitInstanceLocal((::TGLFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLFormat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLContext(void *p);
   static void deleteArray_TGLContext(void *p);
   static void destruct_TGLContext(void *p);
   static void streamer_TGLContext(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLContext*)
   {
      ::TGLContext *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLContext >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLContext", ::TGLContext::Class_Version(), "TGLContext.h", 30,
                  typeid(::TGLContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLContext::Dictionary, isa_proxy, 16,
                  sizeof(::TGLContext) );
      instance.SetDelete(&delete_TGLContext);
      instance.SetDeleteArray(&deleteArray_TGLContext);
      instance.SetDestructor(&destruct_TGLContext);
      instance.SetStreamerFunc(&streamer_TGLContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLContext*)
   {
      return GenerateInitInstanceLocal((::TGLContext*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLContext*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLContextIdentity(void *p = 0);
   static void *newArray_TGLContextIdentity(Long_t size, void *p);
   static void delete_TGLContextIdentity(void *p);
   static void deleteArray_TGLContextIdentity(void *p);
   static void destruct_TGLContextIdentity(void *p);
   static void streamer_TGLContextIdentity(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLContextIdentity*)
   {
      ::TGLContextIdentity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLContextIdentity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLContextIdentity", ::TGLContextIdentity::Class_Version(), "TGLContext.h", 80,
                  typeid(::TGLContextIdentity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLContextIdentity::Dictionary, isa_proxy, 16,
                  sizeof(::TGLContextIdentity) );
      instance.SetNew(&new_TGLContextIdentity);
      instance.SetNewArray(&newArray_TGLContextIdentity);
      instance.SetDelete(&delete_TGLContextIdentity);
      instance.SetDeleteArray(&deleteArray_TGLContextIdentity);
      instance.SetDestructor(&destruct_TGLContextIdentity);
      instance.SetStreamerFunc(&streamer_TGLContextIdentity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLContextIdentity*)
   {
      return GenerateInitInstanceLocal((::TGLContextIdentity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLContextIdentity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLCylinder(void *p);
   static void deleteArray_TGLCylinder(void *p);
   static void destruct_TGLCylinder(void *p);
   static void streamer_TGLCylinder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLCylinder*)
   {
      ::TGLCylinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLCylinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLCylinder", ::TGLCylinder::Class_Version(), "TGLCylinder.h", 21,
                  typeid(::TGLCylinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLCylinder::Dictionary, isa_proxy, 16,
                  sizeof(::TGLCylinder) );
      instance.SetDelete(&delete_TGLCylinder);
      instance.SetDeleteArray(&deleteArray_TGLCylinder);
      instance.SetDestructor(&destruct_TGLCylinder);
      instance.SetStreamerFunc(&streamer_TGLCylinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLCylinder*)
   {
      return GenerateInitInstanceLocal((::TGLCylinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLCylinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLLockable(void *p = 0);
   static void *newArray_TGLLockable(Long_t size, void *p);
   static void delete_TGLLockable(void *p);
   static void deleteArray_TGLLockable(void *p);
   static void destruct_TGLLockable(void *p);
   static void streamer_TGLLockable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLLockable*)
   {
      ::TGLLockable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLLockable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLLockable", ::TGLLockable::Class_Version(), "TGLLockable.h", 17,
                  typeid(::TGLLockable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLLockable::Dictionary, isa_proxy, 16,
                  sizeof(::TGLLockable) );
      instance.SetNew(&new_TGLLockable);
      instance.SetNewArray(&newArray_TGLLockable);
      instance.SetDelete(&delete_TGLLockable);
      instance.SetDeleteArray(&deleteArray_TGLLockable);
      instance.SetDestructor(&destruct_TGLLockable);
      instance.SetStreamerFunc(&streamer_TGLLockable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLLockable*)
   {
      return GenerateInitInstanceLocal((::TGLLockable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLLockable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLViewerBase(void *p = 0);
   static void *newArray_TGLViewerBase(Long_t size, void *p);
   static void delete_TGLViewerBase(void *p);
   static void deleteArray_TGLViewerBase(void *p);
   static void destruct_TGLViewerBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLViewerBase*)
   {
      ::TGLViewerBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLViewerBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLViewerBase", ::TGLViewerBase::Class_Version(), "TGLViewerBase.h", 36,
                  typeid(::TGLViewerBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLViewerBase::Dictionary, isa_proxy, 4,
                  sizeof(::TGLViewerBase) );
      instance.SetNew(&new_TGLViewerBase);
      instance.SetNewArray(&newArray_TGLViewerBase);
      instance.SetDelete(&delete_TGLViewerBase);
      instance.SetDeleteArray(&deleteArray_TGLViewerBase);
      instance.SetDestructor(&destruct_TGLViewerBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLViewerBase*)
   {
      return GenerateInitInstanceLocal((::TGLViewerBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLViewerBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLStopwatch(void *p = 0);
   static void *newArray_TGLStopwatch(Long_t size, void *p);
   static void delete_TGLStopwatch(void *p);
   static void deleteArray_TGLStopwatch(void *p);
   static void destruct_TGLStopwatch(void *p);
   static void streamer_TGLStopwatch(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLStopwatch*)
   {
      ::TGLStopwatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLStopwatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLStopwatch", ::TGLStopwatch::Class_Version(), "TGLStopwatch.h", 32,
                  typeid(::TGLStopwatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLStopwatch::Dictionary, isa_proxy, 16,
                  sizeof(::TGLStopwatch) );
      instance.SetNew(&new_TGLStopwatch);
      instance.SetNewArray(&newArray_TGLStopwatch);
      instance.SetDelete(&delete_TGLStopwatch);
      instance.SetDeleteArray(&deleteArray_TGLStopwatch);
      instance.SetDestructor(&destruct_TGLStopwatch);
      instance.SetStreamerFunc(&streamer_TGLStopwatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLStopwatch*)
   {
      return GenerateInitInstanceLocal((::TGLStopwatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLStopwatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLRnrCtx(void *p);
   static void deleteArray_TGLRnrCtx(void *p);
   static void destruct_TGLRnrCtx(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLRnrCtx*)
   {
      ::TGLRnrCtx *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLRnrCtx >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLRnrCtx", ::TGLRnrCtx::Class_Version(), "TGLRnrCtx.h", 40,
                  typeid(::TGLRnrCtx), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLRnrCtx::Dictionary, isa_proxy, 4,
                  sizeof(::TGLRnrCtx) );
      instance.SetDelete(&delete_TGLRnrCtx);
      instance.SetDeleteArray(&deleteArray_TGLRnrCtx);
      instance.SetDestructor(&destruct_TGLRnrCtx);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLRnrCtx*)
   {
      return GenerateInitInstanceLocal((::TGLRnrCtx*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLRnrCtx*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLSelectRecordBase(void *p = 0);
   static void *newArray_TGLSelectRecordBase(Long_t size, void *p);
   static void delete_TGLSelectRecordBase(void *p);
   static void deleteArray_TGLSelectRecordBase(void *p);
   static void destruct_TGLSelectRecordBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSelectRecordBase*)
   {
      ::TGLSelectRecordBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSelectRecordBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSelectRecordBase", ::TGLSelectRecordBase::Class_Version(), "TGLSelectRecord.h", 27,
                  typeid(::TGLSelectRecordBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSelectRecordBase::Dictionary, isa_proxy, 4,
                  sizeof(::TGLSelectRecordBase) );
      instance.SetNew(&new_TGLSelectRecordBase);
      instance.SetNewArray(&newArray_TGLSelectRecordBase);
      instance.SetDelete(&delete_TGLSelectRecordBase);
      instance.SetDeleteArray(&deleteArray_TGLSelectRecordBase);
      instance.SetDestructor(&destruct_TGLSelectRecordBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSelectRecordBase*)
   {
      return GenerateInitInstanceLocal((::TGLSelectRecordBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSelectRecordBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLSelectRecord(void *p = 0);
   static void *newArray_TGLSelectRecord(Long_t size, void *p);
   static void delete_TGLSelectRecord(void *p);
   static void deleteArray_TGLSelectRecord(void *p);
   static void destruct_TGLSelectRecord(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSelectRecord*)
   {
      ::TGLSelectRecord *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSelectRecord >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSelectRecord", ::TGLSelectRecord::Class_Version(), "TGLSelectRecord.h", 74,
                  typeid(::TGLSelectRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSelectRecord::Dictionary, isa_proxy, 4,
                  sizeof(::TGLSelectRecord) );
      instance.SetNew(&new_TGLSelectRecord);
      instance.SetNewArray(&newArray_TGLSelectRecord);
      instance.SetDelete(&delete_TGLSelectRecord);
      instance.SetDeleteArray(&deleteArray_TGLSelectRecord);
      instance.SetDestructor(&destruct_TGLSelectRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSelectRecord*)
   {
      return GenerateInitInstanceLocal((::TGLSelectRecord*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSelectRecord*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLOvlSelectRecord(void *p = 0);
   static void *newArray_TGLOvlSelectRecord(Long_t size, void *p);
   static void delete_TGLOvlSelectRecord(void *p);
   static void deleteArray_TGLOvlSelectRecord(void *p);
   static void destruct_TGLOvlSelectRecord(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLOvlSelectRecord*)
   {
      ::TGLOvlSelectRecord *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLOvlSelectRecord >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLOvlSelectRecord", ::TGLOvlSelectRecord::Class_Version(), "TGLSelectRecord.h", 139,
                  typeid(::TGLOvlSelectRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLOvlSelectRecord::Dictionary, isa_proxy, 4,
                  sizeof(::TGLOvlSelectRecord) );
      instance.SetNew(&new_TGLOvlSelectRecord);
      instance.SetNewArray(&newArray_TGLOvlSelectRecord);
      instance.SetDelete(&delete_TGLOvlSelectRecord);
      instance.SetDeleteArray(&deleteArray_TGLOvlSelectRecord);
      instance.SetDestructor(&destruct_TGLOvlSelectRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLOvlSelectRecord*)
   {
      return GenerateInitInstanceLocal((::TGLOvlSelectRecord*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLOvlSelectRecord*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLPerspectiveCamera(void *p = 0);
   static void *newArray_TGLPerspectiveCamera(Long_t size, void *p);
   static void delete_TGLPerspectiveCamera(void *p);
   static void deleteArray_TGLPerspectiveCamera(void *p);
   static void destruct_TGLPerspectiveCamera(void *p);
   static void streamer_TGLPerspectiveCamera(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPerspectiveCamera*)
   {
      ::TGLPerspectiveCamera *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPerspectiveCamera >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPerspectiveCamera", ::TGLPerspectiveCamera::Class_Version(), "TGLPerspectiveCamera.h", 25,
                  typeid(::TGLPerspectiveCamera), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPerspectiveCamera::Dictionary, isa_proxy, 16,
                  sizeof(::TGLPerspectiveCamera) );
      instance.SetNew(&new_TGLPerspectiveCamera);
      instance.SetNewArray(&newArray_TGLPerspectiveCamera);
      instance.SetDelete(&delete_TGLPerspectiveCamera);
      instance.SetDeleteArray(&deleteArray_TGLPerspectiveCamera);
      instance.SetDestructor(&destruct_TGLPerspectiveCamera);
      instance.SetStreamerFunc(&streamer_TGLPerspectiveCamera);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPerspectiveCamera*)
   {
      return GenerateInitInstanceLocal((::TGLPerspectiveCamera*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPerspectiveCamera*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLOrthoCamera(void *p = 0);
   static void *newArray_TGLOrthoCamera(Long_t size, void *p);
   static void delete_TGLOrthoCamera(void *p);
   static void deleteArray_TGLOrthoCamera(void *p);
   static void destruct_TGLOrthoCamera(void *p);
   static void streamer_TGLOrthoCamera(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLOrthoCamera*)
   {
      ::TGLOrthoCamera *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLOrthoCamera >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLOrthoCamera", ::TGLOrthoCamera::Class_Version(), "TGLOrthoCamera.h", 35,
                  typeid(::TGLOrthoCamera), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLOrthoCamera::Dictionary, isa_proxy, 16,
                  sizeof(::TGLOrthoCamera) );
      instance.SetNew(&new_TGLOrthoCamera);
      instance.SetNewArray(&newArray_TGLOrthoCamera);
      instance.SetDelete(&delete_TGLOrthoCamera);
      instance.SetDeleteArray(&deleteArray_TGLOrthoCamera);
      instance.SetDestructor(&destruct_TGLOrthoCamera);
      instance.SetStreamerFunc(&streamer_TGLOrthoCamera);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLOrthoCamera*)
   {
      return GenerateInitInstanceLocal((::TGLOrthoCamera*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLOrthoCamera*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLViewer(void *p);
   static void deleteArray_TGLViewer(void *p);
   static void destruct_TGLViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLViewer*)
   {
      ::TGLViewer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLViewer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLViewer", ::TGLViewer::Class_Version(), "TGLViewer.h", 53,
                  typeid(::TGLViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLViewer::Dictionary, isa_proxy, 4,
                  sizeof(::TGLViewer) );
      instance.SetDelete(&delete_TGLViewer);
      instance.SetDeleteArray(&deleteArray_TGLViewer);
      instance.SetDestructor(&destruct_TGLViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLViewer*)
   {
      return GenerateInitInstanceLocal((::TGLViewer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLViewer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLFaderHelper(void *p = 0);
   static void *newArray_TGLFaderHelper(Long_t size, void *p);
   static void delete_TGLFaderHelper(void *p);
   static void deleteArray_TGLFaderHelper(void *p);
   static void destruct_TGLFaderHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLFaderHelper*)
   {
      ::TGLFaderHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLFaderHelper >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLFaderHelper", ::TGLFaderHelper::Class_Version(), "TGLViewer.h", 431,
                  typeid(::TGLFaderHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLFaderHelper::Dictionary, isa_proxy, 4,
                  sizeof(::TGLFaderHelper) );
      instance.SetNew(&new_TGLFaderHelper);
      instance.SetNewArray(&newArray_TGLFaderHelper);
      instance.SetDelete(&delete_TGLFaderHelper);
      instance.SetDeleteArray(&deleteArray_TGLFaderHelper);
      instance.SetDestructor(&destruct_TGLFaderHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLFaderHelper*)
   {
      return GenerateInitInstanceLocal((::TGLFaderHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLFaderHelper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLEmbeddedViewer(void *p);
   static void deleteArray_TGLEmbeddedViewer(void *p);
   static void destruct_TGLEmbeddedViewer(void *p);
   static void streamer_TGLEmbeddedViewer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLEmbeddedViewer*)
   {
      ::TGLEmbeddedViewer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLEmbeddedViewer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLEmbeddedViewer", ::TGLEmbeddedViewer::Class_Version(), "TGLEmbeddedViewer.h", 23,
                  typeid(::TGLEmbeddedViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLEmbeddedViewer::Dictionary, isa_proxy, 16,
                  sizeof(::TGLEmbeddedViewer) );
      instance.SetDelete(&delete_TGLEmbeddedViewer);
      instance.SetDeleteArray(&deleteArray_TGLEmbeddedViewer);
      instance.SetDestructor(&destruct_TGLEmbeddedViewer);
      instance.SetStreamerFunc(&streamer_TGLEmbeddedViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLEmbeddedViewer*)
   {
      return GenerateInitInstanceLocal((::TGLEmbeddedViewer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLEmbeddedViewer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLEventHandler(void *p);
   static void deleteArray_TGLEventHandler(void *p);
   static void destruct_TGLEventHandler(void *p);
   static void streamer_TGLEventHandler(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLEventHandler*)
   {
      ::TGLEventHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLEventHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLEventHandler", ::TGLEventHandler::Class_Version(), "TGLEventHandler.h", 29,
                  typeid(::TGLEventHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLEventHandler::Dictionary, isa_proxy, 16,
                  sizeof(::TGLEventHandler) );
      instance.SetDelete(&delete_TGLEventHandler);
      instance.SetDeleteArray(&deleteArray_TGLEventHandler);
      instance.SetDestructor(&destruct_TGLEventHandler);
      instance.SetStreamerFunc(&streamer_TGLEventHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLEventHandler*)
   {
      return GenerateInitInstanceLocal((::TGLEventHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLEventHandler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLFBO(void *p = 0);
   static void *newArray_TGLFBO(Long_t size, void *p);
   static void delete_TGLFBO(void *p);
   static void deleteArray_TGLFBO(void *p);
   static void destruct_TGLFBO(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLFBO*)
   {
      ::TGLFBO *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLFBO >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLFBO", ::TGLFBO::Class_Version(), "TGLFBO.h", 17,
                  typeid(::TGLFBO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLFBO::Dictionary, isa_proxy, 4,
                  sizeof(::TGLFBO) );
      instance.SetNew(&new_TGLFBO);
      instance.SetNewArray(&newArray_TGLFBO);
      instance.SetDelete(&delete_TGLFBO);
      instance.SetDeleteArray(&deleteArray_TGLFBO);
      instance.SetDestructor(&destruct_TGLFBO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLFBO*)
   {
      return GenerateInitInstanceLocal((::TGLFBO*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLFBO*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLFaceSet(void *p);
   static void deleteArray_TGLFaceSet(void *p);
   static void destruct_TGLFaceSet(void *p);
   static void streamer_TGLFaceSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLFaceSet*)
   {
      ::TGLFaceSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLFaceSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLFaceSet", ::TGLFaceSet::Class_Version(), "TGLFaceSet.h", 21,
                  typeid(::TGLFaceSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLFaceSet::Dictionary, isa_proxy, 16,
                  sizeof(::TGLFaceSet) );
      instance.SetDelete(&delete_TGLFaceSet);
      instance.SetDeleteArray(&deleteArray_TGLFaceSet);
      instance.SetDestructor(&destruct_TGLFaceSet);
      instance.SetStreamerFunc(&streamer_TGLFaceSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLFaceSet*)
   {
      return GenerateInitInstanceLocal((::TGLFaceSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLFaceSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLH2PolyPainter(void *p);
   static void deleteArray_TGLH2PolyPainter(void *p);
   static void destruct_TGLH2PolyPainter(void *p);
   static void streamer_TGLH2PolyPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLH2PolyPainter*)
   {
      ::TGLH2PolyPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLH2PolyPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLH2PolyPainter", ::TGLH2PolyPainter::Class_Version(), "TGLH2PolyPainter.h", 14,
                  typeid(::TGLH2PolyPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLH2PolyPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLH2PolyPainter) );
      instance.SetDelete(&delete_TGLH2PolyPainter);
      instance.SetDeleteArray(&deleteArray_TGLH2PolyPainter);
      instance.SetDestructor(&destruct_TGLH2PolyPainter);
      instance.SetStreamerFunc(&streamer_TGLH2PolyPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLH2PolyPainter*)
   {
      return GenerateInitInstanceLocal((::TGLH2PolyPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLH2PolyPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLLegoPainter(void *p);
   static void deleteArray_TGLLegoPainter(void *p);
   static void destruct_TGLLegoPainter(void *p);
   static void streamer_TGLLegoPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLLegoPainter*)
   {
      ::TGLLegoPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLLegoPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLLegoPainter", ::TGLLegoPainter::Class_Version(), "TGLLegoPainter.h", 28,
                  typeid(::TGLLegoPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLLegoPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLLegoPainter) );
      instance.SetDelete(&delete_TGLLegoPainter);
      instance.SetDeleteArray(&deleteArray_TGLLegoPainter);
      instance.SetDestructor(&destruct_TGLLegoPainter);
      instance.SetStreamerFunc(&streamer_TGLLegoPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLLegoPainter*)
   {
      return GenerateInitInstanceLocal((::TGLLegoPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLLegoPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLLightSet(void *p = 0);
   static void *newArray_TGLLightSet(Long_t size, void *p);
   static void delete_TGLLightSet(void *p);
   static void deleteArray_TGLLightSet(void *p);
   static void destruct_TGLLightSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLLightSet*)
   {
      ::TGLLightSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLLightSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLLightSet", ::TGLLightSet::Class_Version(), "TGLLightSet.h", 21,
                  typeid(::TGLLightSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLLightSet::Dictionary, isa_proxy, 4,
                  sizeof(::TGLLightSet) );
      instance.SetNew(&new_TGLLightSet);
      instance.SetNewArray(&newArray_TGLLightSet);
      instance.SetDelete(&delete_TGLLightSet);
      instance.SetDeleteArray(&deleteArray_TGLLightSet);
      instance.SetDestructor(&destruct_TGLLightSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLLightSet*)
   {
      return GenerateInitInstanceLocal((::TGLLightSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLLightSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLLightSetSubEditor(void *p);
   static void deleteArray_TGLLightSetSubEditor(void *p);
   static void destruct_TGLLightSetSubEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLLightSetSubEditor*)
   {
      ::TGLLightSetSubEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLLightSetSubEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLLightSetSubEditor", ::TGLLightSetSubEditor::Class_Version(), "TGLLightSetEditor.h", 20,
                  typeid(::TGLLightSetSubEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLLightSetSubEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TGLLightSetSubEditor) );
      instance.SetDelete(&delete_TGLLightSetSubEditor);
      instance.SetDeleteArray(&deleteArray_TGLLightSetSubEditor);
      instance.SetDestructor(&destruct_TGLLightSetSubEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLLightSetSubEditor*)
   {
      return GenerateInitInstanceLocal((::TGLLightSetSubEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLLightSetSubEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLLightSetEditor(void *p = 0);
   static void *newArray_TGLLightSetEditor(Long_t size, void *p);
   static void delete_TGLLightSetEditor(void *p);
   static void deleteArray_TGLLightSetEditor(void *p);
   static void destruct_TGLLightSetEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLLightSetEditor*)
   {
      ::TGLLightSetEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLLightSetEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLLightSetEditor", ::TGLLightSetEditor::Class_Version(), "TGLLightSetEditor.h", 54,
                  typeid(::TGLLightSetEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLLightSetEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TGLLightSetEditor) );
      instance.SetNew(&new_TGLLightSetEditor);
      instance.SetNewArray(&newArray_TGLLightSetEditor);
      instance.SetDelete(&delete_TGLLightSetEditor);
      instance.SetDeleteArray(&deleteArray_TGLLightSetEditor);
      instance.SetDestructor(&destruct_TGLLightSetEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLLightSetEditor*)
   {
      return GenerateInitInstanceLocal((::TGLLightSetEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLLightSetEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLManip(void *p);
   static void deleteArray_TGLManip(void *p);
   static void destruct_TGLManip(void *p);
   static void streamer_TGLManip(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLManip*)
   {
      ::TGLManip *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLManip >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLManip", ::TGLManip::Class_Version(), "TGLManip.h", 28,
                  typeid(::TGLManip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLManip::Dictionary, isa_proxy, 16,
                  sizeof(::TGLManip) );
      instance.SetDelete(&delete_TGLManip);
      instance.SetDeleteArray(&deleteArray_TGLManip);
      instance.SetDestructor(&destruct_TGLManip);
      instance.SetStreamerFunc(&streamer_TGLManip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLManip*)
   {
      return GenerateInitInstanceLocal((::TGLManip*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLManip*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLPShapeRef(void *p = 0);
   static void *newArray_TGLPShapeRef(Long_t size, void *p);
   static void delete_TGLPShapeRef(void *p);
   static void deleteArray_TGLPShapeRef(void *p);
   static void destruct_TGLPShapeRef(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPShapeRef*)
   {
      ::TGLPShapeRef *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPShapeRef >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPShapeRef", ::TGLPShapeRef::Class_Version(), "TGLPShapeRef.h", 19,
                  typeid(::TGLPShapeRef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPShapeRef::Dictionary, isa_proxy, 4,
                  sizeof(::TGLPShapeRef) );
      instance.SetNew(&new_TGLPShapeRef);
      instance.SetNewArray(&newArray_TGLPShapeRef);
      instance.SetDelete(&delete_TGLPShapeRef);
      instance.SetDeleteArray(&deleteArray_TGLPShapeRef);
      instance.SetDestructor(&destruct_TGLPShapeRef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPShapeRef*)
   {
      return GenerateInitInstanceLocal((::TGLPShapeRef*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPShapeRef*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLManipSet(void *p = 0);
   static void *newArray_TGLManipSet(Long_t size, void *p);
   static void delete_TGLManipSet(void *p);
   static void deleteArray_TGLManipSet(void *p);
   static void destruct_TGLManipSet(void *p);
   static void streamer_TGLManipSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLManipSet*)
   {
      ::TGLManipSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLManipSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLManipSet", ::TGLManipSet::Class_Version(), "TGLManipSet.h", 21,
                  typeid(::TGLManipSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLManipSet::Dictionary, isa_proxy, 16,
                  sizeof(::TGLManipSet) );
      instance.SetNew(&new_TGLManipSet);
      instance.SetNewArray(&newArray_TGLManipSet);
      instance.SetDelete(&delete_TGLManipSet);
      instance.SetDeleteArray(&deleteArray_TGLManipSet);
      instance.SetDestructor(&destruct_TGLManipSet);
      instance.SetStreamerFunc(&streamer_TGLManipSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLManipSet*)
   {
      return GenerateInitInstanceLocal((::TGLManipSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLManipSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLOutput(void *p = 0);
   static void *newArray_TGLOutput(Long_t size, void *p);
   static void delete_TGLOutput(void *p);
   static void deleteArray_TGLOutput(void *p);
   static void destruct_TGLOutput(void *p);
   static void streamer_TGLOutput(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLOutput*)
   {
      ::TGLOutput *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLOutput >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLOutput", ::TGLOutput::Class_Version(), "TGLOutput.h", 26,
                  typeid(::TGLOutput), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLOutput::Dictionary, isa_proxy, 16,
                  sizeof(::TGLOutput) );
      instance.SetNew(&new_TGLOutput);
      instance.SetNewArray(&newArray_TGLOutput);
      instance.SetDelete(&delete_TGLOutput);
      instance.SetDeleteArray(&deleteArray_TGLOutput);
      instance.SetDestructor(&destruct_TGLOutput);
      instance.SetStreamerFunc(&streamer_TGLOutput);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLOutput*)
   {
      return GenerateInitInstanceLocal((::TGLOutput*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLOutput*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLOverlayButton(void *p);
   static void deleteArray_TGLOverlayButton(void *p);
   static void destruct_TGLOverlayButton(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLOverlayButton*)
   {
      ::TGLOverlayButton *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLOverlayButton >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLOverlayButton", ::TGLOverlayButton::Class_Version(), "TGLOverlayButton.h", 22,
                  typeid(::TGLOverlayButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLOverlayButton::Dictionary, isa_proxy, 4,
                  sizeof(::TGLOverlayButton) );
      instance.SetDelete(&delete_TGLOverlayButton);
      instance.SetDeleteArray(&deleteArray_TGLOverlayButton);
      instance.SetDestructor(&destruct_TGLOverlayButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLOverlayButton*)
   {
      return GenerateInitInstanceLocal((::TGLOverlayButton*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLOverlayButton*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLPShapeObj(void *p = 0);
   static void *newArray_TGLPShapeObj(Long_t size, void *p);
   static void delete_TGLPShapeObj(void *p);
   static void deleteArray_TGLPShapeObj(void *p);
   static void destruct_TGLPShapeObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPShapeObj*)
   {
      ::TGLPShapeObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPShapeObj >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPShapeObj", ::TGLPShapeObj::Class_Version(), "TGLPShapeObj.h", 20,
                  typeid(::TGLPShapeObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPShapeObj::Dictionary, isa_proxy, 4,
                  sizeof(::TGLPShapeObj) );
      instance.SetNew(&new_TGLPShapeObj);
      instance.SetNewArray(&newArray_TGLPShapeObj);
      instance.SetDelete(&delete_TGLPShapeObj);
      instance.SetDeleteArray(&deleteArray_TGLPShapeObj);
      instance.SetDestructor(&destruct_TGLPShapeObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPShapeObj*)
   {
      return GenerateInitInstanceLocal((::TGLPShapeObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPShapeObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLPShapeObjEditor(void *p = 0);
   static void *newArray_TGLPShapeObjEditor(Long_t size, void *p);
   static void delete_TGLPShapeObjEditor(void *p);
   static void deleteArray_TGLPShapeObjEditor(void *p);
   static void destruct_TGLPShapeObjEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPShapeObjEditor*)
   {
      ::TGLPShapeObjEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPShapeObjEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPShapeObjEditor", ::TGLPShapeObjEditor::Class_Version(), "TGLPShapeObjEditor.h", 30,
                  typeid(::TGLPShapeObjEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPShapeObjEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TGLPShapeObjEditor) );
      instance.SetNew(&new_TGLPShapeObjEditor);
      instance.SetNewArray(&newArray_TGLPShapeObjEditor);
      instance.SetDelete(&delete_TGLPShapeObjEditor);
      instance.SetDeleteArray(&deleteArray_TGLPShapeObjEditor);
      instance.SetDestructor(&destruct_TGLPShapeObjEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPShapeObjEditor*)
   {
      return GenerateInitInstanceLocal((::TGLPShapeObjEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPShapeObjEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLPadPainter(void *p = 0);
   static void *newArray_TGLPadPainter(Long_t size, void *p);
   static void delete_TGLPadPainter(void *p);
   static void deleteArray_TGLPadPainter(void *p);
   static void destruct_TGLPadPainter(void *p);
   static void streamer_TGLPadPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPadPainter*)
   {
      ::TGLPadPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPadPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPadPainter", ::TGLPadPainter::Class_Version(), "TGLPadPainter.h", 28,
                  typeid(::TGLPadPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPadPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLPadPainter) );
      instance.SetNew(&new_TGLPadPainter);
      instance.SetNewArray(&newArray_TGLPadPainter);
      instance.SetDelete(&delete_TGLPadPainter);
      instance.SetDeleteArray(&deleteArray_TGLPadPainter);
      instance.SetDestructor(&destruct_TGLPadPainter);
      instance.SetStreamerFunc(&streamer_TGLPadPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPadPainter*)
   {
      return GenerateInitInstanceLocal((::TGLPadPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPadPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLParametricEquation(void *p);
   static void deleteArray_TGLParametricEquation(void *p);
   static void destruct_TGLParametricEquation(void *p);
   static void streamer_TGLParametricEquation(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLParametricEquation*)
   {
      ::TGLParametricEquation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLParametricEquation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLParametricEquation", ::TGLParametricEquation::Class_Version(), "TGLParametric.h", 35,
                  typeid(::TGLParametricEquation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLParametricEquation::Dictionary, isa_proxy, 16,
                  sizeof(::TGLParametricEquation) );
      instance.SetDelete(&delete_TGLParametricEquation);
      instance.SetDeleteArray(&deleteArray_TGLParametricEquation);
      instance.SetDestructor(&destruct_TGLParametricEquation);
      instance.SetStreamerFunc(&streamer_TGLParametricEquation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLParametricEquation*)
   {
      return GenerateInitInstanceLocal((::TGLParametricEquation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLParametricEquation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLParametricPlot(void *p);
   static void deleteArray_TGLParametricPlot(void *p);
   static void destruct_TGLParametricPlot(void *p);
   static void streamer_TGLParametricPlot(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLParametricPlot*)
   {
      ::TGLParametricPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLParametricPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLParametricPlot", ::TGLParametricPlot::Class_Version(), "TGLParametric.h", 88,
                  typeid(::TGLParametricPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLParametricPlot::Dictionary, isa_proxy, 16,
                  sizeof(::TGLParametricPlot) );
      instance.SetDelete(&delete_TGLParametricPlot);
      instance.SetDeleteArray(&deleteArray_TGLParametricPlot);
      instance.SetDestructor(&destruct_TGLParametricPlot);
      instance.SetStreamerFunc(&streamer_TGLParametricPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLParametricPlot*)
   {
      return GenerateInitInstanceLocal((::TGLParametricPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLParametricPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLParametricEquationGL(void *p = 0);
   static void *newArray_TGLParametricEquationGL(Long_t size, void *p);
   static void delete_TGLParametricEquationGL(void *p);
   static void deleteArray_TGLParametricEquationGL(void *p);
   static void destruct_TGLParametricEquationGL(void *p);
   static void streamer_TGLParametricEquationGL(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLParametricEquationGL*)
   {
      ::TGLParametricEquationGL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLParametricEquationGL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLParametricEquationGL", ::TGLParametricEquationGL::Class_Version(), "TGLParametricEquationGL.h", 22,
                  typeid(::TGLParametricEquationGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLParametricEquationGL::Dictionary, isa_proxy, 16,
                  sizeof(::TGLParametricEquationGL) );
      instance.SetNew(&new_TGLParametricEquationGL);
      instance.SetNewArray(&newArray_TGLParametricEquationGL);
      instance.SetDelete(&delete_TGLParametricEquationGL);
      instance.SetDeleteArray(&deleteArray_TGLParametricEquationGL);
      instance.SetDestructor(&destruct_TGLParametricEquationGL);
      instance.SetStreamerFunc(&streamer_TGLParametricEquationGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLParametricEquationGL*)
   {
      return GenerateInitInstanceLocal((::TGLParametricEquationGL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLParametricEquationGL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLPolyLine(void *p);
   static void deleteArray_TGLPolyLine(void *p);
   static void destruct_TGLPolyLine(void *p);
   static void streamer_TGLPolyLine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPolyLine*)
   {
      ::TGLPolyLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPolyLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPolyLine", ::TGLPolyLine::Class_Version(), "TGLPolyLine.h", 23,
                  typeid(::TGLPolyLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPolyLine::Dictionary, isa_proxy, 16,
                  sizeof(::TGLPolyLine) );
      instance.SetDelete(&delete_TGLPolyLine);
      instance.SetDeleteArray(&deleteArray_TGLPolyLine);
      instance.SetDestructor(&destruct_TGLPolyLine);
      instance.SetStreamerFunc(&streamer_TGLPolyLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPolyLine*)
   {
      return GenerateInitInstanceLocal((::TGLPolyLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPolyLine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLPolyMarker(void *p);
   static void deleteArray_TGLPolyMarker(void *p);
   static void destruct_TGLPolyMarker(void *p);
   static void streamer_TGLPolyMarker(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLPolyMarker*)
   {
      ::TGLPolyMarker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLPolyMarker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLPolyMarker", ::TGLPolyMarker::Class_Version(), "TGLPolyMarker.h", 24,
                  typeid(::TGLPolyMarker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLPolyMarker::Dictionary, isa_proxy, 16,
                  sizeof(::TGLPolyMarker) );
      instance.SetDelete(&delete_TGLPolyMarker);
      instance.SetDeleteArray(&deleteArray_TGLPolyMarker);
      instance.SetDestructor(&destruct_TGLPolyMarker);
      instance.SetStreamerFunc(&streamer_TGLPolyMarker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLPolyMarker*)
   {
      return GenerateInitInstanceLocal((::TGLPolyMarker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLPolyMarker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLRotateManip(void *p = 0);
   static void *newArray_TGLRotateManip(Long_t size, void *p);
   static void delete_TGLRotateManip(void *p);
   static void deleteArray_TGLRotateManip(void *p);
   static void destruct_TGLRotateManip(void *p);
   static void streamer_TGLRotateManip(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLRotateManip*)
   {
      ::TGLRotateManip *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLRotateManip >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLRotateManip", ::TGLRotateManip::Class_Version(), "TGLRotateManip.h", 18,
                  typeid(::TGLRotateManip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLRotateManip::Dictionary, isa_proxy, 16,
                  sizeof(::TGLRotateManip) );
      instance.SetNew(&new_TGLRotateManip);
      instance.SetNewArray(&newArray_TGLRotateManip);
      instance.SetDelete(&delete_TGLRotateManip);
      instance.SetDeleteArray(&deleteArray_TGLRotateManip);
      instance.SetDestructor(&destruct_TGLRotateManip);
      instance.SetStreamerFunc(&streamer_TGLRotateManip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLRotateManip*)
   {
      return GenerateInitInstanceLocal((::TGLRotateManip*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLRotateManip*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLSAFrame(void *p);
   static void deleteArray_TGLSAFrame(void *p);
   static void destruct_TGLSAFrame(void *p);
   static void streamer_TGLSAFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSAFrame*)
   {
      ::TGLSAFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSAFrame >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSAFrame", ::TGLSAFrame::Class_Version(), "TGLSAFrame.h", 28,
                  typeid(::TGLSAFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSAFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGLSAFrame) );
      instance.SetDelete(&delete_TGLSAFrame);
      instance.SetDeleteArray(&deleteArray_TGLSAFrame);
      instance.SetDestructor(&destruct_TGLSAFrame);
      instance.SetStreamerFunc(&streamer_TGLSAFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSAFrame*)
   {
      return GenerateInitInstanceLocal((::TGLSAFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSAFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLSAViewer(void *p);
   static void deleteArray_TGLSAViewer(void *p);
   static void destruct_TGLSAViewer(void *p);
   static void streamer_TGLSAViewer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSAViewer*)
   {
      ::TGLSAViewer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSAViewer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSAViewer", ::TGLSAViewer::Class_Version(), "TGLSAViewer.h", 37,
                  typeid(::TGLSAViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSAViewer::Dictionary, isa_proxy, 16,
                  sizeof(::TGLSAViewer) );
      instance.SetDelete(&delete_TGLSAViewer);
      instance.SetDeleteArray(&deleteArray_TGLSAViewer);
      instance.SetDestructor(&destruct_TGLSAViewer);
      instance.SetStreamerFunc(&streamer_TGLSAViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSAViewer*)
   {
      return GenerateInitInstanceLocal((::TGLSAViewer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSAViewer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLScaleManip(void *p = 0);
   static void *newArray_TGLScaleManip(Long_t size, void *p);
   static void delete_TGLScaleManip(void *p);
   static void deleteArray_TGLScaleManip(void *p);
   static void destruct_TGLScaleManip(void *p);
   static void streamer_TGLScaleManip(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLScaleManip*)
   {
      ::TGLScaleManip *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLScaleManip >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLScaleManip", ::TGLScaleManip::Class_Version(), "TGLScaleManip.h", 28,
                  typeid(::TGLScaleManip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLScaleManip::Dictionary, isa_proxy, 16,
                  sizeof(::TGLScaleManip) );
      instance.SetNew(&new_TGLScaleManip);
      instance.SetNewArray(&newArray_TGLScaleManip);
      instance.SetDelete(&delete_TGLScaleManip);
      instance.SetDeleteArray(&deleteArray_TGLScaleManip);
      instance.SetDestructor(&destruct_TGLScaleManip);
      instance.SetStreamerFunc(&streamer_TGLScaleManip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLScaleManip*)
   {
      return GenerateInitInstanceLocal((::TGLScaleManip*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLScaleManip*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLSceneBase(void *p);
   static void deleteArray_TGLSceneBase(void *p);
   static void destruct_TGLSceneBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSceneBase*)
   {
      ::TGLSceneBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSceneBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSceneBase", ::TGLSceneBase::Class_Version(), "TGLSceneBase.h", 32,
                  typeid(::TGLSceneBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSceneBase::Dictionary, isa_proxy, 4,
                  sizeof(::TGLSceneBase) );
      instance.SetDelete(&delete_TGLSceneBase);
      instance.SetDeleteArray(&deleteArray_TGLSceneBase);
      instance.SetDestructor(&destruct_TGLSceneBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSceneBase*)
   {
      return GenerateInitInstanceLocal((::TGLSceneBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSceneBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLSceneInfo(void *p = 0);
   static void *newArray_TGLSceneInfo(Long_t size, void *p);
   static void delete_TGLSceneInfo(void *p);
   static void deleteArray_TGLSceneInfo(void *p);
   static void destruct_TGLSceneInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSceneInfo*)
   {
      ::TGLSceneInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSceneInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSceneInfo", ::TGLSceneInfo::Class_Version(), "TGLSceneInfo.h", 26,
                  typeid(::TGLSceneInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSceneInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TGLSceneInfo) );
      instance.SetNew(&new_TGLSceneInfo);
      instance.SetNewArray(&newArray_TGLSceneInfo);
      instance.SetDelete(&delete_TGLSceneInfo);
      instance.SetDeleteArray(&deleteArray_TGLSceneInfo);
      instance.SetDestructor(&destruct_TGLSceneInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSceneInfo*)
   {
      return GenerateInitInstanceLocal((::TGLSceneInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSceneInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLScene(void *p = 0);
   static void *newArray_TGLScene(Long_t size, void *p);
   static void delete_TGLScene(void *p);
   static void deleteArray_TGLScene(void *p);
   static void destruct_TGLScene(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLScene*)
   {
      ::TGLScene *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLScene >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLScene", ::TGLScene::Class_Version(), "TGLScene.h", 30,
                  typeid(::TGLScene), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLScene::Dictionary, isa_proxy, 4,
                  sizeof(::TGLScene) );
      instance.SetNew(&new_TGLScene);
      instance.SetNewArray(&newArray_TGLScene);
      instance.SetDelete(&delete_TGLScene);
      instance.SetDeleteArray(&deleteArray_TGLScene);
      instance.SetDestructor(&destruct_TGLScene);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLScene*)
   {
      return GenerateInitInstanceLocal((::TGLScene*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLScene*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TGLScenecLcLTSceneInfo_Dictionary();
   static void TGLScenecLcLTSceneInfo_TClassManip(TClass*);
   static void *new_TGLScenecLcLTSceneInfo(void *p = 0);
   static void *newArray_TGLScenecLcLTSceneInfo(Long_t size, void *p);
   static void delete_TGLScenecLcLTSceneInfo(void *p);
   static void deleteArray_TGLScenecLcLTSceneInfo(void *p);
   static void destruct_TGLScenecLcLTSceneInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLScene::TSceneInfo*)
   {
      ::TGLScene::TSceneInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGLScene::TSceneInfo));
      static ::ROOT::TGenericClassInfo 
         instance("TGLScene::TSceneInfo", "TGLScene.h", 80,
                  typeid(::TGLScene::TSceneInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGLScenecLcLTSceneInfo_Dictionary, isa_proxy, 4,
                  sizeof(::TGLScene::TSceneInfo) );
      instance.SetNew(&new_TGLScenecLcLTSceneInfo);
      instance.SetNewArray(&newArray_TGLScenecLcLTSceneInfo);
      instance.SetDelete(&delete_TGLScenecLcLTSceneInfo);
      instance.SetDeleteArray(&deleteArray_TGLScenecLcLTSceneInfo);
      instance.SetDestructor(&destruct_TGLScenecLcLTSceneInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLScene::TSceneInfo*)
   {
      return GenerateInitInstanceLocal((::TGLScene::TSceneInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLScene::TSceneInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGLScenecLcLTSceneInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TGLScene::TSceneInfo*)0x0)->GetClass();
      TGLScenecLcLTSceneInfo_TClassManip(theClass);
   return theClass;
   }

   static void TGLScenecLcLTSceneInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLScenePad(void *p);
   static void deleteArray_TGLScenePad(void *p);
   static void destruct_TGLScenePad(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLScenePad*)
   {
      ::TGLScenePad *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLScenePad >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLScenePad", ::TGLScenePad::Class_Version(), "TGLScenePad.h", 25,
                  typeid(::TGLScenePad), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLScenePad::Dictionary, isa_proxy, 4,
                  sizeof(::TGLScenePad) );
      instance.SetDelete(&delete_TGLScenePad);
      instance.SetDeleteArray(&deleteArray_TGLScenePad);
      instance.SetDestructor(&destruct_TGLScenePad);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLScenePad*)
   {
      return GenerateInitInstanceLocal((::TGLScenePad*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLScenePad*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLSelectBuffer(void *p = 0);
   static void *newArray_TGLSelectBuffer(Long_t size, void *p);
   static void delete_TGLSelectBuffer(void *p);
   static void deleteArray_TGLSelectBuffer(void *p);
   static void destruct_TGLSelectBuffer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSelectBuffer*)
   {
      ::TGLSelectBuffer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSelectBuffer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSelectBuffer", ::TGLSelectBuffer::Class_Version(), "TGLSelectBuffer.h", 25,
                  typeid(::TGLSelectBuffer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSelectBuffer::Dictionary, isa_proxy, 4,
                  sizeof(::TGLSelectBuffer) );
      instance.SetNew(&new_TGLSelectBuffer);
      instance.SetNewArray(&newArray_TGLSelectBuffer);
      instance.SetDelete(&delete_TGLSelectBuffer);
      instance.SetDeleteArray(&deleteArray_TGLSelectBuffer);
      instance.SetDestructor(&destruct_TGLSelectBuffer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSelectBuffer*)
   {
      return GenerateInitInstanceLocal((::TGLSelectBuffer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSelectBuffer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLSphere(void *p);
   static void deleteArray_TGLSphere(void *p);
   static void destruct_TGLSphere(void *p);
   static void streamer_TGLSphere(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSphere*)
   {
      ::TGLSphere *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSphere >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSphere", ::TGLSphere::Class_Version(), "TGLSphere.h", 21,
                  typeid(::TGLSphere), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSphere::Dictionary, isa_proxy, 16,
                  sizeof(::TGLSphere) );
      instance.SetDelete(&delete_TGLSphere);
      instance.SetDeleteArray(&deleteArray_TGLSphere);
      instance.SetDestructor(&destruct_TGLSphere);
      instance.SetStreamerFunc(&streamer_TGLSphere);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSphere*)
   {
      return GenerateInitInstanceLocal((::TGLSphere*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSphere*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLSurfacePainter(void *p);
   static void deleteArray_TGLSurfacePainter(void *p);
   static void destruct_TGLSurfacePainter(void *p);
   static void streamer_TGLSurfacePainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLSurfacePainter*)
   {
      ::TGLSurfacePainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLSurfacePainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLSurfacePainter", ::TGLSurfacePainter::Class_Version(), "TGLSurfacePainter.h", 24,
                  typeid(::TGLSurfacePainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLSurfacePainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLSurfacePainter) );
      instance.SetDelete(&delete_TGLSurfacePainter);
      instance.SetDeleteArray(&deleteArray_TGLSurfacePainter);
      instance.SetDestructor(&destruct_TGLSurfacePainter);
      instance.SetStreamerFunc(&streamer_TGLSurfacePainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLSurfacePainter*)
   {
      return GenerateInitInstanceLocal((::TGLSurfacePainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLSurfacePainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLTF3Painter(void *p);
   static void deleteArray_TGLTF3Painter(void *p);
   static void destruct_TGLTF3Painter(void *p);
   static void streamer_TGLTF3Painter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLTF3Painter*)
   {
      ::TGLTF3Painter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLTF3Painter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLTF3Painter", ::TGLTF3Painter::Class_Version(), "TGLTF3Painter.h", 29,
                  typeid(::TGLTF3Painter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLTF3Painter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLTF3Painter) );
      instance.SetDelete(&delete_TGLTF3Painter);
      instance.SetDeleteArray(&deleteArray_TGLTF3Painter);
      instance.SetDestructor(&destruct_TGLTF3Painter);
      instance.SetStreamerFunc(&streamer_TGLTF3Painter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLTF3Painter*)
   {
      return GenerateInitInstanceLocal((::TGLTF3Painter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLTF3Painter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLIsoPainter(void *p);
   static void deleteArray_TGLIsoPainter(void *p);
   static void destruct_TGLIsoPainter(void *p);
   static void streamer_TGLIsoPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLIsoPainter*)
   {
      ::TGLIsoPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLIsoPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLIsoPainter", ::TGLIsoPainter::Class_Version(), "TGLTF3Painter.h", 85,
                  typeid(::TGLIsoPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLIsoPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLIsoPainter) );
      instance.SetDelete(&delete_TGLIsoPainter);
      instance.SetDeleteArray(&deleteArray_TGLIsoPainter);
      instance.SetDestructor(&destruct_TGLIsoPainter);
      instance.SetStreamerFunc(&streamer_TGLIsoPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLIsoPainter*)
   {
      return GenerateInitInstanceLocal((::TGLIsoPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLIsoPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLTH3Composition(void *p = 0);
   static void *newArray_TGLTH3Composition(Long_t size, void *p);
   static void delete_TGLTH3Composition(void *p);
   static void deleteArray_TGLTH3Composition(void *p);
   static void destruct_TGLTH3Composition(void *p);
   static void directoryAutoAdd_TGLTH3Composition(void *obj, TDirectory *dir);
   static void streamer_TGLTH3Composition(TBuffer &buf, void *obj);
   static Long64_t merge_TGLTH3Composition(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLTH3Composition*)
   {
      ::TGLTH3Composition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLTH3Composition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLTH3Composition", ::TGLTH3Composition::Class_Version(), "TGLTH3Composition.h", 27,
                  typeid(::TGLTH3Composition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLTH3Composition::Dictionary, isa_proxy, 16,
                  sizeof(::TGLTH3Composition) );
      instance.SetNew(&new_TGLTH3Composition);
      instance.SetNewArray(&newArray_TGLTH3Composition);
      instance.SetDelete(&delete_TGLTH3Composition);
      instance.SetDeleteArray(&deleteArray_TGLTH3Composition);
      instance.SetDestructor(&destruct_TGLTH3Composition);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TGLTH3Composition);
      instance.SetStreamerFunc(&streamer_TGLTH3Composition);
      instance.SetMerge(&merge_TGLTH3Composition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLTH3Composition*)
   {
      return GenerateInitInstanceLocal((::TGLTH3Composition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLTH3Composition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLTH3CompositionPainter(void *p);
   static void deleteArray_TGLTH3CompositionPainter(void *p);
   static void destruct_TGLTH3CompositionPainter(void *p);
   static void streamer_TGLTH3CompositionPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLTH3CompositionPainter*)
   {
      ::TGLTH3CompositionPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLTH3CompositionPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLTH3CompositionPainter", ::TGLTH3CompositionPainter::Class_Version(), "TGLTH3Composition.h", 63,
                  typeid(::TGLTH3CompositionPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLTH3CompositionPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLTH3CompositionPainter) );
      instance.SetDelete(&delete_TGLTH3CompositionPainter);
      instance.SetDeleteArray(&deleteArray_TGLTH3CompositionPainter);
      instance.SetDestructor(&destruct_TGLTH3CompositionPainter);
      instance.SetStreamerFunc(&streamer_TGLTH3CompositionPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLTH3CompositionPainter*)
   {
      return GenerateInitInstanceLocal((::TGLTH3CompositionPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLTH3CompositionPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLText(void *p = 0);
   static void *newArray_TGLText(Long_t size, void *p);
   static void delete_TGLText(void *p);
   static void deleteArray_TGLText(void *p);
   static void destruct_TGLText(void *p);
   static void streamer_TGLText(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLText*)
   {
      ::TGLText *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLText >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLText", ::TGLText::Class_Version(), "TGLText.h", 19,
                  typeid(::TGLText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLText::Dictionary, isa_proxy, 16,
                  sizeof(::TGLText) );
      instance.SetNew(&new_TGLText);
      instance.SetNewArray(&newArray_TGLText);
      instance.SetDelete(&delete_TGLText);
      instance.SetDeleteArray(&deleteArray_TGLText);
      instance.SetDestructor(&destruct_TGLText);
      instance.SetStreamerFunc(&streamer_TGLText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLText*)
   {
      return GenerateInitInstanceLocal((::TGLText*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLText*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLTransManip(void *p = 0);
   static void *newArray_TGLTransManip(Long_t size, void *p);
   static void delete_TGLTransManip(void *p);
   static void deleteArray_TGLTransManip(void *p);
   static void destruct_TGLTransManip(void *p);
   static void streamer_TGLTransManip(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLTransManip*)
   {
      ::TGLTransManip *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLTransManip >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLTransManip", ::TGLTransManip::Class_Version(), "TGLTransManip.h", 27,
                  typeid(::TGLTransManip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLTransManip::Dictionary, isa_proxy, 16,
                  sizeof(::TGLTransManip) );
      instance.SetNew(&new_TGLTransManip);
      instance.SetNewArray(&newArray_TGLTransManip);
      instance.SetDelete(&delete_TGLTransManip);
      instance.SetDeleteArray(&deleteArray_TGLTransManip);
      instance.SetDestructor(&destruct_TGLTransManip);
      instance.SetStreamerFunc(&streamer_TGLTransManip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLTransManip*)
   {
      return GenerateInitInstanceLocal((::TGLTransManip*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLTransManip*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGLViewerEditor(void *p = 0);
   static void *newArray_TGLViewerEditor(Long_t size, void *p);
   static void delete_TGLViewerEditor(void *p);
   static void deleteArray_TGLViewerEditor(void *p);
   static void destruct_TGLViewerEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLViewerEditor*)
   {
      ::TGLViewerEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLViewerEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLViewerEditor", ::TGLViewerEditor::Class_Version(), "TGLViewerEditor.h", 36,
                  typeid(::TGLViewerEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLViewerEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TGLViewerEditor) );
      instance.SetNew(&new_TGLViewerEditor);
      instance.SetNewArray(&newArray_TGLViewerEditor);
      instance.SetDelete(&delete_TGLViewerEditor);
      instance.SetDeleteArray(&deleteArray_TGLViewerEditor);
      instance.SetDestructor(&destruct_TGLViewerEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLViewerEditor*)
   {
      return GenerateInitInstanceLocal((::TGLViewerEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLViewerEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLVoxelPainter(void *p);
   static void deleteArray_TGLVoxelPainter(void *p);
   static void destruct_TGLVoxelPainter(void *p);
   static void streamer_TGLVoxelPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLVoxelPainter*)
   {
      ::TGLVoxelPainter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLVoxelPainter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLVoxelPainter", ::TGLVoxelPainter::Class_Version(), "TGLVoxelPainter.h", 16,
                  typeid(::TGLVoxelPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLVoxelPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGLVoxelPainter) );
      instance.SetDelete(&delete_TGLVoxelPainter);
      instance.SetDeleteArray(&deleteArray_TGLVoxelPainter);
      instance.SetDestructor(&destruct_TGLVoxelPainter);
      instance.SetStreamerFunc(&streamer_TGLVoxelPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLVoxelPainter*)
   {
      return GenerateInitInstanceLocal((::TGLVoxelPainter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLVoxelPainter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGLWidget(void *p);
   static void deleteArray_TGLWidget(void *p);
   static void destruct_TGLWidget(void *p);
   static void streamer_TGLWidget(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGLWidget*)
   {
      ::TGLWidget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGLWidget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGLWidget", ::TGLWidget::Class_Version(), "TGLWidget.h", 27,
                  typeid(::TGLWidget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGLWidget::Dictionary, isa_proxy, 16,
                  sizeof(::TGLWidget) );
      instance.SetDelete(&delete_TGLWidget);
      instance.SetDeleteArray(&deleteArray_TGLWidget);
      instance.SetDestructor(&destruct_TGLWidget);
      instance.SetStreamerFunc(&streamer_TGLWidget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGLWidget*)
   {
      return GenerateInitInstanceLocal((::TGLWidget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGLWidget*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2GL(void *p = 0);
   static void *newArray_TH2GL(Long_t size, void *p);
   static void delete_TH2GL(void *p);
   static void deleteArray_TH2GL(void *p);
   static void destruct_TH2GL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2GL*)
   {
      ::TH2GL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2GL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TH2GL", ::TH2GL::Class_Version(), "TH2GL.h", 23,
                  typeid(::TH2GL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2GL::Dictionary, isa_proxy, 4,
                  sizeof(::TH2GL) );
      instance.SetNew(&new_TH2GL);
      instance.SetNewArray(&newArray_TH2GL);
      instance.SetDelete(&delete_TH2GL);
      instance.SetDeleteArray(&deleteArray_TH2GL);
      instance.SetDestructor(&destruct_TH2GL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2GL*)
   {
      return GenerateInitInstanceLocal((::TH2GL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TH2GL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH3GL(void *p = 0);
   static void *newArray_TH3GL(Long_t size, void *p);
   static void delete_TH3GL(void *p);
   static void deleteArray_TH3GL(void *p);
   static void destruct_TH3GL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH3GL*)
   {
      ::TH3GL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH3GL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TH3GL", ::TH3GL::Class_Version(), "TH3GL.h", 26,
                  typeid(::TH3GL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH3GL::Dictionary, isa_proxy, 4,
                  sizeof(::TH3GL) );
      instance.SetNew(&new_TH3GL);
      instance.SetNewArray(&newArray_TH3GL);
      instance.SetDelete(&delete_TH3GL);
      instance.SetDeleteArray(&deleteArray_TH3GL);
      instance.SetDestructor(&destruct_TH3GL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH3GL*)
   {
      return GenerateInitInstanceLocal((::TH3GL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TH3GL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPointSet3DGL(void *p = 0);
   static void *newArray_TPointSet3DGL(Long_t size, void *p);
   static void delete_TPointSet3DGL(void *p);
   static void deleteArray_TPointSet3DGL(void *p);
   static void destruct_TPointSet3DGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPointSet3DGL*)
   {
      ::TPointSet3DGL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPointSet3DGL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPointSet3DGL", ::TPointSet3DGL::Class_Version(), "TPointSet3DGL.h", 20,
                  typeid(::TPointSet3DGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPointSet3DGL::Dictionary, isa_proxy, 4,
                  sizeof(::TPointSet3DGL) );
      instance.SetNew(&new_TPointSet3DGL);
      instance.SetNewArray(&newArray_TPointSet3DGL);
      instance.SetDelete(&delete_TPointSet3DGL);
      instance.SetDeleteArray(&deleteArray_TPointSet3DGL);
      instance.SetDestructor(&destruct_TPointSet3DGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPointSet3DGL*)
   {
      return GenerateInitInstanceLocal((::TPointSet3DGL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPointSet3DGL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TX11GLManager(void *p = 0);
   static void *newArray_TX11GLManager(Long_t size, void *p);
   static void delete_TX11GLManager(void *p);
   static void deleteArray_TX11GLManager(void *p);
   static void destruct_TX11GLManager(void *p);
   static void streamer_TX11GLManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TX11GLManager*)
   {
      ::TX11GLManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TX11GLManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TX11GLManager", ::TX11GLManager::Class_Version(), "TX11GL.h", 34,
                  typeid(::TX11GLManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TX11GLManager::Dictionary, isa_proxy, 16,
                  sizeof(::TX11GLManager) );
      instance.SetNew(&new_TX11GLManager);
      instance.SetNewArray(&newArray_TX11GLManager);
      instance.SetDelete(&delete_TX11GLManager);
      instance.SetDeleteArray(&deleteArray_TX11GLManager);
      instance.SetDestructor(&destruct_TX11GLManager);
      instance.SetStreamerFunc(&streamer_TX11GLManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TX11GLManager*)
   {
      return GenerateInitInstanceLocal((::TX11GLManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TX11GLManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArcBall::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArcBall::Class_Name()
{
   return "TArcBall";
}

//______________________________________________________________________________
const char *TArcBall::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArcBall*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArcBall::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArcBall*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArcBall::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArcBall*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArcBall::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArcBall*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLVertex3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLVertex3::Class_Name()
{
   return "TGLVertex3";
}

//______________________________________________________________________________
const char *TGLVertex3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVertex3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLVertex3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVertex3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLVertex3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVertex3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLVertex3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVertex3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLVector3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLVector3::Class_Name()
{
   return "TGLVector3";
}

//______________________________________________________________________________
const char *TGLVector3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVector3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLVector3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVector3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLVector3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVector3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLVector3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVector3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLLine3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLLine3::Class_Name()
{
   return "TGLLine3";
}

//______________________________________________________________________________
const char *TGLLine3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLine3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLLine3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLine3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLLine3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLine3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLLine3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLine3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLRect::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLRect::Class_Name()
{
   return "TGLRect";
}

//______________________________________________________________________________
const char *TGLRect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLRect*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLRect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLRect*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLRect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLRect*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLRect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLRect*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPlane::Class_Name()
{
   return "TGLPlane";
}

//______________________________________________________________________________
const char *TGLPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlane*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLMatrix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLMatrix::Class_Name()
{
   return "TGLMatrix";
}

//______________________________________________________________________________
const char *TGLMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLMatrix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLMatrix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLMatrix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLMatrix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLColor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLColor::Class_Name()
{
   return "TGLColor";
}

//______________________________________________________________________________
const char *TGLColor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLColor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLColor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLColor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLColor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLColor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLColor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLColor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLColorSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLColorSet::Class_Name()
{
   return "TGLColorSet";
}

//______________________________________________________________________________
const char *TGLColorSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLColorSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLColorSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLColorSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLColorSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLColorSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLColorSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLColorSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLUtil::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLUtil::Class_Name()
{
   return "TGLUtil";
}

//______________________________________________________________________________
const char *TGLUtil::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLUtil::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLUtil::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLUtil::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLUtil::TColorLocker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLUtil::TColorLocker::Class_Name()
{
   return "TGLUtil::TColorLocker";
}

//______________________________________________________________________________
const char *TGLUtil::TColorLocker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TColorLocker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLUtil::TColorLocker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TColorLocker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLUtil::TColorLocker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TColorLocker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLUtil::TColorLocker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TColorLocker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLUtil::TDrawQualityModifier::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLUtil::TDrawQualityModifier::Class_Name()
{
   return "TGLUtil::TDrawQualityModifier";
}

//______________________________________________________________________________
const char *TGLUtil::TDrawQualityModifier::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityModifier*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLUtil::TDrawQualityModifier::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityModifier*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLUtil::TDrawQualityModifier::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityModifier*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLUtil::TDrawQualityModifier::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityModifier*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLUtil::TDrawQualityScaler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLUtil::TDrawQualityScaler::Class_Name()
{
   return "TGLUtil::TDrawQualityScaler";
}

//______________________________________________________________________________
const char *TGLUtil::TDrawQualityScaler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityScaler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLUtil::TDrawQualityScaler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityScaler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLUtil::TDrawQualityScaler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityScaler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLUtil::TDrawQualityScaler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLUtil::TDrawQualityScaler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSelectionBuffer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSelectionBuffer::Class_Name()
{
   return "TGLSelectionBuffer";
}

//______________________________________________________________________________
const char *TGLSelectionBuffer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectionBuffer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSelectionBuffer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectionBuffer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSelectionBuffer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectionBuffer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSelectionBuffer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectionBuffer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLBoundingBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLBoundingBox::Class_Name()
{
   return "TGLBoundingBox";
}

//______________________________________________________________________________
const char *TGLBoundingBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBoundingBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLBoundingBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBoundingBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLBoundingBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBoundingBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLBoundingBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBoundingBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLLogicalShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLLogicalShape::Class_Name()
{
   return "TGLLogicalShape";
}

//______________________________________________________________________________
const char *TGLLogicalShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLogicalShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLLogicalShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLogicalShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLLogicalShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLogicalShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLLogicalShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLogicalShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLObject::Class_Name()
{
   return "TGLObject";
}

//______________________________________________________________________________
const char *TGLObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLObject*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPlotBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPlotBox::Class_Name()
{
   return "TGLPlotBox";
}

//______________________________________________________________________________
const char *TGLPlotBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPlotBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPlotBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPlotBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLBoxCut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLBoxCut::Class_Name()
{
   return "TGLBoxCut";
}

//______________________________________________________________________________
const char *TGLBoxCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBoxCut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLBoxCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBoxCut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLBoxCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBoxCut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLBoxCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBoxCut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLTH3Slice::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLTH3Slice::Class_Name()
{
   return "TGLTH3Slice";
}

//______________________________________________________________________________
const char *TGLTH3Slice::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3Slice*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLTH3Slice::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3Slice*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLTH3Slice::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3Slice*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLTH3Slice::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3Slice*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPlotPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPlotPainter::Class_Name()
{
   return "TGLPlotPainter";
}

//______________________________________________________________________________
const char *TGLPlotPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPlotPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPlotPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPlotPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPlotCoordinates::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPlotCoordinates::Class_Name()
{
   return "TGLPlotCoordinates";
}

//______________________________________________________________________________
const char *TGLPlotCoordinates::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotCoordinates*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPlotCoordinates::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotCoordinates*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPlotCoordinates::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotCoordinates*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPlotCoordinates::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotCoordinates*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPlot3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPlot3D::Class_Name()
{
   return "TGLPlot3D";
}

//______________________________________________________________________________
const char *TGLPlot3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlot3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPlot3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlot3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPlot3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlot3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPlot3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlot3D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF2GL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TF2GL::Class_Name()
{
   return "TF2GL";
}

//______________________________________________________________________________
const char *TF2GL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF2GL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TF2GL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF2GL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF2GL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF2GL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF2GL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF2GL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPlotCamera::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPlotCamera::Class_Name()
{
   return "TGLPlotCamera";
}

//______________________________________________________________________________
const char *TGLPlotCamera::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotCamera*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPlotCamera::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotCamera*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPlotCamera::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotCamera*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPlotCamera::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPlotCamera*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLHistPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLHistPainter::Class_Name()
{
   return "TGLHistPainter";
}

//______________________________________________________________________________
const char *TGLHistPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLHistPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLHistPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLHistPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLHistPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLHistPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLHistPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLHistPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGL5DDataSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGL5DDataSet::Class_Name()
{
   return "TGL5DDataSet";
}

//______________________________________________________________________________
const char *TGL5DDataSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGL5DDataSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGL5DDataSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGL5DDataSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGL5DDataSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGL5DDataSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGL5DDataSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGL5DDataSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGL5DDataSetEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGL5DDataSetEditor::Class_Name()
{
   return "TGL5DDataSetEditor";
}

//______________________________________________________________________________
const char *TGL5DDataSetEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGL5DDataSetEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGL5DDataSetEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGL5DDataSetEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGL5DDataSetEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGL5DDataSetEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGL5DDataSetEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGL5DDataSetEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLAdapter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLAdapter::Class_Name()
{
   return "TGLAdapter";
}

//______________________________________________________________________________
const char *TGLAdapter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAdapter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLAdapter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAdapter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLAdapter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAdapter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLAdapter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAdapter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLOverlayElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLOverlayElement::Class_Name()
{
   return "TGLOverlayElement";
}

//______________________________________________________________________________
const char *TGLOverlayElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLOverlayElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLOverlayElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLOverlayElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLOverlayList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLOverlayList::Class_Name()
{
   return "TGLOverlayList";
}

//______________________________________________________________________________
const char *TGLOverlayList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLOverlayList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLOverlayList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLOverlayList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLFont::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLFont::Class_Name()
{
   return "TGLFont";
}

//______________________________________________________________________________
const char *TGLFont::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFont*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLFont::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFont*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLFont::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFont*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLFont::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFont*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLFontManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLFontManager::Class_Name()
{
   return "TGLFontManager";
}

//______________________________________________________________________________
const char *TGLFontManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFontManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLFontManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFontManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLFontManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFontManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLFontManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFontManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLAnnotation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLAnnotation::Class_Name()
{
   return "TGLAnnotation";
}

//______________________________________________________________________________
const char *TGLAnnotation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAnnotation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLAnnotation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAnnotation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLAnnotation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAnnotation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLAnnotation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAnnotation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLAutoRotator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLAutoRotator::Class_Name()
{
   return "TGLAutoRotator";
}

//______________________________________________________________________________
const char *TGLAutoRotator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAutoRotator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLAutoRotator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAutoRotator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLAutoRotator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAutoRotator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLAutoRotator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAutoRotator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLAxis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLAxis::Class_Name()
{
   return "TGLAxis";
}

//______________________________________________________________________________
const char *TGLAxis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAxis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLAxis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAxis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLAxis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAxis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLAxis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAxis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLAxisPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLAxisPainter::Class_Name()
{
   return "TGLAxisPainter";
}

//______________________________________________________________________________
const char *TGLAxisPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAxisPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLAxisPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAxisPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLAxisPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAxisPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLAxisPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAxisPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLAxisPainterBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLAxisPainterBox::Class_Name()
{
   return "TGLAxisPainterBox";
}

//______________________________________________________________________________
const char *TGLAxisPainterBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAxisPainterBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLAxisPainterBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLAxisPainterBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLAxisPainterBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAxisPainterBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLAxisPainterBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLAxisPainterBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLQuadric::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLQuadric::Class_Name()
{
   return "TGLQuadric";
}

//______________________________________________________________________________
const char *TGLQuadric::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLQuadric*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLQuadric::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLQuadric*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLQuadric::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLQuadric*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLQuadric::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLQuadric*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLBoxPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLBoxPainter::Class_Name()
{
   return "TGLBoxPainter";
}

//______________________________________________________________________________
const char *TGLBoxPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBoxPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLBoxPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLBoxPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLBoxPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBoxPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLBoxPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLBoxPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLCamera::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLCamera::Class_Name()
{
   return "TGLCamera";
}

//______________________________________________________________________________
const char *TGLCamera::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLCamera*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLCamera::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLCamera*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLCamera::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLCamera*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLCamera::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLCamera*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLCameraGuide::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLCameraGuide::Class_Name()
{
   return "TGLCameraGuide";
}

//______________________________________________________________________________
const char *TGLCameraGuide::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLCameraGuide*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLCameraGuide::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLCameraGuide*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLCameraGuide::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLCameraGuide*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLCameraGuide::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLCameraGuide*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLCameraOverlay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLCameraOverlay::Class_Name()
{
   return "TGLCameraOverlay";
}

//______________________________________________________________________________
const char *TGLCameraOverlay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLCameraOverlay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLCameraOverlay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLCameraOverlay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLCameraOverlay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLCameraOverlay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLCameraOverlay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLCameraOverlay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPhysicalShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPhysicalShape::Class_Name()
{
   return "TGLPhysicalShape";
}

//______________________________________________________________________________
const char *TGLPhysicalShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPhysicalShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPhysicalShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPhysicalShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPhysicalShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPhysicalShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPhysicalShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPhysicalShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLClip::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLClip::Class_Name()
{
   return "TGLClip";
}

//______________________________________________________________________________
const char *TGLClip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClip*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLClip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClip*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLClip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClip*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLClip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClip*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLClipPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLClipPlane::Class_Name()
{
   return "TGLClipPlane";
}

//______________________________________________________________________________
const char *TGLClipPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLClipPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLClipPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLClipPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipPlane*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLClipBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLClipBox::Class_Name()
{
   return "TGLClipBox";
}

//______________________________________________________________________________
const char *TGLClipBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLClipBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLClipBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLClipBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLClipSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLClipSet::Class_Name()
{
   return "TGLClipSet";
}

//______________________________________________________________________________
const char *TGLClipSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLClipSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLClipSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLClipSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLClipSetSubEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLClipSetSubEditor::Class_Name()
{
   return "TGLClipSetSubEditor";
}

//______________________________________________________________________________
const char *TGLClipSetSubEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSetSubEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLClipSetSubEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSetSubEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLClipSetSubEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSetSubEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLClipSetSubEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSetSubEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLClipSetEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLClipSetEditor::Class_Name()
{
   return "TGLClipSetEditor";
}

//______________________________________________________________________________
const char *TGLClipSetEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSetEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLClipSetEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSetEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLClipSetEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSetEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLClipSetEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLClipSetEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLFormat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLFormat::Class_Name()
{
   return "TGLFormat";
}

//______________________________________________________________________________
const char *TGLFormat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFormat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLFormat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFormat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLFormat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFormat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLFormat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFormat*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLContext::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLContext::Class_Name()
{
   return "TGLContext";
}

//______________________________________________________________________________
const char *TGLContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLContext*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLContext*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLContext*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLContext*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLContextIdentity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLContextIdentity::Class_Name()
{
   return "TGLContextIdentity";
}

//______________________________________________________________________________
const char *TGLContextIdentity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLContextIdentity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLContextIdentity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLContextIdentity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLContextIdentity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLContextIdentity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLContextIdentity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLContextIdentity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLCylinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLCylinder::Class_Name()
{
   return "TGLCylinder";
}

//______________________________________________________________________________
const char *TGLCylinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLCylinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLCylinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLCylinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLCylinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLCylinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLCylinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLCylinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLLockable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLLockable::Class_Name()
{
   return "TGLLockable";
}

//______________________________________________________________________________
const char *TGLLockable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLockable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLLockable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLockable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLLockable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLockable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLLockable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLockable*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLViewerBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLViewerBase::Class_Name()
{
   return "TGLViewerBase";
}

//______________________________________________________________________________
const char *TGLViewerBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLViewerBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLViewerBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLViewerBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLViewerBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLViewerBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLViewerBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLViewerBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLStopwatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLStopwatch::Class_Name()
{
   return "TGLStopwatch";
}

//______________________________________________________________________________
const char *TGLStopwatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLStopwatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLStopwatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLStopwatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLStopwatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLStopwatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLStopwatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLStopwatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLRnrCtx::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLRnrCtx::Class_Name()
{
   return "TGLRnrCtx";
}

//______________________________________________________________________________
const char *TGLRnrCtx::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLRnrCtx*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLRnrCtx::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLRnrCtx*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLRnrCtx::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLRnrCtx*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLRnrCtx::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLRnrCtx*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSelectRecordBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSelectRecordBase::Class_Name()
{
   return "TGLSelectRecordBase";
}

//______________________________________________________________________________
const char *TGLSelectRecordBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectRecordBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSelectRecordBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectRecordBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSelectRecordBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectRecordBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSelectRecordBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectRecordBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSelectRecord::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSelectRecord::Class_Name()
{
   return "TGLSelectRecord";
}

//______________________________________________________________________________
const char *TGLSelectRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectRecord*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSelectRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectRecord*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSelectRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectRecord*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSelectRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectRecord*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLOvlSelectRecord::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLOvlSelectRecord::Class_Name()
{
   return "TGLOvlSelectRecord";
}

//______________________________________________________________________________
const char *TGLOvlSelectRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOvlSelectRecord*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLOvlSelectRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOvlSelectRecord*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLOvlSelectRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOvlSelectRecord*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLOvlSelectRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOvlSelectRecord*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPerspectiveCamera::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPerspectiveCamera::Class_Name()
{
   return "TGLPerspectiveCamera";
}

//______________________________________________________________________________
const char *TGLPerspectiveCamera::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPerspectiveCamera*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPerspectiveCamera::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPerspectiveCamera*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPerspectiveCamera::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPerspectiveCamera*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPerspectiveCamera::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPerspectiveCamera*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLOrthoCamera::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLOrthoCamera::Class_Name()
{
   return "TGLOrthoCamera";
}

//______________________________________________________________________________
const char *TGLOrthoCamera::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOrthoCamera*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLOrthoCamera::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOrthoCamera*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLOrthoCamera::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOrthoCamera*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLOrthoCamera::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOrthoCamera*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLViewer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLViewer::Class_Name()
{
   return "TGLViewer";
}

//______________________________________________________________________________
const char *TGLViewer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLViewer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLViewer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLViewer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLViewer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLViewer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLViewer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLViewer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLFaderHelper::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLFaderHelper::Class_Name()
{
   return "TGLFaderHelper";
}

//______________________________________________________________________________
const char *TGLFaderHelper::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFaderHelper*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLFaderHelper::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFaderHelper*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLFaderHelper::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFaderHelper*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLFaderHelper::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFaderHelper*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLEmbeddedViewer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLEmbeddedViewer::Class_Name()
{
   return "TGLEmbeddedViewer";
}

//______________________________________________________________________________
const char *TGLEmbeddedViewer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLEmbeddedViewer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLEmbeddedViewer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLEmbeddedViewer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLEmbeddedViewer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLEmbeddedViewer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLEmbeddedViewer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLEmbeddedViewer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLEventHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLEventHandler::Class_Name()
{
   return "TGLEventHandler";
}

//______________________________________________________________________________
const char *TGLEventHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLEventHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLEventHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLEventHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLEventHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLEventHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLEventHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLEventHandler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLFBO::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLFBO::Class_Name()
{
   return "TGLFBO";
}

//______________________________________________________________________________
const char *TGLFBO::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFBO*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLFBO::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFBO*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLFBO::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFBO*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLFBO::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFBO*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLFaceSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLFaceSet::Class_Name()
{
   return "TGLFaceSet";
}

//______________________________________________________________________________
const char *TGLFaceSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFaceSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLFaceSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLFaceSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLFaceSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFaceSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLFaceSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLFaceSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLH2PolyPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLH2PolyPainter::Class_Name()
{
   return "TGLH2PolyPainter";
}

//______________________________________________________________________________
const char *TGLH2PolyPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLH2PolyPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLH2PolyPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLH2PolyPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLH2PolyPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLH2PolyPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLH2PolyPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLH2PolyPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLLegoPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLLegoPainter::Class_Name()
{
   return "TGLLegoPainter";
}

//______________________________________________________________________________
const char *TGLLegoPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLegoPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLLegoPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLegoPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLLegoPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLegoPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLLegoPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLegoPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLLightSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLLightSet::Class_Name()
{
   return "TGLLightSet";
}

//______________________________________________________________________________
const char *TGLLightSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLLightSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLLightSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLLightSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLLightSetSubEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLLightSetSubEditor::Class_Name()
{
   return "TGLLightSetSubEditor";
}

//______________________________________________________________________________
const char *TGLLightSetSubEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSetSubEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLLightSetSubEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSetSubEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLLightSetSubEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSetSubEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLLightSetSubEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSetSubEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLLightSetEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLLightSetEditor::Class_Name()
{
   return "TGLLightSetEditor";
}

//______________________________________________________________________________
const char *TGLLightSetEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSetEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLLightSetEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSetEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLLightSetEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSetEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLLightSetEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLLightSetEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLManip::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLManip::Class_Name()
{
   return "TGLManip";
}

//______________________________________________________________________________
const char *TGLManip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLManip*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLManip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLManip*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLManip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLManip*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLManip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLManip*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPShapeRef::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPShapeRef::Class_Name()
{
   return "TGLPShapeRef";
}

//______________________________________________________________________________
const char *TGLPShapeRef::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeRef*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPShapeRef::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeRef*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPShapeRef::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeRef*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPShapeRef::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeRef*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLManipSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLManipSet::Class_Name()
{
   return "TGLManipSet";
}

//______________________________________________________________________________
const char *TGLManipSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLManipSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLManipSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLManipSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLManipSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLManipSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLManipSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLManipSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLOutput::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLOutput::Class_Name()
{
   return "TGLOutput";
}

//______________________________________________________________________________
const char *TGLOutput::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOutput*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLOutput::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOutput*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLOutput::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOutput*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLOutput::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOutput*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLOverlayButton::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLOverlayButton::Class_Name()
{
   return "TGLOverlayButton";
}

//______________________________________________________________________________
const char *TGLOverlayButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayButton*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLOverlayButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayButton*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLOverlayButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayButton*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLOverlayButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLOverlayButton*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPShapeObj::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPShapeObj::Class_Name()
{
   return "TGLPShapeObj";
}

//______________________________________________________________________________
const char *TGLPShapeObj::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeObj*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPShapeObj::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeObj*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPShapeObj::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeObj*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPShapeObj::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeObj*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPShapeObjEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPShapeObjEditor::Class_Name()
{
   return "TGLPShapeObjEditor";
}

//______________________________________________________________________________
const char *TGLPShapeObjEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeObjEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPShapeObjEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeObjEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPShapeObjEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeObjEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPShapeObjEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPShapeObjEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPadPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPadPainter::Class_Name()
{
   return "TGLPadPainter";
}

//______________________________________________________________________________
const char *TGLPadPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPadPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPadPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPadPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPadPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPadPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPadPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPadPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLParametricEquation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLParametricEquation::Class_Name()
{
   return "TGLParametricEquation";
}

//______________________________________________________________________________
const char *TGLParametricEquation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricEquation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLParametricEquation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricEquation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLParametricEquation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricEquation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLParametricEquation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricEquation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLParametricPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLParametricPlot::Class_Name()
{
   return "TGLParametricPlot";
}

//______________________________________________________________________________
const char *TGLParametricPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLParametricPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLParametricPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLParametricPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricPlot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLParametricEquationGL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLParametricEquationGL::Class_Name()
{
   return "TGLParametricEquationGL";
}

//______________________________________________________________________________
const char *TGLParametricEquationGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricEquationGL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLParametricEquationGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricEquationGL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLParametricEquationGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricEquationGL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLParametricEquationGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLParametricEquationGL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPolyLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPolyLine::Class_Name()
{
   return "TGLPolyLine";
}

//______________________________________________________________________________
const char *TGLPolyLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPolyLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPolyLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPolyLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPolyLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPolyLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPolyLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPolyLine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLPolyMarker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLPolyMarker::Class_Name()
{
   return "TGLPolyMarker";
}

//______________________________________________________________________________
const char *TGLPolyMarker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPolyMarker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLPolyMarker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLPolyMarker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLPolyMarker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPolyMarker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLPolyMarker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLPolyMarker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLRotateManip::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLRotateManip::Class_Name()
{
   return "TGLRotateManip";
}

//______________________________________________________________________________
const char *TGLRotateManip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLRotateManip*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLRotateManip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLRotateManip*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLRotateManip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLRotateManip*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLRotateManip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLRotateManip*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSAFrame::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSAFrame::Class_Name()
{
   return "TGLSAFrame";
}

//______________________________________________________________________________
const char *TGLSAFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSAFrame*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSAFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSAFrame*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSAFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSAFrame*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSAFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSAFrame*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSAViewer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSAViewer::Class_Name()
{
   return "TGLSAViewer";
}

//______________________________________________________________________________
const char *TGLSAViewer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSAViewer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSAViewer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSAViewer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSAViewer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSAViewer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSAViewer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSAViewer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLScaleManip::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLScaleManip::Class_Name()
{
   return "TGLScaleManip";
}

//______________________________________________________________________________
const char *TGLScaleManip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLScaleManip*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLScaleManip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLScaleManip*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLScaleManip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLScaleManip*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLScaleManip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLScaleManip*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSceneBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSceneBase::Class_Name()
{
   return "TGLSceneBase";
}

//______________________________________________________________________________
const char *TGLSceneBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSceneBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSceneBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSceneBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSceneBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSceneBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSceneBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSceneBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSceneInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSceneInfo::Class_Name()
{
   return "TGLSceneInfo";
}

//______________________________________________________________________________
const char *TGLSceneInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSceneInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSceneInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSceneInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSceneInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSceneInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSceneInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSceneInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLScene::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLScene::Class_Name()
{
   return "TGLScene";
}

//______________________________________________________________________________
const char *TGLScene::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLScene*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLScene::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLScene*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLScene::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLScene*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLScene::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLScene*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLScenePad::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLScenePad::Class_Name()
{
   return "TGLScenePad";
}

//______________________________________________________________________________
const char *TGLScenePad::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLScenePad*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLScenePad::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLScenePad*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLScenePad::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLScenePad*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLScenePad::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLScenePad*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSelectBuffer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSelectBuffer::Class_Name()
{
   return "TGLSelectBuffer";
}

//______________________________________________________________________________
const char *TGLSelectBuffer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectBuffer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSelectBuffer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectBuffer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSelectBuffer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectBuffer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSelectBuffer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSelectBuffer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSphere::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSphere::Class_Name()
{
   return "TGLSphere";
}

//______________________________________________________________________________
const char *TGLSphere::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSphere*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSphere::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSphere*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSphere::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSphere*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSphere::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSphere*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLSurfacePainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLSurfacePainter::Class_Name()
{
   return "TGLSurfacePainter";
}

//______________________________________________________________________________
const char *TGLSurfacePainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSurfacePainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLSurfacePainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLSurfacePainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLSurfacePainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSurfacePainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLSurfacePainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLSurfacePainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLTF3Painter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLTF3Painter::Class_Name()
{
   return "TGLTF3Painter";
}

//______________________________________________________________________________
const char *TGLTF3Painter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTF3Painter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLTF3Painter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTF3Painter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLTF3Painter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTF3Painter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLTF3Painter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTF3Painter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLIsoPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLIsoPainter::Class_Name()
{
   return "TGLIsoPainter";
}

//______________________________________________________________________________
const char *TGLIsoPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLIsoPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLIsoPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLIsoPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLIsoPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLIsoPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLIsoPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLIsoPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLTH3Composition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLTH3Composition::Class_Name()
{
   return "TGLTH3Composition";
}

//______________________________________________________________________________
const char *TGLTH3Composition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3Composition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLTH3Composition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3Composition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLTH3Composition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3Composition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLTH3Composition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3Composition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLTH3CompositionPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLTH3CompositionPainter::Class_Name()
{
   return "TGLTH3CompositionPainter";
}

//______________________________________________________________________________
const char *TGLTH3CompositionPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3CompositionPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLTH3CompositionPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3CompositionPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLTH3CompositionPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3CompositionPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLTH3CompositionPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTH3CompositionPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLText::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLText::Class_Name()
{
   return "TGLText";
}

//______________________________________________________________________________
const char *TGLText::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLText*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLText::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLText*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLText::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLText*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLText::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLText*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLTransManip::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLTransManip::Class_Name()
{
   return "TGLTransManip";
}

//______________________________________________________________________________
const char *TGLTransManip::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTransManip*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLTransManip::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLTransManip*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLTransManip::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTransManip*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLTransManip::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLTransManip*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLViewerEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLViewerEditor::Class_Name()
{
   return "TGLViewerEditor";
}

//______________________________________________________________________________
const char *TGLViewerEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLViewerEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLViewerEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLViewerEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLViewerEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLViewerEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLViewerEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLViewerEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLVoxelPainter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLVoxelPainter::Class_Name()
{
   return "TGLVoxelPainter";
}

//______________________________________________________________________________
const char *TGLVoxelPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVoxelPainter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLVoxelPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLVoxelPainter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLVoxelPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVoxelPainter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLVoxelPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLVoxelPainter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGLWidget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGLWidget::Class_Name()
{
   return "TGLWidget";
}

//______________________________________________________________________________
const char *TGLWidget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLWidget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGLWidget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGLWidget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGLWidget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLWidget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGLWidget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGLWidget*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2GL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2GL::Class_Name()
{
   return "TH2GL";
}

//______________________________________________________________________________
const char *TH2GL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2GL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TH2GL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2GL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2GL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2GL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2GL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2GL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH3GL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TH3GL::Class_Name()
{
   return "TH3GL";
}

//______________________________________________________________________________
const char *TH3GL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3GL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TH3GL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3GL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH3GL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3GL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH3GL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3GL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPointSet3DGL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPointSet3DGL::Class_Name()
{
   return "TPointSet3DGL";
}

//______________________________________________________________________________
const char *TPointSet3DGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPointSet3DGL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPointSet3DGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPointSet3DGL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPointSet3DGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPointSet3DGL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPointSet3DGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPointSet3DGL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TX11GLManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TX11GLManager::Class_Name()
{
   return "TX11GLManager";
}

//______________________________________________________________________________
const char *TX11GLManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TX11GLManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TX11GLManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TX11GLManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TX11GLManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TX11GLManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TX11GLManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TX11GLManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArcBall::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArcBall.

   ::Error("TArcBall::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArcBall(void *p) {
      return  p ? new(p) ::TArcBall : new ::TArcBall;
   }
   static void *newArray_TArcBall(Long_t nElements, void *p) {
      return p ? new(p) ::TArcBall[nElements] : new ::TArcBall[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArcBall(void *p) {
      delete ((::TArcBall*)p);
   }
   static void deleteArray_TArcBall(void *p) {
      delete [] ((::TArcBall*)p);
   }
   static void destruct_TArcBall(void *p) {
      typedef ::TArcBall current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TArcBall(TBuffer &buf, void *obj) {
      ((::TArcBall*)obj)->::TArcBall::Streamer(buf);
   }
} // end of namespace ROOT for class ::TArcBall

//______________________________________________________________________________
void TGLVertex3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLVertex3.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.ReadStaticArray((double*)fVals);
      R__b.CheckByteCount(R__s, R__c, TGLVertex3::IsA());
   } else {
      R__c = R__b.WriteVersion(TGLVertex3::IsA(), kTRUE);
      R__b.WriteArray(fVals, 3);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLVertex3(void *p) {
      return  p ? new(p) ::TGLVertex3 : new ::TGLVertex3;
   }
   static void *newArray_TGLVertex3(Long_t nElements, void *p) {
      return p ? new(p) ::TGLVertex3[nElements] : new ::TGLVertex3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLVertex3(void *p) {
      delete ((::TGLVertex3*)p);
   }
   static void deleteArray_TGLVertex3(void *p) {
      delete [] ((::TGLVertex3*)p);
   }
   static void destruct_TGLVertex3(void *p) {
      typedef ::TGLVertex3 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLVertex3(TBuffer &buf, void *obj) {
      ((::TGLVertex3*)obj)->::TGLVertex3::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLVertex3

//______________________________________________________________________________
void TGLVector3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLVector3.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TGLVertex3::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TGLVector3::IsA());
   } else {
      R__c = R__b.WriteVersion(TGLVector3::IsA(), kTRUE);
      TGLVertex3::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLVector3(void *p) {
      return  p ? new(p) ::TGLVector3 : new ::TGLVector3;
   }
   static void *newArray_TGLVector3(Long_t nElements, void *p) {
      return p ? new(p) ::TGLVector3[nElements] : new ::TGLVector3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLVector3(void *p) {
      delete ((::TGLVector3*)p);
   }
   static void deleteArray_TGLVector3(void *p) {
      delete [] ((::TGLVector3*)p);
   }
   static void destruct_TGLVector3(void *p) {
      typedef ::TGLVector3 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLVector3(TBuffer &buf, void *obj) {
      ((::TGLVector3*)obj)->::TGLVector3::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLVector3

//______________________________________________________________________________
void TGLLine3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLLine3.

   ::Error("TGLLine3::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLLine3(void *p) {
      delete ((::TGLLine3*)p);
   }
   static void deleteArray_TGLLine3(void *p) {
      delete [] ((::TGLLine3*)p);
   }
   static void destruct_TGLLine3(void *p) {
      typedef ::TGLLine3 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLLine3(TBuffer &buf, void *obj) {
      ((::TGLLine3*)obj)->::TGLLine3::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLLine3

//______________________________________________________________________________
void TGLRect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLRect.

   ::Error("TGLRect::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLRect(void *p) {
      return  p ? new(p) ::TGLRect : new ::TGLRect;
   }
   static void *newArray_TGLRect(Long_t nElements, void *p) {
      return p ? new(p) ::TGLRect[nElements] : new ::TGLRect[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLRect(void *p) {
      delete ((::TGLRect*)p);
   }
   static void deleteArray_TGLRect(void *p) {
      delete [] ((::TGLRect*)p);
   }
   static void destruct_TGLRect(void *p) {
      typedef ::TGLRect current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLRect(TBuffer &buf, void *obj) {
      ((::TGLRect*)obj)->::TGLRect::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLRect

//______________________________________________________________________________
void TGLPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPlane.

   ::Error("TGLPlane::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLPlane(void *p) {
      return  p ? new(p) ::TGLPlane : new ::TGLPlane;
   }
   static void *newArray_TGLPlane(Long_t nElements, void *p) {
      return p ? new(p) ::TGLPlane[nElements] : new ::TGLPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLPlane(void *p) {
      delete ((::TGLPlane*)p);
   }
   static void deleteArray_TGLPlane(void *p) {
      delete [] ((::TGLPlane*)p);
   }
   static void destruct_TGLPlane(void *p) {
      typedef ::TGLPlane current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLPlane(TBuffer &buf, void *obj) {
      ((::TGLPlane*)obj)->::TGLPlane::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLPlane

//______________________________________________________________________________
void TGLMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLMatrix.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.ReadStaticArray((double*)fVals);
      R__b.CheckByteCount(R__s, R__c, TGLMatrix::IsA());
   } else {
      R__c = R__b.WriteVersion(TGLMatrix::IsA(), kTRUE);
      R__b.WriteArray(fVals, 16);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLMatrix(void *p) {
      return  p ? new(p) ::TGLMatrix : new ::TGLMatrix;
   }
   static void *newArray_TGLMatrix(Long_t nElements, void *p) {
      return p ? new(p) ::TGLMatrix[nElements] : new ::TGLMatrix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLMatrix(void *p) {
      delete ((::TGLMatrix*)p);
   }
   static void deleteArray_TGLMatrix(void *p) {
      delete [] ((::TGLMatrix*)p);
   }
   static void destruct_TGLMatrix(void *p) {
      typedef ::TGLMatrix current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLMatrix(TBuffer &buf, void *obj) {
      ((::TGLMatrix*)obj)->::TGLMatrix::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLMatrix

//______________________________________________________________________________
void TGLColor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLColor.

   ::Error("TGLColor::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLColor(void *p) {
      return  p ? new(p) ::TGLColor : new ::TGLColor;
   }
   static void *newArray_TGLColor(Long_t nElements, void *p) {
      return p ? new(p) ::TGLColor[nElements] : new ::TGLColor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLColor(void *p) {
      delete ((::TGLColor*)p);
   }
   static void deleteArray_TGLColor(void *p) {
      delete [] ((::TGLColor*)p);
   }
   static void destruct_TGLColor(void *p) {
      typedef ::TGLColor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLColor(TBuffer &buf, void *obj) {
      ((::TGLColor*)obj)->::TGLColor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLColor

//______________________________________________________________________________
void TGLColorSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLColorSet.

   ::Error("TGLColorSet::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLColorSet(void *p) {
      return  p ? new(p) ::TGLColorSet : new ::TGLColorSet;
   }
   static void *newArray_TGLColorSet(Long_t nElements, void *p) {
      return p ? new(p) ::TGLColorSet[nElements] : new ::TGLColorSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLColorSet(void *p) {
      delete ((::TGLColorSet*)p);
   }
   static void deleteArray_TGLColorSet(void *p) {
      delete [] ((::TGLColorSet*)p);
   }
   static void destruct_TGLColorSet(void *p) {
      typedef ::TGLColorSet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLColorSet(TBuffer &buf, void *obj) {
      ((::TGLColorSet*)obj)->::TGLColorSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLColorSet

//______________________________________________________________________________
void TGLUtil::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLUtil.

   ::Error("TGLUtil::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLUtil(void *p) {
      delete ((::TGLUtil*)p);
   }
   static void deleteArray_TGLUtil(void *p) {
      delete [] ((::TGLUtil*)p);
   }
   static void destruct_TGLUtil(void *p) {
      typedef ::TGLUtil current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLUtil(TBuffer &buf, void *obj) {
      ((::TGLUtil*)obj)->::TGLUtil::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLUtil

//______________________________________________________________________________
void TGLUtil::TColorLocker::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLUtil::TColorLocker.

   ::Error("TGLUtil::TColorLocker::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLUtilcLcLTColorLocker(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TGLUtil::TColorLocker : new ::TGLUtil::TColorLocker;
   }
   static void *newArray_TGLUtilcLcLTColorLocker(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TGLUtil::TColorLocker[nElements] : new ::TGLUtil::TColorLocker[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLUtilcLcLTColorLocker(void *p) {
      delete ((::TGLUtil::TColorLocker*)p);
   }
   static void deleteArray_TGLUtilcLcLTColorLocker(void *p) {
      delete [] ((::TGLUtil::TColorLocker*)p);
   }
   static void destruct_TGLUtilcLcLTColorLocker(void *p) {
      typedef ::TGLUtil::TColorLocker current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLUtilcLcLTColorLocker(TBuffer &buf, void *obj) {
      ((::TGLUtil::TColorLocker*)obj)->::TGLUtil::TColorLocker::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLUtil::TColorLocker

//______________________________________________________________________________
void TGLUtil::TDrawQualityModifier::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLUtil::TDrawQualityModifier.

   ::Error("TGLUtil::TDrawQualityModifier::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLUtilcLcLTDrawQualityModifier(void *p) {
      delete ((::TGLUtil::TDrawQualityModifier*)p);
   }
   static void deleteArray_TGLUtilcLcLTDrawQualityModifier(void *p) {
      delete [] ((::TGLUtil::TDrawQualityModifier*)p);
   }
   static void destruct_TGLUtilcLcLTDrawQualityModifier(void *p) {
      typedef ::TGLUtil::TDrawQualityModifier current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLUtilcLcLTDrawQualityModifier(TBuffer &buf, void *obj) {
      ((::TGLUtil::TDrawQualityModifier*)obj)->::TGLUtil::TDrawQualityModifier::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLUtil::TDrawQualityModifier

//______________________________________________________________________________
void TGLUtil::TDrawQualityScaler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLUtil::TDrawQualityScaler.

   ::Error("TGLUtil::TDrawQualityScaler::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLUtilcLcLTDrawQualityScaler(void *p) {
      delete ((::TGLUtil::TDrawQualityScaler*)p);
   }
   static void deleteArray_TGLUtilcLcLTDrawQualityScaler(void *p) {
      delete [] ((::TGLUtil::TDrawQualityScaler*)p);
   }
   static void destruct_TGLUtilcLcLTDrawQualityScaler(void *p) {
      typedef ::TGLUtil::TDrawQualityScaler current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLUtilcLcLTDrawQualityScaler(TBuffer &buf, void *obj) {
      ((::TGLUtil::TDrawQualityScaler*)obj)->::TGLUtil::TDrawQualityScaler::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLUtil::TDrawQualityScaler

//______________________________________________________________________________
void TGLSelectionBuffer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSelectionBuffer.

   ::Error("TGLSelectionBuffer::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLSelectionBuffer(void *p) {
      return  p ? new(p) ::TGLSelectionBuffer : new ::TGLSelectionBuffer;
   }
   static void *newArray_TGLSelectionBuffer(Long_t nElements, void *p) {
      return p ? new(p) ::TGLSelectionBuffer[nElements] : new ::TGLSelectionBuffer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLSelectionBuffer(void *p) {
      delete ((::TGLSelectionBuffer*)p);
   }
   static void deleteArray_TGLSelectionBuffer(void *p) {
      delete [] ((::TGLSelectionBuffer*)p);
   }
   static void destruct_TGLSelectionBuffer(void *p) {
      typedef ::TGLSelectionBuffer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLSelectionBuffer(TBuffer &buf, void *obj) {
      ((::TGLSelectionBuffer*)obj)->::TGLSelectionBuffer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLSelectionBuffer

//______________________________________________________________________________
void TGLBoundingBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLBoundingBox.

   ::Error("TGLBoundingBox::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLBoundingBox(void *p) {
      return  p ? new(p) ::TGLBoundingBox : new ::TGLBoundingBox;
   }
   static void *newArray_TGLBoundingBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGLBoundingBox[nElements] : new ::TGLBoundingBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLBoundingBox(void *p) {
      delete ((::TGLBoundingBox*)p);
   }
   static void deleteArray_TGLBoundingBox(void *p) {
      delete [] ((::TGLBoundingBox*)p);
   }
   static void destruct_TGLBoundingBox(void *p) {
      typedef ::TGLBoundingBox current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLBoundingBox(TBuffer &buf, void *obj) {
      ((::TGLBoundingBox*)obj)->::TGLBoundingBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLBoundingBox

//______________________________________________________________________________
void TGLLogicalShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLLogicalShape.

   ::Error("TGLLogicalShape::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLLogicalShape(void *p) {
      delete ((::TGLLogicalShape*)p);
   }
   static void deleteArray_TGLLogicalShape(void *p) {
      delete [] ((::TGLLogicalShape*)p);
   }
   static void destruct_TGLLogicalShape(void *p) {
      typedef ::TGLLogicalShape current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLLogicalShape(TBuffer &buf, void *obj) {
      ((::TGLLogicalShape*)obj)->::TGLLogicalShape::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLLogicalShape

//______________________________________________________________________________
void TGLObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLObject::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLObject(void *p) {
      delete ((::TGLObject*)p);
   }
   static void deleteArray_TGLObject(void *p) {
      delete [] ((::TGLObject*)p);
   }
   static void destruct_TGLObject(void *p) {
      typedef ::TGLObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLObject

//______________________________________________________________________________
void TGLPlotBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPlotBox.

   ::Error("TGLPlotBox::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLPlotBox(void *p) {
      delete ((::TGLPlotBox*)p);
   }
   static void deleteArray_TGLPlotBox(void *p) {
      delete [] ((::TGLPlotBox*)p);
   }
   static void destruct_TGLPlotBox(void *p) {
      typedef ::TGLPlotBox current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLPlotBox(TBuffer &buf, void *obj) {
      ((::TGLPlotBox*)obj)->::TGLPlotBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLPlotBox

//______________________________________________________________________________
void TGLBoxCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLBoxCut.

   ::Error("TGLBoxCut::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLBoxCut(void *p) {
      delete ((::TGLBoxCut*)p);
   }
   static void deleteArray_TGLBoxCut(void *p) {
      delete [] ((::TGLBoxCut*)p);
   }
   static void destruct_TGLBoxCut(void *p) {
      typedef ::TGLBoxCut current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLBoxCut(TBuffer &buf, void *obj) {
      ((::TGLBoxCut*)obj)->::TGLBoxCut::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLBoxCut

//______________________________________________________________________________
void TGLTH3Slice::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLTH3Slice.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLTH3Slice(void *p) {
      delete ((::TGLTH3Slice*)p);
   }
   static void deleteArray_TGLTH3Slice(void *p) {
      delete [] ((::TGLTH3Slice*)p);
   }
   static void destruct_TGLTH3Slice(void *p) {
      typedef ::TGLTH3Slice current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLTH3Slice(TBuffer &buf, void *obj) {
      ((::TGLTH3Slice*)obj)->::TGLTH3Slice::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLTH3Slice

//______________________________________________________________________________
void TGLPlotPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPlotPainter.

   TVirtualGLPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLPlotPainter(void *p) {
      delete ((::TGLPlotPainter*)p);
   }
   static void deleteArray_TGLPlotPainter(void *p) {
      delete [] ((::TGLPlotPainter*)p);
   }
   static void destruct_TGLPlotPainter(void *p) {
      typedef ::TGLPlotPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLPlotPainter(TBuffer &buf, void *obj) {
      ((::TGLPlotPainter*)obj)->::TGLPlotPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLPlotPainter

//______________________________________________________________________________
void TGLPlotCoordinates::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPlotCoordinates.

   ::Error("TGLPlotCoordinates::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLPlotCoordinates(void *p) {
      return  p ? new(p) ::TGLPlotCoordinates : new ::TGLPlotCoordinates;
   }
   static void *newArray_TGLPlotCoordinates(Long_t nElements, void *p) {
      return p ? new(p) ::TGLPlotCoordinates[nElements] : new ::TGLPlotCoordinates[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLPlotCoordinates(void *p) {
      delete ((::TGLPlotCoordinates*)p);
   }
   static void deleteArray_TGLPlotCoordinates(void *p) {
      delete [] ((::TGLPlotCoordinates*)p);
   }
   static void destruct_TGLPlotCoordinates(void *p) {
      typedef ::TGLPlotCoordinates current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLPlotCoordinates(TBuffer &buf, void *obj) {
      ((::TGLPlotCoordinates*)obj)->::TGLPlotCoordinates::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLPlotCoordinates

//______________________________________________________________________________
void TGLPlot3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPlot3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLPlot3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLPlot3D::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLPlot3D(void *p) {
      delete ((::TGLPlot3D*)p);
   }
   static void deleteArray_TGLPlot3D(void *p) {
      delete [] ((::TGLPlot3D*)p);
   }
   static void destruct_TGLPlot3D(void *p) {
      typedef ::TGLPlot3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLPlot3D

//______________________________________________________________________________
void TF2GL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TF2GL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TF2GL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TF2GL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF2GL(void *p) {
      return  p ? new(p) ::TF2GL : new ::TF2GL;
   }
   static void *newArray_TF2GL(Long_t nElements, void *p) {
      return p ? new(p) ::TF2GL[nElements] : new ::TF2GL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF2GL(void *p) {
      delete ((::TF2GL*)p);
   }
   static void deleteArray_TF2GL(void *p) {
      delete [] ((::TF2GL*)p);
   }
   static void destruct_TF2GL(void *p) {
      typedef ::TF2GL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TF2GL

//______________________________________________________________________________
void TGLPlotCamera::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPlotCamera.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLPlotCamera::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLPlotCamera::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLPlotCamera(void *p) {
      return  p ? new(p) ::TGLPlotCamera : new ::TGLPlotCamera;
   }
   static void *newArray_TGLPlotCamera(Long_t nElements, void *p) {
      return p ? new(p) ::TGLPlotCamera[nElements] : new ::TGLPlotCamera[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLPlotCamera(void *p) {
      delete ((::TGLPlotCamera*)p);
   }
   static void deleteArray_TGLPlotCamera(void *p) {
      delete [] ((::TGLPlotCamera*)p);
   }
   static void destruct_TGLPlotCamera(void *p) {
      typedef ::TGLPlotCamera current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLPlotCamera

//______________________________________________________________________________
void TGLHistPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLHistPainter.

   TVirtualHistPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLHistPainter(void *p) {
      delete ((::TGLHistPainter*)p);
   }
   static void deleteArray_TGLHistPainter(void *p) {
      delete [] ((::TGLHistPainter*)p);
   }
   static void destruct_TGLHistPainter(void *p) {
      typedef ::TGLHistPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLHistPainter(TBuffer &buf, void *obj) {
      ((::TGLHistPainter*)obj)->::TGLHistPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLHistPainter

//______________________________________________________________________________
void TGL5DDataSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGL5DDataSet.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGL5DDataSet(void *p) {
      delete ((::TGL5DDataSet*)p);
   }
   static void deleteArray_TGL5DDataSet(void *p) {
      delete [] ((::TGL5DDataSet*)p);
   }
   static void destruct_TGL5DDataSet(void *p) {
      typedef ::TGL5DDataSet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGL5DDataSet(TBuffer &buf, void *obj) {
      ((::TGL5DDataSet*)obj)->::TGL5DDataSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGL5DDataSet

//______________________________________________________________________________
void TGL5DDataSetEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGL5DDataSetEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGL5DDataSetEditor(void *p) {
      return  p ? new(p) ::TGL5DDataSetEditor : new ::TGL5DDataSetEditor;
   }
   static void *newArray_TGL5DDataSetEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGL5DDataSetEditor[nElements] : new ::TGL5DDataSetEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGL5DDataSetEditor(void *p) {
      delete ((::TGL5DDataSetEditor*)p);
   }
   static void deleteArray_TGL5DDataSetEditor(void *p) {
      delete [] ((::TGL5DDataSetEditor*)p);
   }
   static void destruct_TGL5DDataSetEditor(void *p) {
      typedef ::TGL5DDataSetEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGL5DDataSetEditor(TBuffer &buf, void *obj) {
      ((::TGL5DDataSetEditor*)obj)->::TGL5DDataSetEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGL5DDataSetEditor

//______________________________________________________________________________
void TGLAdapter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLAdapter.

   TGLPaintDevice::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLAdapter(void *p) {
      return  p ? new(p) ::TGLAdapter : new ::TGLAdapter;
   }
   static void *newArray_TGLAdapter(Long_t nElements, void *p) {
      return p ? new(p) ::TGLAdapter[nElements] : new ::TGLAdapter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLAdapter(void *p) {
      delete ((::TGLAdapter*)p);
   }
   static void deleteArray_TGLAdapter(void *p) {
      delete [] ((::TGLAdapter*)p);
   }
   static void destruct_TGLAdapter(void *p) {
      typedef ::TGLAdapter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLAdapter(TBuffer &buf, void *obj) {
      ((::TGLAdapter*)obj)->::TGLAdapter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLAdapter

//______________________________________________________________________________
void TGLOverlayElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLOverlayElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLOverlayElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLOverlayElement::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLOverlayElement(void *p) {
      delete ((::TGLOverlayElement*)p);
   }
   static void deleteArray_TGLOverlayElement(void *p) {
      delete [] ((::TGLOverlayElement*)p);
   }
   static void destruct_TGLOverlayElement(void *p) {
      typedef ::TGLOverlayElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLOverlayElement

//______________________________________________________________________________
void TGLOverlayList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLOverlayList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLOverlayList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLOverlayList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLOverlayList(void *p) {
      return  p ? new(p) ::TGLOverlayList : new ::TGLOverlayList;
   }
   static void *newArray_TGLOverlayList(Long_t nElements, void *p) {
      return p ? new(p) ::TGLOverlayList[nElements] : new ::TGLOverlayList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLOverlayList(void *p) {
      delete ((::TGLOverlayList*)p);
   }
   static void deleteArray_TGLOverlayList(void *p) {
      delete [] ((::TGLOverlayList*)p);
   }
   static void destruct_TGLOverlayList(void *p) {
      typedef ::TGLOverlayList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLOverlayList

//______________________________________________________________________________
void TGLFont::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLFont.

   ::Error("TGLFont::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLFont(void *p) {
      return  p ? new(p) ::TGLFont : new ::TGLFont;
   }
   static void *newArray_TGLFont(Long_t nElements, void *p) {
      return p ? new(p) ::TGLFont[nElements] : new ::TGLFont[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLFont(void *p) {
      delete ((::TGLFont*)p);
   }
   static void deleteArray_TGLFont(void *p) {
      delete [] ((::TGLFont*)p);
   }
   static void destruct_TGLFont(void *p) {
      typedef ::TGLFont current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLFont(TBuffer &buf, void *obj) {
      ((::TGLFont*)obj)->::TGLFont::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLFont

//______________________________________________________________________________
void TGLFontManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLFontManager.

   ::Error("TGLFontManager::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLFontManager(void *p) {
      return  p ? new(p) ::TGLFontManager : new ::TGLFontManager;
   }
   static void *newArray_TGLFontManager(Long_t nElements, void *p) {
      return p ? new(p) ::TGLFontManager[nElements] : new ::TGLFontManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLFontManager(void *p) {
      delete ((::TGLFontManager*)p);
   }
   static void deleteArray_TGLFontManager(void *p) {
      delete [] ((::TGLFontManager*)p);
   }
   static void destruct_TGLFontManager(void *p) {
      typedef ::TGLFontManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLFontManager(TBuffer &buf, void *obj) {
      ((::TGLFontManager*)obj)->::TGLFontManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLFontManager

//______________________________________________________________________________
void TGLAnnotation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLAnnotation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLAnnotation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLAnnotation::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLAnnotation(void *p) {
      delete ((::TGLAnnotation*)p);
   }
   static void deleteArray_TGLAnnotation(void *p) {
      delete [] ((::TGLAnnotation*)p);
   }
   static void destruct_TGLAnnotation(void *p) {
      typedef ::TGLAnnotation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLAnnotation

//______________________________________________________________________________
void TGLAutoRotator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLAutoRotator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLAutoRotator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLAutoRotator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLAutoRotator(void *p) {
      delete ((::TGLAutoRotator*)p);
   }
   static void deleteArray_TGLAutoRotator(void *p) {
      delete [] ((::TGLAutoRotator*)p);
   }
   static void destruct_TGLAutoRotator(void *p) {
      typedef ::TGLAutoRotator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLAutoRotator

//______________________________________________________________________________
void TGLAxis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLAxis.

   TAttLine::Streamer(R__b);
   TAttText::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLAxis(void *p) {
      return  p ? new(p) ::TGLAxis : new ::TGLAxis;
   }
   static void *newArray_TGLAxis(Long_t nElements, void *p) {
      return p ? new(p) ::TGLAxis[nElements] : new ::TGLAxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLAxis(void *p) {
      delete ((::TGLAxis*)p);
   }
   static void deleteArray_TGLAxis(void *p) {
      delete [] ((::TGLAxis*)p);
   }
   static void destruct_TGLAxis(void *p) {
      typedef ::TGLAxis current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLAxis(TBuffer &buf, void *obj) {
      ((::TGLAxis*)obj)->::TGLAxis::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLAxis

//______________________________________________________________________________
void TGLAxisPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLAxisPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLAxisPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLAxisPainter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLAxisPainter(void *p) {
      return  p ? new(p) ::TGLAxisPainter : new ::TGLAxisPainter;
   }
   static void *newArray_TGLAxisPainter(Long_t nElements, void *p) {
      return p ? new(p) ::TGLAxisPainter[nElements] : new ::TGLAxisPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLAxisPainter(void *p) {
      delete ((::TGLAxisPainter*)p);
   }
   static void deleteArray_TGLAxisPainter(void *p) {
      delete [] ((::TGLAxisPainter*)p);
   }
   static void destruct_TGLAxisPainter(void *p) {
      typedef ::TGLAxisPainter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLAxisPainter

//______________________________________________________________________________
void TGLAxisPainterBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLAxisPainterBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLAxisPainterBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLAxisPainterBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLAxisPainterBox(void *p) {
      return  p ? new(p) ::TGLAxisPainterBox : new ::TGLAxisPainterBox;
   }
   static void *newArray_TGLAxisPainterBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGLAxisPainterBox[nElements] : new ::TGLAxisPainterBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLAxisPainterBox(void *p) {
      delete ((::TGLAxisPainterBox*)p);
   }
   static void deleteArray_TGLAxisPainterBox(void *p) {
      delete [] ((::TGLAxisPainterBox*)p);
   }
   static void destruct_TGLAxisPainterBox(void *p) {
      typedef ::TGLAxisPainterBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLAxisPainterBox

//______________________________________________________________________________
void TGLQuadric::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLQuadric.

   ::Error("TGLQuadric::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLQuadric(void *p) {
      return  p ? new(p) ::TGLQuadric : new ::TGLQuadric;
   }
   static void *newArray_TGLQuadric(Long_t nElements, void *p) {
      return p ? new(p) ::TGLQuadric[nElements] : new ::TGLQuadric[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLQuadric(void *p) {
      delete ((::TGLQuadric*)p);
   }
   static void deleteArray_TGLQuadric(void *p) {
      delete [] ((::TGLQuadric*)p);
   }
   static void destruct_TGLQuadric(void *p) {
      typedef ::TGLQuadric current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLQuadric(TBuffer &buf, void *obj) {
      ((::TGLQuadric*)obj)->::TGLQuadric::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLQuadric

//______________________________________________________________________________
void TGLBoxPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLBoxPainter.

   TGLPlotPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLBoxPainter(void *p) {
      delete ((::TGLBoxPainter*)p);
   }
   static void deleteArray_TGLBoxPainter(void *p) {
      delete [] ((::TGLBoxPainter*)p);
   }
   static void destruct_TGLBoxPainter(void *p) {
      typedef ::TGLBoxPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLBoxPainter(TBuffer &buf, void *obj) {
      ((::TGLBoxPainter*)obj)->::TGLBoxPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLBoxPainter

//______________________________________________________________________________
void TGLCamera::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLCamera.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fCamBase.Streamer(R__b);
      fCamTrans.Streamer(R__b);
      R__b >> fExternalCenter;
      R__b >> fFixDefCenter;
      R__b >> fWasArcBalled;
      fExtCenter.Streamer(R__b);
      fDefCenter.Streamer(R__b);
      fFDCenter.Streamer(R__b);
      R__b >> fDollyDefault;
      R__b >> fDollyDistance;
      R__b >> fVAxisMinAngle;
      R__b.CheckByteCount(R__s, R__c, TGLCamera::IsA());
   } else {
      R__c = R__b.WriteVersion(TGLCamera::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fCamBase.Streamer(R__b);
      fCamTrans.Streamer(R__b);
      R__b << fExternalCenter;
      R__b << fFixDefCenter;
      R__b << fWasArcBalled;
      fExtCenter.Streamer(R__b);
      fDefCenter.Streamer(R__b);
      fFDCenter.Streamer(R__b);
      R__b << fDollyDefault;
      R__b << fDollyDistance;
      R__b << fVAxisMinAngle;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLCamera(void *p) {
      delete ((::TGLCamera*)p);
   }
   static void deleteArray_TGLCamera(void *p) {
      delete [] ((::TGLCamera*)p);
   }
   static void destruct_TGLCamera(void *p) {
      typedef ::TGLCamera current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLCamera(TBuffer &buf, void *obj) {
      ((::TGLCamera*)obj)->::TGLCamera::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLCamera

//______________________________________________________________________________
void TGLCameraGuide::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLCameraGuide.

   TGLOverlayElement::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLCameraGuide(void *p) {
      delete ((::TGLCameraGuide*)p);
   }
   static void deleteArray_TGLCameraGuide(void *p) {
      delete [] ((::TGLCameraGuide*)p);
   }
   static void destruct_TGLCameraGuide(void *p) {
      typedef ::TGLCameraGuide current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLCameraGuide(TBuffer &buf, void *obj) {
      ((::TGLCameraGuide*)obj)->::TGLCameraGuide::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLCameraGuide

//______________________________________________________________________________
void TGLCameraOverlay::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLCameraOverlay.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TGLOverlayElement::Streamer(R__b);
      R__b >> fShowOrthographic;
      R__b >> fShowPerspective;
      void *ptr_fOrthographicMode = (void*)&fOrthographicMode;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fOrthographicMode);
      void *ptr_fPerspectiveMode = (void*)&fPerspectiveMode;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fPerspectiveMode);
      R__b >> fAxisPainter;
      R__b >> fAxis;
      R__b >> fAxisExtend;
      R__b >> fUseAxisColors;
      fExternalRefPlane.Streamer(R__b);
      R__b >> fUseExternalRefPlane;
      R__b.ReadStaticArray((double*)fFrustum);
      R__b.CheckByteCount(R__s, R__c, TGLCameraOverlay::IsA());
   } else {
      R__c = R__b.WriteVersion(TGLCameraOverlay::IsA(), kTRUE);
      TGLOverlayElement::Streamer(R__b);
      R__b << fShowOrthographic;
      R__b << fShowPerspective;
      R__b << (Int_t)fOrthographicMode;
      R__b << (Int_t)fPerspectiveMode;
      R__b << fAxisPainter;
      R__b << fAxis;
      R__b << fAxisExtend;
      R__b << fUseAxisColors;
      fExternalRefPlane.Streamer(R__b);
      R__b << fUseExternalRefPlane;
      R__b.WriteArray(fFrustum, 4);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLCameraOverlay(void *p) {
      return  p ? new(p) ::TGLCameraOverlay : new ::TGLCameraOverlay;
   }
   static void *newArray_TGLCameraOverlay(Long_t nElements, void *p) {
      return p ? new(p) ::TGLCameraOverlay[nElements] : new ::TGLCameraOverlay[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLCameraOverlay(void *p) {
      delete ((::TGLCameraOverlay*)p);
   }
   static void deleteArray_TGLCameraOverlay(void *p) {
      delete [] ((::TGLCameraOverlay*)p);
   }
   static void destruct_TGLCameraOverlay(void *p) {
      typedef ::TGLCameraOverlay current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLCameraOverlay(TBuffer &buf, void *obj) {
      ((::TGLCameraOverlay*)obj)->::TGLCameraOverlay::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLCameraOverlay

//______________________________________________________________________________
void TGLPhysicalShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPhysicalShape.

   ::Error("TGLPhysicalShape::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLPhysicalShape(void *p) {
      delete ((::TGLPhysicalShape*)p);
   }
   static void deleteArray_TGLPhysicalShape(void *p) {
      delete [] ((::TGLPhysicalShape*)p);
   }
   static void destruct_TGLPhysicalShape(void *p) {
      typedef ::TGLPhysicalShape current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLPhysicalShape(TBuffer &buf, void *obj) {
      ((::TGLPhysicalShape*)obj)->::TGLPhysicalShape::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLPhysicalShape

//______________________________________________________________________________
void TGLClip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLClip.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLClip::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLClip::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLClip(void *p) {
      delete ((::TGLClip*)p);
   }
   static void deleteArray_TGLClip(void *p) {
      delete [] ((::TGLClip*)p);
   }
   static void destruct_TGLClip(void *p) {
      typedef ::TGLClip current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLClip

//______________________________________________________________________________
void TGLClipPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLClipPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLClipPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLClipPlane::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLClipPlane(void *p) {
      return  p ? new(p) ::TGLClipPlane : new ::TGLClipPlane;
   }
   static void *newArray_TGLClipPlane(Long_t nElements, void *p) {
      return p ? new(p) ::TGLClipPlane[nElements] : new ::TGLClipPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLClipPlane(void *p) {
      delete ((::TGLClipPlane*)p);
   }
   static void deleteArray_TGLClipPlane(void *p) {
      delete [] ((::TGLClipPlane*)p);
   }
   static void destruct_TGLClipPlane(void *p) {
      typedef ::TGLClipPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLClipPlane

//______________________________________________________________________________
void TGLClipBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLClipBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLClipBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLClipBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLClipBox(void *p) {
      return  p ? new(p) ::TGLClipBox : new ::TGLClipBox;
   }
   static void *newArray_TGLClipBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGLClipBox[nElements] : new ::TGLClipBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLClipBox(void *p) {
      delete ((::TGLClipBox*)p);
   }
   static void deleteArray_TGLClipBox(void *p) {
      delete [] ((::TGLClipBox*)p);
   }
   static void destruct_TGLClipBox(void *p) {
      typedef ::TGLClipBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLClipBox

//______________________________________________________________________________
void TGLClipSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLClipSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLClipSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLClipSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLClipSet(void *p) {
      return  p ? new(p) ::TGLClipSet : new ::TGLClipSet;
   }
   static void *newArray_TGLClipSet(Long_t nElements, void *p) {
      return p ? new(p) ::TGLClipSet[nElements] : new ::TGLClipSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLClipSet(void *p) {
      delete ((::TGLClipSet*)p);
   }
   static void deleteArray_TGLClipSet(void *p) {
      delete [] ((::TGLClipSet*)p);
   }
   static void destruct_TGLClipSet(void *p) {
      typedef ::TGLClipSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLClipSet

//______________________________________________________________________________
void TGLClipSetSubEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLClipSetSubEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLClipSetSubEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLClipSetSubEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLClipSetSubEditor(void *p) {
      delete ((::TGLClipSetSubEditor*)p);
   }
   static void deleteArray_TGLClipSetSubEditor(void *p) {
      delete [] ((::TGLClipSetSubEditor*)p);
   }
   static void destruct_TGLClipSetSubEditor(void *p) {
      typedef ::TGLClipSetSubEditor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLClipSetSubEditor

//______________________________________________________________________________
void TGLClipSetEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLClipSetEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLClipSetEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLClipSetEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLClipSetEditor(void *p) {
      return  p ? new(p) ::TGLClipSetEditor : new ::TGLClipSetEditor;
   }
   static void *newArray_TGLClipSetEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGLClipSetEditor[nElements] : new ::TGLClipSetEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLClipSetEditor(void *p) {
      delete ((::TGLClipSetEditor*)p);
   }
   static void deleteArray_TGLClipSetEditor(void *p) {
      delete [] ((::TGLClipSetEditor*)p);
   }
   static void destruct_TGLClipSetEditor(void *p) {
      typedef ::TGLClipSetEditor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLClipSetEditor

//______________________________________________________________________________
void TGLFormat::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLFormat.

   ::Error("TGLFormat::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLFormat(void *p) {
      return  p ? new(p) ::TGLFormat : new ::TGLFormat;
   }
   static void *newArray_TGLFormat(Long_t nElements, void *p) {
      return p ? new(p) ::TGLFormat[nElements] : new ::TGLFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLFormat(void *p) {
      delete ((::TGLFormat*)p);
   }
   static void deleteArray_TGLFormat(void *p) {
      delete [] ((::TGLFormat*)p);
   }
   static void destruct_TGLFormat(void *p) {
      typedef ::TGLFormat current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLFormat(TBuffer &buf, void *obj) {
      ((::TGLFormat*)obj)->::TGLFormat::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLFormat

//______________________________________________________________________________
void TGLContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLContext.

   ::Error("TGLContext::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLContext(void *p) {
      delete ((::TGLContext*)p);
   }
   static void deleteArray_TGLContext(void *p) {
      delete [] ((::TGLContext*)p);
   }
   static void destruct_TGLContext(void *p) {
      typedef ::TGLContext current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLContext(TBuffer &buf, void *obj) {
      ((::TGLContext*)obj)->::TGLContext::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLContext

//______________________________________________________________________________
void TGLContextIdentity::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLContextIdentity.

   ::Error("TGLContextIdentity::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLContextIdentity(void *p) {
      return  p ? new(p) ::TGLContextIdentity : new ::TGLContextIdentity;
   }
   static void *newArray_TGLContextIdentity(Long_t nElements, void *p) {
      return p ? new(p) ::TGLContextIdentity[nElements] : new ::TGLContextIdentity[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLContextIdentity(void *p) {
      delete ((::TGLContextIdentity*)p);
   }
   static void deleteArray_TGLContextIdentity(void *p) {
      delete [] ((::TGLContextIdentity*)p);
   }
   static void destruct_TGLContextIdentity(void *p) {
      typedef ::TGLContextIdentity current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLContextIdentity(TBuffer &buf, void *obj) {
      ((::TGLContextIdentity*)obj)->::TGLContextIdentity::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLContextIdentity

//______________________________________________________________________________
void TGLCylinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLCylinder.

   TGLLogicalShape::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLCylinder(void *p) {
      delete ((::TGLCylinder*)p);
   }
   static void deleteArray_TGLCylinder(void *p) {
      delete [] ((::TGLCylinder*)p);
   }
   static void destruct_TGLCylinder(void *p) {
      typedef ::TGLCylinder current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLCylinder(TBuffer &buf, void *obj) {
      ((::TGLCylinder*)obj)->::TGLCylinder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLCylinder

//______________________________________________________________________________
void TGLLockable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLLockable.

   ::Error("TGLLockable::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLLockable(void *p) {
      return  p ? new(p) ::TGLLockable : new ::TGLLockable;
   }
   static void *newArray_TGLLockable(Long_t nElements, void *p) {
      return p ? new(p) ::TGLLockable[nElements] : new ::TGLLockable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLLockable(void *p) {
      delete ((::TGLLockable*)p);
   }
   static void deleteArray_TGLLockable(void *p) {
      delete [] ((::TGLLockable*)p);
   }
   static void destruct_TGLLockable(void *p) {
      typedef ::TGLLockable current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLLockable(TBuffer &buf, void *obj) {
      ((::TGLLockable*)obj)->::TGLLockable::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLLockable

//______________________________________________________________________________
void TGLViewerBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLViewerBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLViewerBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLViewerBase::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLViewerBase(void *p) {
      return  p ? new(p) ::TGLViewerBase : new ::TGLViewerBase;
   }
   static void *newArray_TGLViewerBase(Long_t nElements, void *p) {
      return p ? new(p) ::TGLViewerBase[nElements] : new ::TGLViewerBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLViewerBase(void *p) {
      delete ((::TGLViewerBase*)p);
   }
   static void deleteArray_TGLViewerBase(void *p) {
      delete [] ((::TGLViewerBase*)p);
   }
   static void destruct_TGLViewerBase(void *p) {
      typedef ::TGLViewerBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLViewerBase

//______________________________________________________________________________
void TGLStopwatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLStopwatch.

   ::Error("TGLStopwatch::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLStopwatch(void *p) {
      return  p ? new(p) ::TGLStopwatch : new ::TGLStopwatch;
   }
   static void *newArray_TGLStopwatch(Long_t nElements, void *p) {
      return p ? new(p) ::TGLStopwatch[nElements] : new ::TGLStopwatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLStopwatch(void *p) {
      delete ((::TGLStopwatch*)p);
   }
   static void deleteArray_TGLStopwatch(void *p) {
      delete [] ((::TGLStopwatch*)p);
   }
   static void destruct_TGLStopwatch(void *p) {
      typedef ::TGLStopwatch current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLStopwatch(TBuffer &buf, void *obj) {
      ((::TGLStopwatch*)obj)->::TGLStopwatch::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLStopwatch

//______________________________________________________________________________
void TGLRnrCtx::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLRnrCtx.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLRnrCtx::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLRnrCtx::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLRnrCtx(void *p) {
      delete ((::TGLRnrCtx*)p);
   }
   static void deleteArray_TGLRnrCtx(void *p) {
      delete [] ((::TGLRnrCtx*)p);
   }
   static void destruct_TGLRnrCtx(void *p) {
      typedef ::TGLRnrCtx current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLRnrCtx

//______________________________________________________________________________
void TGLSelectRecordBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSelectRecordBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLSelectRecordBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLSelectRecordBase::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLSelectRecordBase(void *p) {
      return  p ? new(p) ::TGLSelectRecordBase : new ::TGLSelectRecordBase;
   }
   static void *newArray_TGLSelectRecordBase(Long_t nElements, void *p) {
      return p ? new(p) ::TGLSelectRecordBase[nElements] : new ::TGLSelectRecordBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLSelectRecordBase(void *p) {
      delete ((::TGLSelectRecordBase*)p);
   }
   static void deleteArray_TGLSelectRecordBase(void *p) {
      delete [] ((::TGLSelectRecordBase*)p);
   }
   static void destruct_TGLSelectRecordBase(void *p) {
      typedef ::TGLSelectRecordBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLSelectRecordBase

//______________________________________________________________________________
void TGLSelectRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSelectRecord.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLSelectRecord::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLSelectRecord::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLSelectRecord(void *p) {
      return  p ? new(p) ::TGLSelectRecord : new ::TGLSelectRecord;
   }
   static void *newArray_TGLSelectRecord(Long_t nElements, void *p) {
      return p ? new(p) ::TGLSelectRecord[nElements] : new ::TGLSelectRecord[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLSelectRecord(void *p) {
      delete ((::TGLSelectRecord*)p);
   }
   static void deleteArray_TGLSelectRecord(void *p) {
      delete [] ((::TGLSelectRecord*)p);
   }
   static void destruct_TGLSelectRecord(void *p) {
      typedef ::TGLSelectRecord current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLSelectRecord

//______________________________________________________________________________
void TGLOvlSelectRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLOvlSelectRecord.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLOvlSelectRecord::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLOvlSelectRecord::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLOvlSelectRecord(void *p) {
      return  p ? new(p) ::TGLOvlSelectRecord : new ::TGLOvlSelectRecord;
   }
   static void *newArray_TGLOvlSelectRecord(Long_t nElements, void *p) {
      return p ? new(p) ::TGLOvlSelectRecord[nElements] : new ::TGLOvlSelectRecord[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLOvlSelectRecord(void *p) {
      delete ((::TGLOvlSelectRecord*)p);
   }
   static void deleteArray_TGLOvlSelectRecord(void *p) {
      delete [] ((::TGLOvlSelectRecord*)p);
   }
   static void destruct_TGLOvlSelectRecord(void *p) {
      typedef ::TGLOvlSelectRecord current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLOvlSelectRecord

//______________________________________________________________________________
void TGLPerspectiveCamera::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPerspectiveCamera.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TGLCamera::Streamer(R__b);
      R__b >> fFOV;
      R__b.CheckByteCount(R__s, R__c, TGLPerspectiveCamera::IsA());
   } else {
      R__c = R__b.WriteVersion(TGLPerspectiveCamera::IsA(), kTRUE);
      TGLCamera::Streamer(R__b);
      R__b << fFOV;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLPerspectiveCamera(void *p) {
      return  p ? new(p) ::TGLPerspectiveCamera : new ::TGLPerspectiveCamera;
   }
   static void *newArray_TGLPerspectiveCamera(Long_t nElements, void *p) {
      return p ? new(p) ::TGLPerspectiveCamera[nElements] : new ::TGLPerspectiveCamera[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLPerspectiveCamera(void *p) {
      delete ((::TGLPerspectiveCamera*)p);
   }
   static void deleteArray_TGLPerspectiveCamera(void *p) {
      delete [] ((::TGLPerspectiveCamera*)p);
   }
   static void destruct_TGLPerspectiveCamera(void *p) {
      typedef ::TGLPerspectiveCamera current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLPerspectiveCamera(TBuffer &buf, void *obj) {
      ((::TGLPerspectiveCamera*)obj)->::TGLPerspectiveCamera::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLPerspectiveCamera

//______________________________________________________________________________
void TGLOrthoCamera::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLOrthoCamera.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TGLCamera::Streamer(R__b);
      void *ptr_fType = (void*)&fType;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fType);
      R__b >> fEnableRotate;
      R__b >> fDollyToZoom;
      R__b >> fZoomMin;
      R__b >> fZoomDefault;
      R__b >> fZoomMax;
      R__b >> fZoom;
      R__b.CheckByteCount(R__s, R__c, TGLOrthoCamera::IsA());
   } else {
      R__c = R__b.WriteVersion(TGLOrthoCamera::IsA(), kTRUE);
      TGLCamera::Streamer(R__b);
      R__b << (Int_t)fType;
      R__b << fEnableRotate;
      R__b << fDollyToZoom;
      R__b << fZoomMin;
      R__b << fZoomDefault;
      R__b << fZoomMax;
      R__b << fZoom;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLOrthoCamera(void *p) {
      return  p ? new(p) ::TGLOrthoCamera : new ::TGLOrthoCamera;
   }
   static void *newArray_TGLOrthoCamera(Long_t nElements, void *p) {
      return p ? new(p) ::TGLOrthoCamera[nElements] : new ::TGLOrthoCamera[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLOrthoCamera(void *p) {
      delete ((::TGLOrthoCamera*)p);
   }
   static void deleteArray_TGLOrthoCamera(void *p) {
      delete [] ((::TGLOrthoCamera*)p);
   }
   static void destruct_TGLOrthoCamera(void *p) {
      typedef ::TGLOrthoCamera current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLOrthoCamera(TBuffer &buf, void *obj) {
      ((::TGLOrthoCamera*)obj)->::TGLOrthoCamera::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLOrthoCamera

//______________________________________________________________________________
void TGLViewer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLViewer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLViewer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLViewer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLViewer(void *p) {
      delete ((::TGLViewer*)p);
   }
   static void deleteArray_TGLViewer(void *p) {
      delete [] ((::TGLViewer*)p);
   }
   static void destruct_TGLViewer(void *p) {
      typedef ::TGLViewer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLViewer

//______________________________________________________________________________
void TGLFaderHelper::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLFaderHelper.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLFaderHelper::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLFaderHelper::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLFaderHelper(void *p) {
      return  p ? new(p) ::TGLFaderHelper : new ::TGLFaderHelper;
   }
   static void *newArray_TGLFaderHelper(Long_t nElements, void *p) {
      return p ? new(p) ::TGLFaderHelper[nElements] : new ::TGLFaderHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLFaderHelper(void *p) {
      delete ((::TGLFaderHelper*)p);
   }
   static void deleteArray_TGLFaderHelper(void *p) {
      delete [] ((::TGLFaderHelper*)p);
   }
   static void destruct_TGLFaderHelper(void *p) {
      typedef ::TGLFaderHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLFaderHelper

//______________________________________________________________________________
void TGLEmbeddedViewer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLEmbeddedViewer.

   TGLViewer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLEmbeddedViewer(void *p) {
      delete ((::TGLEmbeddedViewer*)p);
   }
   static void deleteArray_TGLEmbeddedViewer(void *p) {
      delete [] ((::TGLEmbeddedViewer*)p);
   }
   static void destruct_TGLEmbeddedViewer(void *p) {
      typedef ::TGLEmbeddedViewer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLEmbeddedViewer(TBuffer &buf, void *obj) {
      ((::TGLEmbeddedViewer*)obj)->::TGLEmbeddedViewer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLEmbeddedViewer

//______________________________________________________________________________
void TGLEventHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLEventHandler.

   TGEventHandler::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLEventHandler(void *p) {
      delete ((::TGLEventHandler*)p);
   }
   static void deleteArray_TGLEventHandler(void *p) {
      delete [] ((::TGLEventHandler*)p);
   }
   static void destruct_TGLEventHandler(void *p) {
      typedef ::TGLEventHandler current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLEventHandler(TBuffer &buf, void *obj) {
      ((::TGLEventHandler*)obj)->::TGLEventHandler::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLEventHandler

//______________________________________________________________________________
void TGLFBO::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLFBO.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLFBO::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLFBO::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLFBO(void *p) {
      return  p ? new(p) ::TGLFBO : new ::TGLFBO;
   }
   static void *newArray_TGLFBO(Long_t nElements, void *p) {
      return p ? new(p) ::TGLFBO[nElements] : new ::TGLFBO[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLFBO(void *p) {
      delete ((::TGLFBO*)p);
   }
   static void deleteArray_TGLFBO(void *p) {
      delete [] ((::TGLFBO*)p);
   }
   static void destruct_TGLFBO(void *p) {
      typedef ::TGLFBO current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLFBO

//______________________________________________________________________________
void TGLFaceSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLFaceSet.

   TGLLogicalShape::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLFaceSet(void *p) {
      delete ((::TGLFaceSet*)p);
   }
   static void deleteArray_TGLFaceSet(void *p) {
      delete [] ((::TGLFaceSet*)p);
   }
   static void destruct_TGLFaceSet(void *p) {
      typedef ::TGLFaceSet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLFaceSet(TBuffer &buf, void *obj) {
      ((::TGLFaceSet*)obj)->::TGLFaceSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLFaceSet

//______________________________________________________________________________
void TGLH2PolyPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLH2PolyPainter.

   TGLPlotPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLH2PolyPainter(void *p) {
      delete ((::TGLH2PolyPainter*)p);
   }
   static void deleteArray_TGLH2PolyPainter(void *p) {
      delete [] ((::TGLH2PolyPainter*)p);
   }
   static void destruct_TGLH2PolyPainter(void *p) {
      typedef ::TGLH2PolyPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLH2PolyPainter(TBuffer &buf, void *obj) {
      ((::TGLH2PolyPainter*)obj)->::TGLH2PolyPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLH2PolyPainter

//______________________________________________________________________________
void TGLLegoPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLLegoPainter.

   TGLPlotPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLLegoPainter(void *p) {
      delete ((::TGLLegoPainter*)p);
   }
   static void deleteArray_TGLLegoPainter(void *p) {
      delete [] ((::TGLLegoPainter*)p);
   }
   static void destruct_TGLLegoPainter(void *p) {
      typedef ::TGLLegoPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLLegoPainter(TBuffer &buf, void *obj) {
      ((::TGLLegoPainter*)obj)->::TGLLegoPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLLegoPainter

//______________________________________________________________________________
void TGLLightSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLLightSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLLightSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLLightSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLLightSet(void *p) {
      return  p ? new(p) ::TGLLightSet : new ::TGLLightSet;
   }
   static void *newArray_TGLLightSet(Long_t nElements, void *p) {
      return p ? new(p) ::TGLLightSet[nElements] : new ::TGLLightSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLLightSet(void *p) {
      delete ((::TGLLightSet*)p);
   }
   static void deleteArray_TGLLightSet(void *p) {
      delete [] ((::TGLLightSet*)p);
   }
   static void destruct_TGLLightSet(void *p) {
      typedef ::TGLLightSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLLightSet

//______________________________________________________________________________
void TGLLightSetSubEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLLightSetSubEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLLightSetSubEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLLightSetSubEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLLightSetSubEditor(void *p) {
      delete ((::TGLLightSetSubEditor*)p);
   }
   static void deleteArray_TGLLightSetSubEditor(void *p) {
      delete [] ((::TGLLightSetSubEditor*)p);
   }
   static void destruct_TGLLightSetSubEditor(void *p) {
      typedef ::TGLLightSetSubEditor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLLightSetSubEditor

//______________________________________________________________________________
void TGLLightSetEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLLightSetEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLLightSetEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLLightSetEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLLightSetEditor(void *p) {
      return  p ? new(p) ::TGLLightSetEditor : new ::TGLLightSetEditor;
   }
   static void *newArray_TGLLightSetEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGLLightSetEditor[nElements] : new ::TGLLightSetEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLLightSetEditor(void *p) {
      delete ((::TGLLightSetEditor*)p);
   }
   static void deleteArray_TGLLightSetEditor(void *p) {
      delete [] ((::TGLLightSetEditor*)p);
   }
   static void destruct_TGLLightSetEditor(void *p) {
      typedef ::TGLLightSetEditor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLLightSetEditor

//______________________________________________________________________________
void TGLManip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLManip.

   TVirtualGLManip::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLManip(void *p) {
      delete ((::TGLManip*)p);
   }
   static void deleteArray_TGLManip(void *p) {
      delete [] ((::TGLManip*)p);
   }
   static void destruct_TGLManip(void *p) {
      typedef ::TGLManip current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLManip(TBuffer &buf, void *obj) {
      ((::TGLManip*)obj)->::TGLManip::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLManip

//______________________________________________________________________________
void TGLPShapeRef::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPShapeRef.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLPShapeRef::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLPShapeRef::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLPShapeRef(void *p) {
      return  p ? new(p) ::TGLPShapeRef : new ::TGLPShapeRef;
   }
   static void *newArray_TGLPShapeRef(Long_t nElements, void *p) {
      return p ? new(p) ::TGLPShapeRef[nElements] : new ::TGLPShapeRef[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLPShapeRef(void *p) {
      delete ((::TGLPShapeRef*)p);
   }
   static void deleteArray_TGLPShapeRef(void *p) {
      delete [] ((::TGLPShapeRef*)p);
   }
   static void destruct_TGLPShapeRef(void *p) {
      typedef ::TGLPShapeRef current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLPShapeRef

//______________________________________________________________________________
void TGLManipSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLManipSet.

   TGLOverlayElement::Streamer(R__b);
   TGLPShapeRef::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLManipSet(void *p) {
      return  p ? new(p) ::TGLManipSet : new ::TGLManipSet;
   }
   static void *newArray_TGLManipSet(Long_t nElements, void *p) {
      return p ? new(p) ::TGLManipSet[nElements] : new ::TGLManipSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLManipSet(void *p) {
      delete ((::TGLManipSet*)p);
   }
   static void deleteArray_TGLManipSet(void *p) {
      delete [] ((::TGLManipSet*)p);
   }
   static void destruct_TGLManipSet(void *p) {
      typedef ::TGLManipSet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLManipSet(TBuffer &buf, void *obj) {
      ((::TGLManipSet*)obj)->::TGLManipSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLManipSet

//______________________________________________________________________________
void TGLOutput::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLOutput.

   ::Error("TGLOutput::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLOutput(void *p) {
      return  p ? new(p) ::TGLOutput : new ::TGLOutput;
   }
   static void *newArray_TGLOutput(Long_t nElements, void *p) {
      return p ? new(p) ::TGLOutput[nElements] : new ::TGLOutput[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLOutput(void *p) {
      delete ((::TGLOutput*)p);
   }
   static void deleteArray_TGLOutput(void *p) {
      delete [] ((::TGLOutput*)p);
   }
   static void destruct_TGLOutput(void *p) {
      typedef ::TGLOutput current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLOutput(TBuffer &buf, void *obj) {
      ((::TGLOutput*)obj)->::TGLOutput::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLOutput

//______________________________________________________________________________
void TGLOverlayButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLOverlayButton.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLOverlayButton::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLOverlayButton::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLOverlayButton(void *p) {
      delete ((::TGLOverlayButton*)p);
   }
   static void deleteArray_TGLOverlayButton(void *p) {
      delete [] ((::TGLOverlayButton*)p);
   }
   static void destruct_TGLOverlayButton(void *p) {
      typedef ::TGLOverlayButton current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLOverlayButton

//______________________________________________________________________________
void TGLPShapeObj::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPShapeObj.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLPShapeObj::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLPShapeObj::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLPShapeObj(void *p) {
      return  p ? new(p) ::TGLPShapeObj : new ::TGLPShapeObj;
   }
   static void *newArray_TGLPShapeObj(Long_t nElements, void *p) {
      return p ? new(p) ::TGLPShapeObj[nElements] : new ::TGLPShapeObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLPShapeObj(void *p) {
      delete ((::TGLPShapeObj*)p);
   }
   static void deleteArray_TGLPShapeObj(void *p) {
      delete [] ((::TGLPShapeObj*)p);
   }
   static void destruct_TGLPShapeObj(void *p) {
      typedef ::TGLPShapeObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLPShapeObj

//______________________________________________________________________________
void TGLPShapeObjEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPShapeObjEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLPShapeObjEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLPShapeObjEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLPShapeObjEditor(void *p) {
      return  p ? new(p) ::TGLPShapeObjEditor : new ::TGLPShapeObjEditor;
   }
   static void *newArray_TGLPShapeObjEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGLPShapeObjEditor[nElements] : new ::TGLPShapeObjEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLPShapeObjEditor(void *p) {
      delete ((::TGLPShapeObjEditor*)p);
   }
   static void deleteArray_TGLPShapeObjEditor(void *p) {
      delete [] ((::TGLPShapeObjEditor*)p);
   }
   static void destruct_TGLPShapeObjEditor(void *p) {
      typedef ::TGLPShapeObjEditor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLPShapeObjEditor

//______________________________________________________________________________
void TGLPadPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPadPainter.

   TVirtualPadPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLPadPainter(void *p) {
      return  p ? new(p) ::TGLPadPainter : new ::TGLPadPainter;
   }
   static void *newArray_TGLPadPainter(Long_t nElements, void *p) {
      return p ? new(p) ::TGLPadPainter[nElements] : new ::TGLPadPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLPadPainter(void *p) {
      delete ((::TGLPadPainter*)p);
   }
   static void deleteArray_TGLPadPainter(void *p) {
      delete [] ((::TGLPadPainter*)p);
   }
   static void destruct_TGLPadPainter(void *p) {
      typedef ::TGLPadPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLPadPainter(TBuffer &buf, void *obj) {
      ((::TGLPadPainter*)obj)->::TGLPadPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLPadPainter

//______________________________________________________________________________
void TGLParametricEquation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLParametricEquation.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLParametricEquation(void *p) {
      delete ((::TGLParametricEquation*)p);
   }
   static void deleteArray_TGLParametricEquation(void *p) {
      delete [] ((::TGLParametricEquation*)p);
   }
   static void destruct_TGLParametricEquation(void *p) {
      typedef ::TGLParametricEquation current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLParametricEquation(TBuffer &buf, void *obj) {
      ((::TGLParametricEquation*)obj)->::TGLParametricEquation::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLParametricEquation

//______________________________________________________________________________
void TGLParametricPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLParametricPlot.

   TGLPlotPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLParametricPlot(void *p) {
      delete ((::TGLParametricPlot*)p);
   }
   static void deleteArray_TGLParametricPlot(void *p) {
      delete [] ((::TGLParametricPlot*)p);
   }
   static void destruct_TGLParametricPlot(void *p) {
      typedef ::TGLParametricPlot current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLParametricPlot(TBuffer &buf, void *obj) {
      ((::TGLParametricPlot*)obj)->::TGLParametricPlot::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLParametricPlot

//______________________________________________________________________________
void TGLParametricEquationGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLParametricEquationGL.

   TGLPlot3D::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLParametricEquationGL(void *p) {
      return  p ? new(p) ::TGLParametricEquationGL : new ::TGLParametricEquationGL;
   }
   static void *newArray_TGLParametricEquationGL(Long_t nElements, void *p) {
      return p ? new(p) ::TGLParametricEquationGL[nElements] : new ::TGLParametricEquationGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLParametricEquationGL(void *p) {
      delete ((::TGLParametricEquationGL*)p);
   }
   static void deleteArray_TGLParametricEquationGL(void *p) {
      delete [] ((::TGLParametricEquationGL*)p);
   }
   static void destruct_TGLParametricEquationGL(void *p) {
      typedef ::TGLParametricEquationGL current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLParametricEquationGL(TBuffer &buf, void *obj) {
      ((::TGLParametricEquationGL*)obj)->::TGLParametricEquationGL::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLParametricEquationGL

//______________________________________________________________________________
void TGLPolyLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPolyLine.

   TGLLogicalShape::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLPolyLine(void *p) {
      delete ((::TGLPolyLine*)p);
   }
   static void deleteArray_TGLPolyLine(void *p) {
      delete [] ((::TGLPolyLine*)p);
   }
   static void destruct_TGLPolyLine(void *p) {
      typedef ::TGLPolyLine current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLPolyLine(TBuffer &buf, void *obj) {
      ((::TGLPolyLine*)obj)->::TGLPolyLine::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLPolyLine

//______________________________________________________________________________
void TGLPolyMarker::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLPolyMarker.

   TGLLogicalShape::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLPolyMarker(void *p) {
      delete ((::TGLPolyMarker*)p);
   }
   static void deleteArray_TGLPolyMarker(void *p) {
      delete [] ((::TGLPolyMarker*)p);
   }
   static void destruct_TGLPolyMarker(void *p) {
      typedef ::TGLPolyMarker current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLPolyMarker(TBuffer &buf, void *obj) {
      ((::TGLPolyMarker*)obj)->::TGLPolyMarker::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLPolyMarker

//______________________________________________________________________________
void TGLRotateManip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLRotateManip.

   TGLManip::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLRotateManip(void *p) {
      return  p ? new(p) ::TGLRotateManip : new ::TGLRotateManip;
   }
   static void *newArray_TGLRotateManip(Long_t nElements, void *p) {
      return p ? new(p) ::TGLRotateManip[nElements] : new ::TGLRotateManip[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLRotateManip(void *p) {
      delete ((::TGLRotateManip*)p);
   }
   static void deleteArray_TGLRotateManip(void *p) {
      delete [] ((::TGLRotateManip*)p);
   }
   static void destruct_TGLRotateManip(void *p) {
      typedef ::TGLRotateManip current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLRotateManip(TBuffer &buf, void *obj) {
      ((::TGLRotateManip*)obj)->::TGLRotateManip::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLRotateManip

//______________________________________________________________________________
void TGLSAFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSAFrame.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLSAFrame(void *p) {
      delete ((::TGLSAFrame*)p);
   }
   static void deleteArray_TGLSAFrame(void *p) {
      delete [] ((::TGLSAFrame*)p);
   }
   static void destruct_TGLSAFrame(void *p) {
      typedef ::TGLSAFrame current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLSAFrame(TBuffer &buf, void *obj) {
      ((::TGLSAFrame*)obj)->::TGLSAFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLSAFrame

//______________________________________________________________________________
void TGLSAViewer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSAViewer.

   TGLViewer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLSAViewer(void *p) {
      delete ((::TGLSAViewer*)p);
   }
   static void deleteArray_TGLSAViewer(void *p) {
      delete [] ((::TGLSAViewer*)p);
   }
   static void destruct_TGLSAViewer(void *p) {
      typedef ::TGLSAViewer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLSAViewer(TBuffer &buf, void *obj) {
      ((::TGLSAViewer*)obj)->::TGLSAViewer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLSAViewer

//______________________________________________________________________________
void TGLScaleManip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLScaleManip.

   TGLManip::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLScaleManip(void *p) {
      return  p ? new(p) ::TGLScaleManip : new ::TGLScaleManip;
   }
   static void *newArray_TGLScaleManip(Long_t nElements, void *p) {
      return p ? new(p) ::TGLScaleManip[nElements] : new ::TGLScaleManip[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLScaleManip(void *p) {
      delete ((::TGLScaleManip*)p);
   }
   static void deleteArray_TGLScaleManip(void *p) {
      delete [] ((::TGLScaleManip*)p);
   }
   static void destruct_TGLScaleManip(void *p) {
      typedef ::TGLScaleManip current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLScaleManip(TBuffer &buf, void *obj) {
      ((::TGLScaleManip*)obj)->::TGLScaleManip::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLScaleManip

//______________________________________________________________________________
void TGLSceneBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSceneBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLSceneBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLSceneBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLSceneBase(void *p) {
      delete ((::TGLSceneBase*)p);
   }
   static void deleteArray_TGLSceneBase(void *p) {
      delete [] ((::TGLSceneBase*)p);
   }
   static void destruct_TGLSceneBase(void *p) {
      typedef ::TGLSceneBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLSceneBase

//______________________________________________________________________________
void TGLSceneInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSceneInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLSceneInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLSceneInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLSceneInfo(void *p) {
      return  p ? new(p) ::TGLSceneInfo : new ::TGLSceneInfo;
   }
   static void *newArray_TGLSceneInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TGLSceneInfo[nElements] : new ::TGLSceneInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLSceneInfo(void *p) {
      delete ((::TGLSceneInfo*)p);
   }
   static void deleteArray_TGLSceneInfo(void *p) {
      delete [] ((::TGLSceneInfo*)p);
   }
   static void destruct_TGLSceneInfo(void *p) {
      typedef ::TGLSceneInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLSceneInfo

//______________________________________________________________________________
void TGLScene::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLScene.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLScene::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLScene::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLScene(void *p) {
      return  p ? new(p) ::TGLScene : new ::TGLScene;
   }
   static void *newArray_TGLScene(Long_t nElements, void *p) {
      return p ? new(p) ::TGLScene[nElements] : new ::TGLScene[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLScene(void *p) {
      delete ((::TGLScene*)p);
   }
   static void deleteArray_TGLScene(void *p) {
      delete [] ((::TGLScene*)p);
   }
   static void destruct_TGLScene(void *p) {
      typedef ::TGLScene current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLScene

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLScenecLcLTSceneInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TGLScene::TSceneInfo : new ::TGLScene::TSceneInfo;
   }
   static void *newArray_TGLScenecLcLTSceneInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::TGLScene::TSceneInfo[nElements] : new ::TGLScene::TSceneInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLScenecLcLTSceneInfo(void *p) {
      delete ((::TGLScene::TSceneInfo*)p);
   }
   static void deleteArray_TGLScenecLcLTSceneInfo(void *p) {
      delete [] ((::TGLScene::TSceneInfo*)p);
   }
   static void destruct_TGLScenecLcLTSceneInfo(void *p) {
      typedef ::TGLScene::TSceneInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLScene::TSceneInfo

//______________________________________________________________________________
void TGLScenePad::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLScenePad.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLScenePad::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLScenePad::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLScenePad(void *p) {
      delete ((::TGLScenePad*)p);
   }
   static void deleteArray_TGLScenePad(void *p) {
      delete [] ((::TGLScenePad*)p);
   }
   static void destruct_TGLScenePad(void *p) {
      typedef ::TGLScenePad current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLScenePad

//______________________________________________________________________________
void TGLSelectBuffer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSelectBuffer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLSelectBuffer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLSelectBuffer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLSelectBuffer(void *p) {
      return  p ? new(p) ::TGLSelectBuffer : new ::TGLSelectBuffer;
   }
   static void *newArray_TGLSelectBuffer(Long_t nElements, void *p) {
      return p ? new(p) ::TGLSelectBuffer[nElements] : new ::TGLSelectBuffer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLSelectBuffer(void *p) {
      delete ((::TGLSelectBuffer*)p);
   }
   static void deleteArray_TGLSelectBuffer(void *p) {
      delete [] ((::TGLSelectBuffer*)p);
   }
   static void destruct_TGLSelectBuffer(void *p) {
      typedef ::TGLSelectBuffer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLSelectBuffer

//______________________________________________________________________________
void TGLSphere::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSphere.

   TGLLogicalShape::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLSphere(void *p) {
      delete ((::TGLSphere*)p);
   }
   static void deleteArray_TGLSphere(void *p) {
      delete [] ((::TGLSphere*)p);
   }
   static void destruct_TGLSphere(void *p) {
      typedef ::TGLSphere current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLSphere(TBuffer &buf, void *obj) {
      ((::TGLSphere*)obj)->::TGLSphere::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLSphere

//______________________________________________________________________________
void TGLSurfacePainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLSurfacePainter.

   TGLPlotPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLSurfacePainter(void *p) {
      delete ((::TGLSurfacePainter*)p);
   }
   static void deleteArray_TGLSurfacePainter(void *p) {
      delete [] ((::TGLSurfacePainter*)p);
   }
   static void destruct_TGLSurfacePainter(void *p) {
      typedef ::TGLSurfacePainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLSurfacePainter(TBuffer &buf, void *obj) {
      ((::TGLSurfacePainter*)obj)->::TGLSurfacePainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLSurfacePainter

//______________________________________________________________________________
void TGLTF3Painter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLTF3Painter.

   TGLPlotPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLTF3Painter(void *p) {
      delete ((::TGLTF3Painter*)p);
   }
   static void deleteArray_TGLTF3Painter(void *p) {
      delete [] ((::TGLTF3Painter*)p);
   }
   static void destruct_TGLTF3Painter(void *p) {
      typedef ::TGLTF3Painter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLTF3Painter(TBuffer &buf, void *obj) {
      ((::TGLTF3Painter*)obj)->::TGLTF3Painter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLTF3Painter

//______________________________________________________________________________
void TGLIsoPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLIsoPainter.

   TGLPlotPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLIsoPainter(void *p) {
      delete ((::TGLIsoPainter*)p);
   }
   static void deleteArray_TGLIsoPainter(void *p) {
      delete [] ((::TGLIsoPainter*)p);
   }
   static void destruct_TGLIsoPainter(void *p) {
      typedef ::TGLIsoPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLIsoPainter(TBuffer &buf, void *obj) {
      ((::TGLIsoPainter*)obj)->::TGLIsoPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLIsoPainter

//______________________________________________________________________________
void TGLTH3Composition::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLTH3Composition.

   TH3C::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLTH3Composition(void *p) {
      return  p ? new(p) ::TGLTH3Composition : new ::TGLTH3Composition;
   }
   static void *newArray_TGLTH3Composition(Long_t nElements, void *p) {
      return p ? new(p) ::TGLTH3Composition[nElements] : new ::TGLTH3Composition[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLTH3Composition(void *p) {
      delete ((::TGLTH3Composition*)p);
   }
   static void deleteArray_TGLTH3Composition(void *p) {
      delete [] ((::TGLTH3Composition*)p);
   }
   static void destruct_TGLTH3Composition(void *p) {
      typedef ::TGLTH3Composition current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TGLTH3Composition(void *p, TDirectory *dir) {
      ((::TGLTH3Composition*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLTH3Composition(TBuffer &buf, void *obj) {
      ((::TGLTH3Composition*)obj)->::TGLTH3Composition::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGLTH3Composition(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGLTH3Composition*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGLTH3Composition

//______________________________________________________________________________
void TGLTH3CompositionPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLTH3CompositionPainter.

   TGLPlotPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLTH3CompositionPainter(void *p) {
      delete ((::TGLTH3CompositionPainter*)p);
   }
   static void deleteArray_TGLTH3CompositionPainter(void *p) {
      delete [] ((::TGLTH3CompositionPainter*)p);
   }
   static void destruct_TGLTH3CompositionPainter(void *p) {
      typedef ::TGLTH3CompositionPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLTH3CompositionPainter(TBuffer &buf, void *obj) {
      ((::TGLTH3CompositionPainter*)obj)->::TGLTH3CompositionPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLTH3CompositionPainter

//______________________________________________________________________________
void TGLText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLText.

   TAttText::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLText(void *p) {
      return  p ? new(p) ::TGLText : new ::TGLText;
   }
   static void *newArray_TGLText(Long_t nElements, void *p) {
      return p ? new(p) ::TGLText[nElements] : new ::TGLText[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLText(void *p) {
      delete ((::TGLText*)p);
   }
   static void deleteArray_TGLText(void *p) {
      delete [] ((::TGLText*)p);
   }
   static void destruct_TGLText(void *p) {
      typedef ::TGLText current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLText(TBuffer &buf, void *obj) {
      ((::TGLText*)obj)->::TGLText::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLText

//______________________________________________________________________________
void TGLTransManip::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLTransManip.

   TGLManip::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLTransManip(void *p) {
      return  p ? new(p) ::TGLTransManip : new ::TGLTransManip;
   }
   static void *newArray_TGLTransManip(Long_t nElements, void *p) {
      return p ? new(p) ::TGLTransManip[nElements] : new ::TGLTransManip[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLTransManip(void *p) {
      delete ((::TGLTransManip*)p);
   }
   static void deleteArray_TGLTransManip(void *p) {
      delete [] ((::TGLTransManip*)p);
   }
   static void destruct_TGLTransManip(void *p) {
      typedef ::TGLTransManip current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLTransManip(TBuffer &buf, void *obj) {
      ((::TGLTransManip*)obj)->::TGLTransManip::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLTransManip

//______________________________________________________________________________
void TGLViewerEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLViewerEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGLViewerEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGLViewerEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGLViewerEditor(void *p) {
      return  p ? new(p) ::TGLViewerEditor : new ::TGLViewerEditor;
   }
   static void *newArray_TGLViewerEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGLViewerEditor[nElements] : new ::TGLViewerEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGLViewerEditor(void *p) {
      delete ((::TGLViewerEditor*)p);
   }
   static void deleteArray_TGLViewerEditor(void *p) {
      delete [] ((::TGLViewerEditor*)p);
   }
   static void destruct_TGLViewerEditor(void *p) {
      typedef ::TGLViewerEditor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGLViewerEditor

//______________________________________________________________________________
void TGLVoxelPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLVoxelPainter.

   TGLPlotPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLVoxelPainter(void *p) {
      delete ((::TGLVoxelPainter*)p);
   }
   static void deleteArray_TGLVoxelPainter(void *p) {
      delete [] ((::TGLVoxelPainter*)p);
   }
   static void destruct_TGLVoxelPainter(void *p) {
      typedef ::TGLVoxelPainter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLVoxelPainter(TBuffer &buf, void *obj) {
      ((::TGLVoxelPainter*)obj)->::TGLVoxelPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLVoxelPainter

//______________________________________________________________________________
void TGLWidget::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGLWidget.

   TGFrame::Streamer(R__b);
   TGLPaintDevice::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGLWidget(void *p) {
      delete ((::TGLWidget*)p);
   }
   static void deleteArray_TGLWidget(void *p) {
      delete [] ((::TGLWidget*)p);
   }
   static void destruct_TGLWidget(void *p) {
      typedef ::TGLWidget current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGLWidget(TBuffer &buf, void *obj) {
      ((::TGLWidget*)obj)->::TGLWidget::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGLWidget

//______________________________________________________________________________
void TH2GL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2GL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH2GL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH2GL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2GL(void *p) {
      return  p ? new(p) ::TH2GL : new ::TH2GL;
   }
   static void *newArray_TH2GL(Long_t nElements, void *p) {
      return p ? new(p) ::TH2GL[nElements] : new ::TH2GL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2GL(void *p) {
      delete ((::TH2GL*)p);
   }
   static void deleteArray_TH2GL(void *p) {
      delete [] ((::TH2GL*)p);
   }
   static void destruct_TH2GL(void *p) {
      typedef ::TH2GL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TH2GL

//______________________________________________________________________________
void TH3GL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH3GL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH3GL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH3GL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH3GL(void *p) {
      return  p ? new(p) ::TH3GL : new ::TH3GL;
   }
   static void *newArray_TH3GL(Long_t nElements, void *p) {
      return p ? new(p) ::TH3GL[nElements] : new ::TH3GL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH3GL(void *p) {
      delete ((::TH3GL*)p);
   }
   static void deleteArray_TH3GL(void *p) {
      delete [] ((::TH3GL*)p);
   }
   static void destruct_TH3GL(void *p) {
      typedef ::TH3GL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TH3GL

//______________________________________________________________________________
void TPointSet3DGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPointSet3DGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPointSet3DGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPointSet3DGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPointSet3DGL(void *p) {
      return  p ? new(p) ::TPointSet3DGL : new ::TPointSet3DGL;
   }
   static void *newArray_TPointSet3DGL(Long_t nElements, void *p) {
      return p ? new(p) ::TPointSet3DGL[nElements] : new ::TPointSet3DGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPointSet3DGL(void *p) {
      delete ((::TPointSet3DGL*)p);
   }
   static void deleteArray_TPointSet3DGL(void *p) {
      delete [] ((::TPointSet3DGL*)p);
   }
   static void destruct_TPointSet3DGL(void *p) {
      typedef ::TPointSet3DGL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPointSet3DGL

//______________________________________________________________________________
void TX11GLManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TX11GLManager.

   TGLManager::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TX11GLManager(void *p) {
      return  p ? new(p) ::TX11GLManager : new ::TX11GLManager;
   }
   static void *newArray_TX11GLManager(Long_t nElements, void *p) {
      return p ? new(p) ::TX11GLManager[nElements] : new ::TX11GLManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TX11GLManager(void *p) {
      delete ((::TX11GLManager*)p);
   }
   static void deleteArray_TX11GLManager(void *p) {
      delete [] ((::TX11GLManager*)p);
   }
   static void destruct_TX11GLManager(void *p) {
      typedef ::TX11GLManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TX11GLManager(TBuffer &buf, void *obj) {
      ((::TX11GLManager*)obj)->::TX11GLManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TX11GLManager

namespace ROOT {
   static TClass *vectorlEconstsPTGLPhysicalShapemUgR_Dictionary();
   static void vectorlEconstsPTGLPhysicalShapemUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPTGLPhysicalShapemUgR(void *p = 0);
   static void *newArray_vectorlEconstsPTGLPhysicalShapemUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPTGLPhysicalShapemUgR(void *p);
   static void deleteArray_vectorlEconstsPTGLPhysicalShapemUgR(void *p);
   static void destruct_vectorlEconstsPTGLPhysicalShapemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const TGLPhysicalShape*>*)
   {
      vector<const TGLPhysicalShape*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const TGLPhysicalShape*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const TGLPhysicalShape*>", -2, "vector", 216,
                  typeid(vector<const TGLPhysicalShape*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPTGLPhysicalShapemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const TGLPhysicalShape*>) );
      instance.SetNew(&new_vectorlEconstsPTGLPhysicalShapemUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPTGLPhysicalShapemUgR);
      instance.SetDelete(&delete_vectorlEconstsPTGLPhysicalShapemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPTGLPhysicalShapemUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPTGLPhysicalShapemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const TGLPhysicalShape*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const TGLPhysicalShape*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPTGLPhysicalShapemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const TGLPhysicalShape*>*)0x0)->GetClass();
      vectorlEconstsPTGLPhysicalShapemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPTGLPhysicalShapemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPTGLPhysicalShapemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const TGLPhysicalShape*> : new vector<const TGLPhysicalShape*>;
   }
   static void *newArray_vectorlEconstsPTGLPhysicalShapemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const TGLPhysicalShape*>[nElements] : new vector<const TGLPhysicalShape*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPTGLPhysicalShapemUgR(void *p) {
      delete ((vector<const TGLPhysicalShape*>*)p);
   }
   static void deleteArray_vectorlEconstsPTGLPhysicalShapemUgR(void *p) {
      delete [] ((vector<const TGLPhysicalShape*>*)p);
   }
   static void destruct_vectorlEconstsPTGLPhysicalShapemUgR(void *p) {
      typedef vector<const TGLPhysicalShape*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const TGLPhysicalShape*>

namespace ROOT {
   static TClass *vectorlETGLScenecLcLDrawElement_tgR_Dictionary();
   static void vectorlETGLScenecLcLDrawElement_tgR_TClassManip(TClass*);
   static void *new_vectorlETGLScenecLcLDrawElement_tgR(void *p = 0);
   static void *newArray_vectorlETGLScenecLcLDrawElement_tgR(Long_t size, void *p);
   static void delete_vectorlETGLScenecLcLDrawElement_tgR(void *p);
   static void deleteArray_vectorlETGLScenecLcLDrawElement_tgR(void *p);
   static void destruct_vectorlETGLScenecLcLDrawElement_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TGLScene::DrawElement_t>*)
   {
      vector<TGLScene::DrawElement_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TGLScene::DrawElement_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TGLScene::DrawElement_t>", -2, "vector", 216,
                  typeid(vector<TGLScene::DrawElement_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETGLScenecLcLDrawElement_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TGLScene::DrawElement_t>) );
      instance.SetNew(&new_vectorlETGLScenecLcLDrawElement_tgR);
      instance.SetNewArray(&newArray_vectorlETGLScenecLcLDrawElement_tgR);
      instance.SetDelete(&delete_vectorlETGLScenecLcLDrawElement_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlETGLScenecLcLDrawElement_tgR);
      instance.SetDestructor(&destruct_vectorlETGLScenecLcLDrawElement_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TGLScene::DrawElement_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TGLScene::DrawElement_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETGLScenecLcLDrawElement_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TGLScene::DrawElement_t>*)0x0)->GetClass();
      vectorlETGLScenecLcLDrawElement_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETGLScenecLcLDrawElement_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETGLScenecLcLDrawElement_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGLScene::DrawElement_t> : new vector<TGLScene::DrawElement_t>;
   }
   static void *newArray_vectorlETGLScenecLcLDrawElement_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGLScene::DrawElement_t>[nElements] : new vector<TGLScene::DrawElement_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETGLScenecLcLDrawElement_tgR(void *p) {
      delete ((vector<TGLScene::DrawElement_t>*)p);
   }
   static void deleteArray_vectorlETGLScenecLcLDrawElement_tgR(void *p) {
      delete [] ((vector<TGLScene::DrawElement_t>*)p);
   }
   static void destruct_vectorlETGLScenecLcLDrawElement_tgR(void *p) {
      typedef vector<TGLScene::DrawElement_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TGLScene::DrawElement_t>

namespace ROOT {
   static TClass *vectorlETGLScenecLcLDrawElement_tmUgR_Dictionary();
   static void vectorlETGLScenecLcLDrawElement_tmUgR_TClassManip(TClass*);
   static void *new_vectorlETGLScenecLcLDrawElement_tmUgR(void *p = 0);
   static void *newArray_vectorlETGLScenecLcLDrawElement_tmUgR(Long_t size, void *p);
   static void delete_vectorlETGLScenecLcLDrawElement_tmUgR(void *p);
   static void deleteArray_vectorlETGLScenecLcLDrawElement_tmUgR(void *p);
   static void destruct_vectorlETGLScenecLcLDrawElement_tmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TGLScene::DrawElement_t*>*)
   {
      vector<TGLScene::DrawElement_t*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TGLScene::DrawElement_t*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TGLScene::DrawElement_t*>", -2, "vector", 216,
                  typeid(vector<TGLScene::DrawElement_t*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETGLScenecLcLDrawElement_tmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TGLScene::DrawElement_t*>) );
      instance.SetNew(&new_vectorlETGLScenecLcLDrawElement_tmUgR);
      instance.SetNewArray(&newArray_vectorlETGLScenecLcLDrawElement_tmUgR);
      instance.SetDelete(&delete_vectorlETGLScenecLcLDrawElement_tmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETGLScenecLcLDrawElement_tmUgR);
      instance.SetDestructor(&destruct_vectorlETGLScenecLcLDrawElement_tmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TGLScene::DrawElement_t*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TGLScene::DrawElement_t*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETGLScenecLcLDrawElement_tmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TGLScene::DrawElement_t*>*)0x0)->GetClass();
      vectorlETGLScenecLcLDrawElement_tmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETGLScenecLcLDrawElement_tmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETGLScenecLcLDrawElement_tmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGLScene::DrawElement_t*> : new vector<TGLScene::DrawElement_t*>;
   }
   static void *newArray_vectorlETGLScenecLcLDrawElement_tmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGLScene::DrawElement_t*>[nElements] : new vector<TGLScene::DrawElement_t*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETGLScenecLcLDrawElement_tmUgR(void *p) {
      delete ((vector<TGLScene::DrawElement_t*>*)p);
   }
   static void deleteArray_vectorlETGLScenecLcLDrawElement_tmUgR(void *p) {
      delete [] ((vector<TGLScene::DrawElement_t*>*)p);
   }
   static void destruct_vectorlETGLScenecLcLDrawElement_tmUgR(void *p) {
      typedef vector<TGLScene::DrawElement_t*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TGLScene::DrawElement_t*>

namespace ROOT {
   static TClass *maplETClassmUcOunsignedsPintgR_Dictionary();
   static void maplETClassmUcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_maplETClassmUcOunsignedsPintgR(void *p = 0);
   static void *newArray_maplETClassmUcOunsignedsPintgR(Long_t size, void *p);
   static void delete_maplETClassmUcOunsignedsPintgR(void *p);
   static void deleteArray_maplETClassmUcOunsignedsPintgR(void *p);
   static void destruct_maplETClassmUcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TClass*,unsigned int>*)
   {
      map<TClass*,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TClass*,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TClass*,unsigned int>", -2, "map", 99,
                  typeid(map<TClass*,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETClassmUcOunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TClass*,unsigned int>) );
      instance.SetNew(&new_maplETClassmUcOunsignedsPintgR);
      instance.SetNewArray(&newArray_maplETClassmUcOunsignedsPintgR);
      instance.SetDelete(&delete_maplETClassmUcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_maplETClassmUcOunsignedsPintgR);
      instance.SetDestructor(&destruct_maplETClassmUcOunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TClass*,unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TClass*,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETClassmUcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TClass*,unsigned int>*)0x0)->GetClass();
      maplETClassmUcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETClassmUcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETClassmUcOunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TClass*,unsigned int> : new map<TClass*,unsigned int>;
   }
   static void *newArray_maplETClassmUcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TClass*,unsigned int>[nElements] : new map<TClass*,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETClassmUcOunsignedsPintgR(void *p) {
      delete ((map<TClass*,unsigned int>*)p);
   }
   static void deleteArray_maplETClassmUcOunsignedsPintgR(void *p) {
      delete [] ((map<TClass*,unsigned int>*)p);
   }
   static void destruct_maplETClassmUcOunsignedsPintgR(void *p) {
      typedef map<TClass*,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TClass*,unsigned int>

namespace {
  void TriggerDictionaryInitialization_libRGL_Impl() {
    static const char* headers[] = {
"TArcBall.h",
"TF2GL.h",
"TGL5D.h",
"TGL5DDataSetEditor.h",
"TGLAdapter.h",
"TGLAnnotation.h",
"TGLAutoRotator.h",
"TGLAxis.h",
"TGLAxisPainter.h",
"TGLBoundingBox.h",
"TGLBoxPainter.h",
"TGLCamera.h",
"TGLCameraGuide.h",
"TGLCameraOverlay.h",
"TGLClip.h",
"TGLClipSetEditor.h",
"TGLContext.h",
"TGLCylinder.h",
"TGLEmbeddedViewer.h",
"TGLEventHandler.h",
"TGLFBO.h",
"TGLFaceSet.h",
"TGLFontManager.h",
"TGLFormat.h",
"TGLH2PolyPainter.h",
"TGLHistPainter.h",
"TGLLegoPainter.h",
"TGLLightSet.h",
"TGLLightSetEditor.h",
"TGLLockable.h",
"TGLLogicalShape.h",
"TGLManip.h",
"TGLManipSet.h",
"TGLObject.h",
"TGLOrthoCamera.h",
"TGLOutput.h",
"TGLOverlay.h",
"TGLOverlayButton.h",
"TGLPShapeObj.h",
"TGLPShapeObjEditor.h",
"TGLPShapeRef.h",
"TGLPadPainter.h",
"TGLPadUtils.h",
"TGLParametric.h",
"TGLParametricEquationGL.h",
"TGLPerspectiveCamera.h",
"TGLPhysicalShape.h",
"TGLPlot3D.h",
"TGLPlotBox.h",
"TGLPlotCamera.h",
"TGLPlotPainter.h",
"TGLPolyLine.h",
"TGLPolyMarker.h",
"TGLQuadric.h",
"TGLRnrCtx.h",
"TGLRotateManip.h",
"TGLSAFrame.h",
"TGLSAViewer.h",
"TGLScaleManip.h",
"TGLScene.h",
"TGLSceneBase.h",
"TGLSceneInfo.h",
"TGLScenePad.h",
"TGLSelectBuffer.h",
"TGLSelectRecord.h",
"TGLSphere.h",
"TGLStopwatch.h",
"TGLSurfacePainter.h",
"TGLTF3Painter.h",
"TGLTH3Composition.h",
"TGLText.h",
"TGLTransManip.h",
"TGLUtil.h",
"TGLViewer.h",
"TGLViewerBase.h",
"TGLViewerEditor.h",
"TGLVoxelPainter.h",
"TGLWidget.h",
"TH2GL.h",
"TH3GL.h",
"TPointSet3DGL.h",
"TX11GL.h",
0
    };
    static const char* includePaths[] = {
"/usr/include",
"/usr/include/freetype2",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRGL dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TArcBall.h"
#include "TF2GL.h"
#include "TGL5D.h"
#include "TGL5DDataSetEditor.h"
#include "TGLAdapter.h"
#include "TGLAnnotation.h"
#include "TGLAutoRotator.h"
#include "TGLAxis.h"
#include "TGLAxisPainter.h"
#include "TGLBoundingBox.h"
#include "TGLBoxPainter.h"
#include "TGLCamera.h"
#include "TGLCameraGuide.h"
#include "TGLCameraOverlay.h"
#include "TGLClip.h"
#include "TGLClipSetEditor.h"
#include "TGLContext.h"
#include "TGLCylinder.h"
#include "TGLEmbeddedViewer.h"
#include "TGLEventHandler.h"
#include "TGLFBO.h"
#include "TGLFaceSet.h"
#include "TGLFontManager.h"
#include "TGLFormat.h"
#include "TGLH2PolyPainter.h"
#include "TGLHistPainter.h"
#include "TGLLegoPainter.h"
#include "TGLLightSet.h"
#include "TGLLightSetEditor.h"
#include "TGLLockable.h"
#include "TGLLogicalShape.h"
#include "TGLManip.h"
#include "TGLManipSet.h"
#include "TGLObject.h"
#include "TGLOrthoCamera.h"
#include "TGLOutput.h"
#include "TGLOverlay.h"
#include "TGLOverlayButton.h"
#include "TGLPShapeObj.h"
#include "TGLPShapeObjEditor.h"
#include "TGLPShapeRef.h"
#include "TGLPadPainter.h"
#include "TGLPadUtils.h"
#include "TGLParametric.h"
#include "TGLParametricEquationGL.h"
#include "TGLPerspectiveCamera.h"
#include "TGLPhysicalShape.h"
#include "TGLPlot3D.h"
#include "TGLPlotBox.h"
#include "TGLPlotCamera.h"
#include "TGLPlotPainter.h"
#include "TGLPolyLine.h"
#include "TGLPolyMarker.h"
#include "TGLQuadric.h"
#include "TGLRnrCtx.h"
#include "TGLRotateManip.h"
#include "TGLSAFrame.h"
#include "TGLSAViewer.h"
#include "TGLScaleManip.h"
#include "TGLScene.h"
#include "TGLSceneBase.h"
#include "TGLSceneInfo.h"
#include "TGLScenePad.h"
#include "TGLSelectBuffer.h"
#include "TGLSelectRecord.h"
#include "TGLSphere.h"
#include "TGLStopwatch.h"
#include "TGLSurfacePainter.h"
#include "TGLTF3Painter.h"
#include "TGLTH3Composition.h"
#include "TGLText.h"
#include "TGLTransManip.h"
#include "TGLUtil.h"
#include "TGLViewer.h"
#include "TGLViewerBase.h"
#include "TGLViewerEditor.h"
#include "TGLVoxelPainter.h"
#include "TGLWidget.h"
#include "TH2GL.h"
#include "TH3GL.h"
#include "TPointSet3DGL.h"
#include "TX11GL.h"
// @(#)root/gl:$Id$

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#include "RConfigure.h"

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class TGLWidget;
#pragma link C++ class TGLContext;
#pragma link C++ class TGLContextIdentity;
#pragma link C++ class TGLFormat;
#pragma link C++ class TGLFBO+;

#pragma link C++ class TGLVertex3;
#pragma link C++ class TGLVector3;
#pragma link C++ class TGLLine3;
#pragma link C++ class TGLRect;
#pragma link C++ class TGLPlane;
#pragma link C++ class TGLMatrix;
#pragma link C++ class TGLColor;
#pragma link C++ class TGLColorSet;
#pragma link C++ class TGLUtil;
#pragma link C++ class TGLUtil::TColorLocker;
#pragma link C++ class TGLUtil::TDrawQualityModifier;
#pragma link C++ class TGLUtil::TDrawQualityScaler;
#pragma link C++ class TGLQuadric;

#pragma link C++ class TGLStopwatch;
#pragma link C++ class TGLLockable;
#pragma link C++ class TGLBoundingBox;
#pragma link C++ class TGLRnrCtx+;
#pragma link C++ class TGLSelectBuffer+;
#pragma link C++ class TGLSelectRecordBase+;
#pragma link C++ class TGLSelectRecord+;
#pragma link C++ class TGLOvlSelectRecord+;

#pragma link C++ class TGLLogicalShape;
#pragma link C++ class TGLPhysicalShape;

#pragma link C++ class TGLClip+;
#pragma link C++ class TGLClipPlane+;
#pragma link C++ class TGLClipBox+;
#pragma link C++ class TGLClipSet+;
#pragma link C++ class TGLClipSetEditor+;
#pragma link C++ class TGLClipSetSubEditor+;

#pragma link C++ class TGLManip;
#pragma link C++ class TGLScaleManip;
#pragma link C++ class TGLTransManip;
#pragma link C++ class TGLRotateManip;
#pragma link C++ class TGLManipSet;

#pragma link C++ class TGLCamera;
#pragma link C++ class TGLOrthoCamera;
#pragma link C++ class TGLPerspectiveCamera;
#pragma link C++ class TGLCameraOverlay;
#pragma link C++ class TGLCameraGuide;
#pragma link C++ class TGLPlotCamera+;
#pragma link C++ class TGLAutoRotator+;

#pragma link C++ class TGLSceneBase+;
#pragma link C++ class TGLScene+;
#pragma link C++ class TGLScenePad+;
#pragma link C++ class TGLSceneInfo+;
#pragma link C++ class TGLScene::TSceneInfo+;
#pragma link C++ class TGLOverlayElement+;
#pragma link C++ class TGLOverlayList+;
#pragma link C++ class TGLOverlayButton+;
#pragma link C++ class TGLAnnotation+;

#pragma link C++ class TGLViewerBase+;
#pragma link C++ class TGLViewer+;
#pragma link C++ class TGLEventHandler;
#pragma link C++ class TGLFaderHelper+;
#pragma link C++ class TGLViewerEditor+;
#pragma link C++ class TGLEmbeddedViewer;
#pragma link C++ class TGLSAViewer;
#pragma link C++ class TGLSAFrame;

#pragma link C++ class TGLPShapeRef+;
#pragma link C++ class TGLPShapeObj+;
#pragma link C++ class TGLPShapeObjEditor+;

#pragma link C++ class TGLLightSet+;
#pragma link C++ class TGLLightSetEditor+;
#pragma link C++ class TGLLightSetSubEditor+;


#pragma link C++ class TGLOutput;

#pragma link C++ class TArcBall;

#pragma link C++ class TGLFaceSet;
#pragma link C++ class TGLPolyLine;
#pragma link C++ class TGLPolyMarker;
#pragma link C++ class TGLCylinder;
#pragma link C++ class TGLSphere;
#pragma link C++ class TGLText;
#pragma link C++ class TGLAxis;
#pragma link C++ class TGLAxisPainter+;
#pragma link C++ class TGLAxisPainterBox+;

#pragma link C++ class TGLSelectionBuffer;
#pragma link C++ class TGLPlotCoordinates;
#pragma link C++ class TGLSurfacePainter;
#pragma link C++ class TGLVoxelPainter;
#pragma link C++ class TGLHistPainter;
#pragma link C++ class TGLLegoPainter;
#pragma link C++ class TGLPlotPainter;
#pragma link C++ class TGLBoxPainter;
#pragma link C++ class TGLTF3Painter;
#pragma link C++ class TGLIsoPainter;
#pragma link C++ class TGLPlotBox;
#pragma link C++ class TGLTH3Slice;
#pragma link C++ class TGLBoxCut;
#pragma link C++ class TGLParametricEquation;
#pragma link C++ class TGLParametricPlot;
#pragma link C++ class TGLAdapter;
#pragma link C++ class TF2GL+;
#pragma link C++ class TH2GL+;
#pragma link C++ class TH3GL+;
#pragma link C++ class TGLH2PolyPainter;
#pragma link C++ class TGLParametricEquationGL;
#pragma link C++ class TGLPadPainter;
#pragma link C++ class TGL5DDataSet;
#pragma link C++ class TGL5DDataSetEditor;
#pragma link C++ class TGLTH3Composition;
#pragma link C++ class TGLTH3CompositionPainter;

#if !defined(_WIN32) && !defined(R__HAS_COCOA)
#pragma link C++ class TX11GLManager;
#endif

#pragma link C++ class TGLObject+;
#pragma link C++ class TGLPlot3D+;
#pragma link C++ class TPointSet3DGL+;

#pragma link C++ class TGLFont;
#pragma link C++ class TGLFontManager;

#pragma link C++ namespace Rgl;

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRGL",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRGL_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRGL_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRGL() {
  TriggerDictionaryInitialization_libRGL_Impl();
}
