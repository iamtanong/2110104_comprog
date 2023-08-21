#include<bits/stdc++.h>
using namespace std;

double print(long long num) {
    return round(num *100)/100;
}

int main() {

    long long num; cin >> num;

    if(num < 1000) cout << print(num);
    else if(num < 10000) cout << round((num/1000.0)*10)/10.0 << "K";
    else if (num < 1000000) cout << round(num/1000.0) << "K";

    else if (num < 10000000) cout << round((num/1000000.0)*10)/10.0 << "M";
    else if (num < 1000000000) cout << round(num/1000000.0) << "M";

    else if (num < 10000000000) cout << round((num/1000000000.0)*10)/10.0 << "B";
    else if (num >= 10000000000) cout << round(num/1000000000.0) << "B";

    return 0;
}