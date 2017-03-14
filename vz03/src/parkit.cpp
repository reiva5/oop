#include "include.h"
using namespace std;

Parkit::Parkit(int i, int x, int y, int massa, bool jinak): 
  Prittaciformes('F',i) {
  suara = "cuit cuit";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Parkit::Interact() {
  cout << "Parkit: \"" << suara << "\"" << endl;
}
int Parkit::GetJmlMakanan() {
  Herbivora::GetAmount();
}