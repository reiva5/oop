#ifndef CELL_h
#define CELL_h

#include <bits/stdc++.h>
#include "renderable.h"
#include "zooexp.h"
#include "cage.h"
using namespace std;

class Cell: public Renderable
{
	public:
		Cell(char, int, int);

		char GetType();

		/* Method mencari posisi */
		int GetAbsis();
		int GetOrdinat();

		/* Method setter dan getter untuk cage */
		Cage* GetCage();
		void SetCage(Cage*);

		/* Method setter dan getter untuk animal */
		Animal* GetAnimal();
		void SetAnimal(Animal*);

		/* Method setter dan getter untuk habitat */
		char* GetHabitat();
		void SetHabitat(char*);

		/* Method setter dan getter untuk facility */
		char* GetFacility();
		void SetFacility(char*);

		/* Method render */
		void Render();

	protected:
		Animal* animal;
		Cage* cage;
		char* Facility;
		char* Habitat;
		const char type;
		const int absis;
		const int ordinat;
};

#endif