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
				{"Spesies","orangutan"},
				{"Makanan", 20},
				{"Lokasi", {
					{"x",2},
					{"y",1}}
				},
				{"Interact", "Auuo uooo"}
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