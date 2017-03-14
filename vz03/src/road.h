#ifndef ROAD_H
#define ROAD_H

#include "facility.h"
/** @class Road
  * Kelas Road inherit dari kelas Facility, fasilitas berupa jalan di dalam zoo
  */
class Road: public Facility {
  public:
    /** @brief Constructor
      * Menciptakan Road dengan jenis=0, memanggil
      * constructor Facility bertype ' ' posisi <x,y>
      * @param x Nilai absis Road yang diciptakan
      * @param y Nilai ordinat Road yang diciptakan 
      */
    Road(int x,int y);
    /** @brief Constructor
      * Menciptakan Road dengan jenis = n, memanggil 
      * constructor Facility bertype ' ' posisi <x,y>
      * @param x Nilai absis Road yang diciptakan
      * @param y Nilai ordinat Road yang diciptakan 
      * @param n Nilai jenis Road yang diciptakan
      */
    Road(int n, int x, int y);
    /** @brief Getter jenis
      * @return jenis 
      */
    int GetJenis();
    /** @brief Menampilkan type
      * Menampilkan karakter type ke layar dengan warna kuning
      */
    void Render();
    
  private:
    const int jenis;
};

#endif