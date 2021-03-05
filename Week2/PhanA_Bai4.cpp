#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int day, month, year, k;
    char c;
    cin >> day >> c >> month >> c >> year;

    while (cin >> k) {
        if (k == 0) break;
        else {
            int daym[12];
            daym[1] = daym[3] = daym[5] = daym[7] = daym[8] = daym[10] = daym[12] = 31;
            daym[4] = daym[6] = daym[9] = daym[11] = 30;
            if ((year %400) == 0 || ((year % 4) == 0 && (year % 100) != 0)) daym[2] = 29;
            else daym[2] = 28;

            day = day + k;
            if ( day < daym[month] && day > 0) cout << setw(2) << setfill('0') << day << "-" << setw(2) << setfill('0') << month << "-" << year << endl;
            else  if (day >= daym[month]) {
                while ( day > daym[month]) {
                    day = day - daym[month];
                    month++;
                    if (month > 12) {
                        month = month - 12;
                        year++;
                    }
                }
                cout << setw(2) << setfill('0') << day << "-" << setw(2) << setfill('0') << month << "-" << year << endl;
            }
            else {
                while (day <= 0) {
                    month--;
                    if (month <= 0) {
                        month = month + 12;
                        year--;
                    }
                    day = day + daym[month];
                }
                cout << setw(2) << setfill('0') << day << "-" << setw(2) << setfill('0') << month << "-" << year << endl;
            }
        }
}
    return 0;
}
