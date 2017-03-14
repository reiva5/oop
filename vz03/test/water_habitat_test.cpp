#include "../src/include.h"
#include <gtest/gtest.h>

class WaterHabitatTest : public ::testing::Test {
  protected:
   WaterHabitatTest() {};
};

TEST(WaterHabitatTest, WaterHabitatConstructor) {
	WaterHabitat c(10,15);

	EXPECT_EQ('w', c.GetType());
	EXPECT_EQ(10, c.GetAbsis());
	EXPECT_EQ(15, c.GetOrdinat());
	EXPECT_EQ(NULL, c.GetCage());
	EXPECT_EQ(NULL, c.GetAnimal());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}