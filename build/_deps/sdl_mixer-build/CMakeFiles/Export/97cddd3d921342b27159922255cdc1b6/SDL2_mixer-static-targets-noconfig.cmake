#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SDL2_mixer::SDL2_mixer-static" for configuration ""
set_property(TARGET SDL2_mixer::SDL2_mixer-static APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(SDL2_mixer::SDL2_mixer-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libSDL2_mixer.a"
  )

list(APPEND _cmake_import_check_targets SDL2_mixer::SDL2_mixer-static )
list(APPEND _cmake_import_check_files_for_SDL2_mixer::SDL2_mixer-static "${_IMPORT_PREFIX}/lib/libSDL2_mixer.a" )

# Import target "SDL2_mixer::ogg" for configuration ""
set_property(TARGET SDL2_mixer::ogg APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(SDL2_mixer::ogg PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libogg.a"
  )

list(APPEND _cmake_import_check_targets SDL2_mixer::ogg )
list(APPEND _cmake_import_check_files_for_SDL2_mixer::ogg "${_IMPORT_PREFIX}/lib/libogg.a" )

# Import target "SDL2_mixer::opus" for configuration ""
set_property(TARGET SDL2_mixer::opus APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(SDL2_mixer::opus PROPERTIES
  IMPORTED_IMPLIB_NOCONFIG "${_IMPORT_PREFIX}/lib/libopus.dll.a"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/libopus.dll"
  )

list(APPEND _cmake_import_check_targets SDL2_mixer::opus )
list(APPEND _cmake_import_check_files_for_SDL2_mixer::opus "${_IMPORT_PREFIX}/lib/libopus.dll.a" "${_IMPORT_PREFIX}/bin/libopus.dll" )

# Import target "SDL2_mixer::opusfile" for configuration ""
set_property(TARGET SDL2_mixer::opusfile APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(SDL2_mixer::opusfile PROPERTIES
  IMPORTED_IMPLIB_NOCONFIG "${_IMPORT_PREFIX}/lib/libopusfile.dll.a"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/libopusfile.dll"
  )

list(APPEND _cmake_import_check_targets SDL2_mixer::opusfile )
list(APPEND _cmake_import_check_files_for_SDL2_mixer::opusfile "${_IMPORT_PREFIX}/lib/libopusfile.dll.a" "${_IMPORT_PREFIX}/bin/libopusfile.dll" )

# Import target "SDL2_mixer::FLAC" for configuration ""
set_property(TARGET SDL2_mixer::FLAC APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(SDL2_mixer::FLAC PROPERTIES
  IMPORTED_IMPLIB_NOCONFIG "${_IMPORT_PREFIX}/lib/libFLAC.dll.a"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/libFLAC.dll"
  )

list(APPEND _cmake_import_check_targets SDL2_mixer::FLAC )
list(APPEND _cmake_import_check_files_for_SDL2_mixer::FLAC "${_IMPORT_PREFIX}/lib/libFLAC.dll.a" "${_IMPORT_PREFIX}/bin/libFLAC.dll" )

# Import target "SDL2_mixer::modplug" for configuration ""
set_property(TARGET SDL2_mixer::modplug APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(SDL2_mixer::modplug PROPERTIES
  IMPORTED_IMPLIB_NOCONFIG "${_IMPORT_PREFIX}/lib/libmodplug.dll.a"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/libmodplug.dll"
  )

list(APPEND _cmake_import_check_targets SDL2_mixer::modplug )
list(APPEND _cmake_import_check_files_for_SDL2_mixer::modplug "${_IMPORT_PREFIX}/lib/libmodplug.dll.a" "${_IMPORT_PREFIX}/bin/libmodplug.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
