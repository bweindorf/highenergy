# Install script for directory: /home/brandon/Projects/root-6.10.04/core

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
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/brandon/Projects/root-6.10.04/root/include/RGitCommit.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCore.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCore.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/brandon/Projects/root-6.10.04/root/lib/libCore.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCore.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCore.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/brandon/Projects/root-6.10.04/root/core/clib/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/clingutils/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/cont/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/dictgen/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/foundation/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/meta/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/metacling/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/multiproc/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/rint/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/textinput/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/thread/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/imt/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/zip/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/lzma/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/newdelete/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/unix/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/base/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/rootcling_stage1/cmake_install.cmake")

endif()

