cmake_minimum_required(VERSION 3.14)

project(TwoWayClass LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core SerialPort)

add_executable(TwoWayClass
  main.cpp
  driver.h driver.cpp
)
target_link_libraries(TwoWayClass Qt6::Core Qt6::SerialPort)

install(TARGETS TwoWayClass
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
