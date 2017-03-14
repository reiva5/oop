#include "restaurant.h"
using namespace std;

Restaurant::Restaurant(int x, int y):Facility('R', x, y) {};

void Restaurant::Render() {
  cout<<"\033[1;34m"<<type<<' '<<"\033[0m";
}