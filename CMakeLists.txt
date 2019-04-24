cmake_minimum_required(VERSION 3.12..3.14)
include(GNUInstallDirs)
include("cmake/HunterGate.cmake")
HunterGate(
        URL "https://github.com/ruslo/hunter/archive/v0.23.155.tar.gz"
        SHA1 "6421d63cc4fd78b8622e863c6b1dcabce98e1216"
)
project(dimensionenginefull VERSION 0.0 LANGUAGES CXX)

hunter_add_package(spdlog COMPONENTS)
find_package(spdlog COMPONENTS REQUIRED)
add_library(spdlog INTERFACE IMPORTED)

add_subdirectory(dimensionengine)
add_subdirectory(engineexample)
set_property(TARGET dimensionengine PROPERTY CXX_STANDARD 17)
set_property(TARGET engineexample PROPERTY CXX_STANDARD 17)