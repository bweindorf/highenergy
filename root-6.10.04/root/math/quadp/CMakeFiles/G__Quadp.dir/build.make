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

# Utility rule file for G__Quadp.

# Include the progress variables for this target.
include math/quadp/CMakeFiles/G__Quadp.dir/progress.make

math/quadp/CMakeFiles/G__Quadp: math/quadp/G__Quadp.cxx


math/quadp/G__Quadp.cxx: ../math/quadp/inc/LinkDef.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TGondzioSolver.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TMehrotraSolver.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpDataBase.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpDataDens.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpDataSparse.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpLinSolverBase.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpLinSolverDens.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpLinSolverSparse.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpProbBase.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpProbDens.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpProbSparse.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpResidual.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpSolverBase.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpVar.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TGondzioSolver.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TMehrotraSolver.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpDataBase.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpDataDens.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpDataSparse.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpLinSolverBase.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpLinSolverDens.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpLinSolverSparse.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpProbBase.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpProbDens.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpProbSparse.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpResidual.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpSolverBase.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/TQpVar.h
math/quadp/G__Quadp.cxx: ../math/quadp/inc/LinkDef.h
math/quadp/G__Quadp.cxx: bin/rootcling
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__Quadp.cxx, ../../lib/libQuadp_rdict.pcm, ../../lib/libQuadp.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/math/quadp && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/brandon/Projects/root-6.10.04/root/lib: ROOTIGNOREPREFIX=1 /home/brandon/Projects/root-6.10.04/root/bin/rootcling -rootbuild -f G__Quadp.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libQuadp.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libQuadp.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libQuadp.rootmap -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include TGondzioSolver.h TMehrotraSolver.h TQpDataBase.h TQpDataDens.h TQpDataSparse.h TQpLinSolverBase.h TQpLinSolverDens.h TQpLinSolverSparse.h TQpProbBase.h TQpProbDens.h TQpProbSparse.h TQpResidual.h TQpSolverBase.h TQpVar.h /home/brandon/Projects/root-6.10.04/math/quadp/inc/LinkDef.h

lib/libQuadp_rdict.pcm: math/quadp/G__Quadp.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libQuadp_rdict.pcm

lib/libQuadp.rootmap: math/quadp/G__Quadp.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libQuadp.rootmap

G__Quadp: math/quadp/CMakeFiles/G__Quadp
G__Quadp: math/quadp/G__Quadp.cxx
G__Quadp: lib/libQuadp_rdict.pcm
G__Quadp: lib/libQuadp.rootmap
G__Quadp: math/quadp/CMakeFiles/G__Quadp.dir/build.make

.PHONY : G__Quadp

# Rule to build all files generated by this target.
math/quadp/CMakeFiles/G__Quadp.dir/build: G__Quadp

.PHONY : math/quadp/CMakeFiles/G__Quadp.dir/build

math/quadp/CMakeFiles/G__Quadp.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/math/quadp && $(CMAKE_COMMAND) -P CMakeFiles/G__Quadp.dir/cmake_clean.cmake
.PHONY : math/quadp/CMakeFiles/G__Quadp.dir/clean

math/quadp/CMakeFiles/G__Quadp.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/math/quadp /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/math/quadp /home/brandon/Projects/root-6.10.04/root/math/quadp/CMakeFiles/G__Quadp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math/quadp/CMakeFiles/G__Quadp.dir/depend

