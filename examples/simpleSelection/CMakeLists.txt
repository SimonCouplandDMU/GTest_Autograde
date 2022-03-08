# Add more files here as you add them to your project
set(
    SRC_FILES
    "main.cpp"
)

# Include directory for autograding.h
include_directories(../../autograde/include)

# Build directly to an executable using main as the entry point
add_executable(simpleSelection ${SRC_FILES})




