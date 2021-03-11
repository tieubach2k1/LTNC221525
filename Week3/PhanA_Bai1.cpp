#include <iostream>

using namespace std;
// ngoai ham main()
int mangngoai[1];// câu a
// câu b
// int a[N] = {1, 2, 3, 4};
int a[] = {1, 2, 3, 4};
int main() {
    // trong ham main()
    int mangtrong[1];// câu a

    // câu b)
    // int N = 3; N < 4 báo lỗi
    int N = 5;
    int a1[N] = {1, 2, 3, 4};
    for (int i = 0; i <  sizeof(a1) / sizeof(a1[0]); i++) cout << a1[i] << " ";
    cout << endl;
    // câu c)
    int a2[] = {1, 2, 3, 4};
    for (int i = 0; i <  sizeof(a2) / sizeof(a2[0]); i++) cout << a2[i] << " ";
    cout << endl;
    system("PAUSE");
    return 0;
}
