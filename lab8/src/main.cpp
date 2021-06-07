#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "factory.hpp"
#include "../VisitorLaTex.hpp"
//#include "../visitor.hpp"

int main(int argc, char** argv) {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    /*
    Base* five = new Op(5);
    Base* two = new Op(2);
    Base* power_root = new Pow(five, two);
    */

    Factory* f = new Factory();


    //remove the call to the program name from argv
    char** operation = argv + 1;
    int oplen = argc - 1;

    Base* result = f->parse(operation, oplen);    

    VisitorLaTex* v = new VisitorLaTex(); 
    std::cout << v->PrintLaTeX(result) << std::endl;
    
    delete v;
    delete result;
    delete f;

    return 0;
}    
