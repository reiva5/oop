#include <iostream>
#include "listanimal.h"
using namespace std;

OrangUtan::OrangUtan(int x, int y, int kg): Primate('U') {
	suara = "Auooo";
	SetAmount(kg/defmakanan);
	SetMassa(kg);
	SetX(x);
	SetY(y);
}
void OrangUtan::interact() {
	cout << suara;
}
int OrangUtan::getMakanan() {
	Omnivora::GetAmount();
}

Siamang::Siamang(int x, int y, int kg): Primate('S') {
	suara = "Ooo Ooo";
}
void Siamang::interact() {
	cout << suara;
}
int Siamang::getMakanan() {
	Omnivora::GetAmount();
}

Bekantan::Bekantan(int x, int y, int kg): Primate('B'){
	aksi = "climb tree";
}
void Bekantan::interact() {
	cout << aksi;
}
int Bekantan::getMakanan() {
	Omnivora::GetAmount();
}

BadakCulaSatu::BadakCulaSatu(int x, int y, int kg): Perrisodactyl('C') {
	aksi = "bathing in mud";
}
void BadakCulaSatu::interact() {
	cout << aksi;
}
int BadakCulaSatu::getMakanan() {
	Herbivora::GetAmount();
}

Zebra::Zebra(int x, int y, int kg) : Perrisodactyl('Z') {
	aksi = "running";
}
void Zebra::interact() {
	cout << aksi;
}
int Zebra::getMakanan() {
	Herbivora::GetAmount();
}

HarimauSumatra::HarimauSumatra(int x, int y, int kg) : Carnivore('H') {
	suara = "AUUM!!";
}
void HarimauSumatra::interact() {
	cout << suara;
}
int HarimauSumatra::getMakanan() {
	Karnivora::GetAmount();
}

Macan::Macan(int x, int y, int kg) : Carnivore('M') {
	aksi = "stalk prey";
}
void Macan::interact() {
	cout << aksi;
}
int Macan::getMakanan() {
	Karnivora::GetAmount();
}

Rusa::Rusa(int x, int y, int kg): Artiodactyl('E'){
	aksi = "flaunt horn";
}
void Rusa::interact() {
	cout << aksi;
}
int Rusa::getMakanan() {
	Herbivora::GetAmount();
}

Kancil::Kancil(int x, int y, int kg): Artiodactyl('K'){
	aksi = "eat cucumber";
}
void Kancil::interact() {
	cout << aksi;
}
int Kancil::getMakanan() {
	Herbivora::GetAmount();
}


Banteng::Banteng(int x, int y, int kg) : Artiodactyl('A'){
	aksi = "snort";
}
void Banteng::interact() {
	cout << aksi;
}
int Banteng::getMakanan() {
	Herbivora::GetAmount();
}

Komodo::Komodo(int x, int y, int kg) : Squamata('J'){
	aksi = "stick tongue";
}
void Komodo::interact() {
	cout << aksi;
}
int Komodo::getMakanan() {
	Karnivora::GetAmount();
}

Iguana::Iguana(int x, int y, int kg) : Squamata('I') {
	suara = "Hiss";
}
void Iguana::interact() {
	cout << suara;
}
int Iguana::getMakanan() {
	Herbivora::GetAmount();
}

HiuKarpet::HiuKarpet(int x, int y, int kg) : Carcharhiniformes('V') {
	aksi = "burying in sand";
}
void HiuKarpet::interact() {
	cout << aksi;
}
int HiuKarpet::getMakanan() {
	Karnivora::GetAmount();
}

HiuMartil::HiuMartil(int x, int y, int kg) : Carcharhiniformes('T'){
	aksi = "move head";
}
void HiuMartil::interact() {
	cout << aksi;
}
int HiuMartil::getMakanan() {
	Karnivora::GetAmount();
}

StingRay::StingRay(int x, int y, int kg) : Rajiformes('Y') {
	aksi = "move fin";
}
void StingRay::interact() {
	cout << aksi;
}
int StingRay::getMakanan() {
	Karnivora::GetAmount();
}

MantaRay::MantaRay(int x, int y, int kg) : Rajiformes('Q') {
	aksi = "swim! jump!";
}
void MantaRay::interact() {
	cout << aksi;
}
int MantaRay::getMakanan() {
	Karnivora::GetAmount();
}

Elang::Elang(int x, int y, int kg) : Falconiformes('~') {
	suara = "Kaaaak!";
}
void Elang::interact() {
	cout << suara;
}
int Elang::getMakanan() {
	Karnivora::GetAmount();
}

Garuda::Garuda(int x, int y, int kg) : Falconiformes('G') {
	aksi = "spread wings";
}
void Garuda::interact() {
	cout << aksi;
}
int Garuda::getMakanan() {
	Karnivora::GetAmount();
}

Kakatua::Kakatua(int x, int y, int kg) : Prittaciformes ('P') {
	suara = "Hello! kwak!";
}
void Kakatua::interact() {
	cout << suara;
}
int Kakatua::getMakanan() {
	Herbivora::GetAmount();
}

Nuri::Nuri(int x, int y, int kg) : Prittaciformes('N') {
	aksi = "play ball";
}
void Nuri::interact() {
	cout << aksi;
}
int Nuri::getMakanan() {
	Herbivora::GetAmount();
}

Parkit::Parkit(int x, int y, int kg) : Prittaciformes('F') {
	suara = "cuit cuit";
}
void Parkit::interact() {
	cout << suara;
}
int Parkit::getMakanan() {
	Herbivora::GetAmount();
}

Buaya::Buaya(int x, int y, int kg) : Crocodillia('D') {
	aksi = "open mouth";
}
void Buaya:: interact() {
	cout << aksi;
}
int Buaya::getMakanan() {
	Karnivora::GetAmount();
}

Aligator::Aligator(int x, int y, int kg) : Crocodillia('L') {
	aksi = "crawl";
}
void Aligator::interact() {
	cout << aksi;
}
int Aligator::getMakanan() {
	Karnivora::GetAmount();
}