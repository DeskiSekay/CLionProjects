# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sekay/CLionProjects/sboj1506

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sekay/CLionProjects/sboj1506/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sboj1506.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sboj1506.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sboj1506.dir/flags.make

CMakeFiles/sboj1506.dir/main.c.o: CMakeFiles/sboj1506.dir/flags.make
CMakeFiles/sboj1506.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sekay/CLionProjects/sboj1506/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sboj1506.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sboj1506.dir/main.c.o   -c /Users/sekay/CLionProjects/sboj1506/main.c

CMakeFiles/sboj1506.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sboj1506.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sekay/CLionProjects/sboj1506/main.c > CMakeFiles/sboj1506.dir/main.c.i

CMakeFiles/sboj1506.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sboj1506.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sekay/CLionProjects/sboj1506/main.c -o CMakeFiles/sboj1506.dir/main.c.s

# Object files for target sboj1506
sboj1506_OBJECTS = \
"CMakeFiles/sboj1506.dir/main.c.o"

# External object files for target sboj1506
sboj1506_EXTERNAL_OBJECTS =

sboj1506: CMakeFiles/sboj1506.dir/main.c.o
sboj1506: CMakeFiles/sboj1506.dir/build.make
sboj1506: CMakeFiles/sboj1506.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sekay/CLionProjects/sboj1506/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sboj1506"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sboj1506.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sboj1506.dir/build: sboj1506

.PHONY : CMakeFiles/sboj1506.dir/build

CMakeFiles/sboj1506.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sboj1506.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sboj1506.dir/clean

CMakeFiles/sboj1506.dir/depend:
	cd /Users/sekay/CLionProjects/sboj1506/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sekay/CLionProjects/sboj1506 /Users/sekay/CLionProjects/sboj1506 /Users/sekay/CLionProjects/sboj1506/cmake-build-debug /Users/sekay/CLionProjects/sboj1506/cmake-build-debug /Users/sekay/CLionProjects/sboj1506/cmake-build-debug/CMakeFiles/sboj1506.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sboj1506.dir/depend

