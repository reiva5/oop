#ifndef CARCHARHINIFORMES_h
#define CARCHARHINIFORMES_h

#include "water_animal.h"
using namespace std;

/** @class Carcharhiniformes
  * Kelas Carcharhiniformes turunan dari WaterAnimal menunjukkan ordo hiu
  */
class Carcharhiniformes: public WaterAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Carcharhiniformes dengan memanggil 
    * constructor WaterAnimal berinisial c dan ID i.
    * @param c inisial Carcharhiniformes yang ingin diciptakan
    * @param i ID Carcharhiniformes yang ingin diciptakan
    */
  Carcharhiniformes(char c, int i);
};

#endif
