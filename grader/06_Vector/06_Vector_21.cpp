#include<bits/stdc++.h>
using namespace std;

vector<string> vec;

int main() {

    string s; cin >> s;
    string x = s+'$';

    for(int i=0; i<x.length(); i++) {
        vec.push_back(x);

        char tmp = x[0];
        for(int j=0; j<x.length()-1; j++) {
            x[j] = x[j+1];
        }
        x[x.length()-1] = tmp;
    }

    sort(vec.begin(), vec.end());

    for(auto s: vec) cout << s[s.length()-1];

    return 0;
}