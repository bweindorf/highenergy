/// \file
/// \ingroup tutorial_v7
///
/// \macro_code
///
/// \warning This is part of the ROOT 7 prototype! It will change without notice. It might trigger earthquakes. Feedback is welcome!
/// \author Axel Naumann <axel@cern.ch>

#include "TRandom3.h"
#include <vector>
#include <chrono>
#include <iostream>

#include "TH1.h"
#include "TH2.h"
#include "TH3.h"

#include "ROOT/THist.hxx"
#include "ROOT/THistBufferedFill.hxx"

using namespace ROOT;
using namespace std;

struct Timer {
   using TimePoint_t = decltype( std::chrono::high_resolution_clock::now() );

   const char *fTitle;
   size_t fCount;
   TimePoint_t fStart;

   Timer(const char *title, size_t count) : fTitle(title), fCount(count),
   fStart(std::chrono::high_resolution_clock::now()) {}

   ~Timer() {
      using namespace std::chrono;
      auto end = high_resolution_clock::now();
      duration<double> time_span = duration_cast<duration<double>>(end - fStart);
      //std::cout << fCount << " * " << fTitle << ": " << time_span.count() << " seconds \n";
      //std::cout << fCount << " * " << fTitle << ": " << fCount / (1e6) / time_span.count() << " millions per seconds \n";
      std::cout << fCount << " * " << fTitle << ": " << time_span.count() << " seconds, \t";
      std::cout << fCount / (1e6) / time_span.count() << " millions per seconds \n";
   }
};

constexpr UInt_t gStride = 32; // TH1::GetDefaultBufferSize()

struct BinEdges
{
   static constexpr size_t fNBinsX = 4;
   static constexpr size_t fNBinsY = 5;
   double fXBins[4];
   double fYBins[5];

   BinEdges(double minValue, double maxValue) {
      if (maxValue < minValue) swap(minValue,maxValue);
      double range = maxValue - minValue;

      double x[fNBinsX] = {0., 0.1, 0.3, 1.};
      double y[fNBinsY] = {0., 0.1, 0.2, 0.3, 1.};

      for(size_t i = 0; i < fNBinsX; ++i)
         fXBins[i] = minValue + range * x[i];
      for(size_t i = 0; i < fNBinsY; ++i)
         fYBins[i] = minValue + range * y[i];

   }

   using AConf_t = Experimental::TAxisConfig;

   AConf_t GetConfigX() const { return AConf_t(std::array_view<double>(fXBins).to_vector()); }
   AConf_t GetConfigY() const { return AConf_t(std::array_view<double>(fYBins).to_vector()); }

};

template <typename T>
void GenerateInput(std::vector<T> &numbers, double minVal, double maxVal, UInt_t seed)
{
   Timer t("GenerateInput",numbers.size());
   if (minVal > maxVal) {
      std::swap(minVal,maxVal);
   }
   T range = maxVal - minVal;
   TRandom3 r(seed);
   size_t len = numbers.size();
   for(auto c = numbers.begin(); c != numbers.end(); ++c) {
      *c = minVal + range * r.Rndm();
   }
}

std::string MakeTitle(std::string_view version,
                      std::string_view histname,
                      std::string_view title,
                      std::string_view axis)
{
   std::string result = std::string(version) + " " + std::string(histname) + " " + title.to_string() + " [" + axis.to_string() + "]";
   return result;
}

template <int dim, typename type> const char *GetHist();

template <> const char *GetHist<2,double>(){ return "2D"; };
template <> const char *GetHist<2,float>() { return "2F"; };

template <> const char *GetHist<1,double>(){ return "1D"; };
template <> const char *GetHist<1,float>() { return "1F"; };


namespace R7 {
   const char *gVersion = "R7";

   template <typename T, unsigned short kNDim> struct Dim;

   template <typename T>
   struct Dim<T,2> {

      constexpr static unsigned short kNDim = 2;
      using ExpTH2 = Experimental::THist<Experimental::THistDataUncertainty<kNDim, T>>;

      // This is odd ...
      using InputType_t = double;

      using FillFunc_t = std::add_pointer_t<long(ExpTH2 &hist, std::vector<InputType_t> &input, std::string_view type)>;


      struct EE {
         static constexpr const char * const gType = "regular bin size  ";

         template <FillFunc_t filler>
         static long Execute(std::vector<InputType_t> &input, double minVal, double maxVal) {

            ExpTH2 hist({100, minVal, maxVal}, {5, minVal, maxVal});
            return filler(hist,input,gType);
         }
      };

      struct II {
         static constexpr const char * const gType = "irregular bin size";

         template <FillFunc_t filler>
         static long Execute(std::vector<InputType_t> &input, double minVal, double maxVal) {

            BinEdges edges(minVal,maxVal);
            ExpTH2 hist( edges.GetConfigX(), edges.GetConfigY()  );
            return filler(hist,input,gType);
         }
      };

      inline static long fillN(ExpTH2 &hist, std::vector<InputType_t> &input, std::string_view gType) {

         // This is odd :( ...
         using array_t = std::array<InputType_t, 2>;
         array_t *values = (array_t*)(&input[0]);
         constexpr size_t stride = gStride;

         std::string title = MakeTitle(gVersion, GetHist<kNDim, T>(), "fills N (stride 32)", gType);
         {
            Timer t(title.c_str(),input.size()/2);
            for (size_t i = 0; i < (input.size()-(stride*2-1)); i += (stride*2), values += 32)
               hist.FillN({values,32});
         }
         return hist.GetNDim();
      }


      inline static long fillBuffered(ExpTH2 &hist, std::vector<InputType_t> &input, std::string_view gType) {
         Experimental::THistBufferedFill<ExpTH2> filler(hist);
         std::string title = MakeTitle(gVersion, GetHist<kNDim, T>(),"fills (buffered)   ", gType);
         {
            Timer t(title.c_str(),input.size()/2);
            for (size_t i = 0; i < input.size()-1; i += 2)
               filler.Fill({input[i], input[i+1]});
         }
         return hist.GetNDim();
      }

      inline static long fill(ExpTH2 &hist, std::vector<InputType_t> &input, std::string_view gType) {
         std::string title = MakeTitle(gVersion, GetHist<kNDim, T>(),"fills              ", gType);
         {
            Timer t(title.c_str(),input.size()/2);
            for (size_t i = 0; i < input.size()-1; i += 2)
               hist.Fill({input[i], input[i+1]});
         }
         return hist.GetNDim();
      }
   }; // DimD


   template <typename T>
   struct Dim<T,1> {

      constexpr static unsigned short kNDim = 1;
      using ExpTH1 = Experimental::THist<Experimental::THistDataUncertainty<kNDim, T>>;

      // This is odd ...
      using InputType_t = double;

      using FillFunc_t = std::add_pointer_t<long(ExpTH1 &hist, std::vector<InputType_t> &input, std::string_view type)>;


      struct EE {
         static constexpr const char * const gType = "regular bin size  ";

         template <FillFunc_t filler>
         static long Execute(std::vector<InputType_t> &input, double minVal, double maxVal) {

            ExpTH1 hist({100, minVal, maxVal});
            return filler(hist,input,gType);
         }
      };

      struct II {
         static constexpr const char * const gType = "irregular bin size";

         template <FillFunc_t filler>
         static long Execute(std::vector<InputType_t> &input, double minVal, double maxVal) {

            BinEdges edges(minVal,maxVal);
            ExpTH1 hist( edges.GetConfigX() );
            return filler(hist,input,gType);
         }
      };

      inline static long fillN(ExpTH1 &hist, std::vector<InputType_t> &input, std::string_view gType) {

         // This is odd :( ...
         using array_t = std::array<InputType_t, 1>;
         array_t *values = (array_t*)(&input[0]);
         constexpr size_t stride = gStride;

         std::string title = MakeTitle(gVersion, GetHist<kNDim, T>(), "fills N (stride 32)", gType);
         {
            Timer t(title.c_str(),input.size());
            for (size_t i = 0; i < (input.size()-(stride-1)); i += (stride), values += 32)
               hist.FillN({values,32});
         }
         return hist.GetNDim();
      }


      inline static long fillBuffered(ExpTH1 &hist, std::vector<InputType_t> &input, std::string_view gType) {
         Experimental::THistBufferedFill<ExpTH1> filler(hist);
         std::string title = MakeTitle(gVersion, GetHist<kNDim, T>(),"fills (buffered)   ", gType);
         {
            Timer t(title.c_str(),input.size());
            for (size_t i = 0; i < input.size(); ++i)
               filler.Fill({input[i]});
         }
         return hist.GetNDim();
      }

      inline static long fill(ExpTH1 &hist, std::vector<InputType_t> &input, std::string_view gType) {
         std::string title = MakeTitle(gVersion, GetHist<kNDim, T>(),"fills              ", gType);
         {
            Timer t(title.c_str(),input.size());
            for (size_t i = 0; i < input.size(); ++i)
               hist.Fill({input[i]});
         }
         return hist.GetNDim();
      }
   }; // Dim1



} // R7




namespace R6 {
   const char *gVersion = "R6";

   template <int ndim, typename T> struct Redirect;
   template <> struct Redirect<2,float> { using HistType_t = TH2F; };
   template <> struct Redirect<2,double> { using HistType_t = TH2D; };
   template <> struct Redirect<1,float> { using HistType_t = TH1F; };
   template <> struct Redirect<1,double> { using HistType_t = TH1D; };

   template <typename T, int kNDim> struct Dim;

   template <typename T>
   struct Dim<T,2> {

      constexpr static unsigned short kNDim = 2;
      using HistType_t = typename Redirect<kNDim,T>::HistType_t;

      // This is odd ...
      using InputType_t = double;

      using FillFunc_t = std::add_pointer_t<long(HistType_t &hist, std::vector<InputType_t> &input, std::string_view type)>;


      struct EE {

         static constexpr const char * const gType = "regular bin size  ";

         template <FillFunc_t filler>
         static long Execute(std::vector<InputType_t> &input, double minVal, double maxVal) {

            HistType_t hist("a", "a hist", 100, minVal, maxVal, 5, minVal, maxVal);
            return filler(hist,input,gType);
         }
     };

      struct II {

         static constexpr const char * const gType = "irregular bin size";

         template <FillFunc_t filler>
         static long Execute(std::vector<InputType_t> &input, double minVal, double maxVal) {

            BinEdges edges(minVal,maxVal);
            HistType_t hist("a", "a hist", edges.fNBinsX - 1, edges.fXBins, edges.fNBinsY - 1, edges.fYBins);
            return filler(hist,input,gType);
         }
      };


      static long fillBuffered(HistType_t &hist, std::vector<InputType_t> &input, std::string_view gType) {
         std::string title = MakeTitle(gVersion, GetHist<kNDim,T>(),"fills (buffered)   ", gType);
         hist.SetBuffer(TH1::GetDefaultBufferSize());
         {
            //Timer t("R6 2D fills [regular bins size]",input.size()/2);
            Timer t(title.c_str(),input.size()/2);
            for (size_t i = 0; i < input.size()-1; i += 2)
               hist.Fill(input[i], input[i+1]);
         }
         return (long)hist.GetEntries();
      }


      static long fillN(HistType_t &hist, std::vector<InputType_t> &input, std::string_view gType) {
         std::string title = MakeTitle(gVersion, GetHist<kNDim,T>(),"fills N (stride 32)", gType);
         constexpr size_t stride = gStride;
         {
            //Timer t("R6 2D fills [regular bins size]",input.size()/2);
            Timer t(title.c_str(),input.size()/2);
            for (size_t i = 0; i < (input.size()-(stride*2-1)); i += (stride*2))
               hist.FillN(gStride, &(input[i]), &(input[i+gStride]), nullptr);
         }
         return (long)hist.GetEntries();
      }

      static long fill(HistType_t &hist, std::vector<InputType_t> &input, std::string_view gType) {
         std::string title = MakeTitle(gVersion, GetHist<kNDim,T>(),"fills              ", gType);
         {
            //Timer t("R6 2D fills [regular bins size]",input.size()/2);
            Timer t(title.c_str(),input.size()/2);
            for (size_t i = 0; i < input.size()-1; i += 2)
               hist.Fill(input[i], input[i+1]);
         }
         return (long)hist.GetEntries();
      }
   }; // Dim

   template <typename T>
   struct Dim<T,1> {

      constexpr static unsigned short kNDim = 1;
      using HistType_t = typename Redirect<kNDim,T>::HistType_t;

      // This is odd ...
      using InputType_t = double;

      using FillFunc_t = std::add_pointer_t<long(HistType_t &hist, std::vector<InputType_t> &input, std::string_view type)>;


      struct EE {

         static constexpr const char * const gType = "regular bin size  ";

         template <FillFunc_t filler>
         static long Execute(std::vector<InputType_t> &input, double minVal, double maxVal) {

            HistType_t hist("a", "a hist", 100, minVal, maxVal);
            return filler(hist,input,gType);
         }
      };

      struct II {

         static constexpr const char * const gType = "irregular bin size";

         template <FillFunc_t filler>
         static long Execute(std::vector<InputType_t> &input, double minVal, double maxVal) {

            BinEdges edges(minVal,maxVal);
            HistType_t hist("a", "a hist", edges.fNBinsX - 1, edges.fXBins);
            return filler(hist,input,gType);
         }
      };


      static long fillBuffered(HistType_t &hist, std::vector<InputType_t> &input, std::string_view gType) {
         std::string title = MakeTitle(gVersion, GetHist<kNDim,T>(),"fills (buffered)   ", gType);
         hist.SetBuffer(TH1::GetDefaultBufferSize());
         {
            //Timer t("R6 2D fills [regular bins size]",input.size()/2);
            Timer t(title.c_str(),input.size());
            for (size_t i = 0; i < input.size()-1; ++i)
               hist.Fill(input[i]);
         }
         return (long)hist.GetEntries();
      }


      static long fillN(HistType_t &hist, std::vector<InputType_t> &input, std::string_view gType) {
         std::string title = MakeTitle(gVersion, GetHist<kNDim,T>(),"fills N (stride 32)", gType);
         constexpr size_t stride = gStride;
         {
            //Timer t("R6 2D fills [regular bins size]",input.size()/2);
            Timer t(title.c_str(),input.size());
            for (size_t i = 0; i < (input.size()-(stride-1)); i += (stride))
               hist.FillN(gStride, &(input[i]), nullptr);
         }
         return (long)hist.GetEntries();
      }

      static long fill(HistType_t &hist, std::vector<InputType_t> &input, std::string_view gType) {
         std::string title = MakeTitle(gVersion, GetHist<kNDim,T>(),"fills              ", gType);
         {
            //Timer t("R6 2D fills [regular bins size]",input.size()/2);
            Timer t(title.c_str(),input.size());
            for (size_t i = 0; i < input.size(); ++i)
               hist.Fill(input[i]);
         }
         return (long)hist.GetEntries();
      }
   }; // Dim1
}

template <typename T,unsigned short kNDim>
void speedtest(size_t count = (size_t)(1e6));

template <>
void speedtest<double,2>(size_t count) {
   using DataType_t = double;
   using InputType_t = double;
   static constexpr unsigned short kNDim = 2;

   TH1::AddDirectory(kFALSE);

   std::vector<InputType_t> input; // (count);
   input.resize(count);

   double minVal = -5.0;
   double maxVal = +5.0;
   GenerateInput(input, minVal, maxVal, 0);

   // Make sure we have some overflow.
   minVal *= 0.9;
   maxVal *= 0.9;

   cout << '\n';

   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered   >(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered   >(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';
}


// these are copy/paste to work around failure to properly instantiate the template :(

template <>
void speedtest<float,2>(size_t count) {
   using DataType_t = float;
   using InputType_t = double;
   constexpr unsigned short kNDim = 2;

   TH1::AddDirectory(kFALSE);

   std::vector<InputType_t> input; // (count);
   input.resize(count);

   double minVal = -5.0;
   double maxVal = +5.0;
   GenerateInput(input, minVal, maxVal, 0);

   // Make sure we have some overflow.
   minVal *= 0.9;
   maxVal *= 0.9;

   cout << '\n';

   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered   >(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered   >(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

}

template <>
void speedtest<double,1>(size_t count) {
   using DataType_t = double;
   using InputType_t = double;
   static constexpr unsigned short kNDim = 1;

   TH1::AddDirectory(kFALSE);

   std::vector<InputType_t> input; // (count);
   input.resize(count);

   double minVal = -5.0;
   double maxVal = +5.0;
   GenerateInput(input, minVal, maxVal, 0);

   // Make sure we have some overflow.
   minVal *= 0.9;
   maxVal *= 0.9;

   cout << '\n';

   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered   >(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered   >(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

}

template <>
void speedtest<float,1>(size_t count) {
   using DataType_t = float;
   using InputType_t = double;
   static constexpr unsigned short kNDim = 1;

   TH1::AddDirectory(kFALSE);

   std::vector<InputType_t> input; // (count);
   input.resize(count);

   double minVal = -5.0;
   double maxVal = +5.0;
   GenerateInput(input, minVal, maxVal, 0);

   // Make sure we have some overflow.
   minVal *= 0.9;
   maxVal *= 0.9;

   cout << '\n';

   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered   >(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered   >(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::EE::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R7::Dim<DataType_t,kNDim>::II::Execute<R7::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::EE::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

   cout << '\n';

   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillBuffered>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fillN>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);
   R6::Dim<DataType_t,kNDim>::II::Execute<R6::Dim<DataType_t,kNDim>::fill>(input, minVal, maxVal);

}

void histspeedtest(size_t iter = 1e6)
{
   speedtest<double,2>(iter);
   speedtest<float,2>(iter);
   speedtest<double,1>(iter);
   speedtest<float,1>(iter);
}

int main(int argc, char **argv) {

   size_t iter = 1e9;

   histspeedtest(iter);
}
