#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime> // for time()

using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Hàm sắp xếp bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true;
            }
        }
        if(haveSwap == false){
            break;
        }
    }
}


int main() {
	int n = 30;
	int arr[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
		arr[i] =rand() % 100 +1;
    }

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
    system("PAUSE");
	return 0;
}

