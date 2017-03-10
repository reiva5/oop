#ifndef CAGE_h
#define CAGE_h

using namespace std;

class Animal{
	public:
		string interact;
};

class Cage{
	public:
		Cage(int n);
		void AddAnimal(Animal& a);
	protected:
		int luas;
		int countAnimal;
		int pintuX;
		int pintuY;
		const int habitat;
		int jumlahMakanan;
};

#endif