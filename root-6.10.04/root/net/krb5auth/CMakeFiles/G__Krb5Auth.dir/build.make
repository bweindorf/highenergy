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

# Utility rule file for G__Krb5Auth.

# Include the progress variables for this target.
include net/krb5auth/CMakeFiles/G__Krb5Auth.dir/progress.make

net/krb5auth/CMakeFiles/G__Krb5Auth: net/krb5auth/G__Krb5Auth.cxx


net/krb5auth/G__Krb5Auth.cxx: ../net/krb5auth/inc/LinkDef.h
net/krb5auth/G__Krb5Auth.cxx: ../net/krb5auth/inc/TKSocket.h
net/krb5auth/G__Krb5Auth.cxx: ../net/krb5auth/inc/TKSocket.h
net/krb5auth/G__Krb5Auth.cxx: ../net/krb5auth/inc/LinkDef.h
net/krb5auth/G__Krb5Auth.cxx: bin/rootcling
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__Krb5Auth.cxx, ../../lib/libKrb5Auth_rdict.pcm, ../../lib/libKrb5Auth.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/net/krb5auth && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/brandon/Projects/root-6.10.04/root/lib: ROOTIGNOREPREFIX=1 /home/brandon/Projects/root-6.10.04/root/bin/rootcling -rootbuild -f G__Krb5Auth.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libKrb5Auth.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libKrb5Auth.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libKrb5Auth.rootmap -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include -I/usr/include/krb5 TKSocket.h /home/brandon/Projects/root-6.10.04/net/krb5auth/inc/LinkDef.h

lib/libKrb5Auth_rdict.pcm: net/krb5auth/G__Krb5Auth.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libKrb5Auth_rdict.pcm

lib/libKrb5Auth.rootmap: net/krb5auth/G__Krb5Auth.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libKrb5Auth.rootmap

G__Krb5Auth: net/krb5auth/CMakeFiles/G__Krb5Auth
G__Krb5Auth: net/krb5auth/G__Krb5Auth.cxx
G__Krb5Auth: lib/libKrb5Auth_rdict.pcm
G__Krb5Auth: lib/libKrb5Auth.rootmap
G__Krb5Auth: net/krb5auth/CMakeFiles/G__Krb5Auth.dir/build.make

.PHONY : G__Krb5Auth

# Rule to build all files generated by this target.
net/krb5auth/CMakeFiles/G__Krb5Auth.dir/build: G__Krb5Auth

.PHONY : net/krb5auth/CMakeFiles/G__Krb5Auth.dir/build

net/krb5auth/CMakeFiles/G__Krb5Auth.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/net/krb5auth && $(CMAKE_COMMAND) -P CMakeFiles/G__Krb5Auth.dir/cmake_clean.cmake
.PHONY : net/krb5auth/CMakeFiles/G__Krb5Auth.dir/clean

net/krb5auth/CMakeFiles/G__Krb5Auth.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/net/krb5auth /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/net/krb5auth /home/brandon/Projects/root-6.10.04/root/net/krb5auth/CMakeFiles/G__Krb5Auth.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : net/krb5auth/CMakeFiles/G__Krb5Auth.dir/depend
