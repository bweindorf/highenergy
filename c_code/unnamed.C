// Mainframe macro generated from application: /home/brandon/Projects/root/bin/root.exe
// By ROOT version 6.10/04 on 2019-10-10 20:02:05

#ifndef ROOT_TGDockableFrame
#include "TGDockableFrame.h"
#endif
#ifndef ROOT_TGMenu
#include "TGMenu.h"
#endif
#ifndef ROOT_TGMdiDecorFrame
#include "TGMdiDecorFrame.h"
#endif
#ifndef ROOT_TG3DLine
#include "TG3DLine.h"
#endif
#ifndef ROOT_TGMdiFrame
#include "TGMdiFrame.h"
#endif
#ifndef ROOT_TGMdiMainFrame
#include "TGMdiMainFrame.h"
#endif
#ifndef ROOT_TGMdiMenu
#include "TGMdiMenu.h"
#endif
#ifndef ROOT_TGColorSelect
#include "TGColorSelect.h"
#endif
#ifndef ROOT_TGListBox
#include "TGListBox.h"
#endif
#ifndef ROOT_TGNumberEntry
#include "TGNumberEntry.h"
#endif
#ifndef ROOT_TGScrollBar
#include "TGScrollBar.h"
#endif
#ifndef ROOT_TGComboBox
#include "TGComboBox.h"
#endif
#ifndef ROOT_TGuiBldHintsEditor
#include "TGuiBldHintsEditor.h"
#endif
#ifndef ROOT_TGuiBldNameFrame
#include "TGuiBldNameFrame.h"
#endif
#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGFileDialog
#include "TGFileDialog.h"
#endif
#ifndef ROOT_TGShutter
#include "TGShutter.h"
#endif
#ifndef ROOT_TGButtonGroup
#include "TGButtonGroup.h"
#endif
#ifndef ROOT_TGCanvas
#include "TGCanvas.h"
#endif
#ifndef ROOT_TGFSContainer
#include "TGFSContainer.h"
#endif
#ifndef ROOT_TGuiBldEditor
#include "TGuiBldEditor.h"
#endif
#ifndef ROOT_TGButton
#include "TGButton.h"
#endif
#ifndef ROOT_TGFSComboBox
#include "TGFSComboBox.h"
#endif
#ifndef ROOT_TGLabel
#include "TGLabel.h"
#endif
#ifndef ROOT_TGMsgBox
#include "TGMsgBox.h"
#endif
#ifndef ROOT_TRootGuiBuilder
#include "TRootGuiBuilder.h"
#endif
#ifndef ROOT_TGTab
#include "TGTab.h"
#endif
#ifndef ROOT_TGListView
#include "TGListView.h"
#endif
#ifndef ROOT_TGSplitter
#include "TGSplitter.h"
#endif
#ifndef ROOT_TGStatusBar
#include "TGStatusBar.h"
#endif
#ifndef ROOT_TGListTree
#include "TGListTree.h"
#endif
#ifndef ROOT_TGuiBldGeometryFrame
#include "TGuiBldGeometryFrame.h"
#endif
#ifndef ROOT_TGToolTip
#include "TGToolTip.h"
#endif
#ifndef ROOT_TGToolBar
#include "TGToolBar.h"
#endif
#ifndef ROOT_TGuiBldDragManager
#include "TGuiBldDragManager.h"
#endif

#include "Riostream.h"

void unnamed()
{

   // main frame
   TGMainFrame *fMainFrame1139 = new TGMainFrame(gClient->GetRoot(),10,10,kMainFrame | kVerticalFrame);
   fMainFrame1139->SetName("fMainFrame1139");
   fMainFrame1139->SetLayoutBroken(kTRUE);

   TGFont *ufont;         // will reflect user font changes
   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   TGGC   *uGC;           // will reflect user GC changes
   // graphics context changes
   GCValues_t valEntry799;
   valEntry799.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry799.fForeground);
   gClient->GetColorByName("#e8e8e8",valEntry799.fBackground);
   valEntry799.fFillStyle = kFillSolid;
   valEntry799.fFont = ufont->GetFontHandle();
   valEntry799.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry799, kTRUE);
   TGTextEntry *fTextEntry799 = new TGTextEntry(fMainFrame1139, new TGTextBuffer(14),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kOwnBackground);
   fTextEntry799->SetMaxLength(4096);
   fTextEntry799->SetAlignment(kTextLeft);
   fTextEntry799->SetText("fTextEntry799");
   fTextEntry799->Resize(85,fTextEntry799->GetDefaultHeight());
   fMainFrame1139->AddFrame(fTextEntry799, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry799->MoveResize(168,96,85,21);
   TGTextButton *OK = new TGTextButton(fMainFrame1139,"fTextButton856",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   OK->SetTextJustify(36);
   OK->SetMargins(0,0,0,0);
   OK->SetWrapLength(-1);
   OK->Resize(92,23);
   fMainFrame1139->AddFrame(OK, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   OK->MoveResize(258,95,92,23);

   fMainFrame1139->SetMWMHints(kMWMDecorAll,
                        kMWMFuncAll,
                        kMWMInputModeless);
   fMainFrame1139->MapSubwindows();

   fMainFrame1139->Resize(fMainFrame1139->GetDefaultSize());
   fMainFrame1139->MapWindow();
   fMainFrame1139->Resize(490,372);
}  
