#include <iostream>

using namespace std;

void caua()
{
     char a[4] = "abc";
     for (char *cp = a; (*cp) != '\0'; cp++) {
     cout << (void*) cp << " : " << (*cp) << endl;
     }
}

void caub()
{
    int a[]={ 1, 2, 3, 4, 5 };
    for (int *cp=a; (*cp)!='\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
}


void cauc()
{
    double a[]={ 1, 2, 3, 4, 5 };
    double *cp=a;
    for (int i=0;i<5;i++) {
        cout << (void*)(cp+i) << " : " << *(cp+i) << endl;
    }
}

void caud()
{
    double a[]={ 1, 2, 3, 4, 5 };
    double *cp=a;
    for (int i=0;i<5;i++) {
        cout << (void*)(cp) << " : " << *(cp) << endl;
        cp+=2;
    }
}

int main() {
    cout <<"Cau a:\n";
    caua();
    cout <<"\nCau b:\n";
    caub();
    cout <<"\nCau c:\n";
    cauc();
    cout <<"\nCau d:\n";
    caud();
    return 0;
}
