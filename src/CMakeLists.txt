# Add subdirectory for example library
add_subdirectory(example)

# Add the executable for the main application
add_executable(my_project main.cpp)

# Link the example library to the main application
target_link_libraries(my_project PRIVATE example_lib)
