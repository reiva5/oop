#include "../src/include.h"
#include <gtest/gtest.h>

class RusaTest : public ::testing::Test {
  protected:
   RusaTest() {};
};

TEST(RusaTest, RusaConstructor) {
  Rusa o(1, 10, 1, 100, true);

  EXPECT_EQ(5, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('E', o.GetInisial());
}

TEST(RusaTest, RusaInteract) {
  Rusa o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Rusa: (flaunt horn)\n", text);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
