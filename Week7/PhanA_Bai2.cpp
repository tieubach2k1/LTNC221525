#include <iostream>
using namespace std;
int f(int *a)
{
	int n = sizeof(a);
	cout << n <<endl;
}
int main()
{
	int *p;
	p = new int[100];
	cout<<"ham:";
	f(p);
    cout<<"main:" <<sizeof(p)<<endl;
    return 0;
}

