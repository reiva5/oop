#include "cage_handler.h"

CageHandler::CageHandler() {
  n=0;
}

Cage* CageHandler::GetCage(int id) {
  bool found = false;
  int i = 0;
  while((!found) && (i<n)) {
    if(list_cage[i]->GetId()==id)
      found = true;
    else
      i++;
  }

  if(found)
    return list_cage[i];
  else
    return NULL;
}

int CageHandler::NbCage() {
  return n;
}

CageHandler::~CageHandler() {
  for(int i = 0; i < n; i++) {
    delete list_cage[i];
  }
}

void CageHandler::AddCage(Cage* c) {
  list_cage.push_back(c);
  n++;
}