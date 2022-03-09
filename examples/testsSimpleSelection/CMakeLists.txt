# Add more files here as you add them to your project
set(
    SRC_FILES
    "main.cpp"
    "ioTest.cpp"
)

# Set the main in test to be wMain to avoid conflicts with main
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:CONSOLE /ENTRY:wmainCRTStartup")

# Build directly to an executable using WinMain as the entry point
add_executable(testsSimpleSelection ${SRC_FILES})

# Include directory for utils.h
include_directories(../../autograde/include)

# Include the googletest include
include_directories(../googleTest/googleTest/include)

# Link to googletest
target_link_libraries(testsSimpleSelection gtest)

# Link to simpleSelectionLIB
target_link_libraries(testsSimpleSelection simpleSelectionLib)