#ifndef WATERHABITAT_h
#define WATERHABITAT_h

#include "include.h"
using namespace std;

/** @class WaterHabitat
  * Kelas WaterHabitat inherit dari kelas Habitat tempat hewan yang hidup di air
  */
class WaterHabitat: public Habitat {
  public:
    /** @brief Constructor
      * Menciptakan WaterHabitat dengan memanggil 
      * constructor Habitat bertype 'w', dan posisi <x,y>
      * @param x Nilai absis WaterHabitat yang diciptakan
      * @param y Nilai ordinat WaterHabitat yang diciptakan 
      */
    WaterHabitat(int x, int y);
};

#endif