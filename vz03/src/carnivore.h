#ifndef CARNIVORE_h
#define CARNIVORE_h

#include "land_animal.h"
using namespace std;
/** @class Carnivore
  * Kelas Carnivore turunan dari LandAnimal menunjukkan ordo karnivora
  */
class Carnivore: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Carnivore dengan memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Carnivore yang ingin diciptakan
    * @param i ID Carnivore yang ingin diciptakan
    */
  Carnivore(char c, int i);
};

#endif
