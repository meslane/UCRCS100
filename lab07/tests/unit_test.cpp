#include "gtest/gtest.h"

#include "op_test.hpp"
#include "rand_test.hpp"
#include "add_test.hpp"
#include "sub_test.hpp"
#include "pow_test.hpp"
#include "mult_test.hpp"
#include "div_test.hpp"
#include "factory_test.hpp"

#include "add_mock.hpp"
#include "sub_mock.hpp"
#include "div_mock.hpp"
#include "mult_mock.hpp"
#include "pow_mock.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
