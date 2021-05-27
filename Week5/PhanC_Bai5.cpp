#include<iostream>
#include<cmath>
using namespace std;
bool SoNT(int n)
{
    if (n < 2) return false;
    if (n>2 && n%2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (SoNT(i)) cout << i << " ";
    }
}
