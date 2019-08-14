// @(#)root/tmva/tmva/dnn:$Id$
// Author: Simon Pfreundschuh 20/07/16

/*************************************************************************
 * Copyright (C) 2016, Simon Pfreundschuh                                *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

///////////////////////////////////////////////////////////////////
// Declarations of the BLAS functions used for the forward and   //
// backward propagation of activation through neural networks on //
// CPUs.                                                         //
///////////////////////////////////////////////////////////////////

#ifndef TMVA_DNN_ARCHITECTURES_CPU_BLAS
#define TMVA_DNN_ARCHITECTURES_CPU_BLAS

#include <iostream>

// External Library Routines
//____________________________________________________________________________
extern "C" void saxpy_(const int * n, const float * alpha, const float * x,
                       const int * incx, float * y,   const int * incy);
extern "C" void daxpy_(const int * n, const double * alpha, const double * x,
                       const int * incx, double * y, const int * incy);
extern "C" void sger_(const int * m, const int * n, const float * alpha,
                      const float * x, const int * incx,
                      const float * y, const int * incy,
                      float * A, const int * lda);
extern "C" void dger_(const int * m, const int * n, const double * alpha,
                      const double * x, const int * incx,
                      const double * y, const int * incy,
                      double * A, const int * lda);
extern "C" void sgemv_(const char * trans, const int * m, const int * n,
                       const float * alpha,  const float * A, const int * lda,
                       const float * x, const int * incx,
                       const float * beta, float * y, const int * incy);
extern "C" void dgemv_(const char * trans, const int * m, const int * n,
                       const double * alpha,  const double * A, const int * lda,
                       const double * x, const int * incx,
                       const double * beta, double * y, const int * incy);
extern "C" void dgemm_(const char * transa, const char * transb,
                       const int * m, const int * n, const int * k,
                       const double * alpha, const double * A, const int * lda,
                       const double * B, const int * ldb, const double * beta,
                       double * C, const int * ldc);
extern "C" void sgemm_(const char * transa, const char * transb,
                       const int * m, const int * n, const int * k,
                       const float * alpha, const float * A, const int * lda,
                       const float * B, const int * ldb, const float * beta,
                       float * C, const int * ldc);

namespace TMVA
{
namespace DNN
{
namespace Blas
{

// Type-Generic Wrappers
//____________________________________________________________________________
/** Add the vector \p x scaled by \p alpha to \p y scaled by \beta */
template <typename Real_t>
inline void Axpy(const int * n, const Real_t * alpha,
                 const Real_t * x, const int * incx,
                 Real_t * y, const int * incy);

/** Multiply the vector \p x with the matrix \p A and store the result in \p y. */
template <typename Real_t>
inline void Gemv(const char *trans, const int * m, const int * n,
                 const Real_t * alpha, const Real_t * A, const int * lda,
                 const Real_t * x, const int * incx,
                 const Real_t * beta, Real_t * y, const int * incy);

/** Multiply the matrix \p A with the matrix \p B and store the result in \p C. */
template <typename Real_t>
inline void Gemm(const char *transa, const char *transb,
                 const int * m, const int * n, const int* k,
                 const Real_t * alpha, const Real_t * A, const int * lda,
                 const Real_t * B, const int * ldb, const Real_t * beta,
                 Real_t * C, const int * ldc);

/** Add the outer product of \p x and \p y to the matrix \p A. */
template <typename Real_t>
inline void Ger(const int * m, const int * n, const Real_t * alpha,
                const Real_t * x, const int * incx,
                const Real_t * y, const int * incy,
                Real_t * A, const int * lda);

// Specializations
//____________________________________________________________________________
template<>
inline void Axpy<double>(const int * n, const double * alpha,
                         const double * x, const int * incx,
                         double * y, const int * incy)
{
    daxpy_(n, alpha, x, incx, y, incy);
}

template<>
inline void Axpy<float>(const int * n, const float * alpha,
                        const float * x, const int * incx,
                        float * y, const int * incy)
{
   saxpy_(n, alpha, x, incx, y, incy);
}

template<>
inline void Gemv<double>(const char *trans, const int * m, const int * n,
                         const double * alpha, const double * A, const int * lda,
                         const double * x, const int * incx,
                         const double * beta, double * y, const int * incy)
{
   dgemv_(trans, m, n, alpha, A, lda, x, incx, beta, y, incy);
}

template<>
inline void Gemv<float>(const char *trans, const int * m, const int * n,
                        const float * alpha, const float * A, const int * lda,
                        const float * x, const int * incx,
                        const float * beta, float * y, const int * incy)
{
   sgemv_(trans, m, n, alpha, A, lda, x, incx, beta, y, incy);
}

template<>
inline void Gemm<double>(const char *transa, const char *transb,
                         const int * m, const int * n, const int* k,
                         const double * alpha, const double * A, const int * lda,
                         const double * B, const int * ldb, const double * beta,
                         double * C, const int * ldc)
{
    dgemm_(transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

template<>
inline void Gemm<float>(const char *transa, const char *transb,
                        const int * m, const int * n, const int* k,
                        const float * alpha, const float * A, const int * lda,
                        const float * B, const int * ldb, const float * beta,
                        float * C, const int * ldc)
{
    sgemm_(transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

template <>
inline void Ger<double>(const int * m, const int * n, const double * alpha,
                        const double * x, const int * incx,
                        const double * y, const int * incy,
                        double * A, const int * lda)
{
   dger_(m, n, alpha, x, incx, y, incy, A, lda);
}

template <>
inline void Ger<float>(const int * m, const int * n, const float * alpha,
                       const float * x, const int * incx,
                       const float * y, const int * incy,
                       float * A, const int * lda)
{
   sger_(m, n, alpha, x, incx, y, incy, A, lda);
}

} // namespace Blas
} // namespace DNN
} // namespace TMVA

#endif
