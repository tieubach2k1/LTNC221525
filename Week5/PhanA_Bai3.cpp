
#include <iostream>
using namespace std;

void th1(int n)
{
	cout << "Tham tri co dia chi la: " << &n << endl;
}

void th2(int &n)
{
	cout << "Tham bien co dia chi la: " << &n << endl;
}

int main()
{
	int a;
	cin >> a;
	cout << "Doi so co dia chi la : " << &a << endl;
	th1(a);
	th2(a);
	return 0;
}

// dia chi cua tham so truyen theo kieu tham tri khac dia chi doi so
// dia chi cua tham so truyen theo kieu tham bien giong dia chi doi so
