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
CMAKE_COMMAND = /snap/clion/274/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/274/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Blatt5A3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Blatt5A3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Blatt5A3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Blatt5A3.dir/flags.make

CMakeFiles/Blatt5A3.dir/main.c.o: CMakeFiles/Blatt5A3.dir/flags.make
CMakeFiles/Blatt5A3.dir/main.c.o: /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/main.c
CMakeFiles/Blatt5A3.dir/main.c.o: CMakeFiles/Blatt5A3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Blatt5A3.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Blatt5A3.dir/main.c.o -MF CMakeFiles/Blatt5A3.dir/main.c.o.d -o CMakeFiles/Blatt5A3.dir/main.c.o -c /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/main.c

CMakeFiles/Blatt5A3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Blatt5A3.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/main.c > CMakeFiles/Blatt5A3.dir/main.c.i

CMakeFiles/Blatt5A3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Blatt5A3.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/main.c -o CMakeFiles/Blatt5A3.dir/main.c.s

# Object files for target Blatt5A3
Blatt5A3_OBJECTS = \
"CMakeFiles/Blatt5A3.dir/main.c.o"

# External object files for target Blatt5A3
Blatt5A3_EXTERNAL_OBJECTS =

Blatt5A3: CMakeFiles/Blatt5A3.dir/main.c.o
Blatt5A3: CMakeFiles/Blatt5A3.dir/build.make
Blatt5A3: CMakeFiles/Blatt5A3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Blatt5A3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Blatt5A3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Blatt5A3.dir/build: Blatt5A3
.PHONY : CMakeFiles/Blatt5A3.dir/build

CMakeFiles/Blatt5A3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Blatt5A3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Blatt5A3.dir/clean

CMakeFiles/Blatt5A3.dir/depend:
	cd /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3 /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3 /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/cmake-build-debug /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/cmake-build-debug /home/martin/gitrepos/Tasks1/Blatt5Aufgaben/Blatt5A3/cmake-build-debug/CMakeFiles/Blatt5A3.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Blatt5A3.dir/depend

