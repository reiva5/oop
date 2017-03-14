#ifndef ORANG_UTAN_H
#define ORANG_UTAN_H

#include "include.h"

using namespace std;

/** @class OrangUtan
  * Kelas OrangUtan turunan dari kelas Primate dan Omnivora 
  */
class OrangUtan: public Primate, public Omnivora {
public:
  /** @brief Constructor.
    * Menciptakan OrangUtan dengan inisial 'U' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  OrangUtan(int i, int x, int y, int massa, bool jinak); 
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Omnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string suara;  
  const int rasio=15; 
};

#endif