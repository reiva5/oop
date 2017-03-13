#ifndef LISTANIMAL_H
#define LISTANIMAL_H

#include "pemakan.h"
#include "animal.h"

using namespace std;

/** @class OrangUtan
  * Kelas OrangUtan turunan dari kelas Primate dan Omnivora 
  */
class OrangUtan{
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial binatang di parent Primate 
	  * Menginisiasi jumlah makanan dengan jml di parent Omnivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	OrangUtan();
	OrangUtan(int i, int x, int y, int kg, bool jinak); 
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact ();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Omnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string suara;	
	const int defmakanan=15; 
	Animal a;
	Omnivora _pemakan;
};

/** @class Siamang
  * Kelas Siamang turunan dari kelas Primate dan Omnivora
  */
class Siamang{
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial binatang di parent Primate 
	  * Menginisiasi jumlah makanan dengan jml di parent Omnivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	Siamang();
	Siamang(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact ();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Omnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();


private:
	string suara;
	const int defmakanan=5;
	Animal a;
	Omnivora _pemakan;
};

/** @class Bekantan
  * Kelas Bekantan turunan dari kelas Primate dan Omnivora
  */
class Bekantan{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Primate 
	  * Menginisiasi jumlah makanan dengan jml di parent Omnivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	Bekantan();
	Bekantan(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Omnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=10; 
	Animal a;
	Omnivora _pemakan;
};

/** @class BadakCulaSatu
  * Kelas BadakCulaSatu turunan dari Perrisodactyl dan Herbivora 
  */
class BadakCulaSatu{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Perrisodactyl 
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	BadakCulaSatu();
	BadakCulaSatu(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=250; 
	Animal a;
	Herbivora _pemakan;
};

/** @class Zebra
  * Kelas Zebra turunan dari Perrisodactyl dan Herbivora 
  */
class Zebra{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Perrisodactyl 
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	Zebra();
	Zebra(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=60; 
	Animal a;
	Herbivora _pemakan;
};

/** @class HarimauSumatra
  * Kelas HarimauSumatra turunan dari Carnivore dan Karnivora 
  */
class HarimauSumatra{
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial binatang di parent Carnivore 
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	HarimauSumatra();
	HarimauSumatra(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string suara;
	const int defmakanan=12;
	Animal a;
	Karnivora _pemakan;	
};

/** @class HarimauSumatra
  * Kelas HarimauSumatra turunan dari Carnivore dan Karnivora 
  */
class Macan{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Carnivore 
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Macan();
	Macan(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=12;
	Animal a;
	Karnivora _pemakan;
};

/** @class Rusa
  * Kelas Rusa turunan dari Artiodactyl dan Herbivora
  */
class Rusa{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Artiodactyl
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Rusa();
	Rusa(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=20;
	Animal a;
	Herbivora _pemakan;
};

/** @class Kancil
  * Kelas Kancil turunan dari Artiodactyl dan Herbivora
  */
class Kancil{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Artiodactyl
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Kancil();
	Kancil(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=2;
	Animal a;
	Herbivora _pemakan;
};

/** @class Banteng
  * Kelas Banteng turunan dari Artiodactyl dan Herbivora
  */
class Banteng{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Artiodactyl
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Banteng();
	Banteng(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=100;
	Animal a;
	Herbivora _pemakan;
};

/** @class Komodo
  * Kelas Komodo turunan dari Squamata dan Karnivora
  */
class Komodo{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Squamata
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Komodo();
	Komodo(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=10;
	Animal a;
	Karnivora _pemakan;
};

/** @class Iguana
  * Kelas Iguana turunan dari Squamata dan Herbivora
  */
class Iguana{
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial di parent Squamata
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Iguana();
	Iguana(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string suara;
	const int defmakanan=8;
	Animal a;
	Herbivora _pemakan;	
};

/** @class HiuKarpet
  * Kelas HiuKarpet turunan dari Carcharhiniformes dan Karnivora
  */
class HiuKarpet{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Carcharhiniformes
	  * Menginisiasi jumlah makanan dengan jml di Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  * @param jml Nilai makanan yang diinginkan
	  */
	HiuKarpet();
	HiuKarpet(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=100;
	Animal a;
	Karnivora _pemakan;
};

/** @class HiuMartil
  * Kelas HiuMartil turunan dari Carcharhiniformes dan Karnivora
  */
class HiuMartil{
public:

	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Carcharhiniformes
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	HiuMartil();
	HiuMartil(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=100;
	Animal a;
	Karnivora _pemakan;
};

/** @class StingRay
  * Kelas StingRay turunan dari Rajiformes dan Karnivora
  */
class StingRay{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Rajiformes
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	StingRay();
	StingRay(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=10;
	Animal a;
	Karnivora _pemakan;
};

/** @class MantaRay
  * Kelas MantaRay turunan dari Rajiformes dan Karnivora
  */
class MantaRay{
public:

	/** @brief Constructor. 
	  * Menginisiasi aksi. Menginisiasi inisial di parent Rajiformes
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	MantaRay();
	MantaRay(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=400;
	Animal a;
	Karnivora _pemakan;
};

/** @class Elang
  * Kelas Elang turunan dari Falconiformes dan Karnivora
  */
class Elang{
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial di parent Falconiformes.
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Elang();
	Elang(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string suara;
	const int defmakanan=5;
	Animal a;
	Karnivora _pemakan;
};

/** @class Garuda
  * Kelas Garuda turunan dari Falconiformes dan Karnivora
  */
class Garuda{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Falconiformes
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Garuda();
	Garuda(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=6;
	Animal a;
	Karnivora _pemakan;
};

/** @class Kakatua
  * Kelas Kakatua turunan dari Prittaciformes dan Herbivora
  */
class Kakatua{
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial di parent Prittaciformes
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Kakatua();
	Kakatua(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string suara;
	const int defmakanan=3;
	Animal a;
	Herbivora _pemakan;
};

/** @class Nuri
  * Kelas Nuri turunan dari Prittaciformes dan Herbivora
  */
class Nuri{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Prittaciformes
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Nuri();
	Nuri(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=2;
	Animal a;
	Herbivora _pemakan;
};

/** @class Parkit
  * Kelas Parkit turunan dari Prittaciformes dan Herbivora
  */
class Parkit{
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial di parent Prittaciformes 
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */ 	
	Parkit();
	Parkit(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string suara;
	const int defmakanan=5;
	Animal a;
	Herbivora _pemakan;
};

/** @class Buaya
  * Kelas Buaya turunan dari Crocodillia dan Karnivora
  */
class Buaya{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Crocodillia
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Buaya();
	Buaya(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=200;
	Animal a;
	Karnivora _pemakan;	
};

/** @class Aligator
  * Kelas Aligator turunan dari Crocodillia dan Karnivora
  */
class Aligator{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Crocodillia 
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkab
	  */
	Aligator();
	Aligator(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
	/** @brief Memanggil alamat dari binatang
	  * @return alamat dari letak Animal
	  */
	Animal GetAnimal();

private:
	string aksi;
	const int defmakanan=100;
	Animal a;
	Karnivora _pemakan;
};

#endif

