#ifndef __SELECT_OR_TEST_HPP__
#define __SELECT_OR_TEST_HPP__

#include "gtest/gtest.h"
#include "select_or.hpp"
#include "select_contains.hpp"
#include "spreadsheet.hpp"

TEST(OrTest, NoRowsPrinted) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});
    
    test.set_selection(
	new Select_Or(
            new Select_Contains(&test, "First", "Andrew"),
	    new Select_Contains(&test, "Last", "Johnson")));

    std::stringstream out("");
    test.print_selection(out);  

    EXPECT_TRUE(out.str() == "");
}

TEST(OrTest, OneRowPrinted) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});

    test.set_selection(
        new Select_Or(
            new Select_Contains(&test, "Last", "Jackson"),
            new Select_Contains(&test, "Major", "biology")));

    std::stringstream out("");
    test.print_selection(out);

    EXPECT_TRUE(out.str() == "Joe Jackson 21 mathematics \n");
}

TEST(OrTest, TwoRowsPrinted) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});

    test.set_selection(
        new Select_Or(
            new Select_Contains(&test, "Age", "22"),
            new Select_Contains(&test, "Major", "mathematics")));

    std::stringstream out("");
    test.print_selection(out);

    EXPECT_TRUE(out.str() == "Amanda Andrews 22 business \nJoe Jackson 21 mathematics \n");
}


#endif
