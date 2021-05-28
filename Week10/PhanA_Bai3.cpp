#include <iostream>
using namespace std;

struct Point {
	double x, y;
	Point(){};
	Point (double _x, double _y){
		_x = x;
		_y = y;
	}
	void display() {
        cout << "(" << x << ',' << y << ")";
    }
    void information() {
        cin >> x >> y;
    }
};

Point mid_point (const Point a, const Point b){
	Point c;
	c.x = (a.x+b.x)/2;
	c.y = (a.y+b.y)/2;
	return c;
}

int main(){
	Point a,b;
	a.information();
	b.information();
	Point c = mid_point (a,b);
	c.display();
	return 0;
}
