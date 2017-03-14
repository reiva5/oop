#include "../src/include.h"
#include <gtest/gtest.h>

class ArtiodactylTest : public ::testing::Test {
  protected:
   ArtiodactylTest() {};
};

TEST(AnimalTest, ArtiodactylConstructor) {
  Rusa o(1, 10, 1, 100, true);

  EXPECT_EQ(5, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('E', o.GetInisial());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}