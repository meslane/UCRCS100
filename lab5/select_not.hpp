#ifndef __SELECT_NOT_HPP__
#define __SELECT_NOT_HPP__

#include "select.hpp"

class Select_Not: public Select {
    private:
	const Select* operand;
    public:

    Select_Not(const Select* op) {
	operand = op; 
    }

    ~Select_Not() {
	delete operand;
    }

    bool select(const Spreadsheet* sheet, int row) const {
	return !operand->select(sheet, row);
    }

    bool select(const std::string& s) const {
	return false;
    }
};

#endif
