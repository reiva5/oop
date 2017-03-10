#include <bits/stdc++.h>
#include "renderable.h"

using namespace std;

class Cage{
	public:
		// Cage(int n);
		void AddAnimal();
	protected:
		int luas;
		int countAnimal;
		int pintuX;
		int pintuY;
};

class Animal{
	public:
		string interact;
		Cage* cage;
};


class Cell: public Renderable{
	protected:
		Cage* cage;
};

class Zoo{
	protected:
		Cell*** c;
		int width;
		int length;
};

class Habitat: public Cell{
	public:
		char GetHabitat();
		void render();
	protected:
		const char habitat;
};

class LandHabitat: public Habitat{

};

class WaterHabitat: public Habitat{

};

class AirHabitat: public Habitat{

};

class Facility: public Cell{
	public:
		char GetFacility();
		void render();
	protected:
		const char  facility;
};

class Road: public Facility{
	
};

class Park: public Facility{

};

class Restaurant: public Facility{

};

class Entrance: public Road{

};

class Exit: public Road{

};