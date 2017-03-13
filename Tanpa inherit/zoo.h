#ifndef ZOO_h
#define ZOO_h

#include <bits/stdc++.h>
#include "renderable.h"
#include "cage.h"
#include "zooexp.h"

using namespace std;

class Cell: public Renderable{
	public:
		Cell(char, int, int);
		virtual void render();
		char getType();
		Cage* getCage();
		void setCage(Cage*);
		Animal* getAnimal();
		void setAnimal(Animal*);
		int GetAbsis();
		int GetOrdinat();
	protected:
		Cage* cage;
		Animal* animal;
		const char type;
		const int absis;
		const int ordinat;
};

class Zoo{
	public:
		Zoo(int, int);
		void SetCell(int, int, Cell*);
		Cell* GetCell(int x, int y);
		~Zoo();
		int GetWidth();
		int GetLength();
		void AddEntrance(Cell*);
		void AddExit(Cell*);
		Cell* GetEntrance(int);
		Cell* GetExit(int);
		int NbEntrance();
		int NbExit();

	protected:
		Cell*** c;
		const int width;
		const int length;
		vector<Cell*> entrance;
		vector<Cell*> exit;
};

class Habitat: public Cell{
	public:
		Habitat(char, int, int);
		void render();
};

class LandHabitat: public Habitat{
	public:
		LandHabitat(int, int);
};

class WaterHabitat: public Habitat{
	public:
		WaterHabitat(int, int);
};

class AirHabitat: public Habitat{
	public:
		AirHabitat(int, int);
};

class Facility: public Cell{
	public:
		Facility(char, int, int);
		virtual void render();
};

class Road: public Facility{
	public:
		Road(int,int);
		Road(int, int, int);
		int GetJenis();
		void render();
	private:
		const int jenis;
};

class Park: public Facility{
	public:
		Park(int,int);
		void render();
};

class Restaurant: public Facility{
	public:
		Restaurant(int, int);
		void render();
};

class Entrance: public Road{
	public:
		Entrance(int, int);
};

class Exit: public Road{
	public:
		Exit(int, int);
};

#endif