#include "factory.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"

#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <string.h>

bool Factory::isOp(const std::string& s) {
    for (int i = 0; i < s.length(); i++) {
	if(isdigit(s[i]) == false) {
	    return false;
	}
    }
    return true;
}

Base* Factory::parse(char** input, int length) {
    int i = 0;
    Base* root = nullptr;

    while(i < length) {
	    try {
        	if (isOp(input[i])) {
		    if (root == nullptr) {
			root = new Op(std::stod(input[i]));
		    }
		    else {
			std::cout << "Parser error: extra operand" << std::endl;
			return nullptr;
		    }
		}
		else if (strcmp(input[i], "+") == 0) {
		    Base* left = root;
		    root = new Add(left, new Op(std::stod(input[++i])));
		}
		else if (strcmp(input[i], "-") == 0) {
		    Base* left = root;
		    root = new Sub(left, new Op(std::stod(input[++i])));
		}
		else if (strcmp(input[i], "*") == 0) {
		    Base* left = root;
		    root = new Mult(left, new Op(std::stod(input[++i])));
		}
		else if (strcmp(input[i], "/") == 0)  {
		    Base* left = root;
		    root = new Div(left, new Op(std::stod(input[++i])));
		}
		else if (strcmp(input[i], "**") == 0) {
		    Base* left = root;
		    root = new Pow(left, new Op(std::stod(input[++i])));
		}
		else {
		    std::cout << "Parser error: invalid character(s)" << std::endl;
		    return nullptr;
		}
	    }
	    catch (std::logic_error& e) {
		std::cout << "Parser error: invalid operator order" << std::endl;
		return nullptr;
	    }
	i++; 
    }
    return root;
}
