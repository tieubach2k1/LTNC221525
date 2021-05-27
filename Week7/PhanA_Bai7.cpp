#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	char a[100], b[100];
	cout<<"nhap a:";
	cin.getline(a,100);
	cout<<"nhap b:";
	cin.getline(b,100);
	int count = 0;
	for(int i=0;i<strlen(b);i++) {
		char s[100] = " ";
		s[0] = b[i];
		int k=1;
		for(int j=i+1;j<i+strlen(a);j++) {
            s[k] = b[j];
            k++;
		}
		if(strcmp(a,s)==0) count++;
	}
	cout << count;
	return 0;
}
