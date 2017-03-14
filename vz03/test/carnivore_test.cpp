#include "../src/carnivore.h"
#include <gtest/gtest.h>

class CarnivoreTest : public ::testing::Test {
  protected:
   CarnivoreTest() {};
};

TEST(CarnivoreTest, CarnivoreConstructor) {
  HarimauSumatra o(1, 10, 1, 120, true);

  EXPECT_EQ(10, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('H', o.GetInisial());
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}