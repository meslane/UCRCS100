#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "base.hpp"

#include <string>

class Factory {
    private:
	bool isOp(const std::string& s);

    public:
	Base* parse(char** input, int length);
};

#endif
