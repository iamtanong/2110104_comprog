#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> vec;
vector<string> caller;

int mem[5][5];

int main() {

    // char bingo[5];
    // for(int i=0; i<5; i++) cin >> bingo[i];
    memset(mem, 0, sizeof(mem));

    for(int i=0; i<5; i++) {
        vector<int> null_vec;
        vec.push_back(null_vec);
        for(int j=0; j<5; j++) {
            string num; cin >> num;
            if(num == "*") {
                vec[i].push_back(-1);
            }
            else {
                vec[i].push_back(stoi(num));
            }
        }
    }

    string s;
    while(cin >> s) {
        char row = s[0];
        int col = (s.length() > 1) ? ((s[1]-'0')*10) + (s[2]-'0') : s[1]-'0';

        
    }

    for(auto i: vec) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }


    return 0;
}