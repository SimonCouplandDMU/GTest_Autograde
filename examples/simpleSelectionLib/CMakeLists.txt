add_compile_definitions(AUTOGRADING)

#Add a library version of simpleSelection program
add_library(simpleSelectionLib ../simpleSelection/main.cpp)

# Include the autograde include
include_directories(../../autograde/include)

# Link to autograde
target_link_libraries(simpleSelectionLib autograde)

