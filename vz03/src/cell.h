#ifndef CELL_H
#define CELL_H

#include "cage.h"
#include "animal.h"
#include "zooexp.h"
#include <bits/stdc++.h>
using namespace std;


/** @class Cell
  * Kelas Cell menyimpan informasi cage dan animal inherit kelas Renderable 
  */
class Cell: public Renderable {
  public:
    /** @brief Constructor.
      * Menciptakan Cell kosong dengan type c, posisi <x,y>. 
      * @param c Nilai type Cell yang ingin dibuat
      * @param x Nilai absis Cell yang ingin dibuat
      * @param y Nilai ordinat Cell yang ingin dibuat
      */
    Cell(char c, int x, int y);
    /** @brief Menampilkan type cell
      * Menuliskan type dari cell ke layar
      */
    virtual void Render();
    /** @brief Getter type
      * @return type 
      */
    char GetType();
    /** @brief Getter cage
      * @return cage 
      */
    Cage* GetCage();
    /** @brief Setter cage. Merubah nilai cage dari cell
      * @param c Nilai cage yang ingin dimasukkan kedalam cell
      */
    void SetCage(Cage* c);
    /** @brief Getter Animal
      * @return animal
      */
    Animal* GetAnimal();
    /** @brief Setter animal. Merubah nilai animal dari cell
      * @param a Nilai animal yang ingin dimasukkan kedalam cell
      */
    void SetAnimal(Animal* a);
    /** @brief Getter absis
      * @return absis
      */
    int GetAbsis();
    /** @brief Getter absis
      * @return absis
      */
    int GetOrdinat();

  protected:
    Cage* cage;
    Animal* animal;
    const char type;
    const int absis;
    const int ordinat;
};

#endif
