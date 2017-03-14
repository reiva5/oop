#ifndef RAJIFORMES_h
#define RAJIFORMES_h

#include "water_animal.h"
using namespace std;

/** @class Rajiformes
  * Kelas Rajiformes turunan dari WaterAnimal menunjukkan ordo pari
  */
class Rajiformes: public WaterAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Rajiformes dengan memanggil 
    * constructor WaterAnimal berinisial c dan ID i.
    * @param c inisial Rajiformes yang ingin diciptakan
    * @param i ID Rajiformes yang ingin diciptakan
    */
  Rajiformes(char c, int i);
};

#endif
