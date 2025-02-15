#include "gtest/gtest.h"
#include "arithmetic_progression.h"

TEST(ArithmeticProgressionTest, GeneratesCorrectSequence) {
    std::vector<int> expected = {2, 5, 8, 11, 14};
    EXPECT_EQ(ArithmeticProgression::generate(2, 3, 5), expected);
}

TEST(ArithmeticProgressionTest, HandlesSingleTerm) {
    std::vector<int> expected = {10};
    EXPECT_EQ(ArithmeticProgression::generate(10, 5, 1), expected);
}

TEST(ArithmeticProgressionTest, HandlesNegativeDifference) {
    std::vector<int> expected = {10, 7, 4, 1, -2};
    EXPECT_EQ(ArithmeticProgression::generate(10, -3, 5), expected);
}

