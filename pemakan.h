#ifndef PEMAKAN_H
#define PEMAKAN_H

class Karnivora
{
public:
	Karnivora(int n);
	int GetAmount();
protected:
	int daging;
};

class Herbivora
{
public:
	Herbivora(int n);
	int GetAmount();
protected:
	int tumbuhan;	
};

class Omnivora
{
public:
	Omnivora(int n);
	int GetAmount();
protected:
	int daging_tumbuhan;
};

#endif 