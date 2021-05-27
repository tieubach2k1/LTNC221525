#include <iostream>
#include  <numeric>

using namespace  std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main () {
    int x,y;
    cin >> x >> y;
    int z = gcd(x,y);
    if (z == 1) cout << "2 so vua nhap nguyen to cung nhau!";
        else cout << "2 so vua nhap nguyen to cung nhau!";
    return 0;
}
