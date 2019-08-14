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

# Utility rule file for G__Physics.

# Include the progress variables for this target.
include math/physics/CMakeFiles/G__Physics.dir/progress.make

math/physics/CMakeFiles/G__Physics: math/physics/G__Physics.cxx


math/physics/G__Physics.cxx: ../math/physics/inc/LinkDef.h
math/physics/G__Physics.cxx: ../math/physics/inc/TFeldmanCousins.h
math/physics/G__Physics.cxx: ../math/physics/inc/TGenPhaseSpace.h
math/physics/G__Physics.cxx: ../math/physics/inc/TLorentzRotation.h
math/physics/G__Physics.cxx: ../math/physics/inc/TLorentzVector.h
math/physics/G__Physics.cxx: ../math/physics/inc/TQuaternion.h
math/physics/G__Physics.cxx: ../math/physics/inc/TRobustEstimator.h
math/physics/G__Physics.cxx: ../math/physics/inc/TRolke.h
math/physics/G__Physics.cxx: ../math/physics/inc/TRotation.h
math/physics/G__Physics.cxx: ../math/physics/inc/TVector2.h
math/physics/G__Physics.cxx: ../math/physics/inc/TVector3.h
math/physics/G__Physics.cxx: ../math/physics/inc/TFeldmanCousins.h
math/physics/G__Physics.cxx: ../math/physics/inc/TGenPhaseSpace.h
math/physics/G__Physics.cxx: ../math/physics/inc/TLorentzRotation.h
math/physics/G__Physics.cxx: ../math/physics/inc/TLorentzVector.h
math/physics/G__Physics.cxx: ../math/physics/inc/TQuaternion.h
math/physics/G__Physics.cxx: ../math/physics/inc/TRobustEstimator.h
math/physics/G__Physics.cxx: ../math/physics/inc/TRolke.h
math/physics/G__Physics.cxx: ../math/physics/inc/TRotation.h
math/physics/G__Physics.cxx: ../math/physics/inc/TVector2.h
math/physics/G__Physics.cxx: ../math/physics/inc/TVector3.h
math/physics/G__Physics.cxx: ../math/physics/inc/LinkDef.h
math/physics/G__Physics.cxx: bin/rootcling
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__Physics.cxx, ../../lib/libPhysics_rdict.pcm, ../../lib/libPhysics.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/math/physics && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/brandon/Projects/root-6.10.04/root/lib: ROOTIGNOREPREFIX=1 /home/brandon/Projects/root-6.10.04/root/bin/rootcling -rootbuild -f G__Physics.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libPhysics.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libPhysics.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libPhysics.rootmap -writeEmptyRootPCM -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include TFeldmanCousins.h TGenPhaseSpace.h TLorentzRotation.h TLorentzVector.h TQuaternion.h TRobustEstimator.h TRolke.h TRotation.h TVector2.h TVector3.h /home/brandon/Projects/root-6.10.04/math/physics/inc/LinkDef.h

lib/libPhysics_rdict.pcm: math/physics/G__Physics.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libPhysics_rdict.pcm

lib/libPhysics.rootmap: math/physics/G__Physics.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libPhysics.rootmap

G__Physics: math/physics/CMakeFiles/G__Physics
G__Physics: math/physics/G__Physics.cxx
G__Physics: lib/libPhysics_rdict.pcm
G__Physics: lib/libPhysics.rootmap
G__Physics: math/physics/CMakeFiles/G__Physics.dir/build.make

.PHONY : G__Physics

# Rule to build all files generated by this target.
math/physics/CMakeFiles/G__Physics.dir/build: G__Physics

.PHONY : math/physics/CMakeFiles/G__Physics.dir/build

math/physics/CMakeFiles/G__Physics.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/math/physics && $(CMAKE_COMMAND) -P CMakeFiles/G__Physics.dir/cmake_clean.cmake
.PHONY : math/physics/CMakeFiles/G__Physics.dir/clean

math/physics/CMakeFiles/G__Physics.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/math/physics /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/math/physics /home/brandon/Projects/root-6.10.04/root/math/physics/CMakeFiles/G__Physics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math/physics/CMakeFiles/G__Physics.dir/depend

