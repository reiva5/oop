#ifndef IGUANA_H 
#define IGUANA_H

#include "include.h"
/** @class Iguana
  * Kelas Iguana turunan dari Squamata dan Herbivora
  */
class Iguana: public Squamata, public Herbivora
{
public:
  /** @brief Constructor.
    * Menciptakan Iguana dengan inisial 'I' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Iguana(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=8;  
};

#endif