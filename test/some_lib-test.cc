#include "gtest/gtest.h"
#include "some_lib.h"

TEST(HelloTest, GetGreet) {
  EXPECT_EQ(getValue(), 1);
}