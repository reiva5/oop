#include "../src/include.h"
#include <gtest/gtest.h>

class NuriTest : public ::testing::Test {
  protected:
   NuriTest() {};
};

TEST(NuriTest, NuriConstructor) {
  Nuri o(1, 10, 1, 100, true);

  EXPECT_EQ(50, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('N', o.GetInisial());
}

TEST(NuriTest, NuriInteract) {
  Nuri o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Nuri: (play ball)\n", text);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
