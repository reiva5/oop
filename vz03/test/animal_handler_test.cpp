#include "../src/animal_handler.h"
#include <gtest/gtest.h>

class AnimalHandlerTest : public ::testing::Test {
  protected:
   AnimalHandlerTest() {};
};

TEST(AnimalHandlerTest, AnimalHandlerConstructor) {
	AnimalHandler ah;

	EXPECT_EQ(0, ah.NbAnimal());
}

TEST(AnimalHandlerTest, AddAnimal) {
	AnimalHandler ah;
	Animal *a;
	a = new OrangUtan(1, 10, 15, 100, true);
	ah.AddAnimal(a);

	EXPECT_EQ(1, ah.NbAnimal());
}

TEST(AnimalHandlerTest, GetAnimal) {
	AnimalHandler ah;
	Animal *a;
	a = new OrangUtan(1, 10, 15, 100, true);
	ah.AddAnimal(a);

	EXPECT_EQ(a, ah.GetAnimal(0));
}

TEST(AnimalHandlerTest, JumlahMakanan) {
	AnimalHandler ah;
	Animal * a;
	a = new OrangUtan(1, 10,  15, 150, true);
	ah.AddAnimal(a);

	EXPECT_EQ(10, ah.JumlahMakanan());
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}