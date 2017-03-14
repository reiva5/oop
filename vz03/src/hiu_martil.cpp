#include "hiu_martil.h"
using namespace std;

HiuMartil::HiuMartil(int i, int x, int y, int massa, bool jinak): 
  Carcharhiniformes('T',i) {
  aksi = "move head";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void HiuMartil::Interact() {
  cout << "Hiu Martil: (" << aksi << ")" << endl;
}
int HiuMartil::GetJmlMakanan() {
  Karnivora::GetAmount();
}
