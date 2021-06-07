#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "../src/pow.hpp"
#include "add_mock.hpp"

TEST(PowTest, PowPosByPos) {
    Pow* test = new Pow(new Op(2), new Op(4));
    EXPECT_NEAR(16, test->evaluate(), 0.001);
}

TEST(PowTest, PowZeroByPos) {
    Pow* test2 = new Pow(new Op(0), new Op(10));
    EXPECT_NEAR(0, test2->evaluate(), 0.001);
}

TEST(PowTest, PowPosByZero) {
    Pow* test3 = new Pow(new Op(5), new Op(0));
    EXPECT_NEAR(1, test3->evaluate(), 0.001);
}

TEST(PowTest, PowZeroByZero) {
    Pow* test4 = new Pow(new Op(0), new Op(0));
    EXPECT_NEAR(1, test4->evaluate(), 0.001 );
}

TEST(PowTest, PowAddbyPos) {
    Pow* test5 = new Pow(new AddMock(), new Op(2));
    EXPECT_NEAR(49, test5->evaluate(), 0.001);
}

TEST(PowTest, PowStringPosByPos) {
    Pow* test6 = new Pow(new Op(2), new Op(3));
    EXPECT_TRUE("(2.000000**3.000000)" == test6->stringify());
}

TEST(PowTest, PowStringAddByPos) {
    Pow* test6 = new Pow(new AddMock(), new Op(3));
    EXPECT_TRUE("((2+5)**3.000000)" == test6->stringify());
}

TEST(PowTest, PowNegByPos) {
    Pow* test7 = new Pow(new Op(2), new Op(-2));
    EXPECT_NEAR(0.25, test7->evaluate(), 0.001);
}


#endif
