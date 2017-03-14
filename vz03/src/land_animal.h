#ifndef LANDANIMAL_h
#define LANDANIMAL_h

#include "animal.h"

using namespace std;

/** @class LandAnimal
  * Kelas LandAnimal turunan dari Animal 
  * menunjukkan animal yang tinggal di darat
  */
class LandAnimal: public Animal {
public:
  /** @brief Constructor.
    * Menciptakan LandAnimal menciptakan Animal berinisial c dan ID i.
    * @param c inisial LandAnimal yang ingin diciptakan
    * @param i ID LandAnimal yang ingin diciptakan
    */
  LandAnimal(char c, int i);
};

#endif
