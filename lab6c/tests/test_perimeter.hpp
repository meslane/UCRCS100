#ifndef __TEST_PERIMETER_HPP__
#define __TEST_PERIMETER_HPP__

#include "../src/rectangle.hpp"

TEST(testPerimeter, unitSquare) {
    Rectangle r(1,1);
    
    EXPECT_EQ(r.perimeter(), 4);
}

TEST(testPerimeter, ZeroZero) {
    Rectangle r(0,0);
    
    EXPECT_EQ(r.perimeter(), 0);
}

TEST(testPerimeter, ZeroPos) {
    Rectangle r(0,1);

    EXPECT_EQ(r.perimeter(), 2);
}

TEST(testPerimeter, NegPos) {
    Rectangle r(-1,1);
    
    EXPECT_EQ(r.perimeter(), 0);
}

TEST(testPerimeter, NegNeg) {
    Rectangle r(-1,-1);
    
    EXPECT_EQ(r.perimeter(), -4);
}

#endif
