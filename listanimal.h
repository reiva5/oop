#ifndef LISTANIMAL_H
#define LISTANIMAL_H

#include "pemakan.h"
#include "animal.h"
#include <iostream>
using namespace std;

class OrangUtan: public Primate, public Omnivora
{
public:
	OrangUtan();
	OrangUtan(int jml); 
	void interact ();
	int getMakanan();
private:
	string suara;	
	const int defmakanan=5; 
};

class Siamang: public Primate, public Omnivora
{
public:
	Siamang();
	void interact ();
	int getMakanan();
private:
	string suara;
};

class Bekantan: public Primate, public Omnivora
{
public:
	Bekantan();
	void interact();
	int getMakanan();
private:
	string aksi;
};

class BadakCulaSatu: public Perrisodactyl, public Herbivora
{
public:
	BadakCulaSatu();
	void interact();
	int getMakanan();
private:
	string aksi;
};
/*
class Zebra: public Perrisodactyl, public Herbivora
{
public:
	Zebra();
};

class HarimauSumatra: public Carnivore, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};

class Macan: public Carnivore, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};

class Rusa : public Artidactyl, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};

class Kancil: public Artidactyl, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};

class Banteng: public Artidactyl, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};

class Komodo: public Squamata, public Renderable
{
public:
	void render () {
		cout << inisial;
	}
};

class Iguana: public Squamata, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};

class HiuKarpet: public Carcharhiniformes, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};
class HiuMartil: public Carcharhiniformes, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};
class StingRay: public Rajiformes, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};
class MantaRay: public Rajiformes, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};

class Elang: public Falconiformes, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};

class Garuda: public Falconiformes, public Renderable
{
public:
	void render () {
		cout << inisial;
	}	
};

class Kakatua: public Prittaciformes, public Renderable
{
public:
	Kakatua();
	void render () {
		cout << inisial;
	}
};

class Nuri: public Prittaciformes, public Renderable
{
public:
	Nuri();

	void render () {
		cout << inisial;
	}
};

class Parkit: public Prittaciformes, public Renderable
{
public:
	Parkit(); 	

	void render () {
		cout << inisial;
	}};

*/	
#endif

