

#include <iostream>

using namespace std;

class fraction {
public:
    int tuso;
    int mauso;

    fraction(int a,int b) {
        tuso = a;
        mauso = b;
        cout << a <<"/" << b;
    }
};

int main()
{
    int x,y;
    cin >> x >> y;

    fraction f1(x,y);
    return 0;
}
