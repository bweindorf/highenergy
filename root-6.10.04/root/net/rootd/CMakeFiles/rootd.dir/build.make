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
include net/rootd/CMakeFiles/rootd.dir/depend.make

# Include the progress variables for this target.
include net/rootd/CMakeFiles/rootd.dir/progress.make

# Include the compile flags for this target's objects.
include net/rootd/CMakeFiles/rootd.dir/flags.make

net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o: net/rootd/CMakeFiles/rootd.dir/flags.make
net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o: ../net/rootd/src/rootd.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o"
	cd /home/brandon/Projects/root-6.10.04/root/net/rootd && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rootd.dir/src/rootd.cxx.o -c /home/brandon/Projects/root-6.10.04/net/rootd/src/rootd.cxx

net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rootd.dir/src/rootd.cxx.i"
	cd /home/brandon/Projects/root-6.10.04/root/net/rootd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/net/rootd/src/rootd.cxx > CMakeFiles/rootd.dir/src/rootd.cxx.i

net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rootd.dir/src/rootd.cxx.s"
	cd /home/brandon/Projects/root-6.10.04/root/net/rootd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/net/rootd/src/rootd.cxx -o CMakeFiles/rootd.dir/src/rootd.cxx.s

net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o.requires:

.PHONY : net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o.requires

net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o.provides: net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o.requires
	$(MAKE) -f net/rootd/CMakeFiles/rootd.dir/build.make net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o.provides.build
.PHONY : net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o.provides

net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o.provides.build: net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o


net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o: net/rootd/CMakeFiles/rootd.dir/flags.make
net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o: ../core/clib/src/strlcpy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o"
	cd /home/brandon/Projects/root-6.10.04/root/net/rootd && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o   -c /home/brandon/Projects/root-6.10.04/core/clib/src/strlcpy.c

net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.i"
	cd /home/brandon/Projects/root-6.10.04/root/net/rootd && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/brandon/Projects/root-6.10.04/core/clib/src/strlcpy.c > CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.i

net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.s"
	cd /home/brandon/Projects/root-6.10.04/root/net/rootd && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/brandon/Projects/root-6.10.04/core/clib/src/strlcpy.c -o CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.s

net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o.requires:

.PHONY : net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o.requires

net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o.provides: net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o.requires
	$(MAKE) -f net/rootd/CMakeFiles/rootd.dir/build.make net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o.provides.build
.PHONY : net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o.provides

net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o.provides.build: net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o


# Object files for target rootd
rootd_OBJECTS = \
"CMakeFiles/rootd.dir/src/rootd.cxx.o" \
"CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o"

# External object files for target rootd
rootd_EXTERNAL_OBJECTS =

bin/rootd: net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o
bin/rootd: net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o
bin/rootd: net/rootd/CMakeFiles/rootd.dir/build.make
bin/rootd: lib/librpdutil.a
bin/rootd: lib/librsa.a
bin/rootd: /usr/lib/x86_64-linux-gnu/libssl.so
bin/rootd: /usr/lib/x86_64-linux-gnu/libcrypto.so
bin/rootd: net/rootd/CMakeFiles/rootd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/rootd"
	cd /home/brandon/Projects/root-6.10.04/root/net/rootd && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rootd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
net/rootd/CMakeFiles/rootd.dir/build: bin/rootd

.PHONY : net/rootd/CMakeFiles/rootd.dir/build

net/rootd/CMakeFiles/rootd.dir/requires: net/rootd/CMakeFiles/rootd.dir/src/rootd.cxx.o.requires
net/rootd/CMakeFiles/rootd.dir/requires: net/rootd/CMakeFiles/rootd.dir/__/__/core/clib/src/strlcpy.c.o.requires

.PHONY : net/rootd/CMakeFiles/rootd.dir/requires

net/rootd/CMakeFiles/rootd.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/net/rootd && $(CMAKE_COMMAND) -P CMakeFiles/rootd.dir/cmake_clean.cmake
.PHONY : net/rootd/CMakeFiles/rootd.dir/clean

net/rootd/CMakeFiles/rootd.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/net/rootd /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/net/rootd /home/brandon/Projects/root-6.10.04/root/net/rootd/CMakeFiles/rootd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : net/rootd/CMakeFiles/rootd.dir/depend
