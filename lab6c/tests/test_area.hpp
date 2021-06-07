#ifndef __TEST_AREA_HPP__
#define __TEST_AREA_HPP__

#include "../src/rectangle.hpp"

TEST(testArea, unitSquare) {
    Rectangle r(1,1);
    
    EXPECT_EQ(r.area(), 1);
}

TEST(testArea, zeroArea) {
    Rectangle r(0,0);
    
    EXPECT_EQ(r.area(), 0);
}

TEST(testArea, NegPos) {
    Rectangle r(-1,1);
    
    EXPECT_EQ(r.area(), -1);
}

TEST(testArea, NegNeg) {
    Rectangle r(-1,-1);
    
    EXPECT_EQ(r.area(), 1);
}

#endif
