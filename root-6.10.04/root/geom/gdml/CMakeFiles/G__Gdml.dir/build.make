# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/brandon/Projects/root-6.10.04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/brandon/Projects/root-6.10.04/root

# Utility rule file for G__Gdml.

# Include the progress variables for this target.
include geom/gdml/CMakeFiles/G__Gdml.dir/progress.make

geom/gdml/CMakeFiles/G__Gdml: geom/gdml/G__Gdml.cxx


geom/gdml/G__Gdml.cxx: ../geom/gdml/inc/LinkDef.h
geom/gdml/G__Gdml.cxx: ../geom/gdml/inc/TGDMLParse.h
geom/gdml/G__Gdml.cxx: ../geom/gdml/inc/TGDMLWrite.h
geom/gdml/G__Gdml.cxx: ../geom/gdml/inc/TGDMLParse.h
geom/gdml/G__Gdml.cxx: ../geom/gdml/inc/TGDMLWrite.h
geom/gdml/G__Gdml.cxx: ../geom/gdml/inc/LinkDef.h
geom/gdml/G__Gdml.cxx: bin/rootcling
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__Gdml.cxx, ../../lib/libGdml_rdict.pcm, ../../lib/libGdml.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/geom/gdml && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/brandon/Projects/root-6.10.04/root/lib: ROOTIGNOREPREFIX=1 /home/brandon/Projects/root-6.10.04/root/bin/rootcling -rootbuild -f G__Gdml.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libGdml.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libGdml.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libGdml.rootmap -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include TGDMLParse.h TGDMLWrite.h /home/brandon/Projects/root-6.10.04/geom/gdml/inc/LinkDef.h

lib/libGdml_rdict.pcm: geom/gdml/G__Gdml.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libGdml_rdict.pcm

lib/libGdml.rootmap: geom/gdml/G__Gdml.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libGdml.rootmap

G__Gdml: geom/gdml/CMakeFiles/G__Gdml
G__Gdml: geom/gdml/G__Gdml.cxx
G__Gdml: lib/libGdml_rdict.pcm
G__Gdml: lib/libGdml.rootmap
G__Gdml: geom/gdml/CMakeFiles/G__Gdml.dir/build.make

.PHONY : G__Gdml

# Rule to build all files generated by this target.
geom/gdml/CMakeFiles/G__Gdml.dir/build: G__Gdml

.PHONY : geom/gdml/CMakeFiles/G__Gdml.dir/build

geom/gdml/CMakeFiles/G__Gdml.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/geom/gdml && $(CMAKE_COMMAND) -P CMakeFiles/G__Gdml.dir/cmake_clean.cmake
.PHONY : geom/gdml/CMakeFiles/G__Gdml.dir/clean

geom/gdml/CMakeFiles/G__Gdml.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/geom/gdml /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/geom/gdml /home/brandon/Projects/root-6.10.04/root/geom/gdml/CMakeFiles/G__Gdml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : geom/gdml/CMakeFiles/G__Gdml.dir/depend
