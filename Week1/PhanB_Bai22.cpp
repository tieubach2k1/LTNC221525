#include <iostream>

using namespace std;

int main()
{
    double weigh, height;
    cin >> weigh >> height;

    double BMI = weigh / (height * height);
    cout << BMI;
    return 0;
}


