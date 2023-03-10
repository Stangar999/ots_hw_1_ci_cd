//#define BOOST_TEST_MODULE test_version
#include "lib.h"
//#include <boost/test/included/unit_test.hpp>
#include <gtest/gtest.h>

TEST(TestVersion, Subtest_1) {
  ASSERT_TRUE(version() > 0);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}

//BOOST_AUTO_TEST_SUITE(test_version)

//BOOST_AUTO_TEST_CASE(test_valid_version)
//{
//    BOOST_CHECK(version() > 0);
//}

//BOOST_AUTO_TEST_SUITE_END()
