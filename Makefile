# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/bin/cmake3

# The command to remove a file.
RM = /usr/bin/cmake3 -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /class/classes/mslan002

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /class/classes/mslan002

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake3 --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake3 -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /class/classes/mslan002/CMakeFiles /class/classes/mslan002/CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /class/classes/mslan002/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named bigger_area_calculator

# Build rule for target.
bigger_area_calculator: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 bigger_area_calculator
.PHONY : bigger_area_calculator

# fast build rule for target.
bigger_area_calculator/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigger_area_calculator.dir/build.make CMakeFiles/bigger_area_calculator.dir/build
.PHONY : bigger_area_calculator/fast

#=============================================================================
# Target rules for targets named area_calculator

# Build rule for target.
area_calculator: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 area_calculator
.PHONY : area_calculator

# fast build rule for target.
area_calculator/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/area_calculator.dir/build.make CMakeFiles/area_calculator.dir/build
.PHONY : area_calculator/fast

src/main1.o: src/main1.cpp.o

.PHONY : src/main1.o

# target to build an object file
src/main1.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/area_calculator.dir/build.make CMakeFiles/area_calculator.dir/src/main1.cpp.o
.PHONY : src/main1.cpp.o

src/main1.i: src/main1.cpp.i

.PHONY : src/main1.i

# target to preprocess a source file
src/main1.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/area_calculator.dir/build.make CMakeFiles/area_calculator.dir/src/main1.cpp.i
.PHONY : src/main1.cpp.i

src/main1.s: src/main1.cpp.s

.PHONY : src/main1.s

# target to generate assembly for a file
src/main1.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/area_calculator.dir/build.make CMakeFiles/area_calculator.dir/src/main1.cpp.s
.PHONY : src/main1.cpp.s

src/new_main.o: src/new_main.cpp.o

.PHONY : src/new_main.o

# target to build an object file
src/new_main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigger_area_calculator.dir/build.make CMakeFiles/bigger_area_calculator.dir/src/new_main.cpp.o
.PHONY : src/new_main.cpp.o

src/new_main.i: src/new_main.cpp.i

.PHONY : src/new_main.i

# target to preprocess a source file
src/new_main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigger_area_calculator.dir/build.make CMakeFiles/bigger_area_calculator.dir/src/new_main.cpp.i
.PHONY : src/new_main.cpp.i

src/new_main.s: src/new_main.cpp.s

.PHONY : src/new_main.s

# target to generate assembly for a file
src/new_main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigger_area_calculator.dir/build.make CMakeFiles/bigger_area_calculator.dir/src/new_main.cpp.s
.PHONY : src/new_main.cpp.s

src/rectangle.o: src/rectangle.cpp.o

.PHONY : src/rectangle.o

# target to build an object file
src/rectangle.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigger_area_calculator.dir/build.make CMakeFiles/bigger_area_calculator.dir/src/rectangle.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/area_calculator.dir/build.make CMakeFiles/area_calculator.dir/src/rectangle.cpp.o
.PHONY : src/rectangle.cpp.o

src/rectangle.i: src/rectangle.cpp.i

.PHONY : src/rectangle.i

# target to preprocess a source file
src/rectangle.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigger_area_calculator.dir/build.make CMakeFiles/bigger_area_calculator.dir/src/rectangle.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/area_calculator.dir/build.make CMakeFiles/area_calculator.dir/src/rectangle.cpp.i
.PHONY : src/rectangle.cpp.i

src/rectangle.s: src/rectangle.cpp.s

.PHONY : src/rectangle.s

# target to generate assembly for a file
src/rectangle.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigger_area_calculator.dir/build.make CMakeFiles/bigger_area_calculator.dir/src/rectangle.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/area_calculator.dir/build.make CMakeFiles/area_calculator.dir/src/rectangle.cpp.s
.PHONY : src/rectangle.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... area_calculator"
	@echo "... bigger_area_calculator"
	@echo "... src/main1.o"
	@echo "... src/main1.i"
	@echo "... src/main1.s"
	@echo "... src/new_main.o"
	@echo "... src/new_main.i"
	@echo "... src/new_main.s"
	@echo "... src/rectangle.o"
	@echo "... src/rectangle.i"
	@echo "... src/rectangle.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

