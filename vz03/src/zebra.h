#ifndef ZEBRA_H
#define ZEBRA_H

#include "include.h"
/** @class Zebra
  * Kelas Zebra turunan dari Perrisodactyl dan Herbivora 
  */
class Zebra: public Perrisodactyl, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Zebra inisial 'Z' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Zebra(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=60; 
};

#endif