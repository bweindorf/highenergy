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
include interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/flags.make

interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o: interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/flags.make
interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o: ../interpreter/llvm/src/tools/llvm-config/llvm-config.cpp
interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o: interpreter/llvm/src/tools/llvm-config/BuildVariables.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-config && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-config.dir/llvm-config.cpp.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/llvm-config/llvm-config.cpp

interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-config.dir/llvm-config.cpp.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-config && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/llvm-config/llvm-config.cpp > CMakeFiles/llvm-config.dir/llvm-config.cpp.i

interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-config.dir/llvm-config.cpp.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-config && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/llvm-config/llvm-config.cpp -o CMakeFiles/llvm-config.dir/llvm-config.cpp.s

interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o.requires:

.PHONY : interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o.requires

interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o.provides: interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o.requires
	$(MAKE) -f interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/build.make interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o.provides.build
.PHONY : interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o.provides

interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o.provides.build: interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o


# Object files for target llvm-config
llvm__config_OBJECTS = \
"CMakeFiles/llvm-config.dir/llvm-config.cpp.o"

# External object files for target llvm-config
llvm__config_EXTERNAL_OBJECTS =

interpreter/llvm/src/bin/llvm-config: interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o
interpreter/llvm/src/bin/llvm-config: interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/build.make
interpreter/llvm/src/bin/llvm-config: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/llvm-config: interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-config"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-config && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-config.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/build: interpreter/llvm/src/bin/llvm-config

.PHONY : interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/build

interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/requires: interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/llvm-config.cpp.o.requires

.PHONY : interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/requires

interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-config && $(CMAKE_COMMAND) -P CMakeFiles/llvm-config.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/clean

interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/llvm-config /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-config /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/llvm-config/CMakeFiles/llvm-config.dir/depend

