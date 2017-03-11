#ifndef ANIMAL_H
#define ANIMAL_H 
#include "renderable.h"
#include <vector>

using namespace std;
/** @class Animal
  * Kelas Animal 
  */
class Animal: public Renderable
{
public:
	/** @brief Constructor.
	  * @param c Karakter inisial yang diinginkan
	  * @param h Karakter habitat yang diinginkan
	  */
	Animal(char c);
	void SetJinak(bool _jinak);
	bool IsJinak();
	int GetMassa();
	/** @brief Mengembalikan posisi binatang di x
	  * @return Nilai x
	  */
	int GetPosisiX();
	/** @brief Mengembalikan posisi binatang di y
	  * @return Nilai x
	  */
	int GetPosisiY();
	/** @brief
	  */
	void SetMassa(int kg);
	/** @brief Merubah nilai x 
	  * @param _x Nilai x yang akan dimasukkan  
	  */
	void SetX(int _x);
	/** @brief Merubah nilai y
	  * @param _y Nilaii y yang akan dimasukkan
	  */
	void SetY(int _y);
	/** @brief Menampilkan karakter inisial dari binatang ke layar
	  */
	void render();
	vector<char>& GetHabitat();
	void AddHabitat(char c);
	/** @brief
	  * @return Nilai makanan yang diperlukan binatang
	  */
	virtual int getMakanan() = 0;
	/** @brief
	  */
	virtual void interact() = 0;
	

private:
	int x;
	int y;
	int massa;
	bool jinak;
	const char inisial;
	vector<char> type;
};

//Habitat Base Class
/** @class LandAnimal
  * Kelas LandAnimal turunan dari Animal menunjukkan animal yang tinggal di darat
  */
class LandAnimal: public Animal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	LandAnimal(char c);
};

/** @class WaterAnimal
  * Kelas WaterAnimal turunan dari Animal menunjukkan animal yang tinggal di air
  */
class WaterAnimal: public Animal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	WaterAnimal(char c);

};

/** @class FlyingAnimal
  * Kelas FlyingAnimal turunan dari Animal menunjukkan animal yang tinggal di udara
  */
class FlyingAnimal: public Animal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	FlyingAnimal(char c);
};

//ORDO BASE CLASS

/** @class Squamata
  * Kelas Squamata turunan dari LandAnimal menunjukkan ordo squamata
  */
class Squamata: public LandAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Squamata(char c);
};

/** @class Primate
  * Kelas Primate turunan dari LandAnimal menunjukkan ordo primata
  */
class Primate: public LandAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Primate(char c);
};

/** @class Carnivore
  * Kelas Carnivore turunan dari LandAnimal menunjukkan ordo karnivora
  */
class Carnivore: public LandAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Carnivore(char c);
};

/** @class Artiodactyl
  * Kelas Artiodactyl turunan dari LandAnimal menunjukkan ordo artiodactyl
  * yaitu hewan dengan kuku genap
  */
class Artiodactyl: public LandAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Artiodactyl(char c);
};

/** @class Perrisodactyl
  * Kelas Perrisodactyl turunan dari LandAnimal menunjukkan ordo perrisodactyl
  * yaitu hewan dengan 
  */
class Perrisodactyl: public LandAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Perrisodactyl(char c);
};

/** @class Crocodillia
  * Kelas Crocodillia turunan dari LandAnimal dan WaterAnimal
  * menunjukkan ordo crocodillia yang hidup di dua habitat
  */
class Crocodillia: public LandAnimal, public WaterAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Crocodillia(char c);	
};

/** @class Carchanhiniformes
  * Kelas Carchanhiniformes turunan dari WaterAnimal menunjukkan ordo hiu
  */
class Carcharhiniformes: public WaterAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Carcharhiniformes(char c);
};

/** @class Rajiformes
  * Kelas Rajiformes turunan dari WaterAnimal menunjukkan ordo pari
  */
class Rajiformes: public WaterAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Rajiformes(char c);
};

/** @class Falconformes
  * Kelas Falconformes turunan dari FlyingAnimal menunjukkan ordo burung besar
  */
class Falconiformes: public FlyingAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Falconiformes(char c);	
};

/** @class Prittaciformes
  * KelasPrittaciiformes turunan dari FlyingAnimal menunjukkan ordo burung kecil 
  */
class Prittaciformes: public FlyingAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Prittaciformes(char c);
};

#endif
