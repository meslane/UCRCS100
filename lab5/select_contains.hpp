#ifndef __SELECT_CONTAINS_HPP__
#define __SELECT_CONTAINS_HPP__

#include "select.hpp"

class Select_Contains: public Select_Column {
    private:
	std::string substring;	
    
    public:
    Select_Contains(const Spreadsheet* sheet, const std::string& column_name, const std::string& sstring):Select_Column(sheet, column_name) {
	substring = sstring;
	column = sheet->get_column_by_name(column_name);
	/*
	for (int i = 0; i < sheet->data.at(column).size(); i++) {
	   if (sheet->cell_data(i, column) != std::string::npos) {
		return true;
	   }
	}

	return false;
	*/
    }

    /*
    bool select(const Spreadsheet* sheet, int row) const {
	if (sheet->cell_data(row, column).find(substring) != std::string::npos) {
	    return true;
	}
	else {
	    return false;
	}
    }
    */

    bool select(const std::string& s) const {
	if (s.find(substring) != std::string::npos) {
	    return true;
	}
	else {
	    return false;
	}
    }
}; 

#endif
