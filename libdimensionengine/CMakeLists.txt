project(libdimensionengine VERSION 0.0 LANGUAGES CXX)

add_library(libdimensionengine
        src/dimensionengine.cpp)

target_include_directories(libdimensionengine PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE src)

target_compile_features(libdimensionengine
        PUBLIC cxx_auto_type
        PRIVATE cxx_variadic_templates)

target_link_libraries(libdimensionengine)

install(TARGETS libdimensionengine EXPORT MyLibraryConfig
        ARCHIVE  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME  DESTINATION ${CMAKE_INSTALL_BINDIR})  # This is for Windows
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(EXPORT MyLibraryConfig DESTINATION cmake)
export(TARGETS libdimensionengine FILE LibDimensionEngineConfig.cmake)