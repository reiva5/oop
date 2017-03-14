#include "../src/badak_cula_satu.h"
#include <gtest/gtest.h>

class BadakCulaSatuTest : public ::testing::Test {
  protected:
   BadakCulaSatuTest() {};
};

TEST(BadakCulaSatuTest, BadakCulaSatuConstructor) {
  BadakCulaSatu o(1, 10, 1, 100, true);

  EXPECT_EQ(0, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
  EXPECT_EQ('C', o.GetInisial());
}

TEST(BadakCulaSatuTest, BadakCulaSatuInteract) {
  BadakCulaSatu o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Badak Cula Satu: (bathing in mud)\n", text);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
