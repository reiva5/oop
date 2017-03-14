#ifndef SQUAMATA_h
#define SQUAMATA_h

#include "land_animal.h"
using namespace std;

/** @class Squamata
  * Kelas Squamata turunan dari LandAnimal menunjukkan ordo squamata
  */
class Squamata: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Squamata dengan cara memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Squamata yang ingin diciptakan
    * @param i ID Squamata yang ingin diciptakan
    */
  Squamata(char c, int i);
};

#endif
