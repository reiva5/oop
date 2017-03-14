#include "kakatua.h"
using namespace std;

Kakatua::Kakatua(int i, int x, int y, int massa, bool jinak): 
  Prittaciformes ('P',i) {
  suara = "Hello! kwak!";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Kakatua::Interact() {
  cout << "Kakatua: \"" << suara << "\"" << endl;
}
int Kakatua::GetJmlMakanan() {
  Herbivora::GetAmount();
}
