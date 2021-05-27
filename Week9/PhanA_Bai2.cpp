#include<iostream>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    // delete p;  loi: con tro tro vao vung nho bi thu hoi truoc do.
    *p2 = 9;
    cout << *p2;
    delete p2;
    return 0;
}
