#include "animal.h"
#include "cage.h"
#include "cell.h"
#include "json.hpp"
#include <fstream>
#include "cage_handler.h"

using namespace std;
using json=nlohmann::json;

CageHandler::CageHandler()
{
	n=0;
}

Cage* CageHandler::GetCage(int id)
{
	bool found=false;
	int i=0;
	while((!found) && (i<n)){
		if(cagelist[i]->getId()==id)
			found=true;
		else
			i++;
	}
	if(found)
		return cagelist[i];
	else
		return NULL;
}

int CageHandler::NbCage()
{
	return n;
}

CageHandler::~CageHandler()
{
	for (int i=0; i<n; i++)
	{
		delete cagelist[i];
	}
}

void CageHandler::AddCage(Cage* c)
{
	cagelist.push_back(c);
	n++;
}
