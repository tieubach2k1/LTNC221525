#include <iostream>
#include <ctime>

using namespace std;
int search(int* a, int key, int low, int high)
{
    while(low != high){
		if(low > high) return -1;
		int d = (low + high)/2;
		if(a[d] == key) return d;
		if(a[d] > key) {
			high = d - 1;
		} else if (a[d] < key) {
			low = d + 1;
		}
	} return low;
}

int main() {
    srand(time(NULL));
    int a[20];
    int *p, key;
    p = a;
    for (int i = 0; i < 20; i++) {
        p[i] = rand() % (50 - 1 + 1) +1;
	}
	for (int i = 0; i < 20; i++) {
        cout << p[i] << " ";
	}

	cin >> key;
	int ans = search(p,key,0,19);
	if (ans <= 0) cout << "\nKhong co trong day so";
	else cout << "\nVi tri cua so nhap vao trong day so la: " << ans;

    return 0;
}


