#include "harimau_sumatra.h"
using namespace std;

HarimauSumatra::HarimauSumatra(int i, int x, int y, int massa, bool jinak): 
  Carnivore('H',i) {
  suara = "AUUM!!";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void HarimauSumatra::Interact() {
  cout <<"Harimau Sumatra: \"" << suara << "\"" << endl;
}
int HarimauSumatra::GetJmlMakanan() {
  Karnivora::GetAmount();
}
