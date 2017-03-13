#include <iostream>
#include "listanimal.h"
using namespace std;

OrangUtan::OrangUtan(int i, int x, int y, int massa, bool jinak): 
  Primate('U',i) {
  suara = "Auooo";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void OrangUtan::Interact() {
  cout << "Orang Utan: \""<< suara <<"\""<< endl;
}
int OrangUtan::GetJmlMakanan() {
  Omnivora::GetAmount();
}

Siamang::Siamang(int i, int x, int y, int massa, bool jinak):
  Primate('S',i) {
  suara = "Ooo Ooo";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Siamang::Interact() {
  cout << "Siamang: \"" << suara << "\"" << endl;
}
int Siamang::GetJmlMakanan() {
  Omnivora::GetAmount();
}

Bekantan::Bekantan(int i, int x, int y, int massa, bool jinak): 
  Primate('B',i) {
  aksi = "climb tree";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Bekantan::Interact() {
  cout << "Bekantan: (" << aksi << ")" << endl;
}
int Bekantan::GetJmlMakanan() {
  Omnivora::GetAmount();
}

BadakCulaSatu::BadakCulaSatu(int i, int x, int y, int massa, bool jinak): 
  Perrisodactyl('C', i) {
  aksi = "bathing in mud";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void BadakCulaSatu::Interact() {
  cout <<"Badak Cula Satu: (" << aksi << ")" << endl;
}
int BadakCulaSatu::GetJmlMakanan() {
  Herbivora::GetAmount();
}

Zebra::Zebra(int i, int x, int y, int massa, bool jinak): 
  Perrisodactyl('Z',i) {
  aksi = "running";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Zebra::Interact() {
  cout <<"Zebra: (" << aksi << ")" << endl;
}
int Zebra::GetJmlMakanan() {
  Herbivora::GetAmount();
}

HarimauSumatra::HarimauSumatra(int i, int x, int y, int massa, bool jinak): 
  Carnivore('H',i) {
  suara = "AUUM!!";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void HarimauSumatra::Interact() {
  cout <<"Harimau Sumatra: \"" << suara << "\"" << endl;
}
int HarimauSumatra::GetJmlMakanan() {
  Karnivora::GetAmount();
}

Macan::Macan(int i, int x, int y, int massa, bool jinak) : Carnivore('M', i) {
  aksi = "stalk prey";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Macan::Interact() {
  cout <<"Macan: (" << aksi << ")" << endl;
}
int Macan::GetJmlMakanan() {
  Karnivora::GetAmount();
}

Rusa::Rusa(int i, int x, int y, int massa, bool jinak): Artiodactyl('E',i){
  aksi = "flaunt horn";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Rusa::Interact() {
  cout <<"Rusa: (" << aksi << ")" << endl;
}
int Rusa::GetJmlMakanan() {
  Herbivora::GetAmount();
}

Kancil::Kancil(int i, int x, int y, int massa, bool jinak): Artiodactyl('K',i){
  aksi = "eat cucumber";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Kancil::Interact() {
  cout <<"Kancil: (" << aksi << ")" << endl;
}
int Kancil::GetJmlMakanan() {
  Herbivora::GetAmount();
}


Banteng::Banteng(int i, int x, int y, int massa, bool jinak):
  Artiodactyl('A',i) {
  aksi = "snort";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Banteng::Interact() {
  cout <<"Banteng: ("<< aksi << ")" << endl;
}
int Banteng::GetJmlMakanan() {
  Herbivora::GetAmount();
}

Komodo::Komodo(int i, int x, int y, int massa, bool jinak) : Squamata('J',i){
  aksi = "stick tongue";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Komodo::Interact() {
  cout <<"Komodo: (" << aksi << ")" << endl;
}
int Komodo::GetJmlMakanan() {
  Karnivora::GetAmount();
}

Iguana::Iguana(int i, int x, int y, int massa, bool jinak) : Squamata('I',i) {
  suara = "Hiss";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Iguana::Interact() {
  cout <<"Iguana: \"" << suara << "\"" << endl;
}
int Iguana::GetJmlMakanan() {
  Herbivora::GetAmount();
}

HiuKarpet::HiuKarpet(int i, int x, int y, int massa, bool jinak): 
  Carcharhiniformes('V',i) {
  aksi = "burying in sand";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void HiuKarpet::Interact() {
  cout << "Hiu Karpet: (" << aksi << ")" << endl;
}
int HiuKarpet::GetJmlMakanan() {
  Karnivora::GetAmount();
}

HiuMartil::HiuMartil(int i, int x, int y, int massa, bool jinak): 
  Carcharhiniformes('T',i) {
  aksi = "move head";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void HiuMartil::Interact() {
  cout << "Hiu Martil: (" << aksi << ")" << endl;
}
int HiuMartil::GetJmlMakanan() {
  Karnivora::GetAmount();
}

StingRay::StingRay(int i, int x, int y, int massa, bool jinak): 
  Rajiformes('Y',i) {
  aksi = "move fin";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void StingRay::Interact() {
  cout << "StingRay: (" << aksi << ")" << endl;
}
int StingRay::GetJmlMakanan() {
  Karnivora::GetAmount();
}

MantaRay::MantaRay(int i, int x, int y, int massa, bool jinak): 
  Rajiformes('Q',i) {
  aksi = "swim! jump!";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void MantaRay::Interact() {
  cout << "MantaRay: (" << aksi<< ")" << endl;
}
int MantaRay::GetJmlMakanan() {
  Karnivora::GetAmount();
}

Elang::Elang(int i, int x, int y, int massa, bool jinak): 
  Falconiformes('~',i) {
  suara = "Kaaaak!";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Elang::Interact() {
  cout << "Elang: \"" << suara << "\"" << endl;
}
int Elang::GetJmlMakanan() {
  Karnivora::GetAmount();
}

Garuda::Garuda(int i, int x, int y, int massa, bool jinak): 
  Falconiformes('G',i) {
  aksi = "spread wings";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Garuda::Interact() {
  cout << "Garuda: (" << aksi<< ")" << endl;
}
int Garuda::GetJmlMakanan() {
  Karnivora::GetAmount();
}

Kakatua::Kakatua(int i, int x, int y, int massa, bool jinak): 
  Prittaciformes ('P',i) {
  suara = "Hello! kwak!";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Kakatua::Interact() {
  cout << "Kakatua: \"" << suara << "\"" << endl;
}
int Kakatua::GetJmlMakanan() {
  Herbivora::GetAmount();
}

Nuri::Nuri(int i, int x, int y, int massa, bool jinak): Prittaciformes('N',i) 
{
  aksi = "play ball";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Nuri::Interact() {
  cout << "Nuri: (" << aksi << ")" << endl;
}
int Nuri::GetJmlMakanan() {
  Herbivora::GetAmount();
}

Parkit::Parkit(int i, int x, int y, int massa, bool jinak): 
  Prittaciformes('F',i) {
  suara = "cuit cuit";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Parkit::Interact() {
  cout << "Parkit: \"" << suara << "\"" << endl;
}
int Parkit::GetJmlMakanan() {
  Herbivora::GetAmount();
}

Buaya::Buaya(int i, int x, int y, int massa, bool jinak): Crocodillia('D',i) {
  aksi = "open mouth";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Buaya:: Interact() {
  cout <<"Buaya: ("<< aksi << ")" << endl;
}
int Buaya::GetJmlMakanan() {
  Karnivora::GetAmount();
}

Aligator::Aligator(int i, int x, int y, int massa, bool jinak): 
  Crocodillia('L',i) {
  aksi = "crawl";
  SetAmount(massa/rasio);
  SetMassa(massa);
  SetJinak(jinak);
  SetX(x);
  SetY(y);
}
void Aligator::Interact() 
{
  cout << "Aligator: (" << aksi << ")" << endl;
}
int Aligator::GetJmlMakanan() {
  Karnivora::GetAmount();
}