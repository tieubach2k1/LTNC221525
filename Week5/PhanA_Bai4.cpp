#include <iostream>
using namespace std;

void xau(string x)
{
	cout << &x << endl;
}
int main()
{
	string a = "abcd";
	cout << &a << endl;
	xau(a);
	return 0;
}
 //a. mang duoc truyen theo kieu tham bien pass-by-reference

 //b. string duoc truyen theo kieu tham tri pass-by-value

