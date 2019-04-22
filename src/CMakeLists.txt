cmake_minimum_required(VERSION 3.14)
set (CMAKE_CXX_STANDARD 17)

include("cmake/HunterGate.cmake")
HunterGate(
        URL "https://github.com/ruslo/hunter/archive/v0.23.155.tar.gz"
        SHA1 "6421d63cc4fd78b8622e863c6b1dcabce98e1216"
)

project(dimensionengine VERSION 0.0 LANGUAGES CXX)
include(GNUInstallDirs)

# https://github.com/hunter-packages/spdlog
hunter_add_package(spdlog)