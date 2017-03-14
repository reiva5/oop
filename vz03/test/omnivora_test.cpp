#include "../src/omnivora.h"
#include <gtest/gtest.h>

class OmnivoraTest : public ::testing::Test {
  protected:
  	OmnivoraTest() {};
	
};

TEST(OmnivoraTest, SetGetAmountTest) {
	OrangUtan o(1, 10, 15, 80, true);

	o.SetAmount(10);
    EXPECT_EQ(10, o.GetAmount());
}

int main(int argc, char **argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}