#ifndef __SELECT_NOT_TEST_HPP__
#define __SELECT_NOT_TEST_HPP__

#include "select_not.hpp"
#include "select_or.hpp"
#include "select_contains.hpp"
#include "spreadsheet.hpp"

TEST(NotTest, NoRowsPrinted) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});
    
    test.set_selection(
	new Select_Not(
	    new Select_Or(
                new Select_Contains(&test, "First", "Amanda"),
         	new Select_Contains(&test, "Age", "21"))));

    std::stringstream out("");
    test.print_selection(out);  

    EXPECT_TRUE(out.str() == "");
}

TEST(NotTest, OneRowPrinted) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});

    test.set_selection(
        new Select_Not(
	    new Select_Or(
                new Select_Contains(&test, "Last", "Andrews"),
                new Select_Contains(&test, "Major", "computer science"))));

    std::stringstream out("");
    test.print_selection(out);

    EXPECT_TRUE(out.str() == "Joe Jackson 21 mathematics \n");
}

TEST(NotTest, TwoRowsPrinted) {
    Spreadsheet test;
    test.set_column_names({"First","Last","Age","Major"});
    test.add_row({"Amanda","Andrews","22","business"});
    test.add_row({"Brian","Becker","21","computer science"});
    test.add_row({"Carol","Conners","21","computer science"});
    test.add_row({"Joe","Jackson","21","mathematics"});

    test.set_selection(
        new Select_Not(
            new Select_Contains(&test, "Major", "computer science")));

    std::stringstream out("");
    test.print_selection(out);

    EXPECT_TRUE(out.str() == "Amanda Andrews 22 business \nJoe Jackson 21 mathematics \n");
}


#endif
