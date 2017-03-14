#include "kancil.h"
using namespace std;

Kancil::Kancil(int i, int x, int y, int massa, bool jinak): Artiodactyl('K',i){
  aksi = "eat cucumber";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Kancil::Interact() {
  cout <<"Kancil: (" << aksi << ")" << endl;
}
int Kancil::GetJmlMakanan() {
  Herbivora::GetAmount();
}
