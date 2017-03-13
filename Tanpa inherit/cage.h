#ifndef CAGE_h
#define CAGE_h

#include <vector>
#include <string>
#include "listanimal.h"
#include "zooexp.h"

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

class CageHandler
{
	public:
		CageHandler();
		Cage* GetCage(int);
		int NbCage();
		~CageHandler();
		void AddCage(Cage*);
	private:
		vector<Cage*> cagelist;
		int n;
};

#endif