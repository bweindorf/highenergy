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

# Utility rule file for move_header_geom_geompainter.

# Include the progress variables for this target.
include geom/geompainter/CMakeFiles/move_header_geom_geompainter.dir/progress.make

geom/geompainter/CMakeFiles/move_header_geom_geompainter: include/TGeoChecker.h
geom/geompainter/CMakeFiles/move_header_geom_geompainter: include/TGeoOverlap.h
geom/geompainter/CMakeFiles/move_header_geom_geompainter: include/TGeoPainter.h
geom/geompainter/CMakeFiles/move_header_geom_geompainter: include/TGeoTrack.h


include/TGeoChecker.h: ../geom/geompainter/inc/TGeoChecker.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/brandon/Projects/root-6.10.04/geom/geompainter/inc/TGeoChecker.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/geom/geompainter && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/geom/geompainter/inc/TGeoChecker.h /home/brandon/Projects/root-6.10.04/root/include/TGeoChecker.h

include/TGeoOverlap.h: ../geom/geompainter/inc/TGeoOverlap.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying header /home/brandon/Projects/root-6.10.04/geom/geompainter/inc/TGeoOverlap.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/geom/geompainter && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/geom/geompainter/inc/TGeoOverlap.h /home/brandon/Projects/root-6.10.04/root/include/TGeoOverlap.h

include/TGeoPainter.h: ../geom/geompainter/inc/TGeoPainter.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Copying header /home/brandon/Projects/root-6.10.04/geom/geompainter/inc/TGeoPainter.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/geom/geompainter && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/geom/geompainter/inc/TGeoPainter.h /home/brandon/Projects/root-6.10.04/root/include/TGeoPainter.h

include/TGeoTrack.h: ../geom/geompainter/inc/TGeoTrack.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Copying header /home/brandon/Projects/root-6.10.04/geom/geompainter/inc/TGeoTrack.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/geom/geompainter && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/geom/geompainter/inc/TGeoTrack.h /home/brandon/Projects/root-6.10.04/root/include/TGeoTrack.h

move_header_geom_geompainter: geom/geompainter/CMakeFiles/move_header_geom_geompainter
move_header_geom_geompainter: include/TGeoChecker.h
move_header_geom_geompainter: include/TGeoOverlap.h
move_header_geom_geompainter: include/TGeoPainter.h
move_header_geom_geompainter: include/TGeoTrack.h
move_header_geom_geompainter: geom/geompainter/CMakeFiles/move_header_geom_geompainter.dir/build.make

.PHONY : move_header_geom_geompainter

# Rule to build all files generated by this target.
geom/geompainter/CMakeFiles/move_header_geom_geompainter.dir/build: move_header_geom_geompainter

.PHONY : geom/geompainter/CMakeFiles/move_header_geom_geompainter.dir/build

geom/geompainter/CMakeFiles/move_header_geom_geompainter.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/geom/geompainter && $(CMAKE_COMMAND) -P CMakeFiles/move_header_geom_geompainter.dir/cmake_clean.cmake
.PHONY : geom/geompainter/CMakeFiles/move_header_geom_geompainter.dir/clean

geom/geompainter/CMakeFiles/move_header_geom_geompainter.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/geom/geompainter /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/geom/geompainter /home/brandon/Projects/root-6.10.04/root/geom/geompainter/CMakeFiles/move_header_geom_geompainter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : geom/geompainter/CMakeFiles/move_header_geom_geompainter.dir/depend

