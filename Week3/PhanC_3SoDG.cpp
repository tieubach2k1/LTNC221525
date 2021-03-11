#include <iostream>

using namespace std;

bool sodoiguong(int num) {
    int r, sum=0, temp;
    for(temp = num; num != 0;num = num/10){
         r = num% 10;
         sum = sum*10 + r;
    }
    if (temp == sum)  return true;
    else return false;
}
int main() {
    int n;
	cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++) {
      int dem = 0;
      for (int j = a[i]; j <= b[i]; j++) {
        if (sodoiguong(j) == true) dem++;
      }
      cout << dem << endl;
    }
    system("PAUSE");
	return 0;
}


