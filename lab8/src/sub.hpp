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
    }

	virtual int number_of_children(){return 2;}

	virtual Base* get_child(int i){
	    if(i == 0) {return operand1;}
	    else if(i == 1){return operand2;}
	    else {return nullptr;}
	}

	virtual void accept(Visitor* visitor, int index){
	    if(index == 0){visitor->visit_sub_begin(this);}
	    else if(index == 1){visitor->visit_sub_middle(this);}
	    else {visitor->visit_sub_end(this);}        
	}
};

#endif //__SUB_HPP__
