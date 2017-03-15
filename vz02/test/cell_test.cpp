#include "../src/include.h"
#include <gtest/gtest.h>

class CellTest : public ::testing::Test
{
  protected:
   CellTest() {};
};

TEST(CellTest, CellConstructor)
{
  Cell c('x',10,11);

  EXPECT_EQ('x', c.GetType());
  EXPECT_EQ(10, c.GetAbsis());
  EXPECT_EQ(11, c.GetOrdinat());
  EXPECT_EQ(NULL, c.GetCage());
  EXPECT_EQ(NULL, c.GetAnimal());
}

TEST(CellTest, AddAnimalToCell)
{
  Cell c('x',10,11);
  OrangUtan o(1, 10, 1, 100, true);

  c.SetAnimal(&o);

  EXPECT_EQ(&o, c.GetAnimal());
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
