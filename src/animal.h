#ifndef ANIMAL_H
#define ANIMAL_H 
#include "renderable.h"
#include <vector>

using namespace std;

/** @class Animal
  * Kelas Animal representasi binatang dengan posisi, massa dan ketentuan jinak.
  */
class Animal: public Renderable {
public:
  /** @brief Constructor.
    * @param c Nilai inisial Animal yang ingin diciptakan
    * @param i Nilai ID Animal yang ingin diciptakan
    */
  Animal(char c, int i);
  /** @brief Setter jinak
    * @param _jinak Nilai jinak Animal yang ingin dimasukkan 
    */
  void SetJinak(bool _jinak);
  /** @brief Mengecek apakah animal jinak
    * @return jinak
    */
  bool IsJinak();
  /** @brief Getter inisial
    * @return inisial
    */
  char GetInisial();
  /** @brief Getter ID
    * @return ID
    */
  int GetID();
  /** @brief Getter massa
    * @return massa
    */
  int GetMassa();
  /** @brief Getter posisi x
    * @return x
    */
  int GetPosisiX();
  /** @brief Getter posisi y
    * @return y
    */
  int GetPosisiY();
  /** @brief Setter massa
    * @param kg Nilai massa animal yang ingin dimasukkan
    */
  void SetMassa(int kg);
  /** @brief Setter x
    * @param _x Nilai posisi x animal yang ingin dimasukkan
    */
  void SetX(int _x);
  /** @brief Setter y
    * @param _y Nilai posisi y animal yang ingin dimasukkan
    */
  void SetY(int _y);
  /** @brief Menampilkan karakter inisial dari animal ke layar
    */
  void Render();
  /** @brief Getter type
    * @return type
    */
  vector<char>& GetHabitat();
  /** @brief Menambahkan c kedalam type
    * @param c nilai habitat animal yang ingin ditambahkan ke type
    */
  void AddHabitat(char c);
  /** @brief Getter jumlah makanan animal
    * @return Nilai makanan yang diperlukan animal
    */
  virtual int GetJmlMakanan() = 0;
  /** @brief Menampilkan interaksi dari animal
    * Menampilkan interaksi animal ke layar 
    */
  virtual void Interact() = 0;
  

private:
  int x;
  int y;
  int massa;
  bool jinak;
  const int ID;
  const char inisial;
  vector<char> type;
};

//Habitat Base Class
/** @class LandAnimal
  * Kelas LandAnimal turunan dari Animal 
  * menunjukkan animal yang tinggal di darat
  */
class LandAnimal: public Animal {
public:
  /** @brief Constructor.
    * Menciptakan LandAnimal menciptakan Animal berinisial c dan ID i.
    * @param c inisial LandAnimal yang ingin diciptakan
    * @param i ID LandAnimal yang ingin diciptakan
    */
  LandAnimal(char c, int i);
};

/** @class WaterAnimal
  * Kelas WaterAnimal turunan dari Animal 
  * menunjukkan animal yang tinggal di air
  */
class WaterAnimal: public Animal {
public:
  /** @brief Constructor.
    * Menciptakan WaterAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial WaterAnimal yang ingin diciptakan
    * @param i ID WaterAnimal yang ingin diciptakan
    */
  WaterAnimal(char c, int i);

};

/** @class FlyingAnimal
  * Kelas FlyingAnimal turunan dari Animal 
  * menunjukkan animal yang tinggal di udara
  */
class FlyingAnimal: public Animal {
public:
/** @brief Constructor.
    * Menciptakan FlyingAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial FlyingAnimal yang ingin diciptakan
    * @param i ID FlyingAnimal yang ingin diciptakan
    */
  FlyingAnimal(char c, int i);
};

/** @class Land_WaterAnimal
  * Kelas Land_WaterAnimal turunan dari Animal.
  */
class Land_WaterAnimal: public Animal {
public:
/** @brief Constructor.
    * Menciptakan Lan_WaterdAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial Land_WaterAnimal yang ingin diciptakan
    * @param i ID Land_WaterAnimal yang ingin diciptakan
    */
  Land_WaterAnimal(char c, int i);
};

/** @class Land_AirAnimal
  * Kelas Land_AirAnimal turunan dari Animal.
  */
class Land_AirAnimal: public Animal {
public:
/** @brief Constructor.
    * Menciptakan Land_AirAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial Land_AirAnimal yang ingin diciptakan
    * @param i ID Land_AirAnimal yang ingin diciptakan
    */
  Land_AirAnimal(char c, int i);
};

/** @class WaterAnimal
  * Kelas WaterAnimal turunan dari Animal.
  */
class Water_AirAnimal: public Animal {
/** @brief Constructor.
    * Menciptakan Water_AirAnimal dengan cara memanggil 
    * constructor Animal berinisial c dan ID i.
    * @param c inisial Water_AirAnimal yang ingin diciptakan
    * @param i ID Water_AirAnimal yang ingin diciptakan
    */
  Water_AirAnimal(char c, int i);
};

/** @class Squamata
  * Kelas Squamata turunan dari LandAnimal menunjukkan ordo squamata
  */
class Squamata: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Squamata dengan cara memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Squamata yang ingin diciptakan
    * @param i ID Squamata yang ingin diciptakan
    */
  Squamata(char c, int i);
};

/** @class Primate
  * Kelas Primate turunan dari LandAnimal menunjukkan ordo primata
  */
class Primate: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Primate dengan memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Primate yang ingin diciptakan
    * @param i ID Primate yang ingin diciptakan
    */
  Primate(char c, int i);
};

/** @class Carnivore
  * Kelas Carnivore turunan dari LandAnimal menunjukkan ordo karnivora
  */
class Carnivore: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Carnivore dengan memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Carnivore yang ingin diciptakan
    * @param i ID Carnivore yang ingin diciptakan
    */
  Carnivore(char c, int i);
};

/** @class Artiodactyl
  * Kelas Artiodactyl turunan dari LandAnimal menunjukkan ordo artiodactyl
  * yaitu hewan dengan kuku genap
  */
class Artiodactyl: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Artiodactyl dengan memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Artiodactyl yang ingin diciptakan
    * @param i ID Artiodactyl yang ingin diciptakan
    */
  Artiodactyl(char c, int i);
};

/** @class Perrisodactyl
  * Kelas Perrisodactyl turunan dari LandAnimal
  * yaitu hewan dengan 
  */
class Perrisodactyl: public LandAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Perrisodactyl dengan memanggil 
    * constructor LandAnimal berinisial c dan ID i.
    * @param c inisial Perrisodactyl yang ingin diciptakan
    * @param i ID Perrisodactyl yang ingin diciptakan
    */
  Perrisodactyl(char c, int i);
};

/** @class Crocodillia
  * Kelas Crocodillia turunan dari Land_WaterAnimal
  */
class Crocodillia: public Land_WaterAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Crocodilla dengan memanggil 
    * constructor Land_WaterAnimal berinisial c dan ID i.
    * @param c inisial Crocodilla yang ingin diciptakan
    * @param i ID Crocodilla yang ingin diciptakan
    */
  Crocodillia(char c, int i);  
};

/** @class Carchanhiniformes
  * Kelas Carchanhiniformes turunan dari WaterAnimal menunjukkan ordo hiu
  */
class Carcharhiniformes: public WaterAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Carcharhiniformes dengan memanggil 
    * constructor WaterAnimal berinisial c dan ID i.
    * @param c inisial Carcharhiniformes yang ingin diciptakan
    * @param i ID Carcharhiniformes yang ingin diciptakan
    */
  Carcharhiniformes(char c, int i);
};

/** @class Rajiformes
  * Kelas Rajiformes turunan dari WaterAnimal menunjukkan ordo pari
  */
class Rajiformes: public WaterAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Rajiformes dengan memanggil 
    * constructor WaterAnimal berinisial c dan ID i.
    * @param c inisial Rajiformes yang ingin diciptakan
    * @param i ID Rajiformes yang ingin diciptakan
    */
  Rajiformes(char c, int i);
};

/** @class Falconformes
  * Kelas Falconformes turunan dari FlyingAnimal
  */
class Falconiformes: public FlyingAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Falconiformes dengan memanggil 
    * constructor FlyingAnimal berinisial c dan ID i.
    * @param c inisial Falconiformes yang ingin diciptakan
    * @param i ID Falconiformes yang ingin diciptakan
    */
  Falconiformes(char c, int i);  
};

/** @class Prittaciformes
  * Kelas Prittaciiformes turunan dari FlyingAnimal
  */
class Prittaciformes: public FlyingAnimal {
public:
  /** @brief Constructor.
    * Menciptakan Prittaciformes dengan memanggil 
    * constructor FlyingAnimal berinisial c dan ID i.
    * @param c inisial Prittaciformes yang ingin diciptakan
    * @param i ID Prittaciformes yang ingin diciptakan
    */
  Prittaciformes(char c, int i);
};


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