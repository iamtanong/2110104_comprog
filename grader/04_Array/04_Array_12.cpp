#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int num; cin >> num;
    while(num--) {
        string s; cin >> s;
        string db[2][10] = { {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"},
                             {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"} };

        bool ck = false;
        for(int i=0; i<2; i++) {
            for(int j=0; j<10; j++) {
                if(s == db[i][j]) {
                    cout << db[!i][j] << endl;
                    ck = true;
                    break;
                }
            }
            if(ck) break;
        }
        if(!ck) cout << "Not found" << endl;
    }

    return 0;
}