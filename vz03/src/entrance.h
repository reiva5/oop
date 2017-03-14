#ifndef ENTRANCE_H
#define ENTRANCE_H

#include "road.h"
/** @class Entrance
  * Kelas Entrance inherit dari kelas Road, sebagai tempat masuk Zoo
  */
class Entrance: public Road {
  public:
    /** @brief Constructor
      * Menciptakan Entrance dengan memanggil 
      * constructor Road yang memiliki posisi <x,y>
      * @param x Nilai absis Road yang diciptakan
      * @param y Nilai ordinat Road yang diciptakan 
      */
    Entrance(int x, int y);
};

#endif