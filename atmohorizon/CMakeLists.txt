project(atmohorizon VERSION 0.0 LANGUAGES CXX)

add_library(atmohorizon SHARED
        src/atmohorizon.cpp)

target_include_directories(atmohorizon PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE src)

target_compile_features(atmohorizon
        PUBLIC cxx_auto_type
        PRIVATE cxx_variadic_templates)

target_link_libraries(atmohorizon
        spdlog)

install(TARGETS atmohorizon EXPORT AtmohorizonConfig
        ARCHIVE  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME  DESTINATION ${CMAKE_INSTALL_BINDIR})  # This is for Windows
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(EXPORT AtmohorizonConfig DESTINATION cmake)
export(TARGETS atmohorizon FILE AtmohorizonConfig.cmake)