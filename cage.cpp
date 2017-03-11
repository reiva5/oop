#include "cage.h"
#include "json.hpp"
#include <fstream>

using namespace std;
using json=nlohmann::json;

Cage::Cage(int _id, char hab): id(_id), habitat(hab)
{
	luas=0;
	pintuX=0;
	pintuY=0;
}

void Cage::AddAnimal(Animal* a)
{
	if(a->IsJinak()){
		if(this->IsIsiJinak()){
			if(this->IsAvailable())
				animal.push_back(a);
			else
				throw ZooExp(0);
		}
		else
			throw ZooExp(3);
	}
	else{
		if(animal[0]->GetInisial()==a->GetInisial()){
			if(this->IsAvailable())
				animal.push_back(a);
			else
				throw ZooExp(0);	
		}
		else
			throw ZooExp(3);
	}
	animal.push_back(a);
} 

void Cage::AddCell(char c)
{
	if(c==this->getHabitat())
		luas++;
	else
		throw ZooExp(2);
}

int Cage::getId()
{
	return id;
}

int Cage::getLuas()
{
	return luas;
}

int Cage::getNbAnimal()
{
	return animal.size();
}

int Cage::getHabitat()
{
	return habitat;
}

bool Cage::IsAvailable()
{
	return(this->getNbAnimal()<((3*luas)/10));
}

bool Cage::IsIsiJinak()
{
	if(animal.size()>0)
		return animal[0]->IsJinak();
	else
		return true;
}

CageHandler::CageHandler()
{
	n=0;
}

Cage* CageHandler::GetCage(int id)
{
	bool found=false;
	int i=0;
	while((!found) && (i<n)){
		if(cagelist[i]->getId()==id)
			found=true;
		else
			i++;
	}
	if(found)
		return cagelist[i];
	else
		return NULL;
}

int CageHandler::NbCage()
{
	return n;
}

CageHandler::~CageHandler()
{
	for(int i=0; i<n; i++){
		delete cagelist[i];
	}
}

void CageHandler::AddCage(Cage* c)
{
	cagelist.push_back(c);
	n++;
}