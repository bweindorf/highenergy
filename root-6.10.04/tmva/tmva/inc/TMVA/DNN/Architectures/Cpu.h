// @(#)root/tmva/tmva/dnn:$Id$
// Author: Simon Pfreundschuh 05/07/16

/*************************************************************************
 * Copyright (C) 2016, Simon Pfreundschuh                                *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

 //////////////////////////////////////////////////////////////////
// Definition of the TCpu architecture, which provides a         //
 // multi-threaded CPU implementation of the low-level interface //
 // networks for Cpus using BLAS and Roots TThreadExecutor            //
 //////////////////////////////////////////////////////////////////

#ifndef TMVA_DNN_ARCHITECTURES_CPU
#define TMVA_DNN_ARCHITECTURES_CPU

#include "Cpu/CpuBuffer.h"
#include "Cpu/CpuMatrix.h"

namespace TMVA
{
namespace DNN
{

/** The TCpu architecture class.
 *
 * Low-level interface class for multi-threaded CPU architectures. Contains as
 * public types the declaration of the scalar, matrix and data loader types
 * for this architecture as well as the remaining functions in the low-level
 * interface in the form of static members.
 */
template<typename AReal = Real_t>
class TCpu
{
public:

   using Scalar_t       = AReal;
   using Matrix_t       = TCpuMatrix<AReal>;
   using HostBuffer_t   = TCpuBuffer<AReal>;
   using DeviceBuffer_t = TCpuBuffer<AReal>;

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
   static void MultiplyTranspose(TCpuMatrix<Scalar_t> &output,
                                 const TCpuMatrix<Scalar_t> &input,
                                 const TCpuMatrix<Scalar_t> &weights);
   /** Add the vectors biases row-wise to the matrix output */
   static void AddRowWise(TCpuMatrix<Scalar_t> &output,
                          const TCpuMatrix<Scalar_t> &biases);
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
   static void Backward(TCpuMatrix<Scalar_t> & activationGradientsBackward,
                        TCpuMatrix<Scalar_t> & weightGradients,
                        TCpuMatrix<Scalar_t> & biasGradients,
                        TCpuMatrix<Scalar_t> & df,
                        const TCpuMatrix<Scalar_t> & activationGradients,
                        const TCpuMatrix<Scalar_t> & weights,
                        const TCpuMatrix<Scalar_t> & activationBackward);
   /** Adds a the elements in matrix B scaled by c to the elements in
    *  the matrix A. This is required for the weight update in the gradient
    *  descent step.*/
   static void ScaleAdd(TCpuMatrix<Scalar_t> & A,
                        const TCpuMatrix<Scalar_t> & B,
                        Scalar_t beta = 1.0);

   static void Copy(TCpuMatrix<Scalar_t> & B,
                    const TCpuMatrix<Scalar_t> & A);
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
   static void IdentityDerivative(TCpuMatrix<Scalar_t> & B,
                                  const TCpuMatrix<Scalar_t> &A);

   static void Relu(TCpuMatrix<Scalar_t> & B);
   static void ReluDerivative(TCpuMatrix<Scalar_t> & B,
                              const TCpuMatrix<Scalar_t> & A);

   static void Sigmoid(TCpuMatrix<Scalar_t> & B);
   static void SigmoidDerivative(TCpuMatrix<Scalar_t> & B,
                                 const TCpuMatrix<Scalar_t> & A);

   static void Tanh(TCpuMatrix<Scalar_t> & B);
   static void TanhDerivative(TCpuMatrix<Scalar_t> & B,
                              const TCpuMatrix<Scalar_t> & A);

   static void SymmetricRelu(TCpuMatrix<Scalar_t> & B);
   static void SymmetricReluDerivative(TCpuMatrix<Scalar_t> & B,
                                       const TCpuMatrix<Scalar_t> & A);

   static void SoftSign(TCpuMatrix<Scalar_t> & B);
   static void SoftSignDerivative(TCpuMatrix<Scalar_t> & B,
                                  const TCpuMatrix<Scalar_t> & A);

   static void Gauss(TCpuMatrix<Scalar_t> & B);
   static void GaussDerivative(TCpuMatrix<Scalar_t> & B,
                               const TCpuMatrix<Scalar_t> & A);
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

   static Scalar_t MeanSquaredError(const TCpuMatrix<Scalar_t> &Y,
                                        const TCpuMatrix<Scalar_t> &output);
   static void MeanSquaredErrorGradients(TCpuMatrix<Scalar_t> & dY,
                                         const TCpuMatrix<Scalar_t> &Y,
                                         const TCpuMatrix<Scalar_t> &output);

    /** Sigmoid transformation is implicitly applied, thus \p output should
     *  hold the linear activations of the last layer in the net. */
   static Scalar_t CrossEntropy(const TCpuMatrix<Scalar_t> &Y,
                              const TCpuMatrix<Scalar_t> &output);

   static void CrossEntropyGradients(TCpuMatrix<Scalar_t> & dY,
                                     const TCpuMatrix<Scalar_t> & Y,
                                     const TCpuMatrix<Scalar_t> & output);

    /** Softmax transformation is implicitly applied, thus \p output should
     *  hold the linear activations of the last layer in the net. */
   static Scalar_t SoftmaxCrossEntropy(const TCpuMatrix<Scalar_t> &Y,
                                     const TCpuMatrix<Scalar_t> &output);
   static void SoftmaxCrossEntropyGradients(TCpuMatrix<Scalar_t> & dY,
                                            const TCpuMatrix<Scalar_t> & Y,
                                            const TCpuMatrix<Scalar_t> & output);
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
   static void Sigmoid(TCpuMatrix<Scalar_t> &YHat,
                        const TCpuMatrix<Scalar_t> & );
   static void Softmax(TCpuMatrix<Scalar_t> &YHat,
                       const TCpuMatrix<Scalar_t> & );
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

   static Scalar_t L1Regularization(const TCpuMatrix<Scalar_t> & W);
   static void AddL1RegularizationGradients(TCpuMatrix<Scalar_t> & A,
                                            const TCpuMatrix<Scalar_t> & W,
                                            Scalar_t weightDecay);

   static Scalar_t L2Regularization(const TCpuMatrix<Scalar_t> & W);
   static void AddL2RegularizationGradients(TCpuMatrix<Scalar_t> & A,
                                            const TCpuMatrix<Scalar_t> & W,
                                            Scalar_t weightDecay);
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

   static void InitializeGauss(TCpuMatrix<Scalar_t> & A);
   static void InitializeUniform(TCpuMatrix<Scalar_t> & A);
   static void InitializeIdentity(TCpuMatrix<Scalar_t> & A);
   static void InitializeZero(TCpuMatrix<Scalar_t> & A);

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
   static void Dropout(TCpuMatrix<Scalar_t> & A, Scalar_t p);

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
   static void Multiply(TCpuMatrix<Scalar_t> &C,
                        const TCpuMatrix<Scalar_t> &A,
                        const TCpuMatrix<Scalar_t> &B);
   /** Matrix multiplication of two matrices \p A and \p B^T (transposed) with the
    *  result being written into C.
    */
   static void TransposeMultiply(TCpuMatrix<Scalar_t> &output,
                                 const TCpuMatrix<Scalar_t> &input,
                                 const TCpuMatrix<Scalar_t> &Weights);
   /** In-place Hadamard (element-wise) product of matrices \p A and \p B
    *  with the result being written into \p A.
    */
   static void Hadamard(TCpuMatrix<Scalar_t> &A,
                        const TCpuMatrix<Scalar_t> &B);

   /** Sum columns of (m x n) matrixx \p A and write the results into the first
    * m elements in \p A.
    */
   static void SumColumns(TCpuMatrix<Scalar_t> &B,
                          const TCpuMatrix<Scalar_t> &A);

   /** Compute the sum of all elements in \p A */
   static Scalar_t Sum(const TCpuMatrix<Scalar_t> &A);

};

} // namespace DNN
} // namespace TMVA

#endif
