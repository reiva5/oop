#include <bits/stdc++.h>
#include "renderable.h"
#include "cell.h"
#include "cage.h"
#include "zooexp.h"

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
	cage = c;
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
		if (this->GetAnimal() == NULL)
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


