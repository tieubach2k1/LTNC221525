#include <iostream>

using namespace std;
int a[100], b[100];
int n;

void tohop(int x)
{
	for(int i = 1 ; i <= n ; i++){
        if( b[i] == 0){
            b[i] = 1;
            a[x] = i;
            for(int j = 1; j <= x; j++) cout << a[j] << " ";
            cout << endl;
            if ( x+1 <= n ) tohop( x+1 );
            b[i] = 0;
        }
    }
}
int main()
{

  	cin>>n;
    tohop(1);
    return 0;
}
