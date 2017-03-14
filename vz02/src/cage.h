#ifndef CAGE_H
#define CAGE_H

#include <vector>
#include <string>
#include "zooexp.h"
#include "animal.h"

using namespace std;

class Cage
{
	public:
		Cage(int, char);
		void AddAnimal(Animal*);
		void AddCell(char);
		int getId();
		int getLuas();
		int getNbAnimal();
		int getHabitat();
		bool IsAvailable();
		bool IsIsiJinak();
	private:
		int luas;
		const int id;
		const char habitat;
		vector<Animal*> animal;
};
#endif