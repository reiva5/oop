#include "../src/land_water_animal.h"
#include <gtest/gtest.h>

class Land_WaterAnimalTest : public ::testing::Test {
  protected:
   Land_WaterAnimalTest() {};
};

TEST(Land_WaterAnimalTest, Land_WaterAnimalConstructor) {
  Buaya o(1, 10, 1, 200, true);

  EXPECT_EQ(1, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}