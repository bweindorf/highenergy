# Install script for directory: /home/brandon/Projects/root-6.10.04/math

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/brandon/Projects/root-6.10.04/root/math/mathcore/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/mathmore/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/matrix/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/minuit/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/minuit2/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/fumili/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/physics/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/mlp/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/quadp/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/foam/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/smatrix/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/splot/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/genvector/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/genetic/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/unuran/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/fftw/cmake_install.cmake")

endif()

