#ifndef GARUDA_H
#define GARUDA_H

#include "include.h"
/** @class Garuda
  * Kelas Garuda turunan dari Falconiformes dan Karnivora
  */
class Garuda: public Falconiformes, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Garuda dengan inisial 'G' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Garuda(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=6;
};

#endif