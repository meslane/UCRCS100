#ifndef __POW_HPP__
#define __POW_HPP__

#include <cmath>
#include <string>
#include "base.hpp"

class Pow : public Base {
    private:
	Base* operand1;
	Base* operand2;
    public:

        Pow(Base* op1, Base* op2) {
	operand1 = op1;
	operand2 = op2;
    }
        ~Pow() {}
        
        
        virtual double evaluate(){
	    return pow(operand1->evaluate(), operand2->evaluate());
    }
        virtual std::string stringify()  {
	    return "("+operand1->stringify()+"**"+operand2->stringify()+")";
    };
};

#endif //__POW_HPP__
