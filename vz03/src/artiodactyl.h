#ifndef ARTIODACTYL_h
#define ARTIODACTYL_h

#include "land_animal.h"
using namespace std;

/** @class Artiodactyl
  * Kelas Artiodactyl turunan dari LandAnimal menunjukkan ordo artiodactyl
  * yaitu hewan dengan kuku genap
  */
class Artiodactyl: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Artiodactyl dengan memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Artiodactyl yang ingin diciptakan
    * @param i ID Artiodactyl yang ingin diciptakan
    */
  Artiodactyl(char c, int i);
};

#endif
