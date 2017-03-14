#include "../src/include.h"
#include <gtest/gtest.h>

class CageTest : public ::testing::Test {
  protected:
   CageTest(){};
};

TEST(CageTest, CageConstructor) {
  Cage c(1, 'x');

  EXPECT_EQ(1, c.GetId());
  EXPECT_EQ('x', c.GetHabitat());
  EXPECT_EQ(0, c.GetLuas());
}

TEST(CageTest, AddingCell) {
  Cage c(1, 'x');

  c.AddCell('x');

  EXPECT_EQ(1, c.GetLuas());
}

TEST(CageTest, AddingAnimal) {
  Cage c(1, 'x');
  OrangUtan o(1, 10, 1, 100, true);

  c.AddCell('x');
  c.AddAnimal(&o);

  EXPECT_EQ(1, c.GetNbAnimal());
  EXPECT_EQ(true, c.IsIsiJinak());
}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}