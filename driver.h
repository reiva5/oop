#ifndef DRIVER_h
#define DRIVER_h

#include "zoo.h"

class Driver{
	public:
		void initialize_zoo(Zoo&, CageHandler&);
		void initialize_cage(CageHandler&);
		void initialize_animal(AnimalHandler&, Zoo&);
};

#endif