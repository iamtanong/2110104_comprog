#include<bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    for(int i=0; i<s.length(); i++) {
        if((i>0 && s[i] >= 'A' && s[i] <= 'Z')) {
            cout << ", ";
        }
        else if((i>0 &&s[i] >= '0' && s[i] <= '9') && ((s[i-1] >= 'A' && s[i-1] <= 'Z')||(s[i-1] >= 'a' && s[i-1] <= 'z'))) {
            cout << ", ";
        }
        else if((i>0 && s[i-1] >= '0' && s[i-1] <= '9') && ((s[i] >= 'A' && s[i-1] <= 'Z') || (s[i] >= 'a' && s[i <= 'z']))) {
            cout << ", ";
        }
        cout << s[i];
    }

    return 0;
}