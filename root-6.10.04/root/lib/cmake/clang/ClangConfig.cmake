# This file allows users to call find_package(Clang) and pick up our targets.

find_package(LLVM REQUIRED CONFIG)



set(CLANG_EXPORTED_TARGETS "clangBasic;clangLex;clangParse;clangAST;clangDynamicASTMatchers;clangASTMatchers;clangSema;clangCodeGen;clangAnalysis;clangEdit;clangRewrite;clangDriver;clangSerialization;clangRewriteFrontend;clangFrontend;clangFrontendTool;clangToolingCore;clangTooling;clangIndex;clangFormat;libclang")
set(CLANG_CMAKE_DIR "/home/brandon/Projects/root-6.10.04/root/lib/cmake/clang")

# Provide all our library targets to users.
include("/home/brandon/Projects/root-6.10.04/root/lib/cmake/clang/ClangTargets.cmake")
