#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal(char c) : inisial(c) {
}
Animal::~Animal() {
}
void Animal::render() {
	cout << inisial;

}

//Habitat Base Class
LandAnimal::LandAnimal(char c) : Animal(c) {
}
WaterAnimal::WaterAnimal(char c): Animal(c){
}
FlyingAnimal::FlyingAnimal(char c): Animal(c){	
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
//Crocodillia::Crocodillia(char c): WaterAnimal(c){
//}
Carcharhiniformes::Carcharhiniformes(char c) : WaterAnimal(c) {
}
Rajiformes::Rajiformes(char c): WaterAnimal(c){
}
Falconiformes::Falconiformes(char c): FlyingAnimal(c){
}
Prittaciformes::Prittaciformes(char c): FlyingAnimal(c){
}

