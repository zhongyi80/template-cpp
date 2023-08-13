cmake_minimum_required(VERSION 3.2)

message("project directory: ${CMAKE_CURRENT_SOURCE_DIR}")
file(GLOB_RECURSE SRC CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*/*.cpp")

message(${SRC})
include_directories(include)
find_package(DCMTK REQUIRED)


add_executable(main src/main.cpp)