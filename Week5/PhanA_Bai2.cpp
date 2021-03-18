#include <iostream>

using namespace std;

int factorialint n)
{
    cout << "n= " << n << " at " << &n << endl;
    if(n == 0) return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    system("pause");
    return 0;
}
