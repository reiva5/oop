#include "garuda.h"
using namespace std;

Garuda::Garuda(int i, int x, int y, int massa, bool jinak): 
  Falconiformes('G',i) {
  aksi = "spread wings";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Garuda::Interact() {
  cout << "Garuda: (" << aksi<< ")" << endl;
}
int Garuda::GetJmlMakanan() {
  Karnivora::GetAmount();
}
