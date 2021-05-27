#include <iostream>
using namespace std;

int value1=29;
int value2=92;
void value3(int &value3)
{
	cout << "value3 at " << &value3 << endl;
}
void value4(int &value4)
{
	cout << "value4 at " << &value4 << endl;
}

int main()
{
	cout << "value1 at " << &value1 << endl;
	value3(value1);
	cout << "value2 at " << &value2 << endl;
	value4(value2);
	return 0;
}



//a. bien tham chieu va bien va no chieu toi la mot bien
//b. co the khai bao mot tham chieu ma chua chieu ngay no toi mot bien thuong
//c. co the chieu mot tham chieu toi mot bien khac voi dich ban dau.

