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
CMAKE_SOURCE_DIR = /Users/sekay/CLionProjects/sboj/sboj1198

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sekay/CLionProjects/sboj/sboj1198/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sboj1198.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sboj1198.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sboj1198.dir/flags.make

CMakeFiles/sboj1198.dir/main.cpp.o: CMakeFiles/sboj1198.dir/flags.make
CMakeFiles/sboj1198.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sekay/CLionProjects/sboj/sboj1198/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sboj1198.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sboj1198.dir/main.cpp.o -c /Users/sekay/CLionProjects/sboj/sboj1198/main.cpp

CMakeFiles/sboj1198.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sboj1198.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sekay/CLionProjects/sboj/sboj1198/main.cpp > CMakeFiles/sboj1198.dir/main.cpp.i

CMakeFiles/sboj1198.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sboj1198.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sekay/CLionProjects/sboj/sboj1198/main.cpp -o CMakeFiles/sboj1198.dir/main.cpp.s

# Object files for target sboj1198
sboj1198_OBJECTS = \
"CMakeFiles/sboj1198.dir/main.cpp.o"

# External object files for target sboj1198
sboj1198_EXTERNAL_OBJECTS =

sboj1198: CMakeFiles/sboj1198.dir/main.cpp.o
sboj1198: CMakeFiles/sboj1198.dir/build.make
sboj1198: CMakeFiles/sboj1198.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sekay/CLionProjects/sboj/sboj1198/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sboj1198"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sboj1198.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sboj1198.dir/build: sboj1198

.PHONY : CMakeFiles/sboj1198.dir/build

CMakeFiles/sboj1198.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sboj1198.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sboj1198.dir/clean

CMakeFiles/sboj1198.dir/depend:
	cd /Users/sekay/CLionProjects/sboj/sboj1198/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sekay/CLionProjects/sboj/sboj1198 /Users/sekay/CLionProjects/sboj/sboj1198 /Users/sekay/CLionProjects/sboj/sboj1198/cmake-build-debug /Users/sekay/CLionProjects/sboj/sboj1198/cmake-build-debug /Users/sekay/CLionProjects/sboj/sboj1198/cmake-build-debug/CMakeFiles/sboj1198.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sboj1198.dir/depend

