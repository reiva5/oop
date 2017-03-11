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
	Driver driver;
	Zoo z(width,length);
	
	try{
		driver.initialize_cage(c);
		driver.initialize_zoo(z, c);
		driver.initialize_animal(ah, z);	
		for(int i=0; i<width; i++){
			for(int j=0; j<length; j++){
				z.GetCell(j,i)->render();
			}
			cout<<endl;
		}
	}
	catch(ZooExp& exp){
		exp.DispError();
	}

	return 0;
}