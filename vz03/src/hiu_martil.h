#ifndef HIU_MARTIL_H
#define HIU_MARTIL_H

#include "include.h"
/** @class HiuMartil
  * Kelas HiuMartil turunan dari Carcharhiniformes dan Karnivora
  */
class HiuMartil: public Carcharhiniformes, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan HiuMartil dengan inisial 'T' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  HiuMartil(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string aksi;
  const int rasio=100;
};

#endif