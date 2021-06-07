#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult: public Base {
    private:
	Base* op1;
	Base* op2;

    public:
	Mult(Base* a, Base* b ) {
	    op1 = a;
	    op2 = b;
	}

	~Mult() {
	    delete op1;
	    delete op2;
	}

	virtual int number_of_children(){return 2;}

	virtual Base* get_child(int i){
	    if(i == 0) {return op1;}
	    else if(i == 1){return op2;}
	    else {return nullptr;}
	}

	virtual void accept(Visitor* visitor, int index){
	    if(index == 0){visitor->visit_mult_begin(this);}
	    else if(index == 1){visitor->visit_mult_middle(this);}
	    else {visitor->visit_mult_end(this);}        
	}

	virtual double evaluate() {
	    return (op1->evaluate() * op2->evaluate());
	}

	virtual std::string stringify() {
	    return ("(" + std::to_string(op1->evaluate()) + " * " + std::to_string(op2->evaluate()) + ")");
	}
};

#endif
