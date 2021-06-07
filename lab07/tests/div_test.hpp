#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include <cmath>

#include "../src/div.hpp"
#include "mult_mock.hpp"

TEST(DivTest, DivArgs) {
    Op* a = new Op(5);
    Op* b = new Op(3);
    Div* test = new Div(a, b);
    EXPECT_NEAR(1.6666, test->evaluate(), 0.001);
}

TEST(DivTest, DivideByZero) {
    Op* a = new Op(1);
    Op* b = new Op(0);
    Div* test = new Div(a, b);
    EXPECT_EQ(std::numeric_limits<double>::infinity(), test->evaluate()); 
}

TEST(DivTest, ZeroByZero) {
    Op* a = new Op(0);
    Op* b = new Op(0);
    Div* test = new Div(a, b);
    EXPECT_TRUE(std::isnan(test->evaluate()));
}

TEST(DivTest, DivWithMockMult) {
    MockMult* m = new MockMult();
    Op* b = new Op(5);
    Div* test = new Div(m, b);
    EXPECT_NEAR(3, test->evaluate(), 0.001);
}

TEST(DivTest, DivWithAdd) {
    Op* a1 = new Op(3);
    Op* a2 = new Op(4);
    Add* a = new Add(a1, a2);
    Op* b = new Op(7);
    Div* test = new Div(a, b);    

    EXPECT_NEAR(1, test->evaluate(), 0.001);
}

TEST(DivTest, stringify) {
    Op* a = new Op(5);
    Op* b = new Op(3);
    Div* test = new Div(a, b);
    EXPECT_TRUE("(5.000000 / 3.000000)" == test->stringify());
}

#endif
