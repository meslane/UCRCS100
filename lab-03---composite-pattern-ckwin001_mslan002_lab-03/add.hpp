#ifndef __ADD_HPP__
#define __ADD_HPP__

#include <string>
#include "base.hpp"

class Add : public Base  {
    private:
	Base* operand1;
	Base* operand2;
    public:

        Add(Base* op1, Base* op2) {
	operand1 = op1;
	operand2 = op2;
    }
        ~Add() {}
        
        
        virtual double evaluate(){
	    return operand1->evaluate() + operand2->evaluate();
    }
        virtual std::string stringify()  {
	    return "("+operand1->stringify()+"+"+operand2->stringify()+")";
    };
};

#endif //__ADD_HPP__
