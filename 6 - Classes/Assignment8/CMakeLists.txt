cmake_minimum_required(VERSION 3.14)

project(Assignment8 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Assignment8
  main.cpp
  cat.h
  cat.cpp
)
target_link_libraries(Assignment8 Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS Assignment8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
