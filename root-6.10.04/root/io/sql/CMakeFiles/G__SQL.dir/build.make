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

# Utility rule file for G__SQL.

# Include the progress variables for this target.
include io/sql/CMakeFiles/G__SQL.dir/progress.make

io/sql/CMakeFiles/G__SQL: io/sql/G__SQL.cxx


io/sql/G__SQL.cxx: ../io/sql/inc/LinkDef.h
io/sql/G__SQL.cxx: ../io/sql/inc/TBufferSQL2.h
io/sql/G__SQL.cxx: ../io/sql/inc/TKeySQL.h
io/sql/G__SQL.cxx: ../io/sql/inc/TSQLClassInfo.h
io/sql/G__SQL.cxx: ../io/sql/inc/TSQLFile.h
io/sql/G__SQL.cxx: ../io/sql/inc/TSQLObjectData.h
io/sql/G__SQL.cxx: ../io/sql/inc/TSQLStructure.h
io/sql/G__SQL.cxx: ../io/sql/inc/TBufferSQL2.h
io/sql/G__SQL.cxx: ../io/sql/inc/TKeySQL.h
io/sql/G__SQL.cxx: ../io/sql/inc/TSQLClassInfo.h
io/sql/G__SQL.cxx: ../io/sql/inc/TSQLFile.h
io/sql/G__SQL.cxx: ../io/sql/inc/TSQLObjectData.h
io/sql/G__SQL.cxx: ../io/sql/inc/TSQLStructure.h
io/sql/G__SQL.cxx: ../io/sql/inc/LinkDef.h
io/sql/G__SQL.cxx: bin/rootcling
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__SQL.cxx, ../../lib/libSQLIO_rdict.pcm, ../../lib/libSQLIO.rootmap"
	cd /home/brandon/Projects/root-6.10.04/root/io/sql && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/brandon/Projects/root-6.10.04/root/lib: ROOTIGNOREPREFIX=1 /home/brandon/Projects/root-6.10.04/root/bin/rootcling -rootbuild -f G__SQL.cxx -s /home/brandon/Projects/root-6.10.04/root/lib/libSQLIO.so -excludePath /home/brandon/Projects/root-6.10.04 -excludePath /home/brandon/Projects/root-6.10.04/root -rml libSQLIO.so -rmf /home/brandon/Projects/root-6.10.04/root/lib/libSQLIO.rootmap -I/home/brandon/Projects/root-6.10.04 -I/home/brandon/Projects/root-6.10.04/interpreter/cling/include -I/home/brandon/Projects/root-6.10.04/root/include TBufferSQL2.h TKeySQL.h TSQLClassInfo.h TSQLFile.h TSQLObjectData.h TSQLStructure.h /home/brandon/Projects/root-6.10.04/io/sql/inc/LinkDef.h

lib/libSQLIO_rdict.pcm: io/sql/G__SQL.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libSQLIO_rdict.pcm

lib/libSQLIO.rootmap: io/sql/G__SQL.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libSQLIO.rootmap

G__SQL: io/sql/CMakeFiles/G__SQL
G__SQL: io/sql/G__SQL.cxx
G__SQL: lib/libSQLIO_rdict.pcm
G__SQL: lib/libSQLIO.rootmap
G__SQL: io/sql/CMakeFiles/G__SQL.dir/build.make

.PHONY : G__SQL

# Rule to build all files generated by this target.
io/sql/CMakeFiles/G__SQL.dir/build: G__SQL

.PHONY : io/sql/CMakeFiles/G__SQL.dir/build

io/sql/CMakeFiles/G__SQL.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/io/sql && $(CMAKE_COMMAND) -P CMakeFiles/G__SQL.dir/cmake_clean.cmake
.PHONY : io/sql/CMakeFiles/G__SQL.dir/clean

io/sql/CMakeFiles/G__SQL.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/io/sql /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/io/sql /home/brandon/Projects/root-6.10.04/root/io/sql/CMakeFiles/G__SQL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : io/sql/CMakeFiles/G__SQL.dir/depend
