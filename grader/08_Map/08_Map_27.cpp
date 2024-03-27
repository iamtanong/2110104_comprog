#include<bits/stdc++.h>
using namespace std;

map<int, vector<string>> mp;
map<string, int> mp2;

void ins_mp() {
    int j=0;
    for(int i=0; i<=9; i++) {
        if(i == 0) mp[0] = {" "};
        if(i == 1 || i == 0) continue;

        vector<string> vec;

        for(int k=0;k < 4; k++) {
            if(k==3 && !(i == 7 || i == 9)) break;

            string str = "";
            str.push_back('a' + j);
            vec.push_back(str);

            mp[i] = vec;
            j++;
        }
    }
}

void ins_mp2() {
    for(auto i = mp.begin(); i != mp.end(); i++) {
        int k=0;
        for(int j=0; j<i->second.size(); j++) {
            k += i->first;
            mp2[i->second[j]] = k;
            k*=10;
        }
    }
}

int main() {
    
    ins_mp();
    ins_mp2();

    string line;
    while(getline(cin, line)) {

        // * first: mode , second: text OR num
        string mode, str;

        bool ck = false;
        for(int i=0; i<line.size(); i++) {
            if(line[i] == ' ' && !ck) {
                ck = true;
                continue;
            }

            if(!ck) {
                mode.push_back(line[i]);
            }
            if(ck) {
                str += line[i];
            }
        }


        if(mode == "T2K") {
            cout << ">>> ";
            vector<int> vec;
            for(int i=0; i<str.size(); i++) {
                if( !( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || str[i] == ' ') ) {
                    continue;
                }

                char c = '\0';
                if(str[i] >= 'A' && str[i] <= 'Z') c =( str[i] - 'A') + 'a';
                else c = str[i];

                string s = "";
                s.push_back(c);
                if(mp2.find(s) != mp2.end()) {
                    vec.push_back(mp2[s]);
                }
            }
            for(auto i : vec) {
                cout << i << " ";
            }
        }
        else if(mode == "K2T") {
            cout << ">>> ";

            string the_text;
            string num_str;
            
            for(int i=0; i< str.size(); i++) {
                if(str[i] == ' ') continue;

                if(str[i+1] == ' ' || str[i+1] == '\0') {
                    num_str.push_back(str[i]);

                    int pin = num_str[0] - '0';
                    if(mp.find(pin) != mp.end()) {
                        the_text.append(mp[pin][num_str.size()-1]);
                    }

                    num_str.clear();
                }
                else {
                    num_str.push_back(str[i]);
                }
            }
            cout << the_text << endl;
        }

        cout << endl;
    }


    return 0;
}