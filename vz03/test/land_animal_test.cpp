#include "../src/include.h"
#include <gtest/gtest.h>

class LandAnimalTest : public ::testing::Test {
  protected:
   LandAnimalTest() {};
};

TEST(LandAnimalTest, LandAnimalConstructor) {
  BadakCulaSatu o(1, 10, 1, 100, true);

  EXPECT_EQ(0, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('C', o.GetInisial());

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}