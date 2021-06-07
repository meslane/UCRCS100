#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult: public Base {
    private:
	Base* op1;
	Base* op2;

    public:
	Mult(Base* a, Base* b ) {
	    op1 = a;
	    op2 = b;
	}

	~Mult() {
	    delete op1;
	    delete op2;
	}

	virtual double evaluate() {
	    return (op1->evaluate() * op2->evaluate());
	}

	virtual std::string stringify() {
	    return ("(" + std::to_string(op1->evaluate()) + " * " + std::to_string(op2->evaluate()) + ")");
	}
};

#endif
