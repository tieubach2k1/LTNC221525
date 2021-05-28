#include<iostream>
using namespace std;
struct A
{
	char *name;
};
struct B
{
	int score;
};
int main()
{
	A array[2];
    //B array1[100];
	array[1].name = "LHA";

	cout<<array[1].name;

	return 0;
}

// khi sao chep to mot struct khac ct ko chay
// sao chep duoc toi mang
