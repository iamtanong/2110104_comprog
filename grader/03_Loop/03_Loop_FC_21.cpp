#include<bits/stdc++.h>
using namespace std;

int main() {

    double p; cin >> p;

    double t=1;
    double k;
    for(k=1; 1; k++) {
        t = ( t*(365-(k-1) ) ) / 365;

        if(1-t >= p) {
            break;
        }
    }
    cout << k;

    return 0;
}