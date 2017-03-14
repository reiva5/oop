#include "iguana.h"
using namespace std;

Iguana::Iguana(int i, int x, int y, int massa, bool jinak) : Squamata('I',i) {
  suara = "Hiss";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Iguana::Interact() {
  cout <<"Iguana: \"" << suara << "\"" << endl;
}
int Iguana::GetJmlMakanan() {
  Herbivora::GetAmount();
}
