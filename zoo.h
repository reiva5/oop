#ifndef ZOO_h
#define ZOO_h

#include <bits/stdc++.h>
#include "renderable.h"
#include "cage.h"

using namespace std;
/** @class Cell
  * Kelas Cell dengan pointer cage dan animal
  */
class Cell: public Renderable{
	public:
		/** @brief Constructor.
		  * Menciptakan cell dengan sebuah type c.
		  * @param c nilai karakter yang merepresentasikan type habitat
		  */
		Cell(char c);
		/** @brief Menampilkan type cell.
		  *	Menuliskan type ke layar.
		  */
		void render();
		/** @brief Mengembalikan type cell.
		  *	@return karakter type cell.
		  */
		char getType();

	protected:
		Cage* cage;
		Animal* animal;
		const char type;
};

/** @class Zoo
  * Kelas Zoo berisi kumpulan Cell
  */
class Zoo{
	public:
		/** @brief Constructor.
		  *	Menciptakan zoo yang memiliki lebar dan panjang tertentu.
		  * @param x Nilai lebar yang diinginkan.
		  * @param y Nilai panjang yang diinginkan.
		  */
		Zoo(int x, int y);
		/** @brief Menampilkan type cell.
		  *	@param x
		  * @param y
		  * @param cell 
		  */
		void SetCell(int x, int y, Cell* cell);
		/** @brief Menampilkan type cell.
		  * @param x
		  * @param y
		  *	@return 
		  */
		Cell* GetCell(int x, int y);

	protected:
		Cell*** c;
		const int width;
		const int length;
};

/** @class Habitat
  * Kelas Habitat turunan dari cell dapat memiliki Animal
  */
class Habitat: public Cell{
	public:
		/** @brief Constructor.
		  * Menciptakan cell dengan sebuah type c.
		  * @param c nilai karakter yang merepresentasikan type habitat
		  */
		Habitat(char c);
};

/** @class LandHabitat
  * Kelas LandHabitat turunan dari kelas Habitat yang merepresentasikan habitat darat
  */
class LandHabitat: public Habitat{
	public:
		/** @brief Constructor.
		  * Menginisiasi type di parent Habitat
		  */
		LandHabitat();
};

/** @class WaterHabitat
  * Kelas WaterHabitat turunan dari kelas Habitat yang merepresentasikan habitat air
  */
class WaterHabitat: public Habitat{
	public:
		/** @brief Constructor.
		  * Menginisiasi type di parent Habitat
		  */
		WaterHabitat();
};

/** @class AirHabitat
  * Kelas AirHabitat turunan dari kelas Habitat yang merepresentasikan habitat udara
  */
class AirHabitat: public Habitat{
	public:
		/** @brief Constructor.
		  * Menginisiasi type di parent Habitat
		  */
		AirHabitat();
};

/** @class Facility
  * Kelas Facility turunan dari kelas Cell untuk mendukung fasilitas Zoo
  */
class Facility: public Cell{
	public:
		/** @brief Constructor.
		  * Menciptakan cell dengan sebuah type c.
		  * @param c nilai karakter yang merepresentasikan type habitat
		  */
		Facility(char c);
};

/** @class Road
  * Kelas Road turunan dari kelas Facility dapat dilewati oleh pengunjung
  */
class Road: public Facility{
	public:
		/** @brief Constructor.
		  * Menginisiasi type di parent Habitat
		  */
		Road();
};

/** @class Park
  * Kelas Park turunan dari kelas Facility
  */
class Park: public Facility{
	public:
		/** @brief Constructor.
		  * Menginisiasi type di parent Habitat
		  */
		Park();
};

/** @class Restaurant
  * Kelas Restaurant turunan dari kelas Facility 
  */
class Restaurant: public Facility{
	public:
		/** @brief Constructor.
		  * Menginisiasi type di parent Habitat
		  */
		Restaurant();
};

/** @class Entrance
  * Kelas Entrance turunan dari kelas Road berfungsi untuk masuk ke Zoo
  */
class Entrance: public Road{

};

/** @class Exit
  * Kelas Exit turunan dari kelas Road berfungsi untuk keluar dari Zoo
  */
class Exit: public Road{

};

#endif