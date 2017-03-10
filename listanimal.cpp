#include <iostream>
#include "listanimal.h"

using namespace std;
OrangUtan::OrangUtan(): Primate('O'), Omnivora(defmakanan){
	suara = "Auooo";
}
OrangUtan::OrangUtan(int jml): Primate('O'), Omnivora(jml) {
	suara = "Auooo";
}
void OrangUtan::interact() {
	cout << suara;
}
int OrangUtan::getMakanan() {
	Omnivora::GetAmount();
}

Siamang::Siamang(): Primate('S'), Omnivora(17){
	suara = "Ooo Ooo";
}
void Siamang::interact() {
	cout << suara;
}
int Siamang::getMakanan() {
	Omnivora::GetAmount();
}

Bekantan::Bekantan(): Primate('B'), Omnivora(23) {
	aksi = "makan pisang";
}
void Bekantan::interact() {
	cout << aksi;
}
int Bekantan::getMakanan() {
	Omnivora::GetAmount();
}

BadakCulaSatu::BadakCulaSatu(): Perrisodactyl('C'), Herbivora(3) {
	aksi = "makan rumput";
}
void BadakCulaSatu::interact() {
	cout << aksi;
}
int BadakCulaSatu::getMakanan() {
	Herbivora::GetAmount();
}






