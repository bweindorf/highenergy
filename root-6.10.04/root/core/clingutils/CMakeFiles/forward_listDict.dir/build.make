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
include core/clingutils/CMakeFiles/forward_listDict.dir/depend.make

# Include the progress variables for this target.
include core/clingutils/CMakeFiles/forward_listDict.dir/progress.make

# Include the compile flags for this target's objects.
include core/clingutils/CMakeFiles/forward_listDict.dir/flags.make

core/clingutils/G__std_forward_list.cxx: ../core/clingutils/src/forward_listLinkdef.h
core/clingutils/G__std_forward_list.cxx: ../core/clingutils/src/forward_listLinkdef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__std_forward_list.cxx, ../../lib/libforward_listDict.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && ../rootcling_stage1/src/rootcling_stage1 -f G__std_forward_list.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libforward_listDict.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libforward_listDict.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libforward_listDict.rootmap -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include -I/home/brandon/Projects/root-6.10.04/interpreter/llvm/src/include -I/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/include -I/home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/clang/include -I/home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include -I/home/brandon/Projects/root-6.10.04/core/clingutils/res -I/home/brandon/Projects/root-6.10.04/core/clingutils/../foundation/res -I/home/brandon/Projects/root-6.10.04/root/etc/cling/cint forward_list /home/brandon/Projects/root-6.10.04/core/clingutils/src/forward_listLinkdef.h

lib/libforward_listDict.rootmap: core/clingutils/G__std_forward_list.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libforward_listDict.rootmap

core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o: core/clingutils/CMakeFiles/forward_listDict.dir/flags.make
core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o: core/clingutils/G__std_forward_list.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o -c /home/brandon/Projects/root-6.10.04/root/core/clingutils/G__std_forward_list.cxx

core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.i"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/root/core/clingutils/G__std_forward_list.cxx > CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.i

core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.s"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/root/core/clingutils/G__std_forward_list.cxx -o CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.s

core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o.requires:

.PHONY : core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o.requires

core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o.provides: core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o.requires
	$(MAKE) -f core/clingutils/CMakeFiles/forward_listDict.dir/build.make core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o.provides.build
.PHONY : core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o.provides

core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o.provides.build: core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o


# Object files for target forward_listDict
forward_listDict_OBJECTS = \
"CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o"

# External object files for target forward_listDict
forward_listDict_EXTERNAL_OBJECTS =

lib/libforward_listDict.so: core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o
lib/libforward_listDict.so: core/clingutils/CMakeFiles/forward_listDict.dir/build.make
lib/libforward_listDict.so: lib/libCore.so
lib/libforward_listDict.so: core/clingutils/CMakeFiles/forward_listDict.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../lib/libforward_listDict.so"
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/forward_listDict.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/clingutils/CMakeFiles/forward_listDict.dir/build: lib/libforward_listDict.so

.PHONY : core/clingutils/CMakeFiles/forward_listDict.dir/build

core/clingutils/CMakeFiles/forward_listDict.dir/requires: core/clingutils/CMakeFiles/forward_listDict.dir/G__std_forward_list.cxx.o.requires

.PHONY : core/clingutils/CMakeFiles/forward_listDict.dir/requires

core/clingutils/CMakeFiles/forward_listDict.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/core/clingutils && $(CMAKE_COMMAND) -P CMakeFiles/forward_listDict.dir/cmake_clean.cmake
.PHONY : core/clingutils/CMakeFiles/forward_listDict.dir/clean

core/clingutils/CMakeFiles/forward_listDict.dir/depend: core/clingutils/G__std_forward_list.cxx
core/clingutils/CMakeFiles/forward_listDict.dir/depend: lib/libforward_listDict.rootmap
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/core/clingutils /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/core/clingutils /home/brandon/Projects/root-6.10.04/root/core/clingutils/CMakeFiles/forward_listDict.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/clingutils/CMakeFiles/forward_listDict.dir/depend
