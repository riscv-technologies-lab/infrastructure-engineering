#include "gtest/gtest.h"
#include "fibonacci_sequence.h"

TEST(FibonacciSequenceTest, GeneratesCorrectSequence) {
    std::vector<int> expected = {1, 2, 5, 9, 14};
    EXPECT_EQ(FibonacciSequence::generate(1, 2, 3, 5), expected);
}

TEST(FibonacciSequenceTest, HandlesSingleStep) {
    std::vector<int> expected = {5, 10};
    EXPECT_EQ(FibonacciSequence::generate(5, 10, 2, 2), expected);
}
