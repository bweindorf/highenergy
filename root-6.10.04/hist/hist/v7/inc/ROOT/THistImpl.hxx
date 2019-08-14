/// \file ROOT/THistImpl.h
/// \ingroup Hist ROOT7
/// \author Axel Naumann <axel@cern.ch>
/// \date 2015-03-23
/// \warning This is part of the ROOT 7 prototype! It will change without notice. It might trigger earthquakes. Feedback is welcome!

/*************************************************************************
 * Copyright (C) 1995-2015, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT7_THistImpl
#define ROOT7_THistImpl

#include <cctype>
#include <functional>
#include "ROOT/RArrayView.hxx"
#include "ROOT/RTupleApply.hxx"

#include "ROOT/TAxis.hxx"
#include "ROOT/THistBinIter.hxx"
#include "ROOT/THistUtils.hxx"

class TRootIOCtor;

namespace ROOT {
namespace Experimental {

template<int DIMENSIONS, class PRECISION,
  template <int D_, class P_, template <class P__> class STORAGE> class... STAT>
class THist;


namespace Hist {
/// Iterator over n dimensional axes - an array of n axis iterators.
template<int NDIM> using AxisIter_t = std::array<TAxisBase::const_iterator, NDIM>;
/// Range over n dimensional axes - a pair of arrays of n axis iterators.
template<int NDIM> using AxisIterRange_t = std::array<AxisIter_t<NDIM>, 2>;

/// Kinds of under- and overflow handling.
enum class EOverflow {
  kNoOverflow = 0x0, ///< Exclude under- and overflows
  kUnderflow = 0x1, ///< Include underflows
  kOverflow = 0x2, ///< Include overflows
  kUnderOver = 0x3, ///< Include both under- and overflows
};

inline bool operator&(EOverflow a, EOverflow b) {
  return static_cast<int>(a) & static_cast<int>(b);
}
} // namespace Hist

namespace Detail {

/**
 \class THistImplPrecisionAgnosticBase
 Base class for THistImplBase that abstracts out the histogram's PRECISION.

 For operations such as painting a histogram, the PRECISION (type of the bin
 content) is not relevant; painting will cast the underlying bin type to double.
 To facilitate this, THistImplBase itself inherits from the
 THistImplPrecisionAgnosticBase interface.
 */
template <int DIMENSIONS>
class THistImplPrecisionAgnosticBase {
public:
  /// Type of the coordinate: a DIMENSIONS-dimensional array of doubles.
  using CoordArray_t = Hist::CoordArray_t<DIMENSIONS>;
  /// Range type.
  using AxisIterRange_t = Hist::AxisIterRange_t<DIMENSIONS>;

  THistImplPrecisionAgnosticBase() = default;
  THistImplPrecisionAgnosticBase(const THistImplPrecisionAgnosticBase&) = default;
  THistImplPrecisionAgnosticBase(THistImplPrecisionAgnosticBase&&) = default;
  THistImplPrecisionAgnosticBase(std::string_view title): fTitle(title) {}
  virtual ~THistImplPrecisionAgnosticBase() {}

  /// Number of dimensions of the coordinates
  static constexpr int GetNDim() { return DIMENSIONS; }
  /// Number of bins of this histogram, including all overflow and underflow
  /// bins. Simply the product of all axes' number of bins.
  virtual int GetNBins() const noexcept = 0;

  /// Get the histogram title.
  const std::string& GetTitle() const { return fTitle; }

  /// Given the coordinate `x`, determine the index of the bin.
  virtual int GetBinIndex(const CoordArray_t& x) const = 0;
  /// Given the coordinate `x`, determine the index of the bin, possibly growing
  /// axes for which `x` is out of range.
  virtual int GetBinIndexAndGrow(const CoordArray_t& x) = 0;

  /// Get the center in all dimensions of the bin with index `binidx`.
  virtual CoordArray_t GetBinCenter(int binidx) const = 0;
  /// Get the lower edge in all dimensions of the bin with index `binidx`.
  virtual CoordArray_t GetBinFrom(int binidx) const = 0;
  /// Get the upper edge in all dimensions of the bin with index `binidx`.
  virtual CoordArray_t GetBinTo(int binidx) const = 0;

  /// The bin's uncertainty. size() of the vector is a multiple of 2:
  /// several kinds of uncertainty, same number of entries for lower and upper.
  virtual double GetBinUncertainty(int binidx) const = 0;

  /// Whether this histogram's statistics provide storage for uncertainties, or
  /// whether uncertainties are determined as poisson uncertainty of the content.
  virtual bool HasBinUncertainty() const = 0;

  /// The bin content, cast to double.
  virtual double GetBinContentAsDouble(int binidx) const = 0;

  /// Get a TAxisView on axis with index iAxis.
  ///
  /// \param iAxis - index of the axis, must be 0 <= iAxis < DIMENSION
  virtual TAxisView GetAxis(int iAxis) const = 0;

  /// Get a AxisIterRange_t for the whole histogram, possibly restricting the
  /// range to non-overflow bins.
  ///
  /// \param withOverUnder - specifies for each dimension whether under and
  /// overflow should be included in the returned range.
  virtual AxisIterRange_t
    GetRange(const std::array<Hist::EOverflow, DIMENSIONS>& withOverUnder) const = 0;

private:
  std::string fTitle; ///< Histogram title.
};


/**
 \class THistImplBase
 Interface class for THistImpl.

 THistImpl is templated for a specific configuration of axes. To enable access
 through THist, THistImpl inherits from THistImplBase, exposing only dimension
 (`DIMENSION`) and bin type (`PRECISION`).
 */
template<class DATA>
class THistImplBase: public THistImplPrecisionAgnosticBase<DATA::GetNDim()> {
public:
  /// Type of the statistics (bin content, uncertainties etc).
  using Stat_t = DATA;
  /// Type of the coordinate: a DIMENSIONS-dimensional array of doubles.
  using CoordArray_t = Hist::CoordArray_t<DATA::GetNDim()>;
  /// Type of the bin content (and thus weights).
  using Weight_t = typename DATA::Weight_t;

  /// Type of the Fill(x, w) function
  using FillFunc_t = void (THistImplBase::*)(const CoordArray_t& x, Weight_t w);

private:
  /// The histogram's bin content, uncertainties etc.
  Stat_t fStatistics;

public:
  THistImplBase() = default;
  THistImplBase(size_t numBins): fStatistics(numBins) {}
  THistImplBase(std::string_view title, size_t numBins):
    THistImplPrecisionAgnosticBase<DATA::GetNDim()>(title), fStatistics(numBins) {}
  THistImplBase(const THistImplBase&) = default;
  THistImplBase(THistImplBase&&) = default;

  /// Interface function to fill a vector or array of coordinates with
  /// corresponding weights.
  /// \note the size of `xN` and `weightN` must be the same!
  virtual void FillN(const std::array_view<CoordArray_t> xN,
                     const std::array_view<Weight_t> weightN) = 0;

  /// Interface function to fill a vector or array of coordinates.
  virtual void FillN(const std::array_view<CoordArray_t> xN) = 0;

  /// Retrieve the pointer to the overridden Fill(x, w) function.
  virtual FillFunc_t GetFillFunc() const = 0;

  /// Apply a function (lambda) to all bins of the histogram. The function takes
  /// the bin reference.
  virtual void Apply(std::function<void(THistBinRef<const THistImplBase>)>) const = 0;

  /// Apply a function (lambda) to all bins of the histogram. The function takes
  /// the bin coordinate and content.
  virtual void ApplyXC(std::function<void(const CoordArray_t&, Weight_t)>) const = 0;

  /// Apply a function (lambda) to all bins of the histogram. The function takes
  /// the bin coordinate, content and uncertainty ("error") of the content.
  virtual void ApplyXCE(std::function<void(const CoordArray_t&, Weight_t, double)>) const = 0;

  /// Get the bin content (sum of weights) for the bin at coordinate x.
  virtual Weight_t GetBinContent(const CoordArray_t& x) const = 0;

  using THistImplPrecisionAgnosticBase<DATA::GetNDim()>::GetBinUncertainty;

  /// Get the bin uncertainty for the bin at coordinate x.
  virtual double GetBinUncertainty(const CoordArray_t& x) const = 0;

  /// Get the number of bins in this histogram, including possible under- and
  /// overflow bins.
  int GetNBins() const noexcept final { return fStatistics.size(); }

  /// Get the bin content (sum of weights) for bin index `binidx`.
  Weight_t GetBinContent(int binidx) const { return fStatistics[binidx]; }

  /// Get the bin content (sum of weights) for bin index `binidx` (non-const).
  Weight_t & GetBinContent(int binidx) { return fStatistics[binidx]; }

  /// Const access to statistics.
  const Stat_t & GetStat() const noexcept { return fStatistics; }

  /// Non-const access to statistics.
  Stat_t & GetStat() noexcept { return fStatistics; }

  /// Get the bin content (sum of weights) for bin index `binidx`, cast to
  /// double.
  double GetBinContentAsDouble(int binidx) const final {
    return (double) GetBinContent(binidx);
  }

  /// Add `w` to the bin at index `bin`.
  void AddBinContent(int binidx, Weight_t w) { fStatistics[binidx] += w; }
};
} // namespace Detail


namespace Internal {
/** \name Histogram traits
    Helper traits for histogram operations.
 */
///\{

/// \name Axis tuple operations
/// Template operations on axis tuple.
///@{
template <int IDX, class AXISTUPLE> struct TGetBinCount;

template <class AXES> struct TGetBinCount<0, AXES> {
  int operator()(const AXES& axes) const {
    return std::get<0>(axes).GetNBins();
  }
};


template <int I, class AXES>
struct TGetBinCount {
  int operator()(const AXES& axes) const {
    return std::get<I>(axes).GetNBins() * TGetBinCount<I - 1, AXES>()(axes);
  }
};


template<class... AXISCONFIG>
int GetNBinsFromAxes(AXISCONFIG... axisArgs) {
  using axesTuple = std::tuple<AXISCONFIG...>;
  return TGetBinCount<sizeof...(AXISCONFIG) - 1, axesTuple>()(axesTuple{axisArgs...});
}


template <int IDX, class HISTIMPL, class AXES, bool GROW>
struct TGetBinIndex;

// Break recursion
template <class HISTIMPL, class AXES, bool GROW>
struct TGetBinIndex< -1, HISTIMPL, AXES, GROW> {
  int operator()(HISTIMPL*, const AXES&, const typename HISTIMPL::CoordArray_t&,
                 TAxisBase::EFindStatus& status) const {
    status = TAxisBase::EFindStatus::kValid;
    return 0;
  }
};

template <int I, class HISTIMPL, class AXES, bool GROW>
struct TGetBinIndex {
  int operator()(HISTIMPL* hist, const AXES& axes,
                 const typename HISTIMPL::CoordArray_t& x, TAxisBase::EFindStatus& status) const {
    constexpr const int thisAxis = HISTIMPL::GetNDim() - I - 1;
    int bin = std::get<thisAxis>(axes).FindBin(x[thisAxis]);
    if (GROW && std::get<thisAxis>(axes).CanGrow()
        && (bin < 0 || bin > std::get<thisAxis>(axes).GetNBinsNoOver())) {
      hist->GrowAxis(I, x[thisAxis]);
      status = TAxisBase::EFindStatus::kCanGrow;

      // Abort bin calculation; we don't care. Let THist::GetBinIndex() retry!
      return bin;
    }
    return bin + TGetBinIndex<I - 1, HISTIMPL, AXES, GROW>()(hist, axes, x, status)
                 * std::get<thisAxis>(axes).GetNBins();
  }
};


template<int I, class AXES> struct TFillIterRange;

// Break recursion.
template<class AXES> struct TFillIterRange<-1, AXES> {
  void operator()(Hist::AxisIterRange_t<std::tuple_size<AXES>::value>& /*range*/,
                  const AXES& /*axes*/,
                  const std::array<Hist::EOverflow, std::tuple_size<AXES>::value>& /*over*/) const {}
};

/** Fill `range` with begin() and end() of all axes, including under/overflow
  as specified by `over`.
*/
template<int I, class AXES>
struct TFillIterRange {
  void operator()(Hist::AxisIterRange_t<std::tuple_size<AXES>::value> &range,
                  const AXES &axes,
                  const std::array<Hist::EOverflow, std::tuple_size<AXES>::value> &over) const {
    if (over[I] & Hist::EOverflow::kUnderflow)
      range[0][I] = std::get<I>(axes).begin_with_underflow();
    else
      range[0][I] = std::get<I>(axes).begin();
    if (over[I] & Hist::EOverflow::kOverflow)
      range[1][I] = std::get<I>(axes).end_with_overflow();
    else
      range[1][I] = std::get<I>(axes).end();
    TFillIterRange<I - 1, AXES>()(range, axes, over);
  }
};



enum class EBinCoord {
  kBinFrom, ///< Get the lower bin edge
  kBinCenter, ///< Get the bin center
  kBinTo ///< Get the bin high edge
};

template<int I, class COORD, class AXES> struct TFillBinCoord;

// Break recursion.
template<class COORD, class AXES> struct TFillBinCoord<-1, COORD, AXES> {
  void operator()(COORD& /*coord*/, const AXES& /*axes*/, EBinCoord /*kind*/, int /*binidx*/) const {}
};

/** Fill `coord` with low bin edge or center or high bin edge of all axes.
*/
template<int I, class COORD, class AXES>
struct TFillBinCoord {
  void operator()(COORD& coord, const AXES& axes, EBinCoord kind, int binidx) const {
    int axisbin = binidx % std::get<I>(axes).GetNBins();
    size_t coordidx = std::tuple_size<AXES>::value - I - 1;
    switch (kind) {
      case EBinCoord::kBinFrom:
        coord[coordidx] = std::get<I>(axes).GetBinFrom(axisbin);
        break;
      case EBinCoord::kBinCenter:
        coord[coordidx] = std::get<I>(axes).GetBinCenter(axisbin);
        break;
      case EBinCoord::kBinTo:
        coord[coordidx] = std::get<I>(axes).GetBinTo(axisbin);
        break;
    }
    TFillBinCoord<I - 1, COORD, AXES>()(coord, axes, kind,
                                         binidx / std::get<I>(axes).GetNBins());
  }
};



template <class... AXISCONFIG>
static std::array<TAxisView, sizeof...(AXISCONFIG)>
GetAxisView(const AXISCONFIG&...axes) noexcept {
  std::array<TAxisView, sizeof...(AXISCONFIG)> axisViews = {
     {TAxisView(axes)...}
  };
  return axisViews;
}

///\}
} // namespace Internal


namespace Detail {

template <class DATA, class... AXISCONFIG>
class THistImpl final: public THistImplBase<DATA> {
  static_assert(sizeof...(AXISCONFIG) == DATA::GetNDim(),
                "Number of axes must equal histogram dimension");

  friend typename DATA::Hist_t;

public:
  using ImplBase_t = THistImplBase<DATA>;
  using CoordArray_t = typename ImplBase_t::CoordArray_t;
  using Weight_t = typename ImplBase_t::Weight_t;
  using typename ImplBase_t::FillFunc_t;
  template <int NDIM = DATA::GetNDim()> using AxisIterRange_t
    = typename Hist::AxisIterRange_t<NDIM>;

private:
  std::tuple<AXISCONFIG...> fAxes; ///< The histogram's axes

public:
  THistImpl(TRootIOCtor*);
  THistImpl(AXISCONFIG... axisArgs);
  THistImpl(std::string_view title, AXISCONFIG... axisArgs);

  /// Retrieve the fill function for this histogram implementation, to prevent
  /// the virtual function call for high-frequency fills.
  FillFunc_t GetFillFunc() const final { return (FillFunc_t)&THistImpl::Fill; }

  /// Apply a function (lambda) to all bins of the histogram. The function takes
  /// the bin reference.
  void Apply(std::function<void(THistBinRef<const ImplBase_t>)> op) const final {
    for (THistBinRef<const ImplBase_t>&& binref: *this)
      op(binref);
  }

  /// Apply a function (lambda) to all bins of the histogram. The function takes
  /// the bin coordinate and content.
  void ApplyXC(std::function<void(const CoordArray_t&, Weight_t)> op) const final {
    for (auto&& binref: *this)
      op(binref.GetCenter(), binref.GetContent());
  }

  /// Apply a function (lambda) to all bins of the histogram. The function takes
  /// the bin coordinate, content and uncertainty ("error") of the content.
  virtual void ApplyXCE(std::function<void(const CoordArray_t&, Weight_t, double)> op) const final {
    for (auto&& binref: *this)
      op(binref.GetCenter(), binref.GetContent(), binref.GetUncertainty());
  }


  /// Get the axes of this histogram.
  const std::tuple<AXISCONFIG...>& GetAxes() const { return fAxes; }

  /// Normalized axes access, converting the actual axis to TAxisConfig
  TAxisView GetAxis(int iAxis) const final {
    return std::apply(Internal::GetAxisView<AXISCONFIG...>, fAxes)[iAxis];
  }


  /// Gets the bin index for coordinate `x`; returns -1 if there is no such bin,
  /// e.g. for axes without over / underflow but coordinate out of range.
  int GetBinIndex(const CoordArray_t& x) const final {
    TAxisBase::EFindStatus status = TAxisBase::EFindStatus::kValid;
    int ret = Internal::TGetBinIndex<DATA::GetNDim() - 1, THistImpl,
       decltype(fAxes), false>()(nullptr, fAxes, x, status);
    if (status != TAxisBase::EFindStatus::kValid)
      return -1;
    return ret;
  }

  /// Gets the bin index for coordinate `x`, growing the axes as needed and
  /// possible. Returns -1 if there is no such bin,
  /// e.g. for axes without over / underflow but coordinate out of range.
  int GetBinIndexAndGrow(const CoordArray_t& x) final {
    TAxisBase::EFindStatus status = TAxisBase::EFindStatus::kCanGrow;
    int ret = - 1;
    while (status == TAxisBase::EFindStatus::kCanGrow) {
      ret = Internal::TGetBinIndex<DATA::GetNDim() - 1, THistImpl, decltype(fAxes), true>()
         (this, fAxes, x, status);
    }
    return ret;
  }

  /// Get the center coordinate of the bin.
  CoordArray_t GetBinCenter(int binidx) const final {
    using TFillBinCoord
      = Internal::TFillBinCoord<DATA::GetNDim() - 1, CoordArray_t, decltype(fAxes)>;
    CoordArray_t coord;
    TFillBinCoord()(coord, fAxes, Internal::EBinCoord::kBinCenter, binidx);
    return coord;
  }

  /// Get the coordinate of the low limit of the bin.
  CoordArray_t GetBinFrom(int binidx) const final {
    using TFillBinCoord = Internal::TFillBinCoord<DATA::GetNDim() - 1, CoordArray_t, decltype(fAxes)>;
    CoordArray_t coord;
    TFillBinCoord()(coord, fAxes, Internal::EBinCoord::kBinFrom, binidx);
    return coord;
  }

  /// Get the coordinate of the high limit of the bin.
  CoordArray_t GetBinTo(int binidx) const final {
    using TFillBinCoord =  Internal::TFillBinCoord<DATA::GetNDim() - 1, CoordArray_t, decltype(fAxes)>;
    CoordArray_t coord;
    TFillBinCoord()(coord, fAxes, Internal::EBinCoord::kBinTo, binidx);
    return coord;
  }

  /// Fill an array of `weightN` to the bins specified by coordinates `xN`.
  /// For each element `i`, the weight `weightN[i]` will be added to the bin
  /// at the coordinate `xN[i]`
  /// \note `xN` and `weightN` must have the same size!
  void FillN(const std::array_view<CoordArray_t> xN,
             const std::array_view<Weight_t> weightN) final {
#ifndef NDEBUG
    if (xN.size() != weightN.size()) {
      R__ERROR_HERE("HIST") << "Not the same number of points and weights!";
      return;
    }
#endif

    for (size_t i = 0; i < xN.size(); ++i) {
      Fill(xN[i], weightN[i]);
    }
  }

  /// Fill an array of `weightN` to the bins specified by coordinates `xN`.
  /// For each element `i`, the weight `weightN[i]` will be added to the bin
  /// at the coordinate `xN[i]`
  void FillN(const std::array_view<CoordArray_t> xN) final {
    for (auto&& x: xN) {
      Fill(x);
    }
  }

  /// Add a single weight `w` to the bin at coordinate `x`.
  void Fill(const CoordArray_t& x, Weight_t w = 1.) {
    int bin = GetBinIndexAndGrow(x);
    this->GetStat().Fill(x, bin, w);
  }

  /// Get the content of the bin at position `x`.
  Weight_t GetBinContent(const CoordArray_t& x) const final {
    int bin = GetBinIndex(x);
    if (bin >= 0)
      return ImplBase_t::GetBinContent(bin);
    return 0.;
  }

  /// Return the uncertainties for the given bin.
  double GetBinUncertainty(int binidx) const final {
    return this->GetStat().GetBinUncertainty(binidx);
  }

  /// Get the bin uncertainty for the bin at coordinate x.
  double GetBinUncertainty(const CoordArray_t& x) const final {
    const int bin = GetBinIndex(x);
    return this->GetBinUncertainty(bin);
  }

  /// Whether this histogram's statistics provide storage for uncertainties, or
  /// whether uncertainties are determined as poisson uncertainty of the content.
  bool HasBinUncertainty() const final {
    return this->GetStat().HasBinUncertainty();
  }

  /// Get the begin() and end() for each axis.
  ///
  ///\param[in] withOverUnder - Whether the begin and end should contain over-
  /// or underflow. Ignored if the axis does not support over- / underflow.
  AxisIterRange_t<DATA::GetNDim()>
     GetRange(const std::array<Hist::EOverflow, DATA::GetNDim()>& withOverUnder) const final {
    std::array<std::array<TAxisBase::const_iterator, DATA::GetNDim()>, 2> ret;
    Internal::TFillIterRange<DATA::GetNDim() - 1, decltype(fAxes)>()(ret, fAxes, withOverUnder);
    return ret;
  }

  /// Grow the axis number `iAxis` to fit the coordinate `x`.
  ///
  /// The histogram (conceptually) combines pairs of bins along this axis until
  /// `x` is within the range of the axis.
  /// The axis must support growing for this to work (e.g. a `TAxisGrow`).
  void GrowAxis(int /*iAxis*/, double /*x*/) {
    // TODO: Implement GrowAxis()
  }

  /// \{
  /// \name Iterator interface
  using const_iterator = THistBinIter<const ImplBase_t >;
  using iterator = THistBinIter<ImplBase_t >;
  iterator begin() noexcept { return iterator(*this); }
  const_iterator begin() const noexcept { return const_iterator(*this); }
  iterator end() noexcept { return iterator(*this, this->GetNBins()); }
  const_iterator end() const noexcept { return const_iterator(*this, this->GetNBins()); }
  /// \}
};

template <class DATA, class... AXISCONFIG>
THistImpl<DATA, AXISCONFIG...>::THistImpl(TRootIOCtor *)
{
}

template <class DATA, class... AXISCONFIG>
THistImpl<DATA, AXISCONFIG...>::
THistImpl(AXISCONFIG... axisArgs):
  ImplBase_t(Internal::GetNBinsFromAxes(axisArgs...)),
  fAxes{axisArgs...}
{}

template <class DATA, class... AXISCONFIG>
THistImpl<DATA, AXISCONFIG...>::
THistImpl(std::string_view title, AXISCONFIG... axisArgs):
  ImplBase_t(title, Internal::GetNBinsFromAxes(axisArgs...)),
  fAxes{axisArgs...}
{}

#if 0
// In principle we can also have a runtime version of THistImpl, that does not
// contain a tuple of concrete axis types but a vector of `TAxisConfig`.
template <class DATA>
class THistImplRuntime: public THistImplBase<DATA> {
public:
  THistImplRuntime(std::array<TAxisConfig, DATA::GetNDim()>&& axisCfg);
};
#endif

} // namespace Detail

} // namespace Experimental
} // namespace ROOT

#endif
