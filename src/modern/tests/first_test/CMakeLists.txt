cmake_minimum_required(VERSION 3.13)

project(nested_first_test)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PRIVATE
        first_test.cpp
)

add_test(NAME ${PROJECT_NAME} COMMAND $<TARGET_FILE:${PROJECT_NAME}>)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        lib-modern
)
