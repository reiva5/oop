#include "zooexp.h"
#include <iostream>

using namespace std;

int ZooExp::n =0;

string ZooExp::msg [] = 
  { "Animal over capacity", 
  "Animal not belong in this habitat", 
  "Cell type and Cage habitat doesn't match",
  "Wild animal must be with its species", 
  "Absis/Ordinat overflow", 
  "No next move found", 
  "You're in an exit", 
  "Can't place animal in this cell"};

ZooExp::ZooExp(int id): msg_id(id) {
  n++;
}

void ZooExp::DispError() {
  cerr<<msg[msg_id]<<endl;
}

int ZooExp::NbExp() {
  return n;
}