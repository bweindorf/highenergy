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
include core/lzma/CMakeFiles/Lzma.dir/depend.make

# Include the progress variables for this target.
include core/lzma/CMakeFiles/Lzma.dir/progress.make

# Include the compile flags for this target's objects.
include core/lzma/CMakeFiles/Lzma.dir/flags.make

core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o: core/lzma/CMakeFiles/Lzma.dir/flags.make
core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o: ../core/lzma/src/ZipLZMA.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o"
	cd /home/brandon/Projects/root-6.10.04/root/core/lzma && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lzma.dir/src/ZipLZMA.c.o   -c /home/brandon/Projects/root-6.10.04/core/lzma/src/ZipLZMA.c

core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lzma.dir/src/ZipLZMA.c.i"
	cd /home/brandon/Projects/root-6.10.04/root/core/lzma && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/brandon/Projects/root-6.10.04/core/lzma/src/ZipLZMA.c > CMakeFiles/Lzma.dir/src/ZipLZMA.c.i

core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lzma.dir/src/ZipLZMA.c.s"
	cd /home/brandon/Projects/root-6.10.04/root/core/lzma && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/brandon/Projects/root-6.10.04/core/lzma/src/ZipLZMA.c -o CMakeFiles/Lzma.dir/src/ZipLZMA.c.s

core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o.requires:

.PHONY : core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o.requires

core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o.provides: core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o.requires
	$(MAKE) -f core/lzma/CMakeFiles/Lzma.dir/build.make core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o.provides.build
.PHONY : core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o.provides

core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o.provides.build: core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o


Lzma: core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o
Lzma: core/lzma/CMakeFiles/Lzma.dir/build.make

.PHONY : Lzma

# Rule to build all files generated by this target.
core/lzma/CMakeFiles/Lzma.dir/build: Lzma

.PHONY : core/lzma/CMakeFiles/Lzma.dir/build

core/lzma/CMakeFiles/Lzma.dir/requires: core/lzma/CMakeFiles/Lzma.dir/src/ZipLZMA.c.o.requires

.PHONY : core/lzma/CMakeFiles/Lzma.dir/requires

core/lzma/CMakeFiles/Lzma.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/core/lzma && $(CMAKE_COMMAND) -P CMakeFiles/Lzma.dir/cmake_clean.cmake
.PHONY : core/lzma/CMakeFiles/Lzma.dir/clean

core/lzma/CMakeFiles/Lzma.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/core/lzma /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/core/lzma /home/brandon/Projects/root-6.10.04/root/core/lzma/CMakeFiles/Lzma.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/lzma/CMakeFiles/Lzma.dir/depend

