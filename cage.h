#ifndef CAGE_h
#define CAGE_h

#include "listanimal.h"
using namespace std;

/** @class Cage
  * Kelas Cage merepresentasikan kumpulan habitat sejenis 
  */
class Cage{
public:
	/** @brief Constructor.
	  * @param n Nilai  
	  */
	Cage(int n);
	/** @brief
	  * @param a Animal yang akan dimasukkan ke cage
	  */
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