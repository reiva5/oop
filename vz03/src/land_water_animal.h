#ifndef LANDWATERANIMAL_h
#define LANDWATERANIMAL_h

#include "animal.h"
using namespace std;

/** @class Land_WaterAnimal
  * Kelas Land_WaterAnimal turunan dari Animal.
  */
class Land_WaterAnimal: public Animal {
public:
/** @brief Constructor.
    * Menciptakan Lan_WaterdAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial Land_WaterAnimal yang ingin diciptakan
    * @param i ID Land_WaterAnimal yang ingin diciptakan
    */
  Land_WaterAnimal(char c, int i);
};

#endif
