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
include _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/flags.make

_deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/main.c.obj: _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/flags.make
_deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/main.c.obj: _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/main.c.obj: _deps/sdl_mixer-src/external/flac/examples/c/decode/file/main.c
_deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/main.c.obj: _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/main.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\examples\c\decode\file && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/main.c.obj -MF CMakeFiles\decode_file.dir\main.c.obj.d -o CMakeFiles\decode_file.dir\main.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\examples\c\decode\file\main.c

_deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/decode_file.dir/main.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\examples\c\decode\file && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\examples\c\decode\file\main.c > CMakeFiles\decode_file.dir\main.c.i

_deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/decode_file.dir/main.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\examples\c\decode\file && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\examples\c\decode\file\main.c -o CMakeFiles\decode_file.dir\main.c.s

# Object files for target decode_file
decode_file_OBJECTS = \
"CMakeFiles/decode_file.dir/main.c.obj"

# External object files for target decode_file
decode_file_EXTERNAL_OBJECTS =

_deps/sdl_mixer-build/external/flac/examples/c/decode/file/decode_file.exe: _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/main.c.obj
_deps/sdl_mixer-build/external/flac/examples/c/decode/file/decode_file.exe: _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/build.make
_deps/sdl_mixer-build/external/flac/examples/c/decode/file/decode_file.exe: _deps/sdl_mixer-build/external/flac/src/libFLAC/libFLAC.dll.a
_deps/sdl_mixer-build/external/flac/examples/c/decode/file/decode_file.exe: _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/linkLibs.rsp
_deps/sdl_mixer-build/external/flac/examples/c/decode/file/decode_file.exe: _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/objects1.rsp
_deps/sdl_mixer-build/external/flac/examples/c/decode/file/decode_file.exe: _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable decode_file.exe"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\examples\c\decode\file && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\decode_file.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/build: _deps/sdl_mixer-build/external/flac/examples/c/decode/file/decode_file.exe
.PHONY : _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/build

_deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/clean:
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\examples\c\decode\file && $(CMAKE_COMMAND) -P CMakeFiles\decode_file.dir\cmake_clean.cmake
.PHONY : _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/clean

_deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\OOP_Project C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\examples\c\decode\file C:\Users\user\Desktop\OOP_Project\build C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\examples\c\decode\file C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\examples\c\decode\file\CMakeFiles\decode_file.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/sdl_mixer-build/external/flac/examples/c/decode/file/CMakeFiles/decode_file.dir/depend

