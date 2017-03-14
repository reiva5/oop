#include "../src/garuda.h"
#include <gtest/gtest.h>

class GarudaTest : public ::testing::Test {
  protected:
   GarudaTest() {};
};

TEST(GarudaTest, GarudaConstructor) {
  Garuda o(1, 10, 1, 100, true);

  EXPECT_EQ(16, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('G', o.GetInisial());
}

TEST(GarudaTest, GarudaInteract) {
  Garuda o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Garuda: (spread wings)\n", text);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
