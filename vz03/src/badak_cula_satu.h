#ifndef BADAK_CULA_SATU_H
#define BADAK_CULA_SATU_H

#include "include.h"
/** @class BadakCulaSatu
  * Kelas BadakCulaSatu turunan dari Perrisodactyl dan Herbivora 
  */
class BadakCulaSatu: public Perrisodactyl, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan BadakCulaSatu dengan inisial 'C' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  BadakCulaSatu(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=250; 
};


#endif