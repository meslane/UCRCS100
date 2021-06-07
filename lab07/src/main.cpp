#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "add.hpp"
#include "sub.hpp"

#include "factory.hpp"

int main(int argc, char** argv) {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    /*
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(add, two);

    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    */    

    Factory* f = new Factory();


    //remove the call to the program name from argv
    char** operation = argv + 1;
    int oplen = argc - 1;

    Base* result = f->parse(operation, oplen);

    std::cout << result->evaluate() << std::endl;

    delete result;
    delete f;

    return 0;
}
