#include <iostream>

using namespace std;

int main()
{
    int day, month, year;
    cin >> day >> month >> year;

    int JMD;
    JMD = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) +
     (365 * (year + 4800 - ((14 - month) / 12))) +
     ((year + 4800 - ((14 - month) / 12)) / 4) -
    ((year + 4800 - ((14 - month) / 12)) / 100) +
    ((year + 4800 - ((14 - month) / 12)) / 400)  - 32045) % 7;

    switch (JMD) {
        case 0 :
            cout << "Monday";
            break;
        case 1 :
            cout << "Tuesday";
            break;
        case 2 :
            cout << "Wednesday";
            break;
        case 3 :
            cout << "Thursday";
            break;
        case 4 :
            cout << "Friday";
            break;
        case 5 :
            cout << "Saturday";
            break;
        case 6 :
            cout << "Sunday";
            break;
    }
    return 0;
}
