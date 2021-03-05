# include <iostream>

using namespace std;

int main() {
    // Vòng lặp for
    int n = 100;
    for (int i = 0; i <= n; i+=2) {
        cout << i << " ";
    }
    cout << endl;

    // Vòng lặp while

    int x = 0;
    while (x >= 0 && x <= 100)
    {
        cout << x << " ";
        x += 2;
    }
    cout << endl;

    // Vòng lặp do while

    int y = 0;
    do
    {
        cout << y << " ";
        y += 2;
    }
    while (y <= 100);

    return 0;
}
