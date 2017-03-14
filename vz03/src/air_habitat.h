#ifndef AIRHABITAT_h
#define AIRHABITAT_h

#include "include.h"
using namespace std;

/** @class AirHabitat
  * Kelas AirHabitat inherit dari kelas Habitat tempat hewan yang hidup di udara
  */
class AirHabitat: public Habitat {
  public:
    /** @brief Constructor
      * Menciptakan AirHabitat dengan memanggil 
      * constructor Habitat bertype 'o', dan posisi <x,y>
      * @param x Nilai absis AirHabitat yang diciptakan
      * @param y Nilai ordinat AirHabitat yang diciptakan 
      */
    AirHabitat(int x, int y);
};

#endif