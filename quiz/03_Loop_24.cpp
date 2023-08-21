#include<bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    int sum=0;
    for(int i=0; i<s.length(); i++) {
        if(i==0) {
            cout << s[i] << " ";
            sum = 0;
        }
        else if(s[i] != s[i-1]) {
            cout << sum << " " << s[i] << " ";
            sum = 0;
        }
        sum++;
        
    }
    cout << sum;

    return 0;
}