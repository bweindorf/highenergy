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
include interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/flags.make

interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o: interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/flags.make
interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o: ../interpreter/llvm/src/tools/sancov/sancov.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/sancov && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sancov.dir/sancov.cc.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/sancov/sancov.cc

interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sancov.dir/sancov.cc.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/sancov && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/sancov/sancov.cc > CMakeFiles/sancov.dir/sancov.cc.i

interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sancov.dir/sancov.cc.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/sancov && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/sancov/sancov.cc -o CMakeFiles/sancov.dir/sancov.cc.s

interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o.requires:

.PHONY : interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o.requires

interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o.provides: interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o.requires
	$(MAKE) -f interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/build.make interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o.provides.build
.PHONY : interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o.provides

interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o.provides.build: interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o


# Object files for target sancov
sancov_OBJECTS = \
"CMakeFiles/sancov.dir/sancov.cc.o"

# External object files for target sancov
sancov_EXTERNAL_OBJECTS =

interpreter/llvm/src/bin/sancov: interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/build.make
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMX86AsmPrinter.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMX86Desc.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMX86Disassembler.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMX86Info.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMDebugInfoDWARF.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMDebugInfoPDB.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMMC.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMMCDisassembler.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMObject.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMSymbolize.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMX86AsmPrinter.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMX86Utils.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMDebugInfoDWARF.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMDebugInfoPDB.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMDebugInfoCodeView.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMObject.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMBitReader.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMCore.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMMCParser.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMMC.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/sancov: interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/sancov"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/sancov && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sancov.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/build: interpreter/llvm/src/bin/sancov

.PHONY : interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/build

interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/requires: interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/sancov.cc.o.requires

.PHONY : interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/requires

interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/sancov && $(CMAKE_COMMAND) -P CMakeFiles/sancov.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/clean

interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/sancov /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/sancov /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/sancov/CMakeFiles/sancov.dir/depend

