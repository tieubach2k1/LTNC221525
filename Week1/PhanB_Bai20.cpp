
#include <iostream>

using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;
    (a%7 == 0 && b%7 == 0) ? cout << "true" : cout << "false";
    return 0;
}
