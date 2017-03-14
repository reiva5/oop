#include "cell.h"

using namespace std;

Cell::Cell(char c, int x, int y): type(c), absis(x), ordinat(y) {
  cage=NULL;
  animal=NULL;
}

char Cell::GetType() {
  return type;
}

void Cell::Render() {
  cout<<type<<endl;
}

Cage* Cell::GetCage() {
  return cage;
}

void Cell::SetCage(Cage* c) {
  cage=c;
}

Animal* Cell::GetAnimal() {
  return animal;
}

void Cell::SetAnimal(Animal* a) {
  if(a==NULL)
    animal = NULL;
  else{
    if(this->GetAnimal()==NULL)
      animal = a;
    else
      throw ZooExp(7);
  }
}

int Cell::GetAbsis() {
  return absis;
}

int Cell::GetOrdinat() {
  return ordinat;
}