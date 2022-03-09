# Add more files here as you add them to your project
set(
    SRC_FILES
    "src/utils.cpp"
)

set(
    HEADER_FILES 
	"include/utils.h"
    "include/autograding.h"
)

# Include directory for autograding.h
include_directories(include)
# Include the googletest include
include_directories(../googleTest/googleTest/include)

# Build to a static library
add_library(autograde ${SRC_FILES} ${HEADER_FILES})




