#ifndef OMNIVORA_H
#define OMNIVORA_H

#include "pemakan.h"
using namespace std;

/** @class Omnivora
  * Kelas Omnivora menyimpan informasi makanan perpaduan daging dan tumbuhan
  */
class Omnivora: public Pemakan {
public:
  /** @brief Setter daging_tumbuhan
    * @param n Jumlah daging_tumbuhan yang diinginkan
    */
  void SetAmount(int n);
  /** @brief Getter daging_tumbuhan
    * @return daging_tumbuhan
    */
  int GetAmount();

protected:
  int daging_tumbuhan;
};

#endif
