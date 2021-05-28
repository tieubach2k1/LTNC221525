#include<iostream>

using namespace std;

struct Point
{
    double x;
    double y;
    Point(){};
    Point(double _x, double _y) {
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

int main()
{
    Point a;
    a.information();
    a.display();
    return 0;
}

