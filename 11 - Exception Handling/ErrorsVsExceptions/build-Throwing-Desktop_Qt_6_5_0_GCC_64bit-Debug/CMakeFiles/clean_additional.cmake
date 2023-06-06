# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Throwing_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Throwing_autogen.dir/ParseCache.txt"
  "Throwing_autogen"
  )
endif()
