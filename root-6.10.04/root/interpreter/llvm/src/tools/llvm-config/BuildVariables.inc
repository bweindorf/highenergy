//===-- BuildVariables.inc.in - llvm-config build variables -*- C++ -*-----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is configured by the build system to define the variables
// llvm-config wants to report to the user, but which can only be determined at
// build time.
//
// The variant of this file not ending with .in has been autogenerated by the
// LLVM build. Do not edit!
//
//===----------------------------------------------------------------------===//

#define LLVM_SRC_ROOT "/home/brandon/Projects/root-6.10.04/interpreter/llvm/src"
#define LLVM_OBJ_ROOT "/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src"
#define LLVM_CPPFLAGS "  -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS"
#define LLVM_CFLAGS " -Wno-implicit-fallthrough -pipe -m64 -Wall -W -fPIC -pthread -fPIC -w -Werror=date-time -ffunction-sections -fdata-sections -O2 -DNDEBUG -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS"
#define LLVM_LDFLAGS ""
#define LLVM_CXXFLAGS " -Wno-implicit-fallthrough -Wno-noexcept-type -pipe -m64  -Wshadow -Wall -W -Woverloaded-virtual -fsigned-char -fPIC -pthread -std=c++11 -fvisibility=hidden -fPIC -fvisibility-inlines-hidden -w -Werror=date-time -std=c++11 -ffunction-sections -fdata-sections -O2 -DNDEBUG  -fno-exceptions -fno-rtti -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS"
#define LLVM_BUILDMODE "Release"
#define LLVM_LIBDIR_SUFFIX ""
#define LLVM_TARGETS_BUILT "X86"
#define LLVM_SYSTEM_LIBS "-lrt -ldl -lpthread -lz -lm"
#define LLVM_BUILD_SYSTEM "cmake"
#define LLVM_HAS_RTTI "NO"
#define LLVM_ENABLE_DYLIB "OFF"
#define LLVM_LINK_DYLIB "OFF"
#define LLVM_ENABLE_SHARED "OFF"
#define LLVM_DYLIB_COMPONENTS "all"
#define LLVM_DYLIB_VERSION "3.9svn"
#define LLVM_HAS_GLOBAL_ISEL "OFF"