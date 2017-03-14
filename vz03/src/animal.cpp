#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal(char c, int i) : inisial(c) , ID(i) {
}
void Animal::SetJinak(bool _jinak) {
  jinak = _jinak;
}
bool Animal::IsJinak() {
  return jinak;
}
int Animal::GetMassa() {
  return massa;
}
int Animal::GetPosisiX() {
  return x;
}
int Animal::GetPosisiY() {
  return y;
}
void Animal::SetMassa(int kg) {
  massa = kg;
}
void Animal::SetX(int _x) {
  x = _x;
}
void Animal::SetY(int _y) {
  y = _y;
}

char Animal::GetInisial(){
  return inisial;
}

int Animal::GetID() {
  return ID;
}
void Animal::Render() {
  cout << "\033[1;31m"<<inisial<<' '<<"\033[0m";
}
vector<char>& Animal::GetHabitat() {
  return type;
}
void Animal::AddHabitat(char c) {
  type.push_back(c);
}