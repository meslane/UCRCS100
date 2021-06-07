#include "spreadsheet.hpp"
#include "select_contains.hpp"

#include "gtest/gtest.h"
#include "select_contains_test.hpp"
#include "select_and_test.hpp"
#include "select_or_test.hpp"
#include "select_not_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}



