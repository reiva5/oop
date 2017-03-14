#include "../src/flying_animal.h"
#include <gtest/gtest.h>

class FlyingAnimalTest : public ::testing::Test {
  protected:
   FlyingAnimalTest() {};
};

TEST(FlyingAnimalTest, FlyingAnimalConstructor) {
  Parkit o(1, 10, 1, 100, true);

  EXPECT_EQ(20, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('F', o.GetInisial());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}