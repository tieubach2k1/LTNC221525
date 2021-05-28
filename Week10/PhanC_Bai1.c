 #include <iostream>
 #include <cstring>
 using namespace std;

 struct String {
 	int n;
 	char* str;

 	String constructor (const char* s1){
 		n = strlen(s1);
 		str = new char [n];
 		for(int i=0; i<n; i++)
 			str[i] = s1[i];
	 }

	 String destructor (){
	 	delete [] str;
	 }

	 void display() {
	 	cout << str << endl;
	 }

	 void append (const char* s2){
	 	int l = n+strlen(s2);
	 	char* str2 = new char [l];
	 	for(int i=0; i<n; i++) str2[i] = str[i];
	 	for(int i=n; i<l; i++) str2[i] = s2[i-n];
	 	str2[l] = '\0';
	 	delete str;
	 	str = str2;
	 	n = l;
	 }
 };

 int main(){
 	String s("Hi");
 	s.append(" somebody");
 	s.printf();

