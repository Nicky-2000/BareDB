#include <gtest/gtest.h>
#include "calc/Calc.h"
#include <iostream>

// Test the addition function
TEST(CalcTest, AddOperation)
{
    Calc calc;
    EXPECT_EQ(calc.add(3, 2), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(0, 0), 0);
}

// Test the subtraction function
TEST(CalcTest, SubOperation)
{
    Calc calc;
    EXPECT_EQ(calc.sub(5, 3), 2);
    EXPECT_EQ(calc.sub(0, 5), -5);
    EXPECT_EQ(calc.sub(-3, -7), 4);
}

// Test the multiplication function
TEST(CalcTest, MulOperation)
{
    Calc calc;
    EXPECT_EQ(calc.mul(4, 3), 12);
    EXPECT_EQ(calc.mul(-2, 3), -6);
    EXPECT_EQ(calc.mul(0, 7), 0);
}
