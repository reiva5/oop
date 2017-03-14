#ifndef LANDAIRANIMAL_h
#define LANDAIRANIMAL_h

#include "animal.h"
using namespace std;

/** @class Land_AirAnimal
  * Kelas Land_AirAnimal turunan dari Animal.
  */
class Land_AirAnimal: public Animal {
public:
/** @brief Constructor.
    * Menciptakan Land_AirAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial Land_AirAnimal yang ingin diciptakan
    * @param i ID Land_AirAnimal yang ingin diciptakan
    */
  Land_AirAnimal(char c, int i);
};

#endif
