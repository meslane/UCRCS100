#ifndef __SELECT_AND_HPP__
#define __SELECT_AND_HPP__

#include "select.hpp"

class Select_And: public Select {
    private:
	const Select* op1;
	const Select* op2;

    public:

    Select_And(const Select* o1, const Select* o2) {
	op1 = o1;
	op2 = o2;
    }

    ~Select_And() {
	delete op1;
	delete op2;
    }

    bool select(const Spreadsheet* sheet, int row) const {
	return op1->select(sheet, row) && op2->select(sheet, row); 
    }
};

#endif
