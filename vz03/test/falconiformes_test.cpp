#include "../src/include.h"
#include <gtest/gtest.h>

class FalconiformesTest : public ::testing::Test {
  protected:
   FalconiformesTest() {};
};

TEST(FalconiformesTest, FalconiformesConstructor) {
  Elang o(1, 10, 1, 20, true);

  EXPECT_EQ(4, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('~', o.GetInisial());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}