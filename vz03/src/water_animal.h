#ifndef WATERANIMAL_h
#define WATERANIMAL_h

#include "animal.h"
using namespace std;

/** @class WaterAnimal
  * Kelas WaterAnimal turunan dari Animal 
  * menunjukkan animal yang tinggal di air
  */
class WaterAnimal: public Animal {
public:
  /** @brief Constructor.
    * Menciptakan WaterAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial WaterAnimal yang ingin diciptakan
    * @param i ID WaterAnimal yang ingin diciptakan
    */
  WaterAnimal(char c, int i);

};

#endif
