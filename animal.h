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
	Animal(char c, int i);
	void SetJinak(bool _jinak);
	bool IsJinak();
	char GetInisial();
	int GetID();
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
	const int ID;
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
	LandAnimal(char c, int i);
};

/** @class WaterAnimal
  * Kelas WaterAnimal turunan dari Animal menunjukkan animal yang tinggal di air
  */
class WaterAnimal: public Animal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	WaterAnimal(char c, int i);

};

/** @class FlyingAnimal
  * Kelas FlyingAnimal turunan dari Animal menunjukkan animal yang tinggal di udara
  */
class FlyingAnimal: public Animal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	FlyingAnimal(char c, int i);
};

class Land_WaterAnimal: public Animal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Land_WaterAnimal(char c, int i);
};

class Land_AirAnimal: public Animal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Land_AirAnimal(char c, int i);
};

class Water_AirAnimal: public Animal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Water_AirAnimal(char c, int i);
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
	Squamata(char c, int i);
};

/** @class Primate
  * Kelas Primate turunan dari LandAnimal menunjukkan ordo primata
  */
class Primate: public LandAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Primate(char c, int i);
};

/** @class Carnivore
  * Kelas Carnivore turunan dari LandAnimal menunjukkan ordo karnivora
  */
class Carnivore: public LandAnimal {
public:
	/** @brief Constructor.
	  * @param c
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
	  * @param c
	  */
	Artiodactyl(char c, int i);
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
	Perrisodactyl(char c, int i);
};

/** @class Crocodillia
  * Kelas Crocodillia turunan dari LandAnimal dan WaterAnimal
  * menunjukkan ordo crocodillia yang hidup di dua habitat
  */
class Crocodillia: public Land_WaterAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Crocodillia(char c, int i);	
};

/** @class Carchanhiniformes
  * Kelas Carchanhiniformes turunan dari WaterAnimal menunjukkan ordo hiu
  */
class Carcharhiniformes: public WaterAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Carcharhiniformes(char c, int i);
};

/** @class Rajiformes
  * Kelas Rajiformes turunan dari WaterAnimal menunjukkan ordo pari
  */
class Rajiformes: public WaterAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Rajiformes(char c, int i);
};

/** @class Falconformes
  * Kelas Falconformes turunan dari FlyingAnimal menunjukkan ordo burung besar
  */
class Falconiformes: public FlyingAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Falconiformes(char c, int i);	
};

/** @class Prittaciformes
  * KelasPrittaciiformes turunan dari FlyingAnimal menunjukkan ordo burung kecil 
  */
class Prittaciformes: public FlyingAnimal {
public:
	/** @brief Constructor.
	  * @param c
	  */
	Prittaciformes(char c, int i);
};

class AnimalHandler{
	public:
		AnimalHandler();
		Animal* GetAnimal(char, int);
		int NbAnimal();
		~AnimalHandler();
		void AddAnimal(Animal*);
	private:
		vector<Animal*> animallist;
		int n;
};
#endif
