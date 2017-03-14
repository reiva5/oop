#include "banteng.h"
using namespace std;

Banteng::Banteng(int i, int x, int y, int massa, bool jinak):
  Artiodactyl('A',i) {
  aksi = "snort";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Banteng::Interact() {
  cout <<"Banteng: ("<< aksi << ")" << endl;
}
int Banteng::GetJmlMakanan() {
  Herbivora::GetAmount();
}
