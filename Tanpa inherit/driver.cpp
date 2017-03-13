#include "driver.h"
#include "json.hpp"
#include <bits/stdc++.h>


using namespace std;
using json=nlohmann::json;

Driver::Driver()
{
	ifstream fin;
	fin.open("map.json");
	json input;
	fin>>input;

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

			if(type=="water")
				cell = new WaterHabitat(x,y);
			else if(type=="land")
				cell = new LandHabitat(x,y);
			else if(type=="air")
				cell =  new AirHabitat(x,y);
			else if(type=="road"){
				if(i["entrance"].get<bool>()){
					cell= new Entrance(x,y);
					(*z)->AddEntrance(cell);
				}
				else if(i["exit"].get<bool>()){
					cell=new Exit(x,y);
					(*z)->AddExit(cell);
				}
				else
					cell = new Road(x,y);
			}
			else if(type=="park")
				cell = new Park(x,y);
			else if(type=="restaurant")
				cell = new Restaurant(x,y);

			(*z)->SetCell(x,y,cell);
			if(id>0){
				cage=ch.GetCage(id);
				cage->AddCell(cell->getType());
				(*z)->GetCell(x,y)->setCage(cage);	
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

			if(spesies=="Elang"){
				e = new Elang(id, absis, ordinat, massa, jinak);
				*a=e->GetAnimal();
			}else if(spesies=="Bekantan"){
				B = new Bekantan(id,absis,ordinat,massa,jinak);
				*a=B->GetAnimal();
			}else if(spesies=="BadakCulaSatu"){
				C = new BadakCulaSatu(id, absis, ordinat, massa, jinak);
				*a=C->GetAnimal();
			}else if(spesies=="Buaya"){
				D = new Buaya(id, absis, ordinat, massa, jinak);
				*a=D->GetAnimal();
			}else if(spesies=="Rusa"){
				E = new Rusa(id, absis, ordinat, massa, jinak);
				*a=E->GetAnimal();
			}else if(spesies=="Parkit"){
				F = new Parkit(id, absis, ordinat, massa, jinak);
				*a=F->GetAnimal();
			}else if(spesies=="Garuda"){
				G = new Garuda(id, absis, ordinat, massa, jinak);
				*a=G->GetAnimal();
			}else if(spesies=="HarimauSumatra"){
				H = new HarimauSumatra(id, absis, ordinat, massa, jinak);
				*a=H->GetAnimal();
			}else if(spesies=="Iguana"){
				I = new Iguana(id, absis, ordinat, massa, jinak);
				*a=I->GetAnimal();
			}else if(spesies=="Komodo"){
				J = new Komodo(id, absis, ordinat, massa, jinak);
				*a=J->GetAnimal();
			}else if(spesies=="Kancil"){
				K = new Kancil(id, absis, ordinat, massa, jinak);
				*a=K->GetAnimal();
			}else if(spesies=="Aligator"){
				L = new Aligator(id, absis, ordinat, massa, jinak);
				*a=L->GetAnimal();
			}else if(spesies=="Macan"){
				M = new Macan(id, absis, ordinat, massa, jinak);
				*a=M->GetAnimal();
			}else if(spesies=="Nuri"){
				N = new Nuri(id, absis, ordinat, massa, jinak);
				*a=N->GetAnimal();
			}else if(spesies=="Kakatua"){
				P = new Kakatua(id, absis, ordinat, massa, jinak);
				*a=P->GetAnimal();
			}else if(spesies=="MantaRay"){
				Q = new MantaRay(id, absis, ordinat, massa, jinak);
				*a=Q->GetAnimal();
			}else if(spesies=="Siamang"){
				S = new Siamang(id, absis, ordinat, massa, jinak);
				*a=S->GetAnimal();
			}else if(spesies=="HiuMartil"){
				T = new HiuMartil(id, absis, ordinat, massa, jinak);
				*a=T->GetAnimal();
			}else if(spesies=="OrangUtan"){
				U = new OrangUtan(id, absis, ordinat, massa, jinak);
				*a=U->GetAnimal();
			}else if(spesies=="HiuKarpet"){
				V = new HiuKarpet(id, absis, ordinat, massa, jinak);
				*a=V->GetAnimal();
			}else if(spesies=="StingRay"){
				Y = new StingRay(id, absis, ordinat, massa, jinak);
				*a=Y->GetAnimal();
			}else if(spesies=="Zebra"){
				Z = new Zebra(id, absis, ordinat, massa, jinak);
				*a=Z->GetAnimal();
			}else if(spesies=="Banteng"){
				A = new Banteng(id, absis, ordinat, massa, jinak);
				*a=A->GetAnimal();
			}
			ah.AddAnimal(a);
			if(absis<z.GetWidth() && ordinat<z.GetLength()){
				z.GetCell(absis, ordinat)->setAnimal(a);
				z.GetCell(absis, ordinat)->getCage()->AddAnimal(a);
			}
			else
				throw ZooExp(4);
		}
	}
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
				z.GetCell(j,i)->render();
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
				if((curr_y-1>=0)&&(z.GetCell(curr_x, curr_y-1)->getType()==' ')&&(!visited[curr_y-1][curr_x])){
					found=true;
					visited[curr_y][curr_x]=true;
					curr_y--;
				}
				else
					init++;
			}
			else if(init==1){
				if((curr_x+1<z.GetWidth())&&(z.GetCell(curr_x+1, curr_y)->getType()==' ')&&(!visited[curr_y][curr_x+1])){
					found=true;
					visited[curr_y][curr_x]=true;
					curr_x++;
				}
				else
					init++;
			}
			else if(init==2){
				if((curr_y+1<z.GetLength())&&(z.GetCell(curr_x, curr_y+1)->getType()==' ')&&(!visited[curr_y+1][curr_x])){
					found=true;
					visited[curr_y][curr_x]=true;
					curr_y++;
				}
				else
					init++;
			}
			else if(init==3){
				if((curr_x-1>=0)&&(z.GetCell(curr_x-1, curr_y)->getType()==' ')&&(!visited[curr_y][curr_x-1])){
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
			if(curr_y-1>=0 && z.GetCell(curr_x, curr_y-1)->getAnimal()!=NULL){
				z.GetCell(curr_x, curr_y-1)->getAnimal()->animal.interact();
			}
			if(curr_x-1>=0 && z.GetCell(curr_x-1, curr_y)->getAnimal()!=NULL){
				z.GetCell(curr_x-1, curr_y)->getAnimal()->interact();
			}
			if(curr_y+1<z.GetLength() && z.GetCell(curr_x, curr_y+1)->getAnimal()!=NULL){
				z.GetCell(curr_x, curr_y+1)->getAnimal()->interact();
			}
			if(curr_x+1<z.GetWidth() && z.GetCell(curr_x+1, curr_y)->getAnimal()!=NULL){
				z.GetCell(curr_x+1, curr_y)->getAnimal()->interact();
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
	for(int i=0; i<ah.NbAnimal(); i++){
		int init=rand()%4;
		int x= ah.GetAnimal(i)->GetPosisiX();
		int y= ah.GetAnimal(i)->GetPosisiY();
		int cage= z.GetCell(x, y)->getCage()->getId();
		if(init==0){
			if(y-1>=0 && z.GetCell(x, y-1)->getCage()!=NULL && z.GetCell(x, y-1)->getCage()->getId()==cage && z.GetCell(x, y-1)->getAnimal()==NULL){
				ah.GetAnimal(i)->SetY(y-1);
				z.GetCell(x, y)->setAnimal(NULL);
				z.GetCell(x, y-1)->setAnimal(ah.GetAnimal(i));
			}
		}
		else if(init==1){
			if(x+1<z.GetWidth() && z.GetCell(x+1, y)->getCage()!=NULL && z.GetCell(x+1, y)->getCage()->getId()==cage && z.GetCell(x+1, y)->getAnimal()==NULL){
				ah.GetAnimal(i)->SetX(x+1);
				z.GetCell(x, y)->setAnimal(NULL);
				z.GetCell(x+1, y)->setAnimal(ah.GetAnimal(i));
			}
		}
		else if(init==2){
			if(y+1<z.GetLength() && z.GetCell(x, y+1)->getCage()!=NULL && z.GetCell(x, y+1)->getCage()->getId()==cage && z.GetCell(x, y+1)->getAnimal()==NULL){
				ah.GetAnimal(i)->SetY(y+1);
				z.GetCell(x, y)->setAnimal(NULL);
				z.GetCell(x, y+1)->setAnimal(ah.GetAnimal(i));
			}
		}
		else if(init==3){
			if(x-1>=0 && z.GetCell(x-1, y)->getCage()!=NULL && z.GetCell(x-1, y)->getCage()->getId()==cage && z.GetCell(x-1, y)->getAnimal()==NULL){
				ah.GetAnimal(i)->SetX(x-1);
				z.GetCell(x, y)->setAnimal(NULL);
				z.GetCell(x-1, y)->setAnimal(ah.GetAnimal(i));
			}
		}
	}
}