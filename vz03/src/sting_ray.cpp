#include "sting_ray.h"
using namespace std;

StingRay::StingRay(int i, int x, int y, int massa, bool jinak): 
  Rajiformes('Y',i) {
  aksi = "move fin";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void StingRay::Interact() {
  cout << "StingRay: (" << aksi << ")" << endl;
}
int StingRay::GetJmlMakanan() {
  Karnivora::GetAmount();
}
