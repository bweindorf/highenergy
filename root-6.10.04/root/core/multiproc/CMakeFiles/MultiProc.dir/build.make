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
include core/multiproc/CMakeFiles/MultiProc.dir/depend.make

# Include the progress variables for this target.
include core/multiproc/CMakeFiles/MultiProc.dir/progress.make

# Include the compile flags for this target's objects.
include core/multiproc/CMakeFiles/MultiProc.dir/flags.make

core/multiproc/dummy.cxx:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating dummy.cxx"
	cd /home/brandon/Projects/root-6.10.04/root/core/multiproc && /usr/bin/cmake -E touch dummy.cxx

core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o: core/multiproc/CMakeFiles/MultiProc.dir/flags.make
core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o: core/multiproc/dummy.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o"
	cd /home/brandon/Projects/root-6.10.04/root/core/multiproc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MultiProc.dir/dummy.cxx.o -c /home/brandon/Projects/root-6.10.04/root/core/multiproc/dummy.cxx

core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MultiProc.dir/dummy.cxx.i"
	cd /home/brandon/Projects/root-6.10.04/root/core/multiproc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/root/core/multiproc/dummy.cxx > CMakeFiles/MultiProc.dir/dummy.cxx.i

core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MultiProc.dir/dummy.cxx.s"
	cd /home/brandon/Projects/root-6.10.04/root/core/multiproc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/root/core/multiproc/dummy.cxx -o CMakeFiles/MultiProc.dir/dummy.cxx.s

core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o.requires:

.PHONY : core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o.requires

core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o.provides: core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o.requires
	$(MAKE) -f core/multiproc/CMakeFiles/MultiProc.dir/build.make core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o.provides.build
.PHONY : core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o.provides

core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o.provides.build: core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o


# Object files for target MultiProc
MultiProc_OBJECTS = \
"CMakeFiles/MultiProc.dir/dummy.cxx.o"

# External object files for target MultiProc
MultiProc_EXTERNAL_OBJECTS = \
"/home/brandon/Projects/root-6.10.04/root/core/multiproc/CMakeFiles/MultiProcObjs.dir/G__MultiProc.cxx.o" \
"/home/brandon/Projects/root-6.10.04/root/core/multiproc/CMakeFiles/MultiProcObjs.dir/src/TMPClient.cxx.o" \
"/home/brandon/Projects/root-6.10.04/root/core/multiproc/CMakeFiles/MultiProcObjs.dir/src/MPSendRecv.cxx.o" \
"/home/brandon/Projects/root-6.10.04/root/core/multiproc/CMakeFiles/MultiProcObjs.dir/src/TProcessExecutor.cxx.o" \
"/home/brandon/Projects/root-6.10.04/root/core/multiproc/CMakeFiles/MultiProcObjs.dir/src/TMPWorker.cxx.o"

lib/libMultiProc.so: core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o
lib/libMultiProc.so: core/multiproc/CMakeFiles/MultiProcObjs.dir/G__MultiProc.cxx.o
lib/libMultiProc.so: core/multiproc/CMakeFiles/MultiProcObjs.dir/src/TMPClient.cxx.o
lib/libMultiProc.so: core/multiproc/CMakeFiles/MultiProcObjs.dir/src/MPSendRecv.cxx.o
lib/libMultiProc.so: core/multiproc/CMakeFiles/MultiProcObjs.dir/src/TProcessExecutor.cxx.o
lib/libMultiProc.so: core/multiproc/CMakeFiles/MultiProcObjs.dir/src/TMPWorker.cxx.o
lib/libMultiProc.so: core/multiproc/CMakeFiles/MultiProc.dir/build.make
lib/libMultiProc.so: lib/libNet.so
lib/libMultiProc.so: lib/libRIO.so
lib/libMultiProc.so: lib/libThread.so
lib/libMultiProc.so: lib/libCore.so
lib/libMultiProc.so: core/multiproc/CMakeFiles/MultiProc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../lib/libMultiProc.so"
	cd /home/brandon/Projects/root-6.10.04/root/core/multiproc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MultiProc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/multiproc/CMakeFiles/MultiProc.dir/build: lib/libMultiProc.so

.PHONY : core/multiproc/CMakeFiles/MultiProc.dir/build

core/multiproc/CMakeFiles/MultiProc.dir/requires: core/multiproc/CMakeFiles/MultiProc.dir/dummy.cxx.o.requires

.PHONY : core/multiproc/CMakeFiles/MultiProc.dir/requires

core/multiproc/CMakeFiles/MultiProc.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/core/multiproc && $(CMAKE_COMMAND) -P CMakeFiles/MultiProc.dir/cmake_clean.cmake
.PHONY : core/multiproc/CMakeFiles/MultiProc.dir/clean

core/multiproc/CMakeFiles/MultiProc.dir/depend: core/multiproc/dummy.cxx
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/core/multiproc /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/core/multiproc /home/brandon/Projects/root-6.10.04/root/core/multiproc/CMakeFiles/MultiProc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/multiproc/CMakeFiles/MultiProc.dir/depend
