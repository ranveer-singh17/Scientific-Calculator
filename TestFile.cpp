#include "gtest/gtest.h"

TEST (return_test, Data) { 
    EXPECT_EQ ("add", operator ("add"));
}
int main(int argc, char ∗∗argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}