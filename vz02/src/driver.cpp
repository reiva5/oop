#include "driver.h"
#include "json.hpp"
#include <bits/stdc++.h>

#define bug cout<<"bug";
#define nl cout<<endl;
#define boom cout<<"boom";
#define sp cout<<" ";

using namespace std;
using json=nlohmann::json;

Driver::Driver()
{
	ifstream fin;
	fin.open("map.json");
	json input;
	fin>>input;
	fin.close();

	map_length=input["ZooLength"].get<int>();
	map_width=input["ZooWidth"].get<int>();
	visited= new bool*[map_length];
	for(int i=0; i<map_length; i++)
	{
		visited[i]=new bool[map_width];
	}
}

Driver::~Driver()
{
	for(int i=0; i<map_length; i++)
	{
		delete [] visited[i];
	}
	delete [] visited;
}

void Driver::initialize_zoo(Zoo** z, CageHandler& ch)
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
		(*z)=new Zoo(map_width, map_length);
		json c=input["CellList"];
		for(auto i:c)
		{
			x = i["Lokasi"]["x"].get<int>();
			y = i["Lokasi"]["y"].get<int>();
			id = i["Cage"].get<int>();
			type = i["type"].get<string>();

			if(type=="water"){
				cell = new Cell('w', x, y);
			}
			else if(type=="land"){
				cell = new Cell('x',x,y);
			}
			else if(type=="air"){
				cell = new Cell('o',x,y);
			}
			else if(type=="road"){
				if(i["entrance"].get<bool>()){
					cell= new Cell(' ',x,y);
					(*z)->AddEntrance(cell);
				}
				else if(i["exit"].get<bool>()){
					cell=new Cell(' ',x,y);
					(*z)->AddExit(cell);
				}
				else
					cell = new Cell(' ',x,y);
			}
			else if(type=="park"){
				cell = new Cell('*',x,y);
			}
			else if(type=="restaurant"){
				cell = new Cell('R',x,y);
			}

			(*z)->SetCell(x,y,cell);
			if(id>0){
				cage=ch.GetCage(id);
				cage->AddCell(cell->GetType());
				(*z)->GetCell(x,y)->SetCage(cage);	
			}
			
		}
	}
	fin.close();
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

			if (spesies == "Elang")
			{
				a = new Animal(absis, ordinat, massa,'~', spesies, "\\Kaaaak!\\", jinak, "o", id);
			}
			else if (spesies == "Bekantan")
			{
				a = new Animal(absis, ordinat, massa,'B', spesies, "(climb tree)", jinak, "x", id);
			}
			else if (spesies == "BadakCulaSatu")
			{
				a = new Animal(absis, ordinat, massa,'C', spesies, "(bathing in mud)", jinak, "x", id);
			}
			else if (spesies == "Buaya")
			{ 
				a = new Animal(absis, ordinat, massa,'D', spesies, "(open mouth)", jinak, "xw", id);
			}
			else if (spesies == "Rusa")
			{
				a = new Animal(absis, ordinat, massa,'E', spesies, "(flaunt horn)", jinak, "x", id);
			}
			else if (spesies == "Parkit")
			{
				a = new Animal(absis, ordinat, massa,'F', spesies, "\\cuit cuit\\", jinak, "o", id);
			}
			else if (spesies =="Garuda")
			{
				a = new Animal(absis, ordinat, massa, 'G', spesies, "(spread wings)", jinak, "o", id);
			}
			else if (spesies == "HarimauSumatra")
			{
				a = new Animal(absis, ordinat, massa, 'H', spesies, "\\AUUM!!\\", jinak, "x", id);
			}
			else if (spesies == "Iguana")
			{
				a = new Animal(absis, ordinat, massa, 'I', spesies, "\\Hiss\\", jinak, "x", id);
			}
			else if (spesies == "Komodo")
			{
				a = new Animal(absis, ordinat, massa, 'J', spesies, "(stick tongue)", jinak, "x", id);
			}
			else if (spesies == "Kancil")
			{
				a = new Animal(absis, ordinat, massa, 'K', spesies, "(eat cucumber)", jinak, "x", id);
			}
			else if (spesies == "Aligator")
			{
				a = new Animal(absis, ordinat, massa, 'L', spesies, "(crawl)", jinak, "xw", id);
			}
			else if (spesies == "Macan")
			{
				a = new Animal(absis, ordinat, massa, 'M', spesies, "(stalk prey)", jinak, "x", id);
			}
			else if (spesies == "Nuri")
			{
				a = new Animal(absis, ordinat, massa, 'N', spesies, "(play ball)", jinak, "o", id);
			}
			else if (spesies == "Kakatua")
			{
				a = new Animal(absis, ordinat, massa, 'P', spesies, "\\Hello! kwak!\\", jinak, "o", id);
			}
			else if (spesies == "MantaRay")
			{
				a = new Animal(absis, ordinat, massa, 'Q', spesies, "(swim! jump!)", jinak, "w", id);
			}
			else if (spesies == "Siamang")
			{
				a = new Animal(absis, ordinat, massa, 'S', spesies, "\\Ooo Ooo\\", jinak, "x", id);
			}
			else if (spesies == "HiuMartil")
			{
				a = new Animal(absis, ordinat, massa, 'T', spesies, "(move head)", jinak, "w", id);
			}
			else if (spesies == "OrangUtan")
			{
				a = new Animal(absis, ordinat, massa, 'U', spesies, "\\Auooo\\", jinak, "x", id);
			}
			else if (spesies == "HiuKarpet")
			{
				a = new Animal(absis, ordinat, massa, 'V', spesies, "(burying in sand)", jinak, "w", id);
			}
			else if (spesies == "StingRay")
			{
				a = new Animal(absis, ordinat, massa, 'Y', spesies, "(move fin)", jinak, "w", id);
			}
			else if (spesies == "Zebra")
			{
				a = new Animal(absis, ordinat, massa, 'Z', spesies, "(running)", jinak, "x", id);
			}
			else if (spesies == "Banteng")
			{
				a = new Animal(absis, ordinat, massa, 'A', spesies, "(snort)", jinak, "x", id);
			}
			
			ah.AddAnimal(a);
			if (absis<z.GetWidth() && ordinat<z.GetLength())
			{
				z.GetCell(absis, ordinat)->SetAnimal(a);
				z.GetCell(absis, ordinat)->GetCage()->AddAnimal(a);
			}
			else
			{
				throw ZooExp(4);
			}
		}
	}
	fin.close();
}

void Driver::DisplayVirtualZoo(Zoo& z)
{
	int left, right, up, down;
	cout<<"Input left position: ";
	cin>>left;
	cout<<"Input up position: ";;
	cin>>up;
	cout<<"Input right position: ";
	cin>>right;
	cout<<"Input down position: ";
	cin>>down;
	cout<<"======================================================================"<<endl;
	cout<<"                        VIRTUAL ZOO MAP"<<endl;
	cout<<"======================================================================"<<endl;
	if(left>=0 && up>=0 && right<z.GetWidth() && down<z.GetLength()){
		for(int i=up; i<=down; i++){
			for(int j=left; j<=right; j++){
				z.GetCell(j,i)->Render();
			}
			cout<<endl;
		}	
	}
	else
		throw ZooExp(4);
}

void Driver::init_pos(Zoo& z)
{
	srand(time(NULL));
	int idx = rand()%z.NbEntrance();

	curr_x=z.GetEntrance(idx)->GetAbsis();
	curr_y=z.GetEntrance(idx)->GetOrdinat();
	for(int i=0; i<z.GetLength(); i++){
		for(int j=0; j<z.GetWidth(); j++)
		{
			visited[i][j]=false;
		}
	}
}

int Driver::GetPosX()
{
	return curr_x;
}

int Driver::GetPosY()
{
	return curr_y;
}

void Driver::TourVirtualZoo(Zoo& z)
{
	srand(time(NULL));
	bool finish=false;

	cout<<"======================================================================"<<endl;
	cout<<"                        VIRTUAL ZOO TOUR"<<endl;
	cout<<"======================================================================"<<endl;

	while(!finish){
		int init=rand()%4;
		bool found=false;
		int i=0;

		while((!found) && (i<4))
		{
			if(init==0){
				if((curr_y-1>=0)&&(z.GetCell(curr_x, curr_y-1)->GetType()==' ')&&(!visited[curr_y-1][curr_x])){
					found=true;
					visited[curr_y][curr_x]=true;
					curr_y--;
				}
				else
					init++;
			}
			else if(init==1){
				if((curr_x+1<z.GetWidth())&&(z.GetCell(curr_x+1, curr_y)->GetType()==' ')&&(!visited[curr_y][curr_x+1])){
					found=true;
					visited[curr_y][curr_x]=true;
					curr_x++;
				}
				else
					init++;
			}
			else if(init==2){
				if((curr_y+1<z.GetLength())&&(z.GetCell(curr_x, curr_y+1)->GetType()==' ')&&(!visited[curr_y+1][curr_x])){
					found=true;
					visited[curr_y][curr_x]=true;
					curr_y++;
				}
				else
					init++;
			}
			else if(init==3){
				if((curr_x-1>=0)&&(z.GetCell(curr_x-1, curr_y)->GetType()==' ')&&(!visited[curr_y][curr_x-1])){
					found=true;
					visited[curr_y][curr_x]=true;
					curr_x--;
				}
				else
					init=0;
			}

			if(!found)
				i++;
		}

		if(!found){
			finish=true;
			cout<<"No next move found"<<endl;
		}
		else{
			cout<<"You're in: "<<curr_x<<' '<<curr_y<<endl;
			if(curr_y-1>=0 && z.GetCell(curr_x, curr_y-1)->GetAnimal()!=NULL){
				z.GetCell(curr_x, curr_y-1)->GetAnimal()->interact();
			}
			if(curr_x-1>=0 && z.GetCell(curr_x-1, curr_y)->GetAnimal()!=NULL){
				z.GetCell(curr_x-1, curr_y)->GetAnimal()->interact();
			}
			if(curr_y+1<z.GetLength() && z.GetCell(curr_x, curr_y+1)->GetAnimal()!=NULL){
				z.GetCell(curr_x, curr_y+1)->GetAnimal()->interact();
			}
			if(curr_x+1<z.GetWidth() && z.GetCell(curr_x+1, curr_y)->GetAnimal()!=NULL){
				z.GetCell(curr_x+1, curr_y)->GetAnimal()->interact();
			}
			for(int i=0; i<z.NbExit(); i++){
				if(z.GetExit(i)->GetAbsis()==curr_x && z.GetExit(i)->GetOrdinat()==curr_y){
					finish=true;
					cout<<"You are in an exit!"<<endl;
				}
			}
		}		
	}	
}

void Driver::MoveAnimal(Zoo& z, AnimalHandler& ah)
{
	srand(time(NULL));
	for(int i=0; i<ah.NbAnimal(); i++){ nl
		int init=rand()%4;
		int x= ah.GetAnimal(i)->GetPosisiX();
		int y= ah.GetAnimal(i)->GetPosisiY();
		int cage= z.GetCell(x, y)->GetCage()->getId();

		if(init==0){
			if(y-1>=0 && z.GetCell(x, y-1)->GetCage()!=NULL && z.GetCell(x, y-1)->GetCage()->getId()==cage && z.GetCell(x, y-1)->GetAnimal()==NULL){
				ah.GetAnimal(i)->SetY(y-1);
				z.GetCell(x, y)->SetAnimal(NULL);
				z.GetCell(x, y-1)->SetAnimal(ah.GetAnimal(i));
			}
		}
		else if(init==1){
			if(x+1<z.GetWidth() && z.GetCell(x+1, y)->GetCage()!=NULL && z.GetCell(x+1, y)->GetCage()->getId()==cage && z.GetCell(x+1, y)->GetAnimal()==NULL){
				ah.GetAnimal(i)->SetX(x+1);
				z.GetCell(x, y)->SetAnimal(NULL);
				z.GetCell(x+1, y)->SetAnimal(ah.GetAnimal(i));
			}
		}
		else if(init==2){
			if(y+1<z.GetLength() && z.GetCell(x, y+1)->GetCage()!=NULL && z.GetCell(x, y+1)->GetCage()->getId()==cage && z.GetCell(x, y+1)->GetAnimal()==NULL){
				ah.GetAnimal(i)->SetY(y+1);
				z.GetCell(x, y)->SetAnimal(NULL);
				z.GetCell(x, y+1)->SetAnimal(ah.GetAnimal(i));
			}
		}
		else if(init==3){
			if(x-1>=0 && z.GetCell(x-1, y)->GetCage()!=NULL && z.GetCell(x-1, y)->GetCage()->getId()==cage && z.GetCell(x-1, y)->GetAnimal()==NULL){
				ah.GetAnimal(i)->SetX(x-1);
				z.GetCell(x, y)->SetAnimal(NULL);
				z.GetCell(x-1, y)->SetAnimal(ah.GetAnimal(i));
			}
		}
	}
}
