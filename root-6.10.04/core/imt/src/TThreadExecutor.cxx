#include "ROOT/TThreadExecutor.hxx"
#include "tbb/tbb.h"

//////////////////////////////////////////////////////////////////////////
///
/// \class ROOT::TThreadExecutor
/// \brief This class provides a simple interface to execute the same task
/// multiple times in parallel, possibly with different arguments every
/// time. This mimics the behaviour of python's pool.Map method.
///
/// ###ROOT::TThreadExecutor::Map
/// This class inherits its interfaces from ROOT::TExecutor\n.
/// The two possible usages of the Map method are:\n
/// * Map(F func, unsigned nTimes): func is executed nTimes with no arguments
/// * Map(F func, T& args): func is executed on each element of the collection of arguments args
///
/// For either signature, func is executed as many times as needed by a pool of
/// nThreads threads; It defaults to the number of cores.\n
/// A collection containing the result of each execution is returned.\n
/// **Note:** the user is responsible for the deletion of any object that might
/// be created upon execution of func, returned objects included: ROOT::TThreadExecutor never
/// deletes what it returns, it simply forgets it.\n
///
/// \param func
/// \parblock
/// a lambda expression, an std::function, a loaded macro, a
/// functor class or a function that takes zero arguments (for the first signature)
/// or one (for the second signature).
/// \endparblock
/// \param args
/// \parblock
/// a standard vector, a ROOT::TSeq of integer type or an initializer list for the second signature.
/// An integer only for the first.
/// \endparblock
/// **Note:** in cases where the function to be executed takes more than
/// zero/one argument but all are fixed except zero/one, the function can be wrapped
/// in a lambda or via std::bind to give it the right signature.\n
///
/// #### Return value:
/// An std::vector. The elements in the container
/// will be the objects returned by func.
///
///
/// #### Examples:
///
/// ~~~{.cpp}
/// root[] ROOT::TThreadExecutor pool; auto hists = pool.Map(CreateHisto, 10);
/// root[] ROOT::TThreadExecutor pool(2); auto squares = pool.Map([](int a) { return a*a; }, {1,2,3});
/// ~~~
///
/// ###ROOT::TThreadExecutor::MapReduce
/// This set of methods behaves exactly like Map, but takes an additional
/// function as a third argument. This function is applied to the set of
/// objects returned by the corresponding Map execution to "squash" them
/// to a single object. 
///
/// If this function is a binary operator, the "squashing" will be performed in parallel.
/// This is exclusive to ROOT::TThreadExecutor and not any other ROOT::TExecutor-derived classes.\n
/// An integer can be passed as the fourth argument indicating the number of chunks we want to divide our work in.
/// This may be useful to avoid the overhead introduced when running really short tasks.
///
/// ####Examples:
/// ~~~{.cpp}
/// root[] ROOT::TThreadExecutor pool; auto ten = pool.MapReduce([]() { return 1; }, 10, [](std::vector<int> v) { return std::accumulate(v.begin(), v.end(), 0); })
/// root[] ROOT::TThreadExecutor pool; auto hist = pool.MapReduce(CreateAndFillHists, 10, PoolUtils::ReduceObjects);
/// ~~~
///
//////////////////////////////////////////////////////////////////////////


namespace ROOT {

   //////////////////////////////////////////////////////////////////////////
   /// Class constructor.
   /// If the scheduler is active, gets a pointer to it.
   /// If not, initializes the pool of threads with the number of logical threads supported by the hardware.
   TThreadExecutor::TThreadExecutor(): TThreadExecutor::TThreadExecutor(tbb::task_scheduler_init::default_num_threads()) {}
   //////////////////////////////////////////////////////////////////////////
   /// Class constructor.
   /// nThreads is the number of threads that will be spawned. If the scheduler is active (ImplicitMT enabled, another TThreadExecutor instance),
   /// it won't change the number of threads.
   TThreadExecutor::TThreadExecutor(UInt_t nThreads)
   {
      fSched = ROOT::Internal::GetPoolManager(nThreads);
   }

   void TThreadExecutor::ParallelFor(unsigned int start, unsigned int end, unsigned step, const std::function<void(unsigned int i)> &f)
   {
      tbb::parallel_for(start, end, step, f);
   }

   double TThreadExecutor::ParallelReduce(const std::vector<double> &objs, const std::function<double(double a, double b)> &redfunc)
   {
      return tbb::parallel_reduce(tbb::blocked_range<decltype(objs.begin())>(objs.begin(), objs.end()), double{},
      [redfunc](tbb::blocked_range<decltype(objs.begin())> const & range, double init) {
         return std::accumulate(range.begin(), range.end(), init, redfunc);
      }, redfunc);
   }

   float TThreadExecutor::ParallelReduce(const std::vector<float> &objs, const std::function<float(float a, float b)> &redfunc)
   {
      return tbb::parallel_reduce(tbb::blocked_range<decltype(objs.begin())>(objs.begin(), objs.end()), float{},
      [redfunc](tbb::blocked_range<decltype(objs.begin())> const & range, float init) {
         return std::accumulate(range.begin(), range.end(), init, redfunc);
      }, redfunc);
   }
}
