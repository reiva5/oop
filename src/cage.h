#ifndef CAGE_h
#define CAGE_h

#include <vector>
#include <string>
#include "listanimal.h"
#include "zooexp.h"

using namespace std;

/** @class Cage
  * Kelas Cage terdiri dari animal dengan luas, id, dan habitat tertentu
  * Representasi kumpulan cage dengan habitat sejenis
  */
class Cage {
  public:
    /** @brief Constructor.
      * Menciptakan Cage dengan id _id dan habitat hab 
      * @param _id Nilai id Cage yang ingin diciptakan
      * @param hab Nilai habitat Cage yang ingin diciptakan
      */
    Cage(int _id, char hab);
    /** @brief Menambahkan elemen ke animal
      * @param a elemen yang ingin ditambahkan ke animal
      */
    void AddAnimal(Animal* a);
    /** @brief Menambahkan cell
      * Penambahan cell akan menambah luas dari cage 
      * @param c Habitat 
      */
    void AddCell(char c);
    /** @brief Getter id
      * @return id
      */
    int GetId();
    /** @brief Getter luas
      * @return luas
      */
    int GetLuas();
    /** @brief Mengembalikan banyaknya elemen animal
      * @return size dari animal
      */
    int GetNbAnimal();
    /** @brief Getter habitat
      * @return habitat
      */
    char GetHabitat();
    /** @brief Mengetahui apakah cage available 
      * Mengecek apakah cage dapat ditambahkan elemen animal
      * @return Apakah cage availabe
      */
    bool IsAvailable();
    /** @brief Mengetahui apakah elemen animal jinak
      * @return Apakah semua elemen animal jinak
      */
    bool IsIsiJinak();

  private:
    int luas;
    const int id;
    const char habitat;
    vector<Animal*> animal;
};

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