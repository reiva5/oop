#include "water_animal.h"
using namespace std;

WaterAnimal::WaterAnimal(char c, int i): Animal(c,i) {
  AddHabitat('w');
}
