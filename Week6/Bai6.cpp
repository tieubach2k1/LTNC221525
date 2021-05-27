#include <iostream>

using namespace std;

int count(int k)
{
    int arr[9999];
    k++;
    cout << k << endl;
    count(k);

}

int main()
{
    int n=0;
    count(n);
    return 0;
}
// mang 99999 ptu chi den duoc tang thu 51
