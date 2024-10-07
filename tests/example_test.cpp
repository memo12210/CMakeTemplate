#include <gtest/gtest.h>
#include <example/example.hpp>

TEST(ExamplePrintStr, PrintsNonEmptyString) {
    Example example("Hello, World!");
    testing::internal::CaptureStdout();
    example.printStr();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Hello, World!\n");
}