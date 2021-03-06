#include "driver.h"
#include "json.hpp"
#include <bits/stdc++.h>


using namespace std;
using json=nlohmann::json;

Driver::Driver() {
  ifstream fin;
  fin.open("../map/map.json");
  json input;
  fin>>input;
  fin.close();

  map_length = input["ZooLength"].get<int>();
  map_width = input["ZooWidth"].get<int>();
  visited = new bool*[map_length];
  for(int i = 0; i < map_length; i++) {
    visited[i] = new bool[map_width];
  }
}

Driver::Driver(const Driver& d) {
  visited = new bool*[map_length];
  for(int i = 0; i < map_length; i++) {
    visited[i] = new bool[map_width];
  }

  for (int i = 0; i < map_length; i++) {
    for (int j = 0; j < map_width; j++) {
      visited[i] = d.visited[i];
    }
  }
}

Driver& Driver::operator= (const Driver& d) {
  if (this != &d) {
    for(int i = 0; i < map_length; i++) {
      delete [] visited[i];
    }
    delete [] visited;
  
    visited = new bool*[map_length];
    for(int i = 0; i < map_length; i++) {
      visited[i] = new bool[map_width];
    }

    for (int i = 0; i < map_length; i++) {
      for (int j = 0; j < map_width; j++) {
        visited[i] = d.visited[i];
      }
    } 
  }
  return *this;
}

Driver::~Driver() {
  for(int i = 0; i < map_length; i++) {
    delete [] visited[i];
  }
  delete [] visited;
}

void Driver::InitZoo(Zoo** z, CageHandler& ch) {
  ifstream fin;
  fin.open("../map/map.json");
  if(fin.is_open()) {
    Cage* cage;
    Cell* cell;
    int x, y, id;
    string type;

    json input;
    fin>>input;
    (*z) = new Zoo(map_width, map_length);
    json c = input["CellList"];
    for(auto i:c) {
      x = i["Lokasi"]["x"].get<int>();
      y = i["Lokasi"]["y"].get<int>();
      id = i["Cage"].get<int>();
      type = i["type"].get<string>();

      if(type == "water") {
        cell = new WaterHabitat(x,y);
      } else if(type == "land") {
        cell = new LandHabitat(x,y);
      } else if(type == "air") {
        cell = new AirHabitat(x,y);
      } else if(type == "road") {
        if(i["entrance"].get<bool>()) {
          cell = new Entrance(x,y);
          (*z)->AddEntrance(cell);
        } else if(i["exit"].get<bool>()) {
          cell = new Exit(x,y);
          (*z)->AddExit(cell);
        } else {
          cell = new Road(x,y);
        }
      } else if(type == "park") {
        cell = new Park(x,y);
      } else if(type == "restaurant") {
        cell = new Restaurant(x,y);
      }

      (*z)->SetCell(x,y,cell);
      if(id>0){
        cage = ch.GetCage(id);
        cage->AddCell(cell->GetType());
        (*z)->GetCell(x,y)->SetCage(cage);  
      } 
    }
  }
  fin.close();
}

void Driver::InitCage(CageHandler& ch) {
  ifstream fin;
  fin.open("../map/map.json");
  json input;
  if(fin.is_open()) {
    Cage* c;
    fin>>input;
    json cage=input["CageList"];
    for(auto i:cage) {
      c = new Cage(i["Id"].get<int>(), i["Habitat"].get<string>()[0]);
      ch.AddCage(c);
    }
    fin.close();
  }
}

void Driver::InitAnimal(AnimalHandler& ah, Zoo& z) {
  ifstream fin;
  fin.open("../map/map.json");
  json input;
  if(fin.is_open()) {
    Animal* a;
    int id, massa, absis, ordinat;
    bool jinak;
    string spesies;

    fin>>input;
    json animal = input["AnimalList"];
    for(auto i: animal) {
      id = i["Id"].get<int>();
      spesies = i["Spesies"].get<string>();
      massa = i["Massa"].get<int>();
      absis = i["Lokasi"]["x"].get<int>();
      ordinat = i["Lokasi"]["y"].get<int>();
      jinak = i["Jinak"].get<bool>();

      if(spesies == "Elang")
        a = new Elang(id, absis, ordinat, massa, jinak);
      else if(spesies == "Bekantan")
        a = new Bekantan(id, absis, ordinat, massa, jinak);
      else if(spesies == "BadakCulaSatu")
        a = new BadakCulaSatu(id, absis, ordinat, massa, jinak);
      else if(spesies == "Buaya")
        a = new Buaya(id, absis, ordinat, massa, jinak);
      else if(spesies == "Rusa")
        a = new Rusa(id, absis, ordinat, massa, jinak);
      else if(spesies == "Parkit")
        a = new Parkit(id, absis, ordinat, massa, jinak);
      else if(spesies == "Garuda")
        a = new Garuda(id, absis, ordinat, massa, jinak);
      else if(spesies == "HarimauSumatra")
        a = new HarimauSumatra(id, absis, ordinat, massa, jinak);
      else if(spesies == "Iguana")
        a = new Iguana(id, absis, ordinat, massa, jinak);
      else if(spesies == "Komodo")
        a = new Komodo(id, absis, ordinat, massa, jinak);
      else if(spesies == "Kancil")
        a = new Kancil(id, absis, ordinat, massa, jinak);
      else if(spesies == "Aligator")
        a = new Aligator(id, absis, ordinat, massa, jinak);
      else if(spesies == "Macan")
        a = new Macan(id, absis, ordinat, massa, jinak);
      else if(spesies == "Nuri")
        a = new Nuri(id, absis, ordinat, massa, jinak);
      else if(spesies == "Kakatua")
        a = new Kakatua(id, absis, ordinat, massa, jinak);
      else if(spesies == "MantaRay")
        a = new MantaRay(id, absis, ordinat, massa, jinak);
      else if(spesies == "Siamang")
        a = new Siamang(id, absis, ordinat, massa, jinak);
      else if(spesies == "HiuMartil")
        a = new HiuMartil(id, absis, ordinat, massa, jinak);
      else if(spesies == "OrangUtan")
        a = new OrangUtan(id, absis, ordinat, massa, jinak);
      else if(spesies == "HiuKarpet")
        a = new HiuKarpet(id, absis, ordinat, massa, jinak);
      else if(spesies == "StingRay")
        a = new StingRay(id, absis, ordinat, massa, jinak);
      else if(spesies == "Zebra")
        a = new Zebra(id, absis, ordinat, massa, jinak);
      else if(spesies == "Banteng")
        a = new Banteng(id, absis, ordinat, massa, jinak);

      ah.AddAnimal(a);
      if(absis<z.GetWidth() && ordinat<z.GetLength()) {
        z.GetCell(absis, ordinat)->SetAnimal(a);
        z.GetCell(absis, ordinat)->GetCage()->AddAnimal(a);
      } else {
      	throw ZooExp(4);
      }
    }
  }
  fin.close();
}

void Driver::DisplayVirtualZoo(Zoo& z) {
  int left, right, up, down;
  cout<<"Input left position: ";
  cin>>left;
  cout<<"Input up position: ";;
  cin>>up;
  cout<<"Input right position: ";
  cin>>right;
  cout<<"Input down position: ";
  cin>>down;

  cout<<" ================================================================";
  cout<< "====== "<<endl;
  cout<<"                        VIRTUAL ZOO MAP"<<endl;
  cout<<" ================================================================";
  cout<<"====== "<<endl;
  if((left >= 0) && (up >= 0) && 
     (right < z.GetWidth()) && (down<z.GetLength()) &&
     (left < right) && (up<down)) {
    for(int i = up; i <= down; i++) {
      for(int j = left; j <= right; j++) {
        z.GetCell(j,i)->Render();
      }
      cout<<endl;
    }  
    Renderable::Legend();
  } else {
    throw ZooExp(4);
  }

}

void Driver::InitPosition(Zoo& z) {
  srand(time(NULL));
  int idx = rand()%z.NbEntrance();

  curr_x = z.GetEntrance(idx)->GetAbsis();
  curr_y = z.GetEntrance(idx)->GetOrdinat();
  for(int i = 0; i < z.GetLength(); i++) {
    for(int j = 0; j < z.GetWidth(); j++) {
      visited[i][j] = false;
    }
  }
}

int Driver::GetPosX() {
  return curr_x;
}

int Driver::GetPosY() {
  return curr_y;
}

void Driver::TourVirtualZoo(Zoo& z) {
  srand(time(NULL));
  bool finish=false;

  cout<<" ============================================================";
  cout<<"========== "<<endl;
  cout<<"                        VIRTUAL ZOO TOUR"<<endl;
  cout<<" ============================================================";
  cout<<"========== "<<endl;

  while(!finish) {
    int init = rand()%4;
    bool found = false;
    int i = 0;

    while((!found) && (i<4)) {
      if(init == 0) {
        if((curr_y-1 >= 0) && 
           (z.GetCell(curr_x, curr_y-1)->GetType() == ' ') &&
           (!visited[curr_y-1][curr_x])) {
          found = true;
          visited[curr_y][curr_x] = true;
          curr_y--; 
        } else {
            init++;
        }
      } else if(init == 1) {
        if((curr_x+1<z.GetWidth()) &&
           (z.GetCell(curr_x+1, curr_y)->GetType() == ' ') &&
           (!visited[curr_y][curr_x+1])){
          found = true;
          visited[curr_y][curr_x] = true;
          curr_x++;
        } else
            init++;
      } else if(init == 2) {
        if((curr_y+1<z.GetLength()) && 
           (z.GetCell(curr_x, curr_y+1)->GetType() == ' ') && 
           (!visited[curr_y+1][curr_x])){
          found = true;
          visited[curr_y][curr_x] = true;
          curr_y++;
        } else
            init++;
      } else if(init == 3) {
        if((curr_x-1 >= 0) &&
           (z.GetCell(curr_x-1, curr_y)->GetType() == ' ') &&
           (!visited[curr_y][curr_x-1])){
          found = true;
          visited[curr_y][curr_x] = true;
          curr_x--;
        } else {
            init=0;
        }
      }

      if(!found) {
        i++;
      }
    }

    if(!found) {
      finish = true;
      cout<<"No next move found"<<endl;
    }
    else {
      cout<<"You're in: "<<curr_x<<' '<<curr_y<<endl;
      if((curr_y-1 >= 0) && 
      	 (z.GetCell(curr_x, curr_y-1)->GetAnimal() != NULL)){
        z.GetCell(curr_x, curr_y-1)->GetAnimal()->Interact();
	  }
      if((curr_x-1 >= 0) && 
      	 (z.GetCell(curr_x-1, curr_y)->GetAnimal() != NULL)) {
        z.GetCell(curr_x-1, curr_y)->GetAnimal()->Interact();
      }
      if((curr_y+1 < z.GetLength()) && 
      	 (z.GetCell(curr_x, curr_y+1)->GetAnimal() != NULL)) {
      	z.GetCell(curr_x, curr_y+1)->GetAnimal()->Interact();
       }
      if((curr_x+1 < z.GetWidth()) && 
      	 (z.GetCell(curr_x+1, curr_y)->GetAnimal() != NULL)) {
        z.GetCell(curr_x+1, curr_y)->GetAnimal()->Interact();
      }

      for(int i = 0; i < z.NbExit(); i++) {
        if((z.GetExit(i)->GetAbsis() == curr_x) && 
           (z.GetExit(i)->GetOrdinat() == curr_y)) {
          finish = true;
          cout<<"You are in an exit!"<<endl;
        }
      }
    }    
  }  
}

void Driver::MoveAnimal(Zoo& z, AnimalHandler& ah) {
  srand(time(NULL));
  for(int i = 0; i<ah.NbAnimal(); i++) {
    int init = rand()%4;
    int x = ah.GetAnimal(i)->GetPosisiX();
    int y = ah.GetAnimal(i)->GetPosisiY();
    int cage = z.GetCell(x, y)->GetCage()->GetId();
    if(init == 0) {
      if((y-1>=0) && 
      	 (z.GetCell(x, y-1)->GetCage()!=NULL) && 
      	 (z.GetCell(x, y-1)->GetCage()->GetId() == cage) && 
      	 (z.GetCell(x, y-1)->GetAnimal() == NULL)) {
        ah.GetAnimal(i)->SetY(y-1);
        z.GetCell(x, y)->SetAnimal(NULL);
        z.GetCell(x, y-1)->SetAnimal(ah.GetAnimal(i));
      }
    } else if(init == 1) {
      if((x+1<z.GetWidth()) && 
      	 (z.GetCell(x+1, y)->GetCage()!=NULL) && 
      	 (z.GetCell(x+1, y)->GetCage()->GetId() == cage) && 
      	 (z.GetCell(x+1, y)->GetAnimal() == NULL)) {
        ah.GetAnimal(i)->SetX(x+1);
        z.GetCell(x, y)->SetAnimal(NULL);
        z.GetCell(x+1, y)->SetAnimal(ah.GetAnimal(i));
      }
    } else if(init == 2) {
      if((y+1<z.GetLength()) && 
      	 (z.GetCell(x, y+1)->GetCage()!=NULL) && 
      	 (z.GetCell(x, y+1)->GetCage()->GetId() == cage) && 
      	 (z.GetCell(x, y+1)->GetAnimal() == NULL)) {
        ah.GetAnimal(i)->SetY(y+1);
        z.GetCell(x, y)->SetAnimal(NULL);
        z.GetCell(x, y+1)->SetAnimal(ah.GetAnimal(i));
      }
    } else if(init == 3) {
      if((x-1>=0) && 
      	 (z.GetCell(x-1, y)->GetCage()!=NULL) && 
      	 (z.GetCell(x-1, y)->GetCage()->GetId() == cage) && 
      	 (z.GetCell(x-1, y)->GetAnimal() == NULL)) {
        ah.GetAnimal(i)->SetX(x-1);
        z.GetCell(x, y)->SetAnimal(NULL);
        z.GetCell(x-1, y)->SetAnimal(ah.GetAnimal(i));
      }
    }
  }
}
