#include "cage.h"

using namespace std;

Cage::Cage(int _id, char hab): id(_id), habitat(hab) {
  luas = 0;
}

void Cage::AddAnimal(Animal* a) {
  bool feasible = false;
  int i = 0;

  while((!feasible)&& i<(a->GetHabitat()).size()) {
    if((a->GetHabitat())[i]==this->GetHabitat())
      feasible=true;
    else
      i++;
  }

  if(feasible) {
    if(animal.size()==0) {
      animal.push_back(a);
    } else {
        if(a->IsJinak()) {
          if(this->IsIsiJinak()) {
            if(this->IsAvailable())
              animal.push_back(a);
            else
              throw ZooExp(0);
          } else
              throw ZooExp(3);
      } else {
          if(animal[0]->GetInisial()==a->GetInisial()) {
            if(this->IsAvailable())
              animal.push_back(a);
            else
              throw ZooExp(0);  
          } else
              throw ZooExp(3);
      }  
    }
  } else
      throw ZooExp(1);  
} 

void Cage::AddCell(char c) {
  if(c==this->GetHabitat())
    luas++;
  else
    throw ZooExp(2);
}

int Cage::GetId() {
  return id;
}

int Cage::GetLuas() {
  return luas;
}

int Cage::GetNbAnimal() {
  return animal.size();
}

char Cage::GetHabitat() {
  return habitat;
}

bool Cage::IsAvailable() {
  return(this->GetNbAnimal()<((3*luas)/10));
}

bool Cage::IsIsiJinak() {
  bool found=false;
  int i=0;
  while((!found) && i<animal.size()) {
    if(!(animal[i]->IsJinak()))
      found=true;
    else
      i++;
  }
  return !found;
}

