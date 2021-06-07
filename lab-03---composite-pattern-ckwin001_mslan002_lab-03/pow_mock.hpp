#ifndef __POW_MOCK_HPP__
#define __POW_MOCK_HPP__

#include <string>
#include "base.hpp"

class PowMock : public Base  {
    public:
        PowMock() {}
        
        virtual double evaluate(){ return 4.0; }
        virtual std::string stringify()  { return "(2**2)";}
};

#endif //__POW_MOCK_HPP__
