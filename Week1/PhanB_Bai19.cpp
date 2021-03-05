#include <iostream>

using namespace std;


int main()
{
    int x, y, z;
    bool b;
    cin >> x >> y >> z;
    ((x >= y && y >= z) || (x <= y && y <=z)) ? b = true : b = false;
    cout << b;
    return 0;
}
