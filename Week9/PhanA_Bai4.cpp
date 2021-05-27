#include<iostream>
using namespace std;

int main()
{
	int a = 5;
	int *p = &a;
	delete p;
	cout << *p;
	return 0;
}
// mat du lieu
