#include <iostream>

using namespace std;

int main() {
    char a[4] = {1, 2, 3, 4};

    a[-1] = '1';
    a[4] = '2';
    a[5] = '3';
    cout << a[-1] << endl;
    cout << a[4] << endl;
    cout << a[5] << endl;
    system("PAUSE");
    return 0;
}
/*
Kq in ra man hinh
1
2
3
*/
