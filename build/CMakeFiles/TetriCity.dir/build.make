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
CMAKE_SOURCE_DIR = /home/austihh/OOP-Project/OOP-Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/austihh/OOP-Project/OOP-Project/build

# Include any dependencies generated for this target.
include CMakeFiles/TetriCity.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TetriCity.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TetriCity.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TetriCity.dir/flags.make

CMakeFiles/TetriCity.dir/src/main.cpp.o: CMakeFiles/TetriCity.dir/flags.make
CMakeFiles/TetriCity.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/TetriCity.dir/src/main.cpp.o: CMakeFiles/TetriCity.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/austihh/OOP-Project/OOP-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TetriCity.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TetriCity.dir/src/main.cpp.o -MF CMakeFiles/TetriCity.dir/src/main.cpp.o.d -o CMakeFiles/TetriCity.dir/src/main.cpp.o -c /home/austihh/OOP-Project/OOP-Project/src/main.cpp

CMakeFiles/TetriCity.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TetriCity.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/austihh/OOP-Project/OOP-Project/src/main.cpp > CMakeFiles/TetriCity.dir/src/main.cpp.i

CMakeFiles/TetriCity.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TetriCity.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/austihh/OOP-Project/OOP-Project/src/main.cpp -o CMakeFiles/TetriCity.dir/src/main.cpp.s

CMakeFiles/TetriCity.dir/src/Menu.cpp.o: CMakeFiles/TetriCity.dir/flags.make
CMakeFiles/TetriCity.dir/src/Menu.cpp.o: ../src/Menu.cpp
CMakeFiles/TetriCity.dir/src/Menu.cpp.o: CMakeFiles/TetriCity.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/austihh/OOP-Project/OOP-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TetriCity.dir/src/Menu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TetriCity.dir/src/Menu.cpp.o -MF CMakeFiles/TetriCity.dir/src/Menu.cpp.o.d -o CMakeFiles/TetriCity.dir/src/Menu.cpp.o -c /home/austihh/OOP-Project/OOP-Project/src/Menu.cpp

CMakeFiles/TetriCity.dir/src/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TetriCity.dir/src/Menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/austihh/OOP-Project/OOP-Project/src/Menu.cpp > CMakeFiles/TetriCity.dir/src/Menu.cpp.i

CMakeFiles/TetriCity.dir/src/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TetriCity.dir/src/Menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/austihh/OOP-Project/OOP-Project/src/Menu.cpp -o CMakeFiles/TetriCity.dir/src/Menu.cpp.s

# Object files for target TetriCity
TetriCity_OBJECTS = \
"CMakeFiles/TetriCity.dir/src/main.cpp.o" \
"CMakeFiles/TetriCity.dir/src/Menu.cpp.o"

# External object files for target TetriCity
TetriCity_EXTERNAL_OBJECTS =

TetriCity: CMakeFiles/TetriCity.dir/src/main.cpp.o
TetriCity: CMakeFiles/TetriCity.dir/src/Menu.cpp.o
TetriCity: CMakeFiles/TetriCity.dir/build.make
TetriCity: CMakeFiles/TetriCity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/austihh/OOP-Project/OOP-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TetriCity"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TetriCity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TetriCity.dir/build: TetriCity
.PHONY : CMakeFiles/TetriCity.dir/build

CMakeFiles/TetriCity.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TetriCity.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TetriCity.dir/clean

CMakeFiles/TetriCity.dir/depend:
	cd /home/austihh/OOP-Project/OOP-Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/austihh/OOP-Project/OOP-Project /home/austihh/OOP-Project/OOP-Project /home/austihh/OOP-Project/OOP-Project/build /home/austihh/OOP-Project/OOP-Project/build /home/austihh/OOP-Project/OOP-Project/build/CMakeFiles/TetriCity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TetriCity.dir/depend

