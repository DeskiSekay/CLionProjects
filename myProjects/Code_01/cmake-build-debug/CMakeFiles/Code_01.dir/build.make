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
CMAKE_SOURCE_DIR = /Users/sekay/CLionProjects/Code_01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sekay/CLionProjects/Code_01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Code_01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Code_01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Code_01.dir/flags.make

CMakeFiles/Code_01.dir/main.cpp.o: CMakeFiles/Code_01.dir/flags.make
CMakeFiles/Code_01.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sekay/CLionProjects/Code_01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Code_01.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Code_01.dir/main.cpp.o -c /Users/sekay/CLionProjects/Code_01/main.cpp

CMakeFiles/Code_01.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Code_01.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sekay/CLionProjects/Code_01/main.cpp > CMakeFiles/Code_01.dir/main.cpp.i

CMakeFiles/Code_01.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Code_01.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sekay/CLionProjects/Code_01/main.cpp -o CMakeFiles/Code_01.dir/main.cpp.s

CMakeFiles/Code_01.dir/example.cpp.o: CMakeFiles/Code_01.dir/flags.make
CMakeFiles/Code_01.dir/example.cpp.o: example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sekay/CLionProjects/Code_01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Code_01.dir/example.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Code_01.dir/example.cpp.o -c /Users/sekay/CLionProjects/Code_01/cmake-build-debug/example.cpp

CMakeFiles/Code_01.dir/example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Code_01.dir/example.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sekay/CLionProjects/Code_01/cmake-build-debug/example.cpp > CMakeFiles/Code_01.dir/example.cpp.i

CMakeFiles/Code_01.dir/example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Code_01.dir/example.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sekay/CLionProjects/Code_01/cmake-build-debug/example.cpp -o CMakeFiles/Code_01.dir/example.cpp.s

CMakeFiles/Code_01.dir/main_1.cpp.o: CMakeFiles/Code_01.dir/flags.make
CMakeFiles/Code_01.dir/main_1.cpp.o: main_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sekay/CLionProjects/Code_01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Code_01.dir/main_1.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Code_01.dir/main_1.cpp.o -c /Users/sekay/CLionProjects/Code_01/cmake-build-debug/main_1.cpp

CMakeFiles/Code_01.dir/main_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Code_01.dir/main_1.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sekay/CLionProjects/Code_01/cmake-build-debug/main_1.cpp > CMakeFiles/Code_01.dir/main_1.cpp.i

CMakeFiles/Code_01.dir/main_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Code_01.dir/main_1.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sekay/CLionProjects/Code_01/cmake-build-debug/main_1.cpp -o CMakeFiles/Code_01.dir/main_1.cpp.s

# Object files for target Code_01
Code_01_OBJECTS = \
"CMakeFiles/Code_01.dir/main.cpp.o" \
"CMakeFiles/Code_01.dir/example.cpp.o" \
"CMakeFiles/Code_01.dir/main_1.cpp.o"

# External object files for target Code_01
Code_01_EXTERNAL_OBJECTS =

Code_01: CMakeFiles/Code_01.dir/main.cpp.o
Code_01: CMakeFiles/Code_01.dir/example.cpp.o
Code_01: CMakeFiles/Code_01.dir/main_1.cpp.o
Code_01: CMakeFiles/Code_01.dir/build.make
Code_01: CMakeFiles/Code_01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sekay/CLionProjects/Code_01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Code_01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Code_01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Code_01.dir/build: Code_01

.PHONY : CMakeFiles/Code_01.dir/build

CMakeFiles/Code_01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Code_01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Code_01.dir/clean

CMakeFiles/Code_01.dir/depend:
	cd /Users/sekay/CLionProjects/Code_01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sekay/CLionProjects/Code_01 /Users/sekay/CLionProjects/Code_01 /Users/sekay/CLionProjects/Code_01/cmake-build-debug /Users/sekay/CLionProjects/Code_01/cmake-build-debug /Users/sekay/CLionProjects/Code_01/cmake-build-debug/CMakeFiles/Code_01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Code_01.dir/depend

