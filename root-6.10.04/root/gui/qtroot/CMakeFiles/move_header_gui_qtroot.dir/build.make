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

# Utility rule file for move_header_gui_qtroot.

# Include the progress variables for this target.
include gui/qtroot/CMakeFiles/move_header_gui_qtroot.dir/progress.make

gui/qtroot/CMakeFiles/move_header_gui_qtroot: include/TQtRootGuiFactory.h


include/TQtRootGuiFactory.h: ../gui/qtroot/inc/TQtRootGuiFactory.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/brandon/Projects/root-6.10.04/gui/qtroot/inc/TQtRootGuiFactory.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/gui/qtroot && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/gui/qtroot/inc/TQtRootGuiFactory.h /home/brandon/Projects/root-6.10.04/root/include/TQtRootGuiFactory.h

move_header_gui_qtroot: gui/qtroot/CMakeFiles/move_header_gui_qtroot
move_header_gui_qtroot: include/TQtRootGuiFactory.h
move_header_gui_qtroot: gui/qtroot/CMakeFiles/move_header_gui_qtroot.dir/build.make

.PHONY : move_header_gui_qtroot

# Rule to build all files generated by this target.
gui/qtroot/CMakeFiles/move_header_gui_qtroot.dir/build: move_header_gui_qtroot

.PHONY : gui/qtroot/CMakeFiles/move_header_gui_qtroot.dir/build

gui/qtroot/CMakeFiles/move_header_gui_qtroot.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/gui/qtroot && $(CMAKE_COMMAND) -P CMakeFiles/move_header_gui_qtroot.dir/cmake_clean.cmake
.PHONY : gui/qtroot/CMakeFiles/move_header_gui_qtroot.dir/clean

gui/qtroot/CMakeFiles/move_header_gui_qtroot.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/gui/qtroot /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/gui/qtroot /home/brandon/Projects/root-6.10.04/root/gui/qtroot/CMakeFiles/move_header_gui_qtroot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gui/qtroot/CMakeFiles/move_header_gui_qtroot.dir/depend

