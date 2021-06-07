#ifndef __SUB_HPP__
#define __SUB_HPP__

#include <string>
#include "base.hpp"

class Sub : public Base  {
    private:
	Base* operand1;
	Base* operand2;
    public:

        Sub(Base* op1, Base* op2) {
	operand1 = op1;
	operand2 = op2;
    }
    
    ~Sub() {
	delete operand1;
	delete operand2;
    }
        
        
        virtual double evaluate(){
	    return operand1->evaluate() - operand2->evaluate();
    }
        virtual std::string stringify()  {
	    return "("+operand1->stringify()+"-"+operand2->stringify()+")";
    };
};

#endif //__SUB_HPP__
