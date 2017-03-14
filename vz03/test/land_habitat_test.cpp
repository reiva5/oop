#include "../src/land_habitat.h"
#include <gtest/gtest.h>

class LandHabitatTest : public ::testing::Test {
  protected:
   LandHabitatTest() {};
};

TEST(LandHabitatTest, LandHabitatConstructor) {
	LandHabitat c(10,15);

	EXPECT_EQ('x', c.GetType());
	EXPECT_EQ(10, c.GetAbis());
	EXPECT_EQ(15, c.GetOrdinat());
	EXPECT_EQ(NULL, c.GetCage());
	EXPECT_EQ(NULL, c.GetAnimal());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}