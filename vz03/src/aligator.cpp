#include "include.h"
using namespace std;

Aligator::Aligator(int i, int x, int y, int massa, bool jinak): 
  Crocodillia('L',i) {
  aksi = "crawl";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Aligator::Interact() 
{
  cout << "Aligator: (" << aksi << ")" << endl;
}
int Aligator::GetJmlMakanan() {
  Karnivora::GetAmount();
}