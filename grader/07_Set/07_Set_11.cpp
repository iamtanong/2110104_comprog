#include<bits/stdc++.h>
using namespace std;

multiset<char> ms;
multiset<char> ms2;
multiset<char>::iterator j;
multiset<char>::iterator k;

int main() {

    string a, b;
    getline(cin, a);
    getline(cin, b);
    for(auto i : a) {
        if(i == ' ') continue;
        
        if(i >= 'A' && i <= 'Z') {
            i = (i-'A') + 'a';
        }
        ms.insert(i);
    }
    for(auto i : b) {
       if(i == ' ') continue;
        
        if(i >= 'A' && i <= 'Z') {
            i = (i-'A') + 'a';
        }
        ms2.insert(i);
    }


    j = ms.begin();
    k = ms2.begin();
    bool ck = true;
    for(; j != ms.end(); j++, k++) {
        cout << *j << " " << *k << endl;
        if(*j != *k) {
            ck = false;
            break;
        }
    }
    if(ck && ms.size() == ms2.size()) cout << "YES";
    else cout << "NO";

    return 0;
}