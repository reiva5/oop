#include "../src/include.h"
#include <gtest/gtest.h>

class HairmauSumataraTest : public ::testing::Test {
  protected:
   HairmauSumataraTest() {};
};

TEST(HarimauSumatraTest, HarimauSumatraConstructor) {
  HarimauSumatra o(1, 10, 1, 100, true);

  EXPECT_EQ(8, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('H', o.GetInisial());
}

TEST(HarimauSumatraTest, HarimauSumatraInteract) {
  HarimauSumatra o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Harimau Sumatra: \"AUUM!!\"\n", text);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
