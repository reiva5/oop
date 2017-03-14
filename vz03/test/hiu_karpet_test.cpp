#include "../src/include.h"
#include <gtest/gtest.h>

class HiuKarpetTest : public ::testing::Test {
  protected:
   HiuKarpetTest() {};
};

TEST(HiuKarpetTest, HiuKarpetConstructor) {
  HiuKarpet o(1, 10, 1, 100, true);

  EXPECT_EQ(1, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('V', o.GetInisial());
}

TEST(HiuKarpetTest, HiuKarpetInteract) {
  HiuKarpet o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Hiu Karpet: (burying in sand)\n", text);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
