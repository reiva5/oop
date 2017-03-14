#ifndef PARKIT_H
#define PARKIT_H

#include "include.h"
/** @class Parkit
  * Kelas Parkit turunan dari Prittaciformes dan Herbivora
  */
class Parkit: public Prittaciformes, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Parkit dengan inisial 'F' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */  
  Parkit(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string suara;
  const int rasio=5;
};

#endif