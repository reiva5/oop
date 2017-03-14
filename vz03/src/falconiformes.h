#ifndef FALCONIFORMES_h
#define FALCONIFORMES_h

#include "flying_animal.h"
using namespace std;

/** @class Falconformes
  * Kelas Falconformes turunan dari FlyingAnimal
  */
class Falconiformes: public FlyingAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Falconiformes dengan memanggil 
    * constructor FlyingAnimal berinisial c dan ID i.
    * @param c inisial Falconiformes yang ingin diciptakan
    * @param i ID Falconiformes yang ingin diciptakan
    */
  Falconiformes(char c, int i);  
};

#endif
