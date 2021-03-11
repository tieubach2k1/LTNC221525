#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n < 2){
        cout << n << "no\n";
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 0){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }
    system("PAUSE");
    return 0;
}
