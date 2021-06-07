
#ifndef __MOCK_RAND_HPP__
#define __MOCK_RAND_HPP__

#include <stdlib.h>

#include "base.hpp"

class MockRand: public Base {
    private:
	double value;

    public:
        MockRand() {
	    value = 5;
        }

        virtual double evaluate() {
            return value;
        }

        virtual std::string stringify() {
            return std::to_string(value);            
        }
};

#endif
