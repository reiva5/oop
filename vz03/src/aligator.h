#ifndef ALIGATOR_H
#define ALIGATOR_H

#include "include.h"
/** @class Aligator
  * Kelas Aligator turunan dari Crocodillia dan Karnivora
  */
class Aligator: public Crocodillia, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Aligator dengan inisial 'L' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Aligator(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=100;
};
#endif