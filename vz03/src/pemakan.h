#ifndef PEMAKAN_H
#define PEMAKAN_H


class Pemakan {
public:
  /** @brief Mengembalikan jumlah makananan
    * @return jumlah makanan = 0
    */
  virtual int GetAmount() = 0;
};

#endif 