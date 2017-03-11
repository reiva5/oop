#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal(char c) : inisial(c) {
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
void Animal::render() {
	cout << inisial;
}
vector<char>& Animal::GetHabitat() {
	return type;
}
void Animal::AddHabitat(char c) {
	type.push_back(c);
}

//Habitat Base Class
LandAnimal::LandAnimal(char c) : Animal(c) {
	AddHabitat('x');
}
WaterAnimal::WaterAnimal(char c): Animal(c){
	AddHabitat('w');
}
FlyingAnimal::FlyingAnimal(char c): Animal(c){	
	AddHabitat('o');
}

//ORDO BASE CLASS
Squamata::Squamata(char c): LandAnimal(c) {
}
Primate::Primate(char c) : LandAnimal(c) {
}
Carnivore::Carnivore(char c) : LandAnimal(c){
}
Artiodactyl::Artiodactyl(char c) : LandAnimal(c) {
}
Perrisodactyl::Perrisodactyl(char c): LandAnimal(c) {
}
Crocodillia::Crocodillia(char c): WaterAnimal(c), LandAnimal(c) {
}
Carcharhiniformes::Carcharhiniformes(char c) : WaterAnimal(c) {
}
Rajiformes::Rajiformes(char c): WaterAnimal(c){
}
Falconiformes::Falconiformes(char c): FlyingAnimal(c){
}
Prittaciformes::Prittaciformes(char c): FlyingAnimal(c){
}

