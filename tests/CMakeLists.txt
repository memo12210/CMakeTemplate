include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.15.2
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add the executable for the tests
add_executable(unit_tests example_test.cpp)

# Link the example library to the test executable
target_link_libraries(unit_tests PRIVATE example_lib GTest::gtest_main)

# Optionally add tests (if you're using a testing framework like GoogleTest, you'd include it here)
enable_testing()
include(GoogleTest)
gtest_discover_tests(unit_tests)