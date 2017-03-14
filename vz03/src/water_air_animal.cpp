#include "water_air_animal.h"

using namespace std;

Water_AirAnimal::Water_AirAnimal(char c, int i) : Animal(c, i) {
  AddHabitat('w');
  AddHabitat('o');
}