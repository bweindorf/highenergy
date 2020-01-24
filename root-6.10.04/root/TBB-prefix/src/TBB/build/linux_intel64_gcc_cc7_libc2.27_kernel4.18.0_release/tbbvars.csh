#!/bin/csh
setenv TBBROOT "/home/brandon/Projects/root-6.10.04/root/TBB-prefix/src/TBB" #
setenv tbb_bin "/home/brandon/Projects/root-6.10.04/root/TBB-prefix/src/TBB/build/linux_intel64_gcc_cc7_libc2.27_kernel4.18.0_release" #
if (! $?CPATH) then #
    setenv CPATH "${TBBROOT}/include" #
else #
    setenv CPATH "${TBBROOT}/include:$CPATH" #
endif #
if (! $?LIBRARY_PATH) then #
    setenv LIBRARY_PATH "${tbb_bin}" #
else #
    setenv LIBRARY_PATH "${tbb_bin}:$LIBRARY_PATH" #
endif #
if (! $?LD_LIBRARY_PATH) then #
    setenv LD_LIBRARY_PATH "${tbb_bin}" #
else #
    setenv LD_LIBRARY_PATH "${tbb_bin}:$LD_LIBRARY_PATH" #
endif #
 #
