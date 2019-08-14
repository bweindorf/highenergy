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

#ifndef TMVA_DNN_ARCHITECTURES_CPU_CPUBUFFER
#define TMVA_DNN_ARCHITECTURES_CPU_CPUBUFFER

#include "TMVA/DNN/DataLoader.h"
#include <vector>
#include <memory>

namespace TMVA
{
namespace DNN
{

/** TCpuBuffer
 *
 * Since the memory on the CPU is homogeneous, only one buffer class is required.
 * The host and device buffer classes are the same and copying between the host
 * and device buffer is achieved by simply swapping the memory pointers.
 *
 * Memory is handled as a shared pointer to a pointer of type AFloat, which is
 * the floating point type used for the implementation.
 *
 * Copying and assignment of TCpuBuffer objects performs only a shallow copy
 * meaning the underlying data is shared between those objects.
 *
 * \tparam AFloat The floating point type used for the computations.
 */
template<typename AFloat>
class TCpuBuffer
{
private:

   size_t fSize;
   size_t fOffset;
   std::shared_ptr<AFloat *> fBuffer;

   struct TDestructor
   {
       void operator()(AFloat ** pointer);
       friend TCpuBuffer;
   } fDestructor;

public:

   /** Construct buffer to hold \p size numbers of type \p AFloat.*/
    TCpuBuffer(size_t size);
    TCpuBuffer(const TCpuBuffer  &) = default;
    TCpuBuffer(      TCpuBuffer &&) = default;
    TCpuBuffer & operator=(const TCpuBuffer  &) = default;
    TCpuBuffer & operator=(      TCpuBuffer &&) = default;

    operator AFloat * () const {return (* fBuffer) + fOffset;}

    /** Return subbuffer of siez \p start starting at element \p offset. */
    TCpuBuffer GetSubBuffer(size_t offset, size_t start);

    AFloat & operator[](size_t i)       {return (*fBuffer.get())[fOffset + i];}
    AFloat   operator[](size_t i) const {return (*fBuffer.get())[fOffset + i];}

    /** Copy data from another buffer. No real copying is performed, only the
     *  data pointers are swapped. */
    void CopyFrom(TCpuBuffer &);
    /** Copy data to another buffer. No real copying is performed, only the
     *  data pointers are swapped. */
    void CopyTo(TCpuBuffer &);

    size_t GetSize() const {return fSize;}
};

} // namespace DNN
} // namespace TMVA

#endif

