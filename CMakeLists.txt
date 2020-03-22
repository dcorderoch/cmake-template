cmake_minimum_required(VERSION 3.13)

if($CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(STATUS "in-source build detected!")
    message(FATAL_ERROR "make an out of source build")
endif()

project(modern_cmake)

set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ENABLE_TESTS "whether to build tests" ON)
option(BUILD_SHARED_LIBS "whether to build shared libraries" OFF)

add_subdirectory(modern)

if(ENABLE_TESTS AND EXISTS ${CMAKE_CURRENT_LIST_DIR}/tests)
    # enable testing must be done before adding tests
    # so we can use ctest to run all of the tests
    enable_testing()
    add_subdirectory(tests)
endif()
