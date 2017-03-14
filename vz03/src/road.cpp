#include "road.h"
using namespace std;

Road::Road(int x, int y):Facility(' ', x, y), jenis(0) {}

Road::Road(int n, int x, int y): Facility(' ', x, y), jenis(n) {}

int Road::GetJenis() {
  return jenis;
}

void Road::Render() {
  cout<<"\033[1;43m"<<type<<' '<<"\033[0m";
}