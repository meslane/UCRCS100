#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "../src/add.hpp"
#include "sub_mock.hpp"

TEST(AddTest, AddPosByPos) {
    Add* test = new Add(new Op(5), new Op(6));
    EXPECT_NEAR(11, test->evaluate(), 0.001);
}

TEST(AddTest, AddSubByPos){
    Add* test2 = new Add(new SubMock(), new Op(6));
    EXPECT_NEAR(15, test2->evaluate(), 0.001);
}

TEST(AddTest, AddStringPosByPos) {
    Add* test3 = new Add(new Op(7), new Op (8));
    EXPECT_TRUE("(7.000000+8.000000)" == test3->stringify());
}

TEST(AddTest, AddStringSubByPos) {
    Add* test4 = new Add(new SubMock(), new Op(10));
    EXPECT_TRUE("((10-1)+10.000000)" == test4->stringify());
}

#endif
