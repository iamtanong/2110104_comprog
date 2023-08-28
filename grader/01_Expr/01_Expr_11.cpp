#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n==1) return 1;
    return n*factorial(n-1);
}

int main() {

    // cout << 3.21681;
    cout << (M_PI - double(factorial(10) / pow(8, 8)) + pow(log(9.7), (7 / sqrt(71)) - double(sin(double(40 * M_PI)/180))) ) / double(pow(1.2, pow(2.3, 1.0/3.0) ));
    

    return 0;
}   