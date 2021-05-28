#include <iostream>
using namespace std;

struct Point {
	double x, y;
	Point(){};
	Point (double _x, double _y){
		_x = x;
		_y = y;
	}
};

int main(){
	Point p;
	cout << &p << ' ' << &p.x << ' ' << &p.y;
	return 0;
}

// Dia chi cua p giong voi dia chi cua p.x
// Dia chi cua p.y nam o o ben canh p.x.
