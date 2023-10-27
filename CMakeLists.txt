project(faker-cxx-example)
cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 20)

set(BUILD_FAKER_TESTS OFF)

add_subdirectory(externals/faker-cxx)

add_executable(main Main.cpp)

target_link_libraries(main faker-cxx)