#include <iostream>
#include "animal_handler.h"
using namespace std;

AnimalHandler::AnimalHandler()
{
	n=0;
}

Animal* AnimalHandler::GetAnimal(int id)
{
	return animallist[id];
}

int AnimalHandler::NbAnimal()
{
	return n;
}

AnimalHandler::~AnimalHandler()
{
	for(int i=0; i<animallist.size(); i++)
	{
		delete animallist[i];
	}
}

void AnimalHandler::AddAnimal(Animal* a)
{
	animallist.push_back(a);
	n++;
}

int AnimalHandler::JumlahMakanan()
{
	int sum=0;
	for(int i=0; i<animallist.size(); i++)
	{
		sum+=animallist[i]->getMakanan();
	}
	return sum;
}
