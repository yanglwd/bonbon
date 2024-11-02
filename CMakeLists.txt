cmake_minimum_required(VERSION 3.5.0)
project(bonbon VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost REQUIRED)

add_executable(bonbon main.cpp)

target_link_libraries(bonbon boost_program_options)
target_link_libraries(bonbon stdc++)

include_directories(${Boost_INCLUDE_DIRS})

include(CTest)
enable_testing()

