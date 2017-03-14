#ifndef DRIVER_h
#define DRIVER_h

#include "include.h"

/** @class Driver
  * Kelas Driver berfungsi menginisiasi Program Utama
  */
class Driver {
  public:
    /** @brief Constructor.
      * Menciptakan kelas driver dengan informasi dari file eksternal
      */
    Driver();
    /** @brief Copy Constructor
      * Mengcopy d ke current object, Mencegah terjadinya bit wise copy
      * @param d Driver yang akan dicopy ke current object
      */
    Driver(const Driver& d);
    /** @brief Operator Assignment
      * Menimpa nilai current object dengan d
      * @param d Driver yang akan dimasukkan nilainya ke current object
      * @return current object yang bernilai d
      */
    Driver& operator= (const Driver& d);
    /** @brief Destructor.
      */
    ~Driver();
    /** @brief Menginisiasi Zoo
      * Membaca file eksternal dan membaca isinya untuk mengisi Zoo
      * @param z Kelas Zoo yang akan diciptakan
      * @param ch CageHandler yang setiap cagenya akan diisi cell
      */
    void InitZoo(Zoo** z, CageHandler& ch);
    /** @brief Menginisiasi Cage
      * Membaca file eksternal dan membaca isinya untuk membuat cage
      * @param ch CageHandler yang diisi oleh cage
      */
    void InitCage(CageHandler& ch);
    /** @brief Menginisiasi Animal
      * Membaca file eksternal dan membaca isinya untuk membuat animal
      * @param ah AnimalHandler yang diisi oleh animal
      * @param z Zoo yang akan diisi oleh animal
      */
    void InitAnimal(AnimalHandler& ah, Zoo& z);
    /** @brief Menampilkan Zoo
      * Menampilkan isi dari Zoo ke layar 
      */
    void DisplayVirtualZoo(Zoo&);
    /** @brief Menginisiasi posisi user di Zoo
      * Menginisiasi curr_x dan curr_y secara random
      */
    void InitPosition(Zoo&);
    /** @brief Getter posisi x dari user
      * @return curr_x
      */
    int GetPosX();
    /** @brief Getter posisi y dari user
      * @return curr_y
      */
    int GetPosY();
    /** @brief Melakukan tour dalam Zoo
      * Memindahkan posisi x dan y dari user sesuai jalan di zoo
      * Menampilkan setiap interaksi dengan animal yang dilalui saat tour
      */
    void TourVirtualZoo(Zoo&);
    /** @brief Memindahkan posisi animal
      * @param z Zoo yang animalnya akan dipindahkan
      * @param ah list dari semua animal
      */
    void MoveAnimal(Zoo& z, AnimalHandler& ah);

  private:
    int curr_x;
    int curr_y;
    bool** visited;
    int map_width;
    int map_length;
};

#endif
