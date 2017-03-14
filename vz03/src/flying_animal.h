#ifndef FLYINGANIMAL_h
#define FLYINGANIMAL_h

#include "animal.h"

using namespace std;

/** @class FlyingAnimal
  * Kelas FlyingAnimal turunan dari Animal 
  * menunjukkan animal yang tinggal di udara
  */
class FlyingAnimal: public Animal {
public:
/** @brief Constructor.
    * Menciptakan FlyingAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial FlyingAnimal yang ingin diciptakan
    * @param i ID FlyingAnimal yang ingin diciptakan
    */
  FlyingAnimal(char c, int i);
};

#endif
