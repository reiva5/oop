#ifndef ELANG_H
#define ELANG_H

#include "include.h"
/** @class Elang
  * Kelas Elang turunan dari Falconiformes dan Karnivora
  */
class Elang: public Falconiformes, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Elang dengan inisial '~' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Elang(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string suara;
  const int rasio=5;
};

#endif