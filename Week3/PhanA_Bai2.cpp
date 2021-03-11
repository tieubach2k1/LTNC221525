#include <iostream>

using namespace std;

int main ()
{
    string s1;
    // a) Không khởi tạo giá trị.
    // (1) lần lượt tất cả phần tử trong mảng
    for(int i=0; i < s1.length(); i++) {
        cout << s1[i];
    }
    // (2) xâu kí tự
    cout << s1 << endl;

    // b) Khai báo và khởi tạo trong dạng string s = “abcd”.
    string s2 = "abcd";
    // (1) lần lượt tất cả phần tử trong mảng
    for(int i=0; i<s2.length(); i++){
        cout << s2[i];
    }
    cout << endl;
    // (2) xâu kí tự
    cout << s2 << endl;

    system("PAUSE");
    return 0;
}
