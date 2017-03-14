#ifndef ZOOEXP_h
#define ZOOEXP_h

#include "zooexp.h"
#include <string>
using namespace std;

class ZooExp{
	public:
		ZooExp(int);
		void DispError();
		static int NbExp();
	private:
		const int msg_id;
		static int n;
		static string msg [];
};

#endif