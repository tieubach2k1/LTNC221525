#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool chek = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) chek = true;
        }
    }
    (chek == true) ? cout << "Yes\n" : cout << "No\n";
    system("PAUSE");
    return 0;
}
