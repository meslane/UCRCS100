#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/op.hpp"
#include "../src/sub.hpp"
#include "../src/add.hpp"
#include "../src/div.hpp"
#include "../src/mult.hpp"
#include "../src/rand.hpp"
#include "../src/pow.hpp"
#include "../src/factory.cpp"

#include "op_test.hpp"
#include "rand_test.hpp"
#include "add_test.hpp"
#include "sub_test.hpp"
#include "pow_test.hpp"
#include "mult_test.hpp"
#include "div_test.hpp"

#include "add_mock.hpp"
#include "sub_mock.hpp"
#include "div_mock.hpp"
#include "mult_mock.hpp"
#include "pow_mock.hpp" 

TEST(FactoryTest, simpleAdd ) {
    Factory test;
    char *args[]={"5", "+", "3"};
    Base *op = test.parse(args, 3);
    EXPECT_NEAR(8, op->evaluate(), 0.001);
}

TEST(FactoryTest, simpleSub ) {
    Factory test;
    char *args[]={"4", "-", "3"};
    Base *op = test.parse(args, 3);
    EXPECT_NEAR(1, op->evaluate(), 0.001);
}

TEST(FactoryTest, simpleDiv ) {
    Factory test;
    char *args[]={"6", "/", "3"};
    Base *op = test.parse(args, 3);
    EXPECT_NEAR(2, op->evaluate(), 0.001);
}

TEST(FactoryTest, simpleMult ) {
    Factory test;
    char *args[]={"5", "*", "3"};
    Base *op = test.parse(args, 3);
    EXPECT_NEAR(15, op->evaluate(), 0.001);
}

TEST(FactoryTest, simplePow ) {
    Factory test;
    char *args[]={"3", "**", "2"};
    Base *op = test.parse(args, 3);
    EXPECT_NEAR(9, op->evaluate(), 0.001);
}

TEST(FactoryTest, fail_InvalidChar ) {
    Factory test;
    char *args[]={"$", "-", "3"};
    Base *op = test.parse(args, 3);
    EXPECT_TRUE(op == nullptr);
}

TEST(FactoryTest, fail_ExtraOperand ) {
    Factory test;
    char *args[]={"3", "3", "3"};
    Base *op = test.parse(args, 3);
    EXPECT_TRUE(op == nullptr);
}

TEST(FactoryTest, AddSub ) {
    Factory test;
    char *args[]={"5", "+", "3", "-", "4"};
    Base *op = test.parse(args, 5);
    EXPECT_NEAR(4, op->evaluate(), 0.001);
}

TEST(FactoryTest, MultDiv ) {
    Factory test;
    char *args[]={"4", "*", "6", "/", "3"};
    Base *op = test.parse(args, 5);
    EXPECT_NEAR(8, op->evaluate(), 0.001);
}

TEST(FactoryTest, AddSubPow ) {
    Factory test;
    char *args[]={"1", "+", "7", "-", "6", "**", "5"};
    Base *op = test.parse(args, 7);
    EXPECT_NEAR(32, op->evaluate(), 0.001);
}

#endif
