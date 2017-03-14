#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal(int absis, int ordinat, int m, char c, string nama, string interaksi, bool jinak, string habitat, int i) : inisial(c), nama(nama), interaksi(interaksi), jinak(jinak), type(habitat), ID(i)
{
	x=absis;
	y=ordinat;
	massa=m;
}

Animal Animal::operator= (const Animal& A)
{
	x = A.x;
	y = A.y;
	massa = A.massa;
	jinak = A.jinak;
	type = A.type;
	makanan = A.makanan;
	return *this;
}

void Animal::SetJinak(bool _jinak)
{
	jinak = _jinak;
}

bool Animal::IsJinak()
{
	return jinak;
}

int Animal::GetMassa()
{
	return massa;
}

int Animal::GetPosisiX()
{
	return x;
}

int Animal::GetPosisiY()
{
	return y;
}

string Animal::GetType()
{
	return type;
}

void Animal::SetMassa(int kg)
{
	massa = kg;
}

void Animal::SetX(int _x)
{
	x = _x;
}

void Animal::SetY(int _y)
{
	y = _y;
}

char Animal::GetInisial()
{
	return inisial;
}

int Animal::GetID()
{
	return ID;
}

void Animal::render()
{
	cout << "\033[1;31m"<<inisial<<' '<<"\033[0m";
}

string Animal::GetHabitat()
{
	return type;
}

void Animal::AddHabitat(char c)
{
	type.push_back(c);
}

int Animal::getMakanan()
{
	return makanan;
}

void Animal::interact()
{
	cout << nama << ": " << interaksi << endl;
}
