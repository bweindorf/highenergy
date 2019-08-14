// @(#)root/treeplayer:$Id$
// Author: Axel Naumann, 2011-09-21

/*************************************************************************
 * Copyright (C) 1995-2013, Rene Brun and Fons Rademakers and al.        *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#include "TTreeReader.h"

#include "TChain.h"
#include "TDirectory.h"
#include "TEntryList.h"
#include "TTreeReaderValue.h"

/** \class TTreeReader
 TTreeReader is a simple, robust and fast interface to read values from a TTree,
 TChain or TNtuple.

 It uses `TTreeReaderValue<T>` and `TTreeReaderArray<T>` to access the data.

 Example code can be found in
 tutorials/tree/hsimpleReader.C and tutorials/trees/h1analysisTreeReader.h and
 tutorials/trees/h1analysisTreeReader.C for a TSelector.

 You can generate a skeleton of `TTreeReaderValue<T>` and `TTreeReaderArray<T>` declarations
 for all of a tree's branches using `TTree::MakeSelector()`.

 Roottest contains an
 <a href="http://root.cern.ch/gitweb?p=roottest.git;a=tree;f=root/tree/reader;hb=HEAD">example</a>
 showing the full power.

A simpler analysis example - the one from the tutorials - can be found below:
it histograms a function of the px and py branches.

~~~{.cpp}
// A simple TTreeReader use: read data from hsimple.root (written by hsimple.C)

#include "TFile.h
#include "TH1F.h
#include "TTreeReader.h
#include "TTreeReaderValue.h

void hsimpleReader() {
   // Create a histogram for the values we read.
   TH1F("h1", "ntuple", 100, -4, 4);

   // Open the file containing the tree.
   TFile *myFile = TFile::Open("$ROOTSYS/tutorials/hsimple.root");

   // Create a TTreeReader for the tree, for instance by passing the
   // TTree's name and the TDirectory / TFile it is in.
   TTreeReader myReader("ntuple", myFile);

   // The branch "px" contains floats; access them as myPx.
   TTreeReaderValue<Float_t> myPx(myReader, "px");
   // The branch "py" contains floats, too; access those as myPy.
   TTreeReaderValue<Float_t> myPy(myReader, "py");

   // Loop over all entries of the TTree or TChain.
   while (myReader.Next()) {
      // Just access the data as if myPx and myPy were iterators (note the '*'
      // in front of them):
      myHist->Fill(*myPx + *myPy);
   }

   myHist->Draw();
}
~~~

A more complete example including error handling and a few combinations of
TTreeReaderValue and TTreeReaderArray would look like this:

~~~{.cpp}
#include <TFile.h>
#include <TH1.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

#include "TriggerInfo.h"
#include "Muon.h"
#include "Tau.h"

#include <vector>
#include <iostream>

bool CheckValue(ROOT::Internal::TTreeReaderValueBase& value) {
   if (value->GetSetupStatus() < 0) {
      std::cerr << "Error " << value->GetSetupStatus()
                << "setting up reader for " << value->GetBranchName() << '\n';
      return false;
   }
   return true;
}


// Analyze the tree "MyTree" in the file passed into the function.
// Returns false in case of errors.
bool analyze(TFile* file) {
   // Create a TTreeReader named "MyTree" from the given TDirectory.
   // The TTreeReader gives access to the TTree to the TTreeReaderValue and
   // TTreeReaderArray objects. It knows the current entry number and knows
   // how to iterate through the TTree.
   TTreeReader reader("MyTree", file);

   // Read a single float value in each tree entries:
   TTreeReaderValue<float> weight(reader, "event.weight");

   // Read a TriggerInfo object from the tree entries:
   TTreeReaderValue<TriggerInfo> triggerInfo(reader, "triggerInfo");

   //Read a vector of Muon objects from the tree entries:
   TTreeReaderValue<std::vector<Muon>> muons(reader, "muons");

   //Read the pT for all jets in the tree entry:
   TTreeReaderArray<double> jetPt(reader, "jets.pT");

   // Read the taus in the tree entry:
   TTreeReaderArray<Tau> taus(reader, "taus");


   // Now iterate through the TTree entries and fill a histogram.

   TH1F("hist", "TTreeReader example histogram", 10, 0., 100.);

   while (reader.Next()) {
      if (!CheckValue(weight)) return false;
      if (!CheckValue(triggerInfo)) return false;
      if (!CheckValue(muons)) return false;
      if (!CheckValue(jetPt)) return false;
      if (!CheckValue(taus)) return false;

      // Access the TriggerInfo object as if it's a pointer.
      if (!triggerInfo->hasMuonL1())
         continue;

      // Ditto for the vector<Muon>.
      if (!muons->size())
         continue;

      // Access the jetPt as an array, whether the TTree stores this as
      // a std::vector, std::list, TClonesArray or Jet* C-style array, with
      // fixed or variable array size.
      if (jetPt.GetSize() < 2 || jetPt[0] < 100)
         continue;

      // Access the array of taus.
      if (!taus.IsEmpty()) {
         // Access a float value - need to dereference as TTreeReaderValue
         // behaves like an iterator
         float currentWeight = *weight;
         for (const Tau& tau: taus) {
            hist->Fill(tau.eta(), currentWeight);
         }
      }
   } // TTree entry / event loop
}
~~~
*/

ClassImp(TTreeReader)

using namespace ROOT::Internal;

////////////////////////////////////////////////////////////////////////////////
/// Access data from tree.

TTreeReader::TTreeReader(TTree* tree, TEntryList* entryList /*= nullptr*/):
   fTree(tree),
   fEntryList(entryList)
{
   if (!fTree) {
      Error("TTreeReader", "TTree is NULL!");
   } else {
      Initialize();
   }
}

////////////////////////////////////////////////////////////////////////////////
/// Access data from the tree called keyname in the directory (e.g. TFile)
/// dir, or the current directory if dir is NULL. If keyname cannot be
/// found, or if it is not a TTree, IsZombie() will return true.

TTreeReader::TTreeReader(const char* keyname, TDirectory* dir, TEntryList* entryList /*= nullptr*/):
   fEntryList(entryList)
{
   if (!dir) dir = gDirectory;
   dir->GetObject(keyname, fTree);
   Initialize();
}

////////////////////////////////////////////////////////////////////////////////
/// Tell all value readers that the tree reader does not exist anymore.

TTreeReader::~TTreeReader()
{
   for (std::deque<ROOT::Internal::TTreeReaderValueBase*>::const_iterator
           i = fValues.begin(), e = fValues.end(); i != e; ++i) {
      (*i)->MarkTreeReaderUnavailable();
   }
   delete fDirector;
   fProxies.SetOwner();
}

////////////////////////////////////////////////////////////////////////////////
/// Initialization of the director.

void TTreeReader::Initialize()
{
   fEntry = -1;
   if (!fTree) {
      MakeZombie();
      fEntryStatus = kEntryNoTree;
      fMostRecentTreeNumber = -1;
      return;
   }

   ResetBit(kZombie);
   if (fTree->InheritsFrom(TChain::Class())) {
      SetBit(kBitIsChain);
   }
   fDirector = new ROOT::Internal::TBranchProxyDirector(fTree, -1);
}

////////////////////////////////////////////////////////////////////////////////
/// Set the range of entries to be loaded by `Next()`; end will not be loaded.
///
/// If end <= begin, `end` is ignored (set to `-1`) and only `begin` is used.
/// Example:
///
///  ~~~ {.cpp}
/// reader.SetEntriesRange(3, 5);
/// while (reader.Next()) {
///   // Will load entries 3 and 4.
/// }
/// ~~~
///
/// \param beginEntry The first entry to be loaded by `Next()`.
/// \param endEntry   The entry where `Next()` will return kFALSE, not loading it.

TTreeReader::EEntryStatus TTreeReader::SetEntriesRange(Long64_t beginEntry, Long64_t endEntry)
{
   if (beginEntry < 0)
      return kEntryNotFound;
   // Complain if the entries number is larger than the tree's / chain's / entry
   // list's number of entries, unless it's a TChain and "max entries" is
   // uninitialized (i.e. TTree::kMaxEntries).
   if (beginEntry >= GetEntries(false) && !(IsChain() && GetEntries(false) == TTree::kMaxEntries))
      return kEntryNotFound;

   if (endEntry > beginEntry)
      fEndEntry = endEntry;
   else
      fEndEntry = -1;
   if (beginEntry - 1 < 0)
      Restart();
   else
      SetEntry(beginEntry - 1);
   return kEntryValid;
}

void TTreeReader::Restart() {
   fDirector->SetTree(nullptr);
   fDirector->SetReadEntry(-1);
   fProxiesSet = false; // we might get more value readers, meaning new proxies.
   fEntry = -1;
}

////////////////////////////////////////////////////////////////////////////////
/// Returns the number of entries of the TEntryList if one is provided, else
/// of the TTree / TChain, independent of a range set by SetEntriesRange().
///
/// \param force If `IsChain()` and `force`, determines whether all TFiles of
///   this TChain should be opened to determine the exact number of entries
/// of the TChain. If `!IsChain()`, `force` is ignored.

Long64_t TTreeReader::GetEntries(Bool_t force) const {
   if (fEntryList)
      return fEntryList->GetN();
   if (!fTree)
      return -1;
   if (force)
      return fTree->GetEntries();
   return fTree->GetEntriesFast();
}



////////////////////////////////////////////////////////////////////////////////
/// Load an entry into the tree, return the status of the read.
/// For chains, entry is the global (i.e. not tree-local) entry number, unless
/// `local` is `true`, in which case `entry` specifies the entry number within
/// the current tree. This is needed for instance for TSelector::Process().

TTreeReader::EEntryStatus TTreeReader::SetEntryBase(Long64_t entry, Bool_t local)
{
   if (!fTree || !fDirector) {
      fEntryStatus = kEntryNoTree;
      fEntry = -1;
      return fEntryStatus;
   }

   if (fTree->GetEntryList() && !TestBit(kBitHaveWarnedAboutEntryListAttachedToTTree)) {
      Warning("SetEntryBase()",
              "The TTree / TChain has an associated TEntryList. "
              "TTreeReader ignores TEntryLists unless you construct the TTreeReader passing a TEntryList.");
      SetBit(kBitHaveWarnedAboutEntryListAttachedToTTree);
   }

   fEntry = entry;

   Long64_t entryAfterList = entry;
   if (fEntryList) {
      if (entry >= fEntryList->GetN()) {
         // Passed the end of the chain, Restart() was not called:
         // don't try to load entries anymore. Can happen in these cases:
         // while (tr.Next()) {something()};
         // while (tr.Next()) {somethingelse()}; // should not be calling somethingelse().
         fEntryStatus = kEntryNotFound;
         return fEntryStatus;
      }
      if (entry >= 0) entryAfterList = fEntryList->GetEntry(entry);
      if (local && IsChain()) {
         // Must translate the entry list's entry to the current TTree's entry number.
         local = kFALSE;
      }
   }

   if (fProxiesSet && fDirector && fDirector->GetReadEntry() == -1
       && fMostRecentTreeNumber != -1) {
      // Passed the end of the chain, Restart() was not called:
      // don't try to load entries anymore. Can happen in these cases:
      // while (tr.Next()) {something()};
      // while (tr.Next()) {somethingelse()}; // should not be calling somethingelse().
      fEntryStatus = kEntryNotFound;
      return fEntryStatus;
   }

   Int_t treeNumberBeforeLoadTree = fTree->GetTreeNumber();

   TTree* treeToCallLoadOn = local ? fTree->GetTree() : fTree;
   Long64_t loadResult = treeToCallLoadOn->LoadTree(entryAfterList);

   if (loadResult == -2) {
      fDirector->SetTree(nullptr);
      fEntryStatus = kEntryNotFound;
      return fEntryStatus;
   }

   if (fMostRecentTreeNumber != treeNumberBeforeLoadTree) {
      // This can happen if someone switched trees behind us.
      // Likely cause: a TChain::LoadTree() e.g. from TTree::Process().
      // This means that "local" should be set!

      if (fTree->GetTreeNumber() != treeNumberBeforeLoadTree) {
         // we have switched trees again, which means that "local" was not set!
         // There are two entities switching trees which is bad.
         R__ASSERT(!local && "Logic error - !local but tree number changed?");
         Warning("SetEntryBase()",
                 "The current tree in the TChain %s has changed (e.g. by TTree::Process) "
                 "even though TTreeReader::SetEntry() was called, which switched the tree "
                 "again. Did you mean to call TTreeReader::SetLocalEntry()?",
                 fTree->GetName());
      }
   }

   if (fDirector->GetTree() != fTree->GetTree()
       || fMostRecentTreeNumber != fTree->GetTreeNumber()) {
      fDirector->SetTree(fTree->GetTree());
      if (fProxiesSet) {
         for (auto value: fValues) {
            value->NotifyNewTree(fTree->GetTree());
         }
      }
   }

   fMostRecentTreeNumber = fTree->GetTreeNumber();

   if (!fProxiesSet) {
      // Tell readers we now have a tree
      for (std::deque<ROOT::Internal::TTreeReaderValueBase*>::const_iterator
              i = fValues.begin(); i != fValues.end(); ++i) { // Iterator end changes when parameterized arrays are read
         (*i)->CreateProxy();

         if (!(*i)->GetProxy()){
            fEntryStatus = kEntryDictionaryError;
            return fEntryStatus;
         }
      }
      // If at least one proxy was there and no error occurred, we assume the proxies to be set.
      fProxiesSet = !fValues.empty();
   }

   if (fEndEntry >= 0 && entry >= fEndEntry) {
      fEntryStatus = kEntryBeyondEnd;
      return fEntryStatus;
   }
   fDirector->SetReadEntry(loadResult);
   fEntryStatus = kEntryValid;
   return fEntryStatus;
}

////////////////////////////////////////////////////////////////////////////////
/// Set (or update) the which tree to read from. `tree` can be
/// a TTree or a TChain.

void TTreeReader::SetTree(TTree* tree, TEntryList* entryList /*= nullptr*/)
{
   fTree = tree;
   fEntryList = entryList;
   fEntry = -1;

   if (fTree) {
      ResetBit(kZombie);
      if (fTree->InheritsFrom(TChain::Class())) {
         SetBit(kBitIsChain);
      }
   }

   if (!fDirector) {
      Initialize();
   }
   else {
      fDirector->SetTree(fTree);
      fDirector->SetReadEntry(-1);
      // Distinguish from end-of-chain case:
      fMostRecentTreeNumber = -1;
   }
}

////////////////////////////////////////////////////////////////////////////////
/// Set (or update) the which tree to read from, passing the name of a tree in a
/// directory.
///
/// \param keyname - name of the tree in `dir`
/// \param dir - the `TDirectory` to load `keyname` from (or gDirectory if `nullptr`)
/// \param entryList - the `TEntryList` to attach to the `TTreeReader`.

void TTreeReader::SetTree(const char* keyname, TDirectory* dir, TEntryList* entryList /*= nullptr*/)
{
   TTree* tree = nullptr;
   if (!dir)
      dir = gDirectory;
   dir->GetObject(keyname, tree);
   SetTree(tree, entryList);
}

////////////////////////////////////////////////////////////////////////////////
/// Add a value reader for this tree.

Bool_t TTreeReader::RegisterValueReader(ROOT::Internal::TTreeReaderValueBase* reader)
{
   if (fProxiesSet) {
      Error("RegisterValueReader",
            "Error registering reader for %s: TTreeReaderValue/Array objects must be created before the call to Next() / SetEntry() / SetLocalEntry(), or after TTreeReader::Restart()!",
            reader->GetBranchName());
      return false;
   }
   fValues.push_back(reader);
   return true;
}

////////////////////////////////////////////////////////////////////////////////
/// Remove a value reader for this tree.

void TTreeReader::DeregisterValueReader(ROOT::Internal::TTreeReaderValueBase* reader)
{
   std::deque<ROOT::Internal::TTreeReaderValueBase*>::iterator iReader
      = std::find(fValues.begin(), fValues.end(), reader);
   if (iReader == fValues.end()) {
      Error("DeregisterValueReader", "Cannot find reader of type %s for branch %s", reader->GetDerivedTypeName(), reader->fBranchName.Data());
      return;
   }
   fValues.erase(iReader);
}
