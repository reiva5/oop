#ifndef HERBIVORA_H 
#define HREBIVORA_H

#include "pemakan.h"
/** @class Herbivora
  * Kelas Herbivora menyimpan informasi makanan berupa tumbuhan
*/
class Herbivora: public Pemakan {
public:
  /** @brief Setter tumbuhan
    * @param n Jumlah tumbuhan yang diinginkan
    */
  void SetAmount(int n);
  /** @brief Getter tumbuhan
    * @return tumbuhan
    */
  int GetAmount();

protected:
  int tumbuhan;  
};

#endif