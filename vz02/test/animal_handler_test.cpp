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
	a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
	ah.AddAnimal(a);

	EXPECT_EQ(1, ah.NbAnimal());
}

TEST(AnimalHandlerTest, GetAnimal) {
	AnimalHandler ah;
	Animal *a;
	a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
	ah.AddAnimal(a);

	EXPECT_EQ(a, ah.GetAnimal(0));
}

TEST(AnimalHandlerTest, JumlahMakanan) {
	AnimalHandler ah;
	Animal * a;
	a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
	ah.AddAnimal(a);

	EXPECT_EQ(2, ah.JumlahMakanan());
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}