#include<bits/stdc++.h>
using namespace std;

int main() {

    string a,b;
    cin >> a;
    int sum_digit = 0;
    for(int i=0; i<12; i++) {
        if((i==1 || i==5) || i==10) b += "-";
        b += a[i];
        sum_digit += ((a[i]-'0') * (13-i));
    }
    sum_digit %= 11;
    int last_digit = (11 - sum_digit) %10;
    char c = last_digit+48;

    b = b + "-" + c;
    cout << b;
    
    return 0;
}