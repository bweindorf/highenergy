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

# Utility rule file for move_header_hist_unfold.

# Include the progress variables for this target.
include hist/unfold/CMakeFiles/move_header_hist_unfold.dir/progress.make

hist/unfold/CMakeFiles/move_header_hist_unfold: include/TUnfold.h
hist/unfold/CMakeFiles/move_header_hist_unfold: include/TUnfoldBinning.h
hist/unfold/CMakeFiles/move_header_hist_unfold: include/TUnfoldBinningXML.h
hist/unfold/CMakeFiles/move_header_hist_unfold: include/TUnfoldDensity.h
hist/unfold/CMakeFiles/move_header_hist_unfold: include/TUnfoldSys.h


include/TUnfold.h: ../hist/unfold/inc/TUnfold.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfold.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/hist/unfold && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfold.h /home/brandon/Projects/root-6.10.04/root/include/TUnfold.h

include/TUnfoldBinning.h: ../hist/unfold/inc/TUnfoldBinning.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying header /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfoldBinning.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/hist/unfold && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfoldBinning.h /home/brandon/Projects/root-6.10.04/root/include/TUnfoldBinning.h

include/TUnfoldBinningXML.h: ../hist/unfold/inc/TUnfoldBinningXML.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Copying header /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfoldBinningXML.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/hist/unfold && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfoldBinningXML.h /home/brandon/Projects/root-6.10.04/root/include/TUnfoldBinningXML.h

include/TUnfoldDensity.h: ../hist/unfold/inc/TUnfoldDensity.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Copying header /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfoldDensity.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/hist/unfold && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfoldDensity.h /home/brandon/Projects/root-6.10.04/root/include/TUnfoldDensity.h

include/TUnfoldSys.h: ../hist/unfold/inc/TUnfoldSys.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Copying header /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfoldSys.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/hist/unfold && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/hist/unfold/inc/TUnfoldSys.h /home/brandon/Projects/root-6.10.04/root/include/TUnfoldSys.h

move_header_hist_unfold: hist/unfold/CMakeFiles/move_header_hist_unfold
move_header_hist_unfold: include/TUnfold.h
move_header_hist_unfold: include/TUnfoldBinning.h
move_header_hist_unfold: include/TUnfoldBinningXML.h
move_header_hist_unfold: include/TUnfoldDensity.h
move_header_hist_unfold: include/TUnfoldSys.h
move_header_hist_unfold: hist/unfold/CMakeFiles/move_header_hist_unfold.dir/build.make

.PHONY : move_header_hist_unfold

# Rule to build all files generated by this target.
hist/unfold/CMakeFiles/move_header_hist_unfold.dir/build: move_header_hist_unfold

.PHONY : hist/unfold/CMakeFiles/move_header_hist_unfold.dir/build

hist/unfold/CMakeFiles/move_header_hist_unfold.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/hist/unfold && $(CMAKE_COMMAND) -P CMakeFiles/move_header_hist_unfold.dir/cmake_clean.cmake
.PHONY : hist/unfold/CMakeFiles/move_header_hist_unfold.dir/clean

hist/unfold/CMakeFiles/move_header_hist_unfold.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/hist/unfold /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/hist/unfold /home/brandon/Projects/root-6.10.04/root/hist/unfold/CMakeFiles/move_header_hist_unfold.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : hist/unfold/CMakeFiles/move_header_hist_unfold.dir/depend
