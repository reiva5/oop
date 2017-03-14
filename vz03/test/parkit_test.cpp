#include "../src/parkit.h"
#include <gtest/gtest.h>

class ParkitTest : public ::testing::Test {
  protected:
   ParkitTest() {};
};

TEST(ParkitTest, ParkitConstructor) {
  Parkit o(1, 10, 1, 100, true);

  EXPECT_EQ(20, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('F', o.GetInisial());
}

TEST(ParkitTest, ParkitInteract) {
  Parkit o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Parkit: \"cuit cuit\"\n", text);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
