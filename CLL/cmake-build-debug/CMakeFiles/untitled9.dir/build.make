# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /cygdrive/c/Users/amanc/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/amanc/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/e/New folder/untitled9"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/e/New folder/untitled9/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/untitled9.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/untitled9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled9.dir/flags.make

CMakeFiles/untitled9.dir/main.c.o: CMakeFiles/untitled9.dir/flags.make
CMakeFiles/untitled9.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/e/New folder/untitled9/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled9.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled9.dir/main.c.o -c "/cygdrive/e/New folder/untitled9/main.c"

CMakeFiles/untitled9.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled9.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/cygdrive/e/New folder/untitled9/main.c" > CMakeFiles/untitled9.dir/main.c.i

CMakeFiles/untitled9.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled9.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/cygdrive/e/New folder/untitled9/main.c" -o CMakeFiles/untitled9.dir/main.c.s

# Object files for target untitled9
untitled9_OBJECTS = \
"CMakeFiles/untitled9.dir/main.c.o"

# External object files for target untitled9
untitled9_EXTERNAL_OBJECTS =

untitled9.exe: CMakeFiles/untitled9.dir/main.c.o
untitled9.exe: CMakeFiles/untitled9.dir/build.make
untitled9.exe: CMakeFiles/untitled9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/e/New folder/untitled9/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable untitled9.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled9.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled9.dir/build: untitled9.exe
.PHONY : CMakeFiles/untitled9.dir/build

CMakeFiles/untitled9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled9.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled9.dir/clean

CMakeFiles/untitled9.dir/depend:
	cd "/cygdrive/e/New folder/untitled9/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/e/New folder/untitled9" "/cygdrive/e/New folder/untitled9" "/cygdrive/e/New folder/untitled9/cmake-build-debug" "/cygdrive/e/New folder/untitled9/cmake-build-debug" "/cygdrive/e/New folder/untitled9/cmake-build-debug/CMakeFiles/untitled9.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/untitled9.dir/depend

