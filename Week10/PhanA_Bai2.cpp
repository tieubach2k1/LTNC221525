#include <iostream>
using namespace std;

struct Point{
	double x,y;
	Point(){};
	Point (double _x, double _y){
		_x = x;
		_y = y;
	}
};

void pass_by_value (Point p){
	cout << &p << endl;
}

void pass_by_reference (Point &p){
	cout << &p << endl;
}

int main(){
	Point n;
	cout << &n << endl;
	cout << "Pass by value: ";
	pass_by_value(n);
	cout << "Pass by reference: ";
	pass_by_reference(n);
	return 0;
}
