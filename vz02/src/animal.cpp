#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal(char c, int i) : inisial(c) , ID(i) {
}
Animal Animal::operator= (const Animal& A){
	x=A.x;
	y=A.y;
	massa=A.massa;
	jinak=A.jinak;
	type=A.type;
	makanan=A.makanan;
	ordo=A.ordo;
	return *this;
}
void Animal::SetJinak(bool _jinak) {
	jinak = _jinak;
}
bool Animal::IsJinak() {
	return jinak;
}
int Animal::GetMassa() {
	return massa;
}
int Animal::GetPosisiX() {
	return x;
}
int Animal::GetPosisiY() {
	return y;
}
vector<char> Animal::GetType(){
	return type;
}
void Animal::SetMassa(int kg) {
	massa = kg;
}
void Animal::SetX(int _x) {
	x = _x;
}
void Animal::SetY(int _y) {
	y = _y;
}

char Animal::GetInisial(){
	return inisial;
}

int Animal::GetID(){
	return ID;
}
void Animal::render() {
	cout << "\033[1;31m"<<inisial<<' '<<"\033[0m";
}
vector<char>& Animal::GetHabitat() {
	return type;
}
void Animal::AddHabitat(char c) {
	type.push_back(c);
}
int Animal::getMakanan(){
	return makanan;
}
void Animal::SetOrdo(string _ordo){
	ordo=_ordo;
}
string Animal::GetOrdo(){
	return ordo;
}

//Habitat Base Class
LandAnimal::LandAnimal(char c, int i) : a(c, i) {
	a.AddHabitat('x');
}
WaterAnimal::WaterAnimal(char c, int i): a(c,i){
	a.AddHabitat('w');
}
FlyingAnimal::FlyingAnimal(char c, int i): a(c,i){	
	a.AddHabitat('o');
}
Land_WaterAnimal::Land_WaterAnimal(char c, int i) : a(c, i) {
	a.AddHabitat('x');
	a.AddHabitat('w');
}
Land_AirAnimal::Land_AirAnimal(char c, int i) : a(c, i) {
	a.AddHabitat('x');
	a.AddHabitat('o');
}
Water_AirAnimal::Water_AirAnimal(char c, int i) : a(c, i) {
	a.AddHabitat('w');
	a.AddHabitat('o');
}

AnimalHandler::AnimalHandler()
{
	n=0;
}

Animal* AnimalHandler::GetAnimal(int id)
{
	return animallist[id];
}

int AnimalHandler::NbAnimal(){
	return n;
}

AnimalHandler::~AnimalHandler(){
	for(int i=0; i<n; i++){
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
