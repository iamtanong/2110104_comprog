#include<bits/stdc++.h>
using namespace std;

int main() {

    int birth_date, birth_month, birth_year;
    cin >> birth_date >> birth_month >> birth_year;
    int now_date, now_month, now_year;
    cin >> now_date >> now_month >> now_year;

    birth_year -= 543;
    now_year -= 543;

    int day_passes = 0;
    day_passes += (now_year - birth_year -1) * 365;
    
    int day_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if((birth_year % 4 == 0 && birth_year % 100 != 0) || birth_year % 400 == 0) 
        day_per_month[1] = 29;
    else 
        day_per_month[1] = 28;
    
    for(int i=11; i>=birth_month; i--) {
        day_passes += day_per_month[i];
    }
    day_passes += day_per_month[birth_month-1] - birth_date + 1;

    if((now_year % 4 == 0 && now_year % 100 != 0) || now_year % 400 == 0) 
        day_per_month[1] = 29;
    else 
        day_per_month[1] = 28;

    for(int i=0; i<now_month; i++) {
        day_passes += day_per_month[i];
    }
    day_passes -= day_per_month[now_month-1] - now_date +1;

    double phy = sin((2*M_PI*day_passes)/23);
    double emo = sin((2*M_PI*day_passes)/28);
    double inte = sin((2*M_PI*day_passes)/33);

    cout << day_passes << " " << round(phy*100.0)/100.0 << " " << round(emo*100.0)/100.0<< " " << round(inte*100.0)/100.0;

    return 0;
}