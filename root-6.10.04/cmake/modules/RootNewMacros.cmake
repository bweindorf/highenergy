#---------------------------------------------------------------------------------------------------
#  RootNewMacros.cmake
#---------------------------------------------------------------------------------------------------
cmake_policy(SET CMP0003 NEW) # See "cmake --help-policy CMP0003" for more details
cmake_policy(SET CMP0011 NEW) # See "cmake --help-policy CMP0011" for more details
cmake_policy(SET CMP0009 NEW) # See "cmake --help-policy CMP0009" for more details

set(THISDIR ${CMAKE_CURRENT_LIST_DIR})

set(lib lib)
set(bin bin)
if(WIN32)
  set(ssuffix .bat)
  set(scomment rem)
  set(libprefix lib)
  set(ld_library_path PATH)
  set(libsuffix .dll)
  set(localruntimedir ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
  set(runtimedir ${CMAKE_INSTALL_BINDIR})
elseif(APPLE)
  set(ld_library_path DYLD_LIBRARY_PATH)
  set(ssuffix .csh)
  set(scomment \#)
  set(libprefix ${CMAKE_SHARED_LIBRARY_PREFIX})
  if(CMAKE_PROJECT_NAME STREQUAL ROOT)
    set(libsuffix .so)
  else()
    set(libsuffix ${CMAKE_SHARED_LIBRARY_SUFFIX})
  endif()
  set(localruntimedir ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
  set(runtimedir ${CMAKE_INSTALL_LIBDIR})
else()
  set(ld_library_path LD_LIBRARY_PATH)
  set(ssuffix .csh)
  set(scomment \#)
  set(libprefix ${CMAKE_SHARED_LIBRARY_PREFIX})
  set(libsuffix ${CMAKE_SHARED_LIBRARY_SUFFIX})
  set(localruntimedir ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
  set(runtimedir ${CMAKE_INSTALL_LIBDIR})
endif()

if(soversion)
  set(ROOT_LIBRARY_PROPERTIES ${ROOT_LIBRARY_PROPERTIES}
      VERSION ${ROOT_VERSION}
      SOVERSION ${ROOT_MAJOR_VERSION}.${ROOT_MINOR_VERSION}
      SUFFIX ${libsuffix}
      PREFIX ${libprefix} )
else()
  set(ROOT_LIBRARY_PROPERTIES ${ROOT_LIBRARY_PROPERTIES}
      SUFFIX ${libsuffix}
      PREFIX ${libprefix}
      IMPORT_PREFIX ${libprefix} )
endif()

set(CMAKE_VERBOSE_MAKEFILES OFF)
set(CMAKE_INCLUDE_CURRENT_DIR OFF)

include(CMakeParseArguments)

#---------------------------------------------------------------------------------------------------
#---ROOT_GLOB_FILES( <variable> [REALTIVE path] [FILTER regexp] <sources> ...)
#---------------------------------------------------------------------------------------------------
function(ROOT_GLOB_FILES variable)
  CMAKE_PARSE_ARGUMENTS(ARG "RECURSE" "RELATIVE;FILTER" "" ${ARGN})
  set(_possibly_recurse "")
  if (ARG_RECURSE)
    set(_possibly_recurse "_RECURSE")
  endif()
  if(ARG_RELATIVE)
    file(GLOB${_possibly_recurse} _sources RELATIVE ${ARG_RELATIVE} ${ARG_UNPARSED_ARGUMENTS})
  else()
    file(GLOB${_possibly_recurse} _sources ${ARG_UNPARSED_ARGUMENTS})
  endif()
  if(ARG_FILTER)
    foreach(s ${_sources})
      if(s MATCHES ${ARG_FILTER})
        list(REMOVE_ITEM _sources ${s})
      endif()
    endforeach()
  endif()
  set(${variable} ${_sources} PARENT_SCOPE)
endfunction()

function(ROOT_GLOB_SOURCES variable)
  ROOT_GLOB_FILES(_sources FILTER "(^|/)G__" ${ARGN})
  set(${variable} ${_sources} PARENT_SCOPE)
endfunction()

function(ROOT_GLOB_HEADERS variable)
  ROOT_GLOB_FILES(_sources FILTER "LinkDef" ${ARGN})
  set(${variable} ${_sources} PARENT_SCOPE)
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_GET_SOURCES( <variable> cwd <sources> ...)
#---------------------------------------------------------------------------------------------------
function(ROOT_GET_SOURCES variable cwd )
  set(sources)
  foreach( fp ${ARGN})
    if( IS_ABSOLUTE ${fp})
      file(GLOB files ${fp})
    else()
      if(root7)
        set(root7glob v7/src/${fp})
      endif()
      file(GLOB files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${cwd}/${fp} ${root7glob})
    endif()
    if(files)
      foreach(s ${files})
        if(fp MATCHES "[*]" AND s MATCHES "(^|/)G__") # Eliminate G__* files
        elseif(s MATCHES "${cwd}/G__")
          set(sources ${fp} ${sources})
        else()
          set(sources ${sources} ${s})
        endif()
      endforeach()
    else()
      if(fp MATCHES "(^|/)G__")
        set(sources ${fp} ${sources})
      else()
        set(sources ${sources} ${fp})
      endif()
    endif()
  endforeach()
  set(${variable} ${sources} PARENT_SCOPE)
endfunction()

#---------------------------------------------------------------------------------------------------
#---REFLEX_GENERATE_DICTIONARY( dictionary headerfiles SELECTION selectionfile OPTIONS opt1 opt2 ...)
#---------------------------------------------------------------------------------------------------
macro(REFLEX_GENERATE_DICTIONARY dictionary)
  CMAKE_PARSE_ARGUMENTS(ARG "" "SELECTION" "OPTIONS" ${ARGN})
  #---Get List of header files---------------
  set(headerfiles)
  foreach(fp ${ARG_UNPARSED_ARGUMENTS})
    file(GLOB files inc/${fp})
    if(files)
      foreach(f ${files})
        if(NOT f MATCHES LinkDef)
          set(headerfiles ${headerfiles} ${f})
        endif()
      endforeach()
    elseif(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${fp})
      set(headerfiles ${headerfiles} ${CMAKE_CURRENT_SOURCE_DIR}/${fp})
    else()
      set(headerfiles ${headerfiles} ${fp})
    endif()
  endforeach()
  #---Get Selection file------------------------------------
  if(IS_ABSOLUTE ${ARG_SELECTION})
    set(selectionfile ${ARG_SELECTION})
  else()
    set(selectionfile ${CMAKE_CURRENT_SOURCE_DIR}/${ARG_SELECTION})
  endif()

  set(gensrcdict ${dictionary}.cxx)

  #---roottest compability---------------------------------
  if(CMAKE_ROOTTEST_NOROOTMAP)
    set(rootmapname )
    set(rootmapopts )
  elseif(DEFINED CMAKE_ROOTTEST_NOROOTMAP)  # Follow the roottest dictionary library naming
    set(rootmapname ${dictionary}.rootmap)
    set(rootmapopts --rootmap=${rootmapname} --rootmap-lib=${libprefix}${dictionary}_dictrflx)
  else()
    set(rootmapname ${dictionary}Dict.rootmap)
    set(rootmapopts --rootmap=${rootmapname} --rootmap-lib=${libprefix}${dictionary}Dict)
  endif()

  set(include_dirs -I${CMAKE_CURRENT_SOURCE_DIR})
  get_directory_property(incdirs INCLUDE_DIRECTORIES)
  foreach( d ${incdirs})
   set(include_dirs ${include_dirs} -I${d})
  endforeach()

  get_directory_property(defs COMPILE_DEFINITIONS)
  foreach( d ${defs})
   set(definitions ${definitions} -D${d})
  endforeach()

  add_custom_command(
    OUTPUT ${gensrcdict} ${rootmapname}
    COMMAND ${ROOT_genreflex_CMD}
    ARGS ${headerfiles} -o ${gensrcdict} ${rootmapopts} --select=${selectionfile}
         --gccxmlpath=${GCCXML_home}/bin ${ARG_OPTIONS} ${include_dirs} ${definitions}
    DEPENDS ${headerfiles} ${selectionfile})

  #---roottest compability---------------------------------
  if(CMAKE_ROOTTEST_DICT)
    ROOTTEST_TARGETNAME_FROM_FILE(targetname ${dictionary})

    set(targetname "${targetname}-dictgen")

    add_custom_target(${targetname} DEPENDS ${gensrcdict} ${ROOT_LIBRARIES})
  else()
    set(targetname "${dictionary}-dictgen")
    # Creating this target at ALL level enables the possibility to generate dictionaries (genreflex step)
    # well before the dependent libraries of the dictionary are build
    add_custom_target(${targetname} ALL DEPENDS ${gensrcdict})
  endif()

endmacro()

#---------------------------------------------------------------------------------------------------
#---ROOT_GENERATE_DICTIONARY( dictionary headerfiles MODULE module DEPENDENCIES dep1 dep2
#                                                    STAGE1 LINKDEF linkdef OPTIONS opt1 opt2 ...)
#---------------------------------------------------------------------------------------------------
function(ROOT_GENERATE_DICTIONARY dictionary)
  CMAKE_PARSE_ARGUMENTS(ARG "STAGE1;MULTIDICT;NOINSTALL" "MODULE" "LINKDEF;OPTIONS;DEPENDENCIES" ${ARGN})

  # Check if OPTIONS start with a dash.
  if (ARG_OPTIONS)
    foreach(ARG_O ${ARG_OPTIONS})
      if (NOT ARG_O MATCHES "^-*")
        message(FATAL_ERROR "Wrong rootcling option: ${ARG_OPTIONS}")
      endif()
    endforeach()
  endif(ARG_OPTIONS)

  #---roottest compability---------------------------------
  if(CMAKE_ROOTTEST_DICT)
    set(CMAKE_INSTALL_LIBDIR ${CMAKE_CURRENT_BINARY_DIR})
    set(libprefix "")
  endif()

  #---Get the list of include directories------------------
  get_directory_property(incdirs INCLUDE_DIRECTORIES)
  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/inc)
    set(localinclude ${CMAKE_CURRENT_SOURCE_DIR}/inc)
  endif()
  #---Get the list of header files-------------------------
  set(headerfiles)
  set(_list_of_header_dependencies)
  foreach(fp ${ARG_UNPARSED_ARGUMENTS})
    if(${fp} MATCHES "[*?]") # Is this header a globbing expression?
      file(GLOB files inc/${fp} ${fp})
      foreach(f ${files})
        if(NOT f MATCHES LinkDef) # skip LinkDefs from globbing result
          list(APPEND headerfiles ${f})
          list(APPEND _list_of_header_dependencies ${f})
        endif()
      endforeach()
    elseif(CMAKE_PROJECT_NAME STREQUAL ROOT AND 
           EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${fp}) # only for ROOT project
      list(APPEND headerfiles ${CMAKE_CURRENT_SOURCE_DIR}/${fp})
      list(APPEND _list_of_header_dependencies ${CMAKE_CURRENT_SOURCE_DIR}/${fp})
    elseif(IS_ABSOLUTE ${fp})
      list(APPEND headerfiles ${fp})
      list(APPEND _list_of_header_dependencies ${fp})
    else()
      find_file(headerFile ${fp} HINTS ${localinclude} ${incdirs})
      list(APPEND headerfiles ${fp})
      if(headerFile)
        list(APPEND _list_of_header_dependencies ${headerFile})
      endif()
      unset(headerFile CACHE)
    endif()
  endforeach()
  string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/inc/" ""  headerfiles "${headerfiles}") 
  # Replace the non-standard folder layout of Core.
  if (ARG_STAGE1 AND ARG_MODULE STREQUAL "Core")
    # FIXME: Glob these folders.
    set(core_folders "base|clib|clingutils|cont|dictgen|doc|foundation|lzma|macosx|meta|metacling|multiproc|newdelete|pcre|rint|rootcling_stage1|textinput|thread|unix|winnt|zip")
    string(REGEX REPLACE "${CMAKE_SOURCE_DIR}/core/(${core_folders})/inc/" ""  headerfiles "${headerfiles}")
  endif()

  if(CMAKE_PROJECT_NAME STREQUAL ROOT)
    set(includedirs -I${CMAKE_SOURCE_DIR}
                    -I${CMAKE_SOURCE_DIR}/interpreter/cling/include # This is for the RuntimeUniverse
                    -I${CMAKE_BINARY_DIR}/include)
    set(excludepaths ${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR})
  elseif(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/inc)
    set(includedirs -I${CMAKE_CURRENT_SOURCE_DIR}/inc)
  endif()
  foreach( d ${incdirs})
   set(includedirs ${includedirs} -I${d})
  endforeach()
  list(REMOVE_DUPLICATES includedirs)
  #---Get the list of definitions---------------------------
  get_directory_property(defs COMPILE_DEFINITIONS)
  foreach( d ${defs})
   if((NOT d MATCHES "=") AND (NOT d MATCHES "^[$]<.*>$")) # avoid generator expressions
     set(definitions ${definitions} -D${d})
   endif()
  endforeach()
  #---Get LinkDef.h file------------------------------------
  foreach( f ${ARG_LINKDEF})
    if( IS_ABSOLUTE ${f})
      set(_linkdef ${_linkdef} ${f})
    else()
      if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/inc/${f})
        set(_linkdef ${_linkdef} ${CMAKE_CURRENT_SOURCE_DIR}/inc/${f})
      else()
        set(_linkdef ${_linkdef} ${CMAKE_CURRENT_SOURCE_DIR}/${f})
      endif()
    endif()
  endforeach()

  #---Build the names for library, pcm and rootmap file ----
  get_filename_component(dict_base_name ${dictionary} NAME_WE)
  if(dict_base_name MATCHES "^G__")
    string(SUBSTRING ${dictionary} 3 -1 deduced_arg_module)
  else()
    set(deduced_arg_module ${dict_base_name})
  endif()

  #---Set the library output directory-----------------------
  if(DEFINED CMAKE_LIBRARY_OUTPUT_DIRECTORY AND NOT CMAKE_LIBRARY_OUTPUT_DIRECTORY STREQUAL "")
    set(library_output_dir ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
  else()
    set(library_output_dir ${CMAKE_CURRENT_BINARY_DIR})
  endif()

  if(ARG_MODULE)
    set(library_name ${libprefix}${ARG_MODULE}${libsuffix})
    if(ARG_MULTIDICT)
      set(newargs -s ${library_output_dir}/${library_name} -multiDict)
      set(pcm_name ${library_output_dir}/${libprefix}${ARG_MODULE}_${dictionary}_rdict.pcm)
      set(rootmap_name ${library_output_dir}/${libprefix}${deduced_arg_module}.rootmap)
    else()
      set(newargs -s ${library_output_dir}/${library_name})
      set(pcm_name ${library_output_dir}/${libprefix}${ARG_MODULE}_rdict.pcm)
      set(rootmap_name ${library_output_dir}/${libprefix}${ARG_MODULE}.rootmap)
    endif()
  else()
    set(library_name ${libprefix}${deduced_arg_module}${libsuffix})
    set(newargs -s ${library_output_dir}/${library_name})
    set(pcm_name ${library_output_dir}/${libprefix}${deduced_arg_module}_rdict.pcm)
    set(rootmap_name ${library_output_dir}/${libprefix}${deduced_arg_module}.rootmap)
  endif()

  if(CMAKE_ROOTTEST_NOROOTMAP)
    set(rootmapname )
    set(rootmapargs )
  else()
    set(rootmapargs -rml ${library_name} -rmf ${rootmap_name})
  endif()

  #---Get the library and module dependencies-----------------
  if(ARG_DEPENDENCIES)
    foreach(dep ${ARG_DEPENDENCIES})
      set(newargs ${newargs} -m  ${libprefix}${dep}_rdict.pcm)
    endforeach()
  endif()

  #---what rootcling command to use--------------------------
  if(ARG_STAGE1)
    set(command rootcling_stage1)
    set(pcm_name)
  else()
    if(CMAKE_PROJECT_NAME STREQUAL ROOT)
      set(command ${CMAKE_COMMAND} -E env "LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH}" "ROOTIGNOREPREFIX=1" $<TARGET_FILE:rootcling> -rootbuild)
      set(ROOTCINTDEP rootcling)
    elseif(TARGET ROOT::rootcling)
      set(command ROOT::rootcling)
    else()
      set(command rootcling)
    endif()
  endif()

  #---build the path exclusion switches----------------------
  set(excludepathsargs "")
  foreach(excludepath ${excludepaths})
    set(excludepathsargs ${excludepathsargs} -excludePath ${excludepath})
  endforeach()

  #---build the implicit dependencies arguments
  foreach(_dep ${_linkdef} ${_list_of_header_dependencies})
    list(APPEND _implicitdeps CXX ${_dep})
  endforeach()

  #---call rootcint------------------------------------------
  add_custom_command(OUTPUT ${dictionary}.cxx ${pcm_name} ${rootmap_name}
                     COMMAND ${command} -f  ${dictionary}.cxx ${newargs} ${excludepathsargs} ${rootmapargs}
                                        ${ARG_OPTIONS} ${definitions} ${includedirs} ${headerfiles} ${_linkdef}
                     IMPLICIT_DEPENDS ${_implicitdeps}
                     DEPENDS ${_list_of_header_dependencies} ${_linkdef} ${ROOTCINTDEP})
  get_filename_component(dictname ${dictionary} NAME)

  #---roottest compability
  if(ARG_NOINSTALL OR CMAKE_ROOTTEST_DICT OR (NOT DEFINED CMAKE_LIBRARY_OUTPUT_DIRECTORY))
    add_custom_target(${dictname} DEPENDS ${dictionary}.cxx)
  else()
    add_custom_target(${dictname} DEPENDS ${dictionary}.cxx)

    set_property(GLOBAL APPEND PROPERTY ROOT_DICTIONARY_TARGETS ${dictname})
    set_property(GLOBAL APPEND PROPERTY ROOT_DICTIONARY_FILES ${CMAKE_CURRENT_BINARY_DIR}/${dictionary}.cxx)

    if(ARG_STAGE1)
      install(FILES ${rootmap_name}
                    DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries)
    else()
      install(FILES ${pcm_name} ${rootmap_name}
                    DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries)
    endif()
  endif()
  if(cxxmodules)
    # FIXME: Support mulptiple dictionaries. In some cases (libSMatrix and
    # libGenVector) we have to have two or more dictionaries (eg. for math,
    # we need the two for double vs Double32_t template specializations).
    # In some other cases, eg. libTreePlayer.so we add in a separate dictionary
    # files which for some reason (temporarily?) cannot be put in the PCH. Eg.
    # all rest of the first dict is in the PCH but this file is not and it
    # cannot be present in the original dictionary.
    if(NOT ARG_MULTIDICT)
      ROOT_CXXMODULES_APPEND_TO_MODULEMAP("${library_name}" "${headerfiles}")
    endif()
  endif(cxxmodules)
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_CXXMODULES_APPEND_TO_MODULEMAP( library library_headers )
#---------------------------------------------------------------------------------------------------
function (ROOT_CXXMODULES_APPEND_TO_MODULEMAP library library_headers)
  if(NOT cxxmodules)
    message(FATAL_ERROR "Calling ROOT_CXXMODULES_APPEND_TO_MODULEMAP on non-modules build.")
  endif()

  ROOT_FIND_DIRS_WITH_HEADERS(dirs)

  # Variable 'dirs' is the return result of ROOT_FIND_DIRS_WITH_HEADERS.
  if(NOT DEFINED dirs)
    message(SEND_ERROR "Error, the variable ${dirs} is not defined!")
  endif()

  set(found_headers "")
  set(dir_headers "")
  foreach(d ${dirs})
    ROOT_GLOB_FILES(dir_headers
                    RECURSE
                    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}/${d}
                    FILTER "LinkDef" ${d}/*)
    list(APPEND found_headers "${dir_headers}")
  endforeach()

  if (APPLE)
    # FIXME: Krb5Auth.h triggers "declaration of '__mb_cur_max' has a different language linkage"
    # problem.
    # FIXME: error: declaration of 'NSObject' must be imported from module 'ROOT.libBonjour.so.TBonjourBrowser.h' before it is required
    if (${library} MATCHES "libKrb5Auth.so" OR ${library} MATCHES "(libGCocoa|libGQuartz)\..*")
      return()
    endif()
  endif(APPLE)

  set(excluded_headers "RConfig.h RVersion.h RtypesImp.h TVersionCheck.h
                        Rtypes.h RtypesCore.h TClassEdit.h
                        TIsAProxy.h TVirtualIsAProxy.h
                        DllImport.h TGenericClassInfo.h
                        TSchemaHelper.h ESTLType.h RStringView.h Varargs.h
                        RootMetaSelection.h libcpp_string_view.h
                        RWrap_libcpp_string_view.h
                        TException.h ThreadLocalStorage.h 
                        TBranchProxyTemplate.h TGLIncludes.h TGLWSIncludes.h
                        snprintf.h strlcpy.h")

   # Deprecated header files.
  set (excluded_headers "${excluded_headers} TSelectorCint.h")

  set(modulemap_entry "module \"${library}\" {")
  # For modules GCocoa and GQuartz we need objc context.
  if (${library} MATCHES "(libGCocoa|libGQuartz)\..*")
    set (modulemap_entry "${modulemap_entry}\n  requires objc\n")
  else()
    set (modulemap_entry "${modulemap_entry}\n  requires cplusplus\n")
  endif()
  if (library_headers)
    set(found_headers ${library_headers})
  endif()
  foreach(header ${found_headers})
    #message (STATUS "header: ${header}")
    set(textual_header "")
    if (${header} MATCHES ".*\.icc$")
      set(textual_header "textual ")
    endif()
    if (NOT ${excluded_headers} MATCHES ${header})
      set(modulemap_entry "${modulemap_entry}  module \"${header}\" { ${textual_header}header \"${header}\" export * }\n")
    endif()
  endforeach()
  #set(modulemap_entry "${modulemap_entry}  link \"lib/${library}\"\n")
  set(modulemap_entry "${modulemap_entry}  export *\n}\n\n")
  set_property(GLOBAL APPEND PROPERTY ROOT_CXXMODULES_EXTRA_MODULEMAP_CONTENT ${modulemap_entry})
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_LINKER_LIBRARY( <name> source1 source2 ...[TYPE STATIC|SHARED] [DLLEXPORT]
#                        [NOINSTALL] LIBRARIES library1 library2 ...
#                        BUILTINS dep1 dep2)
#---------------------------------------------------------------------------------------------------
function(ROOT_LINKER_LIBRARY library)
  CMAKE_PARSE_ARGUMENTS(ARG "DLLEXPORT;CMAKENOEXPORT;TEST;NOINSTALL" "TYPE" "LIBRARIES;DEPENDENCIES;BUILTINS"  ${ARGN})
  ROOT_GET_SOURCES(lib_srcs src ${ARG_UNPARSED_ARGUMENTS})
  if(NOT ARG_TYPE)
    set(ARG_TYPE SHARED)
  endif()
  if(ARG_TEST) # we are building a test, so add EXCLUDE_FROM_ALL
    set(_all EXCLUDE_FROM_ALL)
  endif()
  include_directories(BEFORE ${CMAKE_BINARY_DIR}/include)
  set(library_name ${library})
  if(TARGET ${library})
    message("Target ${library} already exists. Renaming target name to ${library}_new")
    set(library ${library}_new)
  endif()
  if(WIN32 AND ARG_TYPE STREQUAL SHARED AND NOT ARG_DLLEXPORT)
    #---create a list of all the object files-----------------------------
    if(CMAKE_GENERATOR MATCHES "Visual Studio")
      #foreach(src1 ${lib_srcs})
      #  if(NOT src1 MATCHES "[.]h$|[.]icc$|[.]hxx$|[.]hpp$")
      #    string (REPLACE ${CMAKE_CURRENT_SOURCE_DIR} "" src2 ${src1})
      #    string (REPLACE ${CMAKE_CURRENT_BINARY_DIR} "" src3 ${src2})
      #    string (REPLACE ".." "__" src ${src3})
      #    get_filename_component(name ${src} NAME_WE)
      #    set(lib_objs ${lib_objs} ${library}.dir/${CMAKE_CFG_INTDIR}/${name}.obj)
      #  endif()
      #endforeach()
     set(lib_objs ${lib_objs} ${library}.dir/${CMAKE_CFG_INTDIR}/*.obj)
    else()
      foreach(src1 ${lib_srcs})
        if(NOT src1 MATCHES "[.]h$|[.]icc$|[.]hxx$|[.]hpp$")
          string (REPLACE ${CMAKE_CURRENT_SOURCE_DIR} "" src2 ${src1})
          string (REPLACE ${CMAKE_CURRENT_BINARY_DIR} "" src3 ${src2})
          string (REPLACE ".." "__" src ${src3})
          get_filename_component(name ${src} NAME)
          get_filename_component(path ${src} PATH)
          set(lib_objs ${lib_objs} ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${library}.dir/${path}/${name}.obj)
        endif()
      endforeach()
    endif()
    #---create a shared library with the .def file------------------------
    add_library(${library} ${_all} SHARED ${lib_srcs})
    target_link_libraries(${library} ${ARG_LIBRARIES} ${ARG_DEPENDENCIES})
    set_target_properties(${library} PROPERTIES ${ROOT_LIBRARY_PROPERTIES} LINK_FLAGS -DEF:${library}.def)

    #---set the .def file as generated------------------------------------
    set_source_files_properties(${library}.def PROPERTIES GENERATED 1)
    #---create a custom pre-link command that runs bindexplib
    add_custom_command(TARGET ${library} PRE_LINK
                       COMMAND bindexplib
                       ARGS -o ${library}.def ${libprefix}${library} ${lib_objs}
                       DEPENDS bindexplib )
  else()
    #---Need to add a dummy source file if all sources are OBJECT libraries (Xcode, ...)
    if(NOT lib_srcs MATCHES "(^|[;])[^$][^<]")
      add_custom_command(OUTPUT dummy.cxx COMMAND ${CMAKE_COMMAND} -E touch dummy.cxx)
      set(lib_srcs ${lib_srcs} dummy.cxx)
    endif()
    add_library( ${library} ${_all} ${ARG_TYPE} ${lib_srcs})
    if(ARG_TYPE STREQUAL SHARED)
      set_target_properties(${library} PROPERTIES  ${ROOT_LIBRARY_PROPERTIES} )
    endif()
    if(explicitlink OR ROOT_explicitlink_FOUND)
      target_link_libraries(${library} ${ARG_LIBRARIES} ${ARG_DEPENDENCIES})
    else()
      target_link_libraries(${library} ${ARG_LIBRARIES})
    endif()
  endif()
  if(TARGET G__${library})
    add_dependencies(${library} G__${library})
  endif()
  add_dependencies(${library} move_headers)
  set_property(GLOBAL APPEND PROPERTY ROOT_EXPORTED_TARGETS ${library})
  set_target_properties(${library} PROPERTIES OUTPUT_NAME ${library_name})
  set_target_properties(${library} PROPERTIES INTERFACE_LINK_LIBRARIES "${ARG_DEPENDENCIES}")
  # Do not add -Dname_EXPORTS to the command-line when building files in this
  # target. Doing so is actively harmful for the modules build because it
  # creates extra module variants, and not useful because we don't use these
  # macros.
  set_target_properties(${library} PROPERTIES DEFINE_SYMBOL "")
  if(ARG_BUILTINS)
    foreach(arg1 ${ARG_BUILTINS})
      if(${arg1}_TARGET)
        add_dependencies(${library} ${${arg1}_TARGET})
      endif()
    endforeach()
  endif()

  #----Installation details-------------------------------------------------------
  if(NOT ARG_TEST AND NOT ARG_NOINSTALL AND CMAKE_LIBRARY_OUTPUT_DIRECTORY)
    if(ARG_CMAKENOEXPORT)
      install(TARGETS ${library} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT libraries
                                 LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries
                                 ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries)
    else()
      install(TARGETS ${library} EXPORT ${CMAKE_PROJECT_NAME}Exports
                                 RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT libraries
                                 LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries
                                 ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries)
    endif()
    if(WIN32 AND ARG_TYPE STREQUAL SHARED)
      install(FILES ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/lib${library}.pdb
                    CONFIGURATIONS Debug RelWithDebInfo
                    DESTINATION ${CMAKE_INSTALL_BINDIR}
                    COMPONENT libraries)
    endif()
  endif()
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_OBJECT_LIBRARY( <name> source1 source2 ... BUILTINS dep1 dep2 ...)
#---------------------------------------------------------------------------------------------------
function(ROOT_OBJECT_LIBRARY library)
  CMAKE_PARSE_ARGUMENTS(ARG "" "" "BUILTINS"  ${ARGN})
  ROOT_GET_SOURCES(lib_srcs src ${ARG_UNPARSED_ARGUMENTS})
  include_directories(BEFORE ${CMAKE_BINARY_DIR}/include)
  add_library( ${library} OBJECT ${lib_srcs})
  if(lib_srcs MATCHES "(^|/)(G__[^.]*)[.]cxx.*")
     add_dependencies(${library} ${CMAKE_MATCH_2})
  endif()
  add_dependencies(${library} move_headers)

  #--- Only for building shared libraries
  set_property(TARGET ${library} PROPERTY POSITION_INDEPENDENT_CODE 1)
  # Do not add -Dname_EXPORTS to the command-line when building files in this
  # target. Doing so is actively harmful for the modules build because it
  # creates extra module variants, and not useful because we don't use these
  # macros.
  set_target_properties(${library} PROPERTIES DEFINE_SYMBOL "")

  if(ARG_BUILTINS)
    foreach(arg1 ${ARG_BUILTINS})
      if(${arg1}_TARGET)
        add_dependencies(${library} ${${arg1}_TARGET})
      endif()
    endforeach()
  endif()

  #--- Fill the property OBJECTS with all the object files
  #    This is needed becuase the generator expression $<TARGET_OBJECTS:target>
  #    does not get expanded when used in custom command dependencies
  get_target_property(sources ${library} SOURCES)
  foreach(s ${sources})
    if(CMAKE_GENERATOR MATCHES Xcode)
      get_filename_component(name ${s} NAME_WE)
      set(obj ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_PROJECT_NAME}.build/${CMAKE_CFG_INTDIR}/${library}.build/Objects-normal/x86_64/${name}${CMAKE_CXX_OUTPUT_EXTENSION})
    else()
      if(IS_ABSOLUTE ${s})
        string(REGEX REPLACE "([][.?*+|()$^-])" "\\\\\\1" escaped_source_dir "${CMAKE_CURRENT_SOURCE_DIR}")
        string(REGEX REPLACE "([][.?*+|()$^-])" "\\\\\\1" escaped_binary_dir "${CMAKE_CURRENT_BINARY_DIR}")
        if(${s} MATCHES "^${escaped_source_dir}")
          string(REPLACE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${library}.dir src ${s})
        elseif(${s} MATCHES "^${escaped_binary_dir}")
          string(REPLACE ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${library}.dir src ${s})
        else()
          #message(WARNING "Unknown location of source ${s} for object library ${library}")
        endif()
      else()
        set(src ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${library}.dir/${s})
      endif()
      set(obj ${src}${CMAKE_CXX_OUTPUT_EXTENSION})
    endif()
    set_property(TARGET ${library} APPEND PROPERTY OBJECTS ${obj})
  endforeach()
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_MODULE_LIBRARY( <name> source1 source2 ... [DLLEXPORT] LIBRARIES library1 library2 ...)
#---------------------------------------------------------------------------------------------------
function(ROOT_MODULE_LIBRARY library)
  CMAKE_PARSE_ARGUMENTS(ARG "" "" "LIBRARIES" ${ARGN})
  ROOT_GET_SOURCES(lib_srcs src ${ARG_UNPARSED_ARGUMENTS})
  include_directories(BEFORE ${CMAKE_BINARY_DIR}/include)
  add_library( ${library} SHARED ${lib_srcs})
  add_dependencies(${library} move_headers)
  set_target_properties(${library}  PROPERTIES ${ROOT_LIBRARY_PROPERTIES})
  # Do not add -Dname_EXPORTS to the command-line when building files in this
  # target. Doing so is actively harmful for the modules build because it
  # creates extra module variants, and not useful because we don't use these
  # macros.
  set_target_properties(${library} PROPERTIES DEFINE_SYMBOL "")

  target_link_libraries(${library} ${ARG_LIBRARIES})
  #----Installation details-------------------------------------------------------
  install(TARGETS ${library} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT libraries
                             LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries
                             ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries)
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_GENERATE_ROOTMAP( library LINKDEF linkdef LIBRRARY lib DEPENDENCIES lib1 lib2 )
#---------------------------------------------------------------------------------------------------
function(ROOT_GENERATE_ROOTMAP library)
  return()   #--- No needed anymore
  CMAKE_PARSE_ARGUMENTS(ARG "" "LIBRARY" "LINKDEF;DEPENDENCIES" ${ARGN})
  get_filename_component(libname ${library} NAME_WE)
  get_filename_component(path ${library} PATH)

  #---Set the library output directory-----------------------
  if(DEFINED CMAKE_LIBRARY_OUTPUT_DIRECTORY)
    set(library_output_dir ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
  else()
    set(library_output_dir ${CMAKE_CURRENT_BINARY_DIR})
  endif()

  set(outfile ${library_output_dir}/${libprefix}${libname}.rootmap)
  foreach( f ${ARG_LINKDEF})
    if( IS_ABSOLUTE ${f})
      set(_linkdef ${_linkdef} ${f})
    else()
      set(_linkdef ${_linkdef} ${CMAKE_CURRENT_SOURCE_DIR}/inc/${f})
    endif()
  endforeach()
  foreach(d ${ARG_DEPENDENCIES})
    get_filename_component(_ext ${d} EXT)
    if(_ext)
      set(_dependencies ${_dependencies} ${d})
    else()
      set(_dependencies ${_dependencies} ${libprefix}${d}${CMAKE_SHARED_LIBRARY_SUFFIX})
    endif()
  endforeach()
  if(ARG_LIBRARY)
    set(_library ${ARG_LIBRARY})
  else()
    set(_library ${libprefix}${library}${CMAKE_SHARED_LIBRARY_SUFFIX})
  endif()
  #---Build the rootmap file--------------------------------------
  #add_custom_command(OUTPUT ${outfile}
  #                   COMMAND ${rlibmap_cmd} -o ${outfile} -l ${_library} -d ${_dependencies} -c ${_linkdef}
  #                   DEPENDS ${_linkdef} ${rlibmap_cmd} )
  add_custom_target( ${libprefix}${library}.rootmap ALL DEPENDS  ${outfile})
  set_target_properties(${libprefix}${library}.rootmap PROPERTIES FOLDER RootMaps )
  #---Install the rootmap file------------------------------------
  install(FILES ${outfile} DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libraries)
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_FIND_DIRS_WITH_HEADERS([dir1 dir2 ...] OPTIONS [options])
#---------------------------------------------------------------------------------------------------
function(ROOT_FIND_DIRS_WITH_HEADERS result_dirs)
  if( ARGN )
    set(dirs ${ARGN})
  else()
    set(dirs inc/)
    if(root7)
      if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/v7/inc)
        set(dirs inc/ v7/inc/)
      endif()
    endif()
  endif()
  set (${result_dirs} ${dirs} PARENT_SCOPE)
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_INSTALL_HEADERS([dir1 dir2 ...] OPTIONS [options])
#---------------------------------------------------------------------------------------------------
function(ROOT_INSTALL_HEADERS)
  CMAKE_PARSE_ARGUMENTS(ARG "OPTIONS" "" "FILTER" ${ARGN})
  if (${ARG_OPTIONS})
    message(FATAL_ERROR "ROOT_INSTALL_HEADERS no longer supports the OPTIONS argument. Rewrite using the FILTER argument.")
  endif()
  ROOT_FIND_DIRS_WITH_HEADERS(dirs ${ARG_UNPARSED_ARGUMENTS})
  set (filter "LinkDef")
  set (options REGEX "LinkDef" EXCLUDE)
  foreach (f ${ARG_FILTER})
    set (filter "${filter}|${f}")
    set (options ${options} REGEX "${f}" EXCLUDE)
  endforeach()
  set (filter "(${filter})")
  string(REPLACE ${CMAKE_SOURCE_DIR} "" tgt ${CMAKE_CURRENT_SOURCE_DIR})
  string(MAKE_C_IDENTIFIER move_header${tgt} tgt)
  set_property(GLOBAL APPEND PROPERTY ROOT_HEADER_TARGETS ${tgt})
  foreach(d ${dirs})
    install(DIRECTORY ${d} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
                           COMPONENT headers
                           ${options})
    string(REGEX REPLACE "(.*)/$" "\\1" d ${d})
    ROOT_GLOB_FILES(include_files
      RECURSE
      RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}/${d}
      FILTER ${filter} 
      ${d}/*.h ${d}/*.hxx ${d}/*.icc )
    foreach (include_file ${include_files})
      set (src ${CMAKE_CURRENT_SOURCE_DIR}/${d}/${include_file})
      set (dst ${CMAKE_BINARY_DIR}/include/${include_file})
      add_custom_command(
        OUTPUT ${dst}
        COMMAND ${CMAKE_COMMAND} -E copy ${src} ${dst}
        COMMENT "Copying header ${src} to /include"
        DEPENDS ${src})
      list(APPEND dst_list ${dst})  
    endforeach()
    set_property(GLOBAL APPEND PROPERTY ROOT_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/${d})
  endforeach()
  add_custom_target(${tgt} DEPENDS ${dst_list})
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_STANDARD_LIBRARY_PACKAGE(libname DEPENDENCIES lib1 lib2)
#---------------------------------------------------------------------------------------------------
function(ROOT_STANDARD_LIBRARY_PACKAGE libname)
  CMAKE_PARSE_ARGUMENTS(ARG "" "" "DEPENDENCIES;DICTIONARY_OPTIONS" ${ARGN})
  ROOT_GENERATE_DICTIONARY(G__${libname} *.h MODULE ${libname} LINKDEF LinkDef.h OPTIONS ${ARG_DICTIONARY_OPTIONS})
  ROOT_LINKER_LIBRARY(${libname} *.cxx G__${libname}.cxx DEPENDENCIES ${ARG_DEPENDENCIES})
  ROOT_INSTALL_HEADERS()
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_EXECUTABLE( <name> source1 source2 ... LIBRARIES library1 library2 ... BUILTINS dep1 dep2 ...)
#---------------------------------------------------------------------------------------------------
function(ROOT_EXECUTABLE executable)
  CMAKE_PARSE_ARGUMENTS(ARG "CMAKENOEXPORT;NOINSTALL;TEST" "" "LIBRARIES;BUILTINS;ADDITIONAL_COMPILE_FLAGS"  ${ARGN})
  ROOT_GET_SOURCES(exe_srcs src ${ARG_UNPARSED_ARGUMENTS})
  set(executable_name ${executable})
  if(TARGET ${executable})
    message("Target ${executable} already exists. Renaming target name to ${executable}_new")
    set(executable ${executable}_new)
  endif()
  if(ARG_TEST) # we are building a test, so add EXCLUDE_FROM_ALL
    set(_all EXCLUDE_FROM_ALL)
  endif()
  include_directories(BEFORE ${CMAKE_BINARY_DIR}/include)
  add_executable( ${executable} ${_all} ${exe_srcs})
  target_link_libraries(${executable} ${ARG_LIBRARIES} )
  if(WIN32 AND ${executable} MATCHES .exe)
    set_target_properties(${executable} PROPERTIES SUFFIX "")
  endif()
  set_property(GLOBAL APPEND PROPERTY ROOT_EXPORTED_TARGETS ${executable})
  set_target_properties(${executable} PROPERTIES OUTPUT_NAME ${executable_name})
  if (ARG_ADDITIONAL_COMPILE_FLAGS)
    set_target_properties(${executable} PROPERTIES COMPILE_FLAGS ${ARG_ADDITIONAL_COMPILE_FLAGS})
  endif()
  add_dependencies(${executable} move_headers)
  if(ARG_BUILTINS)
    foreach(arg1 ${ARG_BUILTINS})
      if(${arg1}_TARGET)
        add_dependencies(${executable} ${${arg1}_TARGET})
      endif()
    endforeach()
  endif()

  #----Installation details------------------------------------------------------
  if(NOT ARG_NOINSTALL AND CMAKE_RUNTIME_OUTPUT_DIRECTORY)
    if(ARG_CMAKENOEXPORT)
      install(TARGETS ${executable} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT applications)
    else()
      install(TARGETS ${executable} EXPORT ${CMAKE_PROJECT_NAME}Exports RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT applications)
    endif()
    if(WIN32)
      install(FILES ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${executable}.pdb
              CONFIGURATIONS Debug RelWithDebInfo
              DESTINATION ${CMAKE_INSTALL_BINDIR}
              COMPONENT applications)
    endif()
  endif()
endfunction()

#---------------------------------------------------------------------------------------------------
#---REFLEX_BUILD_DICTIONARY( dictionary headerfiles selectionfile OPTIONS opt1 opt2 ...  LIBRARIES lib1 lib2 ... )
#---------------------------------------------------------------------------------------------------
function(REFLEX_BUILD_DICTIONARY dictionary headerfiles selectionfile )
  CMAKE_PARSE_ARGUMENTS(ARG "" "" "LIBRARIES;OPTIONS" ${ARGN})
  REFLEX_GENERATE_DICTIONARY(${dictionary} ${headerfiles} SELECTION ${selectionfile} OPTIONS ${ARG_OPTIONS})
  add_library(${dictionary}Dict MODULE ${gensrcdict})
  target_link_libraries(${dictionary}Dict ${ARG_LIBRARIES} ${ROOT_Reflex_LIBRARY})
  #----Installation details-------------------------------------------------------
  install(TARGETS ${dictionary}Dict LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
  set(mergedRootMap ${CMAKE_INSTALL_PREFIX}/${lib}/${CMAKE_PROJECT_NAME}Dict.rootmap)
  set(srcRootMap ${CMAKE_CURRENT_BINARY_DIR}/${rootmapname})
  install(CODE "EXECUTE_PROCESS(COMMAND ${merge_rootmap_cmd} --do-merge --input-file ${srcRootMap} --merged-file ${mergedRootMap})")
endfunction()

#---------------------------------------------------------------------------------------------------
#---ROOT_CHECK_OUT_OF_SOURCE_BUILD( )
#---------------------------------------------------------------------------------------------------
macro(ROOT_CHECK_OUT_OF_SOURCE_BUILD)
  get_filename_component(bindir_parent ${CMAKE_BINARY_DIR} PATH)
  if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
     file(REMOVE_RECURSE ${CMAKE_SOURCE_DIR}/Testing)
     file(REMOVE ${CMAKE_SOURCE_DIR}/DartConfiguration.tcl)
     message(FATAL_ERROR "ROOT should be built as an out of source build, to keep the source directory clean. Please create a extra build directory and run the command 'cmake <path_to_source_dir>' in this newly created directory. You have also to delete the directory CMakeFiles and the file CMakeCache.txt in the source directory. Otherwise cmake will complain even if you run it from an out-of-source directory.")
  elseif(IS_SYMLINK ${CMAKE_BINARY_DIR} AND CMAKE_SOURCE_DIR STREQUAL bindir_parent)
     message(FATAL_ERROR "ROOT cannot be built from a sub-directory of the source tree that is a symlink. This is a current limitation of CMake. Please create a real build directory and run the command 'cmake <path_to_source_dir>' in this newly created directory.")
  endif()
endmacro()

#----------------------------------------------------------------------------
# function ROOT_ADD_TEST( <name> COMMAND cmd [arg1... ]
#                        [PRECMD cmd [arg1...]] [POSTCMD cmd [arg1...]]
#                        [OUTPUT outfile] [ERROR errfile] [INPUT infile]
#                        [ENVIRONMENT var1=val1 var2=val2 ...
#                        [DEPENDS test1 ...]
#                        [RUN_SERIAL]
#                        [TIMEOUT seconds]
#                        [DEBUG]
#                        [SOURCE_DIR dir] [BINARY_DIR dir]
#                        [WORKING_DIR dir]
#                        [BUILD target] [PROJECT project]
#                        [PASSREGEX exp] [FAILREGEX epx]
#                        [PASSRC code])
#
function(ROOT_ADD_TEST test)
  CMAKE_PARSE_ARGUMENTS(ARG "DEBUG;WILLFAIL;CHECKOUT;CHECKERR;RUN_SERIAL"
                            "TIMEOUT;BUILD;INPUT;OUTPUT;ERROR;SOURCE_DIR;BINARY_DIR;WORKING_DIR;PROJECT;PASSRC"
                             "COMMAND;COPY_TO_BUILDDIR;DIFFCMD;OUTCNV;OUTCNVCMD;PRECMD;POSTCMD;ENVIRONMENT;COMPILEMACROS;DEPENDS;PASSREGEX;OUTREF;ERRREF;FAILREGEX;LABELS"
                            ${ARGN})

  #- Handle COMMAND argument
  list(LENGTH ARG_COMMAND _len)
  if(_len LESS 1)
    if(NOT ARG_BUILD)
      message(FATAL_ERROR "ROOT_ADD_TEST: command is mandatory (without build)")
    endif()
  else()
    list(GET ARG_COMMAND 0 _prg)
    list(REMOVE_AT ARG_COMMAND 0)

    if(TARGET ${_prg})                                 # if command is a target, get the actual executable
      set(_prg "$<TARGET_FILE:${_prg}>")
      set(_cmd ${_prg} ${ARG_COMMAND})
    else()
      find_program(_exe ${_prg})
      if(_exe)                                         # if the command is found in the system, use it
        set(_cmd ${_exe} ${ARG_COMMAND})
      elseif(NOT IS_ABSOLUTE ${_prg})                  # if not absolute, assume is found in current binary dir
        set(_prg ${CMAKE_CURRENT_BINARY_DIR}/${_prg})
        set(_cmd ${_prg} ${ARG_COMMAND})
      else()                                           # take as it is
        set(_cmd ${_prg} ${ARG_COMMAND})
      endif()
      unset(_exe CACHE)
    endif()

    string(REPLACE ";" "^" _cmd "${_cmd}")
  endif()

  set(_command ${CMAKE_COMMAND} -DCMD=${_cmd})

  #- Handle PRE and POST commands
  if(ARG_PRECMD)
    string(REPLACE ";" "^" _pre "${ARG_PRECMD}")
    set(_command ${_command} -DPRE=${_pre})
  endif()

  if(ARG_POSTCMD)
    string(REPLACE ";" "^" _post "${ARG_POSTCMD}")
    set(_command ${_command} -DPOST=${_post})
  endif()

  #- Handle INPUT, OUTPUT, ERROR, DEBUG arguments
  if(ARG_INPUT)
    set(_command ${_command} -DIN=${ARG_INPUT})
  endif()

  if(ARG_OUTPUT)
    set(_command ${_command} -DOUT=${ARG_OUTPUT})
  endif()

  if(ARG_OUTREF)
    set(_command ${_command} -DOUTREF=${ARG_OUTREF})
  endif()

  if(ARG_ERRREF)
    set(_command ${_command} -DERRREF=${ARG_ERRREF})
  endif()

  if(ARG_ERROR)
    set(_command ${_command} -DERR=${ARG_ERROR})
  endif()

  if(ARG_WORKING_DIR)
    set(_command ${_command} -DCWD=${ARG_WORKING_DIR})
  endif()

  if(ARG_DEBUG)
    set(_command ${_command} -DDBG=ON)
  endif()

  if(ARG_PASSRC)
    set(_command ${_command} -DRC=${ARG_PASSRC})
  endif()

  if(ARG_OUTCNVCMD)
    string(REPLACE ";" "^" _outcnvcmd "${ARG_OUTCNVCMD}")
    string(REPLACE "=" "@" _outcnvcmd "${_outcnvcmd}")
    set(_command ${_command} -DCNVCMD=${_outcnvcmd})
  endif()

  if(ARG_OUTCNV)
    string(REPLACE ";" "^" _outcnv "${ARG_OUTCNV}")
    set(_command ${_command} -DCNV=${_outcnv})
  endif()

  if(ARG_DIFFCMD)
    string(REPLACE ";" "^" _diff_cmd "${ARG_DIFFCMD}")
    set(_command ${_command} -DDIFFCMD=${_diff_cmd})
  endif()

  if(ARG_CHECKOUT)
    set(_command ${_command} -DCHECKOUT=true)
  endif()

  if(ARG_CHECKERR)
    set(_command ${_command} -DCHECKERR=true)
  endif()

  set(_command ${_command} -DSYS=${ROOTSYS})

  #- Handle ENVIRONMENT argument
  if(ARG_ENVIRONMENT)
    string(REPLACE ";" "#" _env "${ARG_ENVIRONMENT}")
    string(REPLACE "=" "@" _env "${_env}")
    set(_command ${_command} -DENV=${_env})
  endif()

  #- Copy files to the build directory.
  if(ARG_COPY_TO_BUILDDIR)
    string(REPLACE ";" "^" _copy_files "${ARG_COPY_TO_BUILDDIR}")
    set(_command ${_command} -DCOPY=${_copy_files})
  endif()

  #- Locate the test driver
  find_file(ROOT_TEST_DRIVER RootTestDriver.cmake PATHS ${THISDIR} ${CMAKE_MODULE_PATH})
  if(NOT ROOT_TEST_DRIVER)
    message(FATAL_ERROR "ROOT_ADD_TEST: RootTestDriver.cmake not found!")
  endif()
  set(_command ${_command} -P ${ROOT_TEST_DRIVER})

  if(ARG_WILLFAIL)
    set(test ${test}_WILL_FAIL)
  endif()

  #- Now we can actually add the test
  if(ARG_BUILD)
    if(NOT ARG_SOURCE_DIR)
      set(ARG_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
    endif()
    if(NOT ARG_BINARY_DIR)
      set(ARG_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR})
    endif()
    if(NOT ARG_PROJECT)
       if(NOT PROJECT_NAME STREQUAL "ROOT")
         set(ARG_PROJECT ${PROJECT_NAME})
       else()
         set(ARG_PROJECT ${ARG_BUILD})
       endif()
    endif()
    add_test(NAME ${test} COMMAND ${CMAKE_CTEST_COMMAND}
      --build-and-test  ${ARG_SOURCE_DIR} ${ARG_BINARY_DIR}
      --build-generator ${CMAKE_GENERATOR}
      --build-makeprogram ${CMAKE_MAKE_PROGRAM}
      --build-target ${ARG_BUILD}
      --build-project ${ARG_PROJECT}
      --build-config $<CONFIGURATION>
      --build-noclean
      --test-command ${_command} )
    set_property(TEST ${test} PROPERTY ENVIRONMENT ROOT_DIR=${CMAKE_BINARY_DIR})
  else()
    add_test(NAME ${test} COMMAND ${_command})
    if (gnuinstall)
      set_property(TEST ${test} PROPERTY ENVIRONMENT ROOTIGNOREPREFIX=1)
    endif()
  endif()

  #- Handle TIMOUT and DEPENDS arguments
  if(ARG_TIMEOUT)
    set_property(TEST ${test} PROPERTY TIMEOUT ${ARG_TIMEOUT})
  endif()

  if(ARG_DEPENDS)
    set_property(TEST ${test} PROPERTY DEPENDS ${ARG_DEPENDS})
  endif()

  if(ARG_PASSREGEX)
    set_property(TEST ${test} PROPERTY PASS_REGULAR_EXPRESSION ${ARG_PASSREGEX})
  endif()

  if(ARG_FAILREGEX)
    set_property(TEST ${test} PROPERTY FAIL_REGULAR_EXPRESSION ${ARG_FAILREGEX})
  endif()

  if(ARG_WILLFAIL)
    set_property(TEST ${test} PROPERTY WILL_FAIL true)
  endif()

  if(ARG_LABELS)
    set_tests_properties(${test} PROPERTIES LABELS "${ARG_LABELS}")
  endif()

  if(ARG_RUN_SERIAL)
    set_property(TEST ${test} PROPERTY RUN_SERIAL true)
  endif()

endfunction()

#----------------------------------------------------------------------------
# ROOT_PATH_TO_STRING( <variable> path PATH_SEPARATOR_REPLACEMENT replacement )
#
# Mangle the path to a string.
#----------------------------------------------------------------------------
function(ROOT_PATH_TO_STRING resultvar path)
  # FIXME: Copied and modified from ROOTTEST_TARGETNAME_FROM_FILE. We should find a common place for that code.
  # FIXME: ROOTTEST_TARGETNAME_FROM_FILE could be replaced by just a call to string(MAKE_C_IDENTIFIER)...
  CMAKE_PARSE_ARGUMENTS(ARG "" "" "PATH_SEPARATOR_REPLACEMENT" ${ARGN})

  set(sep_replacement "")
  if (ARG_PATH_SEPARATOR_REPLACEMENT)
    set(sep_replacement ${ARG_PATH_SEPARATOR_REPLACEMENT})
  endif()

  get_filename_component(realfp ${path} ABSOLUTE)
  get_filename_component(filename_we ${path} NAME_WE)

  string(REPLACE "${CMAKE_SOURCE_DIR}" "" relativepath ${realfp})
  string(REPLACE "${path}" "" relativepath ${relativepath})

  string(MAKE_C_IDENTIFIER ${relativepath}${filename_we} mangledname)
  string(REPLACE "_" "${sep_replacement}" mangledname ${mangledname})

  set(${resultvar} "${mangledname}" PARENT_SCOPE)
endfunction(ROOT_PATH_TO_STRING)

#----------------------------------------------------------------------------
# ROOT_ADD_UNITTEST_DIR(<libraries ...>)
#----------------------------------------------------------------------------
function(ROOT_ADD_UNITTEST_DIR)
  ROOT_GLOB_FILES(test_files ${CMAKE_CURRENT_SOURCE_DIR}/*.cxx)
  # Get the component from the path. Eg. core to form coreTests test suite name.
  ROOT_PATH_TO_STRING(test_name ${CMAKE_CURRENT_SOURCE_DIR}/)
  ROOT_ADD_GTEST(${test_name}Unit ${test_files} LIBRARIES ${ARGN})
endfunction()

#----------------------------------------------------------------------------
# function ROOT_ADD_GTEST(<testsuite> source1 source2... LIBRARIES)
#
function(ROOT_ADD_GTEST test_suite)
  CMAKE_PARSE_ARGUMENTS(ARG "" "" "LIBRARIES" ${ARGN})
  include_directories(${CMAKE_CURRENT_BINARY_DIR} ${GTEST_INCLUDE_DIR} ${GMOCK_INCLUDE_DIR})

  set(source_files ${ARG_UNPARSED_ARGUMENTS})
  # Note we cannot use ROOT_EXECUTABLE without user-specified set of LIBRARIES to link with.
  # The test suites should choose this in their specific CMakeLists.txt file.
  # FIXME: For better coherence we could restrict the libraries the test suite could link
  # against. For example, tests in Core should link only against libCore. This could be tricky
  # to implement because some ROOT components create more than one library.
  ROOT_EXECUTABLE(${test_suite} ${source_files} LIBRARIES ${ARG_LIBRARIES})
  set_property(TARGET ${test_suite} PROPERTY RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
  target_link_libraries(${test_suite} gtest gtest_main gmock gmock_main)

  ROOT_PATH_TO_STRING(mangled_name ${test_suite} PATH_SEPARATOR_REPLACEMENT "-")
  ROOT_ADD_TEST(gtest${mangled_name} COMMAND ${test_suite} WORKING_DIR ${CMAKE_CURRENT_BINARY_DIR})
endfunction()


#----------------------------------------------------------------------------
# ROOT_ADD_TEST_SUBDIRECTORY( <name> )
#----------------------------------------------------------------------------
function(ROOT_ADD_TEST_SUBDIRECTORY subdir)
  file(RELATIVE_PATH subdir ${CMAKE_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/${subdir})
  set_property(GLOBAL APPEND PROPERTY ROOT_TEST_SUBDIRS ${subdir})
endfunction()

#----------------------------------------------------------------------------
# ROOT_ADD_CXX_FLAG(var flag)
#----------------------------------------------------------------------------
function(ROOT_ADD_CXX_FLAG var flag)
  string(REGEX REPLACE "[-.+/:= ]" "_" flag_esc "${flag}")
  CHECK_CXX_COMPILER_FLAG("-Werror ${flag}" CXX_HAS${flag_esc})
  if(CXX_HAS${flag_esc})
    set(${var} "${${var}} ${flag}" PARENT_SCOPE)
  endif()
endfunction()
#----------------------------------------------------------------------------
# ROOT_ADD_C_FLAG(var flag)
#----------------------------------------------------------------------------
function(ROOT_ADD_C_FLAG var flag)
  string(REGEX REPLACE "[-.+/:= ]" "_" flag_esc "${flag}")
  CHECK_C_COMPILER_FLAG("-Werror ${flag}" C_HAS${flag_esc})
  if(C_HAS${flag_esc})
    set(${var} "${${var}} ${flag}" PARENT_SCOPE)
  endif()
endfunction()

#----------------------------------------------------------------------------
# find_python_module(module [REQUIRED] [QUIET])
#----------------------------------------------------------------------------
function(find_python_module module)
   CMAKE_PARSE_ARGUMENTS(ARG "REQUIRED;QUIET" "" "" ${ARGN})
   string(TOUPPER ${module} module_upper)
   if(NOT PY_${module_upper})
      if(ARG_REQUIRED)
         set(py_${module}_FIND_REQUIRED TRUE)
      endif()
      if(ARG_QUIET)
         set(py_${module}_FIND_QUIETLY TRUE)
      endif()
      # A module's location is usually a directory, but for binary modules
      # it's a .so file.
      execute_process(COMMAND "${PYTHON_EXECUTABLE}" "-c"
         "import re, ${module}; print(re.compile('/__init__.py.*').sub('',${module}.__file__))"
         RESULT_VARIABLE _${module}_status
         OUTPUT_VARIABLE _${module}_location
         ERROR_VARIABLE _${module}_error
         OUTPUT_STRIP_TRAILING_WHITESPACE
         ERROR_STRIP_TRAILING_WHITESPACE)
      if(NOT _${module}_status)
         set(PY_${module_upper} ${_${module}_location} CACHE STRING "Location of Python module ${module}")
         mark_as_advanced(PY_${module_upper})
      else()
         if(NOT ARG_QUIET)
            message(STATUS "Failed to find Python module ${module}: ${_${module}_error}")
          endif()
      endif()
   endif()
   find_package_handle_standard_args(py_${module} DEFAULT_MSG PY_${module_upper})
   set(PY_${module_upper}_FOUND ${PY_${module_upper}_FOUND} PARENT_SCOPE)
endfunction()


