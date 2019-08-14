// Author: Enrico Guiraud, Danilo Piparo CERN  12/2016

/*************************************************************************
 * Copyright (C) 1995-2016, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#include "ROOT/TDataFrame.hxx"
using namespace ROOT::Experimental;

/**
* \class ROOT::Experimental::TDataFrame
* \ingroup dataframe
* \brief ROOT's TDataFrame offers a high level interface for analyses of data stored in TTrees.

In addition, multi-threading and other low-level optimisations allow users to exploit all the resources available
on their machines completely transparently.<br>
Skip to the [class reference](#reference) or keep reading for the user guide.

In a nutshell:
~~~{.cpp}
ROOT::EnableImplicitMT(); // Tell ROOT you want to go parallel
ROOT::Experimental::TDataFrame d("myTree", file); // Interface to TTree and TChain
auto myHisto = d.Histo1D("Branch_A"); // This happens in parallel!
myHisto->Draw();
~~~

Calculations are expressed in terms of a type-safe *functional chain of actions and transformations*, `TDataFrame` takes
care of their execution. The implementation automatically puts in place several low level optimisations such as
multi-thread parallelisation and caching.
The namespace containing the TDataFrame is ROOT::Experimental. This signals the fact that the interfaces may evolve in
time.

\htmlonly
<a href="https://doi.org/10.5281/zenodo.260230"><img src="https://zenodo.org/badge/DOI/10.5281/zenodo.260230.svg"
alt="DOI"></a>
\endhtmlonly

## Table of Contents
- [Introduction](#introduction)
- [Crash course](#crash-course)
- [More features](#more-features)
- [Transformations](#transformations)
- [Actions](#actions)
- [Parallel execution](#parallel-execution)

## <a name="introduction"></a>Introduction
A pipeline of operations is described to be performed on the data, the framework takes care
of the management of the loop over entries as well as low-level details such as I/O and parallelisation.
`TDataFrame` provides an interface to perform most common operations required by ROOT analyses;
at the same time, the users are not limited to those
common operations: building blocks to trigger custom calculations are available too.

`TDataFrame` is built with a *modular* and *flexible* workflow in mind, summarised as follows:

1.  **build a data-frame** object by specifying your data-set
2.  **apply a series of transformations** to your data
    1.  **filter** (e.g. apply some cuts) or
    2.  create a **temporary column** (e.g. the result of an expensive computation on branches, or an alias for a
branch)
3.  **apply actions** to the transformed data to produce results (e.g. fill a histogram)
4.
<table>
<tr>
   <td>
      <b>TTreeReader</b>
   </td>
   <td>
      <b>ROOT::Experimental::TDataFrame</b>
   </td>
</tr>
<tr>
   <td>
~~~{.cpp}
TTreeReader reader("myTree", file);
TTreeReaderValue<A_t> a(reader, "A");
TTreeReaderValue<B_t> b(reader, "B");
TTreeReaderValue<C_t> c(reader, "C");
while(reader.Next()) {
   if(IsGoodEvent(a, b, c))
      DoStuff(a, b, c);
}
~~~
   </td>
   <td>
~~~{.cpp}
ROOT::Experimental::TDataFrame d("myTree", file, {"A", "B", "C"});
d.Filter(IsGoodEvent).Foreach(DoStuff);
~~~
   </td>
</tr>
<tr>
   <td>
      <b>TTree::Draw</b>
   </td>
   <td>
      <b>ROOT::Experimental::TDataFrame</b>
   </td>
</tr>
<tr>
   <td>
~~~{.cpp}
TTree *t = static_cast<TTree*>(
   file->Get("myTree")
);
t->Draw("var", "var > 2");
~~~
   </td>
   <td>
~~~{.cpp}
ROOT::Experimental::TDataFrame d("myTree", file, "var");
d.Filter([](int v) { return v > 2; }).Histo1D();
~~~
   </td>
</tr>
</table>

Keep reading to follow a five-minute [crash course](#crash-course) to `TDataFrame`, or jump to an overview of useful
[features](#more-features), or a more in-depth explanation of [transformations](#transformations), [actions](#actions)
and [parallelism](#parallel-execution).

## <a name="crash-course"></a> Crash course
### Filling a histogram
Let's start with a very common task: filling a histogram
~~~{.cpp}
// Fill a TH1F with the "MET" branch
ROOT::Experimental::TDataFrame d("myTree", filePtr); // build a TDataFrame like you would build a TTreeReader
auto h = d.Histo1D("MET");
h->Draw();
~~~
The first line creates a `TDataFrame` associated to the `TTree` "myTree". This tree has a branch named "MET".

`Histo1D` is an action; it returns a smart pointer (a `TResultProxy` to be precise) to a `TH1F` histogram filled
with the `MET` of all events.
If the quantity stored in the branch is a collection, the histogram is filled with its elements.

There are many other possible [actions](#overview), and all their results are wrapped in smart pointers; we'll see why
in a minute.

### Applying a filter
Let's now pretend we want to cut over the value of branch "MET" and count how many events pass this cut:
~~~{.cpp}
// Select events with "MET" greater than 4., count events that passed the selection
auto metCut = [](double x) { return x > 4.; }; // a c++11 lambda function checking "x > 4"
ROOT::Experimental::TDataFrame d("myTree", filePtr);
auto c = d.Filter(metCut, {"MET"}).Count();
std::cout << *c << std::endl;
~~~
`Filter` takes a function (a lambda in this example, but it can be any kind of function or even a functor class) and a
list of branch names. The filter function is applied to the specified branches for each event; it is required to return
a `bool` which signals whether the event passes the filter (`true`) or not (`false`). You can think of your data as
"flowing" through the chain of calls, being transformed, filtered and finally used to perform actions. Multiple `Filter`
calls can be chained one after another.
It is possible to specify filters as strings too. This snippet is analogous to the one above:
~~~{.cpp}
ROOT::Experimental::TDataFrame d("myTree", filePtr);
auto c = d.Filter("MET > 4.").Count();
std::cout << *c << std::endl;
~~~
Here the names of the branches used in the expression and their types are inferred automatically. The string must be
standard C++ and is just-in-time compiled by the ROOT interpreter, Cling.

### Running on a range of entries
It is sometimes necessary to limit the processing of the dataset to a range of entries. For this reason, the TDataFrame
offers the concept of ranges as a node of the TDataFrame graph: this means that filters, columns and actions can be hung
to it. If a range is specified after a filter, the range will act exclusively on the entries surviving the filter.
Here you can find some code using ranges:
~~~{.cpp}
ROOT::Experimental::TDataFrame d("myTree", filePtr);
// This is how you can express a range of the first 30 entries
auto d_0_30 = d.Range(0, 30);
// This is how you pick all entries from 15 onwards
auto d_15_end = d.Range(15, 0);
// We can use a stride too, in this case we pick an event every 3
auto d_15_end_3 = d.Range(15, 0, 3);
~~~
Ranges are not available when multi-threading is enabled.

### Creating a temporary column
Let's now consider the case in which "myTree" contains two quantities "x" and "y", but our analysis relies on a derived
quantity `z = sqrt(x*x + y*y)`.
Using the `Define` transformation, we can create a new column in the data-set containing the variable "z":
~~~{.cpp}
auto sqrtSum = [](double x, double y) { return sqrt(x*x + y*y); };
auto zCut = [](double z) { return z > 0.; }

ROOT::Experimental::TDataFrame d(treeName, filePtr);
auto zMean = d.Define("z", sqrtSum, {"x","y"})
              .Filter(zCut, {"z"})
              .Mean("z");
std::cout << *zMean << std::endl;
~~~
`Define` creates the variable "z" by applying `sqrtSum` to "x" and "y". Later in the chain of calls we refer to
variables created with `Define` as if they were actual tree branches, but they are evaluated on the fly, once per
event. As with filters, `Define` calls can be chained with other transformations to create multiple temporary
columns.
As with filters, it is possible to specify new columns as strings too. This snippet is analogous to the one above:
~~~{.cpp}
ROOT::Experimental::TDataFrame d(treeName, filePtr);
auto zMean = d.Define("z", "sqrt(x*x + y*y)")
              .Filter("z > 0.")
              .Mean("z");
std::cout << *zMean << std::endl;
~~~
Again the names of the branches used in the expression and their types are inferred automatically. The string must be
standard C++ and is just-in-time compiled by the ROOT interpreter, Cling.

### Executing multiple actions
As a final example let us apply two different cuts on branch "MET" and fill two different histograms with the "pt\_v" of
the filtered events.
You should be able to easily understand what's happening:
~~~{.cpp}
// fill two histograms with the results of two opposite cuts
auto isBig = [](double x) { return x > 10.; };
ROOT::Experimental::TDataFrame d(treeName, filePtr);
auto h1 = d.Filter(isBig, {"MET"}).Histo1D("pt_v");
auto h2 = d.Histo1D("pt_v");
h1->Draw();       // event loop is run once here
h2->Draw("SAME"); // no need to run the event loop again
~~~
`TDataFrame` executes all above actions by **running the event-loop only once**. The trick is that actions are not
executed at the moment they are called, but they are **lazy**, i.e. delayed until the moment one of their results is
accessed through the smart pointer. At that time, the even loop is triggered and *all* results are produced
simultaneously.

It is therefore good practice to declare all your filters and actions *before* accessing their results, allowing
`TDataFrame` to loop once and produce all results in one go.

### Going parallel
Let's say we would like to run the previous examples in parallel on several cores, dividing events fairly between cores.
The only modification required to the snippets would be the addition of this line *before* constructing the main
data-frame object:
~~~{.cpp}
ROOT::EnableImplicitMT();
~~~
Simple as that, enjoy your speed-up.

##  <a name="more-features"></a>More features
Here is a list of the most important features that have been omitted in the "Crash course" for brevity's sake.
You don't need to read all these to start using `TDataFrame`, but they are useful to save typing time and runtime.

### Default branch lists
When constructing a `TDataFrame` object, it is possible to specify a **default branch list** for your analysis, in the
usual form of a list of strings representing branch names. The default branch list will be used as fallback whenever one
specific to the transformation/action is not present.
~~~{.cpp}
// use "b1" and "b2" as default branches for `Filter`, `Define` and actions
ROOT::Experimental::TDataFrame d1(treeName, &file, {"b1","b2"});
// filter acts on default branch list, no need to specify it
auto h = d1.Filter([](int b1, int b2) { return b1 > b2; }).Histo1D("otherVar");

// just one default branch this time
ROOT::Experimental::TDataFrame d2(treeName, &file, {"b1"});
// we can still specify non-default branch lists
// `Min` here can fall back to the default "b1"
auto min = d2.Filter([](double b2) { return b2 > 0; }, {"b2"}).Min();
~~~

### Branch type guessing and explicit declaration of branch types
C++ is a statically typed language: all types must be known at compile-time. This includes the types of the `TTree`
branches we want to work on. For filters, temporary columns and some of the actions, **branch types are deduced from the
signature** of the relevant filter function/temporary column expression/action function:
~~~{.cpp}
// here b1 is deduced to be `int` and b2 to be `double`
dataFrame.Filter([](int x, double y) { return x > 0 && y < 0.; }, {"b1", "b2"});
~~~
If we specify an incorrect type for one of the branches, an exception with an informative message will be thrown at
runtime, when the branch value is actually read from the `TTree`: the implementation of `TDataFrame` allows the
detection of type mismatches. The same would happen if we swapped the order of "b1" and "b2" in the branch list passed
to `Filter`.

Certain actions, on the other hand, do not take a function as argument (e.g. `Histo1D`), so we cannot deduce the type of
the branch at compile-time. In this case **`TDataFrame` tries to guess the type of the branch**, trying out the most
common ones and `std::vector` thereof. This is why we never needed to specify the branch types for all actions in the
above snippets.

When the branch type is not a common one such as `int`, `double`, `char` or `float` it is therefore good practice to
specify it as a template parameter to the action itself, like this:
~~~{.cpp}
dataFrame.Histo1D("b1"); // OK if b1 is a "common" type
dataFrame.Histo1D<Object_t>("myObject"); // OK, "myObject" is deduced to be of type `Object_t`
// dataFrame.Histo1D("myObject"); // THROWS an exception
~~~

### Generic actions
`TDataFrame` strives to offer a comprehensive set of standard actions that can be performed on each event. At the same
time, it **allows users to execute arbitrary code (i.e. a generic action) inside the event loop** through the `Foreach`
and `ForeachSlot` actions.

`Foreach(f, branchList)` takes a function `f` (lambda expression, free function, functor...) and a list of branches, and
executes `f` on those branches for each event. The function passed must return nothing (i.e. `void`). It can be used to
perform actions that are not already available in the interface. For example, the following snippet evaluates the root
mean square of branch "b":
~~~{.cpp}
// Single-thread evaluation of RMS of branch "b" using Foreach
double sumSq = 0.;
unsigned int n = 0;
ROOT::Experimental::TDataFrame d("bTree", bFilePtr);
d.Foreach([&sumSq, &n](double b) { ++n; sumSq += b*b; }, {"b"});
std::cout << "rms of b: " << std::sqrt(sumSq / n) << std::endl;
~~~
When executing on multiple threads, users are responsible for the thread-safety of the expression passed to `Foreach`.
The code above would need to employ some resource protection mechanism to ensure non-concurrent writing of `rms`; but
this is probably too much head-scratch for such a simple operation.

`ForeachSlot` can help in this situation. It is an alternative version of `Foreach` for which the function takes an
additional parameter besides the branches it should be applied to: an `unsigned int slot` parameter, where `slot` is a
number indicating which thread (0, 1, 2 , ..., poolSize - 1) the function is being run in. We can take advantage of
`ForeachSlot` to evaluate a thread-safe root mean square of branch "b":
~~~{.cpp}
// Thread-safe evaluation of RMS of branch "b" using ForeachSlot
ROOT::EnableImplicitMT();
unsigned int nSlots = ROOT::GetImplicitMTPoolSize();
std::vector<double> sumSqs(nSlots, 0.);
std::vector<unsigned int> ns(nSlots, 0);

ROOT::Experimental::TDataFrame d("bTree", bFilePtr);
d.ForeachSlot([&sumSqs, &ns](unsigned int slot, double b) { sumSqs[slot] += b*b; ns[slot] += 1; }, {"b"});
double sumSq = std::accumulate(sumSqs.begin(), sumSqs.end(), 0.); // sum all squares
unsigned int n = std::accumulate(ns.begin(), ns.end(), 0); // sum all counts
std::cout << "rms of b: " << std::sqrt(sumSq / n) << std::endl;
~~~
You see how we created one `double` variable for each thread in the pool, and later merged their results via
`std::accumulate`.

### Call graphs (storing and reusing sets of transformations)
**Sets of transformations can be stored as variables** and reused multiple times to create **call graphs** in which
several paths of filtering/creation of branches are executed simultaneously; we often refer to this as "storing the
state of the chain".

This feature can be used, for example, to create a temporary column once and use it in several subsequent filters or
actions, or to apply a strict filter to the data-set *before* executing several other transformations and actions,
effectively reducing the amount of events processed.

Let's try to make this clearer with a commented example:
~~~{.cpp}
// build the data-frame and specify a default branch list
ROOT::Experimental::TDataFrame d(treeName, filePtr, {"var1", "var2", "var3"});

// apply a cut and save the state of the chain
auto filtered = d.Filter(myBigCut);

// plot branch "var1" at this point of the chain
auto h1 = filtered.Histo1D("var1");

// create a new branch "vec" with a vector extracted from a complex object (only for filtered entries)
// and save the state of the chain
auto newBranchFiltered = filtered.Define("vec", [](const Obj& o) { return o.getVector(); }, {"obj"});

// apply a cut and fill a histogram with "vec"
auto h2 = newBranchFiltered.Filter(cut1).Histo1D("vec");

// apply a different cut and fill a new histogram
auto h3 = newBranchFiltered.Filter(cut2).Histo1D("vec");

// Inspect results
h2->Draw(); // first access to an action result: run event-loop!
h3->Draw("SAME"); // event loop does not need to be run again here..
std::cout << "Entries in h1: " << h1->GetEntries() << std::endl; // ..or here
~~~
`TDataFrame` detects when several actions use the same filter or the same temporary column, and **only evaluates each
filter or temporary column once per event**, regardless of how many times that result is used down the call graph.
Objects read from each branch are **built once and never copied**, for maximum efficiency.
When "upstream" filters are not passed, subsequent filters, temporary column expressions and actions are not evaluated,
so it might be advisable to put the strictest filters first in the chain.

##  <a name="transformations"></a>Transformations
### Filters
A filter is defined through a call to `Filter(f, branchList)`. `f` can be a function, a lambda expression, a functor
class, or any other callable object. It must return a `bool` signalling whether the event has passed the selection
(`true`) or not (`false`). It must perform "read-only" actions on the branches, and should not have side-effects (e.g.
modification of an external or static variable) to ensure correct results when implicit multi-threading is active.

`TDataFrame` only evaluates filters when necessary: if multiple filters are chained one after another, they are executed
in order and the first one returning `false` causes the event to be discarded and triggers the processing of the next
entry. If multiple actions or transformations depend on the same filter, that filter is not executed multiple times for
each entry: after the first access it simply serves a cached result.

#### <a name="named-filters-and-cutflow-reports"></a>Named filters and cutflow reports
An optional string parameter `name` can be passed to the `Filter` method to create a **named filter**. Named filters
work as usual, but also keep track of how many entries they accept and reject.

Statistics are retrieved through a call to the `Report` method:

- when `Report` is called on the main `TDataFrame` object, it prints stats for all named filters declared up to that
point
- when called on a stored chain state (i.e. a chain/graph node), it prints stats for all named filters in the section of
the chain between the main `TDataFrame` and that node (included).

Stats are printed in the same order as named filters have been added to the graph, and *refer to the latest event-loop*
that has been run using the relevant `TDataFrame`. If `Report` is called before the event-loop has been run at least
once, a run is triggered.

### Ranges
When `TDataFrame` is not being used in a multi-thread environment (i.e. no call to `EnableImplicitMT` was made),
`Range` transformations are available. These act very much like filters but instead of basing their decision on
a filter expression, they rely on `start`,`stop` and `stride` parameters.

- `start`: number of entries that will be skipped before starting processing again
- `stop`: maximum number of entries that will be processed
- `stride`: only process one entry every `stride` entries

The actual number of entries processed downstream of a `Range` node will be `(stop - start)/stride` (or less if less
entries than that are available).

Note that ranges act "locally", not based on the global entry count: `Range(10,50)` means "skip the first 10 entries
*that reach this node*, let the next 40 entries pass, then stop processing". If a range node hangs from a filter node,
and the range has a `start` parameter of 10, that means the range will skip the first 10 entries *that pass the
preceding filter*.

Ranges allow "early quitting": if all branches of execution of a functional graph reached their `stop` value of
processed entries, the event-loop is immediately interrupted. This is useful for debugging and initial explorations.

### Temporary columns
Temporary columns are created by invoking `Define(name, f, branchList)`. As usual, `f` can be any callable object
(function, lambda expression, functor class...); it takes the values of the branches listed in `branchList` (a list of
strings) as parameters, in the same order as they are listed in `branchList`. `f` must return the value that will be
assigned to the temporary column.

A new variable is created called `name`, accessible as if it was contained in the dataset from subsequent
transformations/actions.

Use cases include:
- caching the results of complex calculations for easy and efficient multiple access
- extraction of quantities of interest from complex objects
- branch aliasing, i.e. changing the name of a branch

An exception is thrown if the `name` of the new branch is already in use for another branch in the `TTree`.

It is also possible to specify the quantity to be stored in the new temporary column as a C++ expression with the method
`Define(name, expression)`. For example this invocation

~~~{.cpp}
tdf.Define("pt", "sqrt(px*px + py*py)");
~~~

will create a new column called "pt" the value of which is calculated starting from the branches px and py. The system
builds a just-in-time compiled function starting from the expression after having deduced the list of necessary branches
from the names of the variables specified by the user.

##  <a name="actions"></a>Actions
### Instant and lazy actions
Actions can be **instant** or **lazy**. Instant actions are executed as soon as they are called, while lazy actions are
executed whenever the object they return is accessed for the first time. As a rule of thumb, actions with a return value
are lazy, the others are instant.

### Overview
Here is a quick overview of what actions are present and what they do. Each one is described in more detail in the
reference guide.

In the following, whenever we say an action "returns" something, we always mean it returns a smart pointer to it. Also
note that all actions are only executed for events that pass all preceding filters.

| **Lazy actions** | **Description** |
|------------------|-----------------|
| Count | Return the number of events processed. |
| Fill | Fill a user-defined object with the values of the specified branches, as if by calling `Obj.Fill(branch1, branch2, ...). |
| Histo{1D,2D,3D} | Fill a {one,two,three}-dimensional histogram with the processed branch values. |
| Max | Return the maximum of processed branch values. |
| Mean | Return the mean of processed branch values. |
| Min | Return the minimum of processed branch values. |
| Profile{1D,2D} | Fill a {one,two}-dimensional profile with the branch values that passed all filters. |
| Reduce | Reduce (e.g. sum, merge) entries using the function (lambda, functor...) passed as argument. The function must have signature `T(T,T)` where `T` is the type of the branch. Return the final result of the reduction operation. An optional parameter allows initialization of the result object to non-default values. |
| Take | Build a collection of values of a branch. |

| **Instant actions** | **Description** |
|---------------------|-----------------|
| Foreach | Execute a user-defined function on each entry. Users are responsible for the thread-safety of this lambda when executing with implicit multi-threading enabled. |
| ForeachSlot | Same as `Foreach`, but the user-defined function must take an extra `unsigned int slot` as its first parameter. `slot` will take a different value, `0` to `nThreads - 1`, for each thread of execution. This is meant as a helper in writing thread-safe `Foreach` actions when using `TDataFrame` after `ROOT::EnableImplicitMT()`. `ForeachSlot` works just as well with single-thread execution: in that case `slot` will always be `0`. |
| Snapshot | Writes on disk a dataset made of the selected columns and entries passing the filters (if any). |

| **Queries** | **Description** |
|-----------|-----------------|
| Report | This is not properly an action, since when `Report` is called it does not book an operation to be performed on each entry. Instead, it interrogates the data-frame directly to print a cutflow report, i.e. statistics on how many entries have been accepted and rejected by the filters. See the section on [named filters](#named-filters-and-cutflow-reports) for a more detailed explanation. |

##  <a name="parallel-execution"></a>Parallel execution
As pointed out before in this document, `TDataFrame` can transparently perform multi-threaded event loops to speed up
the execution of its actions. Users only have to call `ROOT::EnableImplicitMT()` *before* constructing the `TDataFrame`
object to indicate that it should take advantage of a pool of worker threads. **Each worker thread processes a distinct
subset of entries**, and their partial results are merged before returning the final values to the user.

### Thread safety
`Filter` and `Define` transformations should be inherently thread-safe: they have no side-effects and are not
dependent on global state.
Most `Filter`/`Define` functions will in fact be pure in the functional programming sense.
All actions are built to be thread-safe with the exception of `Foreach`, in which case users are responsible of
thread-safety, see [here](#generic-actions).

<a name="reference"></a>
*/

////////////////////////////////////////////////////////////////////////////
/// \brief Build the dataframe
/// \param[in] treeName Name of the tree contained in the directory
/// \param[in] dirPtr TDirectory where the tree is stored, e.g. a TFile.
/// \param[in] defaultBranches Collection of default branches.
///
/// The default branches are looked at in case no branch is specified in the
/// booking of actions or transformations.
/// See TInterface for the documentation of the
/// methods available.
TDataFrame::TDataFrame(std::string_view treeName, TDirectory *dirPtr, const ColumnNames_t &defaultBranches)
   : TInterface<TDFDetail::TLoopManager>(std::make_shared<TDFDetail::TLoopManager>(nullptr, defaultBranches))
{
   const std::string treeNameInt(treeName);
   if (!dirPtr) {
      auto msg = "Invalid TDirectory!";
      throw std::runtime_error(msg);
   }
   auto tree = static_cast<TTree *>(dirPtr->Get(treeNameInt.c_str()));
   if (!tree) {
      auto msg = "Tree \"" + treeNameInt + "\" cannot be found!";
      throw std::runtime_error(msg);
   }
   fProxiedPtr->SetTree(std::shared_ptr<TTree>(tree, [](TTree *) {}));
}

////////////////////////////////////////////////////////////////////////////
/// \brief Build the dataframe
/// \param[in] treeName Name of the tree contained in the directory
/// \param[in] filenameglob TDirectory where the tree is stored, e.g. a TFile.
/// \param[in] defaultBranches Collection of default branches.
///
/// The default branches are looked at in case no branch is specified in the
/// booking of actions or transformations.
/// See TInterface for the documentation of the
/// methods available.
TDataFrame::TDataFrame(std::string_view treeName, std::string_view filenameglob,
                       const ColumnNames_t &defaultBranches)
   : TInterface<TDFDetail::TLoopManager>(std::make_shared<TDFDetail::TLoopManager>(nullptr, defaultBranches))
{
   const std::string treeNameInt(treeName);
   const std::string filenameglobInt(filenameglob);
   auto chain = new TChain(treeNameInt.c_str());
   chain->Add(filenameglobInt.c_str());
   fProxiedPtr->SetTree(std::shared_ptr<TTree>(static_cast<TTree *>(chain)));
}

////////////////////////////////////////////////////////////////////////////
/// \brief Build the dataframe
/// \param[in] tree The tree or chain to be studied.
/// \param[in] defaultBranches Collection of default branches.
///
/// The default branches are looked at in case no branch is specified in the
/// booking of actions or transformations.
/// See TInterface for the documentation of the
/// methods available.
TDataFrame::TDataFrame(TTree &tree, const ColumnNames_t &defaultBranches)
   : TInterface<TDFDetail::TLoopManager>(std::make_shared<TDFDetail::TLoopManager>(&tree, defaultBranches))
{
}

//////////////////////////////////////////////////////////////////////////
/// \brief Build the dataframe
/// \param[in] numEntries The number of entries to generate.
///
/// An empty-source dataframe constructed with a number of entries will
/// generate those entries on the fly when some action is triggered,
/// and it will do so for all the previously-defined temporary branches.
TDataFrame::TDataFrame(Long64_t numEntries)
   : TInterface<TDFDetail::TLoopManager>(std::make_shared<TDFDetail::TLoopManager>(numEntries))
{
}
