#include "zoo.h"
#include <iostream>

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
		cout<<' ';
	}
	else{
		if(cage==NULL)
			cout<<type;
		else
			cout<<char(type-32);
	}
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

Habitat::Habitat(char c): Cell(c) {}

LandHabitat::LandHabitat(): Habitat('x') {}

WaterHabitat::WaterHabitat(): Habitat('w') {}

AirHabitat::AirHabitat(): Habitat('o') {}

Facility::Facility(char c): Cell(c){}

Road::Road():Facility(' ') {}

Park::Park():Facility('*') {}

Restaurant::Restaurant():Facility('R') {};