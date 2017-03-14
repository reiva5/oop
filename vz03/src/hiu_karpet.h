#ifndef HIU_KARPET_H
#define HIU_KARPET_H

#include "include.h"
/** @class HiuKarpet
  * Kelas HiuKarpet turunan dari Carcharhiniformes dan Karnivora
  */
class HiuKarpet: public Carcharhiniformes, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan HiuKarpet dengan inisial 'V' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  HiuKarpet(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=100;
};

#endif