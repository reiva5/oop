#include <iostream>
#include "listanimal.h"
using namespace std;

OrangUtan::OrangUtan(int i, int x, int y, int kg, bool jinak): Primate('U',i) {
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

Siamang::Siamang(int i, int x, int y, int kg, bool jinak): Primate('S',i) {
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

Bekantan::Bekantan(int i, int x, int y, int kg, bool jinak): Primate('B',i){
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

BadakCulaSatu::BadakCulaSatu(int i, int x, int y, int kg, bool jinak): Perrisodactyl('C', i) {
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

Zebra::Zebra(int i, int x, int y, int kg, bool jinak) : Perrisodactyl('Z',i) {
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

HarimauSumatra::HarimauSumatra(int i, int x, int y, int kg, bool jinak) : Carnivore('H',i) {
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

Macan::Macan(int i, int x, int y, int kg, bool jinak) : Carnivore('M', i) {
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

Rusa::Rusa(int i, int x, int y, int kg, bool jinak): Artiodactyl('E',i){
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

Kancil::Kancil(int i, int x, int y, int kg, bool jinak): Artiodactyl('K',i){
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


Banteng::Banteng(int i, int x, int y, int kg, bool jinak) : Artiodactyl('A',i){
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

Komodo::Komodo(int i, int x, int y, int kg, bool jinak) : Squamata('J',i){
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

Iguana::Iguana(int i, int x, int y, int kg, bool jinak) : Squamata('I',i) {
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

HiuKarpet::HiuKarpet(int i, int x, int y, int kg, bool jinak) : Carcharhiniformes('V',i) {
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

HiuMartil::HiuMartil(int i, int x, int y, int kg, bool jinak) : Carcharhiniformes('T',i){
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

StingRay::StingRay(int i, int x, int y, int kg, bool jinak) : Rajiformes('Y',i) {
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

MantaRay::MantaRay(int i, int x, int y, int kg, bool jinak) : Rajiformes('Q',i) {
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

Elang::Elang(int i, int x, int y, int kg, bool jinak) : Falconiformes('~',i) {
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

Garuda::Garuda(int i, int x, int y, int kg, bool jinak) : Falconiformes('G',i) {
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

Kakatua::Kakatua(int i, int x, int y, int kg, bool jinak) : Prittaciformes ('P',i) {
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

Nuri::Nuri(int i, int x, int y, int kg, bool jinak) : Prittaciformes('N',i) {
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

Parkit::Parkit(int i, int x, int y, int kg, bool jinak) : Prittaciformes('F',i) {
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

Buaya::Buaya(int i, int x, int y, int kg, bool jinak) : Crocodillia('D',i) {
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

Aligator::Aligator(int i, int x, int y, int kg, bool jinak) : Crocodillia('L',i) {
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