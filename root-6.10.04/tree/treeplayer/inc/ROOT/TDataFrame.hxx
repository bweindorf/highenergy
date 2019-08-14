// Author: Enrico Guiraud, Danilo Piparo CERN  12/2016

/*************************************************************************
 * Copyright (C) 1995-2016, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

/**
  \defgroup dataframe Data Frame
The ROOT Data Frame allows to analyse data stored in TTrees with a high level interface.
*/

#ifndef ROOT_TDATAFRAME
#define ROOT_TDATAFRAME

#include "ROOT/TDFInterface.hxx"
#include "ROOT/TDFNodes.hxx"
#include "ROOT/TDFUtils.hxx"
#include "TChain.h"

#include <memory>
#include <iosfwd> // std::ostringstream
#include <stdexcept>
#include <string>
class TDirectory;
class TTree;

namespace ROOT {
namespace Experimental {
namespace TDFDetail = ROOT::Detail::TDF;
namespace TDFInternal = ROOT::Internal::TDF;

class TDataFrame : public TDF::TInterface<TDFDetail::TLoopManager> {
   using ColumnNames_t = TDFDetail::ColumnNames_t;

public:
   TDataFrame(std::string_view treeName, std::string_view filenameglob, const ColumnNames_t &defaultBranches = {});
   ////////////////////////////////////////////////////////////////////////////
   /// \brief Build the dataframe
   /// \tparam FILENAMESCOLL The type of the file collection: only requirement: must have begin and end.
   /// \param[in] treeName Name of the tree contained in the directory
   /// \param[in] filenamescoll Collection of file names, for example a list of strings.
   /// \param[in] defaultBranches Collection of default branches.
   ///
   /// The default branches are looked at in case no branch is specified in the
   /// booking of actions or transformations.
   /// See TInterface for the documentation of the
   /// methods available.
   template <typename FILENAMESCOLL = std::vector<std::string>,
             typename std::enable_if<TDFInternal::TIsContainer<FILENAMESCOLL>::fgValue, int>::type = 0>
   TDataFrame(std::string_view treeName, const FILENAMESCOLL &filenamescoll,
              const ColumnNames_t &defaultBranches = {});
   TDataFrame(std::string_view treeName, ::TDirectory *dirPtr, const ColumnNames_t &defaultBranches = {});
   TDataFrame(TTree &tree, const ColumnNames_t &defaultBranches = {});
   TDataFrame(Long64_t numEntries);
};

template <typename FILENAMESCOLL, typename std::enable_if<TDFInternal::TIsContainer<FILENAMESCOLL>::fgValue, int>::type>
TDataFrame::TDataFrame(std::string_view treeName, const FILENAMESCOLL &filenamescoll,
                       const ColumnNames_t &defaultBranches)
   : TDF::TInterface<TDFDetail::TLoopManager>(std::make_shared<TDFDetail::TLoopManager>(nullptr, defaultBranches))
{
   std::string treeNameInt(treeName);
   auto chain = std::make_shared<TChain>(treeNameInt.c_str());
   for (auto &fileName : filenamescoll) chain->Add(TDFInternal::ToConstCharPtr(fileName));
   fProxiedPtr->SetTree(std::static_pointer_cast<TTree>(chain));
}

} // end NS Experimental
} // end NS ROOT

////////////////////////////////////////////////////////////////////////////////
/// Print a TDataFrame at the prompt:
namespace cling {
inline std::string printValue(ROOT::Experimental::TDataFrame *tdf)
{
   auto df = tdf->GetDataFrameChecked();
   auto *tree = df->GetTree();
   auto defBranches = df->GetDefaultBranches();
   auto tmpBranches = df->GetTmpBranches();

   std::ostringstream ret;
   if (tree) {
      ret << "A data frame built on top of the " << tree->GetName() << " dataset.";
      if (!defBranches.empty()) {
         if (defBranches.size() == 1)
            ret << "\nDefault branch: " << defBranches[0];
         else {
            ret << "\nDefault branches:\n";
            for (auto &&branch : defBranches) {
               ret << " - " << branch << "\n";
            }
         }
      }
   } else {
      ret << "A data frame that will create " << df->GetNEmptyEntries() << " entries\n";
   }

   return ret.str();
}
} // namespace cling

#endif // ROOT_TDATAFRAME
