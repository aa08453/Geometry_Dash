# CMake generated Testfile for 
# Source directory: C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-src/external/flac/test
# Build directory: C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-build/external/flac/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(libFLAC "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-build/external/flac/src/test_libFLAC/test_libFLAC.exe")
set_tests_properties(libFLAC PROPERTIES  WORKING_DIRECTORY "C:/Users/user/Desktop/OOP_Project/build" _BACKTRACE_TRIPLES "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-src/external/flac/test/CMakeLists.txt;6;add_test;C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-src/external/flac/test/CMakeLists.txt;0;")
add_test(libFLAC++ "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-build/external/flac/src/test_libFLAC++/test_libFLAC++.exe")
set_tests_properties(libFLAC++ PROPERTIES  WORKING_DIRECTORY "C:/Users/user/Desktop/OOP_Project/build" _BACKTRACE_TRIPLES "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-src/external/flac/test/CMakeLists.txt;9;add_test;C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-src/external/flac/test/CMakeLists.txt;0;")
add_test(flac_help "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-build/external/flac/src/flac/flac.exe" "--help")
set_tests_properties(flac_help PROPERTIES  WORKING_DIRECTORY "C:/Users/user/Desktop/OOP_Project/build" _BACKTRACE_TRIPLES "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-src/external/flac/test/CMakeLists.txt;12;add_test;C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-src/external/flac/test/CMakeLists.txt;0;")
add_test(metaflac_help "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-build/external/flac/src/metaflac/metaflac.exe" "--help")
set_tests_properties(metaflac_help PROPERTIES  WORKING_DIRECTORY "C:/Users/user/Desktop/OOP_Project/build" _BACKTRACE_TRIPLES "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-src/external/flac/test/CMakeLists.txt;15;add_test;C:/Users/user/Desktop/OOP_Project/build/_deps/sdl_mixer-src/external/flac/test/CMakeLists.txt;0;")
