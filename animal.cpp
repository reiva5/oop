#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal(char c, int i) : inisial(c) , ID(i) {
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

//Habitat Base Class
LandAnimal::LandAnimal(char c, int i) : Animal(c, i) {
	AddHabitat('x');
}
WaterAnimal::WaterAnimal(char c, int i): Animal(c,i){
	AddHabitat('w');
}
FlyingAnimal::FlyingAnimal(char c, int i): Animal(c,i){	
	AddHabitat('o');
}
Land_WaterAnimal::Land_WaterAnimal(char c, int i) : Animal(c, i) {
	AddHabitat('x');
	AddHabitat('w');
}
Land_AirAnimal::Land_AirAnimal(char c, int i) : Animal(c, i) {
	AddHabitat('x');
	AddHabitat('o');
}
Water_AirAnimal::Water_AirAnimal(char c, int i) : Animal(c, i) {
	AddHabitat('w');
	AddHabitat('o');
}


//ORDO BASE CLASS
Squamata::Squamata(char c, int i): LandAnimal(c,i) {
}
Primate::Primate(char c, int i) : LandAnimal(c,i) {
}
Carnivore::Carnivore(char c, int i) : LandAnimal(c,i){
}
Artiodactyl::Artiodactyl(char c, int i) : LandAnimal(c,i) {
}
Perrisodactyl::Perrisodactyl(char c, int i): LandAnimal(c,i) {
}
Crocodillia::Crocodillia(char c, int i): Land_WaterAnimal(c,i) {
}
Carcharhiniformes::Carcharhiniformes(char c, int i) : WaterAnimal(c,i) {
}
Rajiformes::Rajiformes(char c, int i): WaterAnimal(c,i){
}
Falconiformes::Falconiformes(char c, int i): FlyingAnimal(c,i){
}
Prittaciformes::Prittaciformes(char c, int i): FlyingAnimal(c,i){
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
