#include<bits/stdc++.h>
using namespace std;

map<string, string> mp;

int main() {

    int num; cin >> num;
    while(num--) {
        string name, nickname;
        cin >> name >> nickname;

        mp[name] = nickname;
    }
    cin >>num;
    while(num--) {
        string s; cin >> s;
        bool ck = false;
        for(auto i=mp.begin(); i != mp.end(); i++) {
            if(i->first == s) {
                ck = true;
                cout << i->second << endl;
                break;
            }
            else if(i->second == s) {
                ck=true;
                cout << i->first << endl;
                break;
            }
        }
        if(!ck) cout <<"Not found" << endl;
    }

    return 0;
}