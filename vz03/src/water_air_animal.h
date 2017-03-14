#ifndef WATERAIRANIMAL_h
#define WATERAIRANIMAL_h

#include "animal.h"
using namespace std;

/** @class WaterAnimal
  * Kelas WaterAnimal turunan dari Animal.
  */
class Water_AirAnimal: public Animal {
/** @brief Constructor.
    * Menciptakan Water_AirAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial Water_AirAnimal yang ingin diciptakan
    * @param i ID Water_AirAnimal yang ingin diciptakan
    */
  Water_AirAnimal(char c, int i);
};

#endif
