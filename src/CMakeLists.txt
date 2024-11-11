cmake_minimum_required(VERSION 3.10)

project(Power)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_subdirectory(powerlib)

add_executable(power main.c)

target_link_libraries(
  power PUBLIC libpower
)

add_subdirectory(tests)
