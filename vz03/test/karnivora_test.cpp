#include "../src/include.h"
#include <gtest/gtest.h>

class KarnivoraTest : public ::testing::Test {
  protected:
  	KarnivoraTest() {};
	
};

TEST(KarnivoraTest, SetGetAmountTest) {
	HarimauSumatra h(1, 10, 15, 80, true);

	h.SetAmount(10);
    EXPECT_EQ(10, h.GetAmount());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}