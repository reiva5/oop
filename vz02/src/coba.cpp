#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
	int GetY(){
		return Y;
	}
	int GetX(){
		return X;
	}	
	void SetX(int x){
		X=x;
	}
	/*Point(int x, int y):X(x),Y(y){

	}
	~Point(){

	}
	Point(const Point& P):X(P.X), Y(P.Y){

	}*/
private:
	int X;
	int Y;
};


class Line
{
public:
	/*Line(int x1, int y1, int x2, int y2){
		P1.X = x1;
		P2.X = x2;
		P1.Y = y1;
		P2.Y = y2;
	}*/
	void SetP1(Point P){
		P1.SetX(P.GetX());
	}
private:
	Point P1;
	Point P2;
};

int main(){
	Line L;
	//cout<<L.P1<<endl;
	return 0;
}