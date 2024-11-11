cmake_minimum_required(VERSION 3.10)

project(square)

include_directories("${PROJECT_SOURCE_DIR}/include")

file(GLOB sources "${PROJECT_SOURCE_DIR}/*.c")

add_executable(square ${sources})

