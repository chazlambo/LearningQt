cmake_minimum_required(VERSION 3.14)

project(BasicSend LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core SerialPort)

add_executable(BasicSend
  main.cpp
)
target_link_libraries(BasicSend Qt6::Core Qt6::SerialPort)

install(TARGETS BasicSend
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
