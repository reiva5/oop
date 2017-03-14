#include "elang.h"
using namespace std;

Elang::Elang(int i, int x, int y, int massa, bool jinak): 
  Falconiformes('~',i) {
  suara = "Kaaaak!";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Elang::Interact() {
  cout << "Elang: \"" << suara << "\"" << endl;
}
int Elang::GetJmlMakanan() {
  Karnivora::GetAmount();
}
