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

# Utility rule file for ClangDiagnosticCommon.

# Include the progress variables for this target.
include interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon.dir/progress.make

interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon: interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc


interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc: interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Updating DiagnosticCommonKinds.inc..."
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include/clang/Basic && /usr/bin/cmake -E copy_if_different /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc

interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: interpreter/llvm/src/bin/clang-tblgen
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/Attr.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/AttrDocs.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/CommentNodes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DeclNodes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/Diagnostic.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticASTKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticAnalysisKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCategories.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommentKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticDriverKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticFrontendKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticGroups.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticLexKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticParseKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticSemaKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticSerializationKinds.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/StmtNodes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/arm_neon.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/CodeGen/ValueTypes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/Attributes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/Intrinsics.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsAArch64.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsAMDGPU.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsARM.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsBPF.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsHexagon.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsMips.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsNVVM.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsPowerPC.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsSystemZ.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsWebAssembly.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsX86.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/IR/IntrinsicsXCore.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/Option/OptParser.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/TableGen/SearchableTable.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/Target/GenericOpcodes.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/Target/Target.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/Target/TargetCallingConv.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/Target/TargetItinerary.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/Target/TargetSchedule.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/include/llvm/Target/TargetSelectionDAG.td
interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp: ../interpreter/llvm/src/tools/clang/include/clang/Basic/Diagnostic.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building DiagnosticCommonKinds.inc..."
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include/clang/Basic && ../../../../../bin/clang-tblgen -gen-clang-diags-defs -clang-component=Common -I /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/clang/include/clang/Basic -I /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/Target -I /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/include /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/clang/include/clang/Basic/Diagnostic.td -o /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp

ClangDiagnosticCommon: interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon
ClangDiagnosticCommon: interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc
ClangDiagnosticCommon: interpreter/llvm/src/tools/clang/include/clang/Basic/DiagnosticCommonKinds.inc.tmp
ClangDiagnosticCommon: interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon.dir/build.make

.PHONY : ClangDiagnosticCommon

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon.dir/build: ClangDiagnosticCommon

.PHONY : interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon.dir/build

interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include/clang/Basic && $(CMAKE_COMMAND) -P CMakeFiles/ClangDiagnosticCommon.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon.dir/clean

interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/tools/clang/include/clang/Basic /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include/clang/Basic /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/clang/include/clang/Basic/CMakeFiles/ClangDiagnosticCommon.dir/depend

