#include <iostream>
#include "pemakan.h"
using namespace std;

void Karnivora::SetAmount(int n) {
	daging = n;
}
int Karnivora::GetAmount() {
	return daging;
}

void Herbivora::SetAmount(int n) {
	tumbuhan = n;
}
int Herbivora::GetAmount() {
	return tumbuhan;
}

void Omnivora::SetAmount(int n) {
	daging_tumbuhan = n;
}
int Omnivora::GetAmount() {
	return daging_tumbuhan;
}
