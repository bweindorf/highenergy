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

# Utility rule file for G__ASImage.

# Include the progress variables for this target.
include graf2d/asimage/CMakeFiles/G__ASImage.dir/progress.make

graf2d/asimage/CMakeFiles/G__ASImage: graf2d/asimage/G__ASImage.cxx


graf2d/asimage/G__ASImage.cxx: ../graf2d/asimage/inc/LinkDef.h
graf2d/asimage/G__ASImage.cxx: ../graf2d/asimage/inc/TASImage.h
graf2d/asimage/G__ASImage.cxx: ../graf2d/asimage/inc/TASImagePlugin.h
graf2d/asimage/G__ASImage.cxx: ../graf2d/asimage/inc/TASPluginGS.h
graf2d/asimage/G__ASImage.cxx: ../graf2d/asimage/inc/TASImage.h
graf2d/asimage/G__ASImage.cxx: ../graf2d/asimage/inc/TASImagePlugin.h
graf2d/asimage/G__ASImage.cxx: ../graf2d/asimage/inc/TASPluginGS.h
graf2d/asimage/G__ASImage.cxx: ../graf2d/asimage/inc/LinkDef.h
graf2d/asimage/G__ASImage.cxx: bin/rootcling
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__ASImage.cxx, ../../lib/libASImage_rdict.pcm, ../../lib/libASImage.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/graf2d/asimage && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/brandon/Projects/root-6.10.04/root/lib: ROOTIGNOREPREFIX=1 /home/brandon/Projects/root-6.10.04/root/bin/rootcling -rootbuild -f G__ASImage.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libASImage.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libASImage.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libASImage.rootmap -writeEmptyRootPCM -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include -I/usr/include/freetype2 -I/home/brandon/Projects/root-6.10.04/root/include/libAfterImage -I/usr/include TASImage.h TASImagePlugin.h TASPluginGS.h /home/brandon/Projects/root-6.10.04/graf2d/asimage/inc/LinkDef.h

lib/libASImage_rdict.pcm: graf2d/asimage/G__ASImage.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libASImage_rdict.pcm

lib/libASImage.rootmap: graf2d/asimage/G__ASImage.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libASImage.rootmap

G__ASImage: graf2d/asimage/CMakeFiles/G__ASImage
G__ASImage: graf2d/asimage/G__ASImage.cxx
G__ASImage: lib/libASImage_rdict.pcm
G__ASImage: lib/libASImage.rootmap
G__ASImage: graf2d/asimage/CMakeFiles/G__ASImage.dir/build.make

.PHONY : G__ASImage

# Rule to build all files generated by this target.
graf2d/asimage/CMakeFiles/G__ASImage.dir/build: G__ASImage

.PHONY : graf2d/asimage/CMakeFiles/G__ASImage.dir/build

graf2d/asimage/CMakeFiles/G__ASImage.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/graf2d/asimage && $(CMAKE_COMMAND) -P CMakeFiles/G__ASImage.dir/cmake_clean.cmake
.PHONY : graf2d/asimage/CMakeFiles/G__ASImage.dir/clean

graf2d/asimage/CMakeFiles/G__ASImage.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/graf2d/asimage /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/graf2d/asimage /home/brandon/Projects/root-6.10.04/root/graf2d/asimage/CMakeFiles/G__ASImage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graf2d/asimage/CMakeFiles/G__ASImage.dir/depend

