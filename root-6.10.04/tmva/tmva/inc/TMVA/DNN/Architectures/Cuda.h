// @(#)root/tmva/tmva/dnn:$Id$
// Author: Simon Pfreundschuh 05/07/16

/*************************************************************************
 * Copyright (C) 2016, Simon Pfreundschuh                                *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

///////////////////////////////////////////////////////////////////
// Definition of the TCuda architecture class, which provides an //
// implementation of the low-level functionality for neural      //
// networks for the CUDA computing architectures.                //
///////////////////////////////////////////////////////////////////

#ifndef TMVA_DNN_ARCHITECTURES_CUDA
#define TMVA_DNN_ARCHITECTURES_CUDA

#include "cuda.h"
#include "Cuda/CudaBuffers.h"
#include "Cuda/CudaMatrix.h"
#include "TMVA/DNN/DataLoader.h"
#include <utility>

namespace TMVA
{
namespace DNN
{

/** The TCuda architecture class.
 *
 * Low-level interface class for CUDA computing architectures. Contains as
 * public types the declaration of the scalar, matrix and buffer types
 * for this architecture as well as the remaining functions in the low-level
 * interface in the form of static members.
 */
template<typename AFloat = Real_t>
class TCuda
{

public:

    using Scalar_t       = AFloat;
    using Matrix_t       = TCudaMatrix<AFloat>;
    using DeviceBuffer_t = TCudaDeviceBuffer<AFloat>;
    using HostBuffer_t   = TCudaHostBuffer<AFloat>;

   //____________________________________________________________________________
   //
   // Propagation
   //____________________________________________________________________________

   /** @name Forward Propagation
    * Low-level functions required for the forward propagation of activations
    * through the network.
    */
   ///@{
   /** Matrix-multiply \p input with the transpose of \pweights and
    *  write the results into \p output. */
   static void MultiplyTranspose(TCudaMatrix<AFloat> &output,
                                 const TCudaMatrix<AFloat> &input,
                                 const TCudaMatrix<AFloat> &weights);
   /** Add the vectors biases row-wise to the matrix output */
   static void AddRowWise(TCudaMatrix<AFloat> &output,
                          const TCudaMatrix<AFloat> &biases);
   ///@}

   /** @name Backward Propagation
    * Low-level functions required for the forward propagation of activations
    * through the network.
    */
   ///@{
   /** Perform the complete backward propagation step. If the provided
    *  \p activationGradientsBackward matrix is not empty, compute the
    *  gradients of the objective function with respect to the activations
    *  of the previous layer (backward direction).
    *  Also compute the weight and the bias gradients. Modifies the values
    *  in \p df and thus produces only a valid result, if it is applied the
    *  first time after the corresponding forward propagation has been per-
    *  formed. */
   static void Backward(TCudaMatrix<AFloat> & activationGradientsBackward,
                        TCudaMatrix<AFloat> & weightGradients,
                        TCudaMatrix<AFloat> & biasGradients,
                        TCudaMatrix<AFloat> & df,
                        const TCudaMatrix<AFloat> & activationGradients,
                        const TCudaMatrix<AFloat> & weights,
                        const TCudaMatrix<AFloat> & activationBackward);
   /** Adds a the elements in matrix B scaled by c to the elements in
    *  the matrix A. This is required for the weight update in the gradient
    *  descent step.*/
   static void ScaleAdd(TCudaMatrix<AFloat> & A,
                        const TCudaMatrix<AFloat> & B,
                        Scalar_t beta = 1.0);
   /** Copy the elements of matrix A into matrix B. */
   static void Copy(TCudaMatrix<AFloat> & B,
                    const TCudaMatrix<AFloat> & A);
   ///@}

   //____________________________________________________________________________
   //
   // Activation Functions
   //____________________________________________________________________________

   /** @name Activation Functions
    * For each activation function, the low-level interface contains two routines.
    * One that applies the acitvation function to a matrix and one that evaluate
    * the derivatives of the activation function at the elements of a given matrix
    * and writes the results into the result matrix.
    */
   ///@{
   static void Identity(TCudaMatrix<AFloat> & B);
   static void IdentityDerivative(TCudaMatrix<AFloat> & B,
                                  const TCudaMatrix<AFloat> & A);

   static void Relu(TCudaMatrix<AFloat> & B);
   static void ReluDerivative(TCudaMatrix<AFloat> & B,
                              const TCudaMatrix<AFloat> & A);

   static void Sigmoid(TCudaMatrix<AFloat> & B);
   static void SigmoidDerivative(TCudaMatrix<AFloat> & B,
                                 const TCudaMatrix<AFloat> & A);

   static void Tanh(TCudaMatrix<AFloat> & B);
   static void TanhDerivative(TCudaMatrix<AFloat> & B,
                              const TCudaMatrix<AFloat> & A);

   static void SymmetricRelu(TCudaMatrix<AFloat> & B);
   static void SymmetricReluDerivative(TCudaMatrix<AFloat> & B,
                                       const TCudaMatrix<AFloat> & A);

   static void SoftSign(TCudaMatrix<AFloat> & B);
   static void SoftSignDerivative(TCudaMatrix<AFloat> & B,
                                  const TCudaMatrix<AFloat> & A);

   static void Gauss(TCudaMatrix<AFloat> & B);
   static void GaussDerivative(TCudaMatrix<AFloat> & B,
                               const TCudaMatrix<AFloat> & A);
   ///@}

   //____________________________________________________________________________
   //
   // Loss Functions
   //____________________________________________________________________________

   /** @name Loss Functions
    * Loss functions compute a scalar value given the \p output of the network
    * for a given training input and the expected network prediction \p Y that
    * quantifies the quality of the prediction. For each function also a routing
    * that computes the gradients (suffixed by Gradients) must be provided for
    * the starting of the backpropagation algorithm.
    */
   ///@{

   static AFloat MeanSquaredError(const TCudaMatrix<AFloat> &Y,
                                  const TCudaMatrix<AFloat> &output);
   static void MeanSquaredErrorGradients(TCudaMatrix<AFloat> & dY,
                                         const TCudaMatrix<AFloat> &Y,
                                         const TCudaMatrix<AFloat> &output);

    /** Sigmoid transformation is implicitly applied, thus \p output should
     *  hold the linear activations of the last layer in the net. */
   static AFloat CrossEntropy(const TCudaMatrix<AFloat> &Y,
                              const TCudaMatrix<AFloat> &output);

   static void CrossEntropyGradients(TCudaMatrix<AFloat> & dY,
                                     const TCudaMatrix<AFloat> & Y,
                                     const TCudaMatrix<AFloat> & output);

    /** Softmax transformation is implicitly applied, thus \p output should
     *  hold the linear activations of the last layer in the net. */
   static AFloat SoftmaxCrossEntropy(const TCudaMatrix<AFloat> &Y,
                                     const TCudaMatrix<AFloat> &output);
   static void SoftmaxCrossEntropyGradients(TCudaMatrix<AFloat> & dY,
                                            const TCudaMatrix<AFloat> & Y,
                                            const TCudaMatrix<AFloat> & output);
   ///@}

   //____________________________________________________________________________
   //
   // Output Functions
   //____________________________________________________________________________

   /** @name Output Functions
    * Output functions transform the activations \p output of the
    * output layer in the network to a valid prediction \p YHat for
    * the desired usage of the network, e.g.  the identity function
    * for regression or the sigmoid transformation for two-class
    * classification.
    */
   ///@{
   static void Sigmoid(TCudaMatrix<AFloat> &YHat,
                       const TCudaMatrix<AFloat> & );
   static void Softmax(TCudaMatrix<AFloat> &YHat,
                       const TCudaMatrix<AFloat> & );
   ///@}

   //____________________________________________________________________________
   //
   // Regularization
   //____________________________________________________________________________

   /** @name Regularization
    * For each regularization type two functions are required, one named
    * <tt><Type>Regularization</tt> that evaluates the corresponding
    * regularization functional for a given weight matrix and the
    * <tt>Add<Type>RegularizationGradients</tt>, that adds the regularization
    * component in the gradients to the provided matrix.
    */
   ///@{

   static AFloat L1Regularization(const TCudaMatrix<AFloat> & W);
   static void AddL1RegularizationGradients(TCudaMatrix<AFloat> & A,
                                            const TCudaMatrix<AFloat> & W,
                                            AFloat weightDecay);

   static AFloat L2Regularization(const TCudaMatrix<AFloat> & W);
   static void AddL2RegularizationGradients(TCudaMatrix<AFloat> & A,
                                            const TCudaMatrix<AFloat> & W,
                                            AFloat weightDecay);
   ///@}

   //____________________________________________________________________________
   //
   // Initialization
   //____________________________________________________________________________

   /** @name Initialization
    * For each initialization method, one function in the low-level interface
    * is provided. The naming scheme is <p>Initialize<Type></p> for a given
    * initialization method Type.
    */
   ///@{

   static void InitializeGauss(TCudaMatrix<AFloat> & A);
   static void InitializeUniform(TCudaMatrix<AFloat> & A);
   static void InitializeIdentity(TCudaMatrix<AFloat> & A);
   static void InitializeZero(TCudaMatrix<AFloat> & A);

   ///@}

   //____________________________________________________________________________
   //
   // Dropout
   //____________________________________________________________________________

   /** @name Dropout
    */
   ///@{

   /** Apply dropout with activation probability \p p to the given
    *  matrix \p A and scale the result by reciprocal of \p p. */
   static void Dropout(TCudaMatrix<AFloat> & A, AFloat p);

   ///@}

   //____________________________________________________________________________
   //
   // Additional Arithmetic Functions
   //____________________________________________________________________________

   /** @name Additional Arithmetic Functions
    *
    * Additional arithmetic on CUDA matrices  used to implement the low-level
    * interface.
    */
   ///@{

   /** Standard multiplication of two matrices \p A and \p B with the result being
    *  written into C.
    */
   static void Multiply(TCudaMatrix<AFloat> & C,
                        const TCudaMatrix<AFloat> & A,
                        const TCudaMatrix<AFloat> & B);
   /** Matrix multiplication of two matrices \p A and \p B^T (transposed) with the
    *  result being written into C.
    */
   static void TransposeMultiply(TCudaMatrix<AFloat> & output,
                                 const TCudaMatrix<AFloat> & input,
                                 const TCudaMatrix<AFloat> & Weights);
   /** In-place Hadamard (element-wise) product of matrices \p A and \p B
    *  with the result being written into \p A.
    */
   static void Hadamard(TCudaMatrix<AFloat> & A, const TCudaMatrix<AFloat> & B);

   /** Sum columns of (m x n) matrixx \p A and write the results into the first
    * m elements in \p A.
    */
   static void SumColumns(TCudaMatrix<AFloat> & B, const TCudaMatrix<AFloat> & A);

   /** Compute the sum of all elements in \p A */
   static AFloat Sum(const TCudaMatrix<AFloat> &A);
};

} // namespace DNN
} // namespace TMVA

#endif
