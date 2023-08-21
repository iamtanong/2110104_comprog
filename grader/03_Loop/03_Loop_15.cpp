#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s);
    
    bool ck = false;

    for(auto i : s) {
        if(i == '[') cout << '(';
        else if(i == ']') cout << ')';
        else if(i == '(') cout << '[';
        else if(i == ')') cout << ']';
        else cout << i;
    }

    return 0;
}