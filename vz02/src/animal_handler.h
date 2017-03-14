#ifndef ANIMAL_HANDLER_H
#define ANIMAL_HANDLER_H 
#include "renderable.h"
#include <vector>
#include <bits/stdc++.h>
#include "animal.h"

using namespace std;
/** @class AnimalHandler
  * Kelas AnimalHandler
  */
class AnimalHandler
{
	public:
		AnimalHandler();
		Animal* GetAnimal(int);
		int NbAnimal();
		~AnimalHandler();
		void AddAnimal(Animal*);
		int JumlahMakanan();
	private:
		vector<Animal*> animallist;
		int n;
};
#endif
