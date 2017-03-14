#include "flying_animal.h"

using namespace std;

FlyingAnimal::FlyingAnimal(char c, int i): Animal(c,i) {
  AddHabitat('o');
}
