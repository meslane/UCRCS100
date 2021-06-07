#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "mock_div.hpp"
#include "mult.hpp"

TEST(MultTest, MultArgs) {
    Op* a = new Op(5);
    Op* b = new Op(3);
    Mult* test = new Mult(a, b);
    EXPECT_NEAR(15, test->evaluate(), 0.001);
}

TEST(MultTest, TimesZero) {
    Op * a = new Op(10);
    Op * b = new Op(0);
    Mult* test = new Mult(a, b);
    EXPECT_NEAR(0, test->evaluate(), 0.001);
}

TEST(MultTest, TimesNeg) {
    Op* a = new Op(-5);
    Op* b = new Op(3);
    Mult* test = new Mult(a, b);
    EXPECT_NEAR(-15, test->evaluate(), 0.001);
}

TEST(MultTest, NegTimesNeg) {
    Op* a = new Op(-5);
    Op* b = new Op(-3);
    Mult* test = new Mult(a, b);
    EXPECT_NEAR(15, test->evaluate(), 0.001);
}

TEST(MultTest, MultWithMockDiv) {
    MockDiv* d = new MockDiv();
    Op* b = new Op(3);
    Mult* test = new Mult(d, b);
    EXPECT_NEAR(9, test->evaluate(), 0.001);
}

TEST(MultTest, AddParent) {
   Op* s1 = new Op(10);
   Op* s2 = new Op(5);
   Sub* a = new Sub(s1, s2);
   Op*  b = new Op(4);

    Mult* test = new Mult(a, b);
    EXPECT_NEAR(20, test->evaluate(), 0.001);
}

TEST(MultTest, Stringeq) {
    Op* a = new Op(-5);
    Op* b = new Op(-3);
    Mult* test = new Mult(a, b);
    EXPECT_TRUE("(-5.000000 * -3.000000)" == test->stringify());
}

#endif
