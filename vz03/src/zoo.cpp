#include "zoo.h"
#include <iostream>

using namespace std;

Zoo::Zoo(int x, int y): width(x), length(y) {
  c = new Cell**[length];
  for(int i = 0; i < length; i++) {
    c[i] = new Cell*[width];
  }
}

Zoo::Zoo(const Zoo& z) : length(z.length) , width(z.width) {
  c = new Cell**[length];
  for (int i = 0; i < length; i++) {
    c[i] = new Cell*[width];
  }

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < width; j++) {
      c[i] = z.c[i];
    }
  }
}

Zoo& Zoo::operator= (const Zoo& z) {
  if (this != &z) {
    for(int i = 0; i<length;i++) {
      delete [] c[i];
    }
    delete [] c;

    c = new Cell**[length];
    for (int i = 0; i < length; i++) {
      c[i] = new Cell*[width];
    }

    for (int i = 0; i < length; i++) {
      for (int j = 0; j < width; j++) {
        c[i] = z.c[i];
      }
    }
  }
  return *this;
}

void Zoo::SetCell(int x, int y, Cell* cell) {
  c[y][x]=cell;
}

Cell* Zoo::GetCell(int x, int y) {
  return c[y][x];
}

Zoo::~Zoo() {
  for(int i = 0; i<length;i++) {
    delete [] c[i];
  }
  delete [] c;
}

int Zoo::GetWidth() {
  return width;
}

int Zoo::GetLength() {
  return length;
}

void Zoo::AddEntrance(Cell* c) {
  entrance.push_back(c);
}

void Zoo::AddExit(Cell* c) {
  exit.push_back(c);
}

Cell* Zoo::GetEntrance(int i) {
  if(i<entrance.size())
    return entrance[i];
  else
    return NULL;
}

Cell* Zoo::GetExit(int i) {
  if(i<exit.size())
    return exit[i];
  else
    return NULL;  
}

int Zoo::NbEntrance() {
  return entrance.size();
}

int Zoo::NbExit() {
  return exit.size();
}
