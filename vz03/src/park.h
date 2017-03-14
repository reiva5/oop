#ifndef PARK_H 
#define PARK_H

#include "facility.h"
/** @class Park
  * Kelas Park inherit dari kelas Facility, fasilitas berupa taman
  */
class Park: public Facility {
  public:
    /** @brief Constructor
      * Menciptakan Park dengan memanggil 
      * constructor Facility bertype '*' posisi <x,y>
      * @param x Nilai absis Park yang diciptakan
      * @param y Nilai ordinat Park yang diciptakan 
      */
    Park(int x,int y);
    /** @brief Menampilkan type 
      * Menampilkan karakter type ke layar dengan warna hijau
      */
    void Render();
};

#endif