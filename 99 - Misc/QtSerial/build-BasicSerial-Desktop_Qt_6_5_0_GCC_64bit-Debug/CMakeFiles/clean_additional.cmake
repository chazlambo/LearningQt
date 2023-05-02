# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BasicReceive_autogen"
  "CMakeFiles/BasicReceive_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/BasicReceive_autogen.dir/ParseCache.txt"
  )
endif()
