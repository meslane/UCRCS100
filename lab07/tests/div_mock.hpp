#ifndef __MOCK_DIV_HPP__
#define __MOCK_DIV_HPP__

#include "../src/base.hpp"

class MockDiv: public Base {
    private:
	double op1;
	double op2;

    public:
	MockDiv() {
	    op1 = 15;
	    op2 = 5;
	}

	virtual double evaluate() {
	    return (op1 / op2);
	}

	virtual std::string stringify() {
	    return ("(" + std::to_string(op1) + " / " + std::to_string(op2) + ")");
	}
};

#endif
