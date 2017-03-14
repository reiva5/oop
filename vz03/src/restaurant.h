#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "facility.h"
/** @class Restaurant
  * Kelas Restaurant inherit dari kelas Facility, fasilitas berupa restaurant
  */
class Restaurant: public Facility {
  public:
    /** @brief Constructor
      * Menciptakan Restaurant dengan memanggil 
      * constructor Facility bertype 'R' posisi <x,y>
      * @param x Nilai absis Restaurant yang diciptakan
      * @param y Nilai ordinat Restaurant yang diciptakan 
      */
    Restaurant(int x, int y);
    /** @brief Menampilkan type
      * Menampilkan karakter type ke layar dengan warna biru
      */
    void Render();
};

#endif