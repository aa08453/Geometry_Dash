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

# Include any dependencies generated for this target.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/flags.make

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/src/bitwise.c.obj: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/flags.make
_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/src/bitwise.c.obj: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/includes_C.rsp
_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/src/bitwise.c.obj: _deps/sdl_mixer-src/external/ogg/src/bitwise.c
_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/src/bitwise.c.obj: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/src/bitwise.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/src/bitwise.c.obj -MF CMakeFiles\test_bitwise.dir\src\bitwise.c.obj.d -o CMakeFiles\test_bitwise.dir\src\bitwise.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\ogg\src\bitwise.c

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/src/bitwise.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_bitwise.dir/src/bitwise.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\ogg\src\bitwise.c > CMakeFiles\test_bitwise.dir\src\bitwise.c.i

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/src/bitwise.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_bitwise.dir/src/bitwise.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\ogg\src\bitwise.c -o CMakeFiles\test_bitwise.dir\src\bitwise.c.s

# Object files for target test_bitwise
test_bitwise_OBJECTS = \
"CMakeFiles/test_bitwise.dir/src/bitwise.c.obj"

# External object files for target test_bitwise
test_bitwise_EXTERNAL_OBJECTS =

_deps/sdl_mixer-build/external/ogg/test_bitwise.exe: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/src/bitwise.c.obj
_deps/sdl_mixer-build/external/ogg/test_bitwise.exe: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/build.make
_deps/sdl_mixer-build/external/ogg/test_bitwise.exe: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/linkLibs.rsp
_deps/sdl_mixer-build/external/ogg/test_bitwise.exe: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/objects1.rsp
_deps/sdl_mixer-build/external/ogg/test_bitwise.exe: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_bitwise.exe"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_bitwise.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/build: _deps/sdl_mixer-build/external/ogg/test_bitwise.exe
.PHONY : _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/build

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/clean:
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg && $(CMAKE_COMMAND) -P CMakeFiles\test_bitwise.dir\cmake_clean.cmake
.PHONY : _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/clean

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\OOP_Project C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\ogg C:\Users\user\Desktop\OOP_Project\build C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\ogg\CMakeFiles\test_bitwise.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_bitwise.dir/depend

