#include <iostream>
#include "listanimal.h"
using namespace std;

OrangUtan::OrangUtan(int x, int y, int kg, bool jinak): Primate('U') {
	suara = "Auooo";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void OrangUtan::interact() {
	cout << suara;
}
int OrangUtan::getMakanan() {
	Omnivora::GetAmount();
}

Siamang::Siamang(int x, int y, int kg, bool jinak): Primate('S') {
	suara = "Ooo Ooo";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Siamang::interact() {
	cout << suara;
}
int Siamang::getMakanan() {
	Omnivora::GetAmount();
}

Bekantan::Bekantan(int x, int y, int kg, bool jinak): Primate('B'){
	aksi = "climb tree";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Bekantan::interact() {
	cout << aksi;
}
int Bekantan::getMakanan() {
	Omnivora::GetAmount();
}

BadakCulaSatu::BadakCulaSatu(int x, int y, int kg, bool jinak): Perrisodactyl('C') {
	aksi = "bathing in mud";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void BadakCulaSatu::interact() {
	cout << aksi;
}
int BadakCulaSatu::getMakanan() {
	Herbivora::GetAmount();
}

Zebra::Zebra(int x, int y, int kg, bool jinak) : Perrisodactyl('Z') {
	aksi = "running";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Zebra::interact() {
	cout << aksi;
}
int Zebra::getMakanan() {
	Herbivora::GetAmount();
}

HarimauSumatra::HarimauSumatra(int x, int y, int kg, bool jinak) : Carnivore('H') {
	suara = "AUUM!!";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void HarimauSumatra::interact() {
	cout << suara;
}
int HarimauSumatra::getMakanan() {
	Karnivora::GetAmount();
}

Macan::Macan(int x, int y, int kg, bool jinak) : Carnivore('M') {
	aksi = "stalk prey";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Macan::interact() {
	cout << aksi;
}
int Macan::getMakanan() {
	Karnivora::GetAmount();
}

Rusa::Rusa(int x, int y, int kg, bool jinak): Artiodactyl('E'){
	aksi = "flaunt horn";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Rusa::interact() {
	cout << aksi;
}
int Rusa::getMakanan() {
	Herbivora::GetAmount();
}

Kancil::Kancil(int x, int y, int kg, bool jinak): Artiodactyl('K'){
	aksi = "eat cucumber";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Kancil::interact() {
	cout << aksi;
}
int Kancil::getMakanan() {
	Herbivora::GetAmount();
}


Banteng::Banteng(int x, int y, int kg, bool jinak) : Artiodactyl('A'){
	aksi = "snort";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Banteng::interact() {
	cout << aksi;
}
int Banteng::getMakanan() {
	Herbivora::GetAmount();
}

Komodo::Komodo(int x, int y, int kg, bool jinak) : Squamata('J'){
	aksi = "stick tongue";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Komodo::interact() {
	cout << aksi;
}
int Komodo::getMakanan() {
	Karnivora::GetAmount();
}

Iguana::Iguana(int x, int y, int kg, bool jinak) : Squamata('I') {
	suara = "Hiss";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Iguana::interact() {
	cout << suara;
}
int Iguana::getMakanan() {
	Herbivora::GetAmount();
}

HiuKarpet::HiuKarpet(int x, int y, int kg, bool jinak) : Carcharhiniformes('V') {
	aksi = "burying in sand";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void HiuKarpet::interact() {
	cout << aksi;
}
int HiuKarpet::getMakanan() {
	Karnivora::GetAmount();
}

HiuMartil::HiuMartil(int x, int y, int kg, bool jinak) : Carcharhiniformes('T'){
	aksi = "move head";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void HiuMartil::interact() {
	cout << aksi;
}
int HiuMartil::getMakanan() {
	Karnivora::GetAmount();
}

StingRay::StingRay(int x, int y, int kg, bool jinak) : Rajiformes('Y') {
	aksi = "move fin";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void StingRay::interact() {
	cout << aksi;
}
int StingRay::getMakanan() {
	Karnivora::GetAmount();
}

MantaRay::MantaRay(int x, int y, int kg, bool jinak) : Rajiformes('Q') {
	aksi = "swim! jump!";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void MantaRay::interact() {
	cout << aksi;
}
int MantaRay::getMakanan() {
	Karnivora::GetAmount();
}

Elang::Elang(int x, int y, int kg, bool jinak) : Falconiformes('~') {
	suara = "Kaaaak!";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Elang::interact() {
	cout << suara;
}
int Elang::getMakanan() {
	Karnivora::GetAmount();
}

Garuda::Garuda(int x, int y, int kg, bool jinak) : Falconiformes('G') {
	aksi = "spread wings";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Garuda::interact() {
	cout << aksi;
}
int Garuda::getMakanan() {
	Karnivora::GetAmount();
}

Kakatua::Kakatua(int x, int y, int kg, bool jinak) : Prittaciformes ('P') {
	suara = "Hello! kwak!";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Kakatua::interact() {
	cout << suara;
}
int Kakatua::getMakanan() {
	Herbivora::GetAmount();
}

Nuri::Nuri(int x, int y, int kg, bool jinak) : Prittaciformes('N') {
	aksi = "play ball";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Nuri::interact() {
	cout << aksi;
}
int Nuri::getMakanan() {
	Herbivora::GetAmount();
}

Parkit::Parkit(int x, int y, int kg, bool jinak) : Prittaciformes('F') {
	suara = "cuit cuit";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Parkit::interact() {
	cout << suara;
}
int Parkit::getMakanan() {
	Herbivora::GetAmount();
}

Buaya::Buaya(int x, int y, int kg, bool jinak) : Crocodillia('D') {
	aksi = "open mouth";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Buaya:: interact() {
	cout << aksi;
}
int Buaya::getMakanan() {
	Karnivora::GetAmount();
}

Aligator::Aligator(int x, int y, int kg, bool jinak) : Crocodillia('L') {
	aksi = "crawl";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetJinak(jinak);
	SetX(x);
	SetY(y);
}
void Aligator::interact() {
	cout << aksi;
}
int Aligator::getMakanan() {
	Karnivora::GetAmount();
}