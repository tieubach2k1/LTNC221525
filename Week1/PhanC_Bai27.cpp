#include <iostream>

using namespace std;

int main() {
    int n;
    while ( cin >> n ) {
        if (n != -1) {
            if (n > 0 && (n % 5) == 0) cout << n / 5 << endl;
            else    cout << "-1" << endl;
        }
        else {
            cout << "bye";
            break;
        }
    }
    return 0;
}
