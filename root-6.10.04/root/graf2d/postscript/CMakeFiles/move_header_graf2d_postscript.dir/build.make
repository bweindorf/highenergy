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

# Utility rule file for move_header_graf2d_postscript.

# Include the progress variables for this target.
include graf2d/postscript/CMakeFiles/move_header_graf2d_postscript.dir/progress.make

graf2d/postscript/CMakeFiles/move_header_graf2d_postscript: include/TImageDump.h
graf2d/postscript/CMakeFiles/move_header_graf2d_postscript: include/TPDF.h
graf2d/postscript/CMakeFiles/move_header_graf2d_postscript: include/TPostScript.h
graf2d/postscript/CMakeFiles/move_header_graf2d_postscript: include/TSVG.h
graf2d/postscript/CMakeFiles/move_header_graf2d_postscript: include/TTeXDump.h


include/TImageDump.h: ../graf2d/postscript/inc/TImageDump.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TImageDump.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/graf2d/postscript && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TImageDump.h /home/brandon/Projects/root-6.10.04/root/include/TImageDump.h

include/TPDF.h: ../graf2d/postscript/inc/TPDF.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying header /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TPDF.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/graf2d/postscript && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TPDF.h /home/brandon/Projects/root-6.10.04/root/include/TPDF.h

include/TPostScript.h: ../graf2d/postscript/inc/TPostScript.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Copying header /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TPostScript.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/graf2d/postscript && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TPostScript.h /home/brandon/Projects/root-6.10.04/root/include/TPostScript.h

include/TSVG.h: ../graf2d/postscript/inc/TSVG.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Copying header /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TSVG.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/graf2d/postscript && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TSVG.h /home/brandon/Projects/root-6.10.04/root/include/TSVG.h

include/TTeXDump.h: ../graf2d/postscript/inc/TTeXDump.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Copying header /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TTeXDump.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/graf2d/postscript && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/graf2d/postscript/inc/TTeXDump.h /home/brandon/Projects/root-6.10.04/root/include/TTeXDump.h

move_header_graf2d_postscript: graf2d/postscript/CMakeFiles/move_header_graf2d_postscript
move_header_graf2d_postscript: include/TImageDump.h
move_header_graf2d_postscript: include/TPDF.h
move_header_graf2d_postscript: include/TPostScript.h
move_header_graf2d_postscript: include/TSVG.h
move_header_graf2d_postscript: include/TTeXDump.h
move_header_graf2d_postscript: graf2d/postscript/CMakeFiles/move_header_graf2d_postscript.dir/build.make

.PHONY : move_header_graf2d_postscript

# Rule to build all files generated by this target.
graf2d/postscript/CMakeFiles/move_header_graf2d_postscript.dir/build: move_header_graf2d_postscript

.PHONY : graf2d/postscript/CMakeFiles/move_header_graf2d_postscript.dir/build

graf2d/postscript/CMakeFiles/move_header_graf2d_postscript.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/graf2d/postscript && $(CMAKE_COMMAND) -P CMakeFiles/move_header_graf2d_postscript.dir/cmake_clean.cmake
.PHONY : graf2d/postscript/CMakeFiles/move_header_graf2d_postscript.dir/clean

graf2d/postscript/CMakeFiles/move_header_graf2d_postscript.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/graf2d/postscript /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/graf2d/postscript /home/brandon/Projects/root-6.10.04/root/graf2d/postscript/CMakeFiles/move_header_graf2d_postscript.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graf2d/postscript/CMakeFiles/move_header_graf2d_postscript.dir/depend

