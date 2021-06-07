#ifndef __SUB_MOCK_HPP__
#define __SUB_MOCK_HPP__

#include <string>
#include "../src/base.hpp"

class SubMock : public Base  {
    public:
        SubMock() {}
        
        virtual double evaluate(){ return 9.0; }
        virtual std::string stringify()  { return "(10-1)";}
};

#endif //__SUB_MOCK_HPP__
