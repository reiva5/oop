#ifndef ANIMAL_H
#define ANIMAL_H 
//#include "zoo.h"


class Renderable
{
public:
	virtual void render() = 0;
};

class Animal: public Renderable
{
public:
	Animal(char c);
	~Animal();
	void render();
	virtual int getMakanan() = 0;
	virtual void interact() = 0;
private:
	const char inisial;
};

//Habitat Base Class
class LandAnimal: public Animal
{
public:
	LandAnimal(char c);
};

class WaterAnimal: public Animal
{
public:
	WaterAnimal(char c);
};

class FlyingAnimal: public Animal
{
public:
	FlyingAnimal(char c);
};

//ORDO BASE CLASS

class Squamata: public LandAnimal
{
public:
	Squamata(char c);
};

class Primate: public LandAnimal
{
public:
	Primate(char c);
};

class Carnivore: public LandAnimal
{
public:
	Carnivore(char c);
};

class Artiodactyl: public LandAnimal
{
public:
	Artiodactyl(char c);
};

class Perrisodactyl: public LandAnimal
{
public:
	Perrisodactyl(char c);
};

class Crocodillia: public LandAnimal, public WaterAnimal
{
public:
	Crocodillia(char c);	
};

class Carcharhiniformes: public WaterAnimal
{
public:
	Carcharhiniformes(char c);
};

class Rajiformes: public WaterAnimal
{
public:
	Rajiformes(char c);
};

class Falconiformes: public FlyingAnimal
{
public:
	Falconiformes(char c);	
};

class Prittaciformes: public FlyingAnimal
{
public:
	Prittaciformes(char c);
};

#endif
