# Create a library from example.cpp
add_library(example_lib example.cpp)

# Specify include directories for the example library
target_include_directories(example_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)
