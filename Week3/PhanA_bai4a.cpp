#include <iostream>

using namespace std;

int main() {
    char a[4] = {1, 2, 3, 4};
    cout << a[-1] << endl;
    cout << a[5] << endl;   // N
    cout << a[6] << endl;   // N+1
    cout << a[7] << endl;   // N+2
    cout << a[8] << endl;   // 2*N

    system("PAUSE");
    return 0;
}
/*
Kq in ra man hinh

p
B

►

*/
