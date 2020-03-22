cmake_minimum_required(VERSION 3.13)

project(modern-app)

add_executable(${PROJECT_NAME})

target_compile_definitions(${PROJECT_NAME}
    PRIVATE
        $<$<CONFIG:Release>:RELEASE_BUILD>
)

target_compile_definitions(${PROJECT_NAME}
    PRIVATE
        $<$<CONFIG:Debug>:DEBUG_BUILD>
)

target_compile_features(${PROJECT_NAME}
    PRIVATE
        cxx_auto_type
        cxx_constexpr
        cxx_nullptr
        cxx_static_assert
        cxx_strong_enums
        cxx_std_11
)

target_compile_options(${PROJECT_NAME}
    PRIVATE
        $<$<OR:$<CXX_COMPILER_ID:GNU>,$<C_COMPILER_ID:GNU>>:
        -Werror # treat warnings as errors
        >
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        lib-modern
)

target_sources(${PROJECT_NAME}
    PRIVATE
        src/main.cpp
)

set_target_properties(${PROJECT_NAME}
    PROPERTIES
        C_STANDARD_REQUIRED ON
        CXX_STANDARD_REQUIRED ON
)
