#!/bin/bash
export TBBROOT="/home/brandon/Projects/root-6.10.04/root/TBB-prefix/src/TBB" #
tbb_bin="/home/brandon/Projects/root-6.10.04/root/TBB-prefix/src/TBB/build/linux_intel64_gcc_cc7_libc2.27_kernel4.18.0_debug" #
if [ -z "$CPATH" ]; then #
    export CPATH="${TBBROOT}/include" #
else #
    export CPATH="${TBBROOT}/include:$CPATH" #
fi #
if [ -z "$LIBRARY_PATH" ]; then #
    export LIBRARY_PATH="${tbb_bin}" #
else #
    export LIBRARY_PATH="${tbb_bin}:$LIBRARY_PATH" #
fi #
if [ -z "$LD_LIBRARY_PATH" ]; then #
    export LD_LIBRARY_PATH="${tbb_bin}" #
else #
    export LD_LIBRARY_PATH="${tbb_bin}:$LD_LIBRARY_PATH" #
fi #
 #
