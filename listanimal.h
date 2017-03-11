#ifndef LISTANIMAL_H
#define LISTANIMAL_H

#include "pemakan.h"
#include "animal.h"

using namespace std;

/** @class OrangUtan
  * Kelas OrangUtan turunan dari kelas Primate dan Omnivora 
  */
class OrangUtan: public Primate, public Omnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial binatang di parent Primate 
	  * Menginisiasi jumlah makanan dengan jml di parent Omnivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	OrangUtan(int i, int x, int y, int kg, bool jinak); 
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact ();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Omnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();

private:
	string suara;	
	const int defmakanan=15; 
};

/** @class Siamang
  * Kelas Siamang turunan dari kelas Primate dan Omnivora
  */
class Siamang: public Primate, public Omnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial binatang di parent Primate 
	  * Menginisiasi jumlah makanan dengan jml di parent Omnivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	Siamang(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact ();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Omnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();

private:
	string suara;
	const int defmakanan=6;
};

/** @class Bekantan
  * Kelas Bekantan turunan dari kelas Primate dan Omnivora
  */
class Bekantan: public Primate, public Omnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Primate 
	  * Menginisiasi jumlah makanan dengan jml di parent Omnivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	Bekantan(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Omnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();

private:
	string aksi;
	const int defmakanan=5; 
};

/** @class BadakCulaSatu
  * Kelas BadakCulaSatu turunan dari Perrisodactyl dan Herbivora 
  */
class BadakCulaSatu: public Perrisodactyl, public Herbivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Perrisodactyl 
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	BadakCulaSatu(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=4; 
};

/** @class Zebra
  * Kelas Zebra turunan dari Perrisodactyl dan Herbivora 
  */
class Zebra: public Perrisodactyl, public Herbivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Perrisodactyl 
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora 
	  * @param jml Nilai makanan yang diinginkan
	  */
	Zebra(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=3; 
};

/** @class HarimauSumatra
  * Kelas HarimauSumatra turunan dari Carnivore dan Karnivora 
  */
class HarimauSumatra: public Carnivore, public Karnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial binatang di parent Carnivore 
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	HarimauSumatra(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string suara;
	const int defmakanan=10;	
};

/** @class HarimauSumatra
  * Kelas HarimauSumatra turunan dari Carnivore dan Karnivora 
  */
class Macan: public Carnivore, public Karnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Carnivore 
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Macan(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=9;
};

/** @class Rusa
  * Kelas Rusa turunan dari Artiodactyl dan Herbivora
  */
class Rusa : public Artiodactyl, public Herbivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Artiodactyl
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Rusa(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=4;
};

/** @class Kancil
  * Kelas Kancil turunan dari Artiodactyl dan Herbivora
  */
class Kancil: public Artiodactyl, public Herbivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Artiodactyl
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Kancil(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=2;
};

/** @class Banteng
  * Kelas Banteng turunan dari Artiodactyl dan Herbivora
  */
class Banteng: public Artiodactyl, public Herbivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial binatang di parent Artiodactyl
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Banteng(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=5;
};

/** @class Komodo
  * Kelas Komodo turunan dari Squamata dan Karnivora
  */
class Komodo: public Squamata, public Karnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Squamata
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Komodo(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=10;
};

/** @class Iguana
  * Kelas Iguana turunan dari Squamata dan Herbivora
  */
class Iguana: public Squamata, public Herbivora
{
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial di parent Squamata
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Iguana(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string suara;
	const int defmakanan=10;	
};

/** @class HiuKarpet
  * Kelas HiuKarpet turunan dari Carcharhiniformes dan Karnivora
  */
class HiuKarpet: public Carcharhiniformes, public Karnivora
{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Carcharhiniformes
	  * Menginisiasi jumlah makanan dengan jml di Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  * @param jml Nilai makanan yang diinginkan
	  */
	HiuKarpet(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=10;
};

/** @class HiuMartil
  * Kelas HiuMartil turunan dari Carcharhiniformes dan Karnivora
  */
class HiuMartil: public Carcharhiniformes, public Karnivora
{
public:

	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Carcharhiniformes
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	HiuMartil(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=10;
};

/** @class StingRay
  * Kelas StingRay turunan dari Rajiformes dan Karnivora
  */
class StingRay: public Rajiformes, public Karnivora
{
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Rajiformes
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	StingRay(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=10;
};

/** @class MantaRay
  * Kelas MantaRay turunan dari Rajiformes dan Karnivora
  */
class MantaRay: public Rajiformes, public Karnivora {
public:

	/** @brief Constructor. 
	  * Menginisiasi aksi. Menginisiasi inisial di parent Rajiformes
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	MantaRay(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=10;
};

/** @class Elang
  * Kelas Elang turunan dari Falconiformes dan Karnivora
  */
class Elang: public Falconiformes, public Karnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial di parent Falconiformes.
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Elang(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string suara;
	const int defmakanan=10;
};

/** @class Garuda
  * Kelas Garuda turunan dari Falconiformes dan Karnivora
  */
class Garuda: public Falconiformes, public Karnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Falconiformes
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Garuda(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=10;
};

/** @class Kakatua
  * Kelas Kakatua turunan dari Prittaciformes dan Herbivora
  */
class Kakatua: public Prittaciformes, public Herbivora
{
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial di parent Prittaciformes
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Kakatua(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();

private:
	string suara;
	const int defmakanan=10;
};

/** @class Nuri
  * Kelas Nuri turunan dari Prittaciformes dan Herbivora
  */
class Nuri: public Prittaciformes, public Herbivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Prittaciformes
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Nuri(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string aksi;
	const int defmakanan=10;
};

/** @class Parkit
  * Kelas Parkit turunan dari Prittaciformes dan Herbivora
  */
class Parkit: public Prittaciformes, public Herbivora {
public:
	/** @brief Constructor.
	  * Menginisiasi suara. Menginisiasi inisial di parent Prittaciformes 
	  * Menginisiasi jumlah makanan dengan jml di parent Herbivora
	  * @param jml Nilai makanan yang diinginkan
	  */ 	
	Parkit(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan suara binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Herbivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();
private:
	string suara;
	const int defmakanan=10;
};

/** @class Buaya
  * Kelas Buaya turunan dari Crocodillia dan Karnivora
  */
class Buaya: public Crocodillia, public Karnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Crocodillia
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkan
	  */
	Buaya(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();

private:
	string aksi;
	const int defmakanan=10;
	
};

/** @class Aligator
  * Kelas Aligator turunan dari Crocodillia dan Karnivora
  */
class Aligator: public Crocodillia, public Karnivora {
public:
	/** @brief Constructor.
	  * Menginisiasi aksi. Menginisiasi inisial di parent Crocodillia 
	  * Menginisiasi jumlah makanan dengan jml di parent Karnivora
	  * @param jml Nilai makanan yang diinginkab
	  */
	Aligator(int i, int x, int y, int kg, bool jinak);
	/** @brief Menampilkan aksi binatang ke layar
	  */
	void interact();
	/** @brief Melihat jumlah makanan dari binatang.
	  * Memanggil fungsi GetAmount parent Karnivora
	  * @return Jumlah makanan dari binatang. 
	  */
	int getMakanan();

private:
	string aksi;
	const int defmakanan= 10;
};

#endif

