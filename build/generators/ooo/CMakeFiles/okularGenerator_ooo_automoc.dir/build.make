# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/kasutaja/Downloads/okulardev/okular

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kasutaja/Downloads/okulardev/okular/build

# Utility rule file for okularGenerator_ooo_automoc.

# Include the progress variables for this target.
include generators/ooo/CMakeFiles/okularGenerator_ooo_automoc.dir/progress.make

generators/ooo/CMakeFiles/okularGenerator_ooo_automoc:
	cd /home/kasutaja/Downloads/okulardev/okular/build/generators/ooo && /usr/bin/automoc4 /home/kasutaja/Downloads/okulardev/okular/build/generators/ooo/okularGenerator_ooo_automoc.cpp /home/kasutaja/Downloads/okulardev/okular/generators/ooo /home/kasutaja/Downloads/okulardev/okular/build/generators/ooo /usr/lib/i386-linux-gnu/qt4/bin/moc /usr/bin/cmake

okularGenerator_ooo_automoc: generators/ooo/CMakeFiles/okularGenerator_ooo_automoc
okularGenerator_ooo_automoc: generators/ooo/CMakeFiles/okularGenerator_ooo_automoc.dir/build.make
.PHONY : okularGenerator_ooo_automoc

# Rule to build all files generated by this target.
generators/ooo/CMakeFiles/okularGenerator_ooo_automoc.dir/build: okularGenerator_ooo_automoc
.PHONY : generators/ooo/CMakeFiles/okularGenerator_ooo_automoc.dir/build

generators/ooo/CMakeFiles/okularGenerator_ooo_automoc.dir/clean:
	cd /home/kasutaja/Downloads/okulardev/okular/build/generators/ooo && $(CMAKE_COMMAND) -P CMakeFiles/okularGenerator_ooo_automoc.dir/cmake_clean.cmake
.PHONY : generators/ooo/CMakeFiles/okularGenerator_ooo_automoc.dir/clean

generators/ooo/CMakeFiles/okularGenerator_ooo_automoc.dir/depend:
	cd /home/kasutaja/Downloads/okulardev/okular/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kasutaja/Downloads/okulardev/okular /home/kasutaja/Downloads/okulardev/okular/generators/ooo /home/kasutaja/Downloads/okulardev/okular/build /home/kasutaja/Downloads/okulardev/okular/build/generators/ooo /home/kasutaja/Downloads/okulardev/okular/build/generators/ooo/CMakeFiles/okularGenerator_ooo_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : generators/ooo/CMakeFiles/okularGenerator_ooo_automoc.dir/depend

