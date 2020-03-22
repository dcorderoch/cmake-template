cmake_minimum_required(VERSION 3.13)

if(ENABLE_TESTS)
    # enable testing must be done before adding tests
    # so we can use ctest to run all of the tests
    enable_testing()
endif()

add_subdirectory(modern)
