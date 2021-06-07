#ifndef __SELECT_CONTAINS_TEST_HPP__
#define __SELECT_CONTAINS_TEST_HPP__

#include "gtest/gtest.h"
#include "select_contains.hpp"
#include "spreadsheet.hpp"
#include "select.hpp"
#include <sstream>
#include <string>
#include <iostream>

TEST(ContainsTest, NoRowsPrinted) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});
    
    test.set_selection(new Select_Contains(&test, "First", "John"));
    
    std::stringstream out("");
    test.print_selection(out);  

    EXPECT_TRUE(out.str() == "");
}

TEST(ContainsTest, FirstNameChecked) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});
    
    test.set_selection(new Select_Contains(&test, "First", "Joe"));
    
    std::stringstream out("");
    test.print_selection(out);
   // std::cout << out << endl;

    EXPECT_EQ(out.str(), "Joe Jackson 21 mathematics \n");
}

TEST(ContainsTest, LastNameChecked) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});
    
    test.set_selection(new Select_Contains(&test, "Last", "Andrews"));
    
    std::stringstream out("");
    test.print_selection(out);  

    EXPECT_TRUE(out.str() == "Amanda Andrews 22 business \n");
}

TEST(ContainsTest, AgeChecked) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});
    
    test.set_selection(new Select_Contains(&test, "Age", "22"));
    
    std::stringstream out("");
    test.print_selection(out);  

    EXPECT_TRUE(out.str() == "Amanda Andrews 22 business \n");
}

TEST(ContainsTest, MajorChecked) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});
    
    test.set_selection(new Select_Contains(&test, "Major", "mathematics"));
    
    std::stringstream out("");
    test.print_selection(out);  

    EXPECT_TRUE(out.str() == "Joe Jackson 21 mathematics \n");
}

TEST(ContainsTest, MultipleRowsPrinted) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});
    
    test.set_selection(new Select_Contains(&test, "Major", "computer science"));
    
    std::stringstream out("");
    test.print_selection(out);

    EXPECT_TRUE(out.str() == "Brian Becker 21 computer science \nCarol Conners 21 computer science \n");
}

#endif
