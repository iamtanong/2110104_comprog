#include<bits/stdc++.h>
using namespace std;

set<string> winner, loser;

int main() {

    // int num; cin >> num;
    string win, lose;
    while(cin >> win >> lose) {
        
        winner.insert(win);
        loser.insert(lose);
    }
    for(auto i : loser) {
        winner.erase(i);
    }
    if(winner.size() == 0) cout << "None";
    else 
        for(auto i: winner) {
            cout << i <<" ";
        }

    return 0;
}