# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\user\Desktop\OOP_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\Desktop\OOP_Project\build

# Utility rule file for NightlyMemCheck.

# Include any custom commands dependencies for this target.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck.dir/progress.make

_deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck:
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg && "C:\Program Files\CMake\bin\ctest.exe" -D NightlyMemCheck

NightlyMemCheck: _deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck
NightlyMemCheck: _deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck.dir/build.make
.PHONY : NightlyMemCheck

# Rule to build all files generated by this target.
_deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck.dir/build: NightlyMemCheck
.PHONY : _deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck.dir/build

_deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck.dir/clean:
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg && $(CMAKE_COMMAND) -P CMakeFiles\NightlyMemCheck.dir\cmake_clean.cmake
.PHONY : _deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck.dir/clean

_deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\OOP_Project C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\ogg C:\Users\user\Desktop\OOP_Project\build C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg\CMakeFiles\NightlyMemCheck.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/sdl_mixer-build/external/ogg/CMakeFiles/NightlyMemCheck.dir/depend

