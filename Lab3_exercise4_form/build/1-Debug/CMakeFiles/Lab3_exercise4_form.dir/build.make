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
CMAKE_SOURCE_DIR = /home/davidfeng/UI_Lab/Lab3_exercise4_form

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab3_exercise4_form.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Lab3_exercise4_form.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab3_exercise4_form.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab3_exercise4_form.dir/flags.make

CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.o: CMakeFiles/Lab3_exercise4_form.dir/flags.make
CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.o: Lab3_exercise4_form_autogen/mocs_compilation.cpp
CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.o: CMakeFiles/Lab3_exercise4_form.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ --sysroot=/ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.o -c /home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug/Lab3_exercise4_form_autogen/mocs_compilation.cpp

CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ --sysroot=/ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug/Lab3_exercise4_form_autogen/mocs_compilation.cpp > CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.i

CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ --sysroot=/ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug/Lab3_exercise4_form_autogen/mocs_compilation.cpp -o CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.s

CMakeFiles/Lab3_exercise4_form.dir/form.cpp.o: CMakeFiles/Lab3_exercise4_form.dir/flags.make
CMakeFiles/Lab3_exercise4_form.dir/form.cpp.o: ../../form.cpp
CMakeFiles/Lab3_exercise4_form.dir/form.cpp.o: CMakeFiles/Lab3_exercise4_form.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lab3_exercise4_form.dir/form.cpp.o"
	/usr/bin/g++ --sysroot=/ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Lab3_exercise4_form.dir/form.cpp.o -MF CMakeFiles/Lab3_exercise4_form.dir/form.cpp.o.d -o CMakeFiles/Lab3_exercise4_form.dir/form.cpp.o -c /home/davidfeng/UI_Lab/Lab3_exercise4_form/form.cpp

CMakeFiles/Lab3_exercise4_form.dir/form.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab3_exercise4_form.dir/form.cpp.i"
	/usr/bin/g++ --sysroot=/ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davidfeng/UI_Lab/Lab3_exercise4_form/form.cpp > CMakeFiles/Lab3_exercise4_form.dir/form.cpp.i

CMakeFiles/Lab3_exercise4_form.dir/form.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab3_exercise4_form.dir/form.cpp.s"
	/usr/bin/g++ --sysroot=/ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davidfeng/UI_Lab/Lab3_exercise4_form/form.cpp -o CMakeFiles/Lab3_exercise4_form.dir/form.cpp.s

# Object files for target Lab3_exercise4_form
Lab3_exercise4_form_OBJECTS = \
"CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Lab3_exercise4_form.dir/form.cpp.o"

# External object files for target Lab3_exercise4_form
Lab3_exercise4_form_EXTERNAL_OBJECTS =

Lab3_exercise4_form: CMakeFiles/Lab3_exercise4_form.dir/Lab3_exercise4_form_autogen/mocs_compilation.cpp.o
Lab3_exercise4_form: CMakeFiles/Lab3_exercise4_form.dir/form.cpp.o
Lab3_exercise4_form: CMakeFiles/Lab3_exercise4_form.dir/build.make
Lab3_exercise4_form: /home/davidfeng/Qt/6.7.2/gcc_64/lib/libQt6Widgets.so.6.7.2
Lab3_exercise4_form: /home/davidfeng/Qt/6.7.2/gcc_64/lib/libQt6Gui.so.6.7.2
Lab3_exercise4_form: /home/davidfeng/Qt/6.7.2/gcc_64/lib/libQt6Core.so.6.7.2
Lab3_exercise4_form: /usr/lib/x86_64-linux-gnu/libGL.so
Lab3_exercise4_form: CMakeFiles/Lab3_exercise4_form.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Lab3_exercise4_form"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab3_exercise4_form.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab3_exercise4_form.dir/build: Lab3_exercise4_form
.PHONY : CMakeFiles/Lab3_exercise4_form.dir/build

CMakeFiles/Lab3_exercise4_form.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab3_exercise4_form.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab3_exercise4_form.dir/clean

CMakeFiles/Lab3_exercise4_form.dir/depend:
	cd /home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/davidfeng/UI_Lab/Lab3_exercise4_form /home/davidfeng/UI_Lab/Lab3_exercise4_form /home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug /home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug /home/davidfeng/UI_Lab/Lab3_exercise4_form/build/1-Debug/CMakeFiles/Lab3_exercise4_form.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab3_exercise4_form.dir/depend

