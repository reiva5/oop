#ifndef PEMAKAN_H
#define PEMAKAN_H


class Pemakan {
public:
  /** @brief Mengembalikan jumlah makananan
    * @return jumlah makanan = 0
    */
  virtual int GetAmount() = 0;
};

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