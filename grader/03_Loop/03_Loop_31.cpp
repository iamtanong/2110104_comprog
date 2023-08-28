#include<bits/stdc++.h>
using namespace std;

int get_digit(long long num) {
    int digit = 0;
    while(num >= 0) {
        num /= 10;
        digit++;
        if(num <=0) break;
    }
    return digit;
}

long long ll_pow(int digit) {
    long long sum=1;
    if(digit <= 0) return 0;
    while(digit--) {
        sum *= 10;
    }
    return sum;
}

int main() {

    long long m, n;
    cin >> m >> n;
    
    int m_digit = get_digit(m);
    int n_digit = get_digit(n);

    long long diff = n-m+1;
    long long sum=0;
    for(int i=m_digit; i<=n_digit; i++) {
        sum += (ll_pow(i) - ll_pow(i-1))*i;
    }

    sum -=  ((m - ll_pow(m_digit-1))*m_digit);
    sum -= ((ll_pow(n_digit) - n-1)*n_digit);

    cout << sum;

    return 0;
}