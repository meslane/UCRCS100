#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "../src/sub.hpp"
#include "pow_mock.hpp"

TEST(SubTest, SubPosByPos) {
    Sub* test = new Sub(new Op(8.3), new Op(7.2));
    EXPECT_NEAR(1.1, test->evaluate(), 0.001);
}

TEST(SubTest, SubPowByPos) {
    Sub* test2 = new Sub(new PowMock(), new Op(3));
    EXPECT_NEAR(1, test2->evaluate(), 0.001);
}

TEST(SubTest, SubStringPosByPos) {
    Sub* test3 = new Sub(new Op(11), new Op(8));
    EXPECT_TRUE("(11.000000-8.000000)" == test3->stringify());
}

TEST(SubTest, SubStringPowByPos) {
    Sub* test4 = new Sub(new PowMock(), new Op(3));
    EXPECT_TRUE("((2**2)-3.000000)" == test4->stringify());
}


#endif
