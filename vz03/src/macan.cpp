#include "macan.h"
using namespace std;

Macan::Macan(int i, int x, int y, int massa, bool jinak) : Carnivore('M', i) {
  aksi = "stalk prey";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Macan::Interact() {
  cout <<"Macan: (" << aksi << ")" << endl;
}
int Macan::GetJmlMakanan() {
  Karnivora::GetAmount();
}
