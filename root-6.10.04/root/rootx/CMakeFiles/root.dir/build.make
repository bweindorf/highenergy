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
include rootx/CMakeFiles/root.dir/depend.make

# Include the progress variables for this target.
include rootx/CMakeFiles/root.dir/progress.make

# Include the compile flags for this target's objects.
include rootx/CMakeFiles/root.dir/flags.make

rootx/CMakeFiles/root.dir/src/rootx.cxx.o: rootx/CMakeFiles/root.dir/flags.make
rootx/CMakeFiles/root.dir/src/rootx.cxx.o: ../rootx/src/rootx.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object rootx/CMakeFiles/root.dir/src/rootx.cxx.o"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/root.dir/src/rootx.cxx.o -c /home/brandon/Projects/root-6.10.04/rootx/src/rootx.cxx

rootx/CMakeFiles/root.dir/src/rootx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/root.dir/src/rootx.cxx.i"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/rootx/src/rootx.cxx > CMakeFiles/root.dir/src/rootx.cxx.i

rootx/CMakeFiles/root.dir/src/rootx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/root.dir/src/rootx.cxx.s"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/rootx/src/rootx.cxx -o CMakeFiles/root.dir/src/rootx.cxx.s

rootx/CMakeFiles/root.dir/src/rootx.cxx.o.requires:

.PHONY : rootx/CMakeFiles/root.dir/src/rootx.cxx.o.requires

rootx/CMakeFiles/root.dir/src/rootx.cxx.o.provides: rootx/CMakeFiles/root.dir/src/rootx.cxx.o.requires
	$(MAKE) -f rootx/CMakeFiles/root.dir/build.make rootx/CMakeFiles/root.dir/src/rootx.cxx.o.provides.build
.PHONY : rootx/CMakeFiles/root.dir/src/rootx.cxx.o.provides

rootx/CMakeFiles/root.dir/src/rootx.cxx.o.provides.build: rootx/CMakeFiles/root.dir/src/rootx.cxx.o


rootx/CMakeFiles/root.dir/src/rootxx.cxx.o: rootx/CMakeFiles/root.dir/flags.make
rootx/CMakeFiles/root.dir/src/rootxx.cxx.o: ../rootx/src/rootxx.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object rootx/CMakeFiles/root.dir/src/rootxx.cxx.o"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/root.dir/src/rootxx.cxx.o -c /home/brandon/Projects/root-6.10.04/rootx/src/rootxx.cxx

rootx/CMakeFiles/root.dir/src/rootxx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/root.dir/src/rootxx.cxx.i"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/rootx/src/rootxx.cxx > CMakeFiles/root.dir/src/rootxx.cxx.i

rootx/CMakeFiles/root.dir/src/rootxx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/root.dir/src/rootxx.cxx.s"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/rootx/src/rootxx.cxx -o CMakeFiles/root.dir/src/rootxx.cxx.s

rootx/CMakeFiles/root.dir/src/rootxx.cxx.o.requires:

.PHONY : rootx/CMakeFiles/root.dir/src/rootxx.cxx.o.requires

rootx/CMakeFiles/root.dir/src/rootxx.cxx.o.provides: rootx/CMakeFiles/root.dir/src/rootxx.cxx.o.requires
	$(MAKE) -f rootx/CMakeFiles/root.dir/build.make rootx/CMakeFiles/root.dir/src/rootxx.cxx.o.provides.build
.PHONY : rootx/CMakeFiles/root.dir/src/rootxx.cxx.o.provides

rootx/CMakeFiles/root.dir/src/rootxx.cxx.o.provides.build: rootx/CMakeFiles/root.dir/src/rootxx.cxx.o


rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o: rootx/CMakeFiles/root.dir/flags.make
rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o: ../core/clib/src/strlcpy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o   -c /home/brandon/Projects/root-6.10.04/core/clib/src/strlcpy.c

rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.i"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/brandon/Projects/root-6.10.04/core/clib/src/strlcpy.c > CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.i

rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.s"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/brandon/Projects/root-6.10.04/core/clib/src/strlcpy.c -o CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.s

rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o.requires:

.PHONY : rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o.requires

rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o.provides: rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o.requires
	$(MAKE) -f rootx/CMakeFiles/root.dir/build.make rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o.provides.build
.PHONY : rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o.provides

rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o.provides.build: rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o


# Object files for target root
root_OBJECTS = \
"CMakeFiles/root.dir/src/rootx.cxx.o" \
"CMakeFiles/root.dir/src/rootxx.cxx.o" \
"CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o"

# External object files for target root
root_EXTERNAL_OBJECTS =

bin/root: rootx/CMakeFiles/root.dir/src/rootx.cxx.o
bin/root: rootx/CMakeFiles/root.dir/src/rootxx.cxx.o
bin/root: rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o
bin/root: rootx/CMakeFiles/root.dir/build.make
bin/root: /usr/lib/x86_64-linux-gnu/libX11.so
bin/root: /usr/lib/x86_64-linux-gnu/libXext.so
bin/root: /usr/lib/x86_64-linux-gnu/libXpm.so
bin/root: /usr/lib/x86_64-linux-gnu/libXft.so
bin/root: /usr/lib/x86_64-linux-gnu/libXext.so
bin/root: /usr/lib/x86_64-linux-gnu/libXpm.so
bin/root: /usr/lib/x86_64-linux-gnu/libXft.so
bin/root: rootx/CMakeFiles/root.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/root"
	cd /home/brandon/Projects/root-6.10.04/root/rootx && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/root.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
rootx/CMakeFiles/root.dir/build: bin/root

.PHONY : rootx/CMakeFiles/root.dir/build

rootx/CMakeFiles/root.dir/requires: rootx/CMakeFiles/root.dir/src/rootx.cxx.o.requires
rootx/CMakeFiles/root.dir/requires: rootx/CMakeFiles/root.dir/src/rootxx.cxx.o.requires
rootx/CMakeFiles/root.dir/requires: rootx/CMakeFiles/root.dir/__/core/clib/src/strlcpy.c.o.requires

.PHONY : rootx/CMakeFiles/root.dir/requires

rootx/CMakeFiles/root.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/rootx && $(CMAKE_COMMAND) -P CMakeFiles/root.dir/cmake_clean.cmake
.PHONY : rootx/CMakeFiles/root.dir/clean

rootx/CMakeFiles/root.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/rootx /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/rootx /home/brandon/Projects/root-6.10.04/root/rootx/CMakeFiles/root.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : rootx/CMakeFiles/root.dir/depend

