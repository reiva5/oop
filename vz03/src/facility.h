#ifndef FACILITY_H
#define FACILITY_H

#include "cell.h"

/** @class Facility
  * Kelas Facility inherit dari kelas Cell, merepresentasikan fasilitas zoo
  */
class Facility: public Cell {
  public:
    /** @brief Constructor
      * Menciptakan objek facility dengan memanggil 
      * constructor cell bertype c dan posisi <x,y> 
      * @param c Nilai type facility yang diciptakan
      * @param x Nilai absis facility yang diciptakan
      * @param y NIlai ordinat facility yang diciptakan
      */
    Facility(char c, int x, int y);
};


#endif 