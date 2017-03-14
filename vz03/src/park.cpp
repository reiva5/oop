#include "park.h"
using namespace std;


Park::Park(int x, int y):Facility('*', x, y) {}

void Park::Render() {
  cout<<"\033[1;32m"<<type<<' '<<"\033[0m";
}