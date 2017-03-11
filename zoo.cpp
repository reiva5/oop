#include "zoo.h"
#include <iostream>
#include <fstream>

using namespace std;

Cell::Cell(char c): type(c){
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

Habitat::Habitat(char c): Cell(c) {}

LandHabitat::LandHabitat(): Habitat('x') {}

WaterHabitat::WaterHabitat(): Habitat('w') {}

AirHabitat::AirHabitat(): Habitat('o') {}

Facility::Facility(char c): Cell(c){}

Road::Road():Facility(' ') {}

Park::Park():Facility('*') {}

Restaurant::Restaurant():Facility('R') {};