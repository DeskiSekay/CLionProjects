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
CMAKE_SOURCE_DIR = /Users/sekay/CLionProjects/Lib/Continuously_add_up

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sekay/CLionProjects/Lib/Continuously_add_up/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Continuously_add_up.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Continuously_add_up.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Continuously_add_up.dir/flags.make

CMakeFiles/Continuously_add_up.dir/main.cpp.o: CMakeFiles/Continuously_add_up.dir/flags.make
CMakeFiles/Continuously_add_up.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sekay/CLionProjects/Lib/Continuously_add_up/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Continuously_add_up.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Continuously_add_up.dir/main.cpp.o -c /Users/sekay/CLionProjects/Lib/Continuously_add_up/main.cpp

CMakeFiles/Continuously_add_up.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Continuously_add_up.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sekay/CLionProjects/Lib/Continuously_add_up/main.cpp > CMakeFiles/Continuously_add_up.dir/main.cpp.i

CMakeFiles/Continuously_add_up.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Continuously_add_up.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sekay/CLionProjects/Lib/Continuously_add_up/main.cpp -o CMakeFiles/Continuously_add_up.dir/main.cpp.s

# Object files for target Continuously_add_up
Continuously_add_up_OBJECTS = \
"CMakeFiles/Continuously_add_up.dir/main.cpp.o"

# External object files for target Continuously_add_up
Continuously_add_up_EXTERNAL_OBJECTS =

Continuously_add_up: CMakeFiles/Continuously_add_up.dir/main.cpp.o
Continuously_add_up: CMakeFiles/Continuously_add_up.dir/build.make
Continuously_add_up: CMakeFiles/Continuously_add_up.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sekay/CLionProjects/Lib/Continuously_add_up/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Continuously_add_up"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Continuously_add_up.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Continuously_add_up.dir/build: Continuously_add_up

.PHONY : CMakeFiles/Continuously_add_up.dir/build

CMakeFiles/Continuously_add_up.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Continuously_add_up.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Continuously_add_up.dir/clean

CMakeFiles/Continuously_add_up.dir/depend:
	cd /Users/sekay/CLionProjects/Lib/Continuously_add_up/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sekay/CLionProjects/Lib/Continuously_add_up /Users/sekay/CLionProjects/Lib/Continuously_add_up /Users/sekay/CLionProjects/Lib/Continuously_add_up/cmake-build-debug /Users/sekay/CLionProjects/Lib/Continuously_add_up/cmake-build-debug /Users/sekay/CLionProjects/Lib/Continuously_add_up/cmake-build-debug/CMakeFiles/Continuously_add_up.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Continuously_add_up.dir/depend

