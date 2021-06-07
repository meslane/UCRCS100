#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div: public Base {
    private:
	Base* op1;
	Base* op2;

    public:
	Div(Base* a, Base* b ) {
	    op1 = a;
	    op2 = b;
	}

	virtual double evaluate() {
	    return (op1->evaluate() / op2->evaluate());
	}

	virtual std::string stringify() {
	    return ("(" + std::to_string(op1->evaluate()) + " / " + std::to_string(op2->evaluate()) + ")");
	}
};

#endif
