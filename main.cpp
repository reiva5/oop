#include <iostream>
#include <fstream>
#include "zoo.h"
#include "driver.h"
#include "json.hpp"
#include "zooexp.h"

using namespace std;
using json=nlohmann::json;

int main()
{
	ifstream fin;
	int length;
	int width;
	fin.open("map.json");
	json input;
	if(fin.is_open()){
		fin>>input;
		length=input["ZooLength"].get<int>();
		width=input["ZooWidth"].get<int>();
		fin.close();
	}

	CageHandler c; 
	AnimalHandler ah;
	Zoo z(width,length);
	Driver driver(z);
	bool finished=false;
	int option;
	try{
		driver.initialize_cage(c);
		driver.initialize_zoo(z, c);
		driver.initialize_animal(ah, z);	
		while(!finished){
				Renderable::banner();
				cin>>option;
				if(option==1)
					driver.DisplayVirtualZoo(z);
				else if(option==2){
					driver.init_pos(z);	
					driver.TourVirtualZoo(z);
					driver.MoveAnimal(z, ah);
				}
				else if(option==3)
					cout<<"Jumlah kebutuhan makanan per hari adalah "<<ah.JumlahMakanan()<<" gram"<<endl;
				else if(option==4)
					finished=true;
				else
					cout<<"Not an option"<<endl;	
		
		}
	}
	catch(ZooExp& exp){
		exp.DispError();
	}
	return 0;
}