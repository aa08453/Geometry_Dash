# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl-src"
  "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl-build"
  "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl-subbuild/sdl-populate-prefix"
  "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl-subbuild/sdl-populate-prefix/tmp"
  "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl-subbuild/sdl-populate-prefix/src/sdl-populate-stamp"
  "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl-subbuild/sdl-populate-prefix/src"
  "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl-subbuild/sdl-populate-prefix/src/sdl-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl-subbuild/sdl-populate-prefix/src/sdl-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/user/Desktop/OOP_Project/build/_deps/sdl-subbuild/sdl-populate-prefix/src/sdl-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
