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
CMAKE_SOURCE_DIR = /home/davidfeng/UI_Lab/QtMainWindows

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/davidfeng/UI_Lab/QtMainWindows/build/1-Debug

# Utility rule file for QtMainWindows_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/QtMainWindows_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QtMainWindows_autogen.dir/progress.make

CMakeFiles/QtMainWindows_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/davidfeng/UI_Lab/QtMainWindows/build/1-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QtMainWindows"
	/usr/bin/cmake -E cmake_autogen /home/davidfeng/UI_Lab/QtMainWindows/build/1-Debug/CMakeFiles/QtMainWindows_autogen.dir/AutogenInfo.json Debug

QtMainWindows_autogen: CMakeFiles/QtMainWindows_autogen
QtMainWindows_autogen: CMakeFiles/QtMainWindows_autogen.dir/build.make
.PHONY : QtMainWindows_autogen

# Rule to build all files generated by this target.
CMakeFiles/QtMainWindows_autogen.dir/build: QtMainWindows_autogen
.PHONY : CMakeFiles/QtMainWindows_autogen.dir/build

CMakeFiles/QtMainWindows_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QtMainWindows_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QtMainWindows_autogen.dir/clean

CMakeFiles/QtMainWindows_autogen.dir/depend:
	cd /home/davidfeng/UI_Lab/QtMainWindows/build/1-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/davidfeng/UI_Lab/QtMainWindows /home/davidfeng/UI_Lab/QtMainWindows /home/davidfeng/UI_Lab/QtMainWindows/build/1-Debug /home/davidfeng/UI_Lab/QtMainWindows/build/1-Debug /home/davidfeng/UI_Lab/QtMainWindows/build/1-Debug/CMakeFiles/QtMainWindows_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QtMainWindows_autogen.dir/depend

