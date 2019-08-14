## \file
## \ingroup tutorial_tdataframe
## \notebook -nodraw
## This tutorial shows how to express the concept of ranges when working with the TDataFrame.
## \macro_code
##
## \date March 2017
## \author Danilo Piparo

import ROOT

fill_tree_code = '''
void fill_tree(const char *filename, const char *treeName)
{
   TFile f(filename, "RECREATE");
   TTree t(treeName, treeName);
   int b1;
   float b2;
   t.Branch("b1", &b1);
   t.Branch("b2", &b2);
   for (int i = 0; i < 100; ++i) {
      b1 = i;
      b2 = i * i;
      t.Fill();
   }
   t.Write();
   f.Close();
   return;
}
'''

# We prepare an input tree to run on
fileName = "tdf006_ranges_py.root"
treeName = "myTree"
ROOT.gInterpreter.Declare(fill_tree_code)
ROOT.fill_tree(fileName, treeName)

# We read the tree from the file and create a TDataFrame.
TDF = ROOT.ROOT.Experimental.TDataFrame
d = TDF(treeName, fileName)

# ## Usage of ranges
# Now we'll count some entries using ranges
c_all = d.Count()

# This is how you can express a range of the first 30 entries
d_0_30 = d.Range(0, 30)
c_0_30 = d_0_30.Count()

# This is how you pick all entries from 15 onwards
d_15_end = d.Range(15, 0)
c_15_end = d_15_end.Count()

# We can use a stride too, in this case we pick an event every 3
d_15_end_3 = d.Range(15, 0, 3)
c_15_end_3 = d_15_end_3.Count()

# The Range is a 1st class citizen in the TDataFrame graph:
# not only actions (like Count) but also filters and new columns can be added to it.
d_0_50 = d.Range(0, 50)
c_0_50_odd_b1 = d_0_50.Filter("1 == b1 % 2").Count()

# An important thing to notice is that the counts of a filter are relative to the
# number of entries a filter "sees". Therefore, if a Range depends on a filter,
# the Range will act on the entries passing the filter only.
c_0_3_after_even_b1 = d.Filter("0 == b1 % 2").Range(0, 3).Count()

# Ok, time to wrap up: let's print all counts!
print("Usage of ranges:")
print(" - All entries:", c_all.GetValue())
print(" - Entries from 0 to 30:", c_0_30.GetValue())
print(" - Entries from 15 onwards:", c_15_end.GetValue())
print(" - Entries from 15 onwards in steps of 3:", c_15_end_3.GetValue())
print(" - Entries from 0 to 50, odd only:", c_0_50_odd_b1.GetValue())
print(" - First three entries of all even entries:", c_0_3_after_even_b1.GetValue())
