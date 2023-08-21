#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n==1) return 1;
    return n*factorial(n-1);
}

int main() {

    // cout << 3.21681;
    cout << factorial(5);

    return 0;
}   