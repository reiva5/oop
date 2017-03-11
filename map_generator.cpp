#include <fstream>
#include "json.hpp"

using namespace std;
using json=nlohmann::json;

int main(){
	json map;

	map["CageList"]=json::array({
			{
				{"Id", 1},
				{"Habitat", "o"}
			},
			{
				{"Id", 2},
				{"Habitat", "w"}
			},
			{
				{"Id", 3},
				{"Habitat", "x"}
			},
			{
				{"Id", 4},
				{"Habitat", "w"}
			},
			{
				{"Id", 5},
				{"Habitat", "x"}
			},
			{
				{"Id", 6},
				{"Habitat", "o"}
			},
			{
				{"Id", 7},
				{"Habitat", "x"}
			},
			{
				{"Id", 8},
				{"Habitat", "x"}
			},
			{
				{"Id", 9},
				{"Habitat", "w"}
			},
			{
				{"Id", 10},
				{"Habitat", "x"}
			},
			{
				{"Id", 11},
				{"Habitat", "x"}
			},
			{
				{"Id", 12},
				{"Habitat", "x"}
			},
			{
				{"Id", 13},
				{"Habitat", "x"}
			},
			{
				{"Id", 14},
				{"Habitat", "o"}
			},
			{
				{"Id", 15},
				{"Habitat", "w"}
			},
			{
				{"Id", 16},
				{"Habitat", "w"}
			},
			{
				{"Id", 17},
				{"Habitat", "x"}
			}
			{
				{"Id", 18},
				{"Habitat", "o"}
			},
			{
				{"Id", 19},
				{"Habitat", "w"}
			},
			{
				{"Id", 20},
				{"Habitat", "o"}
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
				{"Spesies", "Iguana"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",12},
					{"y",15}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "Komodo"},
				{"Massa", 500000},
				{"Jinak", false},
				{"Lokasi", {
					{"x",14},
					{"y",5}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "Komodo"},
				{"Massa", 500000},
				{"Jinak", false},
				{"Lokasi", {
					{"x",15},
					{"y",7}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "Kancil"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",10},
					{"y",8}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "Kancil"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",14},
					{"y",13}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "Aligator"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",12},
					{"y",4}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "Aligator"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",6},
					{"y",16}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "Macan"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",15},
					{"y",0}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "Macan"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",8},
					{"y",13}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "Nuri"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",2},
					{"y",9}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "Nuri"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",0},
					{"y",10}}
				}
			},
			{
				{"Id", 1},
				{"Spesies", "Kakatua"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",15},
					{"y",15}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "Kakatua"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",13},
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
				{"Id", 1},
				{"Spesies", "Siamang"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",17},
					{"y",16}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "Siamang"},
				{"Massa", 500000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",16},
					{"y",18}}
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
				{"Spesies", "OrangUtan"},
				{"Massa", 550000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",7},
					{"y",4}}
				}
			},
			{
				{"Id", 2},
				{"Spesies", "OrangUtan"},
				{"Massa", 550000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",6},
					{"y",5}}
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
				{"Id",1},
				{"Spesies","Zebra"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",5},
					{"y",8}}
				}
			},
			{
				{"Id",1},
				{"Spesies","Zebra"},
				{"Massa", 1000},
				{"Jinak", true},
				{"Lokasi", {
					{"x",8},
					{"y",9}}
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
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 1},
				}},
				{"type", "air"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 2},
				}},
				{"type", "air"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 3},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 4},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 5},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 10}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 8},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 9},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 10},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 11},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 12},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 15},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 16},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 17},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 18},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 0},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 1},
				}},
				{"type", "air"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 2},
				}},
				{"type", "air"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 3},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 4},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 5},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 10}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 8},
				}},
				{"type", "land"},
				{"Cage", 10}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 9},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 10},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 11},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 12},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 15},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 16},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 17},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 18},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 1},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 1},
				}},
				{"type", "air"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 2},
				}},
				{"type", "air"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 3},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 4},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 5},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 10}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 8},
				}},
				{"type", "land"},
				{"Cage", 10}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 9},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 10},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 11},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 12},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 15},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 16},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 17},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 18},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 2},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 1},
				}},
				{"type", "air"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 2},
				}},
				{"type", "air"},
				{"Cage", 1}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 3},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 4},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 5},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 10}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 8},
				}},
				{"type", "land"},
				{"Cage", 10}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 9},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 10},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 11},
				}},
				{"type", "air"},
				{"Cage", 18}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 12},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 11}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 15},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 16},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 17},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 18},
				}},
				{"type", "water"},
				{"Cage", 16}
			},
			{
				{"Lokasi",{
					{"x", 3},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 0},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 1},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 2},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 3},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 4},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 5},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 7},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 9},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 10},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 11},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 13},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 14},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 15},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 16},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 18},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 4},
					{"y", 19},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 0},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 1},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 2},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 3},
				}},
				{"type", "water"},
				{"Cage", 2}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 4},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 5},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 8},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 9},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 10},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 11},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 15},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 16},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 18},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 5},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 0},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 1},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 2},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 3},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 4},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 5},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 8},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 9},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 10},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 11},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 15},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 16},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 18},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 6},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 0},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 1},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 2},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 3},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 4},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 5},
				}},
				{"type", "land"},
				{"Cage", 3}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 8},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 9},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 10},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 11},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 15},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 16},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 18},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 7},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 0},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 1},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 2},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 3},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 4},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 5},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 8},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 9},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 10},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 11},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 15},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 16},
				}},
				{"type", "water"},
				{"Cage", 15}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 18},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 8},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 1},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 2},
				}},
				{"type", "air"},
				{"Cage", 6}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 3},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 4},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 5},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 8},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 9},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 10},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 11},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 14},
				}},
				{"type", "water"},
				{"Cage", 15}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 15},
				}},
				{"type", "water"},
				{"Cage", 15}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 16},
				}},
				{"type", "water"},
				{"Cage", 15}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 18},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 9},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 1},
				}},
				{"type", "water"},
				{"Cage", 4}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 2},
				}},
				{"type", "air"},
				{"Cage", 6}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 3},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 4},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 5},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 8},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 9},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 10},
				}},
				{"type", "land"},
				{"Cage", 8}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 11},
				}},
				{"type", "water"},
				{"Cage", 9}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 12}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 14},
				}},
				{"type", "water"},
				{"Cage", 15}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 15},
				}},
				{"type", "water"},
				{"Cage", 15}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 16},
				}},
				{"type", "water"},
				{"Cage", 15}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 17},
				}},
				{"type", "rpad"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 18},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 10},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 1},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 2},
				}},
				{"type", "air"},
				{"Cage", 6}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 3},
				}},
				{"type", "air"},
				{"Cage", 6}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 4},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 5},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 7},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 9},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 10},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 11},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 13},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 14},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 15},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 16},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 18},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 11},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 1},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 2},
				}},
				{"type", "air"},
				{"Cage", 6}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 3},
				}},
				{"type", "air"},
				{"Cage", 6}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 4},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 5},
				}},
				{"type", "water"},
				{"Cage", 19}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 9},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 10},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 11},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 13}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 13}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 15},
				}},
				{"type", "land"},
				{"Cage", 13}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 16},
				}},
				{"type", "air"},
				{"Cage", 14}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 18},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 12},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 1},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 2},
				}},
				{"type", "air"},
				{"Cage", 6}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 3},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 4},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 5},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 6},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 9},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 10},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 11},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 13}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 13}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 15},
				}},
				{"type", "air"},
				{"Cage", 14}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 16},
				}},
				{"type", "air"},
				{"Cage", 14}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 18},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 13},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 1},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 2},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 3},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 4},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 5},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 6},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 9},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 10},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 11},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 13}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 13}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 15},
				}},
				{"type", "air"},
				{"Cage", 14}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 16},
				}},
				{"type", "air"},
				{"Cage", 14}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 18},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 14},
					{"y", 19},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 1},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 2},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 3},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 4},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 5},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 6},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 9},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 10},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 11},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 13}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 13}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 15},
				}},
				{"type", "air"},
				{"Cage", 14}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 16},
				}},
				{"type", "air"},
				{"Cage", 14}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 18},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 15},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 1},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 2},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 3},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 4},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 5},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 6},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", 7}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 9},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 10},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 11},
				}},
				{"type", "restaurant"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 13},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 14},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 15},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 16},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 17},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 18},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 16},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 1},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 2},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 3},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 4},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 5},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 6},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 7},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 9},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 10},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 11},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 15},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 16},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 17},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 18},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 17},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 1},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 2},
				}},
				{"type", "land"},
				{"Cage", 5}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 3},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 4},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 5},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 6},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 7},
				}},
				{"type", "air"},
				{"Cage", 20}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 9},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 10},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 11},
				}},
				{"type", "park"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 15},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 16},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 17},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 18},
				}},
				{"type", "land"},
				{"Cage", 17}
			},
			{
				{"Lokasi",{
					{"x", 18},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 0},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 1},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 2},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 3},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 4},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 5},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 6},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 7},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 8},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 9},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 10},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 11},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 12},
				}},
				{"type", "road"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 13},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 14},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 15},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 16},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 17},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 18},
				}},
				{"type", "land"},
				{"Cage", -1}
			},
			{
				{"Lokasi",{
					{"x", 19},
					{"y", 19},
				}},
				{"type", "land"},
				{"Cage", -1}
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