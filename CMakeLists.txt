cmake_minimum_required(VERSION 3.2)
project(templat-app)
message("Main project directory: ${PROJECT_SOURCE_DIR}")
#file(GLOB_RECURSE SRC CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/*/*.cpp")


add_subdirectory(src/main)