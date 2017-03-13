#include <iostream>
#include <fstream>
#include "zoo.h"
#include "driver.h"
#include "json.hpp"
#include "zooexp.h"

using namespace std;
using json=nlohmann::json;

int main() {
	CageHandler c; 
	AnimalHandler ah;
	Zoo **z;
	z = new Zoo*;
	Driver driver;
	bool finished = false;
	int option;
	try {
		driver.InitCage(c);
		driver.InitZoo(z, c);
		driver.InitAnimal(ah, **z);	
		while(!finished) {
				Renderable::Banner();
				cin>>option;
				if(option==1) {
					driver.DisplayVirtualZoo(**z);
				}
				else if(option==2) {
					driver.InitPosition(**z);	
					driver.TourVirtualZoo(**z);
					driver.MoveAnimal(**z, ah);
				}
				else if(option==3) {
					cout<<"Jumlah kebutuhan makanan per hari adalah "
					    << ah.JumlahMakanan() << " gram"<<endl;
				}
				else if(option==4)
					finished=true;
				else
					cout<<"Not an option"<<endl;	
		}
		delete z;
	}
	catch(ZooExp& exp) {
		exp.DispError();
	}
	return 0;
}