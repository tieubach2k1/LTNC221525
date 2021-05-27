
#include <iostream>
using namespace std;

int strlen (char s[]){
	int k = 0;
	while(s[k] != '\0'){
		k++;
	}
	return k;
}

char *reverse(char x[])
{
    char *y = new char;
    string s = x;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        *(y + i) = *(x + n - i - 1);
    }
    *(y + n) = '\0';
    return y;
}

char *delete_char(char x[], char z)
{
    char *y = new char;
    string s = x;
    int n = s.length(), k = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(x + i) != z){
            *(y + k) = *(x + i); k++;
        }
    }
    *(y + k) = '\0';
    return y;
}

char *pad_right(char x[], int n)
{
    char *y = new char;
    string s = x;
    int n1 = s.length();

    for (int i = 0; i < n1; i++) *(y + i) = *(x + i);
    if (n1 > n) return y;
    for (int i = n1; i < n; i++) *(y + i) = '_';
    *(y + n) = '\0';
    return y;
}
char *pad_left(char x[], int n)
{
    char *y = new char;
    string s = x;
    int n1 = s.length(), k = 0;

    for (int i = 0; i < n - n1; i++) *(y + i) = '_';
    if (n - n1 > 0) k = n - n1;
    for (int i = k; i < n1 + k; i++) *(y + i) = *(y + i - k);

    if (n < n1) *(y + n1) = '\0';
    else *(y + n) = '\0';
    return y;
}
void leftPad(string &str, size_t paddedLength, const char ch = '_') {
  int strSize = str.size();
  if (paddedLength > strSize) {
    str.insert(0, paddedLength - strSize, ch);
  }
  cout << str << endl;
}
char *truncate(char x[], int n)
{
    char *y = new char;
    string s = x;
    int n1 = s.length();

    if (n1 < n) n = n1;
    for (int i = 0; i < n; i++) *(y + i) = *(x + i);

    *(y + n) = '\0';
    return y;
}

bool is_palindrome(char x[])
{
    string s = x;
    int n = s.length();

    for (int i = 0; i < n / 2; i++) {
        if (*(x + i) != *(x + n - i - 1)) return false;
    }
    return true;
}

char *trim_left(char x[])
{
    char *y = new char;
    string s = x;
    int n = s.length(), k = 0;

    while (*(x + k) == ' ') k++;
    for (int i = k; i < n - k; i++) *(y + i) = *(x + i - k);
    *(y + n - k) = '\0';
    return y;
}

char *trim_right(char x[])
{
    string s = x;
    int n = s.length(), k = n;

    while (*(x + k - 1) == ' ') k--;
    *(x + k) = '\0';
    return x;
}

int main(){

    cout << "\nCau a. Dao xau: \n";
    char *a = new char;
    cin >> a;
    a = reverse(a);
    cout << a;
    delete a;

    cout << "\nCau b. Xoa ky tu c: \n";
    char *b = new char;
    char kytu;
    cin >> b >> kytu;
    b = delete_char(b, kytu);
    cout << b;
    delete b;

    cout << "\nCau c. Don phai: \n";
    char *c = new char;
    int n1;
    cin >> c >> n1;
    c = pad_right(c, n1);
    cout << c;
    delete c;

	cout << "\nCau d. Don trai: \n";
    string str;
    int n2;
    cin >> str;
    cin >> n2;
    leftPad(str,n2);

	cout << "\nCau e. Cat xau: \n";
    char *e = new char;
    int n3;
    cin >> e >> n3;
    e = truncate(e, n3);
    cout << e;
    delete e;

	cout << "\nCau f. Doi Guong: \n";
    char *f = new char;
    cin >> f;
    if(is_palindrome(f)) cout << "Xau doi xung!";
        else cout << "Xau khong doi xung!";
    delete f;

	cout << "\nCau g. Loc trai: \n";
    char *g = new char;
    cin >> g;
    g = trim_left(g);
    cout << g;
    delete g;

    cout << "\nCau h. Loc phai: \n";
    char *h = new char;
    cin >> h;
    h = trim_right(h);
    cout << h;
    delete h;
	return 0;
}
