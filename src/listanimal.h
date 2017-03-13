#ifndef LISTANIMAL_H
#define LISTANIMAL_H

#include "pemakan.h"
#include "animal.h"
#include <string>

using namespace std;

/** @class OrangUtan
  * Kelas OrangUtan turunan dari kelas Primate dan Omnivora 
  */
class OrangUtan: public Primate, public Omnivora {
public:
  /** @brief Constructor.
    * Menciptakan OrangUtan dengan inisial 'U' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  OrangUtan(int i, int x, int y, int massa, bool jinak); 
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Omnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string suara;  
  const int rasio=15; 
};

/** @class Siamang
  * Kelas Siamang turunan dari kelas Primate dan Omnivora
  */
class Siamang: public Primate, public Omnivora {
public:
  /** @brief Constructor.
    * Menciptakan Siamang dengan inisial 'S' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Siamang(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Omnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string suara;
  const int rasio=5;
};

/** @class Bekantan
  * Kelas Bekantan turunan dari kelas Primate dan Omnivora
  */
class Bekantan: public Primate, public Omnivora {
public:
  /** @brief Constructor.
    * Menciptakan Bekantan dengan inisial 'B' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Bekantan(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Omnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string aksi;
  const int rasio=10; 
};

/** @class BadakCulaSatu
  * Kelas BadakCulaSatu turunan dari Perrisodactyl dan Herbivora 
  */
class BadakCulaSatu: public Perrisodactyl, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan BadakCulaSatu dengan inisial 'C' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  BadakCulaSatu(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=250; 
};

/** @class Zebra
  * Kelas Zebra turunan dari Perrisodactyl dan Herbivora 
  */
class Zebra: public Perrisodactyl, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Zebra inisial 'Z' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Zebra(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=60; 
};

/** @class HarimauSumatra
  * Kelas HarimauSumatra turunan dari Carnivore dan Karnivora 
  */
class HarimauSumatra: public Carnivore, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan HarimauSumatra dengan inisial 'H' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  HarimauSumatra(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string suara;
  const int rasio=12;  
};

/** @class HarimauSumatra
  * Kelas HarimauSumatra turunan dari Carnivore dan Karnivora 
  */
class Macan: public Carnivore, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Macan dengan inisial 'M' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Macan(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=12;
};

/** @class Rusa
  * Kelas Rusa turunan dari Artiodactyl dan Herbivora
  */
class Rusa : public Artiodactyl, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Rusa dengan inisial 'E' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Rusa(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=20;
};

/** @class Kancil
  * Kelas Kancil turunan dari Artiodactyl dan Herbivora
  */
class Kancil: public Artiodactyl, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Kancil dengan inisial 'K' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Kancil(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=2;
};

/** @class Banteng
  * Kelas Banteng turunan dari Artiodactyl dan Herbivora
  */
class Banteng: public Artiodactyl, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Banteng dengan inisial 'A' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Banteng(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=100;
};

/** @class Komodo
  * Kelas Komodo turunan dari Squamata dan Karnivora
  */
class Komodo: public Squamata, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Komodo dengan inisial 'J' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Komodo(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=10;
};

/** @class Iguana
  * Kelas Iguana turunan dari Squamata dan Herbivora
  */
class Iguana: public Squamata, public Herbivora
{
public:
  /** @brief Constructor.
    * Menciptakan Iguana dengan inisial 'I' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Iguana(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string suara;
  const int rasio=8;  
};

/** @class HiuKarpet
  * Kelas HiuKarpet turunan dari Carcharhiniformes dan Karnivora
  */
class HiuKarpet: public Carcharhiniformes, public Karnivora
{
public:
  /** @brief Constructor.
    * Menciptakan HiuKarpet dengan inisial 'V' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  HiuKarpet(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=100;
};

/** @class HiuMartil
  * Kelas HiuMartil turunan dari Carcharhiniformes dan Karnivora
  */
class HiuMartil: public Carcharhiniformes, public Karnivora
{
public:
  /** @brief Constructor.
    * Menciptakan HiuMartil dengan inisial 'T' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  HiuMartil(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=100;
};

/** @class StingRay
  * Kelas StingRay turunan dari Rajiformes dan Karnivora
  */
class StingRay: public Rajiformes, public Karnivora
{
public:
  /** @brief Constructor.
    * Menciptakan StingRay dengan inisial 'Y' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  StingRay(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=10;
};

/** @class MantaRay
  * Kelas MantaRay turunan dari Rajiformes dan Karnivora
  */
class MantaRay: public Rajiformes, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan MantaRay dengan inisial 'Q' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  MantaRay(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=400;
};

/** @class Elang
  * Kelas Elang turunan dari Falconiformes dan Karnivora
  */
class Elang: public Falconiformes, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Elang dengan inisial '~' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Elang(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string suara;
  const int rasio=5;
};

/** @class Garuda
  * Kelas Garuda turunan dari Falconiformes dan Karnivora
  */
class Garuda: public Falconiformes, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Garuda dengan inisial 'G' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Garuda(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=6;
};

/** @class Kakatua
  * Kelas Kakatua turunan dari Prittaciformes dan Herbivora
  */
class Kakatua: public Prittaciformes, public Herbivora
{
public:
  /** @brief Constructor.
    * Menciptakan Kakatua dengan inisial 'P' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Kakatua(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string suara;
  const int rasio=3;
};

/** @class Nuri
  * Kelas Nuri turunan dari Prittaciformes dan Herbivora
  */
class Nuri: public Prittaciformes, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Nuri dengan inisial 'N' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Nuri(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string aksi;
  const int rasio=2;
};

/** @class Parkit
  * Kelas Parkit turunan dari Prittaciformes dan Herbivora
  */
class Parkit: public Prittaciformes, public Herbivora {
public:
  /** @brief Constructor.
    * Menciptakan Parkit dengan inisial 'F' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */  
  Parkit(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan suara binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Herbivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();
private:
  string suara;
  const int rasio=5;
};

/** @class Buaya
  * Kelas Buaya turunan dari Crocodillia dan Karnivora
  */
class Buaya: public Crocodillia, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Buaya dengan inisial 'D' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Buaya(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string aksi;
  const int rasio=200;
  
};

/** @class Aligator
  * Kelas Aligator turunan dari Crocodillia dan Karnivora
  */
class Aligator: public Crocodillia, public Karnivora {
public:
  /** @brief Constructor.
    * Menciptakan Rusa dengan inisial 'L' dan ID i
    * @param i Nilai Id Animal yang diciptakan
    * @param x Posisi x Animal yang diciptakan
    * @param y Posisi y Animal yang diciptakan
    * @param massa berat Animal yang diciptakan
    * @param jinak nilai jinak Animal yang diciptakan
    */
  Aligator(int i, int x, int y, int massa, bool jinak);
  /** @brief Menampilkan aksi binatang ke layar
    */
  void Interact();
  /** @brief Melihat jumlah makanan dari binatang.
    * Memanggil fungsi GetAmount parent Karnivora
    * @return Jumlah makanan dari binatang. 
    */
  int GetJmlMakanan();

private:
  string aksi;
  const int rasio=100;
};

#endif

