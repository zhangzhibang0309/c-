# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\JetBrains\apps\CLion\ch-0\212.5284.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\JetBrains\apps\CLion\ch-0\212.5284.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug

# Include any dependencies generated for this target.
include 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/depend.make
# Include the progress variables for this target.
include 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/progress.make

# Include the compile flags for this target's objects.
include 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/flags.make

01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.obj: 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/flags.make
01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.obj: 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/includes_CXX.rsp
01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.obj: ../01_basicGrammer/02_varAndConst.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.obj"
	cd /d C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug\01_basicGrammer && D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\01_basicGrammer-02_varAndConst.dir\02_varAndConst.cpp.obj -c C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\01_basicGrammer\02_varAndConst.cpp

01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.i"
	cd /d C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug\01_basicGrammer && D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\01_basicGrammer\02_varAndConst.cpp > CMakeFiles\01_basicGrammer-02_varAndConst.dir\02_varAndConst.cpp.i

01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.s"
	cd /d C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug\01_basicGrammer && D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\01_basicGrammer\02_varAndConst.cpp -o CMakeFiles\01_basicGrammer-02_varAndConst.dir\02_varAndConst.cpp.s

# Object files for target 01_basicGrammer-02_varAndConst
01_basicGrammer__02_varAndConst_OBJECTS = \
"CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.obj"

# External object files for target 01_basicGrammer-02_varAndConst
01_basicGrammer__02_varAndConst_EXTERNAL_OBJECTS =

01_basicGrammer/01_basicGrammer-02_varAndConst.exe: 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/02_varAndConst.cpp.obj
01_basicGrammer/01_basicGrammer-02_varAndConst.exe: 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/build.make
01_basicGrammer/01_basicGrammer-02_varAndConst.exe: 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/linklibs.rsp
01_basicGrammer/01_basicGrammer-02_varAndConst.exe: 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/objects1.rsp
01_basicGrammer/01_basicGrammer-02_varAndConst.exe: 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 01_basicGrammer-02_varAndConst.exe"
	cd /d C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug\01_basicGrammer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\01_basicGrammer-02_varAndConst.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/build: 01_basicGrammer/01_basicGrammer-02_varAndConst.exe
.PHONY : 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/build

01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/clean:
	cd /d C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug\01_basicGrammer && $(CMAKE_COMMAND) -P CMakeFiles\01_basicGrammer-02_varAndConst.dir\cmake_clean.cmake
.PHONY : 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/clean

01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\01_basicGrammer C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug\01_basicGrammer C:\Users\Lenovo\Desktop\the-complete-of-cpp\cppPro\cmake-build-debug\01_basicGrammer\CMakeFiles\01_basicGrammer-02_varAndConst.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 01_basicGrammer/CMakeFiles/01_basicGrammer-02_varAndConst.dir/depend

