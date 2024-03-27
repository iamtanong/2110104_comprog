#include<bits/stdc++.h>
using namespace std;

map<string, string> mp;

int main() {

    int num; cin >> num;
    cin.ignore();
    while(num--) {
        string s; getline(cin, s);
        string name, tel;
        bool ck = false;
        for(int i=0; i<s.length(); i++) {
            if(!ck && s[i+1] >= '0' && s[i+1] <= '9') {
                ck = true;
                continue;
            }

            if(!ck) name.push_back(s[i]);
            else tel.push_back(s[i]);
        }
        mp[name] = tel;
    }
    cin.ignore();
    cin >> num;
    cin.ignore();
    while(num--) {
        string str; getline(cin, str);
        cout << str << " --> ";

        bool ck = false;
        for(auto i=mp.begin(); i!=mp.end(); i++) {
            if(i->first == str) {
                cout << i->second;
                ck=true;
                break;
            }
            else if(i->second == str) {
                cout << i->first;
                ck=true;
                break;
            }
        }
        if(!ck) cout << "Not found";
        cout << endl;
    }

    return 0;
}