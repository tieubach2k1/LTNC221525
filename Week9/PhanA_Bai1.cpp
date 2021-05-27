#include <iostream>
#include <cstring>

using namespace std;
char* concat(const char* a, const char* b)
{
	char *point = new char;
	int x = strlen(a);
	int y = strlen(b);
	for(int i=0;i<x;i++) {
	*(point+i) = *(a+i);
   }
	for(int i=x;i<x+y;i++) {
	*(point+i) = *b;
	b++;
   }
   *(point+(x+y)) = '\0';
	return point;
}
int main() {
	char s1[] = "Hello";
    char s2[] = " World";
    char *s = concat(s1, s2);
    cout << s;
    delete [] s;
	return 0;
}
