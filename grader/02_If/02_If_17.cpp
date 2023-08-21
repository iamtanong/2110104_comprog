#include<bits/stdc++.h>
using namespace std;

int main() {

    int w; cin >> w;

    if(w <= 100) cout << 18;
    else if(w <= 250) cout << 22;
    else if(w <= 500) cout << 28;
    else if(w <= 1000) cout << 38;
    else if(w <= 2000) cout << 58;
    else cout << "Reject";

    return 0;
}