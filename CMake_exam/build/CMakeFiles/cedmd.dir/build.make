# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Project\Git\CMake_exam

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Project\Git\CMake_exam\build

# Include any dependencies generated for this target.
include CMakeFiles/cedmd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cedmd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cedmd.dir/flags.make

CMakeFiles/cedmd.dir/library/hello.cpp.obj: CMakeFiles/cedmd.dir/flags.make
CMakeFiles/cedmd.dir/library/hello.cpp.obj: CMakeFiles/cedmd.dir/includes_CXX.rsp
CMakeFiles/cedmd.dir/library/hello.cpp.obj: ../library/hello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Project\Git\CMake_exam\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cedmd.dir/library/hello.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cedmd.dir\library\hello.cpp.obj -c D:\Project\Git\CMake_exam\library\hello.cpp

CMakeFiles/cedmd.dir/library/hello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cedmd.dir/library/hello.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Project\Git\CMake_exam\library\hello.cpp > CMakeFiles\cedmd.dir\library\hello.cpp.i

CMakeFiles/cedmd.dir/library/hello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cedmd.dir/library/hello.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Project\Git\CMake_exam\library\hello.cpp -o CMakeFiles\cedmd.dir\library\hello.cpp.s

CMakeFiles/cedmd.dir/library/hello.cpp.obj.requires:

.PHONY : CMakeFiles/cedmd.dir/library/hello.cpp.obj.requires

CMakeFiles/cedmd.dir/library/hello.cpp.obj.provides: CMakeFiles/cedmd.dir/library/hello.cpp.obj.requires
	$(MAKE) -f CMakeFiles\cedmd.dir\build.make CMakeFiles/cedmd.dir/library/hello.cpp.obj.provides.build
.PHONY : CMakeFiles/cedmd.dir/library/hello.cpp.obj.provides

CMakeFiles/cedmd.dir/library/hello.cpp.obj.provides.build: CMakeFiles/cedmd.dir/library/hello.cpp.obj


CMakeFiles/cedmd.dir/src/demo.cpp.obj: CMakeFiles/cedmd.dir/flags.make
CMakeFiles/cedmd.dir/src/demo.cpp.obj: CMakeFiles/cedmd.dir/includes_CXX.rsp
CMakeFiles/cedmd.dir/src/demo.cpp.obj: ../src/demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Project\Git\CMake_exam\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cedmd.dir/src/demo.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cedmd.dir\src\demo.cpp.obj -c D:\Project\Git\CMake_exam\src\demo.cpp

CMakeFiles/cedmd.dir/src/demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cedmd.dir/src/demo.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Project\Git\CMake_exam\src\demo.cpp > CMakeFiles\cedmd.dir\src\demo.cpp.i

CMakeFiles/cedmd.dir/src/demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cedmd.dir/src/demo.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Project\Git\CMake_exam\src\demo.cpp -o CMakeFiles\cedmd.dir\src\demo.cpp.s

CMakeFiles/cedmd.dir/src/demo.cpp.obj.requires:

.PHONY : CMakeFiles/cedmd.dir/src/demo.cpp.obj.requires

CMakeFiles/cedmd.dir/src/demo.cpp.obj.provides: CMakeFiles/cedmd.dir/src/demo.cpp.obj.requires
	$(MAKE) -f CMakeFiles\cedmd.dir\build.make CMakeFiles/cedmd.dir/src/demo.cpp.obj.provides.build
.PHONY : CMakeFiles/cedmd.dir/src/demo.cpp.obj.provides

CMakeFiles/cedmd.dir/src/demo.cpp.obj.provides.build: CMakeFiles/cedmd.dir/src/demo.cpp.obj


# Object files for target cedmd
cedmd_OBJECTS = \
"CMakeFiles/cedmd.dir/library/hello.cpp.obj" \
"CMakeFiles/cedmd.dir/src/demo.cpp.obj"

# External object files for target cedmd
cedmd_EXTERNAL_OBJECTS =

cedmd.exe: CMakeFiles/cedmd.dir/library/hello.cpp.obj
cedmd.exe: CMakeFiles/cedmd.dir/src/demo.cpp.obj
cedmd.exe: CMakeFiles/cedmd.dir/build.make
cedmd.exe: CMakeFiles/cedmd.dir/linklibs.rsp
cedmd.exe: CMakeFiles/cedmd.dir/objects1.rsp
cedmd.exe: CMakeFiles/cedmd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Project\Git\CMake_exam\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable cedmd.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cedmd.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cedmd.dir/build: cedmd.exe

.PHONY : CMakeFiles/cedmd.dir/build

CMakeFiles/cedmd.dir/requires: CMakeFiles/cedmd.dir/library/hello.cpp.obj.requires
CMakeFiles/cedmd.dir/requires: CMakeFiles/cedmd.dir/src/demo.cpp.obj.requires

.PHONY : CMakeFiles/cedmd.dir/requires

CMakeFiles/cedmd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cedmd.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cedmd.dir/clean

CMakeFiles/cedmd.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Project\Git\CMake_exam D:\Project\Git\CMake_exam D:\Project\Git\CMake_exam\build D:\Project\Git\CMake_exam\build D:\Project\Git\CMake_exam\build\CMakeFiles\cedmd.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cedmd.dir/depend

