#ifndef __VISITORLATEX_HPP__
#define __VISITORLATEX_HPP__

#include "visitor.hpp"
#include "iterator.hpp"

#include <iostream>
#include <iomanip>
#include <string>

class Op;
class Rand;
class Add;
class Sub;
class Mult;
class Div;
class Pow;

class VisitorLaTex : public Visitor {

    private:
	std::string LaTex;

    public:
	//virtual ~Visitor() = default;

	std::string PrintLaTeX(Base* ptr){
	    LaTex = "";
	    LaTex.append("$");	    

	    for(Iterator it(ptr); !it.is_done(); it.next()) {
		it.current_node()->accept(this, it.current_index());
	    }
	    LaTex.append("$");
	
	    return LaTex;
	}

        // Nodes with no children are visited only once (index = 0)
        virtual void visit_op(Op* node){
		LaTex.append("{");
		LaTex.append(std::to_string(static_cast<int>(node->evaluate())));
		LaTex.append("}");
	}
        virtual void visit_rand(Rand* node) {
		LaTex.append("{");
		LaTex.append(std::to_string(node->evaluate()));
		LaTex.append("}");
	}

        // Nodes with two children are visited three times.
        virtual void visit_add_begin(Add* node) {LaTex.append("{(");}
        virtual void visit_add_middle(Add* node) {LaTex.append("+");}
        virtual void visit_add_end(Add* node) {LaTex.append(")}");}

        virtual void visit_sub_begin(Sub* node) {LaTex.append("{(");}
        virtual void visit_sub_middle(Sub* node) {LaTex.append("-");}
        virtual void visit_sub_end(Sub* node) {LaTex.append(")}");}

        virtual void visit_mult_begin(Mult* node) {LaTex.append("{(");}
        virtual void visit_mult_middle(Mult* node) {LaTex.append("\\cdot");}
        virtual void visit_mult_end(Mult* node) {LaTex.append(")}");}

        virtual void visit_div_begin(Div* node) {LaTex.append("{\\frac");}
        virtual void visit_div_middle(Div* node) {return;}
        virtual void visit_div_end(Div* node) {LaTex.append("}");}

        virtual void visit_pow_begin(Pow* node) {LaTex.append("{(");}
        virtual void visit_pow_middle(Pow* node) {LaTex.append("^");}
        virtual void visit_pow_end(Pow* node) {LaTex.append(")}");}
};

#endif
