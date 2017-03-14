#include "../src/include.h"
#include <gtest/gtest.h>

class PerrisodactylTest : public ::testing::Test {
  protected:
   PerrisodactylTest() {};
};

TEST(PerrisodactylTest, PrittaciformesConstructor) {
  Zebra o(1, 10, 1, 3, true);

  EXPECT_EQ(1, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('Z', o.GetInisial());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}