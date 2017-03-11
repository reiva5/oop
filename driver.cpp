#include "driver.h"
#include "json.hpp"
#include <fstream>
#include <string>
#include <iostream>


using namespace std;
using json=nlohmann::json;

void Driver::initialize_zoo(Zoo& z, CageHandler& ch)
{
	ifstream fin;
	fin.open("map.json");
	if(fin.is_open())
	{
		Cage* cage;
		Cell* cell;
		int x, y, id;
		string type;

		json input;
		fin>>input;
		json c=input["CellList"];
		for(auto i:c)
		{
			x = i["Lokasi"]["x"].get<int>();
			y = i["Lokasi"]["y"].get<int>();
			id = i["Cage"].get<int>();
			type = i["type"].get<string>();

			if(type=="water")
				cell = new WaterHabitat;
			else if(type=="land")
				cell = new LandHabitat;
			else if(type=="air")
				cell =  new AirHabitat;

			z.SetCell(x,y,cell);
			if(id>0){
				cage=ch.GetCage(id);
				cage->AddCell(cell->getType());
				z.GetCell(x,y)->setCage(cage);	
			}
			
		}
	}
}

void Driver::initialize_cage(CageHandler& ch)
{
	ifstream fin;
	fin.open("map.json");
	json input;
	if(fin.is_open())
	{
		Cage* c;
		fin>>input;
		json cage=input["CageList"];
		for(auto i:cage)
		{
			c= new Cage(i["Id"].get<int>(), i["Habitat"].get<string>()[0]);
			ch.AddCage(c);
		}
		fin.close();
	}
}

void Driver::initialize_animal(AnimalHandler& ah, Zoo& z)
{
	ifstream fin;
	fin.open("map.json");
	json input;
	if(fin.is_open())
	{
		Animal* a;
		int id, massa, absis, ordinat;
		bool jinak;
		string spesies;

		fin>>input;
		json animal=input["AnimalList"];
		for(auto i: animal)
		{
			id=i["Id"].get<int>();
			spesies=i["Spesies"].get<string>();
			massa=i["Massa"].get<int>();
			absis=i["Lokasi"]["x"].get<int>();
			ordinat=i["Lokasi"]["y"].get<int>();
			jinak=i["Jinak"].get<bool>();

			if(spesies=="Elang")
				a=new Elang(id, absis, ordinat, massa, jinak);
			else if(spesies=="Bekantan")
				a=new Bekantan(id, absis, ordinat, massa, jinak);
			else if(spesies=="BadakCulaSatu")
				a=new BadakCulaSatu(id, absis, ordinat, massa, jinak);
			else if(spesies=="Buaya")
				a=new Buaya(id, absis, ordinat, massa, jinak);
			else if(spesies=="Rusa")
				a=new Rusa(id, absis, ordinat, massa, jinak);
			else if(spesies=="Parkit")
				a=new Parkit(id, absis, ordinat, massa, jinak);
			else if(spesies=="Garuda")
				a=new Garuda(id, absis, ordinat, massa, jinak);
			else if(spesies=="HarimauSumatra")
				a=new HarimauSumatra(id, absis, ordinat, massa, jinak);
			else if(spesies=="Iguana")
				a=new Iguana(id, absis, ordinat, massa, jinak);
			else if(spesies=="Komodo")
				a=new Komodo(id, absis, ordinat, massa, jinak);
			else if(spesies=="Kancil")
				a=new Kancil(id, absis, ordinat, massa, jinak);
			else if(spesies=="Aligator")
				a=new Aligator(id, absis, ordinat, massa, jinak);
			else if(spesies=="Macan")
				a=new Macan(id, absis, ordinat, massa, jinak);
			else if(spesies=="Nuri")
				a=new Nuri(id, absis, ordinat, massa, jinak);
			else if(spesies=="Kakatua")
				a=new Kakatua(id, absis, ordinat, massa, jinak);
			else if(spesies=="MantaRay")
				a=new MantaRay(id, absis, ordinat, massa, jinak);
			else if(spesies=="Siamang")
				a=new Siamang(id, absis, ordinat, massa, jinak);
			else if(spesies=="HiuMartil")
				a=new HiuMartil(id, absis, ordinat, massa, jinak);
			else if(spesies=="OrangUtan")
				a=new OrangUtan(id, absis, ordinat, massa, jinak);
			else if(spesies=="HiuKarpet")
				a=new HiuKarpet(id, absis, ordinat, massa, jinak);
			else if(spesies=="StingRay")
				a=new StingRay(id, absis, ordinat, massa, jinak);
			else if(spesies=="Zebra")
				a=new Zebra(id, absis, ordinat, massa, jinak);
			else if(spesies=="Banteng")
				a=new Banteng(id, absis, ordinat, massa, jinak);

			ah.AddAnimal(a);
			if(absis<2 && ordinat<2){
				z.GetCell(absis, ordinat)->setAnimal(a);
				z.GetCell(absis, ordinat)->getCage()->AddAnimal(a);
			}
		}
	}
}