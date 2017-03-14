#include "orang_utan.h"
using namespace std;

OrangUtan::OrangUtan(int i, int x, int y, int massa, bool jinak): 
  Primate('U',i) {
  suara = "Auooo";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void OrangUtan::Interact() {
  cout << "Orang Utan: \""<< suara <<"\""<< endl;
}
int OrangUtan::GetJmlMakanan() {
  Omnivora::GetAmount();
}
