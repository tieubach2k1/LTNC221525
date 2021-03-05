#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 10;
    string n0 = "a";
    string n1 = "b";
    string tmp;

    cout << n0 << endl << n1 << endl;
    for (int i = 2; i < n; i++) {
        tmp = n1;
        n1 += n0;
        n0 = tmp;
        cout << n1 << endl;
    }
    return 0;
}
