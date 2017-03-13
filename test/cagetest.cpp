#include "../src/cage.h"
#include<gtest/gtest.h>

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

TEST(CageTest, CageHandlerConstructor) {
  CageHandler ch;

  EXPECT_EQ(0, ch.NbCage());
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

TEST(CageTest, AddingCage) {
  CageHandler ch;
  Cage *c;
  c = new Cage(1, 'x');

  ch.AddCage(c);

  EXPECT_EQ(1, ch.NbCage());
  EXPECT_EQ(c, ch.GetCage(1));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}