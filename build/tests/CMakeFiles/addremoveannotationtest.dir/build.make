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

# Include any dependencies generated for this target.
include tests/CMakeFiles/addremoveannotationtest.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/addremoveannotationtest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/addremoveannotationtest.dir/flags.make

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o: tests/CMakeFiles/addremoveannotationtest.dir/flags.make
tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o: tests/addremoveannotationtest_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kasutaja/Downloads/okulardev/okular/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -DKDESRCDIR="\"/home/kasutaja/Downloads/okulardev/okular/tests/\"" -o CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o -c /home/kasutaja/Downloads/okulardev/okular/build/tests/addremoveannotationtest_automoc.cpp

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.i"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -DKDESRCDIR="\"/home/kasutaja/Downloads/okulardev/okular/tests/\"" -E /home/kasutaja/Downloads/okulardev/okular/build/tests/addremoveannotationtest_automoc.cpp > CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.i

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.s"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -DKDESRCDIR="\"/home/kasutaja/Downloads/okulardev/okular/tests/\"" -S /home/kasutaja/Downloads/okulardev/okular/build/tests/addremoveannotationtest_automoc.cpp -o CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.s

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o.requires:
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o.requires

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o.provides: tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/addremoveannotationtest.dir/build.make tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o.provides.build
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o.provides

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o.provides.build: tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o: tests/CMakeFiles/addremoveannotationtest.dir/flags.make
tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o: ../tests/addremoveannotationtest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kasutaja/Downloads/okulardev/okular/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -DKDESRCDIR="\"/home/kasutaja/Downloads/okulardev/okular/tests/\"" -o CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o -c /home/kasutaja/Downloads/okulardev/okular/tests/addremoveannotationtest.cpp

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.i"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -DKDESRCDIR="\"/home/kasutaja/Downloads/okulardev/okular/tests/\"" -E /home/kasutaja/Downloads/okulardev/okular/tests/addremoveannotationtest.cpp > CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.i

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.s"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -DKDESRCDIR="\"/home/kasutaja/Downloads/okulardev/okular/tests/\"" -S /home/kasutaja/Downloads/okulardev/okular/tests/addremoveannotationtest.cpp -o CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.s

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o.requires:
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o.requires

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o.provides: tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/addremoveannotationtest.dir/build.make tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o.provides.build
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o.provides

tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o.provides.build: tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o

tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o: tests/CMakeFiles/addremoveannotationtest.dir/flags.make
tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o: ../tests/testingutils.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kasutaja/Downloads/okulardev/okular/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -DKDESRCDIR="\"/home/kasutaja/Downloads/okulardev/okular/tests/\"" -o CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o -c /home/kasutaja/Downloads/okulardev/okular/tests/testingutils.cpp

tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.i"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -DKDESRCDIR="\"/home/kasutaja/Downloads/okulardev/okular/tests/\"" -E /home/kasutaja/Downloads/okulardev/okular/tests/testingutils.cpp > CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.i

tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.s"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -DKDESRCDIR="\"/home/kasutaja/Downloads/okulardev/okular/tests/\"" -S /home/kasutaja/Downloads/okulardev/okular/tests/testingutils.cpp -o CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.s

tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o.requires:
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o.requires

tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o.provides: tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/addremoveannotationtest.dir/build.make tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o.provides.build
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o.provides

tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o.provides.build: tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o

# Object files for target addremoveannotationtest
addremoveannotationtest_OBJECTS = \
"CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o" \
"CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o" \
"CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o"

# External object files for target addremoveannotationtest
addremoveannotationtest_EXTERNAL_OBJECTS =

tests/addremoveannotationtest: tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o
tests/addremoveannotationtest: tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o
tests/addremoveannotationtest: tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o
tests/addremoveannotationtest: tests/CMakeFiles/addremoveannotationtest.dir/build.make
tests/addremoveannotationtest: /usr/lib/libkdecore.so.5.10.3
tests/addremoveannotationtest: /usr/lib/i386-linux-gnu/libQtGui.so
tests/addremoveannotationtest: /usr/lib/i386-linux-gnu/libQtTest.so
tests/addremoveannotationtest: /usr/lib/i386-linux-gnu/libQtXml.so
tests/addremoveannotationtest: lib/libokularcore.so.3.0.0
tests/addremoveannotationtest: /usr/lib/i386-linux-gnu/libQtXml.so
tests/addremoveannotationtest: /usr/lib/i386-linux-gnu/libQtGui.so
tests/addremoveannotationtest: /usr/lib/libkdecore.so.5.10.3
tests/addremoveannotationtest: /usr/lib/i386-linux-gnu/libQtDBus.so
tests/addremoveannotationtest: /usr/lib/i386-linux-gnu/libQtCore.so
tests/addremoveannotationtest: tests/CMakeFiles/addremoveannotationtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable addremoveannotationtest"
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/addremoveannotationtest.dir/link.txt --verbose=$(VERBOSE)
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && /usr/bin/cmake -D_filename=/home/kasutaja/Downloads/okulardev/okular/build/tests/addremoveannotationtest.shell -D_library_path_variable=LD_LIBRARY_PATH -D_ld_library_path="/home/kasutaja/Downloads/okulardev/okular/build/lib/./:/home/kasutaja/install/lib:/usr/lib:/usr/lib/i386-linux-gnu" -D_executable=/home/kasutaja/Downloads/okulardev/okular/build/tests/addremoveannotationtest -P /usr/share/kde4/apps/cmake/modules/kde4_exec_via_sh.cmake

# Rule to build all files generated by this target.
tests/CMakeFiles/addremoveannotationtest.dir/build: tests/addremoveannotationtest
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/build

tests/CMakeFiles/addremoveannotationtest.dir/requires: tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest_automoc.cpp.o.requires
tests/CMakeFiles/addremoveannotationtest.dir/requires: tests/CMakeFiles/addremoveannotationtest.dir/addremoveannotationtest.cpp.o.requires
tests/CMakeFiles/addremoveannotationtest.dir/requires: tests/CMakeFiles/addremoveannotationtest.dir/testingutils.cpp.o.requires
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/requires

tests/CMakeFiles/addremoveannotationtest.dir/clean:
	cd /home/kasutaja/Downloads/okulardev/okular/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/addremoveannotationtest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/clean

tests/CMakeFiles/addremoveannotationtest.dir/depend:
	cd /home/kasutaja/Downloads/okulardev/okular/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kasutaja/Downloads/okulardev/okular /home/kasutaja/Downloads/okulardev/okular/tests /home/kasutaja/Downloads/okulardev/okular/build /home/kasutaja/Downloads/okulardev/okular/build/tests /home/kasutaja/Downloads/okulardev/okular/build/tests/CMakeFiles/addremoveannotationtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/addremoveannotationtest.dir/depend

