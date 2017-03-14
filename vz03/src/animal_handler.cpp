#include "animal_handler.h"
using namespace std;

AnimalHandler::AnimalHandler() {
  n=0;
}

Animal* AnimalHandler::GetAnimal(int id) {
  return list_animal[id];
}

int AnimalHandler::NbAnimal() {
  return n;
}

AnimalHandler::~AnimalHandler() {
  for(int i=0; i<n; i++){
    delete list_animal[i];
  }
}

void AnimalHandler::AddAnimal(Animal* a) {
  list_animal.push_back(a);
  n++;
}

int AnimalHandler::JumlahMakanan() {
  int sum = 0;
  for(int i=0; i<list_animal.size(); i++) {
    sum+=list_animal[i]->GetJmlMakanan();
  }
  return sum;
}
