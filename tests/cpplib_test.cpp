#include "src/lib/cpplib.h"

#include "gtest/gtest.h"

TEST(CPPLibTest, ReturnHelloWorld) {
  MyHelloClass testInstance;

  testing::internal::CaptureStdout();

  testInstance.sayHello();

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ("Hello, world!\n", output);
}
