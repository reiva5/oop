#include "siamang.h"
using namespace std;

Siamang::Siamang(int i, int x, int y, int massa, bool jinak):
  Primate('S',i) {
  suara = "Ooo Ooo";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Siamang::Interact() {
  cout << "Siamang: \"" << suara << "\"" << endl;
}
int Siamang::GetJmlMakanan() {
  Omnivora::GetAmount();
}
