cmake_minimum_required(VERSION 3.2)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project(mvc VERSION ${PROJECT_VESRION})

add_executable(mvc src/main.cpp)


set_target_properties(mvc PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

target_include_directories(mvc
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include
)