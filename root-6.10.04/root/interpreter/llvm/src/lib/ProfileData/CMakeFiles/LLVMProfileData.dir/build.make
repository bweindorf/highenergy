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
include interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/flags.make

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/flags.make
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o: ../interpreter/llvm/src/lib/ProfileData/InstrProf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/InstrProf.cpp

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/InstrProf.cpp > CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.i

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/InstrProf.cpp -o CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.s

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o.requires:

.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o.requires

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o.provides: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o.requires
	$(MAKE) -f interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build.make interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o.provides.build
.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o.provides

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o.provides.build: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o


interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/flags.make
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o: ../interpreter/llvm/src/lib/ProfileData/InstrProfReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/InstrProfReader.cpp

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/InstrProfReader.cpp > CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.i

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/InstrProfReader.cpp -o CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.s

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o.requires:

.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o.requires

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o.provides: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o.requires
	$(MAKE) -f interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build.make interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o.provides.build
.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o.provides

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o.provides.build: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o


interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/flags.make
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o: ../interpreter/llvm/src/lib/ProfileData/InstrProfWriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/InstrProfWriter.cpp

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/InstrProfWriter.cpp > CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.i

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/InstrProfWriter.cpp -o CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.s

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o.requires:

.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o.requires

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o.provides: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o.requires
	$(MAKE) -f interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build.make interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o.provides.build
.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o.provides

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o.provides.build: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o


interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/flags.make
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o: ../interpreter/llvm/src/lib/ProfileData/ProfileSummaryBuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/ProfileSummaryBuilder.cpp

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/ProfileSummaryBuilder.cpp > CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.i

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/ProfileSummaryBuilder.cpp -o CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.s

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o.requires:

.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o.requires

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o.provides: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o.requires
	$(MAKE) -f interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build.make interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o.provides.build
.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o.provides

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o.provides.build: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o


interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/flags.make
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o: ../interpreter/llvm/src/lib/ProfileData/SampleProf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/SampleProf.cpp

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/SampleProf.cpp > CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.i

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/SampleProf.cpp -o CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.s

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o.requires:

.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o.requires

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o.provides: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o.requires
	$(MAKE) -f interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build.make interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o.provides.build
.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o.provides

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o.provides.build: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o


interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/flags.make
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o: ../interpreter/llvm/src/lib/ProfileData/SampleProfReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/SampleProfReader.cpp

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/SampleProfReader.cpp > CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.i

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/SampleProfReader.cpp -o CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.s

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o.requires:

.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o.requires

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o.provides: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o.requires
	$(MAKE) -f interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build.make interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o.provides.build
.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o.provides

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o.provides.build: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o


interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/flags.make
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o: ../interpreter/llvm/src/lib/ProfileData/SampleProfWriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o -c /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/SampleProfWriter.cpp

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.i"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/SampleProfWriter.cpp > CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.i

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.s"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData/SampleProfWriter.cpp -o CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.s

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o.requires:

.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o.requires

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o.provides: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o.requires
	$(MAKE) -f interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build.make interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o.provides.build
.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o.provides

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o.provides.build: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o


# Object files for target LLVMProfileData
LLVMProfileData_OBJECTS = \
"CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o" \
"CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o" \
"CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o" \
"CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o" \
"CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o" \
"CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o" \
"CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o"

# External object files for target LLVMProfileData
LLVMProfileData_EXTERNAL_OBJECTS =

interpreter/llvm/src/lib/libLLVMProfileData.a: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o
interpreter/llvm/src/lib/libLLVMProfileData.a: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o
interpreter/llvm/src/lib/libLLVMProfileData.a: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o
interpreter/llvm/src/lib/libLLVMProfileData.a: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o
interpreter/llvm/src/lib/libLLVMProfileData.a: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o
interpreter/llvm/src/lib/libLLVMProfileData.a: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o
interpreter/llvm/src/lib/libLLVMProfileData.a: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o
interpreter/llvm/src/lib/libLLVMProfileData.a: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build.make
interpreter/llvm/src/lib/libLLVMProfileData.a: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brandon/Projects/root-6.10.04/root/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library ../libLLVMProfileData.a"
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && $(CMAKE_COMMAND) -P CMakeFiles/LLVMProfileData.dir/cmake_clean_target.cmake
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMProfileData.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build: interpreter/llvm/src/lib/libLLVMProfileData.a

.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/build

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/requires: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProf.cpp.o.requires
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/requires: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfReader.cpp.o.requires
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/requires: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/InstrProfWriter.cpp.o.requires
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/requires: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/ProfileSummaryBuilder.cpp.o.requires
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/requires: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProf.cpp.o.requires
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/requires: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfReader.cpp.o.requires
interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/requires: interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/SampleProfWriter.cpp.o.requires

.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/requires

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/clean:
	cd /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData && $(CMAKE_COMMAND) -P CMakeFiles/LLVMProfileData.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/clean

interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/depend:
	cd /home/brandon/Projects/root-6.10.04/root && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brandon/Projects/root-6.10.04 /home/brandon/Projects/root-6.10.04/interpreter/llvm/src/lib/ProfileData /home/brandon/Projects/root-6.10.04/root /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData /home/brandon/Projects/root-6.10.04/root/interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/lib/ProfileData/CMakeFiles/LLVMProfileData.dir/depend

