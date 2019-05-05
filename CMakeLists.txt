cmake_minimum_required(VERSION 3.14)
include(GNUInstallDirs)
project(dimensionenginefull VERSION 0.0 LANGUAGES CXX)

find_package(spdlog COMPONENTS REQUIRED)
add_library(spdlog INTERFACE IMPORTED)
set_property(TARGET spdlog PROPERTY
        INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_SOURCE_DIR}/libs/spdlog/include)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(dimensionengine)
add_subdirectory(engineexample)
add_subdirectory(atmohorizon)
set_target_properties(dimensionengine engineexample atmohorizon
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        CXX_STANDARD 17
        )