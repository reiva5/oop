#ifndef HARIMAU_SUMATRA_H
#define HARIMAU_SUMATRA_H

#include "include.h"
/** @class HarimauSumatra
  * Kelas HarimauSumatra turunan dari Carnivore dan Karnivora 
  */
class HarimauSumatra: public Carnivore, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan HarimauSumatra dengan inisial 'H' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  HarimauSumatra(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string suara;
  const int rasio=12;  
};

#endif