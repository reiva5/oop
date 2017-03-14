#ifndef PRIMATE_h
#define PRIMATE_h

#include "land_animal.h"
using namespace std;

/** @class Primate
  * Kelas Primate turunan dari LandAnimal menunjukkan ordo primata
  */
class Primate: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Primate dengan memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Primate yang ingin diciptakan
    * @param i ID Primate yang ingin diciptakan
    */
  Primate(char c, int i);
};

#endif
