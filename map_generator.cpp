#include <fstream>
#include "json.hpp"

using namespace std;
using json=nlohmann::json;

int main(){
	json map;

	map["CageList"]=json::array({
			{
				{"Id", 1},
				{"Habitat", "x"}
			},
			{
				{"Id", 2},
				{"Habitat", "w"}
			}
		}
		);

	map["AnimalList"]=json::array(
		{
			{
				{"Id",1},
				{"Spesies","Banteng"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",15},
					{"y",2}}
				}
			},
			{
				{"Id",2},
				{"Spesies","Banteng"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",5},
					{"y",7}}
				}
			},
			{
				{"Id",1},
				{"Spesies","Bekantan"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",17},
					{"y",13}}
				}
			},
			{
				{"Id",2},
				{"Spesies","Bekantan"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",18},
					{"y",13}}
				}
			},
			{
				{"Id",1},
				{"Spesies","BadakCulaSatu"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",10},
					{"y",11}}
				}
			},
			{
				{"Id",2},
				{"Spesies","BadakCulaSatu"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",2},
					{"y",14}}
				}
			},
			{
				{"Id",1},
				{"Spesies","Buaya"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",9},
					{"y",3}}
				}
			},
			{
				{"Id",2},
				{"Spesies","Buaya"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",10},
					{"y",5}}
				}
			},
			{
				{"Id",1},
				{"Spesies","Rusa"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",9},
					{"y",7}}
				}
			},
			{
				{"Id",2},
				{"Spesies","Rusa"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",3},
					{"y",12}}
				}
			},
			{
				{"Id",1},
				{"Spesies","Parkit"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",3},
					{"y",11}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "Garuda"},
				{"Massa", 5000},
				{"Jinak", false},
				{"Lokasi", {
					{"x",9},
					{"y",2}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "Garuda"},
				{"Massa", 5000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",18},
					{"y",4}}
				}
			},
			{
				{"Id", 3},
				{"Spesies", "Garuda"},
				{"Massa", 5000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",16},
					{"y",5}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "HarimauSumatra"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",17},
					{"y",2}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "HarimauSumatra"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",18},
					{"y",2}}
				}
			},
			{
				{"Id", 3},
				{"Spesies", "HarimauSumatra"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",5},
					{"y",14}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "HiuMartil"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",5},
					{"y",0}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "HiuMartil"},
				{"Massa", 480000},
				{"Jinak", false},
				{"Lokasi", {
					{"x",10},
					{"y",14}}
				}
			},
			{
				{"Id", 3},
				{"Spesies", "HiuMartil"},
				{"Massa", 300000},
				{"Jinak", false},
				{"Lokasi", {
					{"x",9},
					{"y",16}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "HiuKarpet"},
				{"Massa", 550000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",8},
					{"y",1}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "HiuKarpet"},
				{"Massa", 550000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",3},
					{"y",5}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "StingRay"},
				{"Massa", 8000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",4},
					{"y",3}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "StingRay"},
				{"Massa", 13000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",5},
					{"y",10}}
				}
			},
			{
				{"Id", 3},
				{"Spesies", "StingRay"},
				{"Massa", 6000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",10},
					{"y",11}}
				}
			},
			{
				{"Id", 4},
				{"Spesies", "StingRay"},
				{"Massa", 5000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",3},
					{"y",16}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "MantaRay"},
				{"Massa", 5000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",0},
					{"y",5}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "MantaRay"},
				{"Massa", 5000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",8},
					{"y",11}}
				}
			},
			{
				{"Id", 3},
				{"Spesies", "MantaRay"},
				{"Massa", 5000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",1},
					{"y",16}}
				}
			},
			{
				{"Id",1},
				{"Spesies","Elang"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",1},
					{"y",1}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "Elang"},
				{"Massa", 1200},
				{"Jinak", true},
				{"Lokasi", {
					{"x",3},
					{"y",2}}
				}
			}
		}
		);

	map["CellList"]=json::array({
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 0},
				}},
				{"type", "water"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 1},
				}},
				{"type", "water"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 0},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 1},
				}},
				{"type", "water"},
				{"Cage", 2}
			}
		}
		);

	map["ZooWidth"]=2;
	map["ZooLength"]=2;

	ofstream fout;
	fout.open("map.json");
	if(fout.is_open()){
		fout<<setw(4)<<map<<endl;
		fout.close();
	}

	// ifstream fin;
	// fin.open("map.json");
	// if(fin.is_open()){
	// 	json in;
	// 	fin>>in;
	// 	json animal=in["AnimalList"];
	// 	for(auto i:animal){
	// 		cout<<"Spesies: "<<i["spesies"].get<string>()<<endl;
	// 		cout<<"Posisi "<<i["Lokasi"]["x"].get<int>()<<' '<<i["Lokasi"]["y"].get<int>()<<endl;
	// 	}
	// }
	return 0;
}