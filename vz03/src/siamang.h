#ifndef SIAMANG_H
#define SIAMANG_H

#include "include.h"
/** @class Siamang
  * Kelas Siamang turunan dari kelas Primate dan Omnivora
  */
class Siamang: public Primate, public Omnivora {
public:
  /** @brief Constructor.
    * Menciptakan Siamang dengan inisial 'S' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Siamang(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Omnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string suara;
  const int rasio=5;
};

#endif