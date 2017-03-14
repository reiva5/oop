#include "include.h"
using namespace std;

BadakCulaSatu::BadakCulaSatu(int i, int x, int y, int massa, bool jinak): 
  Perrisodactyl('C', i) {
  aksi = "bathing in mud";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void BadakCulaSatu::Interact() {
  cout <<"Badak Cula Satu: (" << aksi << ")" << endl;
}
int BadakCulaSatu::GetJmlMakanan() {
  Herbivora::GetAmount();
}
