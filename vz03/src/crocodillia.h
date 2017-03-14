#ifndef CROCODILLIA_h
#define CROCODILLIA_h

#include "land_water_animal.h"
using namespace std;

/** @class Crocodillia
  * Kelas Crocodillia turunan dari Land_WaterAnimal
  */ 
class Crocodillia: public Land_WaterAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Crocodilla dengan memanggil 
    * constructor Land_WaterAnimal berinisial c dan ID i.
    * @param c inisial Crocodilla yang ingin diciptakan
    * @param i ID Crocodilla yang ingin diciptakan
    */
  Crocodillia(char c, int i);  
};

#endif
