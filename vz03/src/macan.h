#ifndef MACAN_H
#define MACAN_H

#include "include.h"
/** @class HarimauSumatra
  * Kelas HarimauSumatra turunan dari Carnivore dan Karnivora 
  */
class Macan: public Carnivore, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Macan dengan inisial 'M' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Macan(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=12;
};

#endif