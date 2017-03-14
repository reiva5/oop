#include "land_water_animal.h"

using namespace std;

Land_WaterAnimal::Land_WaterAnimal(char c, int i) : Animal(c, i) {
  AddHabitat('x');
  AddHabitat('w');
}
