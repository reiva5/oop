#include "../src/cage_handler.h"
#include <gtest/gtest.h>

class CageHandlerTest : public ::testing::Test
{
  protected:
   CageHandlerTest() {};
};

TEST(CageHandlerTest, CageHandlerConstructor)
{
  CageHandler ch;
  EXPECT_EQ(0, ch.NbCage());
}


TEST(CageHandlerTest, AddingCage)
{
  CageHandler ch;
  Cage *c;
  c = new Cage(1, 'x');

  ch.AddCage(c);

  EXPECT_EQ(1, ch.NbCage());
  EXPECT_EQ(c, ch.GetCage(1));
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}