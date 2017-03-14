#include "zebra.h"
using namespace std;

Zebra::Zebra(int i, int x, int y, int massa, bool jinak): 
  Perrisodactyl('Z',i) {
  aksi = "running";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Zebra::Interact() {
  cout <<"Zebra: (" << aksi << ")" << endl;
}
int Zebra::GetJmlMakanan() {
  Herbivora::GetAmount();
}
