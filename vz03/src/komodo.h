#ifndef KOMODO_H
#define KOMODO_H

#include "include.h"
/** @class Komodo
  * Kelas Komodo turunan dari Squamata dan Karnivora
  */
class Komodo: public Squamata, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Komodo dengan inisial 'J' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Komodo(int i, int x, int y, int massa, bool jinak);
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
  const int rasio=10;
};
#endif