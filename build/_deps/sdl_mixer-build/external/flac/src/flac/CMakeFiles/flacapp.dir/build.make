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
include _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/analyze.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/analyze.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/analyze.c.obj: _deps/sdl_mixer-src/external/flac/src/flac/analyze.c
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/analyze.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/analyze.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/analyze.c.obj -MF CMakeFiles\flacapp.dir\analyze.c.obj.d -o CMakeFiles\flacapp.dir\analyze.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\analyze.c

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/analyze.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/flacapp.dir/analyze.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\analyze.c > CMakeFiles\flacapp.dir\analyze.c.i

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/analyze.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/flacapp.dir/analyze.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\analyze.c -o CMakeFiles\flacapp.dir\analyze.c.s

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/decode.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/decode.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/decode.c.obj: _deps/sdl_mixer-src/external/flac/src/flac/decode.c
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/decode.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/decode.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/decode.c.obj -MF CMakeFiles\flacapp.dir\decode.c.obj.d -o CMakeFiles\flacapp.dir\decode.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\decode.c

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/decode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/flacapp.dir/decode.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\decode.c > CMakeFiles\flacapp.dir\decode.c.i

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/decode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/flacapp.dir/decode.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\decode.c -o CMakeFiles\flacapp.dir\decode.c.s

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/encode.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/encode.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/encode.c.obj: _deps/sdl_mixer-src/external/flac/src/flac/encode.c
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/encode.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/encode.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/encode.c.obj -MF CMakeFiles\flacapp.dir\encode.c.obj.d -o CMakeFiles\flacapp.dir\encode.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\encode.c

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/encode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/flacapp.dir/encode.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\encode.c > CMakeFiles\flacapp.dir\encode.c.i

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/encode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/flacapp.dir/encode.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\encode.c -o CMakeFiles\flacapp.dir\encode.c.s

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.obj: _deps/sdl_mixer-src/external/flac/src/flac/foreign_metadata.c
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.obj -MF CMakeFiles\flacapp.dir\foreign_metadata.c.obj.d -o CMakeFiles\flacapp.dir\foreign_metadata.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\foreign_metadata.c

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/flacapp.dir/foreign_metadata.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\foreign_metadata.c > CMakeFiles\flacapp.dir\foreign_metadata.c.i

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/flacapp.dir/foreign_metadata.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\foreign_metadata.c -o CMakeFiles\flacapp.dir\foreign_metadata.c.s

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/main.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/main.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/main.c.obj: _deps/sdl_mixer-src/external/flac/src/flac/main.c
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/main.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/main.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/main.c.obj -MF CMakeFiles\flacapp.dir\main.c.obj.d -o CMakeFiles\flacapp.dir\main.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\main.c

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/flacapp.dir/main.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\main.c > CMakeFiles\flacapp.dir\main.c.i

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/flacapp.dir/main.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\main.c -o CMakeFiles\flacapp.dir\main.c.s

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.obj: _deps/sdl_mixer-src/external/flac/src/flac/local_string_utils.c
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.obj -MF CMakeFiles\flacapp.dir\local_string_utils.c.obj.d -o CMakeFiles\flacapp.dir\local_string_utils.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\local_string_utils.c

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/flacapp.dir/local_string_utils.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\local_string_utils.c > CMakeFiles\flacapp.dir\local_string_utils.c.i

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/flacapp.dir/local_string_utils.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\local_string_utils.c -o CMakeFiles\flacapp.dir\local_string_utils.c.s

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/utils.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/utils.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/utils.c.obj: _deps/sdl_mixer-src/external/flac/src/flac/utils.c
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/utils.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/utils.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/utils.c.obj -MF CMakeFiles\flacapp.dir\utils.c.obj.d -o CMakeFiles\flacapp.dir\utils.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\utils.c

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/flacapp.dir/utils.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\utils.c > CMakeFiles\flacapp.dir\utils.c.i

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/flacapp.dir/utils.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\utils.c -o CMakeFiles\flacapp.dir\utils.c.s

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.obj: _deps/sdl_mixer-src/external/flac/src/flac/vorbiscomment.c
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.obj -MF CMakeFiles\flacapp.dir\vorbiscomment.c.obj.d -o CMakeFiles\flacapp.dir\vorbiscomment.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\vorbiscomment.c

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/flacapp.dir/vorbiscomment.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\vorbiscomment.c > CMakeFiles\flacapp.dir\vorbiscomment.c.i

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/flacapp.dir/vorbiscomment.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac\vorbiscomment.c -o CMakeFiles\flacapp.dir\vorbiscomment.c.s

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/flags.make
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/includes_C.rsp
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.obj: _deps/sdl_mixer-src/external/flac/src/share/win_utf8_io/win_utf8_io.c
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.obj: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.obj"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.obj -MF CMakeFiles\flacapp.dir\__\share\win_utf8_io\win_utf8_io.c.obj.d -o CMakeFiles\flacapp.dir\__\share\win_utf8_io\win_utf8_io.c.obj -c C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\share\win_utf8_io\win_utf8_io.c

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.i"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\share\win_utf8_io\win_utf8_io.c > CMakeFiles\flacapp.dir\__\share\win_utf8_io\win_utf8_io.c.i

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.s"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\share\win_utf8_io\win_utf8_io.c -o CMakeFiles\flacapp.dir\__\share\win_utf8_io\win_utf8_io.c.s

# Object files for target flacapp
flacapp_OBJECTS = \
"CMakeFiles/flacapp.dir/analyze.c.obj" \
"CMakeFiles/flacapp.dir/decode.c.obj" \
"CMakeFiles/flacapp.dir/encode.c.obj" \
"CMakeFiles/flacapp.dir/foreign_metadata.c.obj" \
"CMakeFiles/flacapp.dir/main.c.obj" \
"CMakeFiles/flacapp.dir/local_string_utils.c.obj" \
"CMakeFiles/flacapp.dir/utils.c.obj" \
"CMakeFiles/flacapp.dir/vorbiscomment.c.obj" \
"CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.obj"

# External object files for target flacapp
flacapp_EXTERNAL_OBJECTS =

_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/analyze.c.obj
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/decode.c.obj
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/encode.c.obj
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.obj
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/main.c.obj
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.obj
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/utils.c.obj
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.obj
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/__/share/win_utf8_io/win_utf8_io.c.obj
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/build.make
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/share/getopt/libgetopt.a
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/share/replaygain_synthesis/libreplaygain_synthesis.a
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/share/utf8/libutf8.a
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: C:/msys64/mingw64/lib/libintl.dll.a
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/share/grabbag/libgrabbag.a
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/libFLAC/libFLAC.dll.a
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/share/replaygain_analysis/libreplaygain_analysis.a
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: C:/msys64/mingw64/lib/libiconv.dll.a
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/linkLibs.rsp
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/objects1.rsp
_deps/sdl_mixer-build/external/flac/src/flac/flac.exe: _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\user\Desktop\OOP_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable flac.exe"
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\flacapp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/build: _deps/sdl_mixer-build/external/flac/src/flac/flac.exe
.PHONY : _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/build

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/clean:
	cd /d C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac && $(CMAKE_COMMAND) -P CMakeFiles\flacapp.dir\cmake_clean.cmake
.PHONY : _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/clean

_deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\OOP_Project C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-src\external\flac\src\flac C:\Users\user\Desktop\OOP_Project\build C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac C:\Users\user\Desktop\OOP_Project\build\_deps\sdl_mixer-build\external\flac\src\flac\CMakeFiles\flacapp.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/sdl_mixer-build/external/flac/src/flac/CMakeFiles/flacapp.dir/depend

