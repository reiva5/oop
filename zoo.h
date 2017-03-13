#ifndef ZOO_h
#define ZOO_h

#include <bits/stdc++.h>
#include "renderable.h"
#include "cage.h"
#include "zooexp.h"

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

  protected:
    Cell*** c;
    const int width;
    const int length;
    vector<Cell*> entrance;
    vector<Cell*> exit;
};

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

/** @class LandHabitat
  * Kelas LandHabitat inherit kelas Habitat tempat hewan yang hidup di darat
  */
class LandHabitat: public Habitat {
  public:
    /** @brief Constructor
      * Menciptakan Land Habitat dengan memanggil 
      * constructor Habitat bertype 'x', dan posisi <x,y>
      * @param x Nilai absis LandHabitat yang diciptakan
      * @param y Nilai ordinat LandHabitat yang diciptakan 
      */
    LandHabitat(int x, int y);
};

/** @class WaterHabitat
  * Kelas WaterHabitat inherit dari kelas Habitat tempat hewan yang hidup di air
  */
class WaterHabitat: public Habitat {
  public:
    /** @brief Constructor
      * Menciptakan WaterHabitat dengan memanggil 
      * constructor Habitat bertype 'w', dan posisi <x,y>
      * @param x Nilai absis WaterHabitat yang diciptakan
      * @param y Nilai ordinat WaterHabitat yang diciptakan 
      */
    WaterHabitat(int x, int y);
};

/** @class AirHabitat
  * Kelas AirHabitat inherit dari kelas Habitat tempat hewan yang hidup di udara
  */
class AirHabitat: public Habitat {
  public:
    /** @brief Constructor
      * Menciptakan AirHabitat dengan memanggil 
      * constructor Habitat bertype 'o', dan posisi <x,y>
      * @param x Nilai absis AirHabitat yang diciptakan
      * @param y Nilai ordinat AirHabitat yang diciptakan 
      */
    AirHabitat(int x, int y);
};

/** @class Facility
  * Kelas Facility inherit dari kelas Cell, merepresentasikan fasilitas zoo
  */
class Facility: public Cell {
  public:

    Facility(char c, int x, int y);
    virtual void Render();
};

/** @class Park
  * Kelas Park inherit dari kelas Facility, fasilitas berupa taman
  */
class Park: public Facility {
  public:
    /** @brief Constructor
      * Menciptakan Park dengan memanggil 
      * constructor Facility bertype '*' posisi <x,y>
      * @param x Nilai absis Park yang diciptakan
      * @param y Nilai ordinat Park yang diciptakan 
      */
    Park(int x,int y);
    /** @brief Menampilkan type 
      * Menampilkan karakter type ke layar dengan warna hijau
      */
    void Render();
};

/** @class Restaurant
  * Kelas Restaurant inherit dari kelas Facility, fasilitas berupa restaurant
  */
class Restaurant: public Facility {
  public:
    /** @brief Constructor
      * Menciptakan Restaurant dengan memanggil 
      * constructor Facility bertype 'R' posisi <x,y>
      * @param x Nilai absis Restaurant yang diciptakan
      * @param y Nilai ordinat Restaurant yang diciptakan 
      */
    Restaurant(int x, int y);
    /** @brief Menampilkan type
      * Menampilkan karakter type ke layar dengan warna biru
      */
    void Render();
};

/** @class Road
  * Kelas Road inherit dari kelas Facility, fasilitas berupa jalan di dalam zoo
  */
class Road: public Facility {
  public:
    /** @brief Constructor
      * Menciptakan Road dengan jenis=0, memanggil
      * constructor Facility bertype ' ' posisi <x,y>
      * @param x Nilai absis Road yang diciptakan
      * @param y Nilai ordinat Road yang diciptakan 
      */
    Road(int x,int y);
    /** @brief Constructor
      * Menciptakan Road dengan jenis = n, memanggil 
      * constructor Facility bertype ' ' posisi <x,y>
      * @param x Nilai absis Road yang diciptakan
      * @param y Nilai ordinat Road yang diciptakan 
      * @param n Nilai jenis Road yang diciptakan
      */
    Road(int n, int x, int y);
    /** @brief Getter jenis
      * @return jenis 
      */
    int GetJenis();
    /** @brief Menampilkan type
      * Menampilkan karakter type ke layar dengan warna kuning
      */
    void Render();
  private:
    const int jenis;
};


/** @class Entrance
  * Kelas Entrance inherit dari kelas Road, sebagai tempat masuk Zoo
  */
class Entrance: public Road {
  public:
    /** @brief Constructor
      * Menciptakan Entrance dengan memanggil 
      * constructor Road yang memiliki posisi <x,y>
      * @param x Nilai absis Road yang diciptakan
      * @param y Nilai ordinat Road yang diciptakan 
      */
    Entrance(int x, int y);
};

/** @class Exit
  * Kelas Exit inherit dari kelas Road, sebagai tempat keluar Zoo
  */
class Exit: public Road {
  public:
    /** @brief Constructor
      * Menciptakan Exit dengan memanggil 
      * constructor Road yang memiliki posisi <x,y>
      * @param x Nilai absis Road yang diciptakan
      * @param y Nilai ordinat Road yang diciptakan 
      */
    Exit(int x, int y);
};

#endif