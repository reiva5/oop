#include "../src/zoo.h"
#include <gtest/gtest.h>

class ZooTest : public ::testing::Test {
  protected:
   ZooTest(){};
};

TEST(ZooTest, ZooConstructor) {
  Zoo z(10,11);

  EXPECT_EQ(10, z.GetWidth());
  EXPECT_EQ(11, z.GetLength());
  EXPECT_EQ(0, z.NbEntrance());
  EXPECT_EQ(0, z.NbExit());
}

TEST(ZooTest, AddCellToZoo) {
  Cell *c;
  c= new Cell ('x',10,11);
  Zoo z(10,11);

  z.SetCell(2,2,c);

  EXPECT_EQ(c, z.GetCell(2,2));
}

TEST(ZooTest, AddCellCage) {
  Cell c('x',10,11);
  Cage cage(1, 'x');

  c.SetCage(&cage);

  EXPECT_EQ(&cage, c.GetCage());
}

TEST(ZooTest, AddEntranceExit) {
  Zoo z(10,11);
  Cell *exit;
  Cell *entrance;
  exit = new Cell(' ',1,1);
  entrance = new Cell(' ',1,2);

  z.AddEntrance(entrance);
  z.AddExit(exit);

  EXPECT_EQ(1, z.NbEntrance());
  EXPECT_EQ(1, z.NbExit());
  EXPECT_EQ(entrance, z.GetEntrance(0));
  EXPECT_EQ(exit, z.GetExit(0));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
