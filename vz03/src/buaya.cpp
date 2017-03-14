#include "buaya.h"
using namespace std;

Buaya::Buaya(int i, int x, int y, int massa, bool jinak): Crocodillia('D',i) {
  aksi = "open mouth";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Buaya:: Interact() {
  cout <<"Buaya: ("<< aksi << ")" << endl;
}
int Buaya::GetJmlMakanan() {
  Karnivora::GetAmount();
}
