#include "habitat.h"
using namespace std;

Habitat::Habitat(char c, int x, int y): Cell(c, x, y) {}

void Habitat::Render() {
  if(animal!=NULL){
    animal->Render();
  } else {
    if(cage==NULL)
      cout<<"\033[1;37m"<<type<<' '<<"\033[0m";
    else
      cout<<"\033[1;37m"<<char(type-32)<<' '<<"\033[0m";
  }
}