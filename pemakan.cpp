#include <iostream>
#include "pemakan.h"
using namespace std;


Karnivora::Karnivora(int n) : daging(n) {
}
int Karnivora::GetAmount() {
	return daging;
}

Herbivora::Herbivora(int n): tumbuhan(n) {
}
int Herbivora::GetAmount() {
	return tumbuhan;
}

Omnivora::Omnivora(int n): daging_tumbuhan(n){
}
int Omnivora::GetAmount() {
	return daging_tumbuhan;
}
