#include <iostream>

using namespace std;

long F(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
        cout << F(i) << " ";
    int a0=0;
    int a1=1;
    int a2=a0+a1;
    cout << endl;
    while ( n > 2 )
    {
        cout << a2 << " ";
        a0 = a1;
        a1 = a2;
        a2 = a0 + a1;
        n--;
    }
    return 0;
}
// nhanh hon nhieu lan
