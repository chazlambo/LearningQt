# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/charlie/Documents/LearnQt/4 - Flow Control/ExampleAgeCalculator"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug"

# Include any dependencies generated for this target.
include CMakeFiles/ExampleAgeCalculator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ExampleAgeCalculator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ExampleAgeCalculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ExampleAgeCalculator.dir/flags.make

CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.o: CMakeFiles/ExampleAgeCalculator.dir/flags.make
CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.o: ExampleAgeCalculator_autogen/mocs_compilation.cpp
CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.o: CMakeFiles/ExampleAgeCalculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.o -c "/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug/ExampleAgeCalculator_autogen/mocs_compilation.cpp"

CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug/ExampleAgeCalculator_autogen/mocs_compilation.cpp" > CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.i

CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug/ExampleAgeCalculator_autogen/mocs_compilation.cpp" -o CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.s

CMakeFiles/ExampleAgeCalculator.dir/main.cpp.o: CMakeFiles/ExampleAgeCalculator.dir/flags.make
CMakeFiles/ExampleAgeCalculator.dir/main.cpp.o: /home/charlie/Documents/LearnQt/4\ -\ Flow\ Control/ExampleAgeCalculator/main.cpp
CMakeFiles/ExampleAgeCalculator.dir/main.cpp.o: CMakeFiles/ExampleAgeCalculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ExampleAgeCalculator.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ExampleAgeCalculator.dir/main.cpp.o -MF CMakeFiles/ExampleAgeCalculator.dir/main.cpp.o.d -o CMakeFiles/ExampleAgeCalculator.dir/main.cpp.o -c "/home/charlie/Documents/LearnQt/4 - Flow Control/ExampleAgeCalculator/main.cpp"

CMakeFiles/ExampleAgeCalculator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExampleAgeCalculator.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/charlie/Documents/LearnQt/4 - Flow Control/ExampleAgeCalculator/main.cpp" > CMakeFiles/ExampleAgeCalculator.dir/main.cpp.i

CMakeFiles/ExampleAgeCalculator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExampleAgeCalculator.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/charlie/Documents/LearnQt/4 - Flow Control/ExampleAgeCalculator/main.cpp" -o CMakeFiles/ExampleAgeCalculator.dir/main.cpp.s

# Object files for target ExampleAgeCalculator
ExampleAgeCalculator_OBJECTS = \
"CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ExampleAgeCalculator.dir/main.cpp.o"

# External object files for target ExampleAgeCalculator
ExampleAgeCalculator_EXTERNAL_OBJECTS =

ExampleAgeCalculator: CMakeFiles/ExampleAgeCalculator.dir/ExampleAgeCalculator_autogen/mocs_compilation.cpp.o
ExampleAgeCalculator: CMakeFiles/ExampleAgeCalculator.dir/main.cpp.o
ExampleAgeCalculator: CMakeFiles/ExampleAgeCalculator.dir/build.make
ExampleAgeCalculator: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
ExampleAgeCalculator: CMakeFiles/ExampleAgeCalculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ExampleAgeCalculator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ExampleAgeCalculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ExampleAgeCalculator.dir/build: ExampleAgeCalculator
.PHONY : CMakeFiles/ExampleAgeCalculator.dir/build

CMakeFiles/ExampleAgeCalculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ExampleAgeCalculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ExampleAgeCalculator.dir/clean

CMakeFiles/ExampleAgeCalculator.dir/depend:
	cd "/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/charlie/Documents/LearnQt/4 - Flow Control/ExampleAgeCalculator" "/home/charlie/Documents/LearnQt/4 - Flow Control/ExampleAgeCalculator" "/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug" "/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug" "/home/charlie/Documents/LearnQt/4 - Flow Control/build-ExampleAgeCalculator-Desktop-Debug/CMakeFiles/ExampleAgeCalculator.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ExampleAgeCalculator.dir/depend

