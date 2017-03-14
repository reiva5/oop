#include "../src/include.h"
#include <gtest/gtest.h>

class StingRayTest : public ::testing::Test {
  protected:
   StingRayTest() {};
};

TEST(StingRayTest, StingRayConstructor) {
  StingRay o(1, 10, 1, 100, true);

  EXPECT_EQ(10, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('Y', o.GetInisial());
}

TEST(StingRayTest, StingRayInteract) {
  StingRay o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("StingRay: (move fin)\n", text);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
