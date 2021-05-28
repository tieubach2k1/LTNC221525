 #include <iostream>
 #include <cstring>
 using namespace std;

 struct String {
 	char* str;
 	int n;

 	String (const char* _s) {
 		n = strlen(_s);
 		str = new char [n];
 		for(int i=0; i<n; i++)
 			str[i] = _s[i];
	 }

	 ~String (){
	 	delete [] str;
	 }

	 void print(){
	 	cout << str << endl;
	 }

	 void append (const char* _s){
	 	int l = n + strlen(_s);
	 	char* str2 = new char [l];
	 	for(int i=0; i<n; i++) str2[i] = str[i];
	 	for(int i=n; i<l; i++) str2[i] = _s[i-n];
	 	str2[l] = '\0';
	 	delete str;
	 	str = str2;
	 	n = l;
	 }
 };

 int main(){
 	String greeting("Hi");
 	greeting.append(" there");
 	greeting.print();
 	return 0;
 }
