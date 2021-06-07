#ifndef __MOCK_MULT_HPP__
#define __MOCK_MULT_HPP__

#include "../src/base.hpp"

class MockMult: public Base {
    private:
	double op1;
	double op2;

    public:
	MockMult() {
	    op1 = 5;
	    op2 = 3;
	}

	virtual double evaluate() {
	    return (op1 * op2);
	}

	virtual std::string stringify() {
	    return ("(" + std::to_string(op1) + " * " + std::to_string(op2) + ")");
	}
};

#endif
