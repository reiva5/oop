#include "rusa.h"
using namespace std;

Rusa::Rusa(int i, int x, int y, int massa, bool jinak): Artiodactyl('E',i){
  aksi = "flaunt horn";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Rusa::Interact() {
  cout <<"Rusa: (" << aksi << ")" << endl;
}
int Rusa::GetJmlMakanan() {
  Herbivora::GetAmount();
}
