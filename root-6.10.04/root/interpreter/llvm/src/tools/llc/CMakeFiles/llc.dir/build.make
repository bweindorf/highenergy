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
include interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/flags.make

interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o: interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/flags.make
interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o: ../interpreter/llvm/src/tools/llc/llc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llc.dir/llc.cpp.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/llc/llc.cpp

interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llc.dir/llc.cpp.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/llc/llc.cpp > CMakeFiles/llc.dir/llc.cpp.i

interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llc.dir/llc.cpp.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/llc/llc.cpp -o CMakeFiles/llc.dir/llc.cpp.s

interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o.requires:

.PHONY : interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o.requires

interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o.provides: interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o.requires
	$(MAKE) -f interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/build.make interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o.provides.build
.PHONY : interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o.provides

interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o.provides.build: interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o


# Object files for target llc
llc_OBJECTS = \
"CMakeFiles/llc.dir/llc.cpp.o"

# External object files for target llc
llc_EXTERNAL_OBJECTS =

interpreter/llvm/src/bin/llc: interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o
interpreter/llvm/src/bin/llc: interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/build.make
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMX86CodeGen.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMX86AsmPrinter.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMX86AsmParser.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMX86Desc.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMX86Info.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMX86Disassembler.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMAnalysis.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMAsmPrinter.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMCodeGen.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMCore.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMIRReader.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMMC.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMMIRParser.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMScalarOpts.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMSelectionDAG.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMTarget.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMTransformUtils.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMDebugInfoCodeView.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMX86AsmPrinter.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMX86Utils.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMObject.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMMCParser.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMX86Info.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMMCDisassembler.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMCodeGen.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMScalarOpts.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMInstCombine.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMBitReader.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMBitWriter.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMInstrumentation.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMTransformUtils.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMProfileData.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMTarget.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMAnalysis.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMMC.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMAsmParser.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMCore.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/llc: interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llc"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/build: interpreter/llvm/src/bin/llc

.PHONY : interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/build

interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/requires: interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/llc.cpp.o.requires

.PHONY : interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/requires

interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llc && $(CMAKE_COMMAND) -P CMakeFiles/llc.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/clean

interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/llc /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llc /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/llc/CMakeFiles/llc.dir/depend

