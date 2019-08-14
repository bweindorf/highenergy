// @(#)root/tmva/tmva/dnn:$Id$
// Author: Simon Pfreundschuh 12/08/16

/*************************************************************************
 * Copyright (C) 2016, Simon Pfreundschuh                                *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

/////////////////////////////////////////////////////////////
// CPU Buffer interface class for the generic data loader. //
/////////////////////////////////////////////////////////////

#include <vector>
#include <memory>
#include "TMVA/DNN/DataLoader.h"
#include "TMVA/DNN/Architectures/Cpu.h"
#include "Rtypes.h"
#include <iostream>

namespace TMVA
{
namespace DNN
{

//______________________________________________________________________________
template<typename AReal>
void TCpuBuffer<AReal>::TDestructor::operator()(AReal ** pointer)
{
   delete[] * pointer;
   delete[] pointer;
}

//______________________________________________________________________________
template<typename AReal>
TCpuBuffer<AReal>::TCpuBuffer(size_t size)
    : fSize(size), fOffset(0)
{
   AReal ** pointer = new AReal * [1];
   * pointer        = new AReal[size];
   fBuffer          = std::shared_ptr<AReal *>(pointer, fDestructor);
}

//______________________________________________________________________________
template<typename AReal>
TCpuBuffer<AReal> TCpuBuffer<AReal>::GetSubBuffer(size_t offset, size_t size)
{
   TCpuBuffer buffer = *this;
   buffer.fOffset = offset;
   buffer.fSize   = size;
   return buffer;
}

//______________________________________________________________________________
template<typename AReal>
void TCpuBuffer<AReal>::CopyFrom(TCpuBuffer & other)
{
   std::swap(*this->fBuffer, *other.fBuffer);
}

//______________________________________________________________________________
template<typename AReal>
void TCpuBuffer<AReal>::CopyTo(TCpuBuffer & other)
{
   std::swap(*this->fBuffer, *other.fBuffer);
}

//______________________________________________________________________________
template<>
void TDataLoader<MatrixInput_t, TCpu<Real_t>>::CopyInput(
    TCpuBuffer<Real_t> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   const TMatrixT<Real_t> &inputMatrix  = std::get<0>(fData);
   size_t n = inputMatrix.GetNcols();

   for (size_t i = 0; i < batchSize; i++) {
      size_t sampleIndex = *sampleIterator;
      for (size_t j = 0; j < n; j++) {
         size_t bufferIndex = j * batchSize + i;
         buffer[bufferIndex] = static_cast<Real_t>(inputMatrix(sampleIndex, j));
      }
      sampleIterator++;
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<MatrixInput_t, TCpu<Real_t>>::CopyOutput(
    TCpuBuffer<Real_t> & buffer,
    IndexIterator_t sampleIterator,
    size_t batchSize)
{
   const TMatrixT<Real_t> &outputMatrix  = std::get<1>(fData);
   size_t n = outputMatrix.GetNcols();

   for (size_t i = 0; i < batchSize; i++) {
      size_t sampleIndex = *sampleIterator;
      for (size_t j = 0; j < n; j++) {
         size_t bufferIndex = j * batchSize + i;
         buffer[bufferIndex] = static_cast<Real_t>(outputMatrix(sampleIndex, j));
      }
      sampleIterator++;
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<MatrixInput_t, TCpu<Double_t>>::CopyInput(
    TCpuBuffer<Double_t> & buffer,
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
void TDataLoader<MatrixInput_t, TCpu<Double_t>>::CopyOutput(
    TCpuBuffer<Double_t> & buffer,
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
void TDataLoader<TMVAInput_t, TCpu<Double_t>>::CopyInput(
    TCpuBuffer<Double_t> & buffer,
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
void TDataLoader<TMVAInput_t, TCpu<Double_t>>::CopyOutput(
    TCpuBuffer<Double_t> & buffer,
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
            buffer[bufferIndex] = static_cast<Real_t>(event->GetTarget(j));
         }
      }
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<TMVAInput_t, TCpu<Real_t>>::CopyInput(
    TCpuBuffer<Real_t> & buffer,
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
         buffer[bufferIndex] = static_cast<Real_t>(event->GetValue(j));
      }
   }
}

//______________________________________________________________________________
template<>
void TDataLoader<TMVAInput_t, TCpu<Real_t>>::CopyOutput(
    TCpuBuffer<Real_t> & buffer,
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
            buffer[bufferIndex] = static_cast<Real_t>(event->GetTarget(j));
         }
      }
   }
}

// Explicit instantiations.
template class TCpuBuffer<Double_t>;
template class TCpuBuffer<Real_t>;

} // namespace DNN
} // namespace TMVA


