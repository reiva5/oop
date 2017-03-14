#ifndef MANTA_RAY_H
#define MANTA_RAY_H

#include "include.h"
/** @class MantaRay
  * Kelas MantaRay turunan dari Rajiformes dan Karnivora
  */
class MantaRay: public Rajiformes, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan MantaRay dengan inisial 'Q' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  MantaRay(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=400;
};

#endif