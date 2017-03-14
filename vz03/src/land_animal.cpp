#include "land_animal.h"
using namespace std;

LandAnimal::LandAnimal(char c, int i) : Animal(c, i) {
  AddHabitat('x');
}
