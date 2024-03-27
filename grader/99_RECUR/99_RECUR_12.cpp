#include<bits/stdc++.h>
using namespace std;

long long powmod(int a, long long k, int m) {
    if(k == 0) return 1;
    if(k % 2==0) return (long long) pow(powmod(a, k/2, m), 2) %m;
    return (long long) (a * pow(powmod(a, k/2, m), 2) )%m;
}

int main() {

    int a, m;
    long long k;
    cin >> a >> k >> m;
    cout << powmod(a, k, m);

    return 0;
}