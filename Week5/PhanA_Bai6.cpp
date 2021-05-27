#include <iostream>
#include <ctime>
using namespace std;


int vong_lap(int n, int a[], int low, int high)
{
	while(low != high){
		if(low > high) return -1;
		int d = (low + high)/2;
		if(a[d] == n) return d;
		if(a[d] > n) {
			high = d - 1;
		} else if (a[d] < n) {
			low = d + 1;
		}
	} return low;
}


int de_quy(int key, int a[], int low, int high)
{
	if (high >= low) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key)
            return mid;
        if (a[mid] > key)
            return de_quy(key, a, low, mid - 1);
        return de_quy(key, a, mid + 1, high);
    }
    return -1;
}
int main()
{
	srand(time(NULL));
	int a[20];
	for (int i = 0; i < 20; i++) {
        a[i] = rand() % (50 - 1 + 1) +1;
	}

	for (int i = 0; i < 20; i++) {
        cout << a[i] << " ";
	}
	int key;
	cout << endl;
	cin >> key;
	int ans1 = vong_lap(key, a, 0, 19);
	int ans2 = de_quy(key, a, 0, 19);
	if (ans1 <= 0) cout << "\nKhong co trong day so";
		else cout << "\nVi tri cua so nhap vao trong day so la: " << ans1;
//	if (ans2 <= 0) cout << "\nKhong co trong day so";
//		else cout << "\nVi tri cua so nhap vao trong day so la: " << ans2;
	return 0;
}
