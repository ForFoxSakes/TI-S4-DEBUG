cmake_minimum_required(VERSION 3.10)
project(TI-S4_DEBUG)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)   

# Export compile commands for better VSCode support
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable logging in Debug mode
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(ENABLE_LOGGING)
endif()

# Add the main executable
add_executable(app
    main.cc
    Logger.cc
)

# Voeg subdirectory toe voor opdrachten
add_subdirectory(opdrachten/cpp1)

