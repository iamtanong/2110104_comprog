#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;
    
    if(num > 0) cout << "positive";
    else if(num < 0) cout << "negative";
    else cout << "zero";

    cout << "\n";

    if(num%2 == 0) cout << "even";
    else cout << "odd";

    return 0;
}