#ifndef ZOO_h
#define ZOO_h

#include <bits/stdc++.h>
#include "renderable.h"
#include "cage.h"
#include "zooexp.h"
#include "cage_handler.h"

using namespace std;

class Zoo
{
	public:
		Zoo(int, int);
		void SetCell(int, int, Cell*);
		Cell* GetCell(int x, int y);
		~Zoo();
		int GetWidth();
		int GetLength();
		void AddEntrance(Cell*);
		void AddExit(Cell*);
		Cell* GetEntrance(int);
		Cell* GetExit(int);
		int NbEntrance();
		int NbExit();

	protected:
		Cell*** c;
		const int width;
		const int length;
		vector<Cell*> entrance;
		vector<Cell*> exit;
};

#endif