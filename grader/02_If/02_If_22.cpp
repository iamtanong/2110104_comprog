#include<bits/stdc++.h>
using namespace std;

int main() {

    int date, month, year; cin >> date >> month >> year;
    year -= 543;

    int day_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if((year % 4 == 0 && year % 100 != 0) || year%400 == 0) {
        day_per_month[1] = 29;
    }
    int the_date = 0;
    for(int i=0; i< month-1; i++) {
        the_date += day_per_month[i];
    }
    the_date += date;
    cout << the_date;

    return 0;
}