#ifndef KANCIL_H
#define KANCIL_H

#include "include.h"
/** @class Kancil
  * Kelas Kancil turunan dari Artiodactyl dan Herbivora
  */
class Kancil: public Artiodactyl, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Kancil dengan inisial 'K' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Kancil(int i, int x, int y, int massa, bool jinak);
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