add_executable(cpp1
    opdracht1.cc
    ../../Logger.cc
)


# Kopieer dracula.txt naar de build directory
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/dracula.txt ${CMAKE_CURRENT_BINARY_DIR}/dracula.txt COPYONLY)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(cpp1 PRIVATE ENABLE_LOGGING)
endif()

target_include_directories(cpp1 PRIVATE ../../)
