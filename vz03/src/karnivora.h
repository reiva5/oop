#ifndef KARNIVORA_h
#define KARNIVORA_h

#include "pemakan.h"
/** @class Karnivora
  * Kelas Karnivora
    menyimpan informasi makanan berupa daging
*/
class Karnivora: public Pemakan {
public:
  /** @brief Setter daging
    * @param n Jumlah daging yang diinginkan
    */
  void SetAmount(int n);
  /** @brief Getter daging
    * @return daging
    */
  int GetAmount();

protected:
  int daging;
};

#endif