#include<bits/stdc++.h>
using namespace std;

map<string, vector<string>>mp;

int main() {

    int num; cin >> num;
    cin.ignore();
    while(num--) {
        string str;
        getline(cin, str);
        string song, singer;

        bool ck = false;
        for(int i=0; i<str.length(); i++) {
            if(str[i] == ',' && str[i+1] == ' ') {
                ck = true;
                i++;
                continue;
            }
            if(ck) singer += str[i];
            else song += str[i];
        }

        if(mp.find(song) != mp.end()) {
            mp[song].push_back(singer);
        }
        else {
            mp[song] = {singer};
        }
    }
    // cin.ignore();
    string s;
    getline(cin, s);

    string substr;
    for(int i=0; i<s.size(); i++) {
        if(s[i+1] == '\0' || (s[i] == ',' && s[i+1] == ' ')) {
            if(s[i+1] == '\0') {
                substr.push_back(s[i]);
            }

            cout << substr << " -> ";
            if(mp.find(substr) == mp.end()) {
                cout << "Not Found";
            }
            else {
                bool mt1 = false;
                for(auto i : mp[substr]) {
                    if(mt1) cout << ", ";
                    cout << i;
                    mt1 = true;
                }
            }
            cout << endl;

            substr.clear();
            i++;
        }
        if(s[i] == ' ' && s[i-1] == ',') continue;

        substr.push_back(s[i]);
    }

    return 0;
}