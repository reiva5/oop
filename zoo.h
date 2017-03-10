#ifndef ZOO_h
#define ZOO_h

#include <bits/stdc++.h>
#include "renderable.h"
#include "cage.h"

using namespace std;

class Cell: public Renderable{
	public:
		Cell(char c);
		void render();
		char getType();
	protected:
		Cage* cage;
		Animal* animal;
		const char type;
};

class Zoo{
	public:
		Zoo(int, int);
		void SetCell(int, int, Cell*);
		Cell* GetCell(int x, int y);
	protected:
		Cell*** c;
		const int width;
		const int length;
};

class Habitat: public Cell{
	public:
		Habitat(char c);
};

class LandHabitat: public Habitat{
	public:
		LandHabitat();
};

class WaterHabitat: public Habitat{
	public:
		WaterHabitat();
};

class AirHabitat: public Habitat{
	public:
		AirHabitat();
};

class Facility: public Cell{
	public:
		Facility(char c);
};

class Road: public Facility{
	public:
		Road();
};

class Park: public Facility{
	public:
		Park();
};

class Restaurant: public Facility{
	public:
		Restaurant();
};

class Entrance: public Road{

};

class Exit: public Road{

};

#endif