#ifndef DRIVER_H
#define DRIVER_H

#include "zoo.h"

class Driver{
	public:
		Driver();
		~Driver();
		void initialize_zoo(Zoo**, CageHandler&);
		void initialize_cage(CageHandler&);
		void initialize_animal(AnimalHandler&, Zoo&);
		void DisplayVirtualZoo(Zoo&);
		void init_pos(Zoo&);
		int GetPosX();
		int GetPosY();
		void TourVirtualZoo(Zoo&);
		void MoveAnimal(Zoo&, AnimalHandler&);

	private:
		int curr_x;
		int curr_y;
		bool** visited;
		int map_width;
		int map_length;
		Animal *animal;
		Banteng* A;
		Bekantan* B;
		BadakCulaSatu* C;
		Buaya* D;
		Rusa* E;
		Parkit* F;
		Garuda* G;
		HarimauSumatra* H;
		Iguana* I;
		Komodo* J;
		Kancil* K;
		Aligator* L;
		Macan* M;
		Nuri* N;
		Kakatua* P;
		MantaRay* Q;
		Siamang* S;
		HiuMartil* T;
		OrangUtan* U;
		HiuKarpet* V;
		StingRay* Y;
		Zebra* Z;
		Elang* e;

};

#endif