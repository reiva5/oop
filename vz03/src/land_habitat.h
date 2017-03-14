#ifndef LANDHABITAT_h
#define LANDHABITAT_h

#include "include.h"
using namespace std;

/** @class LandHabitat
  * Kelas LandHabitat inherit kelas Habitat tempat hewan yang hidup di darat
  */
class LandHabitat: public Habitat {
  public:
    /** @brief Constructor
      * Menciptakan Land Habitat dengan memanggil 
      * constructor Habitat bertype 'x', dan posisi <x,y>
      * @param x Nilai absis LandHabitat yang diciptakan
      * @param y Nilai ordinat LandHabitat yang diciptakan 
      */
    LandHabitat(int x, int y);
};

#endif