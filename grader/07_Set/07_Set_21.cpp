#include<bits/stdc++.h>
using namespace std;

set<int> s;

int main() {

    int k; cin >> k;
    int num;
    int cnt = 0;
    while(cin >> num) {
        if(num > k) continue;
        bool ck = false;
        for(auto i : s) {
            if(i + num == k) {
                ck = true;
                cnt++;
                s.erase(i);
                break;
            }
        }
        if(!ck) s.insert(num);
    }
    cout << cnt;

    return 0;
}