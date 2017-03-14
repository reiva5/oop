#include "../src/rajiformes.h"
#include <gtest/gtest.h>

class RajiformesTest : public ::testing::Test {
  protected:
   RajiformesTest() {};
};

TEST(RajiformesTest, RajiformesConstructor) {
  StingRay o(1, 10, 1, 100, true);

  EXPECT_EQ(10, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('Y', o.GetInisial());
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}