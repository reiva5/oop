#include "zooexp.h"
#include <iostream>

using namespace std;

int ZooExp::n =0;

string ZooExp::msg [] = {"Animal over capacity", "Animal not in its habitat", "Cell type and Cage habitat doesn't match",
	"Wild animal must be with its species"};

ZooExp::ZooExp(int id): msg_id(id) {
	n++;
}

void ZooExp::DispError()
{
	cerr<<msg[msg_id]<<endl;
}

int ZooExp::NbExp(){
	return n;
}