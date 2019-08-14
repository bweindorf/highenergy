// @(#)root/tmva/tmva/dnn:$Id$
// Author: Simon Pfreundschuh 07/08/16

/*************************************************************************
 * Copyright (C) 2016, Simon Pfreundschuh                                *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

////////////////////////////////////////////////////////////////////////
// Implementation of device and host buffers for CUDA architectures.  //
////////////////////////////////////////////////////////////////////////

#include "TMVA/DNN/DataLoader.h"
#include "TMVA/DNN/Architectures/Cuda.h"
#include "TMVA/DNN/Architectures/Cuda/CudaBuffers.h"
#include "cuda_runtime.h"
#include <iostream>

namespace TMVA {
namespace DNN  {

//
// TCudaHostBuffer
//______________________________________________________________________________
template<typename AFloat>
void TCudaHostBuffer<AFloat>::TDestructor::operator()(AFloat ** devicePointer)
{
   cudaFreeHost(*devicePointer);
   delete[] devicePointer;
}

//______________________________________________________________________________
template<typename AFloat>
TCudaHostBuffer<AFloat>::TCudaHostBuffer(size_t size)
    : fOffset(0), fSize(size), fComputeStream(0), fDestructor()
{
   AFloat ** pointer = new AFloat * [1];
   cudaMallocHost(pointer, size * sizeof(AFloat));
   fHostPointer = std::shared_ptr<AFloat *>(pointer, fDestructor);
}

//______________________________________________________________________________
template<typename AFloat>
TCudaHostBuffer<AFloat>::operator AFloat * () const
{
   return *fHostPointer + fOffset;
}

//______________________________________________________________________________
template<typename AFloat>
TCudaHostBuffer<AFloat> TCudaHostBuffer<AFloat>::GetSubBuffer(size_t offset,
                                                              size_t size)
{
   TCudaHostBuffer buffer = *this;
   buffer.fOffset         = offset;
   buffer.fSize           = size;
   return buffer;
}

//
// TCudaDevicePointer
//______________________________________________________________________________
template<typename AFloat>
void TCudaDeviceBuffer<AFloat>::TDestructor::operator()(AFloat ** devicePointer)
{
   cudaFree(*devicePointer);
   delete[] devicePointer;
}

//______________________________________________________________________________
template<typename AFloat>
TCudaDeviceBuffer<AFloat>::TCudaDeviceBuffer(size_t size)
    : fOffset(0), fSize(size), fDestructor()
{
   AFloat ** pointer = new AFloat * [1];
   cudaMalloc(pointer, size * sizeof(AFloat));
   fDevicePointer = std::shared_ptr<AFloat *>(pointer, fDestructor);
   cudaStreamCreate(&fComputeStream);
}

//______________________________________________________________________________
template<typename AFloat>
TCudaDeviceBuffer<AFloat>::TCudaDeviceBuffer(size_t size,
                                                 cudaStream_t stream)
    : fOffset(0), fSize(size), fComputeStream(stream), fDestructor()
{
   AFloat ** pointer = new AFloat * [1];
   cudaMalloc(pointer, size * sizeof(AFloat));
   fDevicePointer = std::shared_ptr<AFloat *>(pointer, fDestructor);
}

//______________________________________________________________________________
template<typename AFloat>
TCudaDeviceBuffer<AFloat>::TCudaDeviceBuffer(AFloat * devicePointer,
                                                 size_t size,
                                                 cudaStream_t stream)
    : fOffset(0), fSize(size), fComputeStream(stream), fDestructor()
{
   AFloat ** pointer = new AFloat * [1];
   *pointer       = devicePointer;
   fDevicePointer = std::shared_ptr<AFloat *>(pointer, fDestructor);
}

//______________________________________________________________________________
template<typename AFloat>
TCudaDeviceBuffer<AFloat> TCudaDeviceBuffer<AFloat>::GetSubBuffer(size_t offset,
                                                                  size_t size)
{
   TCudaDeviceBuffer buffer = *this;
   buffer.fOffset           = offset;
   buffer.fSize             = size;
   return buffer;
}

//______________________________________________________________________________
template<typename AFloat>
TCudaDeviceBuffer<AFloat>::operator AFloat * () const
{
    return *fDevicePointer + fOffset;
}

//______________________________________________________________________________
template<typename AFloat>
void TCudaDeviceBuffer<AFloat>::CopyFrom(const TCudaHostBuffer<AFloat> &buffer) const
{
   cudaStreamSynchronize(fComputeStream);
   cudaMemcpyAsync(*this, buffer, fSize * sizeof(AFloat),
                   cudaMemcpyHostToDevice, fComputeStream);
}

//______________________________________________________________________________
template<typename AFloat>
void TCudaDeviceBuffer<AFloat>::CopyTo(const TCudaHostBuffer<AFloat> &buffer) const
{
   cudaMemcpyAsync(*this, buffer, fSize * sizeof(AFloat),
                   cudaMemcpyDeviceToHost, fComputeStream);
   buffer.fComputeStream = fComputeStream;
}

//______________________________________________________________________________
template<>
void TDataLoader<MatrixInput_t, TCuda<float>>::CopyInput(
    TCudaHostBuffer<float> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   const TMatrixT<Double_t> &inputMatrix  = std::get<0>(fData);
   size_t n = inputMatrix.GetNcols();

   for (size_t i = 0; i < batchSize; i++) {
      size_t sampleIndex = *sampleIterator;
      for (size_t j = 0; j < n; j++) {
         size_t bufferIndex = j * batchSize + i;
         buffer[bufferIndex] = static_cast<float>(inputMatrix(sampleIndex, j));
      }
      sampleIterator++;
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<MatrixInput_t, TCuda<float>>::CopyOutput(
    TCudaHostBuffer<float> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   const TMatrixT<Double_t> &outputMatrix  = std::get<1>(fData);
   size_t n = outputMatrix.GetNcols();

   for (size_t i = 0; i < batchSize; i++) {
      size_t sampleIndex = *sampleIterator;
      for (size_t j = 0; j < n; j++) {
         size_t bufferIndex = j * batchSize + i;
         buffer[bufferIndex] = static_cast<float>(outputMatrix(sampleIndex, j));
      }
      sampleIterator++;
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<TMVAInput_t, TCuda<float>>::CopyInput(
    TCudaHostBuffer<float> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   Event * event  = fData.front();
   size_t n  = event->GetNVariables();

   // Copy input variables.

   for (size_t i = 0; i < batchSize; i++) {
      size_t sampleIndex = * sampleIterator++;
      event = fData[sampleIndex];
      for (size_t j = 0; j < n; j++) {
         size_t bufferIndex = j * batchSize + i;
         buffer[bufferIndex] = static_cast<float>(event->GetValue(j));
      }
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<TMVAInput_t, TCuda<float>>::CopyOutput(
    TCudaHostBuffer<float> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   Event * event  = fData.front();
   size_t n       = buffer.GetSize() / batchSize;

   // Copy target(s).

   for (size_t i = 0; i < batchSize; i++) {
       size_t sampleIndex = * sampleIterator++;
       event = fData[sampleIndex];
      for (size_t j = 0; j < n; j++) {
         // Copy output matrices.
         size_t bufferIndex = j * batchSize + i;
         // Classification
         if (event->GetNTargets() == 0) {
            if (n == 1) {
               // Binary.
               buffer[bufferIndex] = (event->GetClass() == 0) ? 1.0 : 0.0;
            } else {
               // Multiclass.
               buffer[bufferIndex] = 0.0;
               if (j == event->GetClass()) {
                  buffer[bufferIndex] = 1.0;
               }
            }
         } else {
            buffer[bufferIndex] = static_cast<float>(event->GetTarget(j));
         }
      }
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<MatrixInput_t, TCuda<double>>::CopyInput(
    TCudaHostBuffer<double> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   const TMatrixT<Double_t> &inputMatrix  = std::get<0>(fData);
   size_t n = inputMatrix.GetNcols();

   for (size_t i = 0; i < batchSize; i++) {
      size_t sampleIndex = *sampleIterator;
      for (size_t j = 0; j < n; j++) {
         size_t bufferIndex = j * batchSize + i;
         buffer[bufferIndex] = inputMatrix(sampleIndex, j);
      }
      sampleIterator++;
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<MatrixInput_t, TCuda<double>>::CopyOutput(
    TCudaHostBuffer<double> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   const TMatrixT<Double_t> &outputMatrix  = std::get<1>(fData);
   size_t n = outputMatrix.GetNcols();

   for (size_t i = 0; i < batchSize; i++) {
      size_t sampleIndex = *sampleIterator;
      for (size_t j = 0; j < n; j++) {
         size_t bufferIndex = j * batchSize + i;
         buffer[bufferIndex] = outputMatrix(sampleIndex, j);
      }
      sampleIterator++;
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<TMVAInput_t, TCuda<double>>::CopyInput(
    TCudaHostBuffer<double> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   Event * event  = fData.front();
   size_t n  = event->GetNVariables();

   // Copy input variables.

   for (size_t i = 0; i < batchSize; i++) {
      size_t sampleIndex = * sampleIterator++;
      event = fData[sampleIndex];
      for (size_t j = 0; j < n; j++) {
         size_t bufferIndex = j * batchSize + i;
         buffer[bufferIndex] = event->GetValue(j);
      }
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<TMVAInput_t, TCuda<double>>::CopyOutput(
    TCudaHostBuffer<double> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   Event * event  = fData.front();
   size_t n       = buffer.GetSize() / batchSize;

   // Copy target(s).

   for (size_t i = 0; i < batchSize; i++) {
       size_t sampleIndex = * sampleIterator++;
       event = fData[sampleIndex];
      for (size_t j = 0; j < n; j++) {
         // Copy output matrices.
         size_t bufferIndex = j * batchSize + i;
         // Classification
         if (event->GetNTargets() == 0) {
               // Binary.
            if (n == 1) {
               buffer[bufferIndex] = (event->GetClass() == 0) ? 1.0 : 0.0;
            } else {
               // Multiclass.
               buffer[bufferIndex] = 0.0;
               if (j == event->GetClass()) {
                  buffer[bufferIndex] = 1.0;
               }
            }
         } else {
            buffer[bufferIndex] = event->GetTarget(j);
         }
      }
   }
}

// Explicit Instantiations.

template class TCudaDeviceBuffer<float>;
template class TCudaDeviceBuffer<double>;

template class TCudaHostBuffer<float>;
template class TCudaHostBuffer<double>;

template class TDataLoader<MatrixInput_t, TCuda<float>>;
template class TDataLoader<TMVAInput_t,   TCuda<float>>;
template class TDataLoader<MatrixInput_t, TCuda<double>>;
template class TDataLoader<TMVAInput_t,   TCuda<double>>;

} // TMVA
} // DNN
