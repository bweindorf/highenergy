#---Check for installed packages depending on the build options/components eamnbled -
include(ExternalProject)
include(FindPackageHandleStandardArgs)

set(lcgpackages http://lcgpackages.web.cern.ch/lcgpackages/tarFiles/sources)

#---On MacOSX, try to find frameworks after standard libraries or headers------------
set(CMAKE_FIND_FRAMEWORK LAST)

#---Guess under which lib directory the external packages will install the libraires
set(_LIBDIR_DEFAULT "lib")
if(CMAKE_SYSTEM_NAME MATCHES "Linux" AND NOT CMAKE_CROSSCOMPILING AND NOT EXISTS "/etc/debian_version")
  if("${CMAKE_SIZEOF_VOID_P}" EQUAL "8")
    set(_LIBDIR_DEFAULT "lib64")
  endif()
endif()

#---Check for Cocoa/Quartz graphics backend (MacOS X only)
if(cocoa)
  if(APPLE)
    set(x11 OFF CACHE BOOL "" FORCE)
    set(builtin_freetype ON CACHE BOOL "" FORCE)
  else()
    message(STATUS "Cocoa option can only be enabled on MacOSX platform")
    set(cocoa OFF CACHE BOOL "" FORCE)
  endif()
endif()

#---Check for Zlib ------------------------------------------------------------------
if(NOT builtin_zlib)
  message(STATUS "Looking for ZLib")
  find_package(ZLIB)
  if(NOT ZLIB_FOUND)
    message(STATUS "Zlib not found. Switching on builtin_zlib option")
    set(builtin_zlib ON CACHE BOOL "" FORCE)
   endif()
endif()
if(builtin_zlib)
  message(STATUS "Building zlib included in ROOT itself")
  set(zlib_sources
    ${CMAKE_SOURCE_DIR}/core/zip/src/adler32.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/compress.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/crc32.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/deflate.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/gzclose.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/gzlib.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/gzread.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/gzwrite.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/infback.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/inffast.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/inflate.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/inftrees.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/trees.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/uncompr.c
    ${CMAKE_SOURCE_DIR}/core/zip/src/zutil.c)
  add_library(ZLIB STATIC ${zlib_sources})
  set_target_properties(ZLIB PROPERTIES COMPILE_FLAGS "-fPIC -I${CMAKE_SOURCE_DIR}/core/zip/inc")
  set(ZLIB_LIBRARY " " CACHE PATH "" FORCE)
  set(ZLIB_LIBRARIES ZLIB)
endif()

#---Check for Unuran ------------------------------------------------------------------
if(NOT builtin_unuran)
  message(STATUS "Looking for Unuran")
  find_Package(Unuran)
  if(NOT UNURAN_FOUND)
    message(STATUS "Unuran not found. Switching on builtin_unuran option")
    set(builtin_unuran ON CACHE BOOL "" FORCE)
  endif()
endif()

#---Check for Freetype---------------------------------------------------------------
if(NOT builtin_freetype)
  message(STATUS "Looking for Freetype")
  find_package(Freetype)
  if(FREETYPE_FOUND)
    set(FREETYPE_INCLUDE_DIR ${FREETYPE_INCLUDE_DIR_freetype2})
  else()
    message(STATUS "FreeType not found. Switching on builtin_freetype option")
    set(builtin_freetype ON CACHE BOOL "" FORCE)
  endif()
endif()
if(builtin_freetype)
  set(freetype_version 2.6.1)
  message(STATUS "Building freetype version ${freetype_version} included in ROOT itself")
  set(FREETYPE_LIBRARY ${CMAKE_BINARY_DIR}/FREETYPE-prefix/src/FREETYPE/objs/.libs/${CMAKE_STATIC_LIBRARY_PREFIX}freetype${CMAKE_STATIC_LIBRARY_SUFFIX})
  if(WIN32)
    if(winrtdebug)
      set(freetypeliba objs/freetype261MT_D.lib)
      set(freetypebuild "freetype - Win32 Debug Multithreaded")
    else()
      set(freetypeliba objs/freetype261MT.lib)
      set(freetypebuild "freetype - Win32 Release Multithreaded")
    endif()
    ExternalProject_Add(
      FREETYPE
      URL ${CMAKE_SOURCE_DIR}/graf2d/freetype/src/freetype-${freetype_version}.tar.gz
      PATCH_COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/graf2d/freetype/src/win32 builds/windows/visualc/.
      CONFIGURE_COMMAND ""
      BUILD_COMMAND ${CMAKE_COMMAND} -E chdir builds/windows/visualc/
                    nmake -nologo -f freetype.mak CFG=${freetypebuild} NMAKECXXFLAGS=-D_CRT_SECURE_NO_DEPRECATE 
      INSTALL_COMMAND ${CMAKE_COMMAND} -E copy_if_different ${freetypeliba} ./libs/freetype.lib     
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1 BUILD_IN_SOURCE 1
      BUILD_BYPRODUCTS ${FREETYPE_LIBRARY})
  else()
    set(_freetype_cflags -O)
    if(ROOT_ARCHITECTURE MATCHES aix)
      set(_freetype_zlib --without-zlib)
    endif()
    ExternalProject_Add(
      FREETYPE
      URL ${CMAKE_SOURCE_DIR}/graf2d/freetype/src/freetype-${freetype_version}.tar.gz
      CONFIGURE_COMMAND ./configure --prefix <INSTALL_DIR> --with-pic 
                         --disable-shared --with-png=no --with-bzip2=no 
                         --with-harfbuzz=no ${_freetype_zlib}
                          CC=${CMAKE_C_COMPILER} CFLAGS=${_freetype_cflags}
      INSTALL_COMMAND ""                    
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1 BUILD_IN_SOURCE 1
      BUILD_BYPRODUCTS ${FREETYPE_LIBRARY})
  endif()
  set(FREETYPE_INCLUDE_DIR ${CMAKE_BINARY_DIR}/FREETYPE-prefix/src/FREETYPE/include)
  set(FREETYPE_INCLUDE_DIRS ${FREETYPE_INCLUDE_DIR})
  set(FREETYPE_LIBRARIES ${FREETYPE_LIBRARY})
  set(FREETYPE_TARGET FREETYPE)
endif()

#---Check for PCRE-------------------------------------------------------------------
if(NOT builtin_pcre)
  message(STATUS "Looking for PCRE")
  find_package(PCRE)
  if(PCRE_FOUND)
  else()
    message(STATUS "PCRE not found. Switching on builtin_pcre option")
    set(builtin_pcre ON CACHE BOOL "" FORCE)
  endif()
endif()
if(builtin_pcre)
  set(pcre_version 8.37)
  message(STATUS "Building pcre version ${pcre_version} included in ROOT itself")
  set(PCRE_LIBRARY ${CMAKE_BINARY_DIR}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}pcre${CMAKE_STATIC_LIBRARY_SUFFIX})
  if(WIN32)
    if(winrtdebug)
      set(pcrebuild "libpcre - Win32 Debug")
     else()
      set(pcrebuild "libpcre - Win32 Release")
    endif()
    ExternalProject_Add(
      PCRE
      URL ${CMAKE_SOURCE_DIR}/core/pcre/src/pcre-${pcre_version}.tar.gz
      PATCH_COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/core/pcre/src/win32 .
      CONFIGURE_COMMAND ""
      BUILD_COMMAND ${CMAKE_COMMAND} nmake -nologo -f Makefile.msc 
                                     CFG=${pcrebuild} NMCXXFLAGS=${CMAKE_CC_FLAGS}
      INSTALL_COMMAND ${CMAKE_COMMAND} -E copy_if_different libpcre-8.37.lib  <INSTALL_DIR>/lib/pcre.lib
              COMMAND ${CMAKE_COMMAND} -E copy_if_different pcre.h  <INSTALL_DIR>/include
              COMMAND ${CMAKE_COMMAND} -E copy_if_different pcre_scanner.h  <INSTALL_DIR>/include
              COMMAND ${CMAKE_COMMAND} -E copy_if_different pcre_stringpiece.h  <INSTALL_DIR>/include
              COMMAND ${CMAKE_COMMAND} -E copy_if_different pcrecpp.h  <INSTALL_DIR>/include
              COMMAND ${CMAKE_COMMAND} -E copy_if_different pcrecpparg.h  <INSTALL_DIR>/include
              COMMAND ${CMAKE_COMMAND} -E copy_if_different pcreposix.h  <INSTALL_DIR>/include              
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1 BUILD_IN_SOURCE 1
      BUILD_BYPRODUCTS ${PCRE_LIBRARY})
  else()
    set(_pcre_cflags -O)
    ExternalProject_Add(
      PCRE
      URL ${CMAKE_SOURCE_DIR}/core/pcre/src/pcre-${pcre_version}.tar.gz
      INSTALL_DIR ${CMAKE_BINARY_DIR}
      CONFIGURE_COMMAND ./configure --prefix <INSTALL_DIR> --with-pic --disable-shared
                        CC=${CMAKE_C_COMPILER} CFLAGS=${_pcre_cflags}
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1 BUILD_IN_SOURCE 1
      BUILD_BYPRODUCTS ${PCRE_LIBRARY})
  endif()
  set(PCRE_INCLUDE_DIR ${CMAKE_BINARY_DIR}/include)
  set(PCRE_LIBRARIES ${PCRE_LIBRARY})
  set(PCRE_TARGET PCRE)
endif()

#---Check for LZMA-------------------------------------------------------------------
if(NOT builtin_lzma)
  message(STATUS "Looking for LZMA")
  find_package(LZMA)
  if(NOT LZMA_FOUND)
    message(STATUS "LZMA not found. Switching on builtin_lzma option")
    set(builtin_lzma ON CACHE BOOL "" FORCE)
  endif()
endif()
if(builtin_lzma)
  set(lzma_version 5.2.1)
  set(LZMA_TARGET LZMA)
  message(STATUS "Building LZMA version ${lzma_version} included in ROOT itself")
  if(WIN32)
    set(LZMA_LIBRARIES ${CMAKE_BINARY_DIR}/LZMA/src/LZMA/lib/liblzma.lib)
    ExternalProject_Add(
      LZMA
      URL ${CMAKE_SOURCE_DIR}/core/lzma/src/xz-${lzma_version}-win32.tar.gz
      #URL_MD5  65693dc257802b6778c28ed53ecca678
      PREFIX LZMA
      INSTALL_DIR ${CMAKE_BINARY_DIR}
      CONFIGURE_COMMAND "" BUILD_COMMAND ""
      INSTALL_COMMAND ${CMAKE_COMMAND} -E copy lib/liblzma.dll <INSTALL_DIR>/bin
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1 BUILD_IN_SOURCE 1
      BUILD_BYPRODUCTS ${LZMA_LIBRARIES})
    install(FILES ${CMAKE_BINARY_DIR}/LZMA/src/LZMA/lib/liblzma.dll DESTINATION ${CMAKE_INSTALL_BINDIR})
    set(LZMA_INCLUDE_DIR ${CMAKE_BINARY_DIR}/LZMA/src/LZMA/include)
  else()
    if(CMAKE_CXX_COMPILER_ID MATCHES Clang)
      set(LZMA_CFLAGS "-Wno-format-nonliteral")
      set(LZMA_LDFLAGS "-Qunused-arguments")
    elseif( CMAKE_CXX_COMPILER_ID STREQUAL Intel)
      set(LZMA_CFLAGS "-wd188 -wd181 -wd1292 -wd10006 -wd10156 -wd2259 -wd981 -wd128 -wd3179 -wd2102")
    endif()
    set(LZMA_LIBRARIES ${CMAKE_BINARY_DIR}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}lzma${CMAKE_STATIC_LIBRARY_SUFFIX})
    ExternalProject_Add(
      LZMA
      URL ${CMAKE_SOURCE_DIR}/core/lzma/src/xz-${lzma_version}.tar.gz
      URL_MD5 3e44c766c3fb4f19e348e646fcd5778a
      INSTALL_DIR ${CMAKE_BINARY_DIR}
      CONFIGURE_COMMAND <SOURCE_DIR>/configure --prefix <INSTALL_DIR> --libdir <INSTALL_DIR>/lib
                        --with-pic --disable-shared --quiet
                        CC=${CMAKE_C_COMPILER} CXX=${CMAKE_CXX_COMPILER} CFLAGS=${LZMA_CFLAGS} LDFLAGS=${LZMA_LDFLAGS}
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1 BUILD_IN_SOURCE 1
      BUILD_BYPRODUCTS ${LZMA_LIBRARIES})
    set(LZMA_INCLUDE_DIR ${CMAKE_BINARY_DIR}/include)
  endif()
endif()


#---Check for X11 which is mandatory lib on Unix--------------------------------------
if(x11)
  message(STATUS "Looking for X11")
  if(X11_X11_INCLUDE_PATH)
    set(X11_FIND_QUIETLY 1)
  endif()
  find_package(X11 REQUIRED)
  if(X11_FOUND)
    list(REMOVE_DUPLICATES X11_INCLUDE_DIR)
    if(NOT X11_FIND_QUIETLY)
      message(STATUS "X11_INCLUDE_DIR: ${X11_INCLUDE_DIR}")
      message(STATUS "X11_LIBRARIES: ${X11_LIBRARIES}")
    endif()
  else()
    message(FATAL_ERROR "libX11 and X11 headers must be installed.")
  endif()
  if(X11_Xpm_FOUND)
    if(NOT X11_FIND_QUIETLY)
      message(STATUS "X11_Xpm_INCLUDE_PATH: ${X11_Xpm_INCLUDE_PATH}")
      message(STATUS "X11_Xpm_LIB: ${X11_Xpm_LIB}")
    endif()
  else()
    message(FATAL_ERROR "libXpm and Xpm headers must be installed.")
  endif()
  if(X11_Xft_FOUND)
    if(NOT X11_FIND_QUIETLY)
      message(STATUS "X11_Xft_INCLUDE_PATH: ${X11_Xft_INCLUDE_PATH}")
      message(STATUS "X11_Xft_LIB: ${X11_Xft_LIB}")
    endif()
    set(xft ON)
  else()
    message(FATAL_ERROR "libXft and Xft headers must be installed.")
  endif()
  if(X11_Xext_FOUND)
    if(NOT X11_FIND_QUIETLY)
      message(STATUS "X11_Xext_INCLUDE_PATH: ${X11_Xext_INCLUDE_PATH}")
      message(STATUS "X11_Xext_LIB: ${X11_Xext_LIB}")
    endif()
  else()
    message(FATAL_ERROR "libXext and Xext headers must be installed.")
  endif()
else()
  set(xft OFF)
endif()


#---Check for all kind of graphics includes needed by libAfterImage--------------------
if(asimage)
  if(NOT x11 AND NOT cocoa)
    message(STATUS "Switching off 'asimage' because neither 'x11' nor 'cocoa' are enabled")
    set(asimage OFF CACHE BOOL "" FORCE)
  endif()
endif()
if(asimage)
  set(ASEXTRA_LIBRARIES)
  find_Package(GIF)
  if(GIF_FOUND)
    set(ASEXTRA_LIBRARIES ${ASEXTRA_LIBRARIES} ${GIF_LIBRARIES})
  endif()
  find_Package(TIFF)
  if(TIFF_FOUND)
    set(ASEXTRA_LIBRARIES ${ASEXTRA_LIBRARIES} ${TIFF_LIBRARIES})
  endif()
  find_Package(PNG)
  if(PNG_FOUND)
    set(ASEXTRA_LIBRARIES ${ASEXTRA_LIBRARIES} ${PNG_LIBRARIES})
    list(GET PNG_INCLUDE_DIRS 0 PNG_INCLUDE_DIR)
  endif()
  find_Package(JPEG)
  if(JPEG_FOUND)
    set(ASEXTRA_LIBRARIES ${ASEXTRA_LIBRARIES} ${JPEG_LIBRARIES})
  endif()
endif()

#---Check for AfterImage---------------------------------------------------------------
if(NOT builtin_afterimage)
  message(STATUS "Looking for AfterImage")
  find_package(AfterImage)
  if(NOT AFTERIMAGE_FOUND)
    message(STATUS "AfterImage not found. Switching on builtin_afterimage option")
    set(builtin_afterimage ON CACHE BOOL "" FORCE)
  endif()
endif()
if(builtin_afterimage)
  set(AFTERIMAGE_LIBRARIES ${CMAKE_BINARY_DIR}/lib/libAfterImage${CMAKE_STATIC_LIBRARY_SUFFIX})
  if(WIN32)
    if(winrtdebug)
      set(astepbld "libAfterImage - Win32 Debug")
    else()
      set(astepbld "libAfterImage - Win32 Release")
    endif()
    ExternalProject_Add(
      AFTERIMAGE
      DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/graf2d/asimage/src/libAfterImage AFTERIMAGE
      INSTALL_DIR ${CMAKE_BINARY_DIR}
      BUILD_COMMAND nmake -nologo -f libAfterImage.mak FREETYPEDIRI=-I${FREETYPE_INCLUDE_DIR}
                    CFG=${astepbld} NMAKECXXFLAGS="${CMAKE_CXX_FLAGS} /wd4244"
      INSTALL_COMMAND  ${CMAKE_COMMAND} -E copy_if_different libAfterImage.lib <INSTALL_DIR>/lib/.
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1 BUILD_IN_SOURCE 1
      BUILD_BYPRODUCTS ${AFTERIMAGE_LIBRARIES})
  else()
    message(STATUS "Building AfterImage library included in ROOT itself")
    if(JPEG_FOUND)
      set(_jpeginclude --with-jpeg-includes=${JPEG_INCLUDE_DIR})
    else()
      set(_jpeginclude --with-builtin-jpeg)
    endif()
    if(PNG_FOUND)
      set(_pnginclude  --with-png-includes=${PNG_PNG_INCLUDE_DIR})
    else()
       set(_pnginclude  --with-builtin-png)
    endif()
    if(TIFF_FOUND)
      set(_tiffinclude --with-tiff-includes=${TIFF_INCLUDE_DIR})
    else()
      set(_tiffinclude --with-tiff=no)
    endif()
    if(cocoa)
      set(_jpeginclude --without-x --with-builtin-jpeg)
      set(_pnginclude  --with-builtin-png)
      set(_tiffinclude --with-tiff=no)
    endif()
    if(builtin_freetype)
      set(_ttf_include --with-ttf-includes=-I${FREETYPE_INCLUDE_DIR})
      set(_after_cflags "${_after_cflags} -DHAVE_FREETYPE_FREETYPE")
    endif()
    ExternalProject_Add(
      AFTERIMAGE
      DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/graf2d/asimage/src/libAfterImage AFTERIMAGE
      INSTALL_DIR ${CMAKE_BINARY_DIR}
      CONFIGURE_COMMAND ./configure --prefix <INSTALL_DIR>
                        --libdir=<INSTALL_DIR>/lib 
                        --with-ttf ${_ttf_include} --with-afterbase=no 
                        --without-svg --disable-glx ${_after_mmx} 
                        --with-builtin-ungif  --with-jpeg ${_jpeginclude} 
                        --with-png ${_pnginclude} ${_tiffinclude}
                        CC=${CMAKE_C_COMPILER} CFLAGS=${_after_cflags}
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1 BUILD_IN_SOURCE 1
      BUILD_BYPRODUCTS ${AFTERIMAGE_LIBRARIES})
  endif()
  if(builtin_freetype)
    add_dependencies(AFTERIMAGE FREETYPE)
  endif()
  set(AFTERIMAGE_INCLUDE_DIR ${CMAKE_BINARY_DIR}/include/libAfterImage)
  set(AFTERIMAGE_TARGET AFTERIMAGE)
endif()

#---Check for GSL library---------------------------------------------------------------
if(mathmore OR builtin_gsl)
  message(STATUS "Looking for GSL")
  if(NOT builtin_gsl)
    find_package(GSL 1.10)
    if(NOT GSL_FOUND)
      if(fail-on-missing)
        message(FATAL_ERROR "GSL package not found and 'mathmore' component if required ('fail-on-missing' enabled). "
                            "Alternatively, you can enable the option 'builtin_gsl' to build the GSL libraries internally.")
      else()
        message(STATUS "GSL not found. Set variable GSL_DIR to point to your GSL installation")
        message(STATUS "               Alternatively, you can also enable the option 'builtin_gsl' to build the GSL libraries internally'")
        message(STATUS "               For the time being switching OFF 'mathmore' option")
        set(mathmore OFF CACHE BOOL "" FORCE)
      endif()
    endif()
  else()
    set(gsl_version 2.1)
    message(STATUS "Downloading and building GSL version ${gsl_version}")
    foreach(l gsl gslcblas)
      list(APPEND GSL_LIBRARIES ${CMAKE_BINARY_DIR}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}${l}${CMAKE_STATIC_LIBRARY_SUFFIX})
    endforeach()
    ExternalProject_Add(
      GSL
      # http://mirror.switch.ch/ftp/mirror/gnu/gsl/gsl-${gsl_version}.tar.gz
      URL ${lcgpackages}/gsl-${gsl_version}.tar.gz
      INSTALL_DIR ${CMAKE_BINARY_DIR}
      CONFIGURE_COMMAND <SOURCE_DIR>/configure --prefix <INSTALL_DIR>
                        --libdir=<INSTALL_DIR>/lib
                        --enable-shared=no
                        CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS}
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1
      BUILD_BYPRODUCTS ${GSL_LIBRARIES}
    )
    set(GSL_TARGET GSL)
    set(mathmore ON CACHE BOOL "" FORCE)
  endif()
endif()


#---Check for Python installation-------------------------------------------------------
if(python OR python3)
  message(STATUS "Looking for Python")
  #---First look for the python interpreter and fix the version of it for the libraries--
  if(python3)
    find_package(PythonInterp 3.5)
  else()
    find_package(PythonInterp)
  endif()
  if(PYTHONINTERP_FOUND)
    execute_process(COMMAND ${PYTHON_EXECUTABLE} -c "import sys;sys.stdout.write(sys.version[:3])"
                    OUTPUT_VARIABLE PYTHON_VERSION)
    message(STATUS "Found Python interpreter version ${PYTHON_VERSION}")
  endif()
  set(Python_ADDITIONAL_VERSIONS ${PYTHON_VERSION})
  find_package(PythonLibs)
  if(NOT PYTHONLIBS_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "PythonLibs package not found and python component required")
    else()
      set(python OFF CACHE BOOL "" FORCE)
      message(STATUS "Python not found. Switching off python option")
    endif()
  else()
  endif()
  find_package(NumPy)
endif()

#---Check for Ruby installation-------------------------------------------------------
if(ruby)
  message(STATUS "Looking for Ruby")
  find_package(Ruby)
  if(NOT RUBY_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Ruby package not found and ruby component required")
    else()
      set(ruby OFF CACHE BOOL "" FORCE)
      message(STATUS "Ruby not found. Switching off ruby option")
    endif()
  else()
    string(REGEX REPLACE "([0-9]+).*$" "\\1" RUBY_MAJOR_VERSION "${RUBY_VERSION}")
    string(REGEX REPLACE "[0-9]+\\.([0-9]+).*$" "\\1" RUBY_MINOR_VERSION "${RUBY_VERSION}")
    string(REGEX REPLACE "[0-9]+\\.[0-9]+\\.([0-9]+).*$" "\\1" RUBY_PATCH_VERSION "${RUBY_VERSION}")
  endif()
endif()

#---Check for OpenGL installation-------------------------------------------------------
if(opengl)
  message(STATUS "Looking for OpenGL")
  if(APPLE AND NOT cocoa)
    find_path(OPENGL_INCLUDE_DIR GL/gl.h  PATHS /usr/X11R6/include)
    find_library(OPENGL_gl_LIBRARY NAMES GL PATHS /usr/X11R6/lib)
    find_library(OPENGL_glu_LIBRARY NAMES GLU PATHS /usr/X11R6/lib)
    find_package_handle_standard_args(OpenGL REQUIRED_VARS OPENGL_INCLUDE_DIR OPENGL_gl_LIBRARY OPENGL_glu_LIBRARY)
    set(OPENGL_LIBRARIES ${OPENGL_gl_LIBRARY} ${OPENGL_glu_LIBRARY})
    mark_as_advanced(OPENGL_INCLUDE_DIR OPENGL_glu_LIBRARY OPENGL_gl_LIBRARY)
  else()
    find_package(OpenGL)
  endif()
  if(NOT OPENGL_LIBRARIES)
    if(fail-on-missing)
      message(FATAL_ERROR "OpenGL package (with GLU) not found and opengl option required")
    else()
      message(STATUS "OpenGL (with GLU) not found. Switching off opengl option")
      set(opengl OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for gl2ps ------------------------------------------------------------------
if(NOT builtin_gl2ps)
  message(STATUS "Looking for gl2ps")
  find_Package(gl2ps)
  if(NOT GL2PS_FOUND)
    message(STATUS "gl2ps not found. Switching on builtin_gl2ps option")
    set(builtin_gl2ps ON CACHE BOOL "" FORCE)
  endif()
endif()

#---Check for Graphviz installation-------------------------------------------------------
if(gviz)
  message(STATUS "Looking for Graphviz")
  find_package(Graphviz)
  if(NOT GRAPHVIZ_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Graphviz package not found and gviz option required")
    else()
      message(STATUS "Graphviz not found. Switching off gviz option")
      set(gviz OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for Qt installation-------------------------------------------------------
if(qt OR qtgsi)
  message(STATUS "Looking for Qt4")
  find_package(Qt4 4.8 COMPONENTS QtCore QtGui)
  if(NOT QT4_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Qt4 package not found and qt/qtgsi component required")
    else()
      message(STATUS "Qt4 not found. Switching off qt/qtgsi option")
      set(qt OFF CACHE BOOL "" FORCE)
      set(qtgsi OFF CACHE BOOL "" FORCE)
    endif()
  else()
    MATH(EXPR QT_VERSION_NUM "${QT_VERSION_MAJOR}*10000 + ${QT_VERSION_MINOR}*100 + ${QT_VERSION_PATCH}")
  endif()
endif()


#---Check for Bonjour installation-------------------------------------------------------
if(bonjour)
  message(STATUS "Looking for Bonjour")
  find_package(Bonjour)
  if(NOT BONJOUR_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Bonjour/Avahi libraries not found and Bonjour component required")
    else()
      message(STATUS "Bonjour not found. Switching off bonjour option")
      set(bonjour OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()


#---Check for krb5 Support-----------------------------------------------------------
if(krb5)
  message(STATUS "Looking for Kerberos 5")
  find_package(Kerberos5)
  if(NOT KRB5_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Kerberos 5 libraries not found and they are required")
    else()
      message(STATUS "Kerberos 5 not found. Switching off krb5 option")
      set(krb5 OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

if(krb5 OR afs)
  find_library(COMERR_LIBRARY com_err)
  if(COMERR_LIBRARY)
    set(COMERR_LIBRARIES ${COMERR_LIBRARY})
  endif()
  mark_as_advanced(COMERR_LIBRARY)
endif()

#---Check for XML Parser Support-----------------------------------------------------------
if(xml)
  message(STATUS "Looking for LibXml2")
  find_package(LibXml2)
  if(NOT LIBXML2_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "LibXml2 libraries not found and they are required (xml option enabled)")
    else()
      message(STATUS "LibXml2 not found. Switching off xml option")
      set(xml OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for OpenSSL------------------------------------------------------------------
if(ssl OR builtin_openssl)
  if(builtin_openssl)
    set(openssl_version 1.0.2d)
    message(STATUS "Downloading and building OpenSSL version ${openssl_version}")
    if(APPLE)
      set(openssl_config_cmd ./Configure darwin64-x86_64-cc)
    else()
      set(openssl_config_cmd ./config)
    endif()
    set(OPENSSL_LIBRARIES ${CMAKE_BINARY_DIR}/OPENSSL-prefix/lib/libssl.a ${CMAKE_BINARY_DIR}/OPENSSL-prefix/lib/libcrypto.a)
    ExternalProject_Add(
      OPENSSL
      URL ${lcgpackages}/openssl-${openssl_version}.tar.gz
      CONFIGURE_COMMAND ${openssl_config_cmd} no-shared --prefix=<INSTALL_DIR>
      BUILD_COMMAND make -j1 CC=${CMAKE_C_COMPILER}\ -fPIC
      INSTALL_COMMAND make install_sw
      BUILD_IN_SOURCE 1
      LOG_BUILD 1 LOG_CONFIGURE 1 LOG_DOWNLOAD 1 LOG_INSTALL 1
      BUILD_BYPRODUCTS ${OPENSSL_LIBRARIES}
    )
    set(OPENSSL_INCLUDE_DIR ${CMAKE_BINARY_DIR}/OPENSSL-prefix/include)
    set(OPENSSL_PREFIX ${CMAKE_BINARY_DIR}/OPENSSL-prefix)
    set(OPENSSL_TARGET OPENSSL)
    set(ssl ON CACHE BOOL "" FORCE)
  else()
    message(STATUS "Looking for OpenSSL")
    find_package(OpenSSL)
    if(NOT OPENSSL_FOUND)
      if(fail-on-missing)
        message(FATAL_ERROR "OpenSSL libraries not found and they are required (ssl option enabled)")
      else()
        message(STATUS "OpenSSL not found. Switching off ssl option")
        set(ssl OFF CACHE BOOL "" FORCE)
      endif()
    endif()
  endif()
endif()

#---Check for Castor-------------------------------------------------------------------
if(castor)
  message(STATUS "Looking for Castor")
  find_package(Castor)
  if(NOT CASTOR_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Castor libraries not found and they are required (castor option enabled)")
    else()
      message(STATUS "Castor not found. Switching off castor option")
      set(castor OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for RFIO-------------------------------------------------------------------
if(rfio)
  message(STATUS "Looking for RFIO")
  find_package(Castor)
  find_package(DPM)
  if(NOT CASTOR_FOUND AND NOT DPM_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Castor or DPM libraries not found and one of them is required (rfio option enabled)")
    else()
      message(STATUS "Castor or DPM not found. Switching off rfio option")
      set(rfio OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for MySQL-------------------------------------------------------------------
if(mysql)
  message(STATUS "Looking for MySQL")
  find_package(MySQL)
  if(NOT MYSQL_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "MySQL libraries not found and they are required (mysql option enabled)")
    else()
      message(STATUS "MySQL not found. Switching off mysql option")
      set(mysql OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for Oracle-------------------------------------------------------------------
if(oracle)
  message(STATUS "Looking for Oracle")
  find_package(Oracle)
  if(NOT ORACLE_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Oracle libraries not found and they are required (orable option enabled)")
    else()
      message(STATUS "Oracle not found. Switching off oracle option")
      set(oracle OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for ODBC-------------------------------------------------------------------
if(odbc)
  message(STATUS "Looking for ODBC")
  find_package(ODBC)
  if(NOT ODBC_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "ODBC libraries not found and they are required (odbc option enabled)")
    else()
      message(STATUS "ODBC not found. Switching off odbc option")
      set(odbc OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for PostgreSQL-------------------------------------------------------------------
if(pgsql)
  message(STATUS "Looking for PostgreSQL")
  find_package(PostgreSQL)
  if(NOT POSTGRESQL_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "PostgreSQL libraries not found and they are required (pgsql option enabled)")
    else()
      message(STATUS "PostgreSQL not found. Switching off pgsql option")
      set(pgsql OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for SQLite-------------------------------------------------------------------
if(sqlite)
  message(STATUS "Looking for SQLite")
  find_package(Sqlite)
  if(NOT SQLITE_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "SQLite libraries not found and they are required (sqlite option enabled)")
    else()
      message(STATUS "SQLite not found. Switching off sqlite option")
      set(sqlite OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for Pythia6-------------------------------------------------------------------
if(pythia6)
  message(STATUS "Looking for Pythia6")
  find_package(Pythia6 QUIET)
  if(NOT PYTHIA6_FOUND AND NOT pythia6_nolink)
    if(fail-on-missing)
      message(FATAL_ERROR "Pythia6 libraries not found and they are required (pythia6 option enabled)")
    else()
      message(STATUS "Pythia6 not found. Switching off pythia6 option")
      set(pythia6 OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for Pythia8-------------------------------------------------------------------
if(pythia8)
  message(STATUS "Looking for Pythia8")
  find_package(Pythia8)
  if(NOT PYTHIA8_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Pythia8 libraries not found and they are required (pythia8 option enabled)")
    else()
      message(STATUS "Pythia8 not found. Switching off pythia8 option")
      set(pythia8 OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for FFTW3-------------------------------------------------------------------
if(fftw3)
  if(NOT builtin_fftw3)
    message(STATUS "Looking for FFTW3")
    find_package(FFTW)
    if(NOT FFTW_FOUND)
      if(fail-on-missing)
        message(FATAL_ERROR "FFTW3 libraries not found and they are required (fftw3 option enabled)")
      else()
        message(STATUS "FFTW3 not found. Set [environment] variable FFTW_DIR to point to your FFTW3 installation")
        message(STATUS "                 Alternatively, you can also enable the option 'builtin_fftw3' to build FFTW3 internally'")
        message(STATUS "                 For the time being switching OFF 'fftw3' option")
        set(fftw3 OFF CACHE BOOL "" FORCE)
      endif()
    endif()
  endif()
endif()
if(builtin_fftw3)
  set(FFTW_VERSION 3.1.2)
  message(STATUS "Downloading and building FFTW version ${FFTW_VERSION}")
  set(FFTW_LIBRARIES ${CMAKE_BINARY_DIR}/lib/libfftw3.a)
  ExternalProject_Add(
    FFTW3
    URL ${lcgpackages}/fftw-${FFTW_VERSION}.tar.gz
    INSTALL_DIR ${CMAKE_BINARY_DIR}
    CONFIGURE_COMMAND ./configure --prefix=<INSTALL_DIR>
    BUILD_COMMAND make CFLAGS=-fPIC
    LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1
    BUILD_IN_SOURCE 1
    BUILD_BYPRODUCTS ${FFTW_LIBRARIES}
  )
  set(FFTW_INCLUDE_DIR ${CMAKE_BINARY_DIR}/include)
  set(FFTW3_TARGET FFTW3)
  set(fftw3 ON CACHE BOOL "" FORCE)
endif()

#---Check for fitsio-------------------------------------------------------------------
if(fitsio OR builtin_cfitsio)
  if(builtin_cfitsio)
    set(cfitsio_version 3.280)
    string(REPLACE "." "" cfitsio_version_no_dots ${cfitsio_version})
    message(STATUS "Downloading and building CFITSIO version ${cfitsio_version}")
    set(CFITSIO_LIBRARIES ${CMAKE_BINARY_DIR}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}cfitsio${CMAKE_STATIC_LIBRARY_SUFFIX})
    ExternalProject_Add(
      CFITSIO
      # ftp://heasarc.gsfc.nasa.gov/software/fitsio/c/cfitsio${cfitsio_version_no_dots}.tar.gz
      URL ${lcgpackages}/cfitsio${cfitsio_version_no_dots}.tar.gz
      INSTALL_DIR ${CMAKE_BINARY_DIR}
      CONFIGURE_COMMAND <SOURCE_DIR>/configure --prefix <INSTALL_DIR>
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1
      BUILD_IN_SOURCE 1
      BUILD_BYPRODUCTS ${CFITSIO_LIBRARIES}
    )
    set(CFITSIO_INCLUDE_DIR ${CMAKE_BINARY_DIR}/include)
    set(fitsio ON CACHE BOOL "" FORCE)
    set(CFITSIO_TARGET CFITSIO)
  else()
    message(STATUS "Looking for CFITSIO")
    find_package(CFITSIO)
    if(NOT CFITSIO_FOUND)
      message(STATUS "CFITSIO not found. You can enable the option 'builtin_cfitsio' to build the library internally'")
      message(STATUS "                   For the time being switching off 'fitsio' option")
      set(fitsio OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check Shadow password support----------------------------------------------------
if(shadowpw)
  if(NOT EXISTS /etc/shadow)  #---TODO--The test always succeeds because the actual file is protected
    if(NOT CMAKE_SYSTEM_NAME MATCHES Linux)
      message(STATUS "Support Shadow password not found. Switching off shadowpw option")
      set(shadowpw OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Monalisa support----------------------------------------------------------------
if(monalisa)
  find_package(Monalisa)
  if(NOT MONALISA_FOUND)
    message(STATUS "Monalisa not found. Set variable MONALISA_DIR to point to your Monalisa installation")
    message(STATUS "For the time being switching OFF 'monalisa' option")
    set(monalisa OFF CACHE BOOL "" FORCE)
  endif()
endif()

#---Check for Xrootd support---------------------------------------------------------
if(xrootd)
  if(NOT builtin_xrootd)
    message(STATUS "Looking for XROOTD")
    find_package(XROOTD)
    if(NOT XROOTD_FOUND)
      if(fail-on-missing)
        message(FATAL_ERROR "XROOTD not found. Set environment variable XRDSYS to point to your XROOTD installation, "
                            "or inlcude the installation of XROOTD in the CMAKE_PREFIX_PATH. "
                            "Alternatively, you can also enable the option 'builtin_xrootd' to build XROOTD internally")
      else()
        message(STATUS "XROOTD not found. Set environment variable XRDSYS to point to your XROOTD installation")
        message(STATUS "                  Alternatively, you can also enable the option 'builtin_xrootd' to build XROOTD internally")
        message(STATUS "                  For the time being switching OFF 'xrootd' option")
        set(xrootd OFF CACHE BOOL "" FORCE)
      endif()
    else()
      set(xrootd_versionnum ${xrdversnum})  # variable used internally
    endif()
  endif()
endif()
if(builtin_xrootd)
  set(xrootd_version 4.6.1)
  set(xrootd_versionnum 400060001)
  message(STATUS "Downloading and building XROOTD version ${xrootd_version}")
  string(REPLACE "-Wall " "" __cxxflags "${CMAKE_CXX_FLAGS}")  # Otherwise it produces many warnings
  string(REPLACE "-W " "" __cxxflags "${__cxxflags}")          # Otherwise it produces many warnings
  string(REPLACE "-Wshadow" "" __cxxflags "${__cxxflags}")          # Otherwise it produces many warnings  
  string(REPLACE "-Woverloaded-virtual" "" __cxxflags "${__cxxflags}")  # Otherwise it produces many warnings  
  set(XROOTD_LIBRARIES ${CMAKE_BINARY_DIR}/${_LIBDIR_DEFAULT}/libXrdUtils${CMAKE_SHARED_LIBRARY_SUFFIX}
                       ${CMAKE_BINARY_DIR}/${_LIBDIR_DEFAULT}/libXrdClient${CMAKE_SHARED_LIBRARY_SUFFIX}
                       ${CMAKE_BINARY_DIR}/${_LIBDIR_DEFAULT}/libXrdCl${CMAKE_SHARED_LIBRARY_SUFFIX})
  ExternalProject_Add(
    XROOTD
    URL http://xrootd.org/download/v${xrootd_version}/xrootd-${xrootd_version}.tar.gz
    # URL ${lcgpackages}/xrootd-${xrootd_version}.tar.gz
    INSTALL_DIR ${CMAKE_BINARY_DIR}
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=<INSTALL_DIR>
               -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
               -DCMAKE_C_FLAGS=${CMAKE_C_FLAGS}
               -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
               -DCMAKE_CXX_FLAGS=${__cxxflags}
               -DCMAKE_OSX_SYSROOT=${CMAKE_OSX_SYSROOT}
               -DCMAKE_OSX_DEPLOYMENT_TARGET=${CMAKE_OSX_DEPLOYMENT_TARGET}
               -DENABLE_PYTHON=OFF
               -DENABLE_CEPH=OFF
    LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1
    BUILD_BYPRODUCTS ${XROOTD_LIBRARIES}
  )
  # We cannot call find_package(XROOTD) becuase the package is not yet built. So, we need to emulate what it defines....
  set(XROOTD_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/include/xrootd ${CMAKE_BINARY_DIR}/include/xrootd/private)
  set(XROOTD_NOMAIN TRUE)
  set(XROOTD_CFLAGS "-DROOTXRDVERS=${xrootd_versionnum}")
  install(DIRECTORY ${CMAKE_BINARY_DIR}/${_LIBDIR_DEFAULT}/ DESTINATION ${CMAKE_INSTALL_LIBDIR}
                    COMPONENT libraries
                    FILES_MATCHING PATTERN "libXrd*")
  set(XROOTD_TARGET XROOTD)
  set(xrootd ON CACHE BOOL "" FORCE)
endif()
if(xrootd AND xrootd_versionnum VERSION_GREATER 300030005)
  set(netxng ON)
else()
  set(netxng OFF)
endif()

#---Alien support----------------------------------------------------------------
if(alien)
  if(NOT xrootd)
    message(FATAL_ERROR "The Alien plugin requires option 'xrootd' to be enabled. Re-run the configuration with 'xrootd=ON'")
  endif()
  find_package(Alien)
  if(NOT ALIEN_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Alien API not found and is required. Set the variable ALIEN_DIR to point to your Alien installation,"
                          "or include the installation of Alien in the CMAKE_PREFIX_PATH. ")
    else()
      message(STATUS "Alien API not found. Set variable ALIEN_DIR to point to your Alien installation,"
                     "or include the installation of Alien in the CMAKE_PREFIX_PATH.")
      message(STATUS "For the time being switching OFF 'alien' option")
      set(alien OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for cling and llvm --------------------------------------------------------
if(cling)
  if(builtin_llvm)
    set(LLVM_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/interpreter/llvm/src/include
                          ${CMAKE_BINARY_DIR}/interpreter/llvm/src/include
                          ${CMAKE_SOURCE_DIR}/interpreter/llvm/src/tools/clang/include
                          ${CMAKE_BINARY_DIR}/interpreter/llvm/src/tools/clang/include)
    set(LLVM_LIBRARIES clangDriver clangFrontend)
  else()
    find_package(LLVM REQUIRED)  # should define the same variables LLVM_XXXX
  endif()

  set(CLING_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/interpreter/cling/include)
  if(MSVC)
    set(CLING_CXXFLAGS "-D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -DNOMINMAX -D_XKEYCHECK_H")
  else()
    set(CLING_CXXFLAGS "-fvisibility=hidden -Wno-shadow -fno-strict-aliasing -Wno-unused-parameter -Wwrite-strings -Wno-long-long -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS")
  endif()
  if (CMAKE_COMPILER_IS_GNUCXX)
    set(CLING_CXXFLAGS "${CLING_CXXFLAGS} -Wno-missing-field-initializers")
  endif()
  #---These are the libraries that we link ROOT with CLING---------------------------
  set(CLING_LIBRARIES clingInterpreter clingMetaProcessor clingUtils)
  add_custom_target(CLING)
  add_dependencies(CLING ${CLING_LIBRARIES} clang-headers)
endif()

#---Check for gfal-------------------------------------------------------------------
if(gfal)
  find_package(GFAL)
  if(NOT GFAL_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "Gfal library not found and is required (gfal option enabled)")
    else()
      message(STATUS "GFAL library not found. Set variable GFAL_DIR to point to your gfal installation
                      and the variable SRM_IFCE_DIR to the srm_ifce installation")
      message(STATUS "For the time being switching OFF 'gfal' option")
      set(gfal OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()


#---Check for dCache-------------------------------------------------------------------
if(dcache)
  find_package(DCAP)
  if(NOT DCAP_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "dCap library not found and is required (dcache option enabled)")
    else()
      message(STATUS "dCap library not found. Set variable DCAP_DIR to point to your dCache installation")
      message(STATUS "For the time being switching OFF 'dcache' option")
      set(dcache OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for Ldap--------------------------------------------------------------------
if(ldap)
  find_package(Ldap)
  if(NOT LDAP_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "ldap library not found and is required (ldap option enabled)")
    else()
      message(STATUS "ldap library not found. Set variable LDAP_DIR to point to your ldap installation")
      message(STATUS "For the time being switching OFF 'ldap' option")
      set(ldap OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for globus--------------------------------------------------------------------
if(globus)
  find_package(Globus)
  if(NOT GLOBUS_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "globus libraries not found and is required ('globus' option enabled)")
    else()
      message(STATUS "globus libraries not found. Set environment var GLOBUS_LOCATION or varibale GLOBUS_DIR to point to your globus installation")
      message(STATUS "For the time being switching OFF 'globus' option")
      set(globus OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for ftgl if needed----------------------------------------------------------
if(NOT builtin_ftgl)
  find_package(FTGL)
  if(NOT FTGL_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "ftgl library not found and is required ('builtin_ftgl' is OFF). Set varible FTGL_ROOT_DIR to installation location")
    else()
      message(STATUS "ftgl library not found. Set variable FTGL_ROOT_DIR to point to your installation")
      message(STATUS "For the time being switching ON 'builtin_ftgl' option")
      set(builtin_ftgl ON CACHE BOOL "" FORCE)
    endif()
  endif()
endif()
if(builtin_ftgl)
  set(FTGL_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/graf3d/ftgl/inc)
  set(FTGL_CFLAGS -DBUILTIN_FTGL)
  set(FTGL_LIBRARIES FTGL)
endif()

#---Check for chirp--------------------------------------------------------------------
if(chirp)
  find_package(chirp)
  if(NOT CHIRP_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "chirp library not found and is required (chirp option enabled)")
    else()
      message(STATUS "chirp library not found. Set variable CHIRP_DIR to point to your chirp installation")
      message(STATUS "For the time being switching OFF 'chirp' option")
      set(chirp OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for R/Rcpp/RInside--------------------------------------------------------------------
#added search of R packages here to remove multiples searches
if(r)
  message(STATUS "Looking for R")
  find_package(R COMPONENTS Rcpp RInside)
  if(NOT R_FOUND)
    if(fail-on-missing)
       message(FATAL_ERROR "R installation not found and is required ('r' option enabled)")
    else()
       message(STATUS "R installation not found. Set variable R_DIR to point to your R installation")
       message(STATUS "For the time being switching OFF 'r' option")
       set(r OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()


#---Check for hdfs--------------------------------------------------------------------
if(hdfs)
  find_package(hdfs)
  if(NOT HDFS_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "hdfs library not found and is required (hdfs option enabled)")
    else()
      message(STATUS "hdfs library not found. Set variable HDFS_DIR to point to your hdfs installation")
      message(STATUS "For the time being switching OFF 'hdfs' option")
      set(hdfs OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for DavIx library-----------------------------------------------------------
if(davix OR builtin_davix)
  if(builtin_davix)
    if(NOT davix)
      set(davix ON CACHE BOOL "" FORCE)
    endif()
    set(DAVIX_VERSION 0.6.4)
    message(STATUS "Downloading and building Davix version ${DAVIX_VERSION}")
    string(REPLACE "-Wall " "" __cxxflags "${CMAKE_CXX_FLAGS}")                      # Otherwise it produces tones of warnings
    string(REPLACE "-W " "" __cxxflags "${__cxxflags}")
    string(REPLACE "-Wall " "" __cflags "${CMAKE_C_FLAGS}")                          # Otherwise it produces tones of warnings
    string(REPLACE "-W " "" __cflags "${__cflags}")
    ROOT_ADD_CXX_FLAG(__cxxflags -Wno-unused-const-variable)
    ROOT_ADD_C_FLAG(__cflags -Wno-format)
    ROOT_ADD_C_FLAG(__cflags -Wno-implicit-function-declaration)
    foreach(l davix neon boost_static_internal)
      list(APPEND DAVIX_LIBRARIES ${CMAKE_BINARY_DIR}/DAVIX-prefix/lib/${CMAKE_STATIC_LIBRARY_PREFIX}${l}${CMAKE_STATIC_LIBRARY_SUFFIX})
    endforeach()
    ExternalProject_Add(
      DAVIX
      # http://grid-deployment.web.cern.ch/grid-deployment/dms/lcgutil/tar/davix/davix-embedded-${DAVIX_VERSION}.tar.gz
      URL ${lcgpackages}/davix-embedded-${DAVIX_VERSION}.tar.gz
      PATCH_COMMAND patch -p1 -i ${CMAKE_SOURCE_DIR}/cmake/patches/davix-${DAVIX_VERSION}.patch
      CMAKE_CACHE_ARGS -DCMAKE_PREFIX_PATH:STRING=${OPENSSL_PREFIX}
      CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
                 -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
                 -DBOOST_EXTERNAL=OFF
                 -DSTATIC_LIBRARY=ON
                 -DSHARED_LIBRARY=OFF
                 -DENABLE_TOOLS=OFF
                 -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
                 -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
                 -DCMAKE_C_FLAGS=${__cflags}
                 -DCMAKE_CXX_FLAGS=${__cxxflags}
                 -DCMAKE_OSX_SYSROOT=${CMAKE_OSX_SYSROOT}
                 -DCMAKE_OSX_DEPLOYMENT_TARGET=${CMAKE_OSX_DEPLOYMENT_TARGET}
                 -DLIB_SUFFIX=
      LOG_BUILD 1 LOG_CONFIGURE 1 LOG_DOWNLOAD 1 LOG_INSTALL 1
      BUILD_BYPRODUCTS ${DAVIX_LIBRARIES}
    )
    set(DAVIX_INCLUDE_DIR ${CMAKE_BINARY_DIR}/DAVIX-prefix/include/davix)
    set(DAVIX_LIBRARY ${CMAKE_BINARY_DIR}/DAVIX-prefix/lib/${CMAKE_STATIC_LIBRARY_PREFIX}davix${CMAKE_STATIC_LIBRARY_SUFFIX})
    set(DAVIX_INCLUDE_DIRS ${DAVIX_INCLUDE_DIR})
    set(DAVIX_TARGET DAVIX)
    if(builtin_openssl)
      add_dependencies(DAVIX OPENSSL)  # Build first OpenSSL
    endif()
  else()
    message(STATUS "Looking for DAVIX")
    find_package(Davix)
    if(NOT DAVIX_FOUND)
      if(fail-on-missing)
        message(FATAL_ERROR "Davix not found. You can enable the option 'builtin_davix' to build the library internally'")
      else()
        message(STATUS "Davix not found. You can enable the option 'builtin_davix' to build the library internally'")
        message(STATUS "                 For the time being switching off 'davix' option")
        set(davix OFF CACHE BOOL "" FORCE)
      endif()
    endif()
  endif()
endif()

#---Check for TCMalloc---------------------------------------------------------------
if (tcmalloc)
  message(STATUS "Looking for tcmalloc")
  find_package(tcmalloc)
  if(NOT TCMALLOC_FOUND)
    message(STATUS "TCMalloc not found.")
  endif()
endif()

#---Check for JEMalloc---------------------------------------------------------------
if (jemalloc)
  if (tcmalloc)
   message(FATAL_ERROR "Both tcmalloc and jemalloc were selected: this is an inconsistent setup.")
  endif()
  message(STATUS "Looking for jemalloc")
  find_package(jemalloc)
  if(NOT JEMALLOC_FOUND)
    message(STATUS "JEMalloc not found.")
  endif()
endif()

#---Check for TBB---------------------------------------------------------------------
if(imt)
  if(NOT builtin_tbb)
    message(STATUS "Looking for TBB")
    find_package(TBB)
    if(TBB_FOUND)
      if(${TBB_VERSION} VERSION_LESS 4.3)
        message(STATUS "TBB version < 4.3. Switching on builtin_tbb option")
        set(builtin_tbb ON CACHE BOOL "" FORCE)
      endif()
    endif()  
    if(NOT TBB_FOUND)
      if(fail-on-missing)
        message(FATAL_ERROR "TBB not found. You can enable the option 'builtin_tbb' to build the library internally")
      else()
        message(STATUS "TBB not found. Switching on builtin_tbb option")
        set(builtin_tbb ON CACHE BOOL "" FORCE)
      endif()
    endif()
  endif()
endif()  
if(builtin_tbb)
  set(tbb_version 2017_U5)
  ROOT_ADD_CXX_FLAG(_tbb_cxxflags -mno-rtm)
  set(TBB_LIBRARIES ${CMAKE_BINARY_DIR}/lib/libtbb${CMAKE_SHARED_LIBRARY_SUFFIX})
  ExternalProject_Add(
    TBB
    URL ${lcgpackages}/tbb${tbb_version}.tar.gz
    INSTALL_DIR ${CMAKE_BINARY_DIR}
    CONFIGURE_COMMAND ""
    BUILD_COMMAND make CXXFLAGS=${_tbb_cxxflags} CPLUS=${CMAKE_CXX_COMPILER} CONLY=${CMAKE_C_COMPILER}
    INSTALL_COMMAND ${CMAKE_COMMAND} -Dinstall_dir=<INSTALL_DIR> -Dsource_dir=<SOURCE_DIR>
                                     -P ${CMAKE_SOURCE_DIR}/cmake/scripts/InstallTBB.cmake
    INSTALL_COMMAND ""
    BUILD_IN_SOURCE 1
    LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1
    BUILD_BYPRODUCTS ${TBB_LIBRARIES}
  )
  set(TBB_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/include)
  install(DIRECTORY ${CMAKE_BINARY_DIR}/lib/ DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries FILES_MATCHING PATTERN "libtbb*")
  set(TBB_TARGET TBB)
endif()

#---Check for OCC--------------------------------------------------------------------
if(geocad)
  find_package(OCC COMPONENTS TKPrim TKBRep TKOffset TKGeomBase TKShHealing TKTopAlgo
                              TKSTEP TKG2d TKBool TKBO TKXCAF TKXDESTEP TKLCAF TKernel TKXSBase TKG3d TKMath)
  if(NOT OCC_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "OpenCascade libraries not found and is required (geocad option enabled)")
    else()
      message(STATUS "OpenCascade libraries not found. Set variable CASROOT to point to your OpenCascade installation")
      message(STATUS "For the time being switching OFF 'geocad' option")
      set(geocad OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for VecGeom--------------------------------------------------------------------
if (vecgeom)
  message(STATUS "Looking for VecGeom")
  find_package(VecGeom ${VecGeom_FIND_VERSION} CONFIG QUIET)
  if(NOT VecGeom_FOUND )
    if(fail-on-missing)
      message(FATAL_ERROR "VecGeom not found. Ensure that the installation of VecGeom is in the CMAKE_PREFIX_PATH")
    else()
      message(STATUS "VecGeom not found. Ensure that the installation of VecGeom is in the CMAKE_PREFIX_PATH")
      message(STATUS "              example: CMAKE_PREFIX_PATH=<VecGeom_install_path>/lib/CMake/VecGeom")
      message(STATUS "              For the time being switching OFF 'vecgeom' option")
      set(vecgeom OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for Vc compatibility-----------------------------------------------------------
if(vc OR builtin_vc)
  if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 4.5)
      message(STATUS "Vc requires GCC version >= 4.5; switching OFF 'vc' option")
      set(vc OFF CACHE BOOL "" FORCE)
      set(builtin_vc OFF CACHE BOOL "" FORCE)
    endif()
  elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    if ( APPLE AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 4)
      message(STATUS "Vc requires Apple Clang version >= 4.0; switching OFF 'vc' option")
      set(vc OFF CACHE BOOL "" FORCE)
      set(builtin_vc OFF CACHE BOOL "" FORCE)
    elseif (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 3.1)
      message(STATUS "Vc requires Clang version >= 3.1; switching OFF 'vc' option")
      set(vc OFF CACHE BOOL "" FORCE)
      set(builtin_vc OFF CACHE BOOL "" FORCE)
    endif()
  elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 17.0)  # equivalent to MSVC 2010
      message(STATUS "Vc requires MSVC version >= 2011; switching OFF 'vc' option")
      set(vc OFF CACHE BOOL "" FORCE)
      set(builtin_vc OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

#---Check for Vc---------------------------------------------------------------------
if(builtin_vc)
  unset(Vc_FOUND)
  unset(Vc_FOUND CACHE)
  set(vc ON CACHE BOOL "" FORCE)
elseif(vc)
  if(fail-on-missing)
    find_package(Vc 1.3.0 CONFIG QUIET REQUIRED)
  else()
    find_package(Vc 1.3.0 CONFIG QUIET)
    if(NOT Vc_FOUND)
      message(STATUS "Vc library not found, support for it disabled.")
      message(STATUS "Please enable the option 'builtin_vc' to build Vc internally.")
      set(vc OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

if(vc AND NOT Vc_FOUND AND NOT (veccore OR builtin_veccore))
  set(Vc_VERSION "1.3.2")
  set(Vc_PROJECT "Vc-${Vc_VERSION}")
  set(Vc_SRC_URI "${lcgpackages}/${Vc_PROJECT}.tar.gz")
  set(Vc_SRC_MD5 "f996a2dcab9f0ef3e21ba0d0feba9c3e")
  set(Vc_DESTDIR "${CMAKE_BINARY_DIR}/VC-prefix/install")
  set(Vc_ROOTDIR "${Vc_DESTDIR}/${CMAKE_INSTALL_PREFIX}")
  set(Vc_LIBNAME "${CMAKE_STATIC_LIBRARY_PREFIX}Vc${CMAKE_STATIC_LIBRARY_SUFFIX}")
  set(Vc_LIBRARY "${Vc_ROOTDIR}/${_LIBDIR_DEFAULT}/${Vc_LIBNAME}")

  ExternalProject_Add(VC
    URL     ${Vc_SRC_URI}
    URL_MD5 ${Vc_SRC_MD5}
    BUILD_IN_SOURCE 0
    BUILD_BYPRODUCTS ${Vc_LIBRARY}
    LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1
    CMAKE_ARGS -G ${CMAKE_GENERATOR}
               -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
               -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
               -DCMAKE_C_FLAGS=${CMAKE_C_FLAGS}
               -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
               -DCMAKE_CXX_FLAGS=${CMAKE_CXX_FLAGS}
               -DCMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX}
    INSTALL_COMMAND env DESTDIR=${Vc_DESTDIR} ${CMAKE_COMMAND} --build . --target install
  )

  set(VC_TARGET VC)
  add_library(Vc STATIC IMPORTED)
  set_property(TARGET Vc PROPERTY IMPORTED_LOCATION ${Vc_LIBRARY})
  add_dependencies(Vc VC)

  set(Vc_LIBRARIES Vc)
  set(Vc_INCLUDE_DIR "${Vc_ROOTDIR}/include")
  set(Vc_CMAKE_MODULES_DIR "${Vc_ROOTDIR}/${_LIBDIR_DEFAULT}/cmake/Vc")

  find_package_handle_standard_args(Vc
    FOUND_VAR Vc_FOUND
    REQUIRED_VARS Vc_INCLUDE_DIR Vc_LIBRARIES Vc_CMAKE_MODULES_DIR
    VERSION_VAR Vc_VERSION)

  install(DIRECTORY ${Vc_ROOTDIR}/ DESTINATION ".")
endif()

if(Vc_FOUND)
  # Missing from VcConfig.cmake
  set(Vc_INCLUDE_DIRS ${Vc_INCLUDE_DIR})
endif()

#---Check for VecCore--------------------------------------------------------------------
if(veccore AND NOT builtin_veccore AND builtin_vc)
  message(WARNING "Vc is not relocatable, so 'builtin_vc' requires 'builtin_veccore' to set up Vc properly.")
  set(builtin_veccore ON CACHE BOOL "" FORCE)
endif()

if(builtin_veccore)
  unset(VecCore_FOUND)
  unset(VecCore_FOUND CACHE)
  set(veccore ON CACHE BOOL "" FORCE)
elseif(veccore)
  if(vc)
    set(VecCore_COMPONENTS Vc)
  endif()
  if(fail-on-missing)
    find_package(VecCore 0.4.0 CONFIG QUIET REQUIRED COMPONENTS ${VecCore_COMPONENTS})
  else()
    find_package(VecCore 0.4.0 CONFIG QUIET COMPONENTS ${VecCore_COMPONENTS})
    if(NOT VecCore_FOUND)
      message(STATUS "VecCore not found, support for it disabled.")
      message(STATUS "Please enable the option 'builtin_veccore' to build VecCore internally.")
      set(veccore OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

if(veccore AND NOT VecCore_FOUND)
  set(VecCore_VERSION "0.4.1")
  set(VecCore_PROJECT "VecCore-${VecCore_VERSION}")
  set(VecCore_SRC_URI "${lcgpackages}/${VecCore_PROJECT}.tar.gz")
  set(VecCore_SRC_MD5 "7728dc706744e54a79fcb80059a31529")
  set(VecCore_DESTDIR "${CMAKE_BINARY_DIR}/VECCORE-prefix/install")
  set(VecCore_ROOTDIR "${VecCore_DESTDIR}/${CMAKE_INSTALL_PREFIX}")

  if(builtin_vc)
    set(Vc_VERSION "1.3.2") # version built by VecCore
    set(Vc_LIBNAME "${CMAKE_STATIC_LIBRARY_PREFIX}Vc${CMAKE_STATIC_LIBRARY_SUFFIX}")
    set(Vc_LIBRARY "${VecCore_ROOTDIR}/lib/${Vc_LIBNAME}")
  endif()

  ExternalProject_Add(VECCORE
    URL     ${VecCore_SRC_URI}
    URL_MD5 ${VecCore_SRC_MD5}
    BUILD_IN_SOURCE 0
    BUILD_BYPRODUCTS ${Vc_LIBRARY}
    LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1
    CMAKE_ARGS -G ${CMAKE_GENERATOR}
               -DBUILD_TESTING=OFF -DBUILD_VC=${builtin_vc}
               -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
               -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
               -DCMAKE_C_FLAGS=${CMAKE_C_FLAGS}
               -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
               -DCMAKE_CXX_FLAGS=${CMAKE_CXX_FLAGS}
               -DCMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX}
    INSTALL_COMMAND env DESTDIR=${VecCore_DESTDIR} ${CMAKE_COMMAND} --build . --target install
  )

  set(VECCORE_TARGET VECCORE)

  if(builtin_vc)
    add_library(Vc STATIC IMPORTED)
    set_property(TARGET Vc PROPERTY IMPORTED_LOCATION ${Vc_LIBRARY})
    add_dependencies(Vc VECCORE)

    set(Vc_LIBRARIES Vc)
    set(Vc_INCLUDE_DIR ${VecCore_ROOTDIR}/include)
    set(Vc_INCLUDE_DIRS ${VecCore_ROOTDIR}/include)
    set(Vc_CMAKE_MODULES_DIR "${VecCore_ROOTDIR}/lib/cmake/Vc")

    find_package_handle_standard_args(Vc
      FOUND_VAR Vc_FOUND
      REQUIRED_VARS Vc_INCLUDE_DIR Vc_LIBRARIES Vc_CMAKE_MODULES_DIR
      VERSION_VAR Vc_VERSION)
  endif()

  if (vc OR builtin_vc)
    set(VecCore_Vc_FOUND True)
    set(VecCore_Vc_DEFINITIONS -DVECCORE_ENABLE_VC)
    set(VecCore_Vc_INCLUDE_DIR ${Vc_INCLUDE_DIR})
    set(VecCore_Vc_LIBRARIES ${Vc_LIBRARIES})

    set(VecCore_DEFINITIONS -DVECCORE_ENABLE_VC)
    set(VecCore_INCLUDE_DIRS ${Vc_INCLUDE_DIR})
    set(VecCore_LIBRARIES ${Vc_LIBRARIES})
  endif()

  set(VecCore_INCLUDE_DIRS ${VecCore_INCLUDE_DIRS} ${VecCore_ROOTDIR}/include)

  find_package_handle_standard_args(VecCore
    FOUND_VAR VecCore_FOUND
    REQUIRED_VARS VecCore_INCLUDE_DIRS
    VERSION_VAR VecCore_VERSION)

  install(DIRECTORY ${VecCore_ROOTDIR}/ DESTINATION ".")
endif()

#---Check for Vdt--------------------------------------------------------------------
if(vdt OR builtin_vdt)
  if(NOT builtin_vdt)
    message(STATUS "Looking for VDT")
    find_package(Vdt)
    if(NOT VDT_FOUND)
      if(fail-on-missing)
        message(FATAL_ERROR "VDT not found. Ensure that the installation of VDT is in the CMAKE_PREFIX_PATH")
      else()
        message(STATUS "VDT not found. Ensure that the installation of VDT is in the CMAKE_PREFIX_PATH")
        message(STATUS "               Alternatively, you can also enable the option 'builtin_vdt' to build the VDT libraries internally")
        message(STATUS "               For the time being switching OFF 'vdt' option")
        set(vdt OFF CACHE BOOL "" FORCE)
      endif()
    endif()
  endif()
  if(builtin_vdt)
    set(vdt_version 0.3.9)
    set(VDT_LIBRARIES ${CMAKE_BINARY_DIR}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}vdt${CMAKE_SHARED_LIBRARY_SUFFIX})
    ExternalProject_Add(
      VDT
      URL ${lcgpackages}/vdt-${vdt_version}.tar.gz
      INSTALL_DIR ${CMAKE_BINARY_DIR}
      CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
      LOG_DOWNLOAD 1 LOG_CONFIGURE 1 LOG_BUILD 1 LOG_INSTALL 1
      BUILD_BYPRODUCTS ${VDT_LIBRARIES}
    )
    set(VDT_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/include)
    install(FILES ${CMAKE_BINARY_DIR}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}vdt${CMAKE_SHARED_LIBRARY_SUFFIX} 
            DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries)
    install(DIRECTORY ${CMAKE_BINARY_DIR}/include/vdt
            DESTINATION ${CMAKE_INSTALL_INCLUDEDIR} COMPONENT extra-headers)
    set(vdt ON CACHE BOOL "" FORCE)
  endif()
endif()

#---Check for CUDA and BLAS ---------------------------------------------------------
if(tmva AND cuda)
  message(STATUS "Looking for CUDA for optional parts of TMVA")
  find_package(CUDA 7.5)
  if(NOT CUDA_FOUND)
    if(fail-on-missing)
      message(FATAL_ERROR "CUDA not found. Ensure that the installation of CUDA is in the CMAKE_PREFIX_PATH")
    else()
      message(STATUS "CUDA not found. Ensure that the installation of CUDA is in the CMAKE_PREFIX_PATH")
      message(STATUS "                For the time being switching OFF 'cuda' option")
      set(cuda OFF CACHE BOOL "" FORCE)
    endif()
  endif()
endif()

if(tmva AND imt)
  message(STATUS "Looking for BLAS for optional parts of TMVA")
  find_package(BLAS)
endif()


#---Download googletest--------------------------------------------------------------
if (testing)
  # FIXME: Remove our version of gtest in roottest. We can reuse this one.
  # Add gtest
  # http://stackoverflow.com/questions/9689183/cmake-googletest

  set(_byproduct_binary_dir
    ${CMAKE_CURRENT_BINARY_DIR}/googletest-prefix/src/googletest-build/googlemock/)
  set(_byproducts
    ${_byproduct_binary_dir}/gtest/libgtest.a
    ${_byproduct_binary_dir}/gtest/libgtest_main.a
    ${_byproduct_binary_dir}/libgmock.a
    ${_byproduct_binary_dir}/libgmock_main.a
    )

  ExternalProject_Add(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.8.0
    UPDATE_COMMAND ""
    # TIMEOUT 10
    # # Force separate output paths for debug and release builds to allow easy
    # # identification of correct lib in subsequent TARGET_LINK_LIBRARIES commands
    # CMAKE_ARGS -DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG:PATH=DebugLibs
    #            -DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE:PATH=ReleaseLibs
    #            -Dgtest_force_shared_crt=ON
    CMAKE_ARGS -G ${CMAKE_GENERATOR}
                  -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
                  -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
                  -DCMAKE_C_FLAGS=${CMAKE_C_FLAGS}
                  -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
                  -DCMAKE_CXX_FLAGS=${CMAKE_CXX_FLAGS}
                  -DCMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX}
    # Disable install step
    INSTALL_COMMAND ""
    BUILD_BYPRODUCTS ${_byproducts}
    # Wrap download, configure and build steps in a script to log output
    LOG_DOWNLOAD ON
    LOG_CONFIGURE ON
    LOG_BUILD ON)

  # Specify include dirs for gtest and gmock
  ExternalProject_Get_Property(googletest source_dir)
  set(GTEST_INCLUDE_DIR ${source_dir}/googletest/include)
  set(GMOCK_INCLUDE_DIR ${source_dir}/googlemock/include)

  # Libraries
  ExternalProject_Get_Property(googletest binary_dir)
  set(_G_LIBRARY_PATH ${binary_dir}/googlemock/)

  # gtest
  add_library(gtest IMPORTED STATIC GLOBAL)
  set_property(TARGET gtest PROPERTY IMPORTED_LOCATION ${_G_LIBRARY_PATH}/gtest/libgtest.a)
  add_dependencies(gtest googletest)

  # gtest_main
  add_library(gtest_main IMPORTED STATIC GLOBAL)
  set_property(TARGET gtest_main PROPERTY IMPORTED_LOCATION ${_G_LIBRARY_PATH}/gtest/libgtest_main.a)
  add_dependencies(gtest_main googletest)

  # gmock
  add_library(gmock IMPORTED STATIC GLOBAL)
  set_property(TARGET gmock PROPERTY IMPORTED_LOCATION ${_G_LIBRARY_PATH}/libgmock.a)
  add_dependencies(gmock googletest)

  # gmock_main
  add_library(gmock_main IMPORTED STATIC GLOBAL)
  set_property(TARGET gmock_main PROPERTY IMPORTED_LOCATION ${_G_LIBRARY_PATH}/libgmock_main.a)
  add_dependencies(gmock_main googletest)

endif()

#---Report non implemented options---------------------------------------------------
foreach(opt afs glite sapdb srp)
  if(${opt})
    message(STATUS ">>> Option '${opt}' not implemented yet! Signal your urgency to pere.mato@cern.ch")
    set(${opt} OFF CACHE BOOL "" FORCE)
  endif()
endforeach()

