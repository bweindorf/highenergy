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
include core/clingutils/CMakeFiles/unordered_setDict.dir/depend.make

# Include the progress variables for this target.
include core/clingutils/CMakeFiles/unordered_setDict.dir/progress.make

# Include the compile flags for this target's objects.
include core/clingutils/CMakeFiles/unordered_setDict.dir/flags.make

core/clingutils/G__std_unordered_set.cxx: ../core/clingutils/src/unordered_setLinkdef.h
core/clingutils/G__std_unordered_set.cxx: ../core/clingutils/src/unordered_setLinkdef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__std_unordered_set.cxx, ../../lib/libunordered_setDict.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && ../rootcling_stage1/src/rootcling_stage1 -f G__std_unordered_set.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libunordered_setDict.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libunordered_setDict.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libunordered_setDict.rootmap -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include -I/home/brandon/Projects/root-6.10.04/interpreter/llvm/src/include -I/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/include -I/home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/clang/include -I/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include -I/home/brandon/Projects/root-6.10.04/core/clingutils/res -I/home/brandon/Projects/root-6.10.04/core/clingutils/../foundation/res -I/home/brandon/Projects/root-6.10.04/root/etc/cling/cint unordered_set /home/brandon/Projects/root-6.10.04/core/clingutils/src/unordered_setLinkdef.h

lib/libunordered_setDict.rootmap: core/clingutils/G__std_unordered_set.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libunordered_setDict.rootmap

core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o: core/clingutils/CMakeFiles/unordered_setDict.dir/flags.make
core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o: core/clingutils/G__std_unordered_set.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o -c /home/brandon/Projects/root-6.10.04/root/core/clingutils/G__std_unordered_set.cxx

core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.i"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/root/core/clingutils/G__std_unordered_set.cxx > CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.i

core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.s"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/root/core/clingutils/G__std_unordered_set.cxx -o CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.s

core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o.requires:

.PHONY : core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o.requires

core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o.provides: core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o.requires
	$(MAKE) -f core/clingutils/CMakeFiles/unordered_setDict.dir/build.make core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o.provides.build
.PHONY : core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o.provides

core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o.provides.build: core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o


# Object files for target unordered_setDict
unordered_setDict_OBJECTS = \
"CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o"

# External object files for target unordered_setDict
unordered_setDict_EXTERNAL_OBJECTS =

lib/libunordered_setDict.so: core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o
lib/libunordered_setDict.so: core/clingutils/CMakeFiles/unordered_setDict.dir/build.make
lib/libunordered_setDict.so: lib/libCore.so
lib/libunordered_setDict.so: core/clingutils/CMakeFiles/unordered_setDict.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../lib/libunordered_setDict.so"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unordered_setDict.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/clingutils/CMakeFiles/unordered_setDict.dir/build: lib/libunordered_setDict.so

.PHONY : core/clingutils/CMakeFiles/unordered_setDict.dir/build

core/clingutils/CMakeFiles/unordered_setDict.dir/requires: core/clingutils/CMakeFiles/unordered_setDict.dir/G__std_unordered_set.cxx.o.requires

.PHONY : core/clingutils/CMakeFiles/unordered_setDict.dir/requires

core/clingutils/CMakeFiles/unordered_setDict.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && $(CMAKE_COMMAND) -P CMakeFiles/unordered_setDict.dir/cmake_clean.cmake
.PHONY : core/clingutils/CMakeFiles/unordered_setDict.dir/clean

core/clingutils/CMakeFiles/unordered_setDict.dir/depend: core/clingutils/G__std_unordered_set.cxx
core/clingutils/CMakeFiles/unordered_setDict.dir/depend: lib/libunordered_setDict.rootmap
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/core/clingutils /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/core/clingutils /home/brandon/Projects/root-6.10.04/root/core/clingutils/CMakeFiles/unordered_setDict.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/clingutils/CMakeFiles/unordered_setDict.dir/depend
