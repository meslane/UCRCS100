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
    
    ~Add() {
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
	    if(index == 0){visitor->visit_add_begin(this);}
	    else if(index == 1){visitor->visit_add_middle(this);}
	    else {visitor->visit_add_end(this);}        
	}
    
    virtual double evaluate(){
	    return operand1->evaluate() + operand2->evaluate();
    }
    virtual std::string stringify()  {
	    return "("+operand1->stringify()+"+"+operand2->stringify()+")";
    }
};

#endif //__ADD_HPP__
