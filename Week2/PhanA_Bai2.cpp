# include <iostream>

using namespace std;

int main() {
    double k;
    cin >> k;
    while (k >= 3) {
        k =(k / 3);
    }
    cout << k;
    return 0;
}
