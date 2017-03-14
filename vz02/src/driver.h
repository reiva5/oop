#ifndef DRIVER_H
#define DRIVER_H

#include "zoo.h"
#include "animal_handler.h"
#include "cage_handler.h"

class Driver
{
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
};

#endif