# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Documents/code/agile_devlopment_practices/c_practices

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Documents/code/agile_devlopment_practices/c_practices/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_practices.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c_practices.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_practices.dir/flags.make

CMakeFiles/c_practices.dir/Domain_language/main.c.o: CMakeFiles/c_practices.dir/flags.make
CMakeFiles/c_practices.dir/Domain_language/main.c.o: ../Domain_language/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Documents/code/agile_devlopment_practices/c_practices/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_practices.dir/Domain_language/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c_practices.dir/Domain_language/main.c.o   -c /mnt/d/Documents/code/agile_devlopment_practices/c_practices/Domain_language/main.c

CMakeFiles/c_practices.dir/Domain_language/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_practices.dir/Domain_language/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Documents/code/agile_devlopment_practices/c_practices/Domain_language/main.c > CMakeFiles/c_practices.dir/Domain_language/main.c.i

CMakeFiles/c_practices.dir/Domain_language/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_practices.dir/Domain_language/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Documents/code/agile_devlopment_practices/c_practices/Domain_language/main.c -o CMakeFiles/c_practices.dir/Domain_language/main.c.s

# Object files for target c_practices
c_practices_OBJECTS = \
"CMakeFiles/c_practices.dir/Domain_language/main.c.o"

# External object files for target c_practices
c_practices_EXTERNAL_OBJECTS =

c_practices: CMakeFiles/c_practices.dir/Domain_language/main.c.o
c_practices: CMakeFiles/c_practices.dir/build.make
c_practices: CMakeFiles/c_practices.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Documents/code/agile_devlopment_practices/c_practices/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_practices"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c_practices.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_practices.dir/build: c_practices

.PHONY : CMakeFiles/c_practices.dir/build

CMakeFiles/c_practices.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c_practices.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c_practices.dir/clean

CMakeFiles/c_practices.dir/depend:
	cd /mnt/d/Documents/code/agile_devlopment_practices/c_practices/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Documents/code/agile_devlopment_practices/c_practices /mnt/d/Documents/code/agile_devlopment_practices/c_practices /mnt/d/Documents/code/agile_devlopment_practices/c_practices/cmake-build-debug /mnt/d/Documents/code/agile_devlopment_practices/c_practices/cmake-build-debug /mnt/d/Documents/code/agile_devlopment_practices/c_practices/cmake-build-debug/CMakeFiles/c_practices.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_practices.dir/depend

