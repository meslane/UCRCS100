#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/rand.hpp"

TEST(RandTest, RandEval) {
    Rand* test = new Rand();
    EXPECT_NEAR(50, test->evaluate(), 50);
}

TEST(RandTest, RandEq) {
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), test->evaluate());
}

#endif
