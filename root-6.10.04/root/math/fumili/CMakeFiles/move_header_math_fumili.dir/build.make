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

# Utility rule file for move_header_math_fumili.

# Include the progress variables for this target.
include math/fumili/CMakeFiles/move_header_math_fumili.dir/progress.make

math/fumili/CMakeFiles/move_header_math_fumili: include/TFumili.h
math/fumili/CMakeFiles/move_header_math_fumili: include/TFumiliMinimizer.h


include/TFumili.h: ../math/fumili/inc/TFumili.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/brandon/Projects/root-6.10.04/math/fumili/inc/TFumili.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/math/fumili && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/math/fumili/inc/TFumili.h /home/brandon/Projects/root-6.10.04/root/include/TFumili.h

include/TFumiliMinimizer.h: ../math/fumili/inc/TFumiliMinimizer.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying header /home/brandon/Projects/root-6.10.04/math/fumili/inc/TFumiliMinimizer.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/math/fumili && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/math/fumili/inc/TFumiliMinimizer.h /home/brandon/Projects/root-6.10.04/root/include/TFumiliMinimizer.h

move_header_math_fumili: math/fumili/CMakeFiles/move_header_math_fumili
move_header_math_fumili: include/TFumili.h
move_header_math_fumili: include/TFumiliMinimizer.h
move_header_math_fumili: math/fumili/CMakeFiles/move_header_math_fumili.dir/build.make

.PHONY : move_header_math_fumili

# Rule to build all files generated by this target.
math/fumili/CMakeFiles/move_header_math_fumili.dir/build: move_header_math_fumili

.PHONY : math/fumili/CMakeFiles/move_header_math_fumili.dir/build

math/fumili/CMakeFiles/move_header_math_fumili.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/math/fumili && $(CMAKE_COMMAND) -P CMakeFiles/move_header_math_fumili.dir/cmake_clean.cmake
.PHONY : math/fumili/CMakeFiles/move_header_math_fumili.dir/clean

math/fumili/CMakeFiles/move_header_math_fumili.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/math/fumili /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/math/fumili /home/brandon/Projects/root-6.10.04/root/math/fumili/CMakeFiles/move_header_math_fumili.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math/fumili/CMakeFiles/move_header_math_fumili.dir/depend

