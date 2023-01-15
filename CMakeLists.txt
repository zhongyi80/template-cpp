cmake_minimum_required(VERSION 3.2)
project(templat-app)
message("Main project directory: ${PROJECT_SOURCE_DIR}")


enable_testing()

add_subdirectory(src/main)
add_subdirectory(src/test)