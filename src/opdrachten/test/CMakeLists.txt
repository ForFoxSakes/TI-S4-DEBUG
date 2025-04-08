cmake_minimum_required(VERSION 3.10)
project(TestProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)



# Voeg je testbestand toe
add_executable(test_executable test.cc)

# Link TinyXML2 bibliotheek met je test_executable
target_link_libraries(test_executable PRIVATE tinyxml2)

# Voeg de headers van TinyXML2 toe
target_include_directories(test_executable PRIVATE libs/tinyxml2)

# Zorg ervoor dat je debug-instellingen toevoegt als dat nodig is
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(test_executable PRIVATE ENABLE_LOGGING)
endif()
