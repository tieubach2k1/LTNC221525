

#include <iostream>

using namespace std;

class fraction {
public:
    int a;
    int b;

    void inf() {
        cin >> a >> b;
    }
    int add() {
        return a+b;
    }
    void display() {
        cout << add();
    }
};

int main()
{
    fraction f1;
    f1.inf();
    f1.add();
    f1.display();
    return 0;
}
