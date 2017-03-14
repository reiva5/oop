#ifndef EXIT_H
#define EXIT_H

#include "road.h"
/** @class Exit
  * Kelas Exit inherit dari kelas Road, sebagai tempat keluar Zoo
  */
class Exit: public Road {
  public:
    /** @brief Constructor
      * Menciptakan Exit dengan memanggil 
      * constructor Road yang memiliki posisi <x,y>
      * @param x Nilai absis Road yang diciptakan
      * @param y Nilai ordinat Road yang diciptakan 
      */
    Exit(int x, int y);
};

#endif