#include <gtest/gtest.h>

#include "calculator.h"

TEST(CalculatorTest, AddTest)
{
    EXPECT_EQ(add(2, 3), 5);
}

TEST(CalculatorTest, SubtractTest)
{
    EXPECT_EQ(subtract(5, 3), 2);
}