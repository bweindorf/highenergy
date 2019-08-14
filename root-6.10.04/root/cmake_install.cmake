# Install script for directory: /home/brandon/Projects/root-6.10.04

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/root/lib/" FILES_MATCHING REGEX "/libtbb[^/]*$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc" TYPE FILE FILES "/home/brandon/Projects/root-6.10.04/root/etc/allDict.cxx.pch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/root/etc/dictpch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xtestsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tutorials" TYPE FILE FILES "/home/brandon/Projects/root-6.10.04/root/tutorials/hsimple.root")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/brandon/Projects/root-6.10.04/root/include/RConfigure.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES
    "/home/brandon/Projects/root-6.10.04/root/ROOTConfig-version.cmake"
    "/home/brandon/Projects/root-6.10.04/root/installtree/ROOTUseFile.cmake"
    "/home/brandon/Projects/root-6.10.04/root/installtree/ROOTConfig.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/ROOTConfig-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/ROOTConfig-targets.cmake"
         "/home/brandon/Projects/root-6.10.04/root/CMakeFiles/Export/cmake/ROOTConfig-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/ROOTConfig-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/ROOTConfig-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES "/home/brandon/Projects/root-6.10.04/root/CMakeFiles/Export/cmake/ROOTConfig-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES "/home/brandon/Projects/root-6.10.04/root/CMakeFiles/Export/cmake/ROOTConfig-targets-relwithdebinfo.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_WRITE OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/brandon/Projects/root-6.10.04/root/bin/thisroot.sh"
    "/home/brandon/Projects/root-6.10.04/root/bin/thisroot.csh"
    "/home/brandon/Projects/root-6.10.04/root/bin/setxrd.csh"
    "/home/brandon/Projects/root-6.10.04/root/bin/setxrd.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ FILES
    "/home/brandon/Projects/root-6.10.04/root/bin/memprobe"
    "/home/brandon/Projects/root-6.10.04/root/installtree/root-config"
    "/home/brandon/Projects/root-6.10.04/cmake/scripts/setenvwrap.csh"
    "/home/brandon/Projects/root-6.10.04/root/bin/roots"
    "/home/brandon/Projects/root-6.10.04/root/bin/proofserv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/brandon/Projects/root-6.10.04/root/include/RConfigOptions.h"
    "/home/brandon/Projects/root-6.10.04/root/include/compiledata.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc" TYPE FILE FILES
    "/home/brandon/Projects/root-6.10.04/root/etc/root.mimes"
    "/home/brandon/Projects/root-6.10.04/root/etc/system.rootrc"
    "/home/brandon/Projects/root-6.10.04/root/etc/system.rootauthrc"
    "/home/brandon/Projects/root-6.10.04/root/etc/system.rootdaemonrc"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/daemons" TYPE FILE PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ FILES
    "/home/brandon/Projects/root-6.10.04/root/etc/daemons/rootd.rc.d"
    "/home/brandon/Projects/root-6.10.04/root/etc/daemons/proofd.rc.d"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/daemons" TYPE FILE FILES
    "/home/brandon/Projects/root-6.10.04/root/etc/daemons/rootd.xinetd"
    "/home/brandon/Projects/root-6.10.04/root/etc/daemons/proofd.xinetd"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/emacs/site-lisp" TYPE FILE FILES "/home/brandon/Projects/root-6.10.04/root/root-help.el")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/config" TYPE FILE FILES
    "/home/brandon/Projects/root-6.10.04/root/config/Makefile.comp"
    "/home/brandon/Projects/root-6.10.04/root/config/Makefile.config"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE FILES "/home/brandon/Projects/root-6.10.04/LICENSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/README")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/etc/" USE_SOURCE_PERMISSIONS REGEX "system.rootrc" EXCLUDE REGEX "system.rootauthrc" EXCLUDE REGEX "system.rootdaemonrc" EXCLUDE REGEX "rootd.rc.d" EXCLUDE REGEX "proofd.rc.d" EXCLUDE REGEX "rootd.xinetd" EXCLUDE REGEX "proofd.xinetd" EXCLUDE REGEX "root.mimes" EXCLUDE REGEX "cmake" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/fonts" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/fonts/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/icons" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/icons/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/macros" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/macros/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/man/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xtestsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/test" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/test/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xtestsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tutorials" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/tutorials/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE DIRECTORY FILES "/home/brandon/Projects/root-6.10.04/cmake/modules" REGEX "/Find[^/]*\\.cmake$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/aclocal" TYPE FILE FILES "/home/brandon/Projects/root-6.10.04/build/misc/root.m4")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/brandon/Projects/root-6.10.04/root/interpreter/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/core/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/build/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/math/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/hist/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/tree/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/io/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/net/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/graf2d/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/graf3d/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/gui/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/proof/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/html/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/montecarlo/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/geom/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/rootx/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/misc/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/main/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/bindings/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/sql/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/tmva/cmake_install.cmake")
  include("/home/brandon/Projects/root-6.10.04/root/roofit/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/brandon/Projects/root-6.10.04/root/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
