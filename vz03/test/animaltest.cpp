#include "../src/animal.h"
#include<gtest/gtest.h>

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

TEST(AnimalTest, OrangUtanConstructor) {
  OrangUtan o(1, 10, 1, 100, true);

  EXPECT_EQ(6, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, OrangUtanInteract) {
  OrangUtan o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Orang Utan: \"Auooo\"\n", text);
}

TEST(AnimalTest, SiamangConstructor) {
  Siamang o(1, 10, 1, 100, true);

  EXPECT_EQ(20, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}


TEST(AnimalTest, SiamangInteract) {
  Siamang o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Siamang: \"Ooo Ooo\"\n", text);
}

TEST(AnimalTest, BekantanConstructor) {
  Bekantan o(1, 10, 1, 100, true);

  EXPECT_EQ(10, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, BekantanInteract) {
  Bekantan o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Bekantan: (climb tree)\n", text);
}

TEST(AnimalTest, BadakCulaSatuConstructor) {
  BadakCulaSatu o(1, 10, 1, 100, true);

  EXPECT_EQ(0, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, BadakCulaSatuInteract) {
  BadakCulaSatu o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Badak Cula Satu: (bathing in mud)\n", text);
}

TEST(AnimalTest, ZebraConstructor) {
  Zebra o(1, 10, 1, 100, true);

  EXPECT_EQ(1, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, ZebraInteract) {
  Zebra o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Zebra: (running)\n", text);
}

TEST(AnimalTest, HarimauSumatraConstructor) {
  HarimauSumatra o(1, 10, 1, 100, true);

  EXPECT_EQ(8, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, HarimauSumatraInteract) {
  HarimauSumatra o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Harimau Sumatra: \"AUUM!!\"\n", text);
}

TEST(AnimalTest, MacanConstructor) {
  Macan o(1, 10, 1, 100, true);

  EXPECT_EQ(8, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, MacanInteract) {
  Macan o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Macan: (stalk prey)\n", text);
}

TEST(AnimalTest, RusaConstructor) {
  Rusa o(1, 10, 1, 100, true);

  EXPECT_EQ(5, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, RusaInteract) {
  Rusa o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Rusa: (flaunt horn)\n", text);
}

TEST(AnimalTest, KancilConstructor) {
  Kancil o(1, 10, 1, 100, true);

  EXPECT_EQ(50, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, KancilInteract) {
  Kancil o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Kancil: (eat cucumber)\n", text);
}

TEST(AnimalTest, BantengConstructor) {
  Banteng o(1, 10, 1, 100, true);

  EXPECT_EQ(1, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, BantengInteract) {
  Banteng o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Banteng: (snort)\n", text);
}

TEST(AnimalTest, KomodoConstructor) {
  Komodo o(1, 10, 1, 100, true);

  EXPECT_EQ(10, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, KomodoInteract) {
  Komodo o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Komodo: (stick tongue)\n", text);
}

TEST(AnimalTest, IguanaConstructor) {
  Iguana o(1, 10, 1, 100, true);

  EXPECT_EQ(12, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, IguanaInteract) {
  Iguana o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Iguana: \"Hiss\"\n", text);
}

TEST(AnimalTest, HiuKarpetConstructor) {
  HiuKarpet o(1, 10, 1, 100, true);

  EXPECT_EQ(1, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, HiuKarpetInteract) {
  HiuKarpet o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Hiu Karpet: (burying in sand)\n", text);
}

TEST(AnimalTest, HiuMartilConstructor) {
  HiuMartil o(1, 10, 1, 100, true);

  EXPECT_EQ(1, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, HiuMartilInteract) {
  HiuMartil o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Hiu Martil: (move head)\n", text);
}

TEST(AnimalTest, StingRayConstructor) {
  StingRay o(1, 10, 1, 100, true);

  EXPECT_EQ(10, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, StingRayInteract) {
  StingRay o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("StingRay: (move fin)\n", text);
}

TEST(AnimalTest, MantaRayConstructor) {
  MantaRay o(1, 10, 1, 100, true);

  EXPECT_EQ(0, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, MantaRayInteract) {
  MantaRay o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("MantaRay: (swim! jump!)\n", text);
}

TEST(AnimalTest, ElangConstructor) {
  Elang o(1, 10, 1, 100, true);

  EXPECT_EQ(20, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, ElangInteract) {
  Elang o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Elang: \"Kaaaak!\"\n", text);
}

TEST(AnimalTest, GarudaConstructor) {
  Garuda o(1, 10, 1, 100, true);

  EXPECT_EQ(16, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, GarudaInteract) {
  Garuda o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Garuda: (spread wings)\n", text);
}

TEST(AnimalTest, KakatuaConstructor) {
  Kakatua o(1, 10, 1, 100, true);

  EXPECT_EQ(33, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, KakatuaInteract) {
  Kakatua o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Kakatua: \"Hello! kwak!\"\n", text);
}

TEST(AnimalTest, NuriConstructor) {
  Nuri o(1, 10, 1, 100, true);

  EXPECT_EQ(50, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, NuriInteract) {
  Nuri o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Nuri: (play ball)\n", text);
}

TEST(AnimalTest, ParkitConstructor) {
  Parkit o(1, 10, 1, 100, true);

  EXPECT_EQ(20, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, ParkitInteract) {
  Parkit o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Parkit: \"cuit cuit\"\n", text);
}

TEST(AnimalTest, BuayaConstructor) {
  Buaya o(1, 10, 1, 100, true);

  EXPECT_EQ(0, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, BuayaInteract) {
  Buaya o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Buaya: (open mouth)\n", text);
}

TEST(AnimalTest, AligatorConstructor) {
  Aligator o(1, 10, 1, 100, true);

  EXPECT_EQ(1, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

TEST(AnimalTest, AligatorInteract) {
  Aligator o(1, 10, 1, 100, true);

  std::stringstream buffer;
  std::streambuf * old = std::cout.rdbuf(buffer.rdbuf());
  o.Interact();
  std::string text = buffer.str();
  std::cout.rdbuf( old );
 
  EXPECT_EQ("Aligator: (crawl)\n", text);
}

TEST(AnimalTest, LandAnimalConstructor) {
  BadakCulaSatu o(1, 10, 1, 100, true);

  EXPECT_EQ(0, o.GetJmlMakanan());
  EXPECT_EQ(1, o.GetID());
  EXPECT_EQ(true, o.IsJinak());
  EXPECT_EQ(10, o.GetPosisiX());
  EXPECT_EQ(1, o.GetPosisiY());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

