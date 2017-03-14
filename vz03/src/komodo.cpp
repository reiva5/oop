#include "komodo.h"
using namespace std;

Komodo::Komodo(int i, int x, int y, int massa, bool jinak) : Squamata('J',i){
  aksi = "stick tongue";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Komodo::Interact() {
  cout <<"Komodo: (" << aksi << ")" << endl;
}
int Komodo::GetJmlMakanan() {
  Karnivora::GetAmount();
}
