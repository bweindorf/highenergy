# Install script for directory: /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/lto/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/gold/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-ar/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-config/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-lto/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-profdata/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/cling/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/bugpoint/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/bugpoint-passes/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/dsymutil/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llc/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/lli/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-as/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-as-fuzzer/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-bcanalyzer/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-c-test/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-cov/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-cxxdump/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-diff/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-dis/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-dwarfdump/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-dwp/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-extract/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-go/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-link/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-mc/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-mc-fuzzer/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-mcmarkup/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-nm/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-objdump/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-pdbdump/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-readobj/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-rtdyld/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-size/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-split/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-stress/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-symbolizer/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/msbuild/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/obj2yaml/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/opt/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/sancov/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/sanstats/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/verify-uselistorder/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/xcode-toolchain/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/yaml2obj/cmake_install.cmake")

endif()
