#ifndef BUAYA_H
#define BUAYA_H

#include "include.h"
/** @class Buaya
  * Kelas Buaya turunan dari Crocodillia dan Karnivora
  */
class Buaya: public Crocodillia, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Buaya dengan inisial 'D' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Buaya(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=200;
  
};

#endif