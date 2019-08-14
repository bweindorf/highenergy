// @(#)root/tmva $Id$
// Author: Omar Zapata, Lorenzo Moneta, Sergei Gleyzer, Kim Albertsson

/**********************************************************************************
 * Project: TMVA - a Root-integrated toolkit for multivariate data analysis       *
 * Package: TMVA                                                                  *
 * Class  : ROCCurve                                                              *
 *                                                                                *
 * Description:                                                                   *
 *      This is class to compute ROC Integral (AUC)                               *
 *                                                                                *
 * Authors :                                                                      *
 *      Omar Zapata     <Omar.Zapata@cern.ch>    - UdeA/ITM Colombia              *
 *      Lorenzo Moneta  <Lorenzo.Moneta@cern.ch> - CERN, Switzerland              *
 *      Sergei Gleyzer  <Sergei.Gleyzer@cern.ch> - U of Florida & CERN            *
 *      Kim Albertsson  <kim.albertsson@cern.ch> - LTU & CERN                     *
 *                                                                                *
 * Copyright (c) 2015:                                                            *
 *      CERN, Switzerland                                                         *
 *      UdeA/ITM, Colombia                                                        *
 *      U. of Florida, USA                                                        *
 **********************************************************************************/
#ifndef ROOT_TMVA_ROCCurve
#define ROOT_TMVA_ROCCurve

#include "Rtypes.h"

#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>

class TList;
class TTree;
class TString;
class TH1;
class TH2;
class TH2F;
class TSpline;
class TSpline1;
class TGraph;

namespace TMVA {

class MsgLogger;

class ROCCurve {

public:
   ROCCurve(const std::vector<Float_t> &mvaValues, const std::vector<Bool_t> &mvaTargets,
            const std::vector<Float_t> &mvaWeights);

   ROCCurve(const std::vector<Float_t> &mvaValues, const std::vector<Bool_t> &mvaTargets);

   ROCCurve(const std::vector<Float_t> &mvaSignal, const std::vector<Float_t> &mvaBackground,
            const std::vector<Float_t> &mvaSignalWeights, const std::vector<Float_t> &mvaBackgroundWeights);

   ROCCurve(const std::vector<Float_t> &mvaSignal, const std::vector<Float_t> &mvaBackground);

   ~ROCCurve();

   Double_t GetEffSForEffB(Double_t effB, const UInt_t num_points = 41);

   Double_t GetROCIntegral(const UInt_t points = 41);
   TGraph *GetROCCurve(const UInt_t points = 100); // n divisions = #points -1

private:
   mutable MsgLogger *fLogger; //! message logger
   MsgLogger &Log() const { return *fLogger; }

   TGraph *fGraph;

   std::vector<Float_t> fMvaSignal;
   std::vector<Float_t> fMvaBackground;
   std::vector<Float_t> fMvaSignalWeights;
   std::vector<Float_t> fMvaBackgroundWeights;

   std::vector<Double_t> ComputeSensitivity(const UInt_t num_points);
   std::vector<Double_t> ComputeSpecificity(const UInt_t num_points);
};
}
#endif
