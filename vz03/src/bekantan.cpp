#include "bekantan.h"
using namespace std;

Bekantan::Bekantan(int i, int x, int y, int massa, bool jinak): 
  Primate('B',i) {
  aksi = "climb tree";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Bekantan::Interact() {
  cout << "Bekantan: (" << aksi << ")" << endl;
}
int Bekantan::GetJmlMakanan() {
  Omnivora::GetAmount();
}
