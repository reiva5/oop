#include <iostream>
#include <fstream>
#include "zoo.h"

using namespace std;

int main()
{
	int length; 
	int width;
	char c;
	Cell* cell;
	Zoo *z;

	ifstream input;
	input.open("map.txt");
	if(input.is_open()){
		input>>width>>length;
		z= new Zoo(width, length);
		input.get(c);
		for(int i=0; i<length; i++)
		{
			for(int j=0; j<width; j++)
			{
				input.get(c);
				switch(c){
					case 'w':
						cell= new WaterHabitat();
						break;
					case 'x':
						cell= new LandHabitat();
						break;
					case 'o':
						cell= new AirHabitat();
						break;
					case ' ':
						cell= new Road();
						break;
					case '*':
						cell= new Park();
						break;
					case 'R':
						cell= new Restaurant();
						break;
					default:
						cell=new Road();
				}
				z->SetCell(j,i,cell);
			}
			input.get(c);
		}
		input.close();	
	}

	for(int i=0; i<length; i++)
	{
		for(int j=0; j<width; j++)
		{
			z->GetCell(j, i)->render();
		}
		cout<<endl;
	}



	return 0;
}