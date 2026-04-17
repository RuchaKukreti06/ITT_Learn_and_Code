#include <gtest/gtest.h>

#include "ConsecutiveDivisorAnalyzer.h"

class ConsecutiveDivisorAnalyzerTest : public ::testing::Test
{
   protected:
    ConsecutiveDivisorAnalyzer analyzer;
};

TEST_F(ConsecutiveDivisorAnalyzerTest, DivisorCount_PrimeNumber)
{
    EXPECT_EQ(analyzer.getDivisorCount(7), 2);
}

TEST_F(ConsecutiveDivisorAnalyzerTest, DivisorCount_PerfectSquare)
{
    EXPECT_EQ(analyzer.getDivisorCount(16), 5);
}

TEST_F(ConsecutiveDivisorAnalyzerTest, DivisorCount_One)
{
    EXPECT_EQ(analyzer.getDivisorCount(1), 1);
}

TEST_F(ConsecutiveDivisorAnalyzerTest, DivisorCount_InvalidInput)
{
    EXPECT_EQ(analyzer.getDivisorCount(0), 0);
    EXPECT_EQ(analyzer.getDivisorCount(-5), 0);
}

TEST_F(ConsecutiveDivisorAnalyzerTest, EqualAdjacentDivisors_BasicCase)
{
    EXPECT_EQ(analyzer.countNumbersWithEqualAdjacentDivisors(15), 2);
}

TEST_F(ConsecutiveDivisorAnalyzerTest, EqualAdjacentDivisors_SmallInput)
{
    EXPECT_EQ(analyzer.countNumbersWithEqualAdjacentDivisors(3), 1);
}

TEST_F(ConsecutiveDivisorAnalyzerTest, EqualAdjacentDivisors_LowerBound)
{
    EXPECT_EQ(analyzer.countNumbersWithEqualAdjacentDivisors(2), 0);
    EXPECT_EQ(analyzer.countNumbersWithEqualAdjacentDivisors(1), 0);
}

TEST_F(ConsecutiveDivisorAnalyzerTest, EqualAdjacentDivisors_MediumCase)
{
    EXPECT_EQ(analyzer.countNumbersWithEqualAdjacentDivisors(10), 1);
}