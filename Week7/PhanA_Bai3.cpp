#include <iostream>

using namespace std;

void countEven( int *x, int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> *(x+i);
    }
    for (int i=0; i<5; i++)
    {
        if (*(x+i)%2 == 0)
        {
            cout << *(x+i) << " ";
        }
    }
    cout << endl;
    for (int i=n-1; i>n-6; i--)
    {
        if (*(x+i)%2 == 0)
        {
            cout << *(x+i) << " ";
        }
    }
}

int main()
{
    int a[20];
    countEven(a,20);
    return 0;
}
