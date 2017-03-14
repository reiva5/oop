#ifndef CAGE_HANDLER_H
#define CAGE_HANDLER_H

#include <vector>
#include <string>
#include "zooexp.h"
#include "animal.h"

using namespace std;

class CageHandler
{
	public:
		CageHandler();
		Cage* GetCage(int);
		int NbCage();
		~CageHandler();
		void AddCage(Cage*);
	private:
		vector<Cage*> cagelist;
		int n;
};

#endif