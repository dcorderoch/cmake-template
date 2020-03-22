cmake_minimum_required(VERSION 3.13)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

if($CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(STATUS "in-source build detected!")
    message(FATAL_ERROR "make an out of source build")
endif()

project(modern_cmake)

set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ENABLE_TESTS "whether to build tests" ON)
option(BUILD_SHARED_LIBS "whether to build shared libraries" OFF)

if(ENABLE_TESTS)
    # enable testing must be done before adding any tests
    # so ctest can be used to run all of the tests
    enable_testing()
endif(ENABLE_TESTS)

add_subdirectory(src)

add_subdirectory(app)
