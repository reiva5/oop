#include "../src/herbivora.h"
#include <gtest/gtest.h>

class HerbivoraTest : public ::testing::Test {
  protected:
  	HerbivoraTest() {};
	
};

TEST(HerbivoraTest, SetGetAmountTest) {
	Rusa r(1, 10, 15, 80, true);

	r.SetAmount(10);
    EXPECT_EQ(10, r.GetAmount());
}

int main(int argc, char **argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}