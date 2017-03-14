#ifndef KAKATUA_H 
#define KAKATUA_H

#include "include.h"
/** @class Kakatua
  * Kelas Kakatua turunan dari Prittaciformes dan Herbivora
  */
class Kakatua: public Prittaciformes, public Herbivora
{
public:
  /** @brief Constructor.
    * Menciptakan Kakatua dengan inisial 'P' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Kakatua(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=3;
};

#endif