#include "gtest/gtest.h"

TEST(GTest, Assertions) {
    ASSERT_TRUE(true);
    ASSERT_FALSE(false);
    ASSERT_EQ(1, 1);
    ASSERT_NE(1, 0);
    ASSERT_LT(1, 5);
    ASSERT_GT(5, 1);
}


