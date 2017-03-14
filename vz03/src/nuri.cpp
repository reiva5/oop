#include "nuri.h"
using namespace std;

Nuri::Nuri(int i, int x, int y, int massa, bool jinak): Prittaciformes('N',i) 
{
  aksi = "play ball";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Nuri::Interact() {
  cout << "Nuri: (" << aksi << ")" << endl;
}
int Nuri::GetJmlMakanan() {
  Herbivora::GetAmount();
}
