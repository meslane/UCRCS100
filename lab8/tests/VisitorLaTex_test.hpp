#ifndef __VISITORLATEX_TEST_HPP__
#define __VISITORLATEX_TEST_HPP__

#include <iostream>
#include <iomanip>
#include <string>

#include "../src/base.hpp"
#include "../src/op.hpp"
#include "../src/mult.hpp"
#include "../src/add.hpp"
#include "../src/sub.hpp"
#include "../src/div.hpp"
#include "../src/pow.hpp"
#include "../src/rand.hpp"
#include "../VisitorLaTex.hpp"

TEST(VisitorLaTexTest, SimpleSub) {
    Base* test = new Sub(new Op(5), new Op(4));
    VisitorLaTex* v = new VisitorLaTex();
    std::string testString = "${({5}-{4})}$"; 
    EXPECT_TRUE(v->PrintLaTeX(test) == testString);
}

TEST(VisitorLaTexTest, SimpleDiv) {
    Base* test = new Div(new Op(6), new Op(3));
    VisitorLaTex* v = new VisitorLaTex();
    std::string testString = "${\\frac{6}{3}}$";
    EXPECT_TRUE(v->PrintLaTeX(test) == testString);
}

TEST(VisitorLaTexTest, SimpleAdd) {
    Base* test = new Add(new Op(9), new Op(2));
    VisitorLaTex* v = new VisitorLaTex();
    std::string testString = "${({9}+{2})}$";
    EXPECT_TRUE(v->PrintLaTeX(test) == testString);
}

TEST(VisitorLaTexTest, SimpleMult) {
    Base* test = new Mult(new Op(1), new Op(7));
    VisitorLaTex* v = new VisitorLaTex();
    std::string testString = "${({1}\\cdot{7})}$";
    EXPECT_TRUE(v->PrintLaTeX(test) == testString);
}

TEST(VisitorLaTexTest, SimplePow) {
    Base* test = new Pow(new Op(3), new Op(4));
    VisitorLaTex* v = new VisitorLaTex();
    std::string testString = "${({3}^{4})}$";
    EXPECT_TRUE(v->PrintLaTeX(test) == testString);
}

TEST(VisitorLaTexTest, SimpleOp) {
    Base* test = new Op(5);
    VisitorLaTex* v = new VisitorLaTex();
    std::string testString = "${5}$";
    EXPECT_TRUE(v->PrintLaTeX(test) == testString);
}

TEST(VisitorLaTexTest, AddSub) {
    Base* test = new Add(new Op(1), new Sub(new Op(5), new Op(0)));
    VisitorLaTex* v = new VisitorLaTex();
    EXPECT_TRUE(v->PrintLaTeX(test) ==  "${({1}+{({5}-{0})})}$");
    //std::cout << v->PrintLaTeX(test) << std::endl;
}

TEST(VisitorLaTexTest, DivSubPow) {
    Base* test = new Div(new Mult(new Op(2), new Op(5)), new Pow(new Op(5), new Op(2)));
    VisitorLaTex* v = new VisitorLaTex();
    EXPECT_TRUE(v->PrintLaTeX(test) ==  "${\\frac{({2}\\cdot{5})}{({5}^{2})}}$");
    //std::cout << v->PrintLaTeX(test) << std::endl;
}

#endif
