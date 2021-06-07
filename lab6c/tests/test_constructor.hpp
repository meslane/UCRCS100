#ifndef __TEST_CONSTRUCTOR_HPP__
#define __TEST_CONSTRUCTOR_HPP__

#include "../src/rectangle.hpp"

TEST(testConstructor, unitSquareLength) {
    Rectangle r(1,1);
    
    EXPECT_EQ(r.getLength(), 1);
}

TEST(testConstructor, unitSquareWidth) {
    Rectangle r(1,1);

    EXPECT_EQ(r.getWidth(), 1);
}

TEST(testConstructor, NegPosLength) {
    Rectangle r(-1,1);

    EXPECT_EQ(r.getLength(), -1);
}

TEST(testConstructor, NegPosWidth) {
    Rectangle r(-1,1);

    EXPECT_EQ(r.getWidth(), 1);
}

TEST(testConstructor, PosZeroLength) {
    Rectangle r(1,0);

    EXPECT_EQ(r.getLength(), 1);
}

TEST(testConstructor, PosZeroWidth) {
    Rectangle r(1,0);

    EXPECT_EQ(r.getWidth(), 0);
}


#endif
