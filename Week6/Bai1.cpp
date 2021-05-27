#include<iostream>
using namespace std;
void f(int k[])
{
    cout << &k << ' ' << &k[0] << endl;
}
int main()
{
    int A[2] = {1, 2};
    f(A);
    cout << &A << ' ' << &A[0] << endl;
    return 0;
}
// địa chỉ của A khác nhau, địa chỉ của phần tử đầu tiên giống nhau
