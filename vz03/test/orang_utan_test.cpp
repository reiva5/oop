#include "../src/include.h"
#include <gtest/gtest.h>

class OrangUtanTest : public ::testing::Test {
  protected:
   OrangUtanTest() {};
};


TEST(OrangUtanTest, OrangUtanConstructor) {
  OrangUtan o(1, 10, 1, 100, true);

  EXPECT_EQ(6, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(OrangUtanTest, OrangUtanInteract) {
  OrangUtan o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Orang Utan: \"Auooo\"\n", text);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
