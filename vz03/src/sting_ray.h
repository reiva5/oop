#ifndef STING_RAY_H
#define STING_RAY_H

#include "include.h"
/** @class StingRay
  * Kelas StingRay turunan dari Rajiformes dan Karnivora
  */
class StingRay: public Rajiformes, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan StingRay dengan inisial 'Y' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  StingRay(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string aksi;
  const int rasio=10;
};

#endif