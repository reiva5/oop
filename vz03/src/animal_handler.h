#ifndef ANIMALHANDLER_h
#define ANIMALHANDLER_h

#include "include.h"
using namespace std;

/** @class AnimalHandler
  * Kelas AnimalHandler terdiri atas list animal yang pernah diciptakan
  */
class AnimalHandler {
  public:
    /** @brief Constructor.
      * inisiasi n dengan 0.
      */
    AnimalHandler();
    /** @brief Destructor.
      */
    ~AnimalHandler();
    /** @brief Getter elemen animal
      * @param id nilai id animal yang ingin diketahui
      * @return animalist[id]
      */
    Animal* GetAnimal(int id);
    /** @brief Mengetahui jumlah animal
      * @return n
      */
    int NbAnimal();
    /** @brief Menambahkan animal kedalam list_animal
      * @param a Animal yang ingin ditambahkan ke list_animal
      */
    void AddAnimal(Animal* a);
    /** @brief Mengembalikan jumlah makanan dari seluruh animal
      * Mengiterasi list_animal dan menjumlahkan makanan dari tiap animal
      * @return jumlah makanan dari seluruh animal
      */
    int JumlahMakanan();

  private:
    vector<Animal*> list_animal;
    int n;
};

#endif