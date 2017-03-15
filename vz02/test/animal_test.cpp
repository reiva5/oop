#include "../src/animal.h"
#include <gtest/gtest.h>
#include <string>

using namespace std;

class AnimalTest : public ::testing::Test {
  protected:
   AnimalTest(){};
};

TEST(AnimalTest, IsJinakFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  EXPECT_EQ(true, a->IsJinak());
}

TEST(AnimalTest, GetInisialFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  EXPECT_EQ('U', a->GetInisial());
}

TEST(AnimalTest, GetIDFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
   EXPECT_EQ(1, a->GetID());
}

TEST(AnimalTest, GetMassaFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  EXPECT_EQ(60, a->GetMassa());
}

TEST(AnimalTest, GetPosisiXFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  EXPECT_EQ(10, a->GetPosisiX());
}

TEST(AnimalTest, GetPosisiYFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  EXPECT_EQ(10, a->GetPosisiY());
}

TEST(AnimalTest, SetJinakFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  a->SetJinak(false);
  EXPECT_EQ(false, a->IsJinak());
}

TEST(AnimalTest, SetMassaFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  a->SetMassa(50);
  EXPECT_EQ(50, a->GetMassa());
}

TEST(AnimalTest, SetXFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  a->SetX(5);
  EXPECT_EQ(5, a->GetPosisiX());
}

TEST(AnimalTest, SetYFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  a->SetY(5);
  EXPECT_EQ(5, a->GetPosisiY());
}

TEST(AnimalTest, AddGetHabitatFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  
  a->AddHabitat('x');
  EXPECT_EQ('x', a->GetHabitat()[0]);
}

TEST(AnimalTest, GetMakananFunction) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);
  int makanan = a->GetMassa()/30;
  EXPECT_EQ(makanan, a->getMakanan());
}

TEST(AnimalTest, AnimalInteract) {
  Animal* a;
  a = new Animal(10, 10, 60, 'U', "OrangUtan", "\\Auooo\\", true, "x", 1);

  stringstream buffer;
  streambuf * old = cout.rdbuf(buffer.rdbuf());
  a->interact();
  string text = buffer.str();
  cout.rdbuf( old );
 
  EXPECT_EQ("OrangUtan: \\Auooo\\\n", text);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}