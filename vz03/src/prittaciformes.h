#ifndef PRITTACIFORMES_h
#define PRITTACIFORMES_h

#include "flying_animal.h"
using namespace std;

/** @class Prittaciformes
  * Kelas Prittaciiformes turunan dari FlyingAnimal
  */
class Prittaciformes: public FlyingAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Prittaciformes dengan memanggil 
    * constructor FlyingAnimal berinisial c dan ID i.
    * @param c inisial Prittaciformes yang ingin diciptakan
    * @param i ID Prittaciformes yang ingin diciptakan
    */
  Prittaciformes(char c, int i);
};

#endif
