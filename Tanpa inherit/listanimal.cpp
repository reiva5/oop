#include <iostream>
#include "listanimal.h"
using namespace std;

OrangUtan::OrangUtan():a('U',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
OrangUtan::OrangUtan(int i, int x, int y, int kg, bool jinak): a('U',i) {
	suara = "Auooo";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Primate");
}
void OrangUtan::interact() {
	cout << "Orang Utan: \""<< suara <<"\""<< endl;
}
int OrangUtan::getMakanan() {
	_pemakan.GetAmount();
}
Animal OrangUtan::GetAnimal(){
	return a;
}

Siamang::Siamang():a('S',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Siamang::Siamang(int i, int x, int y, int kg, bool jinak): a('S',i) {
	suara = "Ooo Ooo";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Primate");
}
void Siamang::interact() {
	cout << "Siamang: \"" << suara << "\"" << endl;
}
int Siamang::getMakanan() {
	_pemakan.GetAmount();
}
Animal Siamang::GetAnimal(){
	return a;
}

Bekantan::Bekantan():a('B',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Bekantan::Bekantan(int i, int x, int y, int kg, bool jinak): a('B',i){
	aksi = "climb tree";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Primate");
}
void Bekantan::interact() {
	cout << "Bekantan: (" << aksi << ")" << endl;
}
int Bekantan::getMakanan() {
	_pemakan.GetAmount();
}
Animal Bekantan::GetAnimal(){
	return a;
}

BadakCulaSatu::BadakCulaSatu():a('C',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
BadakCulaSatu::BadakCulaSatu(int i, int x, int y, int kg, bool jinak) : a('C',i){
	aksi = "bathing in mud";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Perrisodactyl");
}
void BadakCulaSatu::interact() {
	cout <<"Badak Cula Satu: (" << aksi << ")" << endl;
}
int BadakCulaSatu::getMakanan() {
	_pemakan.GetAmount();
}
Animal BadakCulaSatu::GetAnimal(){
	return a;
}

Zebra::Zebra():a('Z',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Zebra::Zebra(int i, int x, int y, int kg, bool jinak) : a('Z',i) {
	aksi = "running";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Perrisodactyl");
}
void Zebra::interact() {
	cout <<"Zebra: (" << aksi << ")" << endl;
}
int Zebra::getMakanan() {
	_pemakan.GetAmount();
}
Animal Zebra::GetAnimal(){
	return a;
}

HarimauSumatra::HarimauSumatra():a('H',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
HarimauSumatra::HarimauSumatra(int i, int x, int y, int kg, bool jinak) : a('H',i) {
	suara = "AUUM!!";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Carnivore");
}
void HarimauSumatra::interact() {
	cout <<"Harimau Sumatra: \"" << suara << "\"" << endl;
}
int HarimauSumatra::getMakanan() {
	_pemakan.GetAmount();
}
Animal HarimauSumatra::GetAnimal(){
	return a;
}

Macan::Macan():a('M',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Macan::Macan(int i, int x, int y, int kg, bool jinak) : a('M', i) {
	aksi = "stalk prey";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Carnivore");
}
void Macan::interact() {
	cout <<"Macan: (" << aksi << ")" << endl;
}
int Macan::getMakanan() {
	_pemakan.GetAmount();
}
Animal Macan::GetAnimal(){
	return a;
}

Rusa::Rusa():a('E',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Rusa::Rusa(int i, int x, int y, int kg, bool jinak): a('E',i){
	aksi = "flaunt horn";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Artiodactyl");
}
void Rusa::interact() {
	cout <<"Rusa: (" << aksi << ")" << endl;
}
int Rusa::getMakanan() {
	_pemakan.GetAmount();
}
Animal Rusa::GetAnimal(){
	return a;
}
Kancil::Kancil():a('K',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Kancil::Kancil(int i, int x, int y, int kg, bool jinak): a('K',i){
	aksi = "eat cucumber";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Artiodactyl");
}
void Kancil::interact() {
	cout <<"Kancil: (" << aksi << ")" << endl;
}
int Kancil::getMakanan() {
	_pemakan.GetAmount();
}
Animal Kancil::GetAnimal(){
	return a;
}

Banteng::Banteng():a('A',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Banteng::Banteng(int i, int x, int y, int kg, bool jinak) : a('A',i){
	aksi = "snort";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Artiodactyl");
}
void Banteng::interact() {
	cout <<"Banteng: ("<< aksi << ")" << endl;
}
int Banteng::getMakanan() {
	_pemakan.GetAmount();
}
Animal Banteng::GetAnimal(){
	return a;
}

Komodo::Komodo():a('J',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Komodo::Komodo(int i, int x, int y, int kg, bool jinak) : a('J',i){
	aksi = "stick tongue";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Squamata");
}
void Komodo::interact() {
	cout <<"Komodo: (" << aksi << ")" << endl;
}
int Komodo::getMakanan() {
	_pemakan.GetAmount();
}
Animal Komodo::GetAnimal(){
	return a;
}

Iguana::Iguana():a('I',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Iguana::Iguana(int i, int x, int y, int kg, bool jinak) : a('I',i) {
	suara = "Hiss";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Squamata");
}
void Iguana::interact() {
	cout <<"Iguana: \"" << suara << "\"" << endl;
}
int Iguana::getMakanan() {
	_pemakan.GetAmount();
}
Animal Iguana::GetAnimal(){
	return a;
}

HiuKarpet::HiuKarpet():a('V',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
HiuKarpet::HiuKarpet(int i, int x, int y, int kg, bool jinak) : a('V',i) {
	aksi = "burying in sand";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Carcharhiniformes");
}
void HiuKarpet::interact() {
	cout << "Hiu Karpet: (" << aksi << ")" << endl;
}
int HiuKarpet::getMakanan() {
	_pemakan.GetAmount();
}
Animal HiuKarpet::GetAnimal(){
	return a;
}

HiuMartil::HiuMartil():a('T',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
HiuMartil::HiuMartil(int i, int x, int y, int kg, bool jinak) : a('T',i){
	aksi = "move head";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Carcharhiniformes");
}
void HiuMartil::interact() {
	cout << "Hiu Martil: (" << aksi << ")" << endl;
}
int HiuMartil::getMakanan() {
	_pemakan.GetAmount();
}
Animal HiuMartil::GetAnimal(){
	return a;
}

StingRay::StingRay():a('Y',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
StingRay::StingRay(int i, int x, int y, int kg, bool jinak) : a('Y',i) {
	aksi = "move fin";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Rajiformes");
}
void StingRay::interact() {
	cout << "StingRay: (" << aksi << ")" << endl;
}
int StingRay::getMakanan() {
	_pemakan.GetAmount();
}
Animal StingRay::GetAnimal(){
	return a;
}

MantaRay::MantaRay():a('Q',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
MantaRay::MantaRay(int i, int x, int y, int kg, bool jinak) : a('Q',i) {
	aksi = "swim! jump!";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Rajiformes");
}
void MantaRay::interact() {
	cout << "MantaRay: (" << aksi<< ")" << endl;
}
int MantaRay::getMakanan() {
	_pemakan.GetAmount();
}
Animal MantaRay::GetAnimal(){
	return a;
}

Elang::Elang():a('~',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Elang::Elang(int i, int x, int y, int kg, bool jinak) : a('~',i) {
	suara = "Kaaaak!";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Falconiformes");
}
void Elang::interact() {
	cout << "Elang: \"" << suara << "\"" << endl;
}
int Elang::getMakanan() {
	_pemakan.GetAmount();
}
Animal Elang::GetAnimal(){
	return a;
}

Garuda::Garuda():a('G',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Garuda::Garuda(int i, int x, int y, int kg, bool jinak) : a('G',i) {
	aksi = "spread wings";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Falconiformes");
}
void Garuda::interact() {
	cout << "Garuda: (" << aksi<< ")" << endl;
}
int Garuda::getMakanan() {
	_pemakan.GetAmount();
}
Animal Garuda::GetAnimal(){
	return a;
}

Kakatua::Kakatua():a('P',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Kakatua::Kakatua(int i, int x, int y, int kg, bool jinak) : a('P',i) {
	suara = "Hello! kwak!";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Prittaciformes");
}
void Kakatua::interact() {
	cout << "Kakatua: \"" << suara << "\"" << endl;
}
int Kakatua::getMakanan() {
	_pemakan.GetAmount();
}
Animal Kakatua::GetAnimal(){
	return a;
}

Nuri::Nuri():a('N',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Nuri::Nuri(int i, int x, int y, int kg, bool jinak) : a('N',i) {
	aksi = "play ball";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Prittaciformes");
}
void Nuri::interact() {
	cout << "Nuri: (" << aksi << ")" << endl;
}
int Nuri::getMakanan() {
	_pemakan.GetAmount();
}
Animal Nuri::GetAnimal(){
	return a;
}

Parkit::Parkit():a('F',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Parkit::Parkit(int i, int x, int y, int kg, bool jinak) : a('F',i) {
	suara = "cuit cuit";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Prittaciformes");
}
void Parkit::interact() {
	cout << "Parkit: \"" << suara << "\"" << endl;
}
int Parkit::getMakanan() {
	_pemakan.GetAmount();
}
Animal Parkit::GetAnimal(){
	return a;
}

Buaya::Buaya():a('D',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Buaya::Buaya(int i, int x, int y, int kg, bool jinak) : a('D',i) {
	aksi = "open mouth";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Crocodillia");
}
void Buaya:: interact() {
	cout <<"Buaya: ("<< aksi << ")" << endl;
}
int Buaya::getMakanan() {
	_pemakan.GetAmount();
}
Animal Buaya::GetAnimal(){
	return a;
}

Aligator::Aligator():a('L',0){
	a.SetX(0);
	a.SetY(0);
	a.SetMassa(0);
	a.SetJinak(true);
}
Aligator::Aligator(int i, int x, int y, int kg, bool jinak) : a('L',i) {
	aksi = "crawl";
	_pemakan.SetAmount(kg/defmakanan);
	a.SetMassa(kg);
	a.SetJinak(jinak);
	a.SetX(x);
	a.SetY(y);
	a.SetOrdo("Crocodillia");
}
void Aligator::interact() {
	cout << "Aligator: (" << aksi << ")" << endl;
}
int Aligator::getMakanan() {
	_pemakan.GetAmount();
}
Animal Aligator::GetAnimal(){
	return a;
}
