#include "manta_ray.h"
using namespace std;

MantaRay::MantaRay(int i, int x, int y, int massa, bool jinak): 
  Rajiformes('Q',i) {
  aksi = "swim! jump!";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void MantaRay::Interact() {
  cout << "MantaRay: (" << aksi<< ")" << endl;
}
int MantaRay::GetJmlMakanan() {
  Karnivora::GetAmount();
}
