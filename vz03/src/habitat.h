#ifndef HABITAT_h
#define HABITAT_h

#include "cell.h"
using namespace std;

/** @class Habitat
  * Kelas Habitat inherit dari kelas Cell, dapat ditempati oleh hewan
  */
class Habitat: public Cell {
  public:
    /** @brief Constructor
      * Menciptakan objek habitat dengan memanggil 
      * constructor cell bertype c dan posisi <x,y> 
      * @param c Nilai type habitat yang diciptakan
      * @param x Nilai absis habitat yang diciptakan
      * @param y NIlai ordinat habitat yang diciptakan
      */
    Habitat(char c, int x, int y);
    /** @brief Menampilkan karakter type
      * Jika di habitat terdapat animal maka menampilkan inisial animal ke layar 
      * jika tidak menampilkan type ke layar. 
      */
    void Render();
};

#endif