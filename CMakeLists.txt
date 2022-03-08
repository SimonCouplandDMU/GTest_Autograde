cmake_minimum_required(VERSION 3.12)

project(Autograde CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Force googletest to use multi threaded DLL runtime
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest and move all googletest targets to the correct folder
add_subdirectory(googletest)
set_target_properties (gmock PROPERTIES FOLDER googletest)
set_target_properties (gmock_main PROPERTIES FOLDER googletest)
set_target_properties (gtest PROPERTIES FOLDER googletest)
set_target_properties (gtest_main PROPERTIES FOLDER googletest)

# Add autograde and move target to the autograde folder
add_subdirectory(autograde)
set_target_properties (autograde PROPERTIES FOLDER autograde)

add_subdirectory(examples)
#Set as default startup project
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT simpleSelection)