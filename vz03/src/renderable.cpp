#include "renderable.h"
#include <iostream>

using namespace std;

void Renderable::Banner() {
	cout<<"===========================================================";
	cout <<"==========="<<endl;
	cout<<"____   ____.__         __               .__    __________  ";
	cout<< "           "<<endl;
	cout<<"\\   \\ /   /|__|_______/  |_ __ _______  |  |   \\____    /____  ";
	cout<<" ____  "<<endl;
	cout<<" \\   Y   / |  \\_  __ \\   __\\  |  \\__  \\ |  |     /     //  _ ";
	cout<<"\\ /  _ \\ "<<endl;
	cout<<"  \\     /  |  ||  | \\/|  | |  |  // __ \\|  |__  /     /(  <_> |";
	cout << "  <_> )"<<endl;
	cout<<"   \\___/   |__||__|   |__| |____/(____  /____/ /_______ \\____/";
	cout<<" \\____/ "<<endl;
	cout<<"                                      \\/               \\/     ";
	cout<<"    	   "<<endl;
	cout<<"=================================================================";
	cout<< "====="<<endl;
	cout<<"Pilih menu: 1.display 2.tour 3.jumlahMakanan 4.exit "<<endl;
}

void Renderable::Legend(){
	cout<<"========================L E G E N D ======================="<<endl;
	cout<<"||                  -----Animal-----                     ||"<<endl;
	cout<<"||A = Banteng	B = Bekantan		C = BadakCulaSatu||"<<endl;
	cout<<"||D = Buaya	E = Rusa		F = Parkit       ||"<<endl;
	cout<<"||G = Garuda	H = HarimauSumatra	I = Iguana       ||"<<endl;
	cout<<"||J = Komodo	K = Kancil		L = Aligator     ||"<<endl;
	cout<<"||M = Macan	N = Nuri		P = Kakatua      ||"<<endl;
	cout<<"||Q = MantaRay	S = Siamang		T = HiuMartil    ||"<<endl;
	cout<<"||U = OrangUtan	V = HiuKarpet		Y = StingRay     ||"<<endl;
	cout<<"||Z = Zebra	~ = Elang                                ||"<<endl;
	cout<<"||                  -----Habitat-----                    ||"<<endl;
	cout<<"||w = water	o = air			x = land         ||"<<endl;
	cout<<"||W = Cage waterO = Cage air		X = Cage land    ||"<<endl;
	cout<<"||                 -----Facility-----                    ||"<<endl;
	cout<<"||' ' = road	R = Restaurant		* = Park         ||"<<endl;
	cout<<"==========================================================="<<endl;
}
