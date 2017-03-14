#ifndef ZOO_h
#define ZOO_h

#include <bits/stdc++.h>
#include "include.h"

using namespace std;

/** @class Zoo
  * Kelas Zoo terdiri dari matriks cell dan pintu masuk serta keluar
  */
class Zoo {
  public:
    /** @brief Constructor.
      * Menciptakan Zoo kosong dengan lebar x dan panjang y
      * @param x Nilai width Zoo yang ingin diciptakan
      * @param y Nilai length Zoo yang ingin diciptakan
      */
    Zoo(int x, int y);
    /** @brief Copy Constructor.
      * Prekondisi z memiliki width dan length yang sama
      * Mengantisipasi agar tidak bit wise copy
      * @param z Zoo yang ingin dicopy
      */
    Zoo(const Zoo& z);
    /** @brief Operator Assignment
      * Mengoverloading operator samadengan agar Zoo tidak bit wise copy
      * @param z Nilai zoo yang ingin di masukkan
      * @return this zoo yang sudah sama dengan z
      */
    Zoo& operator= (const Zoo& z);
    /** @brief Destructor. 
      */
    ~Zoo();
    /** @brief Setter c
      * @param x Nilai kolom c yang akan di set.
      * @param y Nilai baris c yang akan di set.
      * @param cell Nilai c yang akan dimasukkan.
      */
    void SetCell(int x, int y, Cell* cell);
    /** @brief Getter c.
      * @param x Nilai kolom c yang ingin didapatkan.
      * @param y Nilai baris c yang ingin didapatkan.
      * @return c.
      */
    Cell* GetCell(int x, int y);
    /** @brief Getter width
      * @return width
      */
    int GetWidth();
    /** @brief Getter length
      * @return length
      */
    int GetLength();
    /** @brief Menambahkan entrance 
      * @param c Cell yang merupakan Entrance
      */
    void AddEntrance(Cell* c);
    /** @brief Menambahkan exit 
      * @param c Cell yang merupakan Exit
      */
    void AddExit(Cell*);
    /** @brief Getter entrance
      * @param i Nilai indeks elemen entrance ingin yang didapatkan
      * @return entrance[i]
      */
    Cell* GetEntrance(int i);
    /** @brief Getter exit
      * @param i Nilai indeks elemen exit yang ingin didapatkan
      * @return exit[i]
      */
    Cell* GetExit(int i);
    /** @brief Mengembalikan jumlah elemen entrance 
      * @return Banyaknya elemen entrance
       */
    int NbEntrance();
    /** @brief Mengembalikan jumlah elemen exit
      * @return Banyaknya elemen exit
    */
    int NbExit();

  private:
    Cell*** c;
    const int width;
    const int length;
    vector<Cell*> entrance;
    vector<Cell*> exit;
};

#endif
