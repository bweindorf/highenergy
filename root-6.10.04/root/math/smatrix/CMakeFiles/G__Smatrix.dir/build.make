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

# Utility rule file for G__Smatrix.

# Include the progress variables for this target.
include math/smatrix/CMakeFiles/G__Smatrix.dir/progress.make

math/smatrix/CMakeFiles/G__Smatrix: math/smatrix/G__Smatrix.cxx


math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/LinkDef.h
math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/Math/SMatrix.h
math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/Math/SVector.h
math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/Math/SMatrixDfwd.h
math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/Math/SMatrixFfwd.h
math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/Math/SMatrix.h
math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/Math/SVector.h
math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/Math/SMatrixDfwd.h
math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/Math/SMatrixFfwd.h
math/smatrix/G__Smatrix.cxx: ../math/smatrix/inc/LinkDef.h
math/smatrix/G__Smatrix.cxx: bin/rootcling
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__Smatrix.cxx, ../../lib/libSmatrix_rdict.pcm, ../../lib/libSmatrix.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/math/smatrix && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/brandon/Projects/root-6.10.04/root/lib: ROOTIGNOREPREFIX=1 /home/brandon/Projects/root-6.10.04/root/bin/rootcling -rootbuild -f G__Smatrix.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libSmatrix.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libSmatrix.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libSmatrix.rootmap -writeEmptyRootPCM -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include Math/SMatrix.h Math/SVector.h Math/SMatrixDfwd.h Math/SMatrixFfwd.h /home/brandon/Projects/root-6.10.04/math/smatrix/inc/LinkDef.h

lib/libSmatrix_rdict.pcm: math/smatrix/G__Smatrix.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libSmatrix_rdict.pcm

lib/libSmatrix.rootmap: math/smatrix/G__Smatrix.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libSmatrix.rootmap

G__Smatrix: math/smatrix/CMakeFiles/G__Smatrix
G__Smatrix: math/smatrix/G__Smatrix.cxx
G__Smatrix: lib/libSmatrix_rdict.pcm
G__Smatrix: lib/libSmatrix.rootmap
G__Smatrix: math/smatrix/CMakeFiles/G__Smatrix.dir/build.make

.PHONY : G__Smatrix

# Rule to build all files generated by this target.
math/smatrix/CMakeFiles/G__Smatrix.dir/build: G__Smatrix

.PHONY : math/smatrix/CMakeFiles/G__Smatrix.dir/build

math/smatrix/CMakeFiles/G__Smatrix.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/math/smatrix && $(CMAKE_COMMAND) -P CMakeFiles/G__Smatrix.dir/cmake_clean.cmake
.PHONY : math/smatrix/CMakeFiles/G__Smatrix.dir/clean

math/smatrix/CMakeFiles/G__Smatrix.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/math/smatrix /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/math/smatrix /home/brandon/Projects/root-6.10.04/root/math/smatrix/CMakeFiles/G__Smatrix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math/smatrix/CMakeFiles/G__Smatrix.dir/depend

