project(dimensionengine VERSION 0.0 LANGUAGES CXX)

add_library(dimensionengine SHARED
        src/dimensionengine.cpp)

target_include_directories(dimensionengine PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE src)

target_compile_features(dimensionengine
        PUBLIC cxx_auto_type
        PRIVATE cxx_variadic_templates)

target_link_libraries(dimensionengine
         spdlog
         atmohorizon)

install(TARGETS dimensionengine EXPORT DimensionEngineConfig
        ARCHIVE  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME  DESTINATION ${CMAKE_INSTALL_BINDIR})  # This is for Windows
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(EXPORT DimensionEngineConfig DESTINATION cmake)
export(TARGETS dimensionengine FILE DimensionEngineConfig.cmake)