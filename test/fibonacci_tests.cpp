#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "fibonacci.h"

using namespace testing;

TEST(Fibonacci, GiantSteps)
{
    auto foo = GenerateFibonacciSequence(8); // 0, 1, 1, 2, 3, 5, 8, 13

    EXPECT_EQ(0, foo[0]);
    EXPECT_EQ(1, foo[1]);
    EXPECT_EQ(1, foo[2]);
    EXPECT_EQ(2, foo[3]);
    EXPECT_EQ(3, foo[4]);
    EXPECT_EQ(5, foo[5]);
    EXPECT_EQ(8, foo[6]);
    EXPECT_EQ(13, foo[7]);
}