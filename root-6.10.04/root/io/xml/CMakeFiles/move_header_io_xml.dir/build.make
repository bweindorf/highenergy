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

# Utility rule file for move_header_io_xml.

# Include the progress variables for this target.
include io/xml/CMakeFiles/move_header_io_xml.dir/progress.make

io/xml/CMakeFiles/move_header_io_xml: include/TBufferXML.h
io/xml/CMakeFiles/move_header_io_xml: include/TKeyXML.h
io/xml/CMakeFiles/move_header_io_xml: include/TXMLEngine.h
io/xml/CMakeFiles/move_header_io_xml: include/TXMLFile.h
io/xml/CMakeFiles/move_header_io_xml: include/TXMLPlayer.h
io/xml/CMakeFiles/move_header_io_xml: include/TXMLSetup.h


include/TBufferXML.h: ../io/xml/inc/TBufferXML.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/brandon/Projects/root-6.10.04/io/xml/inc/TBufferXML.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/io/xml && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/io/xml/inc/TBufferXML.h /home/brandon/Projects/root-6.10.04/root/include/TBufferXML.h

include/TKeyXML.h: ../io/xml/inc/TKeyXML.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying header /home/brandon/Projects/root-6.10.04/io/xml/inc/TKeyXML.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/io/xml && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/io/xml/inc/TKeyXML.h /home/brandon/Projects/root-6.10.04/root/include/TKeyXML.h

include/TXMLEngine.h: ../io/xml/inc/TXMLEngine.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Copying header /home/brandon/Projects/root-6.10.04/io/xml/inc/TXMLEngine.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/io/xml && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/io/xml/inc/TXMLEngine.h /home/brandon/Projects/root-6.10.04/root/include/TXMLEngine.h

include/TXMLFile.h: ../io/xml/inc/TXMLFile.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Copying header /home/brandon/Projects/root-6.10.04/io/xml/inc/TXMLFile.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/io/xml && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/io/xml/inc/TXMLFile.h /home/brandon/Projects/root-6.10.04/root/include/TXMLFile.h

include/TXMLPlayer.h: ../io/xml/inc/TXMLPlayer.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Copying header /home/brandon/Projects/root-6.10.04/io/xml/inc/TXMLPlayer.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/io/xml && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/io/xml/inc/TXMLPlayer.h /home/brandon/Projects/root-6.10.04/root/include/TXMLPlayer.h

include/TXMLSetup.h: ../io/xml/inc/TXMLSetup.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Copying header /home/brandon/Projects/root-6.10.04/io/xml/inc/TXMLSetup.h to /include"
	cd /home/brandon/Projects/root-6.10.04/root/io/xml && /usr/bin/cmake -E copy /home/brandon/Projects/root-6.10.04/io/xml/inc/TXMLSetup.h /home/brandon/Projects/root-6.10.04/root/include/TXMLSetup.h

move_header_io_xml: io/xml/CMakeFiles/move_header_io_xml
move_header_io_xml: include/TBufferXML.h
move_header_io_xml: include/TKeyXML.h
move_header_io_xml: include/TXMLEngine.h
move_header_io_xml: include/TXMLFile.h
move_header_io_xml: include/TXMLPlayer.h
move_header_io_xml: include/TXMLSetup.h
move_header_io_xml: io/xml/CMakeFiles/move_header_io_xml.dir/build.make

.PHONY : move_header_io_xml

# Rule to build all files generated by this target.
io/xml/CMakeFiles/move_header_io_xml.dir/build: move_header_io_xml

.PHONY : io/xml/CMakeFiles/move_header_io_xml.dir/build

io/xml/CMakeFiles/move_header_io_xml.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/io/xml && $(CMAKE_COMMAND) -P CMakeFiles/move_header_io_xml.dir/cmake_clean.cmake
.PHONY : io/xml/CMakeFiles/move_header_io_xml.dir/clean

io/xml/CMakeFiles/move_header_io_xml.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/io/xml /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/io/xml /home/brandon/Projects/root-6.10.04/root/io/xml/CMakeFiles/move_header_io_xml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : io/xml/CMakeFiles/move_header_io_xml.dir/depend
