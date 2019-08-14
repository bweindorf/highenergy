# Install script for directory: /home/brandon/Projects/root-6.10.04/gui

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
  include("/home/brandon/Projects/root-6.10.04/root/gui/gui/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/gui/ged/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/gui/fitpanel/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/gui/guibuilder/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/gui/guihtml/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/gui/recorder/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/gui/sessionviewer/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/gui/qtgsi/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/gui/qtroot/cmake_install.cmake")

endif()

