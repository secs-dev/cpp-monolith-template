cmake_minimum_required(VERSION 3.28)

project(monolith VERSION 0.1.0)

option(MONOLITH_DEVELOPER "Enable ${PROJECT_NAME} developer mode" OFF)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

include(cmake/CompileOptions.cmake)

add_subdirectory(source)

if(MONOLITH_DEVELOPER)
    find_package(GTest REQUIRED)
    find_package(GBenchmark REQUIRED)

    add_subdirectory(test)
    add_subdirectory(benchmark)
endif()
