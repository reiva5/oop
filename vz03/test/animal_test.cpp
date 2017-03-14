#include "../src/animal.h"
#include <gtest/gtest.h>

class AnimalTest : public ::testing::Test {
  protected:
   AnimalTest(){};
};

TEST(AnimalTest, IsJinakFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
  EXPECT_EQ(true, a->IsJinak());
}

TEST(AnimalTest, GetInisialFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
  EXPECT_EQ('U', a->GetInisial());
}

TEST(AnimalTest, GetIDFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
   EXPECT_EQ(1, a->GetID());
}

TEST(AnimalTest, GetMassaFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
  EXPECT_EQ(100, a->GetMassa());
}

TEST(AnimalTest, GetPosisiXFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
  EXPECT_EQ(10, a->GetPosisiX());
}

TEST(AnimalTest, GetPosisiYFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
  EXPECT_EQ(1, a->GetPosisiY());
}

TEST(AnimalTest, SetMassaFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
  a->SetMassa(50);
  EXPECT_EQ(50, a->GetMassa());
}

TEST(AnimalTest, SetXFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
  a->SetX(5);
  EXPECT_EQ(5, a->GetPosisiX());
}

TEST(AnimalTest, SetYFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
  a->SetY(5);
  EXPECT_EQ(5, a->GetPosisiY());
}

TEST(AnimalTest, AddGetHabitatFunction) {
  Animal* a;
  a= new OrangUtan(1, 10, 1, 100, true);
  
  a->AddHabitat('x');
  EXPECT_EQ('x', a->GetHabitat()[0]);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}