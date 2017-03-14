#ifndef BEKANTAN_H
#define BEKANTAN_H

#include "include.h"
/** @class Bekantan
  * Kelas Bekantan turunan dari kelas Primate dan Omnivora
  */
class Bekantan: public Primate, public Omnivora {
public:
  /** @brief Constructor.
    * Menciptakan Bekantan dengan inisial 'B' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Bekantan(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Omnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string aksi;
  const int rasio=10; 
};

#endif