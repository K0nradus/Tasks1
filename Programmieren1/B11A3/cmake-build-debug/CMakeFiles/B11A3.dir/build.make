# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /snap/clion/284/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/284/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/martin/gitrepos/Tasks1/B11A3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/martin/gitrepos/Tasks1/B11A3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/B11A3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/B11A3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/B11A3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/B11A3.dir/flags.make

CMakeFiles/B11A3.dir/main.cpp.o: CMakeFiles/B11A3.dir/flags.make
CMakeFiles/B11A3.dir/main.cpp.o: /home/martin/gitrepos/Tasks1/B11A3/main.cpp
CMakeFiles/B11A3.dir/main.cpp.o: CMakeFiles/B11A3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/martin/gitrepos/Tasks1/B11A3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/B11A3.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/B11A3.dir/main.cpp.o -MF CMakeFiles/B11A3.dir/main.cpp.o.d -o CMakeFiles/B11A3.dir/main.cpp.o -c /home/martin/gitrepos/Tasks1/B11A3/main.cpp

CMakeFiles/B11A3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/B11A3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/martin/gitrepos/Tasks1/B11A3/main.cpp > CMakeFiles/B11A3.dir/main.cpp.i

CMakeFiles/B11A3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/B11A3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/martin/gitrepos/Tasks1/B11A3/main.cpp -o CMakeFiles/B11A3.dir/main.cpp.s

CMakeFiles/B11A3.dir/safeArray.cpp.o: CMakeFiles/B11A3.dir/flags.make
CMakeFiles/B11A3.dir/safeArray.cpp.o: /home/martin/gitrepos/Tasks1/B11A3/safeArray.cpp
CMakeFiles/B11A3.dir/safeArray.cpp.o: CMakeFiles/B11A3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/martin/gitrepos/Tasks1/B11A3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/B11A3.dir/safeArray.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/B11A3.dir/safeArray.cpp.o -MF CMakeFiles/B11A3.dir/safeArray.cpp.o.d -o CMakeFiles/B11A3.dir/safeArray.cpp.o -c /home/martin/gitrepos/Tasks1/B11A3/safeArray.cpp

CMakeFiles/B11A3.dir/safeArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/B11A3.dir/safeArray.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/martin/gitrepos/Tasks1/B11A3/safeArray.cpp > CMakeFiles/B11A3.dir/safeArray.cpp.i

CMakeFiles/B11A3.dir/safeArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/B11A3.dir/safeArray.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/martin/gitrepos/Tasks1/B11A3/safeArray.cpp -o CMakeFiles/B11A3.dir/safeArray.cpp.s

# Object files for target B11A3
B11A3_OBJECTS = \
"CMakeFiles/B11A3.dir/main.cpp.o" \
"CMakeFiles/B11A3.dir/safeArray.cpp.o"

# External object files for target B11A3
B11A3_EXTERNAL_OBJECTS =

B11A3: CMakeFiles/B11A3.dir/main.cpp.o
B11A3: CMakeFiles/B11A3.dir/safeArray.cpp.o
B11A3: CMakeFiles/B11A3.dir/build.make
B11A3: CMakeFiles/B11A3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/martin/gitrepos/Tasks1/B11A3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable B11A3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/B11A3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/B11A3.dir/build: B11A3
.PHONY : CMakeFiles/B11A3.dir/build

CMakeFiles/B11A3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/B11A3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/B11A3.dir/clean

CMakeFiles/B11A3.dir/depend:
	cd /home/martin/gitrepos/Tasks1/B11A3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/martin/gitrepos/Tasks1/B11A3 /home/martin/gitrepos/Tasks1/B11A3 /home/martin/gitrepos/Tasks1/B11A3/cmake-build-debug /home/martin/gitrepos/Tasks1/B11A3/cmake-build-debug /home/martin/gitrepos/Tasks1/B11A3/cmake-build-debug/CMakeFiles/B11A3.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/B11A3.dir/depend

