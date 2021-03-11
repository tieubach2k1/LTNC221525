#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    bool chek = true;
    for (int i = 0; i < n/2; i++)
            if (s[i] != s[n-i-1]) chek = false;
    (chek == true) ? cout << "Yes\n" : cout << "No\n";
    system("PAUSE");
    return 0;
}
