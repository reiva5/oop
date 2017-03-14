#include "land_air_animal.h"

using namespace std;

Land_AirAnimal::Land_AirAnimal(char c, int i) : Animal(c, i) {
  AddHabitat('x');
  AddHabitat('o');
}