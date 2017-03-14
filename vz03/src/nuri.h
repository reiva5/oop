#ifndef NURI_H
#define NURI_H

#include "include.h"
/** @class Nuri
  * Kelas Nuri turunan dari Prittaciformes dan Herbivora
  */
class Nuri: public Prittaciformes, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Nuri dengan inisial 'N' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Nuri(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string aksi;
  const int rasio=2;
};

#endif