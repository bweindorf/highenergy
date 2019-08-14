// @(#)root/mathcore:$Id$
// Author: M. Borinsky

/**********************************************************************
 *                                                                    *
 * Copyright (c) 2006  LCG ROOT Math Team, CERN/PH-SFT                *
 *                                                                    *
 *                                                                    *
 **********************************************************************/

// Implementation file for class BinData

#include "Fit/BinData.h"
#include "Math/Error.h"

#include <cassert>
#include <cmath>

using namespace std;

namespace ROOT {

   namespace Fit
   {

    BinData::BinData(unsigned int maxpoints, unsigned int dim,
      ErrorType err ) :
      FitData( maxpoints, dim ),
      fErrorType( err ),
      fDataPtr( NULL ),
      fDataErrorPtr( NULL ), fDataErrorHighPtr( NULL ), fDataErrorLowPtr( NULL ),
      fpTmpCoordErrorVector( NULL ), fpTmpBinEdgeVector( NULL )
    {
      InitializeErrors();
      InitDataVector( );
    }


    /**
      constructor from option and default range
    */
    BinData::BinData (const DataOptions & opt, unsigned int maxpoints,
      unsigned int dim, ErrorType err ) :
      FitData( opt, maxpoints, dim ),
      fErrorType( err ),
      fDataPtr( NULL ),
      fDataErrorPtr( NULL ), fDataErrorHighPtr( NULL ), fDataErrorLowPtr( NULL ),
      fpTmpCoordErrorVector( NULL ), fpTmpBinEdgeVector( NULL )
    {
      InitializeErrors();
      InitDataVector( );
    }

    /**
      constructor from options and range
      efault is 1D and value errors
    */
    BinData::BinData (const DataOptions & opt, const DataRange & range,
      unsigned int maxpoints, unsigned int dim, ErrorType err ) :
      FitData( opt, range, maxpoints, dim ),
      fErrorType( err ),
      fDataPtr( NULL ),
      fDataErrorPtr( NULL ), fDataErrorHighPtr( NULL ), fDataErrorLowPtr( NULL ),
      fpTmpCoordErrorVector( NULL ), fpTmpBinEdgeVector( NULL )
    {
      InitializeErrors();
      InitDataVector( );
    }

    /** constructurs using external data */

    /**
      constructor from external data for 1D with errors on  coordinate and value
    */
    BinData::BinData (unsigned int n, const double * dataX, const double * val,
      const double * ex , const double * eval ) :
      FitData( n, dataX ),
      fDataPtr( NULL ),
      fDataErrorPtr( NULL ), fDataErrorHighPtr( NULL ), fDataErrorLowPtr( NULL ),
      fpTmpCoordErrorVector( NULL ), fpTmpBinEdgeVector( NULL )
    {
      assert( val );
      fDataPtr = val;

      if ( NULL != eval )
      {
        fDataErrorPtr = eval;

        fErrorType = kValueError;

        if ( NULL != ex )
        {
          fCoordErrorsPtr.resize( 1 );

          fCoordErrorsPtr[0] = ex;

          fErrorType = kCoordError;
        }
      }
      else
      {
        fErrorType = kNoError;
      }

      fpTmpCoordErrorVector = new double [ fDim ];
    }

    /**
      constructor from external data for 2D with errors on  coordinate and value
    */
    BinData::BinData(unsigned int n, const double * dataX, const double * dataY,
      const double * val, const double * ex , const double * ey,
      const double * eval  ) :
      FitData( n, dataX, dataY ),
      fDataErrorPtr( NULL ), fDataErrorHighPtr( NULL ), fDataErrorLowPtr( NULL ),
      fpTmpCoordErrorVector( NULL ), fpTmpBinEdgeVector( NULL )
    {
      assert( val );
      fDataPtr = val;

      if ( NULL != eval )
      {
        fDataErrorPtr = eval;

        fErrorType = kValueError;

        if ( NULL != ex || NULL != ey )
        {
          fCoordErrorsPtr.resize( 2 );

          fCoordErrorsPtr[0] = ex;
          fCoordErrorsPtr[1] = ey;

          fErrorType = kCoordError;
        }
      }
      else
      {
        fErrorType = kNoError;
      }

      fpTmpCoordErrorVector = new double [ fDim ];
    }

    /**
      constructor from external data for 3D with errors on  coordinate and value
    */
    BinData::BinData(unsigned int n, const double * dataX, const double * dataY,
      const double * dataZ, const double * val, const double * ex ,
      const double * ey , const double * ez , const double * eval   ) :
      FitData( n, dataX, dataY, dataZ ),
      fDataErrorPtr( NULL ), fDataErrorHighPtr( NULL ), fDataErrorLowPtr( NULL ),
      fpTmpCoordErrorVector( NULL ), fpTmpBinEdgeVector( NULL )
    {
      assert( val );
      fDataPtr = val;

      if ( NULL != eval )
      {
        fDataErrorPtr = eval;

        fErrorType = kValueError;

        if ( NULL != ex || NULL != ey || NULL != ez )
        {
          fCoordErrorsPtr.resize( 3 );

          fCoordErrorsPtr[0] = ex;
          fCoordErrorsPtr[1] = ey;
          fCoordErrorsPtr[2] = ez;

          fErrorType = kCoordError;
        }
      }
      else
      {
        fErrorType = kNoError;
      }

      fpTmpCoordErrorVector = new double [ fDim ];
    }

    /**
      destructor
    */
    BinData::~BinData()
    {
      assert( fMaxPoints == 0 || fWrapped == fData.empty() );

      assert( kValueError == fErrorType || kCoordError == fErrorType ||
        kAsymError == fErrorType || kNoError == fErrorType );
      assert( fMaxPoints == 0 || fDataError.empty() || &fDataError.front() == fDataErrorPtr );
      assert( fMaxPoints == 0 || fDataErrorHigh.empty() || &fDataErrorHigh.front() == fDataErrorHighPtr );
      assert( fMaxPoints == 0 || fDataErrorLow.empty() || &fDataErrorLow.front() == fDataErrorLowPtr );
      assert( fMaxPoints == 0 || fDataErrorLow.empty() == fDataErrorHigh.empty() );
      assert( fMaxPoints == 0 || fData.empty() || &fData.front() == fDataPtr );

      for ( unsigned int i=0; i < fDim; i++ )
      {
        assert( fCoordErrors.empty() || &fCoordErrors[i].front() == fCoordErrorsPtr[i] );
      }

      if ( fpTmpBinEdgeVector )
      {
        delete[] fpTmpBinEdgeVector;
        fpTmpBinEdgeVector= NULL;
      }

      if ( fpTmpCoordErrorVector )
      {
        delete[] fpTmpCoordErrorVector;
        fpTmpCoordErrorVector = NULL;
      }
    }

    /**
      copy constructors
    */
    BinData::BinData (const BinData & rhs) :
      FitData()
    {
      *this = rhs;
    }

    BinData & BinData::operator= ( const BinData & rhs )
    {
      FitData::operator=( rhs );

      if ( fpTmpBinEdgeVector )
      {
        assert( Opt().fIntegral );

        delete[] fpTmpBinEdgeVector;
        fpTmpBinEdgeVector= NULL;
      }

      if ( fpTmpCoordErrorVector )
      {
        delete[] fpTmpCoordErrorVector;
        fpTmpCoordErrorVector = NULL;
      }

      fDataPtr = NULL;
      fDataErrorPtr= fDataErrorHighPtr= fDataErrorLowPtr= NULL;

      fErrorType = rhs.fErrorType;
      fRefVolume = rhs.fRefVolume;
      fBinEdge = rhs.fBinEdge;

      if ( fWrapped )
      {
        fData.clear();
        fCoordErrors.clear();
        fDataError.clear();
        fDataErrorHigh.clear();
        fDataErrorLow.clear();

        fDataPtr = rhs.fDataPtr;
        fCoordErrorsPtr = rhs.fCoordErrorsPtr;
        fDataErrorPtr = rhs.fDataErrorPtr;
        fDataErrorHighPtr = rhs.fDataErrorHighPtr;
        fDataErrorLowPtr = rhs.fDataErrorLowPtr;
      }
      else
      {
        fData = rhs.fData;

        if ( !fData.empty() )
          fDataPtr = &fData.front();

        fCoordErrors = rhs.fCoordErrors;
        fDataError = rhs.fDataError;
        fDataErrorHigh = rhs.fDataErrorHigh;
        fDataErrorLow = rhs.fDataErrorLow;

        if( ! fCoordErrors.empty() )
        {
          assert( kCoordError == fErrorType || kAsymError == fErrorType );
          fCoordErrorsPtr.resize( fDim );

          for ( unsigned int i=0; i<fDim; i++ )
          {
            fCoordErrorsPtr[i] = &fCoordErrors[i].front();
          }
        }

        fDataError = rhs.fDataError;
        fDataErrorHigh = rhs.fDataErrorHigh;
        fDataErrorLow = rhs.fDataErrorLow;

        assert( fDataErrorLow.empty() == fDataErrorHigh.empty() );
        assert( fDataErrorLow.empty() != fDataError.empty() || kNoError == fErrorType );

        if ( !fDataError.empty() )
        {
          assert( kValueError == fErrorType || kCoordError == fErrorType );
          fDataErrorPtr = &fDataError.front();
        }
        else if ( !fDataErrorHigh.empty() && !fDataErrorLow.empty() )
        {
          assert( kAsymError == fErrorType );
          fDataErrorHighPtr = &fDataErrorHigh.front();
          fDataErrorLowPtr = &fDataErrorLow.front();
        }
      }

      fpTmpCoordErrorVector= new double[ fDim ];

      if ( Opt().fIntegral )
        fpTmpBinEdgeVector = new double[ fDim ];

      return *this;
    }


    /**
      preallocate a data set with given size ,  dimension and error type (to get the full point size)
      If the data set already exists and it is having the compatible point size space for the new points
      is created in the data sets, while if not compatible the old data are erased and new space of
      new size is allocated.
      (i.e if exists initialize is equivalent to a resize( NPoints() + maxpoints)
    */

    void BinData::Append( unsigned int newPoints, unsigned int dim , ErrorType err )
    {
      assert( !fWrapped );
      assert( fMaxPoints == 0 || fWrapped == fData.empty() );

      assert( kValueError == fErrorType || kCoordError == fErrorType ||
        kAsymError == fErrorType || kNoError == fErrorType );
      assert( fMaxPoints == 0 || fDataError.empty() || &fDataError.front() == fDataErrorPtr );
      assert( fMaxPoints == 0 || fDataErrorHigh.empty() || &fDataErrorHigh.front() == fDataErrorHighPtr );
      assert( fMaxPoints == 0 || fDataErrorLow.empty() || &fDataErrorLow.front() == fDataErrorLowPtr );
      assert( fMaxPoints == 0 || fDataErrorLow.empty() == fDataErrorHigh.empty() );
      assert( fMaxPoints == 0 || fData.empty() || &fData.front() == fDataPtr );

      FitData::Append( newPoints, dim );

      fErrorType = err;

      InitDataVector( );
      InitializeErrors( );
    }

    void BinData::Initialize( unsigned int newPoints, unsigned int dim, ErrorType err )
    {
      Append( newPoints, dim, err );
    }



    /**
      apply a Log transformation of the data values
      can be used for example when fitting an exponential or gaussian
      Transform the data in place need to copy if want to preserve original data
      The data sets must not contain negative values. IN case it does,
      an empty data set is returned
    */
    BinData & BinData::LogTransform()
    { // apply log transform on the bin data values

      if ( fWrapped )
      {
        UnWrap();
      }

      if ( kNoError == fErrorType )
      {
        fDataError.resize( fNPoints );
        fDataErrorPtr = &fDataError.front();
      }

      for ( unsigned int i=0; i < fNPoints; i++ )
      {
        double val = fData[i];

        if ( val <= 0 )
        {
           MATH_ERROR_MSG("BinData::TransformLog","Some points have negative values - cannot apply a log transformation");
           return *this;
        }

        fData[i] = std::log( val );

        if( kNoError == fErrorType )
        {
          fDataError[i] = val;
        }
        else if ( kValueError == fErrorType )
        {
          fDataError[i]*= val;
        }
        else if ( kCoordError == fErrorType )
        {
          fDataError[i]/= val;
        }
        else if ( kAsymError == fErrorType )
        {
          fDataErrorHigh[i]/= val;
          fDataErrorLow[i]/= val;
        }
        else
          assert(false);
      }

      if ( kNoError == fErrorType )
      {
        fErrorType = kValueError;
      }

      return *this;
    }


    /**
      add one dim data with only coordinate and values
    */
    void BinData::Add( double x, double y )
    {
      assert( kNoError == fErrorType );

      assert( !fData.empty() && fDataPtr );
      assert( fDataErrorHigh.empty() && !fDataErrorHighPtr );
      assert( fDataErrorLow.empty() && !fDataErrorLowPtr );
      assert( fDataError.empty() && !fDataErrorPtr );
      assert( fCoordErrors.empty() && fCoordErrorsPtr.empty() );

      fData[ fNPoints ] = y;

      FitData::Add( x );
    }

    /**
      add one dim data with no error in the coordinate (x)
      in this case store the inverse of the error in the value (y)
    */
    void BinData::Add( double x, double y, double ey )
    {
      assert( kValueError == fErrorType );
      assert( !fData.empty() && fDataPtr );
      assert( fDataErrorHigh.empty() && !fDataErrorHighPtr );
      assert( fDataErrorLow.empty() && !fDataErrorLowPtr );
      assert( !fDataError.empty() && fDataErrorPtr );
      assert( fCoordErrors.empty() && fCoordErrorsPtr.empty() );

      fData[ fNPoints ] = y;
      fDataError[ fNPoints ] = (ey != 0.0) ? 1.0/ey : 0.0;

      FitData::Add( x );
    }

    /**
      add one dim data with  error in the coordinate (x)
      in this case store the value (y)  error and not the inverse
    */
    void BinData::Add( double x, double y, double ex, double ey )
    {
      assert( kCoordError == fErrorType );
      assert( !fData.empty() && fDataPtr );
      assert( !fDataError.empty() && fDataErrorPtr );
      assert( fDataErrorHigh.empty() && !fDataErrorHighPtr );
      assert( fDataErrorLow.empty() && !fDataErrorLowPtr );
      assert( !fCoordErrors.empty() && fCoordErrors.size() == 1 );
      assert( !fCoordErrorsPtr.empty() && fCoordErrorsPtr.size() == 1 && fCoordErrorsPtr[0] );
      assert( &fCoordErrors[0].front() == fCoordErrorsPtr[0] );

      fData[ fNPoints ] = y;
      fCoordErrors[0][ fNPoints ] = ex;
      fDataError[ fNPoints ] = ey;

      FitData::Add( x );
    }

    /**
      add one dim data with  error in the coordinate (x) and asymmetric errors in the value (y)
      in this case store the y errors and not the inverse
    */
    void BinData::Add( double x, double y, double ex, double eyl, double eyh )
    {
      assert( kAsymError == fErrorType );
      assert( !fData.empty() && fDataPtr );
      assert( !fDataErrorHigh.empty() && fDataErrorHighPtr );
      assert( !fDataErrorLow.empty() && fDataErrorLowPtr );
      assert( fDataError.empty() && !fDataErrorPtr );
      assert( !fCoordErrors.empty() && fCoordErrors.size() == 1 );
      assert( !fCoordErrorsPtr.empty() && fCoordErrorsPtr.size() == 1 && fCoordErrorsPtr[0] );
      assert( &fCoordErrors[0].front() == fCoordErrorsPtr[0] );

      fData[ fNPoints ] = y;
      fCoordErrors[0][ fNPoints ] = ex;
      fDataErrorHigh[ fNPoints ] = eyh;
      fDataErrorLow[ fNPoints ] = eyl;

      FitData::Add( x );
    }

    /**
      add multi-dim coordinate data with only value
    */
    void BinData::Add( const double* x, double val )
    {
      assert( kNoError == fErrorType );

      assert( !fData.empty() && fDataPtr );
      assert( fDataErrorHigh.empty() && !fDataErrorHighPtr );
      assert( fDataErrorLow.empty() && !fDataErrorLowPtr );
      assert( fDataError.empty() && !fDataErrorPtr );
      assert( fCoordErrors.empty() && fCoordErrorsPtr.empty() );

      fData[ fNPoints ] = val;

      FitData::Add( x );
    }

    /**
      add multi-dim coordinate data with only error in value
    */
    void BinData::Add( const double* x, double val, double eval )
    {
      assert( kValueError == fErrorType );
      assert( !fData.empty() && fDataPtr );
      assert( fDataErrorHigh.empty() && !fDataErrorHighPtr );
      assert( fDataErrorLow.empty() && !fDataErrorLowPtr );
      assert( !fDataError.empty() && fDataErrorPtr );
      assert( fCoordErrors.empty() && fCoordErrorsPtr.empty() );

      fData[ fNPoints ] = val;
      fDataError[ fNPoints ] = (eval != 0.0) ? 1.0/eval : 0.0;

      FitData::Add( x );
    }

    /**
      add multi-dim coordinate data with both error in coordinates and value
    */
    void BinData::Add( const double* x, double val, const double* ex, double eval )
    {
      assert( kCoordError == fErrorType );
      assert( !fData.empty() && fDataPtr );
      assert( !fDataError.empty() && fDataErrorPtr );
      assert( fDataErrorHigh.empty() && !fDataErrorHighPtr );
      assert( fDataErrorLow.empty() && !fDataErrorLowPtr );
      assert( fCoordErrors.size() == fDim );
      assert( fCoordErrorsPtr.size() == fDim );

      fData[ fNPoints ] = val;

      for( unsigned int i=0; i<fDim; i++ )
      {
        assert( &fCoordErrors[i].front() == fCoordErrorsPtr[i] );

        fCoordErrors[i][ fNPoints ] = ex[i];
      }

      fDataError[ fNPoints ] = eval;

      FitData::Add( x );
    }

    /**
      add multi-dim coordinate data with both error in coordinates and value
    */
    void BinData::Add( const double* x, double val, const double* ex, double elval, double ehval )
    {
      assert( kAsymError == fErrorType );

      assert( !fData.empty() && fDataPtr );
      assert( !fDataErrorHigh.empty() && fDataErrorHighPtr );
      assert( !fDataErrorLow.empty() && fDataErrorLowPtr );
      assert( fDataError.empty() && !fDataErrorPtr );
      assert( fCoordErrors.size() == fDim );
      assert( fCoordErrorsPtr.size() == fDim );

      fData[ fNPoints ] = val;

      for( unsigned int i=0; i<fDim; i++ )
      {
        assert( &fCoordErrors[i].front() == fCoordErrorsPtr[i] );

        fCoordErrors[i][ fNPoints ] = ex[i];
      }

      fDataErrorLow[ fNPoints ] = elval;
      fDataErrorHigh[ fNPoints ] = ehval;

      FitData::Add( x );
    }


    /**
       add the bin width data, a pointer to an array with the bin upper edge information.
       This is needed when fitting with integral options
       The information is added for the previously inserted point.
       BinData::Add  must be called before
    */
    void BinData::AddBinUpEdge( const double* xup )
    {
      if ( fBinEdge.empty() )
        InitBinEdge();

      assert( fBinEdge.size() == fDim );

      for ( unsigned int i=0; i<fDim; i++ )
      {
        fBinEdge[i].push_back( xup[i] );

        // check that is consistent with number of points added in the data
        assert( fNPoints == fBinEdge[i].size() );
      }

      // compute the bin volume
      const double* xlow = Coords( fNPoints-1 );

      double binVolume = 1.0;
      for ( unsigned int j = 0; j < fDim; j++ )
      {
        binVolume *= ( xup[j] - xlow[j] );
      }

      // store the minimum bin volume found as  reference for future normalizations
      if ( fNPoints == 1 )
        fRefVolume = binVolume;
      else if ( binVolume < fRefVolume )
        fRefVolume = binVolume;
    }


    void BinData::InitDataVector ()
    {
      fData.resize( fMaxPoints );
      fDataPtr = &fData.front();
    }

    void BinData::InitializeErrors()
    {
      assert( kValueError == fErrorType || kCoordError == fErrorType ||
        kAsymError == fErrorType || kNoError == fErrorType );

      if ( fpTmpCoordErrorVector )
      {
        delete[] fpTmpCoordErrorVector;
        fpTmpCoordErrorVector = NULL;
      }

      if ( kNoError == fErrorType )
      {
        fCoordErrors.clear();
        fCoordErrorsPtr.clear();

        fDataErrorHigh.clear();
        fDataErrorHighPtr = NULL;

        fDataErrorLow.clear();
        fDataErrorLowPtr = NULL;

        fDataError.clear();
        fDataErrorPtr = NULL;

        return;
      }

      if ( kCoordError == fErrorType || kAsymError == fErrorType )
      {
        fCoordErrorsPtr.resize( fDim );
        fCoordErrors.resize( fDim );
        for( unsigned int i=0; i < fDim; i++ )
        {
          fCoordErrors[i].resize( fMaxPoints );

          fCoordErrorsPtr[i] = &fCoordErrors[i].front();
        }

        fpTmpCoordErrorVector = new double[fDim];
      }
      else
      {
        fCoordErrors.clear();
        fCoordErrorsPtr.clear();
      }

      if ( kValueError == fErrorType || kCoordError == fErrorType )
      {
        fDataError.resize( fMaxPoints );
        fDataErrorPtr = &fDataError.front();

        fDataErrorHigh.clear();
        fDataErrorHighPtr = NULL;
        fDataErrorLow.clear();
        fDataErrorLowPtr = NULL;
      }
      else if ( fErrorType == kAsymError )
      {
        fDataErrorHigh.resize( fMaxPoints );
        fDataErrorHighPtr = &fDataErrorHigh.front();

        fDataErrorLow.resize( fMaxPoints );
        fDataErrorLowPtr = &fDataErrorLow.front();

        fDataError.clear();
        fDataErrorPtr = NULL;
      }
      else
      {
        assert(false);
      }
    }

    void BinData::InitBinEdge()
    {
      fBinEdge.resize( fDim );

      for( unsigned int i=0; i<fDim; i++ )
      {
        fBinEdge[i].reserve( fMaxPoints );
      }

      if ( fpTmpBinEdgeVector )
      {
        delete[] fpTmpBinEdgeVector;
        fpTmpBinEdgeVector = NULL;
      }

      fpTmpBinEdgeVector = new double[ fDim ];
    }

    void BinData::UnWrap( )
    {
      assert( fWrapped );
      assert( kValueError == fErrorType || kCoordError == fErrorType ||
        kAsymError == fErrorType || kNoError == fErrorType );
      assert( fDataError.empty() || &fDataError.front() == fDataErrorPtr );
      assert( fDataErrorHigh.empty() || &fDataErrorHigh.front() == fDataErrorHighPtr );
      assert( fDataErrorLow.empty() || &fDataErrorLow.front() == fDataErrorLowPtr );
      assert( fDataErrorLow.empty() == fDataErrorHigh.empty() );

      assert( fData.empty() );
      assert( fDataPtr );

      fData.resize( fNPoints );
      std::copy( fDataPtr, fDataPtr + fNPoints, fData.begin() );
      fDataPtr = &fData.front();

      for ( unsigned int i=0; i < fDim; i++ )
      {
        assert( fCoordErrorsPtr[i] );
        assert( fCoordErrors.empty() || &fCoordErrors[i].front() == fCoordErrorsPtr[i] );
      }

      if( kValueError == fErrorType || kCoordError == fErrorType )
      {
        assert( fDataError.empty() );
        assert( fDataErrorPtr );

        fDataError.resize( fNPoints );
        std::copy( fDataErrorPtr, fDataErrorPtr + fNPoints, fDataError.begin() );
        fDataErrorPtr = &fDataError.front();
      }

      if ( kValueError == fErrorType )
      {
        for ( unsigned int i=0; i < fNPoints; i++ )
        {
          fDataError[i] = 1.0 / fDataError[i];
        }
      }

      if ( kCoordError == fErrorType || kAsymError == fErrorType )
      {
        fCoordErrors.resize( fDim );
        for( unsigned int i=0; i < fDim; i++ )
        {
          assert( fCoordErrorsPtr[i] );
          fCoordErrors[i].resize( fNPoints );
          std::copy( fCoordErrorsPtr[i], fCoordErrorsPtr[i] + fNPoints, fCoordErrors[i].begin() );
          fCoordErrorsPtr[i] = &fCoordErrors[i].front();
        }

        if( kAsymError == fErrorType )
        {
          assert( fDataErrorHigh.empty() );
          assert( fDataErrorLow.empty() );
          assert( fDataErrorHighPtr && fDataErrorLowPtr );

          fDataErrorHigh.resize( fNPoints );
          fDataErrorLow.resize( fNPoints );
          std::copy( fDataErrorHighPtr, fDataErrorHighPtr + fNPoints, fDataErrorHigh.begin() );
          std::copy( fDataErrorLowPtr, fDataErrorLowPtr + fNPoints, fDataErrorLow.begin() );
          fDataErrorHighPtr = &fDataErrorHigh.front();
          fDataErrorLowPtr = &fDataErrorLow.front();
        }
      }

      FitData::UnWrap();
    }


  } // end namespace Fit

} // end namespace ROOT

