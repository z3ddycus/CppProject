# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = "/home/z3ddycus/Bureau/Projet Cpp/Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/z3ddycus/Bureau/Projet Cpp/Project"

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/home/z3ddycus/Bureau/Projet Cpp/Project/CMakeFiles" "/home/z3ddycus/Bureau/Projet Cpp/Project/CMakeFiles/progress.marks"
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/home/z3ddycus/Bureau/Projet Cpp/Project/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named main

# Build rule for target.
main: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 main
.PHONY : main

# fast build rule for target.
main/fast:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/build
.PHONY : main/fast

#=============================================================================
# Target rules for targets named mainFinal

# Build rule for target.
mainFinal: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 mainFinal
.PHONY : mainFinal

# fast build rule for target.
mainFinal/fast:
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/build
.PHONY : mainFinal/fast

src/etage/Appartement.o: src/etage/Appartement.cpp.o

.PHONY : src/etage/Appartement.o

# target to build an object file
src/etage/Appartement.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Appartement.cpp.o
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Appartement.cpp.o
.PHONY : src/etage/Appartement.cpp.o

src/etage/Appartement.i: src/etage/Appartement.cpp.i

.PHONY : src/etage/Appartement.i

# target to preprocess a source file
src/etage/Appartement.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Appartement.cpp.i
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Appartement.cpp.i
.PHONY : src/etage/Appartement.cpp.i

src/etage/Appartement.s: src/etage/Appartement.cpp.s

.PHONY : src/etage/Appartement.s

# target to generate assembly for a file
src/etage/Appartement.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Appartement.cpp.s
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Appartement.cpp.s
.PHONY : src/etage/Appartement.cpp.s

src/etage/Bureau.o: src/etage/Bureau.cpp.o

.PHONY : src/etage/Bureau.o

# target to build an object file
src/etage/Bureau.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Bureau.cpp.o
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Bureau.cpp.o
.PHONY : src/etage/Bureau.cpp.o

src/etage/Bureau.i: src/etage/Bureau.cpp.i

.PHONY : src/etage/Bureau.i

# target to preprocess a source file
src/etage/Bureau.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Bureau.cpp.i
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Bureau.cpp.i
.PHONY : src/etage/Bureau.cpp.i

src/etage/Bureau.s: src/etage/Bureau.cpp.s

.PHONY : src/etage/Bureau.s

# target to generate assembly for a file
src/etage/Bureau.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Bureau.cpp.s
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Bureau.cpp.s
.PHONY : src/etage/Bureau.cpp.s

src/etage/Etage.o: src/etage/Etage.cpp.o

.PHONY : src/etage/Etage.o

# target to build an object file
src/etage/Etage.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Etage.cpp.o
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Etage.cpp.o
.PHONY : src/etage/Etage.cpp.o

src/etage/Etage.i: src/etage/Etage.cpp.i

.PHONY : src/etage/Etage.i

# target to preprocess a source file
src/etage/Etage.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Etage.cpp.i
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Etage.cpp.i
.PHONY : src/etage/Etage.cpp.i

src/etage/Etage.s: src/etage/Etage.cpp.s

.PHONY : src/etage/Etage.s

# target to generate assembly for a file
src/etage/Etage.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Etage.cpp.s
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Etage.cpp.s
.PHONY : src/etage/Etage.cpp.s

src/etage/Local.o: src/etage/Local.cpp.o

.PHONY : src/etage/Local.o

# target to build an object file
src/etage/Local.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Local.cpp.o
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Local.cpp.o
.PHONY : src/etage/Local.cpp.o

src/etage/Local.i: src/etage/Local.cpp.i

.PHONY : src/etage/Local.i

# target to preprocess a source file
src/etage/Local.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Local.cpp.i
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Local.cpp.i
.PHONY : src/etage/Local.cpp.i

src/etage/Local.s: src/etage/Local.cpp.s

.PHONY : src/etage/Local.s

# target to generate assembly for a file
src/etage/Local.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/etage/Local.cpp.s
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/etage/Local.cpp.s
.PHONY : src/etage/Local.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/mainFinal.o: src/mainFinal.cpp.o

.PHONY : src/mainFinal.o

# target to build an object file
src/mainFinal.cpp.o:
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/mainFinal.cpp.o
.PHONY : src/mainFinal.cpp.o

src/mainFinal.i: src/mainFinal.cpp.i

.PHONY : src/mainFinal.i

# target to preprocess a source file
src/mainFinal.cpp.i:
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/mainFinal.cpp.i
.PHONY : src/mainFinal.cpp.i

src/mainFinal.s: src/mainFinal.cpp.s

.PHONY : src/mainFinal.s

# target to generate assembly for a file
src/mainFinal.cpp.s:
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/mainFinal.cpp.s
.PHONY : src/mainFinal.cpp.s

src/origine/Im.o: src/origine/Im.cpp.o

.PHONY : src/origine/Im.o

# target to build an object file
src/origine/Im.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/origine/Im.cpp.o
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/origine/Im.cpp.o
.PHONY : src/origine/Im.cpp.o

src/origine/Im.i: src/origine/Im.cpp.i

.PHONY : src/origine/Im.i

# target to preprocess a source file
src/origine/Im.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/origine/Im.cpp.i
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/origine/Im.cpp.i
.PHONY : src/origine/Im.cpp.i

src/origine/Im.s: src/origine/Im.cpp.s

.PHONY : src/origine/Im.s

# target to generate assembly for a file
src/origine/Im.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/origine/Im.cpp.s
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/origine/Im.cpp.s
.PHONY : src/origine/Im.cpp.s

src/origine/OutIm.o: src/origine/OutIm.cpp.o

.PHONY : src/origine/OutIm.o

# target to build an object file
src/origine/OutIm.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/origine/OutIm.cpp.o
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/origine/OutIm.cpp.o
.PHONY : src/origine/OutIm.cpp.o

src/origine/OutIm.i: src/origine/OutIm.cpp.i

.PHONY : src/origine/OutIm.i

# target to preprocess a source file
src/origine/OutIm.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/origine/OutIm.cpp.i
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/origine/OutIm.cpp.i
.PHONY : src/origine/OutIm.cpp.i

src/origine/OutIm.s: src/origine/OutIm.cpp.s

.PHONY : src/origine/OutIm.s

# target to generate assembly for a file
src/origine/OutIm.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/origine/OutIm.cpp.s
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/origine/OutIm.cpp.s
.PHONY : src/origine/OutIm.cpp.s

src/util/Serializable.o: src/util/Serializable.cpp.o

.PHONY : src/util/Serializable.o

# target to build an object file
src/util/Serializable.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/util/Serializable.cpp.o
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/util/Serializable.cpp.o
.PHONY : src/util/Serializable.cpp.o

src/util/Serializable.i: src/util/Serializable.cpp.i

.PHONY : src/util/Serializable.i

# target to preprocess a source file
src/util/Serializable.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/util/Serializable.cpp.i
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/util/Serializable.cpp.i
.PHONY : src/util/Serializable.cpp.i

src/util/Serializable.s: src/util/Serializable.cpp.s

.PHONY : src/util/Serializable.s

# target to generate assembly for a file
src/util/Serializable.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/util/Serializable.cpp.s
	$(MAKE) -f CMakeFiles/mainFinal.dir/build.make CMakeFiles/mainFinal.dir/src/util/Serializable.cpp.s
.PHONY : src/util/Serializable.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... main"
	@echo "... rebuild_cache"
	@echo "... mainFinal"
	@echo "... src/etage/Appartement.o"
	@echo "... src/etage/Appartement.i"
	@echo "... src/etage/Appartement.s"
	@echo "... src/etage/Bureau.o"
	@echo "... src/etage/Bureau.i"
	@echo "... src/etage/Bureau.s"
	@echo "... src/etage/Etage.o"
	@echo "... src/etage/Etage.i"
	@echo "... src/etage/Etage.s"
	@echo "... src/etage/Local.o"
	@echo "... src/etage/Local.i"
	@echo "... src/etage/Local.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/mainFinal.o"
	@echo "... src/mainFinal.i"
	@echo "... src/mainFinal.s"
	@echo "... src/origine/Im.o"
	@echo "... src/origine/Im.i"
	@echo "... src/origine/Im.s"
	@echo "... src/origine/OutIm.o"
	@echo "... src/origine/OutIm.i"
	@echo "... src/origine/OutIm.s"
	@echo "... src/util/Serializable.o"
	@echo "... src/util/Serializable.i"
	@echo "... src/util/Serializable.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
