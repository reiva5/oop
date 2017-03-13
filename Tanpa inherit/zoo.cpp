#include "zoo.h"
#include <iostream>
#include <fstream>

using namespace std;

Cell::Cell(char c, int x, int y): type(c), absis(x), ordinat(y)
{
	cage = NULL;
	animal = NULL;
	Facility = NULL;
	Habitat = NULL;
}

char Cell::GetType()
{
	return type;
}

/* Method getter untuk mengambil posisi */
int Cell::GetAbsis()
{
	return absis;
}

int Cell::GetOrdinat()
{
	return ordinat;
}

/* Method setter dan getter untuk cage */
Cage* Cell::GetCage()
{
	return cage;
}

void Cell::SetCage(Cage* c)
{
	if (Habitat != NULL)
	{
		cage = c;
	}
}

/* Method setter dan getter untuk animal */
Animal* Cell::GetAnimal()
{
	return animal;
}

void Cell::SetAnimal(Animal* a)
{
	if (a == NULL)
	{
		animal = NULL;
	}
	else
	{
		if (this->GetAnimal() == NULL && this->cage != NULL)
		{
			animal = a;
		}
		else
		{
			throw ZooExp(7);
		}
	}
}

/* Method setter dan getter untuk habitat */
char* Cell::GetHabitat()
{
	if (Habitat != NULL)
	{
		if (Habitat[0] == 'w' || Habitat[0] == 'W')
		{
			cout << "Water";
		}
		else if (Habitat[0] == 'o' || Habitat[0] == 'O')
		{
			cout << "Air";
		}
		else if (Habitat[0] == 'x' || Habitat[0] == 'X')
		{
			cout << "Land";
		}
		return Habitat;
	}
}

void Cell::SetHabitat(char* s)
{
	Habitat = s;
}

/* Method setter dan getter untuk facility */
char* Cell::GetFacility()
{
	return Facility;
}

void Cell::SetFacility(char* f)
{
	if (Habitat == NULL)
	{
		Facility = f;
	}
}

void Cell::Render()
{
	if (Facility != NULL)
	{
		if (*Facility == 'R')
		{
			cout<<"\033[1;34m"<<type<<' '<<"\033[0m";
		}
		else if (*Facility == ' ')
		{
			cout<<"\033[1;43m"<<type<<' '<<"\033[0m";
		}
		else if (*Facility == '*')
		{
			cout<<"\033[1;32m"<<type<<' '<<"\033[0m";	
		}
	}
	else if (Habitat != NULL)
	{
		if (animal != NULL)
		{
			animal->render();
		}
		else
		{
			if (cage == NULL)
			{
				cout<<"\033[1;37m"<<type<<' '<<"\033[0m";
			}
			else
			{
				cout<<"\033[1;37m"<<char(type-32)<<' '<<"\033[0m";
			}
		}	
	}
}


Zoo::Zoo(int x, int y): width(x), length(y)
{
	c = new Cell**[length];
	for(int i=0; i<length; i++)
	{
		c[i]= new Cell*[width];
	}
}

void Zoo::SetCell(int x, int y, Cell* cell)
{
	c[y][x]=cell;
}

Cell* Zoo::GetCell(int x, int y)
{
	return c[y][x];
}

Zoo::~Zoo()
{
	for(int i=0; i<length;i++)
	{
		delete [] c[i];
	}
	delete [] c;
}

int Zoo::GetWidth()
{
	return width;
}

int Zoo::GetLength()
{
	return length;
}

void Zoo::AddEntrance(Cell* c)
{
	entrance.push_back(c);
}

void Zoo::AddExit(Cell* c)
{
	exit.push_back(c);
}

Cell* Zoo::GetEntrance(int i)
{
	if(i<entrance.size())
	{
		return entrance[i];
	}
	else
	{
		return NULL;
	}
}

Cell* Zoo::GetExit(int i)
{
	if (i<exit.size())
	{
		return exit[i];
	}
	else
	{
		return NULL;	
	}
}

int Zoo::NbEntrance()
{
	return entrance.size();
}

int Zoo::NbExit()
{
	return exit.size();
}