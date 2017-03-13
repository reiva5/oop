#ifndef ANIMAL_H
#define ANIMAL_H 
#include "renderable.h"
#include <vector>

using namespace std;
/** @class Animal
  * Kelas Animal 
  */
class Animal{
public:
	/** @brief Constructor.
	  * @param c Karakter inisial yang diinginkan
	  * @param h Karakter habitat yang diinginkan
	  */
	Animal(char c, int i);
	Animal operator= (const Animal& A);
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
	  * @return type dari animal
	  */
	vector<char> GetType();
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
	int getMakanan();
	/** @brief
	  */
	//void interact();
	/** @brief
	  * @param _ordo adalah jenis ordo yang akan dimasukkan
	  */
	void SetOrdo(string _ordo);
	/** @brief
	  * @return jenis ordo binatang
	  */
	string GetOrdo();
	

private:
	int x;
	int y;
	int massa;
	bool jinak;
	const int ID;
	const char inisial;
	vector<char> type;
	int makanan;
	string ordo;
	Renderable rndr;
};

//Habitat Base Class
/** @class LandAnimal
  * Kelas LandAnimal turunan dari Animal menunjukkan animal yang tinggal di darat
  */
class LandAnimal{
public:
	/** @brief Constructor.
	  * @param c
	  */
	LandAnimal(char c, int i);
private:
	Animal 	a;
};

/** @class WaterAnimal
  * Kelas WaterAnimal turunan dari Animal menunjukkan animal yang tinggal di air
  */
class WaterAnimal{
public:
	/** @brief Constructor.
	  * @param c
	  */
	WaterAnimal(char c, int i);
private:
	Animal a;
};

/** @class FlyingAnimal
  * Kelas FlyingAnimal turunan dari Animal menunjukkan animal yang tinggal di udara
  */
class FlyingAnimal{
public:
	/** @brief Constructor.
	  * @param c
	  */
	FlyingAnimal(char c, int i);
private:
	Animal a;
};

class Land_WaterAnimal{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Land_WaterAnimal(char c, int i);
private:
	Animal a;
};

class Land_AirAnimal{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Land_AirAnimal(char c, int i);
private:
	Animal a;
};

class Water_AirAnimal{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Water_AirAnimal(char c, int i);
private:
	Animal a;
};

//ORDO BASE CLASS

/** @class Squamata
  * Kelas Squamata turunan dari LandAnimal menunjukkan ordo squamata
  */
class Squamata{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Squamata(char c, int i);
private:
	Animal a;
	LandAnimal jenis;
};

/** @class Primate
  * Kelas Primate turunan dari LandAnimal menunjukkan ordo primata
  */
class Primate{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Primate(char c, int i);
private:
	Animal a;
	LandAnimal jenis;
};

/** @class Carnivore
  * Kelas Carnivore turunan dari LandAnimal menunjukkan ordo karnivora
  */
class Carnivore{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Carnivore(char c, int i);
private:
	Animal a;
	LandAnimal jenis;
};

/** @class Artiodactyl
  * Kelas Artiodactyl turunan dari LandAnimal menunjukkan ordo artiodactyl
  * yaitu hewan dengan kuku genap
  */
class Artiodactyl{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Artiodactyl(char c, int i);
private:
	Animal a;
	LandAnimal jenis;
};

/** @class Perrisodactyl
  * Kelas Perrisodactyl turunan dari LandAnimal menunjukkan ordo perrisodactyl
  * yaitu hewan dengan 
  */
class Perrisodactyl{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Perrisodactyl(char c, int i);
private:
	Animal a;
	LandAnimal jenis;
};

/** @class Crocodillia
  * Kelas Crocodillia turunan dari LandAnimal dan WaterAnimal
  * menunjukkan ordo crocodillia yang hidup di dua habitat
  */
class Crocodillia{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Crocodillia(char c, int i);	
private:
	Animal a;
	Land_WaterAnimal jenis;
};

/** @class Carchanhiniformes
  * Kelas Carchanhiniformes turunan dari WaterAnimal menunjukkan ordo hiu
  */
class Carcharhiniformes{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Carcharhiniformes(char c, int i);
private:
	Animal a;
	WaterAnimal jenis;
};

/** @class Rajiformes
  * Kelas Rajiformes turunan dari WaterAnimal menunjukkan ordo pari
  */
class Rajiformes{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Rajiformes(char c, int i);
private:
	Animal a;
	WaterAnimal jenis;
};

/** @class Falconformes
  * Kelas Falconformes turunan dari FlyingAnimal menunjukkan ordo burung besar
  */
class Falconiformes{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Falconiformes(char c, int i);	
private:
	Animal a;
	FlyingAnimal jenis;
};

/** @class Prittaciformes
  * KelasPrittaciiformes turunan dari FlyingAnimal menunjukkan ordo burung kecil 
  */
class Prittaciformes{
public:
	/** @brief Constructor.
	  * @param c
	  */
	Prittaciformes(char c, int i);
private:
	Animal a;
	FlyingAnimal jenis;
};

class AnimalHandler{
	public:
		AnimalHandler();
		Animal* GetAnimal(int);
		int NbAnimal();
		~AnimalHandler();
		void AddAnimal(Animal*);
		int JumlahMakanan();
	private:
		vector<Animal*> animallist;
		int n;
};
#endif
