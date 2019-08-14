// @(#)root/cont:$Id$
// Author:  Lorenzo Moneta 08/2016

/*************************************************************************
 * Copyright (C) 1995-2003, Rene Brun, Fons Rademakers and al.           *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

// Helper clas implementing some of the TH1 functionality

#include "TH1.h"
#include "TList.h"

class TH1Merger {

public: 

   enum EMergerType {
      kNotCompatible = -1, // histogram arenot compatible and cannot be merged
      kAllSameAxes = 0,   // histogram have all some axes
      kAllNoLimits  = 1,  // all histogram don't have limits (the buffer is used)
      kHasNewLimits  = 2,  // all histogram don't have limits (the buffer is used)
      kAllLabel = 3  // histogram have labels all axis
   };

   static Bool_t AxesHaveLimits(const TH1 * h);

   static Int_t FindFixBinNumber(Int_t ibin, const TAxis & inAxis, const TAxis & outAxis) {
      // should I ceck in case of underflow/overflow if underflow/overflow values of input axis
      // outside  output axis ?  
      if (ibin == 0 ) return 0;   // return underflow 
      if (ibin == inAxis.GetNbins()+1 ) return outAxis.GetNbins()+1; // return overflow
      return outAxis.FindFixBin(inAxis.GetBinCenter(ibin));
   }

   // find bin number estending the axis
   static Int_t FindBinNumber(Int_t ibin, const TAxis & inAxis, TAxis & outAxis) {
      // should I ceck in case of underflow/overflow if underflow/overflow values of input axis
      // outside  output axis ?  
      if (ibin == 0 ) return 0;   // return underflow 
      if (ibin == inAxis.GetNbins()+1 ) return outAxis.GetNbins()+1; // return overflow
      return outAxis.FindBin(inAxis.GetBinCenter(ibin));
   }

   
   TH1Merger(TH1 & h, TCollection & l) :
      fH0(&h),
      fHClone(nullptr),
      fNewAxisFlag(0)
   {
      fInputList.AddAll(&l); 
   }

   ~TH1Merger() {
      // The list contains fHClone, so let's clear it first to avoid
      // accessing deleted memory later [we 'could' have just removed
      // fHClone from the list]
      fInputList.Clear();
      if (fHClone) delete fHClone; 
   }

   // function douing the actual merge
   Bool_t operator() ();

private: 

   EMergerType ExamineHistograms();

   void DefineNewAxes(); 
   
   Bool_t BufferMerge();

   Bool_t SameAxesMerge();

   Bool_t DifferentAxesMerge();

   Bool_t LabelMerge();


   TH1 * fH0;  //! histogram on which the list is merged
   TH1 * fHClone;  //! copy of fH0 - managed by this class
   TList fInputList; // input histogram List
   TAxis fNewXAxis; 
   TAxis fNewYAxis; 
   TAxis fNewZAxis; 
   UInt_t fNewAxisFlag; 
};
