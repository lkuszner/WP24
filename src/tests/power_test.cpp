#include <gtest/gtest.h>

extern "C" {
 #include "square.h"
 #include "power.h"
}

TEST(SqereTest, SmallNumbers) {
  // Expect equality.
  EXPECT_EQ(square(0), 0);
  EXPECT_EQ(square(1), 1);
  EXPECT_EQ(square(-1), 1);
  EXPECT_EQ(square(3), 9);
  EXPECT_EQ(square(7), 49);
}

TEST(PowerTest, SmallNumbers) {
  // Expect equality.
  EXPECT_EQ(power(-11, 0), 1);
  EXPECT_EQ(power(-11, 2), 121);
  EXPECT_EQ(power(0, 1), 0);
  EXPECT_EQ(power(0, 0), 1);
  EXPECT_EQ(power(10, 4), 10000);
  EXPECT_EQ(power(2, 10), 1024);
}
