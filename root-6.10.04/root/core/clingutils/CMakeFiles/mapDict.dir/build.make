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

# Include any dependencies generated for this target.
include core/clingutils/CMakeFiles/mapDict.dir/depend.make

# Include the progress variables for this target.
include core/clingutils/CMakeFiles/mapDict.dir/progress.make

# Include the compile flags for this target's objects.
include core/clingutils/CMakeFiles/mapDict.dir/flags.make

core/clingutils/G__std_map.cxx: ../core/clingutils/src/mapLinkdef.h
core/clingutils/G__std_map.cxx: ../core/clingutils/src/mapLinkdef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__std_map.cxx, ../../lib/libmapDict.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && ../rootcling_stage1/src/rootcling_stage1 -f G__std_map.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libmapDict.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libmapDict.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libmapDict.rootmap -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include -I/home/brandon/Projects/root-6.10.04/interpreter/llvm/src/include -I/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/include -I/home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/clang/include -I/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include -I/home/brandon/Projects/root-6.10.04/core/clingutils/res -I/home/brandon/Projects/root-6.10.04/core/clingutils/../foundation/res -I/home/brandon/Projects/root-6.10.04/root/etc/cling/cint map /home/brandon/Projects/root-6.10.04/core/clingutils/src/mapLinkdef.h

lib/libmapDict.rootmap: core/clingutils/G__std_map.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libmapDict.rootmap

core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o: core/clingutils/CMakeFiles/mapDict.dir/flags.make
core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o: core/clingutils/G__std_map.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mapDict.dir/G__std_map.cxx.o -c /home/brandon/Projects/root-6.10.04/root/core/clingutils/G__std_map.cxx

core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapDict.dir/G__std_map.cxx.i"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/root/core/clingutils/G__std_map.cxx > CMakeFiles/mapDict.dir/G__std_map.cxx.i

core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapDict.dir/G__std_map.cxx.s"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/root/core/clingutils/G__std_map.cxx -o CMakeFiles/mapDict.dir/G__std_map.cxx.s

core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o.requires:

.PHONY : core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o.requires

core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o.provides: core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o.requires
	$(MAKE) -f core/clingutils/CMakeFiles/mapDict.dir/build.make core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o.provides.build
.PHONY : core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o.provides

core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o.provides.build: core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o


# Object files for target mapDict
mapDict_OBJECTS = \
"CMakeFiles/mapDict.dir/G__std_map.cxx.o"

# External object files for target mapDict
mapDict_EXTERNAL_OBJECTS =

lib/libmapDict.so: core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o
lib/libmapDict.so: core/clingutils/CMakeFiles/mapDict.dir/build.make
lib/libmapDict.so: lib/libCore.so
lib/libmapDict.so: core/clingutils/CMakeFiles/mapDict.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../lib/libmapDict.so"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mapDict.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/clingutils/CMakeFiles/mapDict.dir/build: lib/libmapDict.so

.PHONY : core/clingutils/CMakeFiles/mapDict.dir/build

core/clingutils/CMakeFiles/mapDict.dir/requires: core/clingutils/CMakeFiles/mapDict.dir/G__std_map.cxx.o.requires

.PHONY : core/clingutils/CMakeFiles/mapDict.dir/requires

core/clingutils/CMakeFiles/mapDict.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && $(CMAKE_COMMAND) -P CMakeFiles/mapDict.dir/cmake_clean.cmake
.PHONY : core/clingutils/CMakeFiles/mapDict.dir/clean

core/clingutils/CMakeFiles/mapDict.dir/depend: core/clingutils/G__std_map.cxx
core/clingutils/CMakeFiles/mapDict.dir/depend: lib/libmapDict.rootmap
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/core/clingutils /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/core/clingutils /home/brandon/Projects/root-6.10.04/root/core/clingutils/CMakeFiles/mapDict.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/clingutils/CMakeFiles/mapDict.dir/depend
