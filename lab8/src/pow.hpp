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
        
    ~Pow() {
	delete operand1;
	delete operand2;		
    }
    
	virtual int number_of_children(){return 2;}

	virtual Base* get_child(int i){
	    if(i == 0) {return operand1;}
	    else if(i == 1){return operand2;}
	    else {return nullptr;}
	}

	virtual void accept(Visitor* visitor, int index){
	    if(index == 0){visitor->visit_pow_begin(this);}
	    else if(index == 1){visitor->visit_pow_middle(this);}
	    else {visitor->visit_pow_end(this);}        
	}
	
        
        virtual double evaluate(){
	    return pow(operand1->evaluate(), operand2->evaluate());
    }
        virtual std::string stringify()  {
	    return "("+operand1->stringify()+"**"+operand2->stringify()+")";
    };
};

#endif //__POW_HPP__
