#ifndef CAGE_HANDLER_H
#define CAGE_HANDLER_H

#include <vector>
#include "cage.h"

/** @class CageHandler
  * Kelas CageHandler terdiri dari semua cage yang pernah diciptakan
  */
class CageHandler {
  public:
    /** @brief Constructor
      * Menciptakan CageHandler dengan n=0
      */
    CageHandler();
    /** @brief Destructor.
      */
    ~CageHandler();
    /** @brief Getter elemen list_cage
      * @param id Nilai posisi elemen yang ingin didapatkan
      * @return list_cage[id]
      */
    Cage* GetCage(int id);
    /** @brief Mengetahui banyak cage yang diciptakan
      * @return n
      */
    int NbCage();
    /** @brief Menambahkan cage kedalam list_cage
      * @param c elemen yang ingin ditambahkan ke list_cage
      */
    void AddCage(Cage* c);
  
  private:
    vector<Cage*> list_cage;
    int n;
};


#endif