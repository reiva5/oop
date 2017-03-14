#include "hiu_karpet.h"
using namespace std;

HiuKarpet::HiuKarpet(int i, int x, int y, int massa, bool jinak): 
  Carcharhiniformes('V',i) {
  aksi = "burying in sand";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void HiuKarpet::Interact() {
  cout << "Hiu Karpet: (" << aksi << ")" << endl;
}
int HiuKarpet::GetJmlMakanan() {
  Karnivora::GetAmount();
}
