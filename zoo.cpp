#include "zoo.h"
#include <iostream>
#include <fstream>

using namespace std;

Cell::Cell(char c, int x, int y): type(c), absis(x), ordinat(y){
	cage=NULL;
	animal=NULL;
}

char Cell::getType(){
	return type;
}

void Cell::render(){
	if(animal!=NULL){
		animal->render();
	}
	else{
		if(cage==NULL)
			cout<<type;
		else
			cout<<char(type-32);
	}
}

Cage* Cell::getCage(){
	return cage;
}

void Cell::setCage(Cage* c){
	cage=c;
}

Animal* Cell::getAnimal(){
	return animal;
}

void Cell::setAnimal(Animal* a){
	animal=a;
}

int Cell::GetAbsis()
{
	return absis;
}

int Cell::GetOrdinat()
{
	return ordinat;
}

Zoo::Zoo(int x, int y): width(x), length(y){
	c = new Cell**[length];
	for(int i=0; i<length; i++){
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

Zoo::~Zoo(){
	for(int i=0; i<length;i++){
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
		return entrance[i];
	else
		return NULL;
}

Cell* Zoo::GetExit(int i)
{
	if(i<exit.size())
		return exit[i];
	else
		return NULL;	
}

int Zoo::NbEntrance()
{
	return entrance.size();
}

int Zoo::NbExit()
{
	return exit.size();
}

Habitat::Habitat(char c, int x, int y): Cell(c, x, y) {}

LandHabitat::LandHabitat(int x, int y): Habitat('x', x, y) {}

WaterHabitat::WaterHabitat(int x, int y): Habitat('w', x, y) {}

AirHabitat::AirHabitat(int x, int y): Habitat('o', x, y) {}

Facility::Facility(char c, int x, int y): Cell(c, x, y){}

Road::Road(int x, int y):Facility(' ', x, y), jenis(0){
}

Road::Road(int n, int x, int y): Facility(' ', x, y), jenis(n){
}

int Road::GetJenis(){
	return jenis;
}

Park::Park(int x, int y):Facility('*', x, y) {}

Restaurant::Restaurant(int x, int y):Facility('R', x, y) {};

Entrance::Entrance(int x, int y) : Road(1, x, y) {}

Exit::Exit(int x, int y) : Road(-1, x, y) {}

