# Install script for directory: /home/brandon/Projects/root-6.10.04/interpreter/llvm/src

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/home/brandon/Projects/root-6.10.04/interpreter/llvm/src/include/llvm"
    "/home/brandon/Projects/root-6.10.04/interpreter/llvm/src/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/LICENSE\\.TXT$" REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/include/llvm" FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/CMakeFiles$" EXCLUDE REGEX "/config\\.h$" EXCLUDE REGEX "/\\.svn$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/Support/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/TableGen/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/utils/TableGen/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/include/llvm/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/utils/FileCheck/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/utils/PerfectShuffle/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/utils/count/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/utils/not/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/utils/llvm-lit/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/utils/yaml-bench/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/projects/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/runtimes/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/docs/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/cmake/modules/cmake_install.cmake")

endif()

