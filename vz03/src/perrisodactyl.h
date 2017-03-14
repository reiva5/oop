#ifndef PERRISODACTYL_h
#define PERRISODACTYL_h

#include "land_animal.h"
using namespace std;

/** @class Perrisodactyl
  * Kelas Perrisodactyl turunan dari LandAnimal
  * yaitu hewan dengan 
  */
class Perrisodactyl: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Perrisodactyl dengan memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Perrisodactyl yang ingin diciptakan
    * @param i ID Perrisodactyl yang ingin diciptakan
    */
  Perrisodactyl(char c, int i);
};

#endif
