#ifndef __ADD_MOCK_HPP__
#define __ADD_MOCK_HPP__

#include <string>
#include "base.hpp"

class AddMock : public Base  {
    public:
        AddMock() {}
        
        virtual double evaluate(){ return 7.0; }
        virtual std::string stringify()  { return "(2+5)";}
};

#endif //__ADD_MOCK_HPP__
